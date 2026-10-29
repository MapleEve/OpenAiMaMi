// win 1.2.7 | module src/core/mcp.rs | ea 0x1411ccb00 | name sub_1411CCB00
// win 1.2.7 | module src/core/mcp.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1411CCB00(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int128 v11; // [rsp+28h] [rbp-38h]
  __int128 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+48h] [rbp-18h]

  *(_QWORD *)&v11 = -1;
  *((_QWORD *)&v12 + 1) = -1;
  v2 = sub_14167F170(a1);
  v7 = v2;
  if ( *(_BYTE *)(v2 + 16) == 1 )
  {
    v8 = *(_QWORD *)v2;
    v9 = *(_QWORD *)(v7 + 8);
  }
  else
  {
    v8 = sub_141696260(v4, v3, v5, v6);
    *(_QWORD *)v7 = v8;
    *(_QWORD *)(v7 + 8) = v9;
    *(_BYTE *)(v7 + 16) = 1;
  }
  *(_QWORD *)v7 = v8 + 1;
  *(_OWORD *)(a1 + 144) = v13;
  *(_OWORD *)(a1 + 128) = v12;
  *(_OWORD *)(a1 + 112) = v11;
  *(_WORD *)(a1 + 160) = 0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&off_141AC8EB0;
  *(_OWORD *)(a1 + 80) = xmmword_141AC8EC0;
  *(_QWORD *)(a1 + 96) = v8;
  *(_QWORD *)(a1 + 104) = v9;
  return a1;
}
