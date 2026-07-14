// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND pick_free_port node 0x1010e2820 depth=3
unsigned __int64 __fastcall core::net::parser::Parser::read_ipv4_addr::h434e111a2f9db859(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // r10d
  unsigned __int64 v6; // r9
  unsigned int v7; // esi
  unsigned int v8; // r8d
  char v9; // si
  unsigned __int8 *v10; // r8
  char v11; // si
  unsigned __int8 *v12; // r10
  unsigned __int64 v13; // rbx
  int v14; // r11d
  unsigned int v15; // esi
  unsigned __int64 v16; // r15
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  char v19; // r14
  unsigned __int8 *v20; // r8
  unsigned int v21; // r9d
  char v22; // r14
  unsigned __int8 *v23; // r8
  unsigned __int64 v24; // r11
  int v25; // r14d
  unsigned __int64 v26; // r12
  unsigned int v27; // r15d
  unsigned int v28; // r13d
  char v29; // r15
  unsigned __int8 *v30; // r10
  char v31; // r15
  unsigned __int64 v32; // r10
  int v33; // r15d
  unsigned __int64 v34; // r12
  unsigned int v35; // r14d
  unsigned int v36; // r13d
  char v37; // r14
  unsigned __int8 *v38; // r11
  char v39; // r14
  unsigned __int8 v40; // cl

  v3 = *a1; /*0x1010e2820*/
  v4 = a1[1]; /*0x1010e2823*/
  if ( !v4 ) /*0x1010e282a*/
    goto LABEL_9; /*0x1010e282a*/
  v5 = *(unsigned __int8 *)v3; /*0x1010e282c*/
  a3 = v5 - 48; /*0x1010e2830*/
  if ( (unsigned int)(v5 - 48) > 9 ) /*0x1010e2837*/
    goto LABEL_9; /*0x1010e2837*/
  v6 = v4 - 1; /*0x1010e283c*/
  if ( v4 == 1 ) /*0x1010e283f*/
    goto LABEL_10; /*0x1010e283f*/
  v7 = *(unsigned __int8 *)(v3 + 1) - 48; /*0x1010e2845*/
  if ( v7 > 9 ) /*0x1010e284b*/
  {
    v10 = (unsigned __int8 *)(v3 + 1); /*0x1010e28ab*/
    v9 = 0; /*0x1010e28af*/
    goto LABEL_13; /*0x1010e28b1*/
  }
  a3 = v7 + 10 * a3; /*0x1010e2853*/
  v6 = v4 - 2; /*0x1010e2856*/
  if ( v4 == 2 ) /*0x1010e285a*/
    goto LABEL_10; /*0x1010e285a*/
  v8 = *(unsigned __int8 *)(v3 + 2) - 48; /*0x1010e2861*/
  v9 = 1; /*0x1010e2865*/
  if ( v8 > 9 ) /*0x1010e286c*/
  {
    v10 = (unsigned __int8 *)(v3 + 2); /*0x1010e28b3*/
    goto LABEL_13; /*0x1010e28b3*/
  }
  a3 = v8 + 10 * a3; /*0x1010e2874*/
  v6 = v4 - 3; /*0x1010e2878*/
  if ( v4 == 3 ) /*0x1010e287c*/
  {
LABEL_10:
    v10 = (unsigned __int8 *)(v3 + v4); /*0x1010e289a*/
    v9 = v4 != 1; /*0x1010e28a2*/
    v6 = 0; /*0x1010e28a6*/
    goto LABEL_13; /*0x1010e28a9*/
  }
  v10 = (unsigned __int8 *)(v3 + 3); /*0x1010e287e*/
  if ( (unsigned __int8)(*(_BYTE *)(v3 + 3) - 48) < 0xAu ) /*0x1010e288e*/
  {
LABEL_9:
    v11 = 0; /*0x1010e2890*/
    v6 = a1[1]; /*0x1010e2892*/
    v10 = (unsigned __int8 *)*a1; /*0x1010e2895*/
    goto LABEL_15; /*0x1010e2898*/
  }
LABEL_13:
  v11 = (a3 < 0x100) & (((_BYTE)v5 != 48) | ~v9); /*0x1010e28b7*/
  if ( !v11 ) /*0x1010e28d2*/
  {
    v6 = a1[1]; /*0x1010e28d2*/
    v10 = (unsigned __int8 *)*a1; /*0x1010e28d6*/
  }
LABEL_15:
  if ( (v11 & 1) == 0 ) /*0x1010e28eb*/
    goto LABEL_64; /*0x1010e28eb*/
  if ( !v6 ) /*0x1010e28f4*/
    goto LABEL_64; /*0x1010e28f4*/
  if ( *v10 != 46 ) /*0x1010e28fe*/
    goto LABEL_64; /*0x1010e28fe*/
  v12 = v10 + 1; /*0x1010e2904*/
  v13 = v6 - 1; /*0x1010e290b*/
  if ( v6 == 1 ) /*0x1010e290e*/
    goto LABEL_64; /*0x1010e290e*/
  v14 = v10[1]; /*0x1010e2910*/
  v15 = v14 - 48; /*0x1010e2915*/
  if ( (unsigned int)(v14 - 48) > 9 ) /*0x1010e291c*/
    goto LABEL_64; /*0x1010e291c*/
  v16 = v6 - 2; /*0x1010e2921*/
  if ( v6 == 2 ) /*0x1010e2925*/
    goto LABEL_27; /*0x1010e2925*/
  v17 = v10[2] - 48; /*0x1010e292c*/
  if ( v17 > 9 ) /*0x1010e2934*/
  {
    v20 = v10 + 2; /*0x1010e2998*/
    v19 = 0; /*0x1010e299c*/
    goto LABEL_30; /*0x1010e299f*/
  }
  v15 = v17 + 10 * v15; /*0x1010e293c*/
  v16 = v6 - 3; /*0x1010e2940*/
  if ( v6 == 3 ) /*0x1010e2944*/
    goto LABEL_27; /*0x1010e2944*/
  v18 = v10[3] - 48; /*0x1010e294b*/
  v19 = 1; /*0x1010e294f*/
  if ( v18 > 9 ) /*0x1010e2956*/
  {
    v20 = v10 + 3; /*0x1010e29a1*/
    goto LABEL_30; /*0x1010e29a1*/
  }
  v15 = v18 + 10 * v15; /*0x1010e295e*/
  v16 = v6 - 4; /*0x1010e2962*/
  if ( v6 == 4 ) /*0x1010e2966*/
  {
LABEL_27:
    v20 = &v10[v6]; /*0x1010e2988*/
    v19 = v13 != 1; /*0x1010e298f*/
    v16 = 0; /*0x1010e2993*/
    goto LABEL_30; /*0x1010e2996*/
  }
  v20 = v10 + 4; /*0x1010e2968*/
  if ( (unsigned __int8)(*v20 - 48) < 0xAu ) /*0x1010e2978*/
    goto LABEL_64; /*0x1010e2978*/
LABEL_30:
  LOBYTE(v21) = (_BYTE)v14 != 48; /*0x1010e29a5*/
  v22 = (v15 < 0x100) & (((_BYTE)v14 != 48) | ~v19); /*0x1010e29bd*/
  if ( v22 ) /*0x1010e29c0*/
  {
    v13 = v16; /*0x1010e29c0*/
    v12 = v20; /*0x1010e29c4*/
  }
  if ( (v22 & 1) == 0 || !v13 || *v12 != 46 ) /*0x1010e29df*/
    goto LABEL_64; /*0x1010e29df*/
  v23 = v12 + 1; /*0x1010e29e5*/
  v24 = v13 - 1; /*0x1010e29ec*/
  if ( v13 == 1 ) /*0x1010e29ef*/
    goto LABEL_43; /*0x1010e29ef*/
  v25 = v12[1]; /*0x1010e29f1*/
  v21 = v25 - 48; /*0x1010e29f6*/
  if ( (unsigned int)(v25 - 48) > 9 ) /*0x1010e29fe*/
    goto LABEL_43; /*0x1010e29fe*/
  v26 = v13 - 2; /*0x1010e2a03*/
  if ( v13 == 2 ) /*0x1010e2a07*/
    goto LABEL_44; /*0x1010e2a07*/
  v27 = v12[2] - 48; /*0x1010e2a0e*/
  if ( v27 > 9 ) /*0x1010e2a16*/
  {
    v30 = v12 + 2; /*0x1010e2a72*/
    v29 = 0; /*0x1010e2a76*/
    goto LABEL_47; /*0x1010e2a79*/
  }
  v21 = v27 + 10 * v21; /*0x1010e2a1f*/
  v26 = v13 - 3; /*0x1010e2a23*/
  if ( v13 == 3 ) /*0x1010e2a27*/
    goto LABEL_44; /*0x1010e2a27*/
  v28 = v12[3] - 48; /*0x1010e2a2e*/
  v29 = 1; /*0x1010e2a32*/
  if ( v28 > 9 ) /*0x1010e2a39*/
  {
    v30 = v12 + 3; /*0x1010e2a7b*/
    goto LABEL_47; /*0x1010e2a7b*/
  }
  v21 = v28 + 10 * v21; /*0x1010e2a42*/
  v26 = v13 - 4; /*0x1010e2a47*/
  if ( v13 == 4 ) /*0x1010e2a4b*/
  {
LABEL_44:
    v30 = &v12[v13]; /*0x1010e2a62*/
    v29 = v24 != 1; /*0x1010e2a69*/
    v26 = 0; /*0x1010e2a6d*/
    goto LABEL_47; /*0x1010e2a70*/
  }
  v30 = v12 + 4; /*0x1010e2a4d*/
  LOBYTE(v13) = *v30 - 48; /*0x1010e2a55*/
  if ( (unsigned __int8)v13 < 0xAu ) /*0x1010e2a5b*/
  {
LABEL_43:
    v31 = 0; /*0x1010e2a5d*/
    goto LABEL_49; /*0x1010e2a60*/
  }
LABEL_47:
  LOBYTE(v13) = (_BYTE)v25 != 48; /*0x1010e2a7f*/
  v31 = (v21 < 0x100) & (((_BYTE)v25 != 48) | ~v29); /*0x1010e2a97*/
  if ( v31 ) /*0x1010e2a9a*/
  {
    v24 = v26; /*0x1010e2a9a*/
    v23 = v30; /*0x1010e2a9e*/
  }
LABEL_49:
  if ( (v31 & 1) == 0 || !v24 || *v23 != 46 ) /*0x1010e2ab9*/
    goto LABEL_64; /*0x1010e2ab9*/
  v32 = v24 - 1; /*0x1010e2ac2*/
  if ( v24 == 1 ) /*0x1010e2ac5*/
    goto LABEL_60; /*0x1010e2ac5*/
  v33 = v23[1]; /*0x1010e2ac7*/
  LODWORD(v13) = v33 - 48; /*0x1010e2acc*/
  if ( (unsigned int)(v33 - 48) > 9 ) /*0x1010e2ad3*/
    goto LABEL_60; /*0x1010e2ad3*/
  v34 = v24 - 2; /*0x1010e2ad8*/
  if ( v24 == 2 ) /*0x1010e2adc*/
    goto LABEL_66; /*0x1010e2adc*/
  v35 = v23[2] - 48; /*0x1010e2ae7*/
  if ( v35 > 9 ) /*0x1010e2aef*/
  {
    v38 = v23 + 2; /*0x1010e2ba4*/
    v37 = 0; /*0x1010e2ba8*/
    goto LABEL_69; /*0x1010e2bab*/
  }
  LODWORD(v13) = v35 + 10 * v13; /*0x1010e2afb*/
  v34 = v24 - 3; /*0x1010e2aff*/
  if ( v24 == 3 ) /*0x1010e2b03*/
    goto LABEL_66; /*0x1010e2b03*/
  v36 = v23[3] - 48; /*0x1010e2b0e*/
  v37 = 1; /*0x1010e2b12*/
  if ( v36 > 9 ) /*0x1010e2b19*/
  {
    v38 = v23 + 3; /*0x1010e2bad*/
    goto LABEL_69; /*0x1010e2bad*/
  }
  LODWORD(v13) = v36 + 10 * v13; /*0x1010e2b25*/
  v34 = v24 - 4; /*0x1010e2b2a*/
  if ( v24 == 4 ) /*0x1010e2b2e*/
  {
LABEL_66:
    v38 = &v23[v24]; /*0x1010e2b94*/
    v37 = v32 != 1; /*0x1010e2b9b*/
    v34 = 0; /*0x1010e2b9f*/
    goto LABEL_69; /*0x1010e2ba2*/
  }
  v38 = v23 + 4; /*0x1010e2b30*/
  if ( (unsigned __int8)(v23[4] - 48) < 0xAu ) /*0x1010e2b40*/
  {
LABEL_60:
    v39 = 0; /*0x1010e2b42*/
LABEL_61:
    *a1 = (unsigned __int64)(v23 + 1); /*0x1010e2b45*/
    a1[1] = v32; /*0x1010e2b4b*/
    goto LABEL_62; /*0x1010e2b4b*/
  }
LABEL_69:
  *a1 = (unsigned __int64)v38; /*0x1010e2bb1*/
  a1[1] = v34; /*0x1010e2bbc*/
  v39 = ((unsigned int)v13 < 0x100) & (((_BYTE)v33 != 48) | ~v37); /*0x1010e2bd0*/
  if ( !v39 ) /*0x1010e2bd3*/
    goto LABEL_61; /*0x1010e2bd3*/
LABEL_62:
  if ( (v39 & 1) == 0 ) /*0x1010e2b53*/
  {
LABEL_64:
    *a1 = v3; /*0x1010e2b76*/
    a1[1] = v4; /*0x1010e2b79*/
    v40 = 0; /*0x1010e2b7d*/
    return v40 | (v3 << 8); /*0x1010e2b7d*/
  }
  v3 = ((unsigned __int8)v13 << 24) /*0x1010e2b70*/
     | ((unsigned __int8)v21 << 16)
     | ((unsigned __int8)v15 << 8)
     | (unsigned int)(unsigned __int8)a3;
  v40 = 1; /*0x1010e2b72*/
  return v40 | (v3 << 8); /*0x1010e2b93*/
}