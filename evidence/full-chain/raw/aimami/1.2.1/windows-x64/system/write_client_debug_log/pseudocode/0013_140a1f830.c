// win 1.2.1 NEW write_client_debug_log 0x140a1f830 d=2
__m128i *__fastcall sub_140A1F830(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  __m128i *v4; // r14
  __int64 v6; // rsi
  unsigned __int8 *v7; // r12
  __int64 v8; // r13
  __int64 v9; // r15
  __m128i *v10; // rsi
  const __m128i *v11; // r14
  __m128i *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r15
  const __m128i *v17; // r14
  __m128i *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int8 *v22; // rbx
  __int64 v23; // r13
  __int64 v24; // r15
  __m128i *v25; // rsi
  const __m128i *v26; // r14
  __m128i *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r10
  unsigned __int8 *v30; // r14
  __int64 v31; // rax
  unsigned __int64 v32; // r15
  __int64 v33; // rbx
  const __m128i *v34; // rdi
  __m128i *v35; // rax
  __int64 v36; // r13
  bool v37; // r15
  __int64 v38; // rdx
  __int64 v39; // r14
  const __m128i *v40; // rdi
  __m128i *v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r8
  unsigned __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v53; // rax
  __m128i v54; // [rsp+20h] [rbp-60h] BYREF
  __m128i *v55; // [rsp+30h] [rbp-50h]
  __int64 v56; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v57; // [rsp+B8h] [rbp+38h]
  __int64 v58; // [rsp+C0h] [rbp+40h]
  __int64 v59; // [rsp+C8h] [rbp+48h]
  __int64 v60; // [rsp+D0h] [rbp+50h]
  __int64 v61; // [rsp+D8h] [rbp+58h]
  __int64 v62; // [rsp+E0h] [rbp+60h]
  __int64 v63; // [rsp+E8h] [rbp+68h]
  __int64 v64; // [rsp+F0h] [rbp+70h]
  __m128i *v65; // [rsp+F8h] [rbp+78h]
  __int64 v66; // [rsp+100h] [rbp+80h]
  char v67; // [rsp+10Fh] [rbp+8Fh] BYREF
  __int64 v68; // [rsp+110h] [rbp+90h]

  v68 = -2; /*0x140a1f84b*/
  v4 = a1; /*0x140a1f856*/
  if ( !a3 ) /*0x140a1f85c*/
  {
    v21 = sub_1415C4380(0, &off_1416C2BE0, &unk_1416C2600); /*0x140a1fa35*/
LABEL_26:
    v4->m128i_i64[1] = v21; /*0x140a1fa3a*/
    v4->m128i_i64[0] = -1; /*0x140a1fa3e*/
    return v4; /*0x140a1fa45*/
  }
  if ( *(_BYTE *)a2 != 3 ) /*0x140a1f868*/
  {
    v21 = sub_1415CA890(a2, &v67, &unk_1416C7348); /*0x140a1fdbb*/
    goto LABEL_26; /*0x140a1fdc0*/
  }
  v6 = a3; /*0x140a1f86e*/
  v7 = (unsigned __int8 *)(a2 + 32 * a3); /*0x140a1f878*/
  v8 = *(_QWORD *)(a2 + 24); /*0x140a1f87f*/
  if ( v8 < 0 ) /*0x140a1f886*/
  {
    v9 = 0; /*0x140a1f888*/
    goto LABEL_5; /*0x140a1f888*/
  }
  if ( v8 ) /*0x140a1f898*/
  {
    v66 = a3; /*0x140a1f89e*/
    v10 = a1; /*0x140a1f8a5*/
    v11 = *(const __m128i **)(a2 + 16); /*0x140a1f8a8*/
    nullsub_1(); /*0x140a1f8ac*/
    v9 = 1; /*0x140a1f8b1*/
    v12 = (__m128i *)sub_140001350(v8, 1); /*0x140a1f8bf*/
    if ( !v12 ) /*0x140a1f8c7*/
LABEL_5:
      sub_1415F08AB(v9, v8); /*0x140a1f88b*/
    v56 = (__int64)v12; /*0x140a1f8c9*/
    sub_1415B2FE0(v12, v11, v8); /*0x140a1f8d6*/
    v4 = v10; /*0x140a1f8db*/
    v6 = v66; /*0x140a1f8de*/
    v64 = v8; /*0x140a1f8e9*/
    if ( v66 == 1 ) /*0x140a1f8ed*/
      goto LABEL_9; /*0x140a1f8ed*/
  }
  else
  {
    v56 = 1; /*0x140a1f939*/
    v64 = 0; /*0x140a1f941*/
    if ( a3 == 1 ) /*0x140a1f945*/
    {
LABEL_9:
      v13 = sub_1415C4380(1, &off_1416C2BE0, &unk_1416C2600); /*0x140a1f8ef*/
LABEL_10:
      v4->m128i_i64[1] = v13; /*0x140a1f908*/
      v4->m128i_i64[0] = -1; /*0x140a1f90c*/
      v14 = v64; /*0x140a1f913*/
LABEL_11:
      if ( v14 ) /*0x140a1f91a*/
        sub_140001360(v56, v14, 1); /*0x140a1f92a*/
      return v4; /*0x140a1f92f*/
    }
  }
  if ( *(_BYTE *)(a2 + 32) != 3 ) /*0x140a1f94b*/
  {
    v13 = sub_1415CA890(a2 + 32, &v67, &unk_1416C7348); /*0x140a1fdd6*/
    goto LABEL_10; /*0x140a1fddc*/
  }
  v15 = *(_QWORD *)(a2 + 56); /*0x140a1f955*/
  if ( v15 < 0 ) /*0x140a1f95c*/
  {
    v16 = 0; /*0x140a1f95e*/
    goto LABEL_17; /*0x140a1f95e*/
  }
  v57 = *(_QWORD *)(a2 + 56); /*0x140a1f972*/
  if ( v15 ) /*0x140a1f976*/
  {
    v66 = v6; /*0x140a1f97c*/
    v65 = v4; /*0x140a1f983*/
    v17 = *(const __m128i **)(a2 + 48); /*0x140a1f987*/
    nullsub_1(); /*0x140a1f98b*/
    v16 = 1; /*0x140a1f990*/
    v18 = (__m128i *)sub_140001350(v57, 1); /*0x140a1f9a2*/
    v15 = v57; /*0x140a1f9a7*/
    if ( !v18 ) /*0x140a1f9ad*/
LABEL_17:
      sub_1415F08AB(v16, v15); /*0x140a1f961*/
    v58 = (__int64)v18; /*0x140a1f9af*/
    sub_1415B2FE0(v18, v17, v57); /*0x140a1f9b9*/
    v4 = v65; /*0x140a1f9be*/
    v6 = v66; /*0x140a1f9c2*/
    if ( v66 == 2 ) /*0x140a1f9cd*/
      goto LABEL_21; /*0x140a1f9cd*/
  }
  else
  {
    v58 = 1; /*0x140a1fa4f*/
    if ( v6 == 2 ) /*0x140a1fa57*/
    {
LABEL_21:
      v19 = sub_1415C4380(2, &off_1416C2BE0, &unk_1416C2600); /*0x140a1f9d3*/
LABEL_22:
      v4->m128i_i64[1] = v19; /*0x140a1f9ec*/
      v4->m128i_i64[0] = -1; /*0x140a1f9f0*/
      v14 = v64; /*0x140a1f9f7*/
LABEL_23:
      if ( v57 ) /*0x140a1fa02*/
      {
        v20 = v14; /*0x140a1fa12*/
        sub_140001360(v58, v57, 1); /*0x140a1fa18*/
        v14 = v20; /*0x140a1fa1d*/
      }
      goto LABEL_11; /*0x140a1fa20*/
    }
  }
  if ( *(_BYTE *)(a2 + 64) != 3 ) /*0x140a1fa61*/
  {
    v19 = sub_1415CA890(a2 + 64, &v67, &unk_1416C7348); /*0x140a1fdf2*/
    goto LABEL_22; /*0x140a1fdf8*/
  }
  v22 = (unsigned __int8 *)(a2 + 96); /*0x140a1fa67*/
  v23 = *(_QWORD *)(a2 + 88); /*0x140a1fa6b*/
  if ( v23 < 0 ) /*0x140a1fa72*/
  {
    v24 = 0; /*0x140a1fa74*/
    goto LABEL_31; /*0x140a1fa74*/
  }
  if ( v23 ) /*0x140a1fa88*/
  {
    v66 = v6; /*0x140a1fa8a*/
    v25 = v4; /*0x140a1fa91*/
    v26 = *(const __m128i **)(a2 + 80); /*0x140a1fa94*/
    nullsub_1(); /*0x140a1fa98*/
    v24 = 1; /*0x140a1fa9d*/
    v27 = (__m128i *)sub_140001350(v23, 1); /*0x140a1faab*/
    if ( !v27 ) /*0x140a1fab3*/
LABEL_31:
      sub_1415F08AB(v24, v23); /*0x140a1fa77*/
    v60 = (__int64)v27; /*0x140a1fab5*/
    v28 = sub_1415B2FE0(v27, v26, v23); /*0x140a1fac2*/
    v4 = v25; /*0x140a1fac7*/
    v6 = v66; /*0x140a1faca*/
  }
  else
  {
    v28 = 1; /*0x140a1fad3*/
    v60 = 1; /*0x140a1fad8*/
  }
  v59 = v23; /*0x140a1fae0*/
  if ( v6 == 3 ) /*0x140a1fae4*/
  {
    v29 = -1; /*0x140a1fae6*/
    goto LABEL_49; /*0x140a1faed*/
  }
  v65 = v4; /*0x140a1faf2*/
  v30 = (unsigned __int8 *)(a2 + 128); /*0x140a1faf6*/
  v28 = *(unsigned __int8 *)(a2 + 96); /*0x140a1fafd*/
  if ( !(_BYTE)v28 ) /*0x140a1fb03*/
  {
    v29 = -1; /*0x140a1fb2c*/
LABEL_48:
    v22 = (unsigned __int8 *)(a2 + 128); /*0x140a1fb81*/
    v4 = v65; /*0x140a1fb84*/
    goto LABEL_49; /*0x140a1fb84*/
  }
  if ( (_BYTE)v28 != 3 ) /*0x140a1fb07*/
  {
    v4 = v65; /*0x140a1fe88*/
    v65->m128i_i64[1] = sub_1415CA890(a2 + 96, &v67, &unk_1416C7348); /*0x140a1fe8c*/
    v4->m128i_i64[0] = -1; /*0x140a1fe90*/
    v14 = v64; /*0x140a1fe97*/
    v43 = v59; /*0x140a1fe9b*/
    goto LABEL_67; /*0x140a1fe9f*/
  }
  v31 = *(_QWORD *)(a2 + 120); /*0x140a1fb0d*/
  v32 = v31; /*0x140a1fb11*/
  if ( v31 < 0 ) /*0x140a1fb17*/
  {
    v33 = 0; /*0x140a1fb19*/
    goto LABEL_42; /*0x140a1fb19*/
  }
  if ( !v31 ) /*0x140a1fb35*/
  {
    v28 = 1; /*0x140a1fb75*/
    v61 = 1; /*0x140a1fb7a*/
    v29 = 0; /*0x140a1fb7e*/
    goto LABEL_48; /*0x140a1fb7e*/
  }
  v34 = *(const __m128i **)(a2 + 112); /*0x140a1fb37*/
  nullsub_1(); /*0x140a1fb3b*/
  v33 = 1; /*0x140a1fb40*/
  v35 = (__m128i *)sub_140001350(v32, 1); /*0x140a1fb4d*/
  if ( !v35 ) /*0x140a1fb55*/
LABEL_42:
    sub_1415F08AB(v33, v32); /*0x140a1fb1b*/
  v61 = (__int64)v35; /*0x140a1fb57*/
  v28 = sub_1415B2FE0(v35, v34, v32); /*0x140a1fb64*/
  v22 = v30; /*0x140a1fb69*/
  v4 = v65; /*0x140a1fb6c*/
  v29 = v32; /*0x140a1fb70*/
LABEL_49:
  v36 = -2; /*0x140a1fb88*/
  v37 = 1; /*0x140a1fb8f*/
  if ( v22 == v7 ) /*0x140a1fb95*/
  {
    v66 = -1; /*0x140a1fbc1*/
    goto LABEL_72; /*0x140a1fbcc*/
  }
  v28 = *v22; /*0x140a1fb97*/
  v62 = v29; /*0x140a1fb9c*/
  if ( (_BYTE)v28 ) /*0x140a1fba0*/
  {
    if ( (_BYTE)v28 == 3 ) /*0x140a1fba4*/
    {
      v38 = *((_QWORD *)v22 + 3); /*0x140a1fbaa*/
      if ( v38 < 0 ) /*0x140a1fbb1*/
      {
        v39 = 0; /*0x140a1fbb3*/
        goto LABEL_54; /*0x140a1fbb3*/
      }
      if ( v38 ) /*0x140a1fbde*/
      {
        v65 = v4; /*0x140a1fbe0*/
        v40 = *((const __m128i **)v22 + 2); /*0x140a1fbe4*/
        v66 = v38; /*0x140a1fbe8*/
        nullsub_1(); /*0x140a1fbef*/
        v39 = 1; /*0x140a1fbf4*/
        v41 = (__m128i *)sub_140001350(v66, 1); /*0x140a1fc06*/
        v38 = v66; /*0x140a1fc0b*/
        if ( !v41 ) /*0x140a1fc15*/
LABEL_54:
          sub_1415F08AB(v39, v38); /*0x140a1fbb6*/
        v63 = (__int64)v41; /*0x140a1fc17*/
        v28 = sub_1415B2FE0(v41, v40, v66); /*0x140a1fc24*/
        v4 = v65; /*0x140a1fc29*/
        v29 = v62; /*0x140a1fc2d*/
      }
      else
      {
        v28 = 1; /*0x140a1fc33*/
        v63 = 1; /*0x140a1fc38*/
        v66 = 0; /*0x140a1fc3c*/
      }
      goto LABEL_61; /*0x140a1fc31*/
    }
    v4->m128i_i64[1] = sub_1415CA890(v22, &v67, &unk_1416C7348); /*0x140a1fe4c*/
    v4->m128i_i64[0] = -1; /*0x140a1fe50*/
    v42 = v62; /*0x140a1fe57*/
    v14 = v64; /*0x140a1fe5e*/
    v43 = v59; /*0x140a1fe62*/
    if ( v62 > 0 ) /*0x140a1fe66*/
    {
LABEL_66:
      v44 = v42; /*0x140a1fca3*/
      v45 = v14; /*0x140a1fcb0*/
      sub_140001360(v61, v44, 1); /*0x140a1fcb6*/
      v14 = v45; /*0x140a1fcbb*/
    }
LABEL_67:
    if ( v43 ) /*0x140a1fcc1*/
    {
      v46 = v14; /*0x140a1fcd1*/
      sub_140001360(v60, v43, 1); /*0x140a1fcd7*/
      v14 = v46; /*0x140a1fcdc*/
    }
    goto LABEL_23; /*0x140a1fcdf*/
  }
  v66 = -1; /*0x140a1fbd1*/
LABEL_61:
  if ( v22 + 32 != v7 ) /*0x140a1fc4e*/
  {
    sub_1405E13F0(&v54); /*0x140a1fc58*/
    v28 = v54.m128i_i64[1]; /*0x140a1fc62*/
    v36 = v54.m128i_i64[0]; /*0x140a1fc62*/
    if ( v54.m128i_i64[0] == -2 ) /*0x140a1fc6a*/
    {
      v4->m128i_i64[1] = v54.m128i_i64[1]; /*0x140a1fc6c*/
      v4->m128i_i64[0] = -1; /*0x140a1fc70*/
      v42 = v62; /*0x140a1fc81*/
      if ( v66 > 0 ) /*0x140a1fc85*/
        sub_140001360(v63, v66, 1); /*0x140a1fc91*/
      v14 = v64; /*0x140a1fc99*/
      v43 = v59; /*0x140a1fc9d*/
      if ( v42 <= 0 ) /*0x140a1fca1*/
        goto LABEL_67; /*0x140a1fca1*/
      goto LABEL_66; /*0x140a1fca1*/
    }
    a1 = v55; /*0x140a1fcea*/
    v37 = v7 == v22 + 64; /*0x140a1fcf1*/
    v29 = v62; /*0x140a1fcf5*/
  }
  v3 = v63; /*0x140a1fcf9*/
LABEL_72:
  v47 = -1; /*0x140a1fcfd*/
  if ( v36 != -2 ) /*0x140a1fd08*/
    v47 = v36; /*0x140a1fd08*/
  v48 = v64; /*0x140a1fd0c*/
  v4->m128i_i64[0] = v64; /*0x140a1fd10*/
  v4->m128i_i64[1] = v56; /*0x140a1fd17*/
  v4[1].m128i_i64[0] = v48; /*0x140a1fd1b*/
  v49 = v57; /*0x140a1fd1f*/
  v4[1].m128i_i64[1] = v57; /*0x140a1fd23*/
  v4[2].m128i_i64[0] = v58; /*0x140a1fd2b*/
  v4[2].m128i_i64[1] = v49; /*0x140a1fd2f*/
  v50 = v59; /*0x140a1fd33*/
  v4[3].m128i_i64[0] = v59; /*0x140a1fd37*/
  v4[3].m128i_i64[1] = v60; /*0x140a1fd3f*/
  v4[4].m128i_i64[0] = v50; /*0x140a1fd43*/
  v4[4].m128i_i64[1] = v29; /*0x140a1fd47*/
  v4[5].m128i_i64[0] = v61; /*0x140a1fd4f*/
  v4[5].m128i_i64[1] = v29; /*0x140a1fd53*/
  v51 = v66; /*0x140a1fd57*/
  v4[6].m128i_i64[0] = v66; /*0x140a1fd5e*/
  v4[6].m128i_i64[1] = v3; /*0x140a1fd62*/
  v4[7].m128i_i64[0] = v51; /*0x140a1fd66*/
  v4[7].m128i_i64[1] = v47; /*0x140a1fd6a*/
  v4[8].m128i_i64[0] = v28; /*0x140a1fd6e*/
  v4[8].m128i_i64[1] = (__int64)a1; /*0x140a1fd75*/
  sub_1415B2FE0(&v54, v4, 0x90u); /*0x140a1fd89*/
  if ( !v37 ) /*0x140a1fd91*/
  {
    v65 = v4; /*0x140a1fdfd*/
    v53 = sub_1415C4380(v6, &off_1416C25F0, &unk_1416C2600); /*0x140a1fe12*/
    v4 = v65; /*0x140a1fe18*/
    v65->m128i_i64[1] = v53; /*0x140a1fe1c*/
    v4->m128i_i64[0] = -1; /*0x140a1fe20*/
    sub_1402072E0(&v54); /*0x140a1fe2b*/
  }
  return v4; /*0x140a1fd96*/
}