import IDA decompiler, ida_funcs
import json

EA = 0x100193810
OUT_PATH = "/Volumes/Work/internal-history//raw/aimami/1.2.3/macos-arm64/commands/relay/ida/pseudocode/fetch_relay_models_draft_0x100193810.recovered.c"

result = {"ok": False, "ea": hex(EA)}
try:
    func = ida_funcs.get_func(EA)
    if func is None:
        result["error"] = "no func at ea"
    else:
        result["func_start"] = hex(func.start_ea)
        result["func_end"] = hex(func.end_ea)
        if not IDA decompiler.init_IDA decompiler_plugin():
            result["error"] = "init_IDA decompiler_plugin failed"
        else:
            cfunc = IDA decompiler.decompile(func)
            if cfunc is None:
                result["error"] = "decompile returned None"
            else:
                text = str(cfunc)
                with open(OUT_PATH, "w") as f:
                    f.write(text)
                result["ok"] = True
                result["chars"] = len(text)
                result["out_path"] = OUT_PATH
                result["braces_open"] = text.count("{")
                result["braces_close"] = text.count("}")
except Exception as e:
    result["error"] = repr(e)

print(json.dumps(result))
