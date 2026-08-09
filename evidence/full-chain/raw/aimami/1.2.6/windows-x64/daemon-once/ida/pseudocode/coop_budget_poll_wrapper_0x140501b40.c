// sub_140501B40 @ 0x140501b40 | windows-x64 1.2.6 | role: tokio coop::budget poll wrapper (generic runtime glue,
// NOT single-flight/mutex business logic). Reads per-task poll budget from TLS via sub_141395FD0
// (NtCurrentTeb()->ThreadLocalStoragePointer[TlsIndex]+432), decrements it, and if exhausted calls
// sub_141396A10(waker) to yield (returns sentinel -3 = Pending-equivalent). Otherwise dispatches the real inner
// future's poll via an indirect vtable-shaped call `(*(*a2+16)+24)(*a2, v14, *a3)`, whose target could not be
// statically resolved in this pass (data at off_1417EBF48/off_1417EBF30 are non-function blobs per lookup_funcs).
// Called from exactly 1 code site in this binary (sub_140D81EC0, the run_daemon_once tauri dispatcher); 2 data
// xrefs (0x141c28aa8, 0x142004ed4) are vtable slot storage, not additional call sites.
// verbatim Hex-Rays decompile() output, IDA MCP win, 2026-08-06
_QWORD *__fastcall sub_140501B40(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _BYTE *v6; // rax
  int v7; // ecx
  char v8; // r14
  char v9; // r15
  _BYTE *v10; // r14
  char v11; // cl
  char v12; // r12
  _QWORD v14[21]; // [rsp+28h] [rbp-58h] BYREF
  __int16 v15; // [rsp+D0h] [rbp+50h] BYREF
  char v16; // [rsp+D2h] [rbp+52h]
  _BYTE v17[2]; // [rsp+D5h] [rbp+55h] BYREF
  char v18; // [rsp+D7h] [rbp+57h]
  __int64 v19; // [rsp+D8h] [rbp+58h]

  v19 = -2; /*0x140501b59*/
  v14[0] = -3; /*0x140501b6a*/
  v18 = 1; /*0x140501b72*/
  v6 = (_BYTE *)sub_141395FD0(); /*0x140501b76*/
  v7 = (unsigned __int8)v6[72]; /*0x140501b7c*/
  if ( v7 != 1 ) /*0x140501b83*/
  {
    if ( v7 == 2 ) /*0x140501b88*/
    {
      v8 = 0; /*0x140501b8a*/
      v9 = 0; /*0x140501b8d*/
      goto LABEL_11; /*0x140501b90*/
    }
    v18 = 1; /*0x140501b92*/
    v10 = v6; /*0x140501ba0*/
    sub_141533590(v6, sub_14083AE30); /*0x140501ba3*/
    v6 = v10; /*0x140501ba9*/
    v10[72] = 1; /*0x140501bac*/
  }
  v8 = v6[68]; /*0x140501bb1*/
  v9 = v6[69]; /*0x140501bb6*/
  v11 = v9; /*0x140501bbb*/
  if ( v8 != 1 ) /*0x140501bc2*/
    goto LABEL_8; /*0x140501bc2*/
  if ( v9 ) /*0x140501bc7*/
  {
    v11 = v9 - 1; /*0x140501bcd*/
LABEL_8:
    v6[69] = v11; /*0x140501bd1*/
    v12 = 0; /*0x140501bd4*/
    goto LABEL_9; /*0x140501bd4*/
  }
  v18 = 1; /*0x140501c60*/
  sub_141396A10(a3); /*0x140501c67*/
  v12 = 1; /*0x140501c6d*/
  v9 = 0; /*0x140501c70*/
LABEL_9:
  v16 = 0; /*0x140501bd7*/
  v15 = 0; /*0x140501bdb*/
  v18 = 1; /*0x140501be5*/
  sub_1413972B0((char *)&v15 + 1); /*0x140501be9*/
  if ( v12 ) /*0x140501bf2*/
  {
    *a1 = -3; /*0x140501bf4*/
    sub_1404932F0(v14); /*0x140501bff*/
    return a1; /*0x140501c04*/
  }
LABEL_11:
  v17[0] = v8; /*0x140501c06*/
  v17[1] = v9; /*0x140501c0a*/
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*a2 + 16LL) + 24LL))(*a2, v14, *a3); /*0x140501c1c*/
  if ( v14[0] != -3 ) /*0x140501c25*/
    v17[0] = 0; /*0x140501c27*/
  sub_14172B820(a1, v14, 168); /*0x140501c38*/
  v18 = 0; /*0x140501c3d*/
  sub_1413972B0(v17); /*0x140501c45*/
  return a1; /*0x140501c4e*/
}

// refs: sub_141395FD0 (TLS getter, TEB+432), sub_141533590, sub_14083AE30, sub_141396A10 (waker wake), sub_1413972B0,
// sub_1404932F0, sub_14172B820
// supporting fn sub_141395FD0:
__int64 sub_141395FD0()
{
  return *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 432LL; /*0x141395fea*/
}
