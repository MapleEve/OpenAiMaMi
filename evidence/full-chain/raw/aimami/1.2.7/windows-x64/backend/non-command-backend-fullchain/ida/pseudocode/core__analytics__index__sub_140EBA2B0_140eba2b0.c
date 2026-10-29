// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140eba2b0 | name sub_140EBA2B0
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EBA2B0(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // r14
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int128 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h]

  v20 = -2;
  v6 = sub_14167F170(a1);
  if ( *(_BYTE *)(v6 + 16) == 1 )
  {
    v11 = *(_QWORD *)v6;
    v12 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v16 = v6;
    v11 = sub_141696260(v8, v7, v9, v10);
    v6 = v16;
    *(_QWORD *)v16 = v11;
    *(_QWORD *)(v16 + 8) = v12;
    *(_BYTE *)(v16 + 16) = 1;
  }
  *(_QWORD *)v6 = v11 + 1;
  v18 = *(&off_141A56DB0 + 1);
  v17 = off_141A56DB0;
  *(_QWORD *)&v19 = v11;
  *((_QWORD *)&v19 + 1) = v12;
  if ( a3 != a2 )
  {
    LOBYTE(v10) = 1;
    sub_141930360(&v17, (unsigned __int64)(a3 - a2) >> 6, &v19, v10);
  }
  result = sub_1402A4B80(a2, a3, &v17);
  v14 = v17;
  v15 = v18;
  a1[2] = v19;
  a1[1] = v15;
  *a1 = v14;
  return result;
}
