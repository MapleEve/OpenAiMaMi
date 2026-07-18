// win 1.2.1 NEW write_client_debug_log 0x1407e4a20 d=2
__int64 __fastcall sub_1407E4A20(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  __int64 *v19; // rbx
  __int64 result; // rax
  __int128 v21; // [rsp+28h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h]
  _QWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25[3]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v26; // [rsp+80h] [rbp+0h] BYREF
  __int64 *v27; // [rsp+90h] [rbp+10h]
  __int64 (__fastcall *v28)(); // [rsp+98h] [rbp+18h]
  __int128 *v29; // [rsp+A0h] [rbp+20h]
  __int64 (__fastcall *v30)(); // [rsp+A8h] [rbp+28h]
  __int128 *v31; // [rsp+B0h] [rbp+30h]
  __int64 (__fastcall *v32)(); // [rsp+B8h] [rbp+38h]
  __int64 *v33; // [rsp+C0h] [rbp+40h]
  __int64 (__fastcall *v34)(); // [rsp+C8h] [rbp+48h]
  __int128 *v35; // [rsp+D0h] [rbp+50h]
  __int64 (__fastcall *v36)(); // [rsp+D8h] [rbp+58h]
  __int64 v37; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v38; // [rsp+E8h] [rbp+68h]
  __int64 v39; // [rsp+F0h] [rbp+70h]
  __int64 v40; // [rsp+F8h] [rbp+78h]
  __int64 *v41; // [rsp+100h] [rbp+80h]
  __int64 v42; // [rsp+108h] [rbp+88h]
  __int128 v43; // [rsp+110h] [rbp+90h] BYREF
  __int64 v44; // [rsp+120h] [rbp+A0h]
  __int128 v45; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v46; // [rsp+140h] [rbp+C0h]
  __int64 *v47; // [rsp+148h] [rbp+C8h]
  __int128 v48; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v49; // [rsp+160h] [rbp+E0h]
  __int64 *v50; // [rsp+170h] [rbp+F0h]
  __int64 v51; // [rsp+178h] [rbp+F8h]

  v51 = -2; /*0x1407e4a39*/
  v50 = a3; /*0x1407e4a47*/
  v47 = a2; /*0x1407e4a4e*/
  v11 = a1[1]; /*0x1407e4a58*/
  v41 = a1; /*0x1407e4a5c*/
  v12 = a1[2]; /*0x1407e4a63*/
  v42 = v11; /*0x1407e4a67*/
  v23[0] = sub_14083C7C0(v11, v12); /*0x1407e4a74*/
  v23[1] = v13; /*0x1407e4a78*/
  v14 = v47[1]; /*0x1407e4a83*/
  sub_14083D0A0(v25, v14, v47[2], 96); /*0x1407e4a9b*/
  v15 = v50[1]; /*0x1407e4aa8*/
  sub_14083D0A0(v24, v15, v50[2], 4000); /*0x1407e4ac0*/
  if ( a6 && a7 ) /*0x1407e4adc*/
  {
    sub_14083D0A0(&v26, a6, a7, 64); /*0x1407e4ae7*/
    v46 = (__int64)v27; /*0x1407e4af1*/
    v45 = v26; /*0x1407e4afc*/
    v16 = a8; /*0x1407e4b03*/
    if ( !a8 ) /*0x1407e4b0d*/
      goto LABEL_10; /*0x1407e4b0d*/
  }
  else
  {
    nullsub_1(); /*0x1407e4b14*/
    v17 = (_DWORD *)sub_140001350(7, 1); /*0x1407e4b23*/
    if ( !v17 ) /*0x1407e4b2b*/
      sub_1415F08AB(1, 7); /*0x1407e4e35*/
    *(_DWORD *)((char *)v17 + 3) = 1853321070; /*0x1407e4b31*/
    *v17 = 1852534389; /*0x1407e4b38*/
    *(_QWORD *)&v45 = 7; /*0x1407e4b3e*/
    *((_QWORD *)&v45 + 1) = v17; /*0x1407e4b49*/
    v46 = 7; /*0x1407e4b50*/
    v16 = a8; /*0x1407e4b5b*/
    if ( !a8 ) /*0x1407e4b65*/
    {
LABEL_10:
      nullsub_1(); /*0x1407e4ba2*/
      v18 = (_DWORD *)sub_140001350(7, 1); /*0x1407e4bb1*/
      if ( !v18 ) /*0x1407e4bb9*/
        sub_1415F08AB(1, 7); /*0x1407e4e47*/
      *(_DWORD *)((char *)v18 + 3) = 1853321070; /*0x1407e4bbf*/
      *v18 = 1852534389; /*0x1407e4bc6*/
      *(_QWORD *)&v43 = 7; /*0x1407e4bcc*/
      *((_QWORD *)&v43 + 1) = v18; /*0x1407e4bd7*/
      v44 = 7; /*0x1407e4bde*/
      if ( !a4 ) /*0x1407e4bec*/
        goto LABEL_16; /*0x1407e4bec*/
      goto LABEL_12; /*0x1407e4bec*/
    }
  }
  if ( !a9 ) /*0x1407e4b71*/
    goto LABEL_10; /*0x1407e4b71*/
  sub_14083D0A0(&v26, v16, a9, 300); /*0x1407e4b7c*/
  v44 = (__int64)v27; /*0x1407e4b86*/
  v43 = v26; /*0x1407e4b91*/
  if ( !a4 ) /*0x1407e4b9b*/
    goto LABEL_16; /*0x1407e4b9b*/
LABEL_12:
  if ( !a5 ) /*0x1407e4bf8*/
  {
LABEL_16:
    *(_QWORD *)&v48 = 0; /*0x1407e4c6c*/
    *((_QWORD *)&v48 + 1) = 1; /*0x1407e4c77*/
    v49 = 0; /*0x1407e4c82*/
    goto LABEL_17; /*0x1407e4c82*/
  }
  sub_14083D0A0(&v26, a4, a5, 8000); /*0x1407e4c09*/
  *(_QWORD *)&v48 = &v26; /*0x1407e4c0f*/
  *((_QWORD *)&v48 + 1) = sub_1400012F0; /*0x1407e4c1d*/
  sub_1413CAFD0((__int64)&v21, byte_1416A5A10, (unsigned __int64)&v48); /*0x1407e4c36*/
  if ( (_QWORD)v26 ) /*0x1407e4c43*/
    sub_140001360(*((__int64 *)&v26 + 1), v26, 1); /*0x1407e4c4f*/
  v48 = v21; /*0x1407e4c58*/
  v49 = v22; /*0x1407e4c63*/
LABEL_17:
  *(_QWORD *)&v26 = v23; /*0x1407e4c8d*/
  *((_QWORD *)&v26 + 1) = sub_1401F8E10; /*0x1407e4c9c*/
  v27 = v25; /*0x1407e4ca0*/
  v28 = sub_1400012F0; /*0x1407e4cab*/
  v29 = &v45; /*0x1407e4cb6*/
  v30 = sub_1400012F0; /*0x1407e4cba*/
  v31 = &v43; /*0x1407e4cc5*/
  v32 = sub_1400012F0; /*0x1407e4cc9*/
  v33 = v24; /*0x1407e4ccd*/
  v34 = sub_1400012F0; /*0x1407e4cd1*/
  v35 = &v48; /*0x1407e4cdc*/
  v36 = sub_1400012F0; /*0x1407e4ce0*/
  sub_1413CAFD0((__int64)&v37, byte_1416A53A4, (unsigned __int64)&v26); /*0x1407e4cf2*/
  if ( !dword_141DBB510 ) /*0x1407e4d00*/
  {
    v40 = v38; /*0x1407e4d11*/
    sub_140839890(&unk_141DBB4F0, v38, v39); /*0x1407e4d15*/
  }
  if ( v37 ) /*0x1407e4d22*/
    sub_140001360(v38, v37, 1); /*0x1407e4d2e*/
  v19 = v47; /*0x1407e4d3d*/
  if ( (_QWORD)v48 ) /*0x1407e4d44*/
    sub_140001360(*((__int64 *)&v48 + 1), v48, 1); /*0x1407e4d53*/
  if ( (_QWORD)v43 ) /*0x1407e4d62*/
    sub_140001360(*((__int64 *)&v43 + 1), v43, 1); /*0x1407e4d71*/
  if ( (_QWORD)v45 ) /*0x1407e4d80*/
    sub_140001360(*((__int64 *)&v45 + 1), v45, 1); /*0x1407e4d8f*/
  if ( v24[0] ) /*0x1407e4d9b*/
    sub_140001360(v24[1], v24[0], 1); /*0x1407e4da7*/
  if ( v25[0] ) /*0x1407e4db3*/
    sub_140001360(v25[1], v25[0], 1); /*0x1407e4dbf*/
  if ( *v50 ) /*0x1407e4dcb*/
    sub_140001360(v15, *v50, 1); /*0x1407e4ddc*/
  if ( *v19 ) /*0x1407e4de1*/
    sub_140001360(v14, *v19, 1); /*0x1407e4df2*/
  result = (__int64)v41; /*0x1407e4df7*/
  if ( *v41 ) /*0x1407e4dfe*/
    return sub_140001360(v42, *v41, 1); /*0x1407e4e13*/
  return result; /*0x1407e4e19*/
}