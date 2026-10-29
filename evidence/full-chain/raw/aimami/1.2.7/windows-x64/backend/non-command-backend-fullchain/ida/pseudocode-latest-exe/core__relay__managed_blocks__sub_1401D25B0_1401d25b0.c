// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1401d25b0 | successor of pre-update 0x1401abc50 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.766, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int128 *__fastcall sub_1401D25B0(__int128 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-60h] BYREF
  __int128 v13; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+70h] [rbp-10h]
  char v18; // [rsp+D0h] [rbp+50h]
  _QWORD v19[3]; // [rsp+D8h] [rbp+58h] BYREF
  _QWORD *v20; // [rsp+F0h] [rbp+70h]
  __int64 v21; // [rsp+F8h] [rbp+78h]
  __int64 v22; // [rsp+100h] [rbp+80h]
  char v23; // [rsp+10Fh] [rbp+8Fh]
  __int64 v24; // [rsp+110h] [rbp+90h]

  v24 = -2;
  v22 = a2[25];
  v21 = a2[26];
  v3 = a2[27];
  v20 = a2;
  sub_1419234B0(&v12, a2 + 3, 176);
  v18 = 0;
  v23 = 1;
  sub_140065960(a1, &v12);
  if ( *(_DWORD *)a1 == 2 )
  {
    if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v21, v22, 1);
  }
  else
  {
    v17 = a1[5];
    v16 = a1[4];
    v4 = *a1;
    v5 = a1[1];
    v6 = a1[2];
    v15 = a1[3];
    v14 = v6;
    v13 = v5;
    v12 = v4;
    v19[0] = v22;
    v19[1] = v21;
    v19[2] = v3;
    sub_141205BB0(&v12, v19);
    a1[5] = v17;
    a1[4] = v16;
    v7 = v12;
    v8 = v13;
    v9 = v14;
    a1[3] = v15;
    a1[2] = v9;
    a1[1] = v8;
    *a1 = v7;
  }
  v10 = v20[28];
  if ( v10 > 0 )
    sub_140001660(v20[29], v10, 1);
  return a1;
}
