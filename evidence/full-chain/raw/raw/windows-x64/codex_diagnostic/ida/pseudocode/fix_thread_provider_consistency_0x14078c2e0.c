// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::fix_thread_provider_consistency | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall fix_thread_provider_consistency(__int64 a1, __int64 a2, unsigned int a3)
{
  const char *v6; // r8
  __int64 result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdi
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _OWORD *v26; // rcx
  __int128 v27; // xmm0
  _OWORD *v28; // rcx
  __int128 v29; // xmm0
  __int64 v30; // rdx
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  _QWORD *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rdi
  void *v39; // rax
  __int64 v40; // rcx
  _OWORD *v41; // rcx
  __int128 v42; // xmm0
  __int128 v43; // [rsp+28h] [rbp-58h] BYREF
  __int64 v44; // [rsp+38h] [rbp-48h]
  __int128 v45; // [rsp+40h] [rbp-40h] BYREF
  __int64 v46; // [rsp+50h] [rbp-30h]
  __int128 v47; // [rsp+58h] [rbp-28h] BYREF
  __int64 v48; // [rsp+68h] [rbp-18h]
  _BYTE v49[24]; // [rsp+70h] [rbp-10h]
  __m256i v50; // [rsp+88h] [rbp+8h]
  __int128 v51; // [rsp+A8h] [rbp+28h]
  __m256i v52; // [rsp+B8h] [rbp+38h]
  __int128 v53; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v54; // [rsp+E8h] [rbp+68h]
  __int128 v55; // [rsp+F8h] [rbp+78h]
  __int128 v56; // [rsp+108h] [rbp+88h]
  _OWORD v57[2]; // [rsp+118h] [rbp+98h] BYREF
  __int128 v58; // [rsp+138h] [rbp+B8h]
  __int64 v59; // [rsp+148h] [rbp+C8h]
  __int128 v60; // [rsp+150h] [rbp+D0h] BYREF
  _BYTE v61[24]; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v62; // [rsp+178h] [rbp+F8h] BYREF
  __m256i v63; // [rsp+188h] [rbp+108h]
  __m256i v64; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v65; // [rsp+1C8h] [rbp+148h]
  __int128 v66; // [rsp+1D8h] [rbp+158h]
  __int128 v67; // [rsp+1E8h] [rbp+168h]
  __int128 v68; // [rsp+1F8h] [rbp+178h]
  __int128 v69; // [rsp+208h] [rbp+188h]
  __int128 v70; // [rsp+218h] [rbp+198h]
  _BYTE v71[24]; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v72; // [rsp+248h] [rbp+1C8h]
  char v73; // [rsp+258h] [rbp+1D8h]
  __int128 v74; // [rsp+268h] [rbp+1E8h]
  __int64 v75; // [rsp+278h] [rbp+1F8h]
  __int128 v76; // [rsp+280h] [rbp+200h] BYREF
  _BYTE v77[48]; // [rsp+290h] [rbp+210h]
  __m256i v78; // [rsp+2C0h] [rbp+240h]
  char v79; // [rsp+2E7h] [rbp+267h] BYREF
  __int64 v80; // [rsp+2E8h] [rbp+268h]
  char v81; // [rsp+2F5h] [rbp+275h]
  char v82; // [rsp+2F6h] [rbp+276h]
  char v83; // [rsp+2F7h] [rbp+277h]
  __int64 v84; // [rsp+2F8h] [rbp+278h]

  v84 = -2; /*0x14078c2f5*/
  v6 = aOpenai_0; /*0x14078c310*/
  if ( (a3 & 1) != 0 ) /*0x14078c31a*/
    v6 = aAimai1_1; /*0x14078c31a*/
  *(_QWORD *)&v60 = v6; /*0x14078c31e*/
  *((_QWORD *)&v60 + 1) = 6; /*0x14078c325*/
  sub_1404C22C0(v61, a2, v6, 6); /*0x14078c33d*/
  if ( *(_OWORD *)&v64.m256i_u64[1] != 0 /*0x14078c372*/
    || __PAIR128__(v64.m256i_u64[3], 0) != (unsigned __int64)v65
    || v63.m256i_i64[0] )
  {
    sub_14043F590(v61); /*0x14078c37f*/
    v72 = v60; /*0x14078c38b*/
    v73 = 0; /*0x14078c392*/
    *(_QWORD *)v71 = -1; /*0x14078c399*/
    reconcile_threads(v61, a2, v71); /*0x14078c3b8*/
    result = *(_QWORD *)v61; /*0x14078c3bd*/
    v76 = *(_OWORD *)&v61[8]; /*0x14078c3cb*/
    *(_OWORD *)v77 = v62; /*0x14078c3d9*/
    *(__m256i *)&v77[16] = v63; /*0x14078c3e7*/
    v78 = v64; /*0x14078c403*/
    if ( *(_QWORD *)v61 == 2 ) /*0x14078c41c*/
    {
      *(__m256i *)(a1 + 64) = v78; /*0x14078c425*/
      v8 = v76; /*0x14078c434*/
      v9 = *(_OWORD *)v77; /*0x14078c43b*/
      v10 = *(_OWORD *)&v77[16]; /*0x14078c442*/
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v77[32]; /*0x14078c450*/
      *(_OWORD *)(a1 + 32) = v10; /*0x14078c454*/
      *(_OWORD *)(a1 + 16) = v9; /*0x14078c458*/
      *(_OWORD *)a1 = v8; /*0x14078c45c*/
      return result; /*0x14078c45f*/
    }
    v57[1] = v70; /*0x14078c46b*/
    v57[0] = v69; /*0x14078c479*/
    v56 = v68; /*0x14078c49c*/
    v55 = v67; /*0x14078c4a3*/
    v54 = v66; /*0x14078c4a7*/
    v53 = v65; /*0x14078c4ab*/
    *(_OWORD *)&v49[8] = v76; /*0x14078c4cb*/
    v50 = *(__m256i *)v77; /*0x14078c4cf*/
    v51 = *(_OWORD *)&v77[32]; /*0x14078c4d7*/
    v52 = v78; /*0x14078c4e2*/
    *(_QWORD *)v49 = *(_QWORD *)v61; /*0x14078c4f1*/
    if ( v65 != 0 && *(_QWORD *)off_141EC8D80 >= 3u ) /*0x14078c511*/
    {
      *(_QWORD *)&v76 = &v53; /*0x14078c51f*/
      *((_QWORD *)&v76 + 1) = sub_1414AC520; /*0x14078c52d*/
      *(_QWORD *)v77 = (char *)&v53 + 8; /*0x14078c534*/
      *(_QWORD *)&v77[8] = sub_1414AC520; /*0x14078c53b*/
      *(_QWORD *)v61 = 0; /*0x14078c542*/
      *(_QWORD *)&v61[8] = aCodexmateLibCo_29; /*0x14078c554*/
      *(_QWORD *)&v61[16] = 44; /*0x14078c55b*/
      *(_QWORD *)&v62 = 0; /*0x14078c566*/
      *((_QWORD *)&v62 + 1) = aSrcCoreRelayCo_1; /*0x14078c578*/
      v63.m256i_i64[0] = 34; /*0x14078c57f*/
      v63.m256i_i64[1] = 3; /*0x14078c58a*/
      v63.m256i_i64[2] = (__int64)aCodexmateLibCo_29; /*0x14078c595*/
      v63.m256i_i64[3] = 44; /*0x14078c59c*/
      v64.m256i_i64[0] = 0x6F100000001LL; /*0x14078c5b1*/
      v64.m256i_i64[1] = (__int64)&unk_14178EE05; /*0x14078c5bf*/
      v64.m256i_i64[2] = (__int64)&v76; /*0x14078c5cd*/
      sub_1412C36A0(&v79, v61); /*0x14078c5e2*/
    }
    sub_14078E5C0(v61, a2, a3); /*0x14078c5f5*/
    if ( v63.m256i_i64[0] == 2 && (v12 = *((_QWORD *)&v62 + 1), **((_WORD **)&v62 + 1) == 27503) ) /*0x14078c611*/
    {
      nullsub_1(v11); /*0x14078cab8*/
      v36 = sub_140001650(24, 8); /*0x14078cac7*/
      if ( !v36 ) /*0x14078cacf*/
      {
        v83 = 1; /*0x14078cd3a*/
        sub_1416C2D31(8, 24); /*0x14078cd4b*/
      }
      v38 = (_QWORD *)v36; /*0x14078cad5*/
      nullsub_1(v37); /*0x14078cad8*/
      v39 = (void *)sub_140001650(27, 1); /*0x14078cae7*/
      if ( !v39 ) /*0x14078caef*/
      {
        v80 = (__int64)v38; /*0x14078cd97*/
        sub_1416C2D4B(1, 27); /*0x14078cda8*/
      }
      qmemcpy(v39, "thread_provider_consistency", 27); /*0x14078cb07*/
      *v38 = 27; /*0x14078cb0a*/
      v38[1] = v39; /*0x14078cb11*/
      v38[2] = 27; /*0x14078cb15*/
      *(_QWORD *)&v74 = 1; /*0x14078cb1d*/
      *((_QWORD *)&v74 + 1) = v38; /*0x14078cb28*/
      v75 = 1; /*0x14078cb2f*/
      *(_QWORD *)v71 = 0; /*0x14078cb3a*/
      *(_QWORD *)&v71[8] = 8; /*0x14078cb45*/
      *(_QWORD *)&v71[16] = 0; /*0x14078cb50*/
      nullsub_1(v40); /*0x14078cb5b*/
      v80 = sub_140001650(24, 8); /*0x14078cb6f*/
      if ( !v80 ) /*0x14078cb79*/
        sub_1416C2D31(8, 24); /*0x14078cd5d*/
      *(_QWORD *)&v76 = v57; /*0x14078cb86*/
      *((_QWORD *)&v76 + 1) = sub_1414AC520; /*0x14078cb94*/
      *(_QWORD *)v77 = &v60; /*0x14078cba2*/
      *(_QWORD *)&v77[8] = sub_14041F680; /*0x14078cbb0*/
      sub_14149C0F0(&v45, &unk_14178EEA4, &v76); /*0x14078cbc9*/
      v41 = (_OWORD *)v80; /*0x14078cbd3*/
      *(_QWORD *)(v80 + 16) = v46; /*0x14078cbda*/
      *v41 = v45; /*0x14078cbe2*/
      v42 = v74; /*0x14078cbe5*/
      v76 = v74; /*0x14078cbec*/
      *(_QWORD *)v77 = v75; /*0x14078cbfa*/
      *(_QWORD *)&v77[24] = *(_QWORD *)&v71[16]; /*0x14078cc08*/
      *(_OWORD *)&v77[8] = *(_OWORD *)v71; /*0x14078cc16*/
      *(_QWORD *)(a1 + 40) = *(_QWORD *)&v71[8]; /*0x14078cc24*/
      *(_QWORD *)(a1 + 48) = *(_QWORD *)&v77[24]; /*0x14078cc2f*/
      *(_OWORD *)(a1 + 24) = *(_OWORD *)v77; /*0x14078cc3a*/
      *(_OWORD *)(a1 + 8) = v42; /*0x14078cc49*/
      *(_QWORD *)(a1 + 56) = 1; /*0x14078cc4d*/
      *(_QWORD *)(a1 + 64) = v41; /*0x14078cc55*/
      *(_QWORD *)(a1 + 72) = 1; /*0x14078cc59*/
      *(_QWORD *)a1 = -1; /*0x14078cc61*/
      if ( *(_QWORD *)v61 ) /*0x14078cc72*/
        sub_140001660(*(_QWORD *)&v61[8], *(_QWORD *)v61, 1); /*0x14078cc81*/
      if ( (_QWORD)v62 ) /*0x14078cc90*/
        sub_140001660(v12, v62, 1); /*0x14078cc9b*/
      if ( v63.m256i_i64[1] ) /*0x14078ccaa*/
        sub_140001660(v63.m256i_i64[2], v63.m256i_i64[1], 1); /*0x14078ccb9*/
      v30 = v64.m256i_i64[0]; /*0x14078ccbe*/
      if ( (unsigned __int64)(v64.m256i_i64[0] - 1) > 0xFFFFFFFFFFFFFFFDuLL ) /*0x14078cccd*/
        goto LABEL_31; /*0x14078cccd*/
      v31 = &v64.m256i_i64[1]; /*0x14078ccd3*/
    }
    else
    {
      *(_QWORD *)&v58 = 0; /*0x14078c617*/
      *((_QWORD *)&v58 + 1) = 8; /*0x14078c622*/
      v59 = 0; /*0x14078c62d*/
      nullsub_1(v11); /*0x14078c638*/
      v13 = sub_140001650(24, 8); /*0x14078c647*/
      if ( !v13 ) /*0x14078c64f*/
      {
        v82 = 1; /*0x14078ccdf*/
        sub_1416C2D31(8, 24); /*0x14078ccf0*/
      }
      v15 = (_QWORD *)v13; /*0x14078c655*/
      nullsub_1(v14); /*0x14078c658*/
      v16 = (void *)sub_140001650(27, 1); /*0x14078c667*/
      if ( !v16 ) /*0x14078c66f*/
      {
        v80 = (__int64)v15; /*0x14078cd65*/
        sub_1416C2D4B(1, 27); /*0x14078cd76*/
      }
      qmemcpy(v16, "thread_provider_consistency", 27); /*0x14078c687*/
      *v15 = 27; /*0x14078c68a*/
      v15[1] = v16; /*0x14078c691*/
      v15[2] = 27; /*0x14078c695*/
      *(_QWORD *)&v74 = 1; /*0x14078c69d*/
      *((_QWORD *)&v74 + 1) = v15; /*0x14078c6a8*/
      v75 = 1; /*0x14078c6af*/
      nullsub_1(v17); /*0x14078c6ba*/
      v18 = sub_140001650(24, 8); /*0x14078c6c9*/
      if ( !v18 ) /*0x14078c6d1*/
      {
        v81 = 1; /*0x14078ccfb*/
        sub_1416C2D31(8, 24); /*0x14078cd0c*/
      }
      v80 = v18; /*0x14078c6d7*/
      if ( v64.m256i_i64[0] == -1 ) /*0x14078c6f0*/
      {
        *(_QWORD *)&v71[16] = v63.m256i_i64[3]; /*0x14078c8d3*/
        *(_OWORD *)v71 = *(_OWORD *)&v63.m256i_u64[1]; /*0x14078c8dd*/
      }
      else
      {
        *(_QWORD *)v71 = v64.m256i_i64[0]; /*0x14078c704*/
        *(_OWORD *)&v71[8] = *(_OWORD *)&v64.m256i_u64[1]; /*0x14078c712*/
        if ( v63.m256i_i64[1] ) /*0x14078c71c*/
          sub_140001660(v63.m256i_i64[2], v63.m256i_i64[1], 1); /*0x14078c728*/
      }
      *(_QWORD *)&v76 = v57; /*0x14078c8e4*/
      *((_QWORD *)&v76 + 1) = sub_1414AC520; /*0x14078c8f2*/
      *(_QWORD *)v77 = v71; /*0x14078c8f9*/
      *(_QWORD *)&v77[8] = sub_1400015F0; /*0x14078c907*/
      sub_14149C0F0(&v43, &unk_14178EE6D, &v76); /*0x14078c920*/
      if ( *(_QWORD *)v71 ) /*0x14078c930*/
        sub_140001660(*(_QWORD *)&v71[8], *(_QWORD *)v71, 1); /*0x14078c93f*/
      v28 = (_OWORD *)v80; /*0x14078c948*/
      *(_QWORD *)(v80 + 16) = v44; /*0x14078c94f*/
      *v28 = v43; /*0x14078c957*/
      v29 = v58; /*0x14078c95a*/
      v76 = v58; /*0x14078c961*/
      *(_QWORD *)v77 = v59; /*0x14078c96f*/
      *(_QWORD *)&v77[24] = v75; /*0x14078c97d*/
      *(_OWORD *)&v77[8] = v74; /*0x14078c98b*/
      *(_QWORD *)(a1 + 40) = *((_QWORD *)&v74 + 1); /*0x14078c999*/
      *(_QWORD *)(a1 + 48) = *(_QWORD *)&v77[24]; /*0x14078c9a4*/
      *(_OWORD *)(a1 + 24) = *(_OWORD *)v77; /*0x14078c9af*/
      *(_OWORD *)(a1 + 8) = v29; /*0x14078c9be*/
      *(_QWORD *)(a1 + 56) = 1; /*0x14078c9c2*/
      *(_QWORD *)(a1 + 64) = v28; /*0x14078c9ca*/
      *(_QWORD *)(a1 + 72) = 1; /*0x14078c9ce*/
      *(_QWORD *)a1 = -1; /*0x14078c9d6*/
      if ( *(_QWORD *)v61 ) /*0x14078c9e7*/
        sub_140001660(*(_QWORD *)&v61[8], *(_QWORD *)v61, 1); /*0x14078c9f6*/
      v30 = v62; /*0x14078c9fb*/
      if ( !(_QWORD)v62 ) /*0x14078ca05*/
        goto LABEL_31; /*0x14078ca05*/
      v31 = (__int64 *)&v62 + 1; /*0x14078ca07*/
    }
    sub_140001660(*v31, v30, 1); /*0x14078ca17*/
LABEL_31:
    if ( (_QWORD)v51 != -1 && (_QWORD)v51 ) /*0x14078ca29*/
      sub_140001660(*((_QWORD *)&v51 + 1), v51, 1); /*0x14078ca35*/
    v32 = v50.m256i_i64[3]; /*0x14078ca3e*/
    v33 = v50.m256i_i64[2]; /*0x14078ca3e*/
    if ( v50.m256i_i64[3] ) /*0x14078ca45*/
    {
      v34 = (_QWORD *)(v50.m256i_i64[2] + 8); /*0x14078ca47*/
      do /*0x14078ca57*/
      {
        v35 = *(v34 - 1); /*0x14078ca59*/
        if ( v35 ) /*0x14078ca60*/
          sub_140001660(*v34, v35, 1); /*0x14078ca6b*/
        v34 += 3; /*0x14078ca50*/
        --v32; /*0x14078ca54*/
      }
      while ( v32 ); /*0x14078ca57*/
    }
    result = v50.m256i_i64[1]; /*0x14078ca72*/
    if ( v50.m256i_i64[1] ) /*0x14078ca79*/
      result = sub_140001660(v33, 24 * v50.m256i_i64[1], 8); /*0x14078ca8c*/
    if ( *((_QWORD *)&v54 + 1) ) /*0x14078ca98*/
      return sub_140001660(v55, *((_QWORD *)&v54 + 1), 1); /*0x14078caa4*/
    return result; /*0x14078caa4*/
  }
  sub_14043F590(v61); /*0x14078c739*/
  nullsub_1(v19); /*0x14078c73e*/
  v20 = sub_140001650(24, 8); /*0x14078c74d*/
  if ( !v20 ) /*0x14078c755*/
    sub_1416C2D31(8, 24); /*0x14078cd21*/
  v22 = (_QWORD *)v20; /*0x14078c75b*/
  nullsub_1(v21); /*0x14078c75e*/
  v23 = (void *)sub_140001650(27, 1); /*0x14078c76d*/
  if ( !v23 ) /*0x14078c775*/
  {
    v80 = (__int64)v22; /*0x14078cd7e*/
    sub_1416C2D4B(1, 27); /*0x14078cd8f*/
  }
  qmemcpy(v23, "thread_provider_consistency", 27); /*0x14078c78d*/
  *v22 = 27; /*0x14078c790*/
  v22[1] = v23; /*0x14078c797*/
  v22[2] = 27; /*0x14078c79b*/
  *(_QWORD *)&v76 = 1; /*0x14078c7a3*/
  *((_QWORD *)&v76 + 1) = v22; /*0x14078c7ae*/
  *(_QWORD *)v77 = 1; /*0x14078c7b5*/
  *(_QWORD *)v49 = 0; /*0x14078c7c0*/
  *(_QWORD *)&v49[8] = 8; /*0x14078c7c8*/
  *(_QWORD *)&v49[16] = 0; /*0x14078c7d0*/
  nullsub_1(v24); /*0x14078c7d8*/
  v25 = sub_140001650(24, 8); /*0x14078c7e7*/
  if ( !v25 ) /*0x14078c7ef*/
    sub_1416C2D31(8, 24); /*0x14078cd32*/
  v80 = v25; /*0x14078c7f5*/
  *(_QWORD *)v61 = &v60; /*0x14078c803*/
  *(_QWORD *)&v61[8] = sub_14041F680; /*0x14078c811*/
  sub_14149C0F0(&v47, &unk_14178EEDC, v61); /*0x14078c82a*/
  v26 = (_OWORD *)v80; /*0x14078c834*/
  *(_QWORD *)(v80 + 16) = v48; /*0x14078c83b*/
  *v26 = v47; /*0x14078c843*/
  v27 = v76; /*0x14078c846*/
  *(_OWORD *)v61 = v76; /*0x14078c84d*/
  *(_QWORD *)&v61[16] = *(_QWORD *)v77; /*0x14078c85b*/
  v62 = *(_OWORD *)v49; /*0x14078c866*/
  v63.m256i_i64[0] = *(_QWORD *)&v49[16]; /*0x14078c871*/
  *(_QWORD *)(a1 + 40) = *(_QWORD *)&v49[8]; /*0x14078c87f*/
  *(_QWORD *)(a1 + 48) = v63.m256i_i64[0]; /*0x14078c88a*/
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v61[16]; /*0x14078c895*/
  result = v62; /*0x14078c899*/
  *(_QWORD *)(a1 + 32) = v62; /*0x14078c8a0*/
  *(_OWORD *)(a1 + 8) = v27; /*0x14078c8a4*/
  *(_QWORD *)(a1 + 56) = 1; /*0x14078c8a8*/
  *(_QWORD *)(a1 + 64) = v26; /*0x14078c8b0*/
  *(_QWORD *)(a1 + 72) = 1; /*0x14078c8b4*/
  *(_QWORD *)a1 = -1; /*0x14078c8bc*/
  return result; /*0x14078caaa*/
}