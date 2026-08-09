// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x140b9d620  size: 0x15d  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   Small (0x15d) helper with no distinctive string refs beyond the module-path panic-location comment
//   -- too small/generic to name precisely; likely Drop glue or a small field accessor used somewhere in
//   the proxy_server module.
//
// Referenced strings/symbols:
//   0x140332910  sub_140332910
//   0x1416c3400  sub_1416C3400
//   0x141788198  off_141788198
//   0x1416c3420  sub_1416C3420
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x1416c2d31  sub_1416C2D31
//   0x1417a1008  off_1417A1008
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140B9D620(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  _QWORD *v14; // rax

  if ( *(_QWORD *)(a2 + 32) ) /*0x140b9d63d*/
  {
    v6 = *(__int64 **)(a2 + 40); /*0x140b9d644*/
    if ( v6 != *(__int64 **)(a2 + 56) ) /*0x140b9d64c*/
    {
      *(_QWORD *)(a2 + 40) = v6 + 4; /*0x140b9d652*/
      v7 = *v6; /*0x140b9d656*/
      if ( *v6 ) /*0x140b9d656*/
      {
        v8 = v6[3]; /*0x140b9d65e*/
        *(_QWORD *)a1 = -1; /*0x140b9d662*/
        *(_QWORD *)(a1 + 8) = v7; /*0x140b9d669*/
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(v6 + 1); /*0x140b9d671*/
        *(_QWORD *)(a1 + 32) = v8; /*0x140b9d675*/
        return a1; /*0x140b9d679*/
      }
    }
    sub_140332910(a2 + 32); /*0x140b9d686*/
    *(_QWORD *)(a2 + 32) = 0; /*0x140b9d690*/
  }
  if ( *(_DWORD *)a2 == 1 ) /*0x140b9d69a*/
  {
    if ( *(_BYTE *)(a2 + 24) ) /*0x140b9d6a0*/
    {
      if ( *(_BYTE *)(a2 + 24) == 1 ) /*0x140b9d76d*/
        sub_1416C3400(&off_141788198, a2, a3, a4); /*0x140b9d76f*/
      sub_1416C3420(&off_141788198, a2, a3, a4); /*0x140b9d776*/
    }
    v9 = *(_QWORD *)(a2 + 8); /*0x140b9d6ac*/
    v10 = *(_QWORD *)(a2 + 16); /*0x140b9d6b0*/
    *(_BYTE *)(a2 + 24) = 1; /*0x140b9d6b4*/
    *(_QWORD *)a2 = 0; /*0x140b9d6b8*/
    nullsub_1(a1); /*0x140b9d6c7*/
    v11 = (_QWORD *)sub_140001650(16, 8); /*0x140b9d6d6*/
    if ( !v11 ) /*0x140b9d6de*/
      sub_1416C2D31(8, 16); /*0x140b9d749*/
    v13 = v11; /*0x140b9d6e0*/
    *v11 = v9; /*0x140b9d6e3*/
    v11[1] = v10; /*0x140b9d6e6*/
    nullsub_1(v12); /*0x140b9d6f9*/
    v14 = (_QWORD *)sub_140001650(16, 8); /*0x140b9d708*/
    if ( !v14 ) /*0x140b9d710*/
      sub_1416C2D31(8, 16); /*0x140b9d75b*/
    *v14 = v13; /*0x140b9d712*/
    v14[1] = &off_1417A1008; /*0x140b9d715*/
    *(_QWORD *)a1 = -2; /*0x140b9d719*/
    *(_QWORD *)(a1 + 8) = v14; /*0x140b9d720*/
    *(_QWORD *)(a1 + 16) = &off_1417A1008; /*0x140b9d724*/
  }
  else
  {
    *(_QWORD *)a1 = -3; /*0x140b9d72a*/
  }
  return a1; /*0x140b9d734*/
}
