// Function: sub_1405052C0 (generic "invoke registered apply-handler via task-local
// context, with typed Result sentinel handling" helper)
// EA: 0x1405052C0
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06
// Called from set_codex_no_account_slots (0x140d75ea0) as the persistence/apply
// leaf. Structurally near-identical in shape to sub_140504EE0 (the equivalent
// call site inside set_claude_web_search_compat), confirming this is a SHARED
// generic dispatch primitive parameterized by the vtable target passed in a2/a3,
// not a per-command bespoke implementation. The actual command-specific business
// logic (writing the no-account-slots config, honoring the "relaunch" flag) lives
// behind the vtable call at (*a2 + 16) + 24, which is data-driven and was not
// separately named/resolved in this pass (see manifest.json recovery_attempts).
_QWORD *__fastcall sub_1405052C0(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _BYTE *v6; // rax
  int v7; // ecx
  char v8; // r14
  char v9; // r15
  _BYTE *v10; // r14
  char v11; // cl
  char v12; // r12
  _QWORD v14[46]; // BYREF
  __int16 v15; // BYREF
  char v16;
  _BYTE v17[2]; // BYREF
  char v18;
  __int64 v19;

  v19 = -2;
  v14[0] = -3;
  v18 = 1;
  v6 = (_BYTE *)sub_141395FD0(); /*0x1405052fc*/  // task-local context accessor, generic
  v7 = (unsigned __int8)v6[72]; /*0x140505302*/
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v8 = 0;
      v9 = 0;
      goto LABEL_11;
    }
    v18 = 1;
    v10 = v6;
    sub_141533590(v6, sub_14083AE30); /*0x14050532f*/  // registers a waker/callback, generic async runtime glue
    v6 = v10;
    v10[72] = 1;
  }
  v8 = v6[68];
  v9 = v6[69];
  v11 = v9;
  if ( v8 != 1 )
    goto LABEL_8;
  if ( v9 )
  {
    v11 = v9 - 1;
LABEL_8:
    v6[69] = v11;
    v12 = 0;
    goto LABEL_9;
  }
  v18 = 1;
  sub_141396A10(a3); /*0x140505411*/  // generic task-local push
  v12 = 1;
  v9 = 0;
LABEL_9:
  v16 = 0;
  v15 = 0;
  v18 = 1;
  sub_1413972B0((char *)&v15 + 1); /*0x140505381*/  // generic task-local pop
  if ( v12 )
  {
    *a1 = -3;
    sub_140495050(v14); /*0x140505397*/  // generic cleanup
    return a1;
  }
LABEL_11:
  v17[0] = v8;
  v17[1] = v9;
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*a2 + 16LL) + 24LL))(*a2, v14, *a3); /*0x1405053ba*/  // <-- data-driven vtable call: the actual per-command apply/persist logic lives here (not resolved further this pass)
  if ( v14[0] != -3 )
    v17[0] = 0;
  sub_14172B820(a1, v14, 368); /*0x1405053d9*/
  v18 = 0;
  sub_1413972B0(v17); /*0x1405053ec*/
  return a1;
}

// refs:
// 0x141395fd0 sub_141395FD0 -> task-local context accessor (generic, seen widely across manager-backed commands)
// 0x141533590 sub_141533590 -> waker/callback registration (generic async runtime glue)
// 0x14083ae30 sub_14083AE30 -> callback function pointer target (not resolved this pass)
// 0x141396a10 / 0x1413972b0 -> task-local push/pop pair (generic)
// 0x140495050 sub_140495050 -> generic cleanup on early-return path
// vtable call at (*a2+16)+24 -> DATA-DRIVEN dispatch to the actual apply/persist
//   implementation for whichever command invoked this shared helper; NOT resolved
//   to a concrete address in this pass (out of the 4-target scope boundary; flagged
//   as a candidate for a future targeted pass if deeper persistence-layer proof is
//   required)
