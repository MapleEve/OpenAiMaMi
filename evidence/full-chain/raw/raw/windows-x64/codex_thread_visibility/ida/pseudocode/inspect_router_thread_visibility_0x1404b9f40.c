// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_visibility | 跨平台字符串签名匹配(名↔函数一致)
__int64 inspect_router_thread_visibility()
{
  unsigned __int64 v0; // rdi
  _QWORD *v1; // rsi
  __int64 *v2; // rax
  __int64 *v3; // r15
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // r14
  int v7; // r13d
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 *v12; // rcx
  int v13; // r12d
  int v14; // eax
  __int64 v15; // r9
  int v16; // r13d
  unsigned int v17; // eax
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // r10
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r8
  unsigned __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v30; // [rsp+20h] [rbp-60h]
  __int64 v31; // [rsp+28h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-50h]
  _QWORD *v33; // [rsp+38h] [rbp-48h]
  __int64 v34; // [rsp+38h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h]
  const char *v37; // [rsp+50h] [rbp-30h] BYREF
  __int64 v38; // [rsp+58h] [rbp-28h]
  __int128 v39; // [rsp+60h] [rbp-20h] BYREF
  __int128 v40; // [rsp+70h] [rbp-10h]
  __int128 v41; // [rsp+80h] [rbp+0h]
  __int128 v42; // [rsp+90h] [rbp+10h]
  __int128 v43; // [rsp+A0h] [rbp+20h]
  __int128 v44; // [rsp+B0h] [rbp+30h]
  __int128 v45; // [rsp+C0h] [rbp+40h]
  __int128 v46; // [rsp+D8h] [rbp+58h]
  __int64 v47; // [rsp+E8h] [rbp+68h]
  __int64 v48; // [rsp+F0h] [rbp+70h]
  __int64 v49; // [rsp+F8h] [rbp+78h]
  __int64 v50; // [rsp+100h] [rbp+80h]
  __int64 v51; // [rsp+108h] [rbp+88h]
  const char **v52; // [rsp+110h] [rbp+90h] BYREF
  void *v53; // [rsp+118h] [rbp+98h] BYREF
  _QWORD v54[2]; // [rsp+120h] [rbp+A0h] BYREF
  _QWORD v55[2]; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v56; // [rsp+140h] [rbp+C0h] BYREF
  _BYTE v57[48]; // [rsp+150h] [rbp+D0h]
  __int128 *v58; // [rsp+188h] [rbp+108h] BYREF
  __int64 v59; // [rsp+190h] [rbp+110h] BYREF
  __int64 v60; // [rsp+198h] [rbp+118h]
  __int128 v61; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v62; // [rsp+1B0h] [rbp+130h]
  __int128 v63; // [rsp+1C0h] [rbp+140h]
  __int128 v64; // [rsp+1D0h] [rbp+150h]
  __int128 v65; // [rsp+1E0h] [rbp+160h]
  __int128 v66; // [rsp+1F0h] [rbp+170h]
  _BYTE v67[72]; // [rsp+200h] [rbp+180h] BYREF
  __int64 v68; // [rsp+248h] [rbp+1C8h]
  void *v69; // [rsp+250h] [rbp+1D0h]
  __int128 *v70; // [rsp+258h] [rbp+1D8h]
  const char ***v71; // [rsp+268h] [rbp+1E8h] BYREF
  _BYTE v72[80]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v73; // [rsp+2C0h] [rbp+240h]
  __int128 v74; // [rsp+2D0h] [rbp+250h]
  _QWORD *v75; // [rsp+2E0h] [rbp+260h]
  char v76; // [rsp+2EFh] [rbp+26Fh] BYREF
  __int64 v77; // [rsp+2F0h] [rbp+270h]

  v77 = -2; /*0x1404b9f5b*/
  sub_140712830(v72); /*0x1404b9f73*/
  v32 = *(_QWORD *)&v72[8]; /*0x1404b9f95*/
  v46 = *(_OWORD *)v72; /*0x1404b9f99*/
  v35 = *(_QWORD *)v72; /*0x1404b9f9d*/
  v48 = *(_QWORD *)&v72[8] + 32LL * *(_QWORD *)&v72[16]; /*0x1404b9fa1*/
  v36 = v48; /*0x1404b9fa5*/
  v0 = 32LL * *(_QWORD *)&v72[16] - 32; /*0x1404b9fa9*/
  v1 = (_QWORD *)(*(_QWORD *)&v72[8] + 40LL); /*0x1404b9fad*/
  v2 = *(__int64 **)&v72[8]; /*0x1404b9fb5*/
  v49 = 0; /*0x1404b9fb8*/
  v50 = 0; /*0x1404b9fc0*/
  while ( 1 ) /*0x1404b9fe6*/
  {
    if ( v2 == (__int64 *)v48 ) /*0x1404b9fea*/
      goto LABEL_79; /*0x1404b9fea*/
    v3 = v2 + 4; /*0x1404b9ff0*/
    v33 = v2 + 4; /*0x1404b9ff4*/
    v47 = *v2; /*0x1404b9ffb*/
    if ( v47 == -1 ) /*0x1404ba003*/
      break; /*0x1404ba003*/
    v4 = v2[2]; /*0x1404ba00d*/
    v60 = v2[1]; /*0x1404ba014*/
    sub_141486710(v72, v60, v4); /*0x1404ba01e*/
    if ( *(_DWORD *)v72 == 2 ) /*0x1404ba02b*/
    {
      *((_QWORD *)&v39 + 1) = *(_QWORD *)&v72[8]; /*0x1404ba034*/
      *(_QWORD *)&v39 = 2; /*0x1404ba038*/
LABEL_8:
      sub_140018650((char *)&v39 + 8); /*0x1404ba099*/
      v5 = 0; /*0x1404ba0a3*/
      v6 = 0; /*0x1404ba0a6*/
      goto LABEL_9; /*0x1404ba0a6*/
    }
    v39 = *(_OWORD *)v72; /*0x1404ba06c*/
    *(_QWORD *)&v44 = v73; /*0x1404ba077*/
    v43 = *(_OWORD *)&v72[64]; /*0x1404ba082*/
    v42 = *(_OWORD *)&v72[48]; /*0x1404ba086*/
    v41 = *(_OWORD *)&v72[32]; /*0x1404ba08a*/
    v40 = *(_OWORD *)&v72[16]; /*0x1404ba08e*/
    if ( *(_QWORD *)v72 == 2 ) /*0x1404ba097*/
      goto LABEL_8; /*0x1404ba097*/
    sub_1404A4750(v72, v60, v4); /*0x1404ba0dd*/
    if ( BYTE8(v74) == 0xFF ) /*0x1404ba0ea*/
    {
      v66 = v73; /*0x1404ba22c*/
      v65 = *(_OWORD *)&v72[64]; /*0x1404ba23a*/
      v64 = *(_OWORD *)&v72[48]; /*0x1404ba25d*/
      v63 = *(_OWORD *)&v72[32]; /*0x1404ba264*/
      v62 = *(_OWORD *)&v72[16]; /*0x1404ba26b*/
      v61 = *(_OWORD *)v72; /*0x1404ba272*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404ba287*/
      {
        *(_QWORD *)&v56 = &v61; /*0x1404ba294*/
        *((_QWORD *)&v56 + 1) = sub_140B036A0; /*0x1404ba2a2*/
        *(_QWORD *)v67 = 0; /*0x1404ba2a9*/
        *(_QWORD *)&v67[8] = aCodexmateLibCo_0; /*0x1404ba2bb*/
        *(_OWORD *)&v67[16] = 0x33u; /*0x1404ba2c2*/
        *(_QWORD *)&v67[32] = aSrcCoreRelayCo_0; /*0x1404ba2df*/
        *(_QWORD *)&v67[40] = 41; /*0x1404ba2e6*/
        *(_QWORD *)&v67[48] = 2; /*0x1404ba2f1*/
        *(_QWORD *)&v67[56] = aCodexmateLibCo_0; /*0x1404ba2fc*/
        *(_QWORD *)&v67[64] = 51; /*0x1404ba303*/
        v68 = 0x15D00000001LL; /*0x1404ba318*/
        v69 = &unk_14175BEF6; /*0x1404ba326*/
        v70 = &v56; /*0x1404ba334*/
        sub_1412C36A0(&v76, v67); /*0x1404ba349*/
      }
      sub_14043E650(&v61); /*0x1404ba356*/
      v6 = 0; /*0x1404ba35c*/
      goto LABEL_46; /*0x1404ba35f*/
    }
    v45 = v74; /*0x1404ba0f7*/
    v44 = v73; /*0x1404ba102*/
    v43 = *(_OWORD *)&v72[64]; /*0x1404ba10d*/
    v42 = *(_OWORD *)&v72[48]; /*0x1404ba12d*/
    v41 = *(_OWORD *)&v72[32]; /*0x1404ba131*/
    v40 = *(_OWORD *)&v72[16]; /*0x1404ba135*/
    v39 = *(_OWORD *)v72; /*0x1404ba139*/
    v37 = aAimai1; /*0x1404ba144*/
    v38 = 6; /*0x1404ba148*/
    v52 = &v37; /*0x1404ba154*/
    v53 = &unk_14175B0F8; /*0x1404ba162*/
    v54[0] = &off_14175BD60; /*0x1404ba170*/
    v54[1] = &unk_14175B0F8; /*0x1404ba177*/
    v55[0] = &off_14175BAE0; /*0x1404ba185*/
    v55[1] = &unk_14175B0F8; /*0x1404ba18c*/
    sub_14046F850(v72, &v39, aSelectCountFro_2, 136); /*0x1404ba1a7*/
    *(_OWORD *)v67 = *(_OWORD *)&v72[8]; /*0x1404ba1c3*/
    *(_OWORD *)&v67[16] = *(_OWORD *)&v72[24]; /*0x1404ba1ca*/
    *(_OWORD *)&v67[32] = *(_OWORD *)&v72[40]; /*0x1404ba1d1*/
    *(_OWORD *)&v67[48] = *(_OWORD *)&v72[56]; /*0x1404ba1d8*/
    if ( *(_DWORD *)v72 == 1 ) /*0x1404ba1e2*/
    {
      *(_OWORD *)&v57[32] = *(_OWORD *)&v67[48]; /*0x1404ba204*/
      *(_OWORD *)&v57[16] = *(_OWORD *)&v67[32]; /*0x1404ba20b*/
      *(_OWORD *)v57 = *(_OWORD *)&v67[16]; /*0x1404ba212*/
      v56 = *(_OWORD *)v67; /*0x1404ba219*/
      goto LABEL_36; /*0x1404ba220*/
    }
    v64 = *(_OWORD *)&v67[48]; /*0x1404ba380*/
    v63 = *(_OWORD *)&v67[32]; /*0x1404ba387*/
    v62 = *(_OWORD *)&v67[16]; /*0x1404ba38e*/
    v61 = *(_OWORD *)v67; /*0x1404ba395*/
    v7 = sub_1414B6B70(*(_QWORD *)&v67[56]); /*0x1404ba3a8*/
    v71 = &v52; /*0x1404ba3b2*/
    if ( v7 ) /*0x1404ba3bc*/
    {
      sub_140424FF0(v72, &v61, &v71, 1); /*0x1404ba3d5*/
      v8 = *(_QWORD *)v72; /*0x1404ba3db*/
      if ( *(_QWORD *)v72 != -1 ) /*0x1404ba3e6*/
        goto LABEL_19; /*0x1404ba3e6*/
      v71 = (const char ***)v54; /*0x1404ba42b*/
      v9 = 2; /*0x1404ba432*/
      if ( v7 != 1 ) /*0x1404ba43c*/
      {
        sub_140424FF0(v72, &v61, &v71, 2); /*0x1404ba54d*/
        v8 = *(_QWORD *)v72; /*0x1404ba553*/
        if ( *(_QWORD *)v72 != -1 /*0x1404ba5aa*/
          || (v71 = (const char ***)v55, v9 = 3, v7 != 2)
          && (sub_140424FF0(v72, &v61, &v71, 3), v8 = *(_QWORD *)v72, *(_QWORD *)v72 != -1) )
        {
LABEL_19:
          v9 = *(_QWORD *)&v72[8]; /*0x1404ba3e8*/
          v10 = *(_QWORD *)&v72[16]; /*0x1404ba3ef*/
          *(_OWORD *)v67 = *(_OWORD *)&v72[24]; /*0x1404ba3fe*/
          *(_OWORD *)&v67[16] = *(_OWORD *)&v72[40]; /*0x1404ba405*/
          *(_QWORD *)&v67[32] = *(_QWORD *)&v72[56]; /*0x1404ba410*/
          goto LABEL_27; /*0x1404ba417*/
        }
      }
    }
    else
    {
      v9 = 1; /*0x1404ba41c*/
    }
    if ( (_DWORD)v9 == v7 ) /*0x1404ba445*/
    {
      v58 = &v61; /*0x1404ba452*/
      v59 = 0; /*0x1404ba459*/
      sub_1404DE8F0(v72, &v58); /*0x1404ba46e*/
      v11 = *(_QWORD *)v72; /*0x1404ba474*/
      if ( *(_QWORD *)v72 != -1 ) /*0x1404ba47f*/
      {
        v12 = *(__int64 **)&v72[8]; /*0x1404ba485*/
        *(_OWORD *)v67 = *(_OWORD *)&v72[16]; /*0x1404ba498*/
        *(_OWORD *)&v67[16] = *(_OWORD *)&v72[32]; /*0x1404ba49f*/
        *(_OWORD *)&v67[32] = *(_OWORD *)&v72[48]; /*0x1404ba4a6*/
        goto LABEL_25; /*0x1404ba4a6*/
      }
      v12 = &v59; /*0x1404ba5bd*/
      v11 = 0x8000000000000009uLL; /*0x1404ba5c4*/
      if ( v59 ) /*0x1404ba5ce*/
      {
        sub_14042B4E0(&v56, &v59, 0); /*0x1404ba5e5*/
      }
      else
      {
LABEL_25:
        *(_QWORD *)&v56 = v11; /*0x1404ba4ad*/
        *((_QWORD *)&v56 + 1) = v12; /*0x1404ba4b4*/
        *(_OWORD *)&v57[32] = *(_OWORD *)&v67[32]; /*0x1404ba4d7*/
        *(_OWORD *)&v57[16] = *(_OWORD *)&v67[16]; /*0x1404ba4db*/
        *(_OWORD *)v57 = *(_OWORD *)v67; /*0x1404ba4df*/
      }
      sub_14043CE10(&v58); /*0x1404ba5f2*/
      goto LABEL_35; /*0x1404ba5f2*/
    }
    v10 = v7; /*0x1404ba4e7*/
    v8 = 0x8000000000000013uLL; /*0x1404ba4ea*/
LABEL_27:
    *(_QWORD *)&v56 = v8; /*0x1404ba4f4*/
    *((_QWORD *)&v56 + 1) = v9; /*0x1404ba4fb*/
    *(_QWORD *)v57 = v10; /*0x1404ba502*/
    *(_QWORD *)&v57[40] = *(_QWORD *)&v67[32]; /*0x1404ba517*/
    *(_OWORD *)&v57[24] = *(_OWORD *)&v67[16]; /*0x1404ba529*/
    *(_OWORD *)&v57[8] = *(_OWORD *)v67; /*0x1404ba52d*/
LABEL_35:
    sub_14043D1B0(&v61); /*0x1404ba5f8*/
LABEL_36:
    v6 = *((_QWORD *)&v56 + 1); /*0x1404ba605*/
    if ( (_QWORD)v56 == -1 ) /*0x1404ba617*/
    {
      if ( *((__int64 *)&v56 + 1) <= 0 ) /*0x1404ba73b*/
        v6 = 0; /*0x1404ba73b*/
    }
    else
    {
      *(_OWORD *)&v67[48] = *(_OWORD *)&v57[32]; /*0x1404ba636*/
      *(_OWORD *)&v67[32] = *(_OWORD *)&v57[16]; /*0x1404ba63a*/
      *(_OWORD *)&v67[16] = *(_OWORD *)v57; /*0x1404ba63e*/
      *(_OWORD *)v67 = v56; /*0x1404ba641*/
      if ( *(_QWORD *)off_141EC8D80 > 1u ) /*0x1404ba65d*/
      {
        *(_QWORD *)&v61 = v67; /*0x1404ba66a*/
        *((_QWORD *)&v61 + 1) = sub_140FB8910; /*0x1404ba678*/
        *(_QWORD *)v72 = 0; /*0x1404ba67f*/
        *(_QWORD *)&v72[8] = aCodexmateLibCo_0; /*0x1404ba691*/
        *(_OWORD *)&v72[16] = 0x33u; /*0x1404ba698*/
        *(_QWORD *)&v72[32] = aSrcCoreRelayCo_0; /*0x1404ba6b5*/
        *(_QWORD *)&v72[40] = 41; /*0x1404ba6bc*/
        *(_QWORD *)&v72[48] = 2; /*0x1404ba6c7*/
        *(_QWORD *)&v72[56] = aCodexmateLibCo_0; /*0x1404ba6d2*/
        *(_QWORD *)&v72[64] = 51; /*0x1404ba6d9*/
        *(_QWORD *)&v72[72] = 0x17200000001LL; /*0x1404ba6ee*/
        *(_QWORD *)&v73 = &unk_141757CD2; /*0x1404ba6fc*/
        *((_QWORD *)&v73 + 1) = &v61; /*0x1404ba70a*/
        sub_1412C36A0(&v76, v72); /*0x1404ba71b*/
      }
      sub_14043D020(v67); /*0x1404ba728*/
      v6 = 0; /*0x1404ba72e*/
    }
    sub_14046F850(v67, &v39, aSelectSourceFr, 82); /*0x1404ba757*/
    if ( v67[0] ) /*0x1404ba764*/
    {
      v64 = *(_OWORD *)&v67[56]; /*0x1404ba781*/
      v63 = *(_OWORD *)&v67[40]; /*0x1404ba788*/
      v62 = *(_OWORD *)&v67[24]; /*0x1404ba78f*/
      v61 = *(_OWORD *)&v67[8]; /*0x1404ba796*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404ba7ab*/
      {
        v52 = (const char **)&v61; /*0x1404ba7b8*/
        v53 = sub_140FB8910; /*0x1404ba7c6*/
        *(_QWORD *)v72 = 0; /*0x1404ba7cd*/
        *(_QWORD *)&v72[8] = aCodexmateLibCo_0; /*0x1404ba7df*/
        *(_OWORD *)&v72[16] = 0x33u; /*0x1404ba7e6*/
        *(_QWORD *)&v72[32] = aSrcCoreRelayCo_0; /*0x1404ba803*/
        *(_QWORD *)&v72[40] = 41; /*0x1404ba80a*/
        *(_QWORD *)&v72[48] = 2; /*0x1404ba815*/
        *(_QWORD *)&v72[56] = aCodexmateLibCo_0; /*0x1404ba820*/
        *(_QWORD *)&v72[64] = 51; /*0x1404ba827*/
        *(_QWORD *)&v72[72] = 0x17E00000001LL; /*0x1404ba83c*/
        *(_QWORD *)&v73 = &unk_14175BEB9; /*0x1404ba84a*/
        *((_QWORD *)&v73 + 1) = &v52; /*0x1404ba858*/
        sub_1412C36A0(&v76, v72); /*0x1404ba869*/
      }
      sub_14043D020(&v61); /*0x1404ba876*/
      sub_14043C900(&v39); /*0x1404ba880*/
LABEL_46:
      v5 = 0; /*0x1404ba886*/
      goto LABEL_9; /*0x1404ba889*/
    }
    *(_OWORD *)&v57[32] = *(_OWORD *)&v67[56]; /*0x1404ba8a5*/
    *(_OWORD *)&v57[16] = *(_OWORD *)&v67[40]; /*0x1404ba8ac*/
    *(_OWORD *)v57 = *(_OWORD *)&v67[24]; /*0x1404ba8b3*/
    v56 = *(_OWORD *)&v67[8]; /*0x1404ba8ba*/
    v75 = *(_QWORD **)&v67[8]; /*0x1404ba8c8*/
    v13 = *(_DWORD *)&v67[64]; /*0x1404ba8cf*/
    v14 = sub_1414B6B70(*(_QWORD *)&v67[64]); /*0x1404ba8d9*/
    v15 = 1; /*0x1404ba8de*/
    if ( v14 ) /*0x1404ba8e6*/
    {
      v16 = v14; /*0x1404ba8ec*/
      LOBYTE(v31) = 1; /*0x1404ba8ef*/
      v17 = sub_1414B6740( /*0x1404ba912*/
              v13,
              1,
              (unsigned int)aOpenai,
              6,
              -1,
              v31,
              v32,
              v33,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
      if ( *v75 >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x1404ba92e*/
        sub_1416C2FC0(&off_1417588A8); /*0x1404badf4*/
      v18 = v75; /*0x1404ba937*/
      ++*v75; /*0x1404ba93e*/
      sub_140FB88E0(v72, v18[2], v17); /*0x1404ba94b*/
      --*v75; /*0x1404ba958*/
      v19 = *(_QWORD *)v72; /*0x1404ba95b*/
      v15 = 1; /*0x1404ba966*/
      if ( *(_QWORD *)v72 != -1 ) /*0x1404ba96c*/
      {
        v15 = *(_QWORD *)&v72[8]; /*0x1404ba96e*/
        v20 = *(_QWORD *)&v72[16]; /*0x1404ba975*/
        v61 = *(_OWORD *)&v72[24]; /*0x1404ba984*/
        v62 = *(_OWORD *)&v72[40]; /*0x1404ba98b*/
        *(_QWORD *)&v63 = *(_QWORD *)&v72[56]; /*0x1404ba996*/
        goto LABEL_69; /*0x1404ba99d*/
      }
      if ( v16 == 1 ) /*0x1404ba9b7*/
      {
        v52 = (const char **)&v56; /*0x1404ba9c4*/
        v53 = nullptr; /*0x1404ba9cb*/
        v5 = 0; /*0x1404ba9d6*/
        while ( 1 ) /*0x1404ba9ea*/
        {
          sub_1404DE8F0(v72, &v52); /*0x1404ba9ea*/
          v22 = *(_QWORD *)v72; /*0x1404ba9f0*/
          if ( *(_QWORD *)v72 != -1 ) /*0x1404ba9fb*/
            break; /*0x1404ba9fb*/
          if ( !v53 ) /*0x1404baa38*/
          {
            sub_14043CE10(&v52); /*0x1404bad6e*/
            goto LABEL_72; /*0x1404bad74*/
          }
          sub_14042AE90( /*0x1404baa4b*/
            v72,
            &v53,
            0,
            v21,
            v30,
            v31,
            v32,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            *((_QWORD *)&v39 + 1),
            v40,
            *((_QWORD *)&v40 + 1),
            v41,
            *((_QWORD *)&v41 + 1),
            v42,
            *((_QWORD *)&v42 + 1),
            v43,
            *((_QWORD *)&v43 + 1));
          v23 = *(_QWORD **)&v72[8]; /*0x1404baa58*/
          v22 = *(_QWORD *)v72; /*0x1404baa58*/
          v25 = *(_QWORD *)&v72[24]; /*0x1404baa5f*/
          if ( *(_QWORD *)v72 == -1 ) /*0x1404baa6a*/
          {
            v26 = *(_QWORD *)&v72[16]; /*0x1404babb1*/
            if ( *(_QWORD *)&v72[8] == -1 ) /*0x1404babbd*/
            {
              v26 = 1; /*0x1404babbd*/
              v23 = nullptr; /*0x1404babc6*/
            }
            v75 = v23; /*0x1404babca*/
            if ( *(_QWORD *)&v72[8] == -1 ) /*0x1404babd1*/
              v25 = 0; /*0x1404babd1*/
            v51 = v26; /*0x1404babe1*/
            v5 += (unsigned __int8)sub_1404E1D70(aSubagent, 10, v26, v25) ^ 1u; /*0x1404babf3*/
            if ( v75 ) /*0x1404bac00*/
              sub_140001660(v51, v75, 1); /*0x1404bac13*/
          }
          else
          {
            v24 = *(_QWORD *)&v72[16]; /*0x1404baa70*/
            v61 = *(_OWORD *)&v72[32]; /*0x1404baa7f*/
            v62 = *(_OWORD *)&v72[48]; /*0x1404baa86*/
LABEL_59:
            *(_OWORD *)&v67[48] = v62; /*0x1404baa8d*/
            *(_OWORD *)&v67[32] = v61; /*0x1404baaa6*/
            *(_QWORD *)v67 = v22; /*0x1404baaaa*/
            *(_QWORD *)&v67[8] = v23; /*0x1404baab1*/
            *(_QWORD *)&v67[16] = v24; /*0x1404baab8*/
            *(_QWORD *)&v67[24] = v25; /*0x1404baabf*/
            if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404baad4*/
            {
              *(_QWORD *)&v61 = v67; /*0x1404baae1*/
              *((_QWORD *)&v61 + 1) = sub_140FB8910; /*0x1404baaef*/
              *(_QWORD *)v72 = 0; /*0x1404baaf6*/
              *(_QWORD *)&v72[8] = aCodexmateLibCo_0; /*0x1404bab08*/
              *(_OWORD *)&v72[16] = 0x33u; /*0x1404bab0f*/
              *(_QWORD *)&v72[32] = aSrcCoreRelayCo_0; /*0x1404bab2c*/
              *(_QWORD *)&v72[40] = 41; /*0x1404bab33*/
              *(_QWORD *)&v72[48] = 2; /*0x1404bab3e*/
              *(_QWORD *)&v72[56] = aCodexmateLibCo_0; /*0x1404bab49*/
              *(_QWORD *)&v72[64] = 51; /*0x1404bab50*/
              *(_QWORD *)&v72[72] = 0x19500000001LL; /*0x1404bab65*/
              *(_QWORD *)&v73 = &unk_14175BE4A; /*0x1404bab73*/
              *((_QWORD *)&v73 + 1) = &v61; /*0x1404bab81*/
              sub_1412C36A0(&v76, v72); /*0x1404bab92*/
            }
            sub_14043D020(v67); /*0x1404bab9f*/
            ++v5; /*0x1404baba5*/
          }
        }
        v23 = *(_QWORD **)&v72[8]; /*0x1404ba9fd*/
        v25 = *(_QWORD *)&v72[24]; /*0x1404baa0b*/
        v24 = *(_QWORD *)&v72[16]; /*0x1404baa0b*/
        v62 = *(_OWORD *)&v72[48]; /*0x1404baa1a*/
        v61 = *(_OWORD *)&v72[32]; /*0x1404baa21*/
        goto LABEL_59; /*0x1404baa28*/
      }
      v20 = v16; /*0x1404bac1d*/
      v19 = 0x8000000000000013uLL; /*0x1404bac20*/
    }
    else
    {
      v19 = 0x8000000000000013uLL; /*0x1404ba9a2*/
      v20 = 0; /*0x1404ba9ac*/
    }
LABEL_69:
    *(_QWORD *)&v67[56] = v63; /*0x1404bac2a*/
    *(_OWORD *)&v67[40] = v62; /*0x1404bac4a*/
    *(_OWORD *)&v67[24] = v61; /*0x1404bac4f*/
    *(_QWORD *)v67 = v19; /*0x1404bac54*/
    *(_QWORD *)&v67[8] = v15; /*0x1404bac5b*/
    *(_QWORD *)&v67[16] = v20; /*0x1404bac62*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404bac77*/
    {
      *(_QWORD *)&v61 = v67; /*0x1404bac84*/
      *((_QWORD *)&v61 + 1) = sub_140FB8910; /*0x1404bac92*/
      *(_QWORD *)v72 = 0; /*0x1404bac99*/
      *(_QWORD *)&v72[8] = aCodexmateLibCo_0; /*0x1404bacab*/
      *(_OWORD *)&v72[16] = 0x33u; /*0x1404bacb2*/
      *(_QWORD *)&v72[32] = aSrcCoreRelayCo_0; /*0x1404baccf*/
      *(_QWORD *)&v72[40] = 41; /*0x1404bacd6*/
      *(_QWORD *)&v72[48] = 2; /*0x1404bace1*/
      *(_QWORD *)&v72[56] = aCodexmateLibCo_0; /*0x1404bacec*/
      *(_QWORD *)&v72[64] = 51; /*0x1404bacf3*/
      *(_QWORD *)&v72[72] = 0x19F00000001LL; /*0x1404bad08*/
      *(_QWORD *)&v73 = &unk_14175BE84; /*0x1404bad16*/
      *((_QWORD *)&v73 + 1) = &v61; /*0x1404bad24*/
      sub_1412C36A0(&v76, v72); /*0x1404bad35*/
    }
    sub_14043D020(v67); /*0x1404bad42*/
    v5 = 0; /*0x1404bad48*/
LABEL_72:
    sub_14043D1B0(&v56); /*0x1404bad4b*/
    sub_14043C900(&v39); /*0x1404bad5c*/
LABEL_9:
    if ( v47 ) /*0x1404ba0b0*/
      sub_140001660(v60, v47, 1); /*0x1404ba0c3*/
    v49 += v5; /*0x1404b9fd0*/
    v50 += v6; /*0x1404b9fd4*/
    v0 -= 32LL; /*0x1404b9fdb*/
    v1 += 4; /*0x1404b9fdf*/
    v2 = v3; /*0x1404b9fe3*/
  }
  if ( (__int64 *)v48 != v3 ) /*0x1404bad7a*/
  {
    v27 = v0 >> 5; /*0x1404bad7c*/
    do /*0x1404bad97*/
    {
      v28 = *(v1 - 1); /*0x1404bad99*/
      if ( v28 ) /*0x1404bada0*/
        sub_140001660(*v1, v28, 1); /*0x1404badab*/
      v1 += 4; /*0x1404bad90*/
      --v27; /*0x1404bad94*/
    }
    while ( v27 ); /*0x1404bad97*/
  }
LABEL_79:
  if ( (_QWORD)v46 ) /*0x1404badb9*/
    sub_140001660(*((_QWORD *)&v46 + 1), 32 * v46, 8); /*0x1404badc9*/
  return v50; /*0x1404badd9*/
}