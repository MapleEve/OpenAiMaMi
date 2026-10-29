// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x14094fa70 | successor of pre-update 0x140c271d0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.936, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_14094FA70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  double result; // xmm0_8
  _OWORD v15[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v17; // [rsp+70h] [rbp-10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+0h]
  __int64 v19; // [rsp+88h] [rbp+8h]
  __int64 v20; // [rsp+90h] [rbp+10h] BYREF
  __int64 v21; // [rsp+98h] [rbp+18h]
  _QWORD *v22; // [rsp+A0h] [rbp+20h]
  _QWORD *v23; // [rsp+A8h] [rbp+28h]
  __int128 v24; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v25; // [rsp+C0h] [rbp+40h]
  __int64 v26; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+58h]
  __int64 v28; // [rsp+E0h] [rbp+60h]
  char v29; // [rsp+E8h] [rbp+68h]
  _QWORD *v30; // [rsp+F0h] [rbp+70h]
  char v31; // [rsp+FFh] [rbp+7Fh]
  __int64 v32; // [rsp+100h] [rbp+80h]

  v32 = -2;
  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    sub_140A2DA60(&v26, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 976);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 968);
      nullsub_1(a1, a2);
      v8 = sub_140001650(v6, 1);
      if ( !v8 )
        sub_14196B2DB(1, v6);
      v26 = v6;
      v27 = v8;
      sub_1419234B0(v8, v7, v6);
      v28 = v6;
    }
    else
    {
      v26 = 0;
      v27 = 1;
      v28 = 0;
    }
    v29 = *(_BYTE *)(a2 + 984);
  }
  *(_QWORD *)&v17 = 0;
  v18 = 0;
  nullsub_1(a1, a2);
  v9 = (_QWORD *)sub_140001650(8, 1);
  if ( !v9 )
    sub_14196B2DB(1, 8);
  *v9 = 0x7362446574617473LL;
  v16[0] = 8;
  v30 = v9;
  v16[1] = v9;
  v16[2] = 8;
  v10 = 32LL * *(_QWORD *)(a2 + 1008);
  *(_QWORD *)&v24 = *(_QWORD *)(a2 + 1000);
  *((_QWORD *)&v24 + 1) = v24 + v10;
  *(_QWORD *)&v25 = a3;
  *((_QWORD *)&v25 + 1) = &v26;
  sub_140227DE0(&v20, &v24);
  v31 = 1;
  sub_1407B3D00(&v24, &v20);
  if ( (_BYTE)v24 == 0xFF )
  {
    *(_QWORD *)&v15[0] = *((_QWORD *)&v24 + 1);
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)v15,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5BE38);
  }
  v15[1] = v25;
  v15[0] = v24;
  v31 = 0;
  sub_140A68320(&v24, &v17, v16, v15);
  if ( (_BYTE)v24 != 0xFF )
    sub_140032FF0(&v24);
  v12 = v21;
  v23 = v22;
  v30 = nullptr;
  v19 = v21;
  while ( v23 != v30 )
  {
    v30 = (_QWORD *)((char *)v30 + 1);
    v13 = v12 + 32;
    sub_1401AB4D0(v12, v11);
    v12 = v13;
  }
  if ( v20 )
    sub_140001660(v21, 32 * v20, 8);
  *(_QWORD *)(a1 + 24) = v18;
  result = *(double *)&v17;
  *(_OWORD *)(a1 + 8) = v17;
  *(_BYTE *)a1 = 5;
  if ( v26 )
    return sub_140001660(v27, v26, 1);
  return result;
}
