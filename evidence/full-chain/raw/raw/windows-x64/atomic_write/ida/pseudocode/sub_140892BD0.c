// module: core::relay::atomic_write (codexmate_lib::core::relay::atomic_write)
// source (embedded panic Location): src\core\relay\atomic_write.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x140892bd0  size: 0x124  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// No destructive side effects (no remove/DELETE/truncate/kill). Pure
// conditional-log + drop/cleanup helper called at the end of the atomic
// write function (sub_1408726C0) on both success and failure paths, and
// also directly used as the failure teardown target inline.
//
// Behavior summary:
//   sub_140892BD0(a1) takes a pointer to a struct that appears to be the
//   temp-path OsString/CString wrapper built by sub_1408726C0's v38 buffer,
//   where offset+32 holds a bool flag ("this temp path is populated and
//   should be logged/considered on cleanup" — i.e. v39 in the caller).
//
//   If the flag byte at (a1+32) == 1:
//     - reads two qwords at (a1+8) and (a1+16) — the temp path's
//       (ptr, len) pair.
//     - calls sub_141485EF0(ptr, len) — likely a "does this path still
//       exist on disk?" / metadata-stat check (fits: after a successful
//       atomic rename the temp file no longer exists at its temp location,
//       so this is checking "did the temp file get left behind?").
//     - if that returns non-null (v3, presumably Some(Metadata) or an
//       io::Result indicating existence), stores it and calls
//       sub_140841290(v3) — a boolean predicate over that result (e.g.
//       "is this a regular file" or "metadata lookup succeeded"). If true:
//         - gated by the same global trace-level filter (off_141EC8D80>=2),
//           emits a structured tracing event via sub_1412C36A0 carrying the
//           temp path (ptr,len) and the stat-result pointer, tagged with
//           the same "codexmate_lib::core::relay::atomic_write" /
//           "src\core\relay\atomic_write.rs" Location metadata used
//           elsewhere in this module (line encoded as 0x29 = 41).
//           => This is almost certainly a WARNING-level trace event like
//              "temp file left behind after atomic write" / "leaked temp
//              file detected", logged for diagnostics — NOT an active
//              cleanup/delete of the leaked temp file. Confirms the
//              observation in sub_1408726C0's notes: on certain failure
//              paths the temp file is NOT actively unlinked by this code;
//              at most it is logged.
//       - always calls sub_140018650(&v7) to drop/deallocate the
//         temporary metadata/stat-result value regardless of the log gate.
//
//   If the flag byte at (a1+32) != 1, this function is a no-op (returns
//   immediately without touching the metadata check or logging).
//
// Return value: void.
//
// Referenced strings/symbols:
//   "codexmate_lib::core::relay::atomic_write" (module path)
//   "src\core\relay\atomic_write.rs" (panic::Location file, line ~41 for
//     this call site based on encoded line constant 0x29=41)

void __fastcall sub_140892BD0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rax
  _QWORD v4[12]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+88h] [rbp+8h] BYREF
  _QWORD v6[2]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v7; // [rsp+B8h] [rbp+38h] BYREF
  char v8; // [rsp+C7h] [rbp+47h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+48h]

  v9 = -2; /*0x140892be2*/
  if ( *(_BYTE *)(a1 + 32) == 1 ) /*0x140892bee*/
  {
    v1 = *(_QWORD *)(a1 + 8); /*0x140892bf4*/
    v2 = *(_QWORD *)(a1 + 16); /*0x140892bf8*/
    v3 = sub_141485EF0(v1, v2); /*0x140892c02*/
    if ( v3 ) /*0x140892c0a*/
    {
      v7 = v3; /*0x140892c10*/
      if ( (unsigned __int8)sub_140841290(v3) ) /*0x140892c17*/
      {
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140892c32*/
        {
          v6[0] = v1; /*0x140892c38*/
          v6[1] = v2; /*0x140892c3c*/
          v5[0] = v6; /*0x140892c44*/
          v5[1] = sub_14148F3A0; /*0x140892c4f*/
          v5[2] = &v7; /*0x140892c57*/
          v5[3] = sub_141490720; /*0x140892c62*/
          v4[0] = 0; /*0x140892c66*/
          v4[1] = aCodexmateLibCo_33; /*0x140892c75*/
          v4[2] = 40; /*0x140892c79*/
          v4[3] = 0; /*0x140892c81*/
          v4[4] = aSrcCoreRelayAt; /*0x140892c90*/
          v4[5] = 30; /*0x140892c94*/
          v4[6] = 2; /*0x140892c9c*/
          v4[7] = aCodexmateLibCo_33; /*0x140892ca4*/
          v4[8] = 40; /*0x140892ca8*/
          v4[9] = 0x2900000001LL; /*0x140892cba*/
          v4[10] = &unk_141799688; /*0x140892cc5*/
          v4[11] = v5; /*0x140892ccd*/
          sub_1412C36A0(&v8, v4); /*0x140892cd9*/
        }
      }
      sub_140018650(&v7); /*0x140892ce3*/
    }
  }
}

/* xrefs / helper table
0x141485ef0  sub_141485EF0        path metadata/existence probe (fs::symlink_metadata-style)
0x14148f3a0  sub_14148F3A0        tracing field formatter
0x141490720  sub_141490720        tracing field formatter
0x141798adb  aCodexmateLibCo_33   "codexmate_lib::core::relay::atomic_write"
0x141798abc  aSrcCoreRelayAt      "src\core\relay\atomic_write.rs"
0x141799688  unk_141799688        static tracing Metadata/Callsite for this warn event
0x1412c36a0  sub_1412C36A0        tracing event constructor/emit
0x141ec8d80  off_141EC8D80        global trace-level filter gate
0x140841290  sub_140841290        boolean predicate over metadata-probe result (exists && is_file?)
0x140018650  sub_140018650        drop/deallocate temporary metadata value

Called from:
  sub_1408726C0 (atomic write entry point, documented sibling file) — invoked
  unconditionally at its shared cleanup label LABEL_29, passing the
  temp-path buffer (v38) whose offset+32 flag (v39) tracks whether a temp
  file path was actually allocated for this call.
*/
