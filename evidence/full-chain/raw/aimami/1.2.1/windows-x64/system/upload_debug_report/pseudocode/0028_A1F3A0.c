// win 1.2.1 NEW upload_debug_report 0x140a1f3a0 d=2
__int64 *__fastcall sub_140A1F3A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbx
  const __m128i *v9; // rbx
  __m128i *v10; // rax
  _BYTE *v11; // rdi
  _BYTE *v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rax
  const __m128i *v16; // r15
  __m128i *v17; // rax
  __m128i *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // [rsp+20h] [rbp-60h] BYREF
  __int64 v26; // [rsp+28h] [rbp-58h]
  __int128 v27; // [rsp+30h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-40h]
  __int64 v29; // [rsp+48h] [rbp-38h]
  __int64 v30; // [rsp+50h] [rbp-30h]
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int64 v32; // [rsp+68h] [rbp-18h]
  __int64 v33; // [rsp+70h] [rbp-10h]
  __int64 v34; // [rsp+78h] [rbp-8h]
  __int64 v35; // [rsp+80h] [rbp+0h]
  char v36; // [rsp+8Fh] [rbp+Fh] BYREF
  __int64 v37; // [rsp+90h] [rbp+10h]

  v37 = -2; /*0x140a1f3bb*/
  v3 = a3; /*0x140a1f3c3*/
  if ( a3 ) /*0x140a1f3cf*/
  {
    if ( *(_BYTE *)a2 != 3 ) /*0x140a1f3d4*/
    {
      a1[1] = sub_1415CA890(a2, (__int64)&v36, (__int64)&unk_1416C7348); /*0x140a1f693*/
      *a1 = -1; /*0x140a1f697*/
      return a1; /*0x140a1f69f*/
    }
    v6 = *(_QWORD *)(a2 + 24); /*0x140a1f3da*/
    if ( v6 < 0 ) /*0x140a1f3e1*/
    {
      v7 = 0; /*0x140a1f3e3*/
      goto LABEL_5; /*0x140a1f3e3*/
    }
    if ( v6 ) /*0x140a1f404*/
    {
      v9 = *(const __m128i **)(a2 + 16); /*0x140a1f406*/
      nullsub_1(); /*0x140a1f40a*/
      v7 = 1; /*0x140a1f40f*/
      v10 = (__m128i *)sub_140001350(v6, 1); /*0x140a1f41d*/
      if ( !v10 ) /*0x140a1f425*/
LABEL_5:
        sub_1415F08AB(v7, v6); /*0x140a1f3e6*/
      v34 = (__int64)v10; /*0x140a1f427*/
      sub_1415B2FE0(v10, v9, v6); /*0x140a1f434*/
    }
    else
    {
      v34 = 1; /*0x140a1f440*/
    }
    v8 = a2 + 32; /*0x140a1f444*/
  }
  else
  {
    v34 = 1; /*0x140a1f3f8*/
    v6 = 0; /*0x140a1f3fc*/
    v8 = a2; /*0x140a1f3ff*/
  }
  v11 = (_BYTE *)(32 * v3 + a2); /*0x140a1f44f*/
  if ( (_BYTE *)v8 == v11 ) /*0x140a1f455*/
  {
    nullsub_1(); /*0x140a1f485*/
    v13 = 6; /*0x140a1f48a*/
    v15 = sub_140001350(6, 1); /*0x140a1f49a*/
    if ( !v15 ) /*0x140a1f4a2*/
    {
      v35 = v6; /*0x140a1f735*/
      sub_1415F08AB(1, 6); /*0x140a1f743*/
    }
    *(_WORD *)(v15 + 4) = 27745; /*0x140a1f4af*/
    *(_DWORD *)v15 = 1970168173; /*0x140a1f4b9*/
    goto LABEL_25; /*0x140a1f4bb*/
  }
  if ( *(_BYTE *)v8 != 3 ) /*0x140a1f45a*/
  {
    v35 = v6; /*0x140a1f6dd*/
    a1[1] = sub_1415CA890(v8, (__int64)&v36, (__int64)&unk_1416C7348); /*0x140a1f6f5*/
    *a1 = -1; /*0x140a1f6f9*/
    v24 = v35; /*0x140a1f701*/
    if ( !v35 ) /*0x140a1f708*/
      return a1; /*0x140a1f708*/
    goto LABEL_40; /*0x140a1f708*/
  }
  v12 = (_BYTE *)(v8 + 32); /*0x140a1f460*/
  v13 = *(_QWORD *)(v8 + 24); /*0x140a1f464*/
  if ( v13 < 0 ) /*0x140a1f46b*/
  {
    v35 = v6; /*0x140a1f46d*/
    v14 = 0; /*0x140a1f471*/
    goto LABEL_16; /*0x140a1f471*/
  }
  if ( !v13 ) /*0x140a1f4bd*/
  {
    v15 = 1; /*0x140a1f520*/
    if ( v12 != v11 ) /*0x140a1f528*/
      goto LABEL_22; /*0x140a1f528*/
LABEL_25:
    v20 = 0; /*0x140a1f52a*/
    v19 = (__int64)v11; /*0x140a1f52c*/
    goto LABEL_26; /*0x140a1f52c*/
  }
  v33 = v3; /*0x140a1f4bf*/
  v35 = v6; /*0x140a1f4c3*/
  v16 = *(const __m128i **)(v8 + 16); /*0x140a1f4c7*/
  nullsub_1(); /*0x140a1f4cb*/
  v14 = 1; /*0x140a1f4d0*/
  v17 = (__m128i *)sub_140001350(v13, 1); /*0x140a1f4de*/
  if ( !v17 ) /*0x140a1f4e6*/
LABEL_16:
    sub_1415F08AB(v14, v13); /*0x140a1f474*/
  v18 = v17; /*0x140a1f4e8*/
  sub_1415B2FE0(v17, v16, v13); /*0x140a1f4f4*/
  v6 = v35; /*0x140a1f4f9*/
  v15 = (__int64)v18; /*0x140a1f4fd*/
  v3 = v33; /*0x140a1f500*/
  v12 = (_BYTE *)(v8 + 32); /*0x140a1f504*/
  if ( (_BYTE *)(v8 + 32) == v11 ) /*0x140a1f50b*/
    goto LABEL_25; /*0x140a1f50b*/
LABEL_22:
  if ( !*v12 ) /*0x140a1f50d*/
  {
    v19 = v8 + 64; /*0x140a1f518*/
    v20 = 0; /*0x140a1f51c*/
    goto LABEL_26; /*0x140a1f51e*/
  }
  if ( *v12 == 2 ) /*0x140a1f5af*/
  {
    v22 = *(_QWORD *)(v8 + 40); /*0x140a1f5b5*/
    if ( !v22 ) /*0x140a1f5bc*/
    {
      a3 = *(_QWORD *)(v8 + 48); /*0x140a1f5f7*/
LABEL_35:
      v19 = v8 + 64; /*0x140a1f5fb*/
      v20 = 1; /*0x140a1f5ff*/
LABEL_26:
      a1[2] = v6; /*0x140a1f52f*/
      a1[3] = v34; /*0x140a1f537*/
      a1[4] = v6; /*0x140a1f53b*/
      a1[5] = v13; /*0x140a1f53f*/
      a1[6] = v15; /*0x140a1f543*/
      a1[7] = v13; /*0x140a1f547*/
      *a1 = v20; /*0x140a1f54b*/
      a1[1] = a3; /*0x140a1f54f*/
      v28 = a1[4]; /*0x140a1f557*/
      v29 = a1[5]; /*0x140a1f55f*/
      v30 = a1[6]; /*0x140a1f567*/
      v31 = a1[7]; /*0x140a1f56f*/
      v25 = *a1; /*0x140a1f577*/
      v26 = a1[1]; /*0x140a1f57f*/
      v27 = *((_OWORD *)a1 + 1); /*0x140a1f588*/
      if ( v11 != (_BYTE *)v19 ) /*0x140a1f58f*/
      {
        v34 = (__int64)a1; /*0x140a1f6a4*/
        a1[1] = sub_1415C4380(v3, &off_1416C25F0, &unk_1416C2600); /*0x140a1f6c3*/
        *a1 = -1; /*0x140a1f6c7*/
        sub_1407DF670(&v25); /*0x140a1f6d3*/
      }
      return a1; /*0x140a1f6d3*/
    }
    if ( (_DWORD)v22 == 1 ) /*0x140a1f5c1*/
    {
      a3 = *(_QWORD *)(v8 + 48); /*0x140a1f5c3*/
      if ( a3 < 0 ) /*0x140a1f5ca*/
      {
        v32 = v15; /*0x140a1f5cc*/
        v33 = v13; /*0x140a1f5d0*/
        v35 = v6; /*0x140a1f5d4*/
        v26 = a3; /*0x140a1f5d8*/
        LOBYTE(v25) = 2; /*0x140a1f5dc*/
        v23 = sub_1415ECB10(&v25, &v36, &unk_141680818); /*0x140a1f5ef*/
        goto LABEL_37; /*0x140a1f5f5*/
      }
      goto LABEL_35; /*0x140a1f5ca*/
    }
    v32 = v15; /*0x140a1f609*/
    v33 = v13; /*0x140a1f60d*/
    v35 = v6; /*0x140a1f611*/
    v26 = *(_QWORD *)(v8 + 48); /*0x140a1f61a*/
    LOBYTE(v25) = 3; /*0x140a1f61f*/
    v23 = sub_1415ECAA0(&v25, &v36, &unk_1416ADC30); /*0x140a1f632*/
  }
  else
  {
    v32 = v15; /*0x140a1f713*/
    v33 = v13; /*0x140a1f717*/
    v35 = v6; /*0x140a1f71b*/
    v23 = sub_1415CA890((__int64)v12, (__int64)&v36, (__int64)&unk_1416C7828); /*0x140a1f72a*/
  }
LABEL_37:
  a1[1] = v23; /*0x140a1f638*/
  *a1 = -1; /*0x140a1f63c*/
  v24 = v35; /*0x140a1f64b*/
  if ( v33 ) /*0x140a1f653*/
    sub_140001360(v32, v33, 1); /*0x140a1f65b*/
  if ( v24 ) /*0x140a1f663*/
LABEL_40:
    sub_140001360(v34, v24, 1); /*0x140a1f669*/
  return a1; /*0x140a1f598*/
}