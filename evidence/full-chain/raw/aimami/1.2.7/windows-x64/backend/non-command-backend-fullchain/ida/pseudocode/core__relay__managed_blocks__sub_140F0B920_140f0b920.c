// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f0b920 | name sub_140F0B920
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F0B920(_OWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rdi
  _OWORD v16[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v17; // [rsp+40h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-30h]
  __int128 v19; // [rsp+60h] [rbp-20h] BYREF
  __int128 v20; // [rsp+70h] [rbp-10h]
  __int128 v21; // [rsp+80h] [rbp+0h]
  char v22; // [rsp+97h] [rbp+17h]
  __int64 v23; // [rsp+98h] [rbp+18h]

  v23 = -2;
  sub_140F08C70((__int64)&v19, a2, a3, a4);
  *(_QWORD *)&v17 = *((_QWORD *)&v19 + 1);
  *((_QWORD *)&v17 + 1) = *((_QWORD *)&v19 + 1);
  *(_QWORD *)&v18 = v19;
  *((_QWORD *)&v18 + 1) = *((_QWORD *)&v19 + 1) + 24 * v20;
  v22 = 1;
  v5 = sub_14167F170(*((_QWORD *)&v19 + 1));
  if ( *(_BYTE *)(v5 + 16) == 1 )
  {
    v10 = *(_QWORD *)v5;
    v11 = *(_QWORD *)(v5 + 8);
  }
  else
  {
    v22 = 1;
    v15 = v5;
    v10 = sub_141696260(v7, v6, v8, v9);
    v5 = v15;
    *(_QWORD *)v15 = v10;
    *(_QWORD *)(v15 + 8) = v11;
    *(_BYTE *)(v15 + 16) = 1;
  }
  *(_QWORD *)v5 = v10 + 1;
  v20 = *(&off_141A56DB0 + 1);
  v19 = off_141A56DB0;
  *(_QWORD *)&v21 = v10;
  *((_QWORD *)&v21 + 1) = v11;
  v16[1] = v18;
  v16[0] = v17;
  result = sub_1403952F0(v16, &v19);
  v13 = v19;
  v14 = v20;
  a1[2] = v21;
  a1[1] = v14;
  *a1 = v13;
  return result;
}
