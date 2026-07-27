// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409A2A80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]
  _QWORD *v22; // [rsp+70h] [rbp-10h] BYREF
  __int64 v23; // [rsp+78h] [rbp-8h]
  unsigned __int64 v24; // [rsp+80h] [rbp+0h]
  __int64 v25; // [rsp+88h] [rbp+8h]
  __int64 v26; // [rsp+90h] [rbp+10h]
  char v27; // [rsp+9Fh] [rbp+1Fh] BYREF
  _QWORD *v28; // [rsp+A0h] [rbp+20h]
  __int64 v29; // [rsp+A8h] [rbp+28h]

  v29 = -2; /*0x1409a2a95*/
  if ( a3 < 0 ) /*0x1409a2aa3*/
  {
    v4 = 0; /*0x1409a2aa5*/
    goto LABEL_3; /*0x1409a2aa5*/
  }
  v19 = a3; /*0x1409a2ab7*/
  if ( a3 ) /*0x1409a2abb*/
  {
    nullsub_1(a1); /*0x1409a2ac0*/
    v4 = 1; /*0x1409a2ac5*/
    v7 = sub_140001650(a3, 1); /*0x1409a2ad2*/
    if ( !v7 ) /*0x1409a2ada*/
LABEL_3:
      sub_1416C2D4B(v4, a3); /*0x1409a2aa7*/
    v25 = v7; /*0x1409a2adc*/
    sub_141684120(v7, a2, a3); /*0x1409a2ae9*/
  }
  else
  {
    v25 = 1; /*0x1409a2af5*/
  }
  sub_141356270(&v20); /*0x1409a2afd*/
  v17 = v20; /*0x1409a2b07*/
  v22 = nullptr; /*0x1409a2b0b*/
  v23 = 1; /*0x1409a2b13*/
  v24 = 0; /*0x1409a2b1b*/
  v21 = 1610612768; /*0x1409a2b23*/
  *(_QWORD *)&v20 = &v22; /*0x1409a2b2f*/
  *((_QWORD *)&v20 + 1) = &off_1417A9B00; /*0x1409a2b3a*/
  if ( (unsigned __int8)sub_1413567D0(&v17, &v20) ) /*0x1409a2b46*/
    sub_1416C3060( /*0x1409a2ca4*/
      (unsigned int)aADisplayImplem_3,
      55,
      (unsigned int)&v27,
      (unsigned int)&unk_1417A5580,
      (__int64)&off_1417A9BB8);
  v28 = v22; /*0x1409a2b64*/
  v26 = v23; /*0x1409a2b68*/
  if ( v24 <= 0x10 ) /*0x1409a2b6c*/
  {
    if ( v24 != 16 ) /*0x1409a2b94*/
LABEL_11:
      sub_1416C2F60(v23, v24, 0, 16, (__int64)&off_1417A5998); /*0x1409a2b74*/
  }
  else if ( *(char *)(v23 + 16) <= -65 ) /*0x1409a2b72*/
  {
    goto LABEL_11; /*0x1409a2b72*/
  }
  v18[0] = v23; /*0x1409a2b96*/
  v18[1] = 16; /*0x1409a2b9a*/
  v22 = v18; /*0x1409a2ba6*/
  v23 = (__int64)sub_14041F680; /*0x1409a2bb1*/
  sub_14149C0F0(&v20, &unk_1417A59B0, &v22); /*0x1409a2bc4*/
  v9 = v28; /*0x1409a2bca*/
  if ( v28 ) /*0x1409a2bd1*/
    sub_140001660(v26, v28, 1); /*0x1409a2bdd*/
  v26 = *((_QWORD *)&v20 + 1); /*0x1409a2bee*/
  v28 = (_QWORD *)v20; /*0x1409a2bee*/
  v10 = v21; /*0x1409a2bf2*/
  v11 = sub_141470CD0(v8, v9); /*0x1409a2bf6*/
  v12 = v11; /*0x1409a2bfc*/
  if ( *(_BYTE *)(v11 + 16) == 1 ) /*0x1409a2c03*/
  {
    v13 = *(_QWORD *)v11; /*0x1409a2c09*/
    v14 = *(_QWORD *)(v12 + 8); /*0x1409a2c0c*/
  }
  else
  {
    v13 = sub_141486EF0(); /*0x1409a2cac*/
    *(_QWORD *)v12 = v13; /*0x1409a2cb2*/
    *(_QWORD *)(v12 + 8) = v14; /*0x1409a2cb5*/
    *(_BYTE *)(v12 + 16) = 1; /*0x1409a2cb9*/
  }
  *(_QWORD *)v12 = v13 + 1; /*0x1409a2c14*/
  v15 = v19; /*0x1409a2c17*/
  *(_QWORD *)a1 = v19; /*0x1409a2c1b*/
  *(_QWORD *)(a1 + 8) = v25; /*0x1409a2c22*/
  *(_QWORD *)(a1 + 16) = v15; /*0x1409a2c26*/
  *(_QWORD *)(a1 + 24) = v28; /*0x1409a2c2e*/
  *(_QWORD *)(a1 + 32) = v26; /*0x1409a2c36*/
  *(_QWORD *)(a1 + 40) = v10; /*0x1409a2c3a*/
  *(_WORD *)(a1 + 108) = 0; /*0x1409a2c3e*/
  *(_DWORD *)(a1 + 48) = 0; /*0x1409a2c44*/
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&off_1417A4790; /*0x1409a2c52*/
  *(_OWORD *)(a1 + 72) = xmmword_1417A47A0; /*0x1409a2c5d*/
  *(_QWORD *)(a1 + 88) = v13; /*0x1409a2c61*/
  *(_QWORD *)(a1 + 96) = v14; /*0x1409a2c65*/
  *(_DWORD *)(a1 + 104) = 0; /*0x1409a2c69*/
  return a1; /*0x1409a2c73*/
}