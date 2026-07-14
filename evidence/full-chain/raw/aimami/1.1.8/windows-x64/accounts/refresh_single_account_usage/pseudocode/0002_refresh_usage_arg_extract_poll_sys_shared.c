// refresh_usage_arg_extract_poll_sys (shared) @ 0x14086fd70 (win, AiMaMi 1.1.8)
__int64 __fastcall sub_14086FD70(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r15
  const __m128i *v12; // r14
  __m128i *v13; // rax
  __int64 v14; // rbx
  _BYTE v16[31]; // [rsp+49h] [rbp-37h]
  _QWORD v17[3]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v18[6]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v19; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+40h]
  char v21; // [rsp+CFh] [rbp+4Fh] BYREF
  __int64 v22; // [rsp+D0h] [rbp+50h]

  v22 = -2; /*0x14086fd87*/
  v3 = *a2; /*0x14086fd92*/
  v4 = a2[1]; /*0x14086fd95*/
  v5 = a2[2]; /*0x14086fd99*/
  v6 = a2[3]; /*0x14086fd9d*/
  if ( (sub_1403747D0(a2) & 1) != 0 ) /*0x14086fdab*/
    goto LABEL_2; /*0x14086fdab*/
  if ( *(_BYTE *)v7 == 3 ) /*0x14086fe4b*/
  {
    v10 = *(_QWORD *)(v7 + 24); /*0x14086fe51*/
    if ( v10 < 0 ) /*0x14086fe58*/
    {
      v11 = 0; /*0x14086fe5a*/
      goto LABEL_7; /*0x14086fe5a*/
    }
    if ( v10 ) /*0x14086fe6a*/
    {
      v12 = *(const __m128i **)(v7 + 16); /*0x14086fe6c*/
      nullsub_1(v8, v7); /*0x14086fe70*/
      v11 = 1; /*0x14086fe75*/
      v13 = (__m128i *)sub_140001360(v10, 1); /*0x14086fe83*/
      if ( !v13 ) /*0x14086fe8b*/
LABEL_7:
        sub_1412AD46B(v11, v10); /*0x14086fe5d*/
      v14 = (__int64)v13; /*0x14086fe8d*/
      sub_1412762D0(v13, v12, v10); /*0x14086fe99*/
    }
    else
    {
      v14 = 1; /*0x14086fea0*/
    }
    *(_QWORD *)(a1 + 8) = v10; /*0x14086fea5*/
    *(_QWORD *)(a1 + 16) = v14; /*0x14086fea9*/
    *(_QWORD *)(a1 + 24) = v10; /*0x14086fead*/
    *(_BYTE *)a1 = 6; /*0x14086feb1*/
    return a1; /*0x14086feb1*/
  }
  v7 = sub_1412794B0(v7, &v21, &unk_141333150); /*0x14086ff08*/
LABEL_2:
  v18[1] = v3; /*0x14086fdb1*/
  v18[2] = v4; /*0x14086fdb5*/
  v18[3] = v5; /*0x14086fdb9*/
  v18[4] = v6; /*0x14086fdbd*/
  v18[5] = v7; /*0x14086fdc1*/
  v18[0] = 0x8000000000000008uLL; /*0x14086fdcf*/
  *(_QWORD *)&v19 = 0; /*0x14086fdd3*/
  *((_QWORD *)&v19 + 1) = 1; /*0x14086fddb*/
  v20 = 0; /*0x14086fde3*/
  v17[2] = 1610612768; /*0x14086fdeb*/
  v17[0] = &v19; /*0x14086fdf7*/
  v17[1] = &off_14135B038; /*0x14086fe02*/
  if ( (unsigned __int8)sub_140E156C0(v18, v17, v9) ) /*0x14086fe0d*/
    sub_1412AD780( /*0x14086feea*/
      (unsigned int)aADisplayImplem_9,
      55,
      (unsigned int)&v21,
      (unsigned int)&unk_14135B280,
      (__int64)&off_14135B0F0);
  *(_OWORD *)&v16[7] = v19; /*0x14086fe23*/
  *(_QWORD *)&v16[23] = v20; /*0x14086fe27*/
  sub_140855130(v18); /*0x14086fe2e*/
  *(_BYTE *)a1 = 3; /*0x14086fe33*/
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v16; /*0x14086fe3e*/
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v16[15]; /*0x14086fe42*/
  return a1; /*0x14086feb7*/
}
