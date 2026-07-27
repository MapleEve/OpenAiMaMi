// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::stream_replace_session_meta_lines | 跨平台字符串签名匹配(名↔函数一致)
int __fastcall stream_replace_session_meta_lines(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  const char *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  void *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r14
  void *v23; // rdx
  unsigned __int64 v24; // r12
  char **v25; // rbx
  unsigned __int64 v26; // rsi
  __int64 v27; // r14
  char v28; // al
  char **v29; // rdx
  char **v30; // rdx
  unsigned __int64 v31; // rsi
  __int64 v32; // r14
  __int128 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  bool v37; // cf
  __int64 v38; // rax
  char v39; // al
  char **v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // r14
  __int64 *v47; // rax
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int128 v50; // xmm3
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 *v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rcx
  void *v58; // rax
  __int64 *v59; // rcx
  __int128 v61; // [rsp+30h] [rbp-50h] BYREF
  __int64 v62; // [rsp+40h] [rbp-40h]
  _QWORD v63[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v64; // [rsp+58h] [rbp-28h] BYREF
  _QWORD *v65; // [rsp+60h] [rbp-20h]
  __int64 v66; // [rsp+68h] [rbp-18h]
  __int64 v67; // [rsp+70h] [rbp-10h] BYREF
  __int64 v68; // [rsp+78h] [rbp-8h]
  __int64 v69; // [rsp+80h] [rbp+0h]
  __int64 v70; // [rsp+90h] [rbp+10h]
  __int64 v71; // [rsp+98h] [rbp+18h]
  __m256i v72; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v73; // [rsp+C0h] [rbp+40h]
  __int128 v74; // [rsp+D0h] [rbp+50h]
  __int128 v75; // [rsp+E0h] [rbp+60h]
  HANDLE *v76; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v77; // [rsp+F8h] [rbp+78h]
  __int64 v78; // [rsp+100h] [rbp+80h]
  __int64 v79; // [rsp+108h] [rbp+88h] BYREF
  __int64 v80; // [rsp+110h] [rbp+90h]
  HANDLE *v81; // [rsp+118h] [rbp+98h]
  HANDLE **v82; // [rsp+120h] [rbp+A0h] BYREF
  __int64 (__fastcall *v83)(); // [rsp+128h] [rbp+A8h]
  __int64 *v84; // [rsp+130h] [rbp+B0h]
  __int64 (__fastcall *v85)(); // [rsp+138h] [rbp+B8h]
  _QWORD *v86; // [rsp+140h] [rbp+C0h]
  __int128 v87; // [rsp+148h] [rbp+C8h] BYREF
  __m256i v88; // [rsp+158h] [rbp+D8h]
  __int128 v89; // [rsp+178h] [rbp+F8h]
  __int128 v90; // [rsp+188h] [rbp+108h]
  __int128 v91; // [rsp+198h] [rbp+118h]
  HANDLE hObject; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 *v93; // [rsp+1B0h] [rbp+130h]
  HANDLE v94; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v95; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v96; // [rsp+1C8h] [rbp+148h]
  __int64 v97; // [rsp+1D0h] [rbp+150h]
  char v98; // [rsp+1DDh] [rbp+15Dh]
  char v99; // [rsp+1DEh] [rbp+15Eh]
  char v100; // [rsp+1DFh] [rbp+15Fh]
  __int64 v101; // [rsp+1E0h] [rbp+160h]

  v101 = -2; /*0x1404bf22b*/
  v10 = sub_1414740B0(a2, a3); /*0x1404bf248*/
  if ( !v10 ) /*0x1404bf250*/
  {
    nullsub_1(v12); /*0x1404bf2a3*/
    v19 = (void *)sub_140001650(26, 1); /*0x1404bf2b2*/
    if ( !v19 ) /*0x1404bf2ba*/
      sub_1416C2D4B(1, 26); /*0x1404bfcb3*/
    qmemcpy(v19, "rollout path has no parent", 26); /*0x1404bf2d2*/
    *a1 = 9; /*0x1404bf2d5*/
    a1[1] = 26; /*0x1404bf2dc*/
    a1[2] = (__int64)v19; /*0x1404bf2e4*/
    a1[3] = 26; /*0x1404bf2e8*/
    return (int)v19; /*0x1404bf2f0*/
  }
  v13 = v10; /*0x1404bf252*/
  v14 = v11; /*0x1404bf255*/
  v15 = sub_1414742C0(a2, a3); /*0x1404bf25e*/
  if ( v15 ) /*0x1404bf266*/
  {
    sub_1414A3C90(&v87, v15, v16); /*0x1404bf279*/
    v17 = aRollout; /*0x1404bf285*/
    if ( !(_BYTE)v87 ) /*0x1404bf28c*/
      v17 = *((const char **)&v87 + 1); /*0x1404bf28c*/
    v18 = 7; /*0x1404bf294*/
    if ( !(_BYTE)v87 ) /*0x1404bf299*/
      v18 = v88.m256i_i64[0]; /*0x1404bf299*/
  }
  else
  {
    v18 = 7; /*0x1404bf2f5*/
    v17 = aRollout; /*0x1404bf2fa*/
  }
  v63[0] = v17; /*0x1404bf301*/
  v63[1] = v18; /*0x1404bf305*/
  LODWORD(v82) = GetCurrentProcessId(); /*0x1404bf30e*/
  sub_141356270(&v87); /*0x1404bf31b*/
  *(_OWORD *)v72.m256i_i8 = v87; /*0x1404bf327*/
  *(_QWORD *)&v87 = v63; /*0x1404bf32f*/
  *((_QWORD *)&v87 + 1) = sub_14041F680; /*0x1404bf33d*/
  v88.m256i_i64[0] = (__int64)&v82; /*0x1404bf34b*/
  v88.m256i_i64[1] = (__int64)sub_1414AB780; /*0x1404bf359*/
  v88.m256i_i64[2] = (__int64)&v72; /*0x1404bf364*/
  v88.m256i_i64[3] = (__int64)sub_140421AE0; /*0x1404bf372*/
  sub_14149C0F0(&v64, &unk_14175C507, &v87); /*0x1404bf38b*/
  v86 = v65; /*0x1404bf3a7*/
  sub_141473FA0((unsigned int)&v67, v13, v14, (_DWORD)v65, v66); /*0x1404bf3ae*/
  if ( v64 ) /*0x1404bf3bb*/
    sub_140001660(v86, v64, 1); /*0x1404bf3ca*/
  LODWORD(v87) = 0; /*0x1404bf3cf*/
  *((_QWORD *)&v87 + 1) = 0; /*0x1404bf3d9*/
  v88.m256i_i32[0] = 7; /*0x1404bf3e4*/
  *(__int64 *)((char *)v88.m256i_i64 + 4) = 0x100000000LL; /*0x1404bf3ee*/
  *(__int64 *)((char *)&v88.m256i_i64[1] + 1) = 0; /*0x1404bf3f9*/
  v19 = (void *)sub_141481480(&v87, a2, a3); /*0x1404bf418*/
  if ( v19 == (void *)1 ) /*0x1404bf422*/
  {
    *a1 = 2; /*0x1404bf424*/
    a1[1] = (__int64)v20; /*0x1404bf42b*/
    goto LABEL_59; /*0x1404bf42f*/
  }
  v70 = v14; /*0x1404bf434*/
  v94 = v20; /*0x1404bf438*/
  LODWORD(v87) = 0; /*0x1404bf43f*/
  *((_QWORD *)&v87 + 1) = 0; /*0x1404bf449*/
  v88.m256i_i32[0] = 7; /*0x1404bf454*/
  *(__int64 *)((char *)v88.m256i_i64 + 4) = 0; /*0x1404bf45e*/
  *(__int64 *)((char *)&v88.m256i_i64[1] + 1) = 0x100000001LL; /*0x1404bf469*/
  v21 = v68; /*0x1404bf482*/
  v22 = v69; /*0x1404bf486*/
  v98 = 1; /*0x1404bf48a*/
  if ( sub_141481480(&v87, v68, v69) == 1 ) /*0x1404bf4a8*/
  {
    *a1 = 2; /*0x1404bf4aa*/
    a1[1] = (__int64)v23; /*0x1404bf4b1*/
LABEL_58:
    LODWORD(v19) = CloseHandle(v94); /*0x1404bf96d*/
    goto LABEL_59; /*0x1404bf974*/
  }
  v71 = v13; /*0x1404bf4ba*/
  v81 = (HANDLE *)a2; /*0x1404bf4be*/
  v80 = a3; /*0x1404bf4c5*/
  v96 = v22; /*0x1404bf4cc*/
  v97 = v21; /*0x1404bf4d3*/
  v93 = a1; /*0x1404bf4da*/
  hObject = v23; /*0x1404bf4e8*/
  v86 = &a4[8 * a5]; /*0x1404bf4f6*/
  v24 = 0; /*0x1404bf4fd*/
LABEL_20:
  if ( a4 != v86 ) /*0x1404bf526*/
  {
    v26 = a4[6]; /*0x1404bf52c*/
    v27 = 0; /*0x1404bf536*/
    if ( v26 >= v24 ) /*0x1404bf53c*/
      v27 = v26 - v24; /*0x1404bf53c*/
    v79 = v27; /*0x1404bf540*/
    if ( v26 > v24 ) /*0x1404bf547*/
    {
      v76 = &v94; /*0x1404bf550*/
      v77 = v27; /*0x1404bf554*/
      v78 = v27; /*0x1404bf558*/
      v100 = 1; /*0x1404bf55f*/
      v99 = 1; /*0x1404bf566*/
      v28 = sub_14036DA50(&v76, &hObject); /*0x1404bf574*/
      v25 = v29; /*0x1404bf57a*/
      if ( (v28 & 1) != 0 ) /*0x1404bf57f*/
      {
        v41 = 2; /*0x1404bf7af*/
        goto LABEL_54; /*0x1404bf7b4*/
      }
      v95 = (__int64)v29; /*0x1404bf585*/
      if ( (char **)v27 != v29 ) /*0x1404bf58f*/
        goto LABEL_53; /*0x1404bf58f*/
    }
    v24 = a4[7] + v26; /*0x1404bf598*/
    v100 = 1; /*0x1404bf59c*/
    v99 = 1; /*0x1404bf5a3*/
    if ( sub_141491C20(&v94, 0) == 1 ) /*0x1404bf5c0*/
    {
      v25 = v30; /*0x1404bf7a2*/
LABEL_51:
      v41 = 2; /*0x1404bf7a5*/
LABEL_55:
      v45 = v97; /*0x1404bf8b2*/
      v46 = v96; /*0x1404bf8b9*/
      CloseHandle(hObject); /*0x1404bf8c7*/
      *(_QWORD *)&v87 = v41; /*0x1404bf8cd*/
      *((_QWORD *)&v87 + 1) = v25; /*0x1404bf8d4*/
      v88 = v72; /*0x1404bf8eb*/
      v89 = v73; /*0x1404bf8f9*/
      v90 = v74; /*0x1404bf900*/
      v91 = v75; /*0x1404bf90b*/
      v82 = (HANDLE **)sub_141485EF0(v45, v46); /*0x1404bf91e*/
      if ( v82 ) /*0x1404bf928*/
        sub_140018650(&v82); /*0x1404bf931*/
      v47 = v93; /*0x1404bf937*/
      *v93 = v41; /*0x1404bf93e*/
      v47[1] = (__int64)v25; /*0x1404bf941*/
      v48 = *(_OWORD *)&v72.m256i_u64[2]; /*0x1404bf949*/
      v49 = v73; /*0x1404bf94d*/
      v50 = v74; /*0x1404bf951*/
      *((_OWORD *)v47 + 1) = *(_OWORD *)v72.m256i_i8; /*0x1404bf955*/
      *((_OWORD *)v47 + 2) = v48; /*0x1404bf959*/
      *((_OWORD *)v47 + 3) = v49; /*0x1404bf95d*/
      *((_OWORD *)v47 + 4) = v50; /*0x1404bf961*/
      *((_OWORD *)v47 + 5) = v75; /*0x1404bf969*/
      goto LABEL_58; /*0x1404bf969*/
    }
    v31 = a4[5]; /*0x1404bf5c6*/
    if ( !v31 ) /*0x1404bf5cd*/
    {
LABEL_18:
      v25 = nullptr; /*0x1404bf510*/
      goto LABEL_19; /*0x1404bf510*/
    }
    v32 = a4[4]; /*0x1404bf5d3*/
    while ( 1 ) /*0x1404bf5e9*/
    {
      v100 = 1; /*0x1404bf5e9*/
      v99 = 1; /*0x1404bf5f0*/
      *(_QWORD *)&v33 = sub_141491C00(&hObject, v32, v31); /*0x1404bf600*/
      v25 = *((char ***)&v33 + 1); /*0x1404bf606*/
      v87 = v33; /*0x1404bf609*/
      if ( (_QWORD)v33 == 1 ) /*0x1404bf61b*/
      {
        switch ( BYTE8(v33) & 3 ) /*0x1404bf629*/
        {
          case 0: /*0x1404bf629*/
            LOBYTE(v33) = *(_BYTE *)(*((_QWORD *)&v33 + 1) + 16LL); /*0x1404bf62b*/
            goto LABEL_38; /*0x1404bf62f*/
          case 1: /*0x1404bf629*/
            LOBYTE(v33) = *(_BYTE *)(*((_QWORD *)&v33 + 1) + 15LL); /*0x1404bf659*/
            goto LABEL_38; /*0x1404bf65d*/
          case 2: /*0x1404bf629*/
            goto LABEL_19;
          case 3: /*0x1404bf629*/
            *(_QWORD *)&v33 = HIDWORD(*((_QWORD *)&v33 + 1)); /*0x1404bf662*/
LABEL_38:
            if ( (_BYTE)v33 != 35 ) /*0x1404bf668*/
              goto LABEL_19; /*0x1404bf668*/
            v100 = 1; /*0x1404bf66e*/
            v99 = 1; /*0x1404bf675*/
            sub_140018650((char *)&v87 + 8); /*0x1404bf683*/
            break; /*0x1404bf689*/
        }
      }
      else
      {
        if ( !*((_QWORD *)&v33 + 1) ) /*0x1404bf643*/
        {
          v25 = &off_141785228; /*0x1404bf68e*/
LABEL_19:
          a4 += 8; /*0x1404bf512*/
          if ( v25 ) /*0x1404bf519*/
            goto LABEL_51; /*0x1404bf519*/
          goto LABEL_20; /*0x1404bf519*/
        }
        if ( v31 < *((_QWORD *)&v33 + 1) ) /*0x1404bf64b*/
        {
          v100 = 1; /*0x1404bfc3a*/
          v99 = 1; /*0x1404bfc41*/
          sub_1416C32F0(*((_QWORD *)&v33 + 1), v31, v31, &off_141785290); /*0x1404bfc58*/
        }
        v32 += *((_QWORD *)&v33 + 1); /*0x1404bf651*/
        v31 -= *((_QWORD *)&v33 + 1); /*0x1404bf654*/
      }
      if ( !v31 ) /*0x1404bf5e3*/
        goto LABEL_18; /*0x1404bf5e3*/
    }
  }
  v34 = a6; /*0x1404bf69a*/
  v35 = *(_QWORD *)(a6 + 56); /*0x1404bf6a1*/
  v36 = 0; /*0x1404bf6a5*/
  v37 = v35 < v24; /*0x1404bf6a7*/
  v38 = v35 - v24; /*0x1404bf6a7*/
  if ( !v37 ) /*0x1404bf6aa*/
    v36 = v38; /*0x1404bf6aa*/
  v79 = v36; /*0x1404bf6ae*/
  if ( !v37 && v38 != 0 ) /*0x1404bf6a7*/
  {
    v76 = &v94; /*0x1404bf6be*/
    v77 = v36; /*0x1404bf6c2*/
    v78 = v36; /*0x1404bf6c6*/
    v100 = 1; /*0x1404bf6cd*/
    v99 = 1; /*0x1404bf6d4*/
    v39 = sub_14036DA50(&v76, &hObject); /*0x1404bf6e6*/
    v25 = v40; /*0x1404bf6ec*/
    v41 = 2; /*0x1404bf6ef*/
    if ( (v39 & 1) != 0 ) /*0x1404bf6f6*/
    {
LABEL_54:
      v72 = v88; /*0x1404bf87b*/
      v73 = v89; /*0x1404bf89f*/
      v74 = v90; /*0x1404bf8a3*/
      v75 = v91; /*0x1404bf8ae*/
      goto LABEL_55; /*0x1404bf8ae*/
    }
    v95 = (__int64)v40; /*0x1404bf6fc*/
    if ( (char **)v36 != v40 ) /*0x1404bf706*/
    {
LABEL_53:
      v82 = (HANDLE **)&v79; /*0x1404bf815*/
      v83 = sub_1414AC520; /*0x1404bf82a*/
      v84 = &v95; /*0x1404bf838*/
      v85 = sub_1414AC520; /*0x1404bf83f*/
      v100 = 1; /*0x1404bf84d*/
      v99 = 1; /*0x1404bf854*/
      sub_14149C0F0((char *)&v87 + 8, &unk_14175B045, &v82); /*0x1404bf869*/
      v41 = 10; /*0x1404bf86f*/
      v25 = *((char ***)&v87 + 1); /*0x1404bf874*/
      goto LABEL_54; /*0x1404bf874*/
    }
    v34 = a6; /*0x1404bf70c*/
  }
  v42 = *(unsigned int *)(v34 + 76); /*0x1404bf713*/
  v100 = 1; /*0x1404bf717*/
  v99 = 1; /*0x1404bf71e*/
  v25 = (char **)sub_1414861C0(v97, v96, v42); /*0x1404bf739*/
  if ( v25 ) /*0x1404bf73f*/
    goto LABEL_51; /*0x1404bf73f*/
  CloseHandle(hObject); /*0x1404bf748*/
  v100 = 1; /*0x1404bf74e*/
  v99 = 0; /*0x1404bf755*/
  sub_141486710(&v87, v81, v80); /*0x1404bf771*/
  if ( (_DWORD)v87 == 2 ) /*0x1404bf77e*/
  {
    v43 = *((_QWORD *)&v87 + 1); /*0x1404bf784*/
    v44 = v93; /*0x1404bf78b*/
    *v93 = 2; /*0x1404bf792*/
    v44[1] = v43; /*0x1404bf799*/
    goto LABEL_58; /*0x1404bf79d*/
  }
  if ( v89 != *(_OWORD *)(a6 + 48) ) /*0x1404bf9b9*/
  {
    v100 = 1; /*0x1404bfb7b*/
    v99 = 0; /*0x1404bfb82*/
    *(_QWORD *)&v87 = sub_141485EF0(v97, v96); /*0x1404bfb9d*/
    if ( (_QWORD)v87 ) /*0x1404bfba7*/
    {
      v100 = 1; /*0x1404bfba9*/
      v99 = 0; /*0x1404bfbb0*/
      sub_140018650(&v87); /*0x1404bfbbe*/
    }
    nullsub_1(v57); /*0x1404bfbc4*/
    v58 = (void *)sub_140001650(68, 1); /*0x1404bfbd3*/
    if ( !v58 ) /*0x1404bfbdb*/
    {
      v100 = 1; /*0x1404bfcba*/
      v99 = 0; /*0x1404bfcc1*/
      sub_1416C2D4B(1, 68); /*0x1404bfcd2*/
    }
    qmemcpy(v58, "rollout changed while router migration was streaming; retry required", 68); /*0x1404bfc09*/
    v59 = v93; /*0x1404bfc13*/
    *v93 = 10; /*0x1404bfc1a*/
    v59[1] = 68; /*0x1404bfc21*/
    v59[2] = (__int64)v58; /*0x1404bfc29*/
    v59[3] = 68; /*0x1404bfc2d*/
    goto LABEL_58; /*0x1404bfc35*/
  }
  CloseHandle(v94); /*0x1404bf9d7*/
  v100 = 0; /*0x1404bf9dd*/
  v99 = 0; /*0x1404bf9e4*/
  v53 = sub_1404A2FA0(v97, v96, (__int64)v81, v80); /*0x1404bfa07*/
  if ( v53 ) /*0x1404bfa10*/
  {
    v95 = v53; /*0x1404bfa16*/
    v54 = v93; /*0x1404bfa2b*/
    v55 = v97; /*0x1404bfa32*/
    v56 = v96; /*0x1404bfa39*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404bfa40*/
    {
      v76 = v81; /*0x1404bfa4d*/
      v77 = v80; /*0x1404bfa58*/
      v82 = &v76; /*0x1404bfa60*/
      v83 = sub_14148F3A0; /*0x1404bfa6e*/
      v84 = &v95; /*0x1404bfa7c*/
      v85 = sub_141490720; /*0x1404bfa8a*/
      *(_QWORD *)&v87 = aCodexmateLibCo_0; /*0x1404bfa98*/
      *((_QWORD *)&v87 + 1) = 51; /*0x1404bfa9f*/
      v88.m256i_i64[0] = (__int64)aCodexmateLibCo_0; /*0x1404bfaaa*/
      v88.m256i_i64[1] = 51; /*0x1404bfab1*/
      v88.m256i_i64[2] = (__int64)&off_14175C578; /*0x1404bfac3*/
      sub_140985BA0(&unk_14175C515, &v82, 2, &v87); /*0x1404bfae5*/
    }
    *(_QWORD *)&v87 = sub_141485EF0(v55, v56); /*0x1404bfaf7*/
    if ( (_QWORD)v87 ) /*0x1404bfb01*/
      sub_140018650(&v87); /*0x1404bfb0a*/
    *(_QWORD *)&v87 = &v95; /*0x1404bfb17*/
    *((_QWORD *)&v87 + 1) = sub_141490720; /*0x1404bfb25*/
    sub_14149C0F0(&v61, &unk_14175C590, &v87); /*0x1404bfb3e*/
    v54[3] = v62; /*0x1404bfb48*/
    *(_OWORD *)(v54 + 1) = v61; /*0x1404bfb50*/
    *v54 = 10; /*0x1404bfb54*/
    v100 = 0; /*0x1404bfb5b*/
    v99 = 0; /*0x1404bfb62*/
    LODWORD(v19) = sub_140018650(&v95); /*0x1404bfb70*/
LABEL_59:
    v51 = v67; /*0x1404bf97a*/
    if ( v67 ) /*0x1404bf981*/
    {
      v52 = v68; /*0x1404bf983*/
      goto LABEL_61; /*0x1404bf983*/
    }
  }
  else
  {
    v100 = 0; /*0x1404bfc60*/
    v99 = 0; /*0x1404bfc67*/
    sub_1404A3310(v71, v70); /*0x1404bfc76*/
    LODWORD(v19) = (_DWORD)v93; /*0x1404bfc7c*/
    *v93 = -1; /*0x1404bfc83*/
    v51 = v67; /*0x1404bfc8a*/
    if ( !v67 ) /*0x1404bfc91*/
      return (int)v19; /*0x1404bfc91*/
    v52 = v97; /*0x1404bfc9d*/
LABEL_61:
    LODWORD(v19) = sub_140001660(v52, v51, 1); /*0x1404bf98d*/
  }
  return (int)v19; /*0x1404bf993*/
}