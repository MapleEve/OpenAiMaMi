// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140c271d0 | name sub_140C271D0
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C271D0(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v6; // r14
  __int64 v7; // r12
  const __m128i *v8; // r15
  __m128i *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 result; // rax
  _OWORD v15[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[3]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+78h] [rbp-8h]
  __int64 v19; // [rsp+80h] [rbp+0h] BYREF
  __int64 v20; // [rsp+88h] [rbp+8h]
  _QWORD *v21; // [rsp+90h] [rbp+10h]
  _QWORD *v22; // [rsp+98h] [rbp+18h]
  __int128 v23; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v24; // [rsp+B0h] [rbp+30h]
  signed __int64 v25; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+48h]
  signed __int64 v27; // [rsp+D0h] [rbp+50h]
  char v28; // [rsp+D8h] [rbp+58h]
  __int64 v29; // [rsp+E0h] [rbp+60h]
  _QWORD *v30; // [rsp+E8h] [rbp+68h]
  char v31; // [rsp+F7h] [rbp+77h]
  __int64 v32; // [rsp+F8h] [rbp+78h]

  v32 = -2;
  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    sub_1401B8620((__int64)&v25, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
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
      v8 = *(const __m128i **)(a2 + 968);
      nullsub_1(a1);
      v7 = 1;
      v9 = (__m128i *)sub_140001650(v6, 1);
      if ( !v9 )
LABEL_4:
        sub_141938D2B(v7, v6);
      v25 = v6;
      v26 = (__int64)v9;
      sub_1418F44E0(v9, v8, v6);
      v27 = v6;
    }
    else
    {
      v25 = 0;
      v26 = 1;
      v27 = 0;
    }
    v28 = *(_BYTE *)(a2 + 984);
  }
  *(_QWORD *)&v17 = 0;
  v18 = 0;
  nullsub_1(a1);
  v10 = (_QWORD *)sub_140001650(8, 1);
  if ( !v10 )
    sub_141938D2B(1, 8);
  *v10 = 0x7362446574617473LL;
  v16[0] = 8;
  v30 = v10;
  v16[1] = v10;
  v16[2] = 8;
  v11 = 32LL * *(_QWORD *)(a2 + 1008);
  *(_QWORD *)&v23 = *(_QWORD *)(a2 + 1000);
  *((_QWORD *)&v23 + 1) = v23 + v11;
  *(_QWORD *)&v24 = a3;
  *((_QWORD *)&v24 + 1) = &v25;
  sub_1403ED010(&v19, &v23);
  v31 = 1;
  sub_140C0FE40(&v23, &v19);
  if ( (_BYTE)v23 == 0xFF )
  {
    *(_QWORD *)&v15[0] = *((_QWORD *)&v23 + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)v15,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3CEB8);
  }
  v15[1] = v24;
  v15[0] = v23;
  v31 = 0;
  sub_140E72AA0(&v23, &v17, v16, v15);
  if ( (_BYTE)v23 != 0xFF )
    sub_14002F9D0(&v23);
  v12 = v20;
  v22 = v21;
  v30 = nullptr;
  v29 = v20;
  while ( v22 != v30 )
  {
    v30 = (_QWORD *)((char *)v30 + 1);
    v13 = v12 + 32;
    sub_1403880E0(v12);
    v12 = v13;
  }
  if ( v19 )
    sub_140001660(v29, 32 * v19, 8);
  result = v18;
  *(_QWORD *)(a1 + 24) = v18;
  *(_OWORD *)(a1 + 8) = v17;
  *(_BYTE *)a1 = 5;
  if ( v25 )
    return sub_140001660(v26, v25, 1);
  return result;
}
