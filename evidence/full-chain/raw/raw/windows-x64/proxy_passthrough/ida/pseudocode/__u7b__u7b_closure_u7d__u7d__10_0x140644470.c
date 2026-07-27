// win 1.2.1 | module src/core/relay/proxy_passthrough.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::proxy_passthrough::forward_to_openai::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
char __fastcall _u7b__u7b_closure_u7d__u7d__10(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  _QWORD *v7; // r15
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int8 v10; // r12
  void *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  char result; // al
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int16 v22; // r14
  __int16 v23; // r15
  __int64 v24; // rdi
  __int64 v25; // rax
  __int16 v26; // cx
  __int128 v27; // rax
  __int128 v28; // kr10_16
  __int64 v29; // rcx
  _OWORD *v30; // rax
  char v31; // di
  char v32; // bl
  __int64 v33; // rdx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // [rsp+30h] [rbp-50h] BYREF
  __m256i v38; // [rsp+40h] [rbp-40h]
  __int128 v39; // [rsp+60h] [rbp-20h]
  __int128 v40; // [rsp+70h] [rbp-10h]
  __int128 v41; // [rsp+80h] [rbp+0h]
  __int128 v42; // [rsp+90h] [rbp+10h] BYREF
  __int128 v43; // [rsp+A0h] [rbp+20h]
  __int128 v44; // [rsp+B0h] [rbp+30h]
  __int128 v45; // [rsp+C0h] [rbp+40h]
  __int128 v46; // [rsp+D0h] [rbp+50h]
  __int128 v47; // [rsp+E0h] [rbp+60h]
  __int128 v48; // [rsp+1A0h] [rbp+120h]
  __int128 v49; // [rsp+1B0h] [rbp+130h]
  __int128 v50; // [rsp+1C0h] [rbp+140h]
  __int128 v51; // [rsp+1D0h] [rbp+150h]
  __int128 v52; // [rsp+1E0h] [rbp+160h]
  __int128 v53; // [rsp+1F0h] [rbp+170h]
  __int128 v54; // [rsp+200h] [rbp+180h]
  __int64 v55; // [rsp+210h] [rbp+190h]
  __int128 v56; // [rsp+218h] [rbp+198h] BYREF
  _OWORD v57[2]; // [rsp+228h] [rbp+1A8h] BYREF
  __int128 v58; // [rsp+248h] [rbp+1C8h] BYREF
  __int128 v59; // [rsp+258h] [rbp+1D8h]
  __int128 v60; // [rsp+268h] [rbp+1E8h]
  __int128 v61; // [rsp+278h] [rbp+1F8h]
  __int128 v62; // [rsp+288h] [rbp+208h]
  __int64 v63; // [rsp+298h] [rbp+218h]
  _BYTE v64[112]; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v65; // [rsp+310h] [rbp+290h]
  _BYTE v66[112]; // [rsp+320h] [rbp+2A0h] BYREF
  __int128 v67; // [rsp+390h] [rbp+310h]
  __int64 v68; // [rsp+3A0h] [rbp+320h]
  __int128 v69; // [rsp+430h] [rbp+3B0h] BYREF
  __m256i v70; // [rsp+440h] [rbp+3C0h]
  __int128 v71; // [rsp+460h] [rbp+3E0h]
  __int128 v72; // [rsp+470h] [rbp+3F0h]
  __int128 v73; // [rsp+480h] [rbp+400h]
  _BYTE v74[112]; // [rsp+490h] [rbp+410h] BYREF
  __int64 v75; // [rsp+500h] [rbp+480h]
  __int64 v76; // [rsp+508h] [rbp+488h]
  int v77; // [rsp+510h] [rbp+490h] BYREF
  __int16 v78; // [rsp+514h] [rbp+494h]
  __int64 v79; // [rsp+518h] [rbp+498h]
  __int64 v80; // [rsp+520h] [rbp+4A0h]
  char v81; // [rsp+52Ch] [rbp+4ACh]
  char v82; // [rsp+52Dh] [rbp+4ADh]
  char v83; // [rsp+52Eh] [rbp+4AEh]
  char v84; // [rsp+52Fh] [rbp+4AFh]
  __int64 v85; // [rsp+530h] [rbp+4B0h]

  v85 = -2; /*0x14064448b*/
  v6 = *(unsigned __int8 *)(a2 + 41); /*0x14064449c*/
  v79 = a2; /*0x1406444ae*/
  switch ( v6 ) /*0x1406444b5*/
  {
    case 0LL: /*0x1406444b5*/
      *(_BYTE *)(a2 + 40) = 0; /*0x1406444b7*/
      v7 = *(_QWORD **)(a2 + 16); /*0x1406444bb*/
      v8 = *(_QWORD *)(a2 + 24); /*0x1406444bf*/
      v9 = *(_QWORD *)(a2 + 32); /*0x1406444c3*/
      v10 = *(_BYTE *)(a2 + 42); /*0x1406444c7*/
      if ( (unsigned __int8)sub_140674DE0(v8) ) /*0x1406444ce*/
      {
        error_response((__int128 *)v64); /*0x140644505*/
LABEL_36:
        a1[7] = v65; /*0x140644dfa*/
        a1[6] = *(_OWORD *)&v64[96]; /*0x140644e0c*/
        a1[5] = *(_OWORD *)&v64[80]; /*0x140644e17*/
        a1[4] = *(_OWORD *)&v64[64]; /*0x140644e22*/
        v34 = *(_OWORD *)v64; /*0x140644e26*/
        v35 = *(_OWORD *)&v64[16]; /*0x140644e2d*/
        v36 = *(_OWORD *)&v64[32]; /*0x140644e34*/
        a1[3] = *(_OWORD *)&v64[48]; /*0x140644e42*/
        a1[2] = v36; /*0x140644e46*/
        a1[1] = v35; /*0x140644e4a*/
        *a1 = v34; /*0x140644e4e*/
        result = 1; /*0x140644e51*/
        goto LABEL_37; /*0x140644e51*/
      }
      sub_140676350(&v37, v8); /*0x140644517*/
      v11 = &unk_141768F30; /*0x140644524*/
      if ( v10 ) /*0x14064452e*/
        v11 = &unk_141768F5F; /*0x14064452e*/
      *(_BYTE *)(v79 + 40) = 1; /*0x140644545*/
      sub_1405A48C0((unsigned int)v66, *v7, (unsigned int)&unk_141764700, (_DWORD)v11, 8LL * v10 + 47); /*0x14064455f*/
      *(_BYTE *)(v79 + 40) = 0; /*0x14064456c*/
      v73 = v41; /*0x140644574*/
      v72 = v40; /*0x14064457f*/
      v71 = v39; /*0x140644596*/
      v70 = v38; /*0x14064459d*/
      v69 = v37; /*0x1406445ab*/
      sub_14103C250(&v42, v66, &v69); /*0x1406445c4*/
      sub_1406C67E0(v66, &v42, v9); /*0x1406445d8*/
      v12 = sub_14103C180(v66); /*0x1406445e5*/
      v13 = v79; /*0x1406445eb*/
      *(_QWORD *)v79 = v12; /*0x1406445f2*/
      *(_QWORD *)(v13 + 8) = v14; /*0x1406445f5*/
      a2 = v13; /*0x1406445f9*/
LABEL_7:
      sub_14104DCF0(v66, a2, a3); /*0x1406445fc*/
      v15 = *(_QWORD *)v66; /*0x14064460c*/
      if ( *(_QWORD *)v66 != -2 ) /*0x140644617*/
      {
        v17 = *(_QWORD *)&v66[8]; /*0x140644627*/
        v48 = *(_OWORD *)&v66[16]; /*0x140644635*/
        v49 = *(_OWORD *)&v66[32]; /*0x140644643*/
        v50 = *(_OWORD *)&v66[48]; /*0x140644651*/
        v51 = *(_OWORD *)&v66[64]; /*0x14064465f*/
        v52 = *(_OWORD *)&v66[80]; /*0x14064466d*/
        v53 = *(_OWORD *)&v66[96]; /*0x14064467b*/
        v54 = v67; /*0x140644689*/
        v55 = v68; /*0x140644697*/
        sub_1405E6830(v79); /*0x1406446a5*/
        if ( (_DWORD)v15 == -1 ) /*0x1406446ae*/
        {
          *(_QWORD *)&v69 = v17; /*0x14064477d*/
          *(_QWORD *)&v42 = &v69; /*0x14064478b*/
          *((_QWORD *)&v42 + 1) = sub_141031F10; /*0x140644796*/
          sub_14149C0F0(v66, &unk_1417690C2, &v42); /*0x1406447ac*/
          v76 = *(_QWORD *)&v66[8]; /*0x1406447ee*/
          v80 = *(_QWORD *)v66; /*0x1406447ee*/
          error_response((__int128 *)v64); /*0x1406447f5*/
          if ( v80 ) /*0x140644805*/
            sub_140001660(v76, v80, 1); /*0x140644814*/
          sub_1405E12D0(&v69); /*0x140644821*/
        }
        else
        {
          v61 = v53; /*0x1406446bb*/
          v63 = v55; /*0x1406446c9*/
          v62 = v54; /*0x1406446d7*/
          v60 = v52; /*0x1406446e5*/
          v59 = v51; /*0x140644708*/
          v58 = v50; /*0x14064470f*/
          v57[1] = v49; /*0x140644716*/
          v57[0] = v48; /*0x14064471d*/
          *(_QWORD *)&v56 = v15; /*0x140644724*/
          *((_QWORD *)&v56 + 1) = v17; /*0x14064472b*/
          v18 = v52; /*0x140644732*/
          v19 = 4 * v52; /*0x140644739*/
          v20 = 0x7FFFFFFFFFFFFFFELL; /*0x14064474b*/
          LOBYTE(v20) = (unsigned __int64)v52 >> 62 != 0 || (unsigned __int64)(4 * v52) > 0x7FFFFFFFFFFFFFFELL; /*0x14064475b*/
          if ( (_BYTE)v20 ) /*0x14064475d*/
          {
            v21 = 0; /*0x140644763*/
            goto LABEL_12; /*0x140644763*/
          }
          v22 = WORD4(v61); /*0x14064482c*/
          v23 = WORD4(v60); /*0x140644834*/
          v75 = 4 * v52; /*0x14064483f*/
          v80 = v52; /*0x140644846*/
          if ( v19 ) /*0x14064484d*/
          {
            v24 = *((_QWORD *)&v59 + 1); /*0x14064484f*/
            nullsub_1(v20); /*0x140644856*/
            v21 = 2; /*0x14064485b*/
            v25 = sub_140001650(v19, 2); /*0x140644868*/
            if ( !v25 ) /*0x140644870*/
            {
LABEL_12:
              v82 = 1; /*0x140644765*/
              sub_1416C2D4B(v21, v19); /*0x140644772*/
            }
            v76 = v25; /*0x140644879*/
            if ( v18 ) /*0x140644880*/
              sub_141684120(v25, v24, v19); /*0x14064488b*/
          }
          else
          {
            v76 = 2; /*0x140644897*/
          }
          sub_14032BA10(&v42, (char *)v57 + 8); /*0x1406448a9*/
          sub_14032B840(v66, &v58); /*0x1406448bd*/
          WORD4(v73) = v23; /*0x1406448c3*/
          *((_QWORD *)&v72 + 1) = v76; /*0x1406448d2*/
          *(_QWORD *)&v73 = v80; /*0x1406448e0*/
          *(_OWORD *)&v70.m256i_u64[1] = v42; /*0x1406448eb*/
          v70.m256i_i64[3] = v43; /*0x1406448f6*/
          v71 = *(_OWORD *)v66; /*0x140644904*/
          *(_QWORD *)&v72 = *(_QWORD *)&v66[16]; /*0x140644912*/
          v69 = v56; /*0x140644920*/
          v70.m256i_i64[0] = *(_QWORD *)&v57[0]; /*0x14064492e*/
          v81 = 1; /*0x140644935*/
          sub_141442B90(v66); /*0x140644943*/
          v42 = *(_OWORD *)&v66[8]; /*0x140644957*/
          v43 = *(_OWORD *)&v66[24]; /*0x140644962*/
          v44 = *(_OWORD *)&v66[40]; /*0x14064496d*/
          v45 = *(_OWORD *)&v66[56]; /*0x140644978*/
          v46 = *(_OWORD *)&v66[72]; /*0x140644983*/
          v47 = *(_OWORD *)&v66[88]; /*0x14064498e*/
          v26 = *(_WORD *)&v66[104]; /*0x140644992*/
          v77 = *(_DWORD *)&v66[106]; /*0x14064499f*/
          v78 = *(_WORD *)&v66[110]; /*0x1406449ac*/
          if ( *(_QWORD *)v66 != -1 ) /*0x1406449b7*/
          {
            v26 = 200; /*0x1406449d0*/
            if ( (unsigned __int16)(v22 - 1000) >= 0xFC7Cu ) /*0x1406449d5*/
              v26 = v22; /*0x1406449d5*/
            v47 = *(_OWORD *)&v66[88]; /*0x1406449dd*/
            v46 = *(_OWORD *)&v66[72]; /*0x1406449e5*/
            v45 = *(_OWORD *)&v66[56]; /*0x1406449f8*/
            v44 = *(_OWORD *)&v66[40]; /*0x1406449fc*/
            v43 = *(_OWORD *)&v66[24]; /*0x140644a00*/
            v42 = *(_OWORD *)&v66[8]; /*0x140644a04*/
            v77 = *(_DWORD *)&v66[106]; /*0x140644a0c*/
            v78 = *(_WORD *)&v66[110]; /*0x140644a17*/
          }
          *(_QWORD *)v74 = *(_QWORD *)v66; /*0x140644a1e*/
          *(_OWORD *)&v74[8] = v42; /*0x140644a35*/
          *(_OWORD *)&v74[24] = v43; /*0x140644a3c*/
          *(_OWORD *)&v74[40] = v44; /*0x140644a43*/
          *(_OWORD *)&v74[56] = v45; /*0x140644a4a*/
          *(_OWORD *)&v74[72] = v46; /*0x140644a55*/
          *(_OWORD *)&v74[88] = v47; /*0x140644a60*/
          *(_WORD *)&v74[104] = v26; /*0x140644a67*/
          *(_DWORD *)&v74[106] = v77; /*0x140644a74*/
          *(_WORD *)&v74[110] = v78; /*0x140644a81*/
          v84 = 0; /*0x140644a88*/
          v83 = 1; /*0x140644a8f*/
          sub_140675E20(v66, &v69, v74); /*0x140644aab*/
          *(_OWORD *)&v74[96] = *(_OWORD *)&v66[96]; /*0x140644ab8*/
          *(_OWORD *)&v74[80] = *(_OWORD *)&v66[80]; /*0x140644ac6*/
          *(_OWORD *)&v74[64] = *(_OWORD *)&v66[64]; /*0x140644ad4*/
          *(_OWORD *)&v74[48] = *(_OWORD *)&v66[48]; /*0x140644af7*/
          *(_OWORD *)&v74[32] = *(_OWORD *)&v66[32]; /*0x140644afe*/
          *(_OWORD *)&v74[16] = *(_OWORD *)&v66[16]; /*0x140644b05*/
          *(_OWORD *)v74 = *(_OWORD *)v66; /*0x140644b0c*/
          *(_QWORD *)&v42 = aXAimamiRoute; /*0x140644b1a*/
          *((_QWORD *)&v42 + 1) = 14; /*0x140644b1e*/
          *(_QWORD *)&v43 = aOpenaiPassthro; /*0x140644b2d*/
          *((_QWORD *)&v43 + 1) = 18; /*0x140644b31*/
          v84 = 0; /*0x140644b39*/
          v83 = 1; /*0x140644b40*/
          sub_1406C5590(v66, v74, &v42); /*0x140644b59*/
          *(_OWORD *)v74 = *(_OWORD *)v66; /*0x140644b7b*/
          *(_OWORD *)&v74[16] = *(_OWORD *)&v66[16]; /*0x140644b82*/
          *(_OWORD *)&v74[32] = *(_OWORD *)&v66[32]; /*0x140644b89*/
          *(_OWORD *)&v74[48] = *(_OWORD *)&v66[48]; /*0x140644b90*/
          *(_OWORD *)&v74[64] = *(_OWORD *)&v66[64]; /*0x140644b9e*/
          *(_OWORD *)&v74[80] = *(_OWORD *)&v66[80]; /*0x140644bac*/
          *(_OWORD *)&v74[96] = *(_OWORD *)&v66[96]; /*0x140644bba*/
          sub_141684120(v66, &v56, 136); /*0x140644bd8*/
          v84 = 1; /*0x140644bdd*/
          v83 = 0; /*0x140644be4*/
          *(_QWORD *)&v27 = sub_140EA3B00(v66); /*0x140644bee*/
          v28 = v27; /*0x140644bf7*/
          *(_OWORD *)v66 = v27; /*0x140644bfa*/
          nullsub_1(v29); /*0x140644c08*/
          v30 = (_OWORD *)sub_140001650(16, 8); /*0x140644c17*/
          if ( !v30 ) /*0x140644c1f*/
            sub_1416C2D31(8, 16); /*0x140644e7b*/
          *v30 = v28; /*0x140644c25*/
          v31 = v74[8]; /*0x140644c33*/
          v32 = v74[9]; /*0x140644c3a*/
          if ( *(_QWORD *)v74 == -1 ) /*0x140644c45*/
          {
            v80 = v28; /*0x140644cdb*/
            v75 = (__int64)v30; /*0x140644ce2*/
            v76 = *((_QWORD *)&v28 + 1); /*0x140644ce9*/
            if ( **((_QWORD **)&v28 + 1) ) /*0x140644cf0*/
              (**((void (__fastcall ***)(__int64))&v28 + 1))(v80); /*0x140644cff*/
            v33 = *(_QWORD *)(v76 + 8); /*0x140644d09*/
            if ( v33 ) /*0x140644d10*/
              sub_140001660(v80, v33, *(_QWORD *)(v76 + 16)); /*0x140644d1d*/
            sub_140001660(v75, 16, 8); /*0x140644d34*/
            LOBYTE(v77) = v31; /*0x140644d39*/
            BYTE1(v77) = v32; /*0x140644d40*/
            *(_QWORD *)&v42 = &v77; /*0x140644d4d*/
            *((_QWORD *)&v42 + 1) = sub_141442DC0; /*0x140644d58*/
            v84 = 0; /*0x140644d5c*/
            v83 = 0; /*0x140644d63*/
            sub_14149C0F0(v66, &unk_141767810, &v42); /*0x140644d7c*/
            v80 = *(_QWORD *)&v66[8]; /*0x140644db0*/
            error_response((__int128 *)v64); /*0x140644db7*/
            if ( *(_QWORD *)v66 ) /*0x140644dc7*/
              sub_140001660(v80, *(_QWORD *)v66, 1); /*0x140644dd6*/
          }
          else
          {
            *(_QWORD *)&v64[104] = *(_QWORD *)&v74[104]; /*0x140644c52*/
            *(_OWORD *)&v64[90] = *(_OWORD *)&v74[90]; /*0x140644c60*/
            *(_OWORD *)&v64[74] = *(_OWORD *)&v74[74]; /*0x140644c6e*/
            *(_OWORD *)&v64[58] = *(_OWORD *)&v74[58]; /*0x140644c91*/
            *(_OWORD *)&v64[42] = *(_OWORD *)&v74[42]; /*0x140644c98*/
            *(_OWORD *)&v64[26] = *(_OWORD *)&v74[26]; /*0x140644c9f*/
            *(_OWORD *)&v64[10] = *(_OWORD *)&v74[10]; /*0x140644ca6*/
            *(_QWORD *)v64 = *(_QWORD *)v74; /*0x140644cad*/
            *(_WORD *)&v64[8] = *(_WORD *)&v74[8]; /*0x140644cb4*/
            *(_QWORD *)&v65 = v30; /*0x140644cc1*/
            *((_QWORD *)&v65 + 1) = &off_1417B3CA0; /*0x140644ccf*/
          }
          v82 = 0; /*0x140644ddb*/
          sub_140017140(&v69); /*0x140644de9*/
        }
        *(_BYTE *)(v79 + 40) = 0; /*0x140644df6*/
        goto LABEL_36; /*0x140644df6*/
      }
      *(_QWORD *)a1 = -1; /*0x140644619*/
      result = 3; /*0x140644620*/
LABEL_37:
      *(_BYTE *)(v79 + 41) = result; /*0x140644e53*/
      return result;
    case 1LL: /*0x1406444b5*/
      sub_1416C3400(&off_141769098, a2, a3, a4); /*0x140644e98*/
    case 2LL: /*0x1406444b5*/
      sub_1416C3420(&off_141769098, a2, a3, a4); /*0x140644e8a*/
    case 3LL: /*0x1406444b5*/
      goto LABEL_7;
  }
}