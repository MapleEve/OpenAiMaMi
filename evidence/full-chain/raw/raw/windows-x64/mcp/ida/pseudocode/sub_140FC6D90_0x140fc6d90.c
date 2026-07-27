// module: codexmate_lib/core/mcp
// addr: 0x140fc6d90
// name: sub_140FC6D90
// win 1.2.1 | module src/core/mcp.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140FC6D90(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-38h]
  __int128 v9; // [rsp+38h] [rbp-28h]
  __int128 v10; // [rsp+48h] [rbp-18h]

  *(_QWORD *)&v8 = -1;
  *((_QWORD *)&v9 + 1) = -1;
  v3 = sub_141470CD0(a1, a2);
  v4 = v3;
  if ( *(_BYTE *)(v3 + 16) == 1 )
  {
    v5 = *(_QWORD *)v3;
    v6 = *(_QWORD *)(v4 + 8);
  }
  else
  {
    v5 = sub_141486EF0();
    *(_QWORD *)v4 = v5;
    *(_QWORD *)(v4 + 8) = v6;
    *(_BYTE *)(v4 + 16) = 1;
  }
  *(_QWORD *)v4 = v5 + 1;
  *(_OWORD *)(a1 + 144) = v10;
  *(_OWORD *)(a1 + 128) = v9;
  *(_OWORD *)(a1 + 112) = v8;
  *(_WORD *)(a1 + 160) = 0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&off_14182C1B0;
  *(_OWORD *)(a1 + 80) = xmmword_14182C1C0;
  *(_QWORD *)(a1 + 96) = v5;
  *(_QWORD *)(a1 + 104) = v6;
  return a1;
}