"""
Server-side (IDA host) batch decompiler for the 36 framework-monomorphized
relay entry / dispatch / stream-driver functions identified by the
CENSUS-COMPLETENESS-SWEEP audit for AiMaMi 1.2.3 macos-arm64.

Writes full ida_hexrays pseudocode directly to the SMB share from the IDA
host's own mount point (/Volumes/Work/internal-history/C5CodexManager/...),
bypassing the ~1024-char MCP response-channel truncation that the plain
`decompile` tool call is subject to.

Runs via py_exec_file on 192.168.110.95. Writes a JSON manifest of
per-target results (ok/error, byte count, brace-balance check) to
_scripts/decompile_batch_20260724.result.json next to this script.
"""
import ida_hexrays
import ida_kernwin
import idc
import json
import os

BASE = "/Volumes/Work/internal-history/C5CodexManager/raw/aimami/1.2.3/macos-arm64/framework-monomorph"

TARGETS = [
    # group, addr, cleanname
    ("tauri-ipc-dispatch", "0x10012f740", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x100133cd0", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001370a0", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x10013a9b0", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x10013e6c0", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x10014e320", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x100153e30", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x10015c780", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001650f0", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x10018d110", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x100196550", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001985f0", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001a4be0", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001a9190", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001b2ec0", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001b90f0", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001be660", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001c72c0", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001c8740", "ipc_dispatch"),
    ("tauri-ipc-dispatch", "0x1001cd2d0", "ipc_dispatch"),
    # (0x100193810 already on disk per audit, not re-decompiled)
    ("axum-handlers", "0x100306350", "route_handler"),
    ("axum-handlers", "0x100308070", "route_handler"),
    ("axum-handlers", "0x1003081d0", "route_handler"),
    ("axum-handlers", "0x10030c940", "route_handler"),
    ("axum-handlers", "0x10030d360", "route_handler"),
    ("axum-handlers", "0x1003110f0", "route_handler"),
    ("axum-handlers", "0x100312070", "route_handler"),
    ("axum-handlers", "0x100312da0", "route_handler"),
    ("axum-handlers", "0x100313d20", "route_handler"),
    ("axum-handlers", "0x100315950", "route_handler"),
    ("axum-handlers", "0x100316be0", "route_handler"),
    ("axum-handlers", "0x100933b10", "oauth_callback_handler"),
    ("stream-drivers", "0x1008c8210", "translator_stream_driver"),
    ("stream-drivers", "0x1008c9e00", "translator_stream_driver"),
    ("stream-drivers", "0x10092b8c0", "translator_stream_driver"),
]

TRUNC_MARKERS = ["chars total]", "...[truncat", "[TRUNCATED", "response too large"]


def brace_balance_ok(text):
    depth = 0
    for ch in text:
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
    return depth == 0


def decompile_one(addr_str):
    ea = int(addr_str, 16)
    try:
        cf = ida_hexrays.decompile(ea)
    except Exception as e:
        return None, "decompile_exception: %r" % (e,)
    if cf is None:
        return None, "decompile_returned_none"
    try:
        text = str(cf)
    except Exception as e:
        return None, "str_exception: %r" % (e,)
    return text, None


def main():
    results = []
    for group, addr, cleanname in TARGETS:
        outdir = os.path.join(BASE, group, "ida", "pseudocode")
        os.makedirs(outdir, exist_ok=True)
        fname = "%s_%s.c" % (cleanname, addr)
        outpath = os.path.join(outdir, fname)

        text, err = decompile_one(addr)
        entry = {"group": group, "addr": addr, "cleanname": cleanname, "outpath": outpath}
        if err is not None:
            entry["status"] = "error"
            entry["error"] = err
            results.append(entry)
            continue

        n_lines = text.count("\n") + 1
        balanced = brace_balance_ok(text)
        trunc_hit = [m for m in TRUNC_MARKERS if m in text]

        header = (
            "/* addr=%s cleanname=%s group=%s\n"
            " * decompiled via py_exec_file server-side ida_hexrays.decompile\n"
            " * n_lines=%d brace_balanced=%s truncation_markers=%s\n"
            " */\n"
        ) % (addr, cleanname, group, n_lines, balanced, trunc_hit)

        with open(outpath, "w") as f:
            f.write(header)
            f.write(text)

        entry["status"] = "ok"
        entry["n_lines"] = n_lines
        entry["n_bytes"] = len(text)
        entry["brace_balanced"] = balanced
        entry["truncation_markers"] = trunc_hit
        results.append(entry)

    manifest_path = os.path.join(BASE, "_scripts", "decompile_batch_20260724.result.json")
    with open(manifest_path, "w") as f:
        json.dump(results, f, indent=2)

    ok = sum(1 for r in results if r["status"] == "ok")
    err = sum(1 for r in results if r["status"] == "error")
    print("decompile_batch done: ok=%d error=%d total=%d manifest=%s" % (ok, err, len(results), manifest_path))


main()
