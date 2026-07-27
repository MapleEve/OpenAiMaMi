// module: codexmate_lib/core/debug_bundle
// addr: 0x14071cfb0
// name: sub_14071CFB0
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14071CFB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 result; // rax
  _OWORD v15[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[3]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+78h] [rbp-8h]
  __int64 v19; // [rsp+80h] [rbp+0h]
  __int64 v20; // [rsp+88h] [rbp+8h] BYREF
  __int64 v21; // [rsp+90h] [rbp+10h]
  _QWORD *v22; // [rsp+98h] [rbp+18h]
  _QWORD *v23; // [rsp+A0h] [rbp+20h]
  __int128 v24; // [rsp+A8h] [rbp+28h] BYREF
  __int128 v25; // [rsp+B8h] [rbp+38h]
  __int64 v26; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v27; // [rsp+D0h] [rbp+50h]
  __int64 v28; // [rsp+D8h] [rbp+58h]
  char v29; // [rsp+E0h] [rbp+60h]
  _QWORD *v30; // [rsp+E8h] [rbp+68h]
  char v31; // [rsp+F7h] [rbp+77h]
  __int64 v32; // [rsp+F8h] [rbp+78h]

  v32 = -2;
  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    sub_140713CC0(&v26, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 976);
    if ( v6 < 0 )
    {
      v7 = 0;
      goto LABEL_4;
    }
    if ( v6 )
    {
      v8 = *(_QWORD *)(a2 + 968);
      nullsub_1(a1);
      v7 = 1;
      v9 = sub_140001650(v6, 1);
      if ( !v9 )
LABEL_4:
        sub_1416C2D4B(v7, v6);
      v26 = v6;
      v27 = v9;
      sub_141684120(v9, v8, v6);
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
  nullsub_1(a1);
  v10 = (_QWORD *)sub_140001650(8, 1);
  if ( !v10 )
    sub_1416C2D4B(1, 8);
  *v10 = 0x7362446574617473LL;
  v16[0] = 8;
  v30 = v10;
  v16[1] = v10;
  v16[2] = 8;
  v11 = 32LL * *(_QWORD *)(a2 + 1008);
  *(_QWORD *)&v24 = *(_QWORD *)(a2 + 1000);
  *((_QWORD *)&v24 + 1) = v24 + v11;
  *(_QWORD *)&v25 = a3;
  *((_QWORD *)&v25 + 1) = &v26;
  sub_140329670(&v20, &v24);
  v31 = 1;
  sub_140467C90(&v24, &v20);
  if ( (_BYTE)v24 == 0xFF )
  {
    *(_QWORD *)&v15[0] = *((_QWORD *)&v24 + 1);
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)v15,
      (unsigned int)&off_141789020,
      (__int64)&off_1417899F8);
  }
  v15[1] = v25;
  v15[0] = v24;
  v31 = 0;
  sub_140307860(&v24, &v17, v16, v15);
  if ( (_BYTE)v24 != 0xFF )
    sub_1400104F0(&v24);
  v12 = v21;
  v23 = v22;
  v30 = nullptr;
  v19 = v21;
  while ( v23 != v30 )
  {
    v30 = (_QWORD *)((char *)v30 + 1);
    v13 = v12 + 32;
    sub_1402C3260();
    v12 = v13;
  }
  if ( v20 )
    sub_140001660(v21, 32 * v20, 8);
  result = v18;
  *(_QWORD *)(a1 + 24) = v18;
  *(_OWORD *)(a1 + 8) = v17;
  *(_BYTE *)a1 = 5;
  if ( v26 )
    return sub_140001660(v27, v26, 1);
  return result;
}