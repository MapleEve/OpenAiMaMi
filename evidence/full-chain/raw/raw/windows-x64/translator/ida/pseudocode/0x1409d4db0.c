// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409D4DB0(__int64 a1, __int64 a2, __int64 a3)
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

  v29 = -2; /*0x1409d4dc5*/
  if ( a3 < 0 ) /*0x1409d4dd3*/
  {
    v4 = 0; /*0x1409d4dd5*/
    goto LABEL_3; /*0x1409d4dd5*/
  }
  v19 = a3; /*0x1409d4de7*/
  if ( a3 ) /*0x1409d4deb*/
  {
    nullsub_1(a1); /*0x1409d4df0*/
    v4 = 1; /*0x1409d4df5*/
    v7 = sub_140001650(a3, 1); /*0x1409d4e02*/
    if ( !v7 ) /*0x1409d4e0a*/
LABEL_3:
      sub_1416C2D4B(v4, a3); /*0x1409d4dd7*/
    v25 = v7; /*0x1409d4e0c*/
    sub_141684120(v7, a2, a3); /*0x1409d4e19*/
  }
  else
  {
    v25 = 1; /*0x1409d4e25*/
  }
  sub_141356270(&v20); /*0x1409d4e2d*/
  v17 = v20; /*0x1409d4e37*/
  v22 = nullptr; /*0x1409d4e3b*/
  v23 = 1; /*0x1409d4e43*/
  v24 = 0; /*0x1409d4e4b*/
  v21 = 1610612768; /*0x1409d4e53*/
  *(_QWORD *)&v20 = &v22; /*0x1409d4e5f*/
  *((_QWORD *)&v20 + 1) = &off_1417A9B00; /*0x1409d4e6a*/
  if ( (unsigned __int8)sub_1413567D0(&v17, &v20) ) /*0x1409d4e76*/
    sub_1416C3060( /*0x1409d4fcd*/
      (unsigned int)aADisplayImplem_3,
      55,
      (unsigned int)&v27,
      (unsigned int)&unk_1417A5580,
      (__int64)&off_1417A9BB8);
  v28 = v22; /*0x1409d4e94*/
  v26 = v23; /*0x1409d4e98*/
  if ( v24 <= 0x10 ) /*0x1409d4e9c*/
  {
    if ( v24 != 16 ) /*0x1409d4ec4*/
LABEL_11:
      sub_1416C2F60(v23, v24, 0, 16, (__int64)&off_1417A6610); /*0x1409d4ea4*/
  }
  else if ( *(char *)(v23 + 16) <= -65 ) /*0x1409d4ea2*/
  {
    goto LABEL_11; /*0x1409d4ea2*/
  }
  v18[0] = v23; /*0x1409d4ec6*/
  v18[1] = 16; /*0x1409d4eca*/
  v22 = v18; /*0x1409d4ed6*/
  v23 = (__int64)sub_14041F680; /*0x1409d4ee1*/
  sub_14149C0F0(&v20, &unk_1417A6600, &v22); /*0x1409d4ef4*/
  v9 = v28; /*0x1409d4efa*/
  if ( v28 ) /*0x1409d4f01*/
    sub_140001660(v26, v28, 1); /*0x1409d4f0d*/
  v26 = *((_QWORD *)&v20 + 1); /*0x1409d4f1e*/
  v28 = (_QWORD *)v20; /*0x1409d4f1e*/
  v10 = v21; /*0x1409d4f22*/
  v11 = sub_141470CD0(v8, v9); /*0x1409d4f26*/
  v12 = v11; /*0x1409d4f2c*/
  if ( *(_BYTE *)(v11 + 16) == 1 ) /*0x1409d4f33*/
  {
    v13 = *(_QWORD *)v11; /*0x1409d4f39*/
    v14 = *(_QWORD *)(v12 + 8); /*0x1409d4f3c*/
  }
  else
  {
    v13 = sub_141486EF0(); /*0x1409d4fd5*/
    *(_QWORD *)v12 = v13; /*0x1409d4fdb*/
    *(_QWORD *)(v12 + 8) = v14; /*0x1409d4fde*/
    *(_BYTE *)(v12 + 16) = 1; /*0x1409d4fe2*/
  }
  *(_QWORD *)v12 = v13 + 1; /*0x1409d4f44*/
  v15 = v19; /*0x1409d4f47*/
  *(_QWORD *)a1 = v19; /*0x1409d4f4b*/
  *(_QWORD *)(a1 + 8) = v25; /*0x1409d4f52*/
  *(_QWORD *)(a1 + 16) = v15; /*0x1409d4f56*/
  *(_QWORD *)(a1 + 24) = v28; /*0x1409d4f5e*/
  *(_QWORD *)(a1 + 32) = v26; /*0x1409d4f66*/
  *(_QWORD *)(a1 + 40) = v10; /*0x1409d4f6a*/
  *(_WORD *)(a1 + 100) = 0; /*0x1409d4f6e*/
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&off_1417A4790; /*0x1409d4f7b*/
  *(_OWORD *)(a1 + 64) = xmmword_1417A47A0; /*0x1409d4f86*/
  *(_QWORD *)(a1 + 80) = v13; /*0x1409d4f8a*/
  *(_QWORD *)(a1 + 88) = v14; /*0x1409d4f8e*/
  *(_DWORD *)(a1 + 96) = 0; /*0x1409d4f92*/
  return a1; /*0x1409d4f9c*/
}