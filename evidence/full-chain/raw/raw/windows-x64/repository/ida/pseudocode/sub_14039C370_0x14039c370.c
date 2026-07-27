// module: codexmate_lib/core/repository
// addr: 0x14039c370
// name: sub_14039C370
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14039C370(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  __int64 result; // rax
  _OWORD v12[5]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+70h] [rbp-78h]
  _OWORD v14[5]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v15; // [rsp+C8h] [rbp-20h]

  sub_141486710(v14, a2, a3);
  if ( LODWORD(v14[0]) == 2 )
  {
    *((_QWORD *)&v12[0] + 1) = *((_QWORD *)&v14[0] + 1);
    *(_QWORD *)&v12[0] = 2;
  }
  else
  {
    v12[0] = v14[0];
    v13 = v15;
    v12[4] = v14[4];
    v12[3] = v14[3];
    v12[2] = v14[2];
    v12[1] = v14[1];
    if ( *(_QWORD *)&v14[0] != 2 )
      return sub_140388C10(a1, a2, a3);
  }
  sub_140018650((char *)v12 + 8);
  LODWORD(v12[0]) = sub_141475580(v7, v6, v8, v9);
  DWORD1(v12[0]) = v10;
  sub_141475530(v14, v12, 3577643008LL, 27111902);
  if ( LOBYTE(v14[0]) )
    result = 0;
  else
    result = *((_QWORD *)&v14[0] + 1);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 8;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 15;
  *(_DWORD *)(a1 + 68) = 10;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = result;
  *(_DWORD *)(a1 + 88) = 4;
  *(_BYTE *)(a1 + 92) = 1;
  *(_QWORD *)a1 = -1;
  return result;
}