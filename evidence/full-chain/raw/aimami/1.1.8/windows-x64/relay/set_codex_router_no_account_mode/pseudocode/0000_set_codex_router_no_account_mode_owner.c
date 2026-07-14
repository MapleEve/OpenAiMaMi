// win 1.1.8 set_codex_router_no_account_mode node va=0x1409e20e0 depth=0
// set_codex_router_no_account_mode_owner
char __fastcall sub_1409E20E0(unsigned __int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // r12
  __int8 v8; // r14
  const __m128i *v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 *v12; // r13
  const __m128i *v13; // rdi
  char v14; // of
  __int64 v15; // rcx
  char v16; // bl
  char v17; // di
  __int128 v18; // rax
  __int64 v19; // rt0
  __int64 v20; // rt0
  volatile signed __int64 *v21; // r8
  __int64 v22; // rt0
  volatile signed __int64 *v23; // r9
  volatile signed __int64 *v24; // rcx
  char v25; // of
  volatile signed __int64 *v26; // r14
  __int64 v27; // rt0
  volatile signed __int64 *v28; // r15
  __int64 v29; // rt0
  char v30; // cl
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int8 v36; // r15
  const __m128i *v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r14
  const char *v41; // r15
  _BYTE *v42; // rdx
  char v43; // cl
  char result; // al
  __int64 v45; // rdi
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // rdi
  __m128i *v53; // rax
  unsigned __int8 v54; // di
  _QWORD *v55; // rax
  _QWORD *v56; // rcx
  _QWORD *v57; // r15
  __int64 v58; // rdi
  __int64 v59; // r12
  __int64 v60; // rdi
  __int64 v61; // r15
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // r12
  _QWORD *v66; // rcx
  _QWORD *v67; // rdi
  unsigned __int64 v68; // rdi
  __int64 v69; // rdx
  _QWORD *v70; // rsi
  __m128i v71[26]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v72[2]; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v73[21]; // [rsp+1F0h] [rbp+170h] BYREF
  char v74; // [rsp+340h] [rbp+2C0h]
  __m128i v75[8]; // [rsp+348h] [rbp+2C8h] BYREF
  volatile signed __int64 *v76; // [rsp+3D0h] [rbp+350h]
  volatile signed __int64 *v77; // [rsp+3D8h] [rbp+358h]
  __m128i v78; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v79; // [rsp+3F0h] [rbp+370h]
  __m256i v80; // [rsp+580h] [rbp+500h] BYREF
  __m128i v81; // [rsp+5A0h] [rbp+520h]
  __m128i v82; // [rsp+5B0h] [rbp+530h]
  __m128i v83; // [rsp+5C0h] [rbp+540h]
  __int64 v84; // [rsp+5D0h] [rbp+550h]
  __int128 v85; // [rsp+6C8h] [rbp+648h]
  __int64 v86; // [rsp+6D8h] [rbp+658h]
  __m128i v87; // [rsp+6E8h] [rbp+668h] BYREF
  __int64 v88; // [rsp+6F8h] [rbp+678h]
  __int128 v89; // [rsp+840h] [rbp+7C0h]
  __int64 v90; // [rsp+850h] [rbp+7D0h]
  char v91; // [rsp+858h] [rbp+7D8h]
  __m128i v92; // [rsp+860h] [rbp+7E0h] BYREF
  __int64 v93; // [rsp+870h] [rbp+7F0h]
  unsigned __int128 v94; // [rsp+878h] [rbp+7F8h]
  __m128i v95[26]; // [rsp+888h] [rbp+808h] BYREF
  __m128i v96; // [rsp+A28h] [rbp+9A8h] BYREF
  __int64 v97; // [rsp+A38h] [rbp+9B8h]
  __int64 v98; // [rsp+A40h] [rbp+9C0h]
  __int64 v99; // [rsp+A48h] [rbp+9C8h]
  unsigned __int64 v100; // [rsp+A50h] [rbp+9D0h]
  __int64 v101; // [rsp+A58h] [rbp+9D8h]
  __int128 v102; // [rsp+BC8h] [rbp+B48h]
  __int128 v103; // [rsp+BD8h] [rbp+B58h]
  volatile signed __int64 *v104; // [rsp+BE8h] [rbp+B68h]
  __int64 v105; // [rsp+BF0h] [rbp+B70h] BYREF
  __int8 v106; // [rsp+BF8h] [rbp+B78h]
  char v107; // [rsp+BF9h] [rbp+B79h]
  int v108; // [rsp+BFAh] [rbp+B7Ah]
  __int16 v109; // [rsp+BFEh] [rbp+B7Eh]
  __int64 v110; // [rsp+C00h] [rbp+B80h]
  __int64 v111; // [rsp+C08h] [rbp+B88h]
  __int64 v112; // [rsp+C10h] [rbp+B90h]
  const char *v113; // [rsp+C18h] [rbp+B98h] BYREF
  __m256i v114; // [rsp+C20h] [rbp+BA0h] BYREF
  __m128i v115; // [rsp+C40h] [rbp+BC0h] BYREF
  __m128i v116; // [rsp+C50h] [rbp+BD0h]
  __m128i v117; // [rsp+C60h] [rbp+BE0h]
  __m128i v118; // [rsp+C70h] [rbp+BF0h]
  __m128i v119; // [rsp+C80h] [rbp+C00h]
  __m128i v120; // [rsp+C90h] [rbp+C10h]
  __m128i v121; // [rsp+CA0h] [rbp+C20h]
  __int128 v122; // [rsp+CB0h] [rbp+C30h]
  __int128 v123; // [rsp+CC0h] [rbp+C40h]
  volatile signed __int64 *v124; // [rsp+CD0h] [rbp+C50h]
  char v125; // [rsp+CD8h] [rbp+C58h]
  char v126; // [rsp+CD9h] [rbp+C59h]
  _QWORD *v127; // [rsp+DE0h] [rbp+D60h]
  unsigned __int64 v128; // [rsp+DE8h] [rbp+D68h]
  __int128 v129; // [rsp+DF0h] [rbp+D70h] BYREF
  __int64 v130; // [rsp+E00h] [rbp+D80h]
  __int64 *v131; // [rsp+E10h] [rbp+D90h]
  __int64 *v132; // [rsp+E18h] [rbp+D98h]
  __int64 v133; // [rsp+E20h] [rbp+DA0h]
  __int64 *v134; // [rsp+E28h] [rbp+DA8h]
  char v135; // [rsp+E37h] [rbp+DB7h] BYREF
  _QWORD *v136; // [rsp+E38h] [rbp+DB8h]
  __int64 v137; // [rsp+E40h] [rbp+DC0h]
  char v138; // [rsp+E4Fh] [rbp+DCFh]
  unsigned __int64 v139; // [rsp+E50h] [rbp+DD0h]
  char v140; // [rsp+E5Fh] [rbp+DDFh]
  __int64 v141; // [rsp+E60h] [rbp+DE0h]

  v141 = -2; /*0x1409e20fb*/
  v3 = a1; /*0x1409e2109*/
  v4 = *(unsigned __int8 *)(a1 + 3536); /*0x1409e210c*/
  v139 = a1; /*0x1409e2121*/
  switch ( v4 ) /*0x1409e2128*/
  {
    case 0LL: /*0x1409e2128*/
      *(_WORD *)(a1 + 3537) = 257; /*0x1409e212a*/
      *(_BYTE *)(a1 + 3539) = 1; /*0x1409e2134*/
      v5 = a1 + 1960; /*0x1409e2143*/
      sub_1412762D0((__m128i *)(a1 + 1960), (const __m128i *)(a1 + 392), 0x620u); /*0x1409e2153*/
      switch ( *(_BYTE *)(v3 + 3520) ) /*0x1409e216e*/
      {
        case 0: /*0x1409e216e*/
          goto LABEL_4;
        case 1: /*0x1409e216e*/
          goto LABEL_89;
        case 2: /*0x1409e216e*/
          goto LABEL_88;
        case 3: /*0x1409e216e*/
          goto LABEL_6;
      }
    case 1LL: /*0x1409e2128*/
      sub_1412ADB20(&off_141363680); /*0x1409e326a*/
    case 2LL: /*0x1409e2128*/
      sub_1412ADB40((__int64)&off_141363680); /*0x1409e325c*/
    case 3LL: /*0x1409e2128*/
      v5 = a1 + 1960; /*0x1409e2170*/
      switch ( *(_BYTE *)(a1 + 3520) ) /*0x1409e218d*/
      {
        case 0: /*0x1409e218d*/
LABEL_4:
          v134 = a2; /*0x1409e218f*/
          v101 = 0; /*0x1409e219d*/
          v96.m128i_i64[0] = (__int64)aSetCodexRouter; /*0x1409e21af*/
          v96.m128i_i64[1] = 32; /*0x1409e21b6*/
          v97 = (__int64)aApp_4; /*0x1409e21c8*/
          v98 = 3; /*0x1409e21cf*/
          v137 = v5; /*0x1409e21da*/
          v99 = v5; /*0x1409e21e1*/
          v136 = (_QWORD *)(v3 + 2480); /*0x1409e21e8*/
          v100 = v3 + 2480; /*0x1409e21ef*/
          sub_140421360((__m128i *)&v113, (__int64)&v96); /*0x1409e2204*/
          v7 = *(unsigned int *)((char *)v114.m256i_u32 + 2) | ((unsigned __int64)v114.m256i_u16[3] << 32); /*0x1409e2223*/
          v8 = v114.m256i_i8[0]; /*0x1409e2226*/
          LOBYTE(v9) = v114.m256i_i8[1]; /*0x1409e222e*/
          v11 = v114.m256i_i64[3]; /*0x1409e2244*/
          v10 = v114.m256i_i64[2]; /*0x1409e2244*/
          if ( v113 == (const char *)3 ) /*0x1409e224f*/
          {
            v133 = v114.m256i_i64[1]; /*0x1409e2255*/
            goto LABEL_74; /*0x1409e225c*/
          }
          v95[6] = v121; /*0x1409e24f9*/
          v95[5] = v120; /*0x1409e2507*/
          v95[4] = v119; /*0x1409e2515*/
          v95[3] = v118; /*0x1409e2538*/
          v95[2] = v117; /*0x1409e253f*/
          v95[1] = v116; /*0x1409e2546*/
          v95[0] = v115; /*0x1409e254d*/
          *(__int32 *)((char *)&v92.m128i_i32[2] + 2) = *(__int32 *)((char *)v114.m256i_i32 + 2); /*0x1409e2554*/
          v92.m128i_i16[7] = WORD2(v7); /*0x1409e255f*/
          v94 = *(_OWORD *)&v114.m256i_u64[2]; /*0x1409e2567*/
          v92.m128i_i64[0] = (__int64)v113; /*0x1409e2575*/
          v92.m128i_i16[4] = v114.m256i_i16[0]; /*0x1409e257c*/
          v93 = v114.m256i_i64[1]; /*0x1409e258a*/
          v113 = aSetCodexRouter; /*0x1409e259c*/
          v114.m256i_i64[0] = 32; /*0x1409e25a3*/
          v114.m256i_i64[1] = (__int64)aManager_1; /*0x1409e25b5*/
          v114.m256i_i64[2] = 7; /*0x1409e25bc*/
          v114.m256i_i64[3] = v137; /*0x1409e25ce*/
          v115 = (__m128i)(unsigned __int64)v136; /*0x1409e25dc*/
          v35 = sub_140419560((char *)(*(_QWORD *)(v139 + 2472) + 16LL), v6); /*0x1409e25fb*/
          if ( v35 ) /*0x1409e2601*/
            goto LABEL_29; /*0x1409e2601*/
          sub_14127A550((__int64)&v96, (__int64)&v113, (__int64)&v114.m256i_i64[1]); /*0x1409e2618*/
          v8 = v96.m128i_i8[0]; /*0x1409e261e*/
          if ( v96.m128i_i8[0] == 6 ) /*0x1409e262a*/
          {
            v35 = v96.m128i_i64[1]; /*0x1409e2630*/
LABEL_29:
            v113 = aSetCodexRouter; /*0x1409e2637*/
            v114.m256i_i64[0] = 32; /*0x1409e2650*/
            v114.m256i_i64[1] = (__int64)aEnabled_4; /*0x1409e2662*/
            v114.m256i_i64[2] = 7; /*0x1409e2669*/
            v114.m256i_i64[3] = v137; /*0x1409e2674*/
            v115 = (__m128i)(unsigned __int64)v136; /*0x1409e2682*/
            sub_140379710(&v96, &v113); /*0x1409e2697*/
            v8 = v96.m128i_i8[0]; /*0x1409e269d*/
            v36 = v96.m128i_i8[1]; /*0x1409e26a5*/
            if ( v96.m128i_i8[0] != 6 ) /*0x1409e26b1*/
            {
              v58 = *(unsigned int *)((char *)v96.m128i_u32 + 2); /*0x1409e2c1d*/
              v59 = v96.m128i_u16[3]; /*0x1409e2c23*/
              v133 = v96.m128i_i64[1]; /*0x1409e2c32*/
              v10 = v97; /*0x1409e2c39*/
              v11 = v98; /*0x1409e2c40*/
              sub_1400453B0((__int64)&v92); /*0x1409e2c4e*/
              v7 = v58 | (v59 << 32); /*0x1409e2c58*/
              LOBYTE(v9) = v36; /*0x1409e2c5b*/
              goto LABEL_74; /*0x1409e2c5e*/
            }
            v113 = aSetCodexRouter; /*0x1409e26c2*/
            v114.m256i_i64[0] = 32; /*0x1409e26c9*/
            v114.m256i_i64[1] = (__int64)aRelaunch; /*0x1409e26db*/
            v114.m256i_i64[2] = 8; /*0x1409e26e2*/
            v114.m256i_i64[3] = v137; /*0x1409e26f4*/
            v115 = (__m128i)(unsigned __int64)v136; /*0x1409e2702*/
            sub_1407D1E80(&v96, &v113); /*0x1409e2717*/
            v8 = v96.m128i_i8[0]; /*0x1409e271d*/
            LOBYTE(v9) = v96.m128i_i8[1]; /*0x1409e2725*/
            if ( v96.m128i_i8[0] == 6 ) /*0x1409e2731*/
            {
              v3 = v139; /*0x1409e2737*/
              v37 = (const __m128i *)(v139 + 2504); /*0x1409e273e*/
              sub_1412762D0((__m128i *)(v139 + 2504), &v92, 0x98u); /*0x1409e2755*/
              *(_QWORD *)(v3 + 2656) = v35; /*0x1409e275a*/
              *(_BYTE *)(v3 + 2832) = v36; /*0x1409e2761*/
              *(_BYTE *)(v3 + 2833) = (_BYTE)v9; /*0x1409e2768*/
              *(_BYTE *)(v3 + 2834) = 0; /*0x1409e276f*/
              v7 = v3 + 2840; /*0x1409e2777*/
              sub_1412762D0((__m128i *)(v3 + 2840), v37, 0x150u); /*0x1409e278a*/
              v12 = (__int64 *)(v3 + 3512); /*0x1409e278f*/
              *(_BYTE *)(v3 + 3512) = 0; /*0x1409e2796*/
              v5 = v137; /*0x1409e279e*/
              a2 = v134; /*0x1409e27a5*/
LABEL_7:
              v13 = (const __m128i *)(v3 + 3176); /*0x1409e2287*/
              sub_1412762D0((__m128i *)(v3 + 3176), (const __m128i *)v7, 0x150u); /*0x1409e229a*/
              switch ( *(_BYTE *)(v3 + 3506) ) /*0x1409e22b5*/
              {
                case 0: /*0x1409e22b5*/
                  goto LABEL_9;
                case 1: /*0x1409e22b5*/
                  goto LABEL_91;
                case 2: /*0x1409e22b5*/
                  goto LABEL_90;
                case 3: /*0x1409e22b5*/
                  goto LABEL_25;
              }
            }
            v64 = *(unsigned int *)((char *)v96.m128i_u32 + 2); /*0x1409e2ebd*/
            v65 = v96.m128i_u16[3]; /*0x1409e2ec3*/
            v133 = v96.m128i_i64[1]; /*0x1409e2ed2*/
            v10 = v97; /*0x1409e2ed9*/
            v11 = v98; /*0x1409e2ee0*/
            sub_1400453B0((__int64)&v92); /*0x1409e2eee*/
          }
          else
          {
            LOBYTE(v9) = v96.m128i_i8[1]; /*0x1409e2ef6*/
            v64 = *(unsigned int *)((char *)v96.m128i_u32 + 2); /*0x1409e2efd*/
            v65 = v96.m128i_u16[3]; /*0x1409e2f03*/
            v133 = v96.m128i_i64[1]; /*0x1409e2f12*/
            v10 = v97; /*0x1409e2f19*/
            v11 = v98; /*0x1409e2f20*/
            sub_1400453B0((__int64)&v92); /*0x1409e2f2e*/
          }
          v7 = v64 | (v65 << 32); /*0x1409e2f38*/
LABEL_74:
          sub_1409B5490(v137); /*0x1409e2f3b*/
          v54 = 1; /*0x1409e2f48*/
          if ( !__OFSUB__(0, *v136) ) /*0x1409e2f57*/
          {
            v132 = (__int64 *)(v139 + 2488); /*0x1409e2f6b*/
            v66 = *(_QWORD **)(v139 + 2488); /*0x1409e2f72*/
            v131 = *(__int64 **)(v139 + 2496); /*0x1409e2f80*/
            v134 = nullptr; /*0x1409e2f87*/
            v127 = v66; /*0x1409e2f92*/
            while ( v131 != v134 ) /*0x1409e2fae*/
            {
              v134 = (__int64 *)((char *)v134 + 1); /*0x1409e2fb3*/
              v67 = v66 + 12; /*0x1409e2fba*/
              sub_1401EEBE0(v66); /*0x1409e2fbe*/
              v66 = v67; /*0x1409e2fc4*/
            }
            v63 = *v136; /*0x1409e2fd0*/
            v54 = 1; /*0x1409e2fd3*/
            if ( *v136 ) /*0x1409e2fd0*/
              goto LABEL_79; /*0x1409e2fd9*/
          }
          goto LABEL_80; /*0x1409e2fd9*/
        case 1: /*0x1409e218d*/
LABEL_89:
          v137 = v5; /*0x1409e328a*/
          sub_1412ADB20(&off_1413613C8); /*0x1409e3298*/
        case 2: /*0x1409e218d*/
LABEL_88:
          v137 = v5; /*0x1409e3271*/
          sub_1412ADB40((__int64)&off_1413613C8); /*0x1409e327f*/
        case 3: /*0x1409e218d*/
          goto LABEL_6;
      }
  }
LABEL_6:
  v12 = (__int64 *)(v3 + 3512); /*0x1409e2261*/
  v7 = v3 + 2840; /*0x1409e2270*/
  switch ( *(_BYTE *)(v3 + 3512) ) /*0x1409e2285*/
  {
    case 0: /*0x1409e2285*/
      goto LABEL_7;
    case 1: /*0x1409e2285*/
      v137 = v5; /*0x1409e3316*/
      v128 = v3 + 2840; /*0x1409e331d*/
      sub_1412ADB20(&off_141363708); /*0x1409e332b*/
    case 2: /*0x1409e2285*/
      v137 = v5; /*0x1409e32f9*/
      v128 = v3 + 2840; /*0x1409e3300*/
      sub_1412ADB40((__int64)&off_141363708); /*0x1409e330e*/
    case 3: /*0x1409e2285*/
      v13 = (const __m128i *)(v3 + 3176); /*0x1409e22b7*/
      switch ( *(_BYTE *)(v3 + 3506) ) /*0x1409e22d4*/
      {
        case 0: /*0x1409e22d4*/
LABEL_9:
          v134 = a2; /*0x1409e22d6*/
          *(_WORD *)(v3 + 3507) = 0; /*0x1409e22dd*/
          v133 = (__int64)v13; /*0x1409e22f7*/
          sub_1412762D0((__m128i *)(v3 + 3336), v13, 0x98u); /*0x1409e2301*/
          v15 = *(_QWORD *)(v3 + 3328); /*0x1409e2306*/
          *(_QWORD *)(v3 + 3488) = v15; /*0x1409e230d*/
          v16 = *(_BYTE *)(v3 + 3504); /*0x1409e2314*/
          v17 = *(_BYTE *)(v3 + 3505); /*0x1409e231c*/
          *(_QWORD *)&v18 = *(_QWORD *)v15; /*0x1409e2324*/
          v19 = _InterlockedIncrement64(*(volatile signed __int64 **)v15); /*0x1409e2327*/
          if ( (v19 < 0) ^ v14 | (v19 == 0) ) /*0x1409e232b*/
            goto LABEL_95; /*0x1409e232b*/
          *((_QWORD *)&v18 + 1) = *(_QWORD *)(v15 + 8); /*0x1409e2331*/
          v20 = _InterlockedIncrement64(*((volatile signed __int64 **)&v18 + 1)); /*0x1409e2335*/
          if ( (v20 < 0) ^ v14 | (v20 == 0) ) /*0x1409e2339*/
            goto LABEL_95; /*0x1409e2339*/
          v21 = *(volatile signed __int64 **)(v15 + 16); /*0x1409e233f*/
          v22 = _InterlockedIncrement64(v21); /*0x1409e2343*/
          if ( (v22 < 0) ^ v14 | (v22 == 0) ) /*0x1409e2347*/
            goto LABEL_95; /*0x1409e2347*/
          v23 = *(volatile signed __int64 **)(v15 + 32); /*0x1409e234d*/
          if ( v23 ) /*0x1409e2354*/
          {
            if ( _InterlockedIncrement64(v23) <= 0 ) /*0x1409e235a*/
              goto LABEL_95; /*0x1409e235a*/
          }
          v132 = v12; /*0x1409e2360*/
          v136 = (_QWORD *)v7; /*0x1409e2367*/
          v137 = v5; /*0x1409e236e*/
          v24 = *(volatile signed __int64 **)(v15 + 24); /*0x1409e2375*/
          if ( _InterlockedIncrement64(v24) <= 0 ) /*0x1409e237d*/
            goto LABEL_95; /*0x1409e237d*/
          v102 = v18; /*0x1409e2383*/
          *(_QWORD *)&v103 = v21; /*0x1409e2391*/
          v104 = v23; /*0x1409e2398*/
          *((_QWORD *)&v103 + 1) = v24; /*0x1409e239f*/
          *(_BYTE *)(v3 + 3508) = 1; /*0x1409e23a6*/
          sub_140103590(&v113, v3 + 3336); /*0x1409e23b8*/
          v7 = v139; /*0x1409e23be*/
          v26 = *(volatile signed __int64 **)(v139 + 3472); /*0x1409e23c5*/
          v27 = _InterlockedIncrement64(v26); /*0x1409e23cd*/
          if ( (v27 < 0) ^ v25 | (v27 == 0) /*0x1409e23e3*/
            || (v28 = *(volatile signed __int64 **)(v7 + 3480),
                v29 = _InterlockedIncrement64(v28),
                (v29 < 0) ^ v25 | (v29 == 0)) )
          {
LABEL_95:
            BUG(); /*0x1409e3331*/
          }
          sub_1412762D0(v75, (const __m128i *)&v113, 0x88u); /*0x1409e2400*/
          v76 = v26; /*0x1409e2405*/
          v77 = v28; /*0x1409e240c*/
          *(_WORD *)(v7 + 3507) = 0; /*0x1409e2413*/
          sub_1412762D0((__m128i *)&v113, v75, 0x98u); /*0x1409e242e*/
          v122 = v102; /*0x1409e2445*/
          v123 = v103; /*0x1409e244c*/
          v124 = v104; /*0x1409e245a*/
          v125 = v16; /*0x1409e2461*/
          v30 = 1; /*0x1409e246b*/
          if ( v17 != 2 ) /*0x1409e2470*/
            v30 = v17; /*0x1409e2470*/
          v126 = v30; /*0x1409e2473*/
          v31 = off_141963508; /*0x1409e2479*/
          a2 = v134; /*0x1409e2485*/
          if ( *((_DWORD *)off_141963508 + 24) ) /*0x1409e2480*/
          {
            v140 = 1; /*0x1409e31dc*/
            v70 = off_141963508; /*0x1409e31e3*/
            sub_141277ED3(); /*0x1409e31e6*/
            v31 = v70; /*0x1409e31eb*/
          }
          if ( *((_DWORD *)v31 + 4) == 2 ) /*0x1409e2496*/
          {
            v32 = 704; /*0x1409e24a4*/
            if ( *(_BYTE *)v31 ) /*0x1409e249c*/
              v32 = 472; /*0x1409e24a9*/
            v33 = v31[1] + v32; /*0x1409e24ad*/
            v140 = 0; /*0x1409e24b1*/
            v34 = sub_1401A42E0(v33, v31, &v113, &off_141321088); /*0x1409e24c6*/
          }
          else
          {
            v38 = 704; /*0x1409e27ba*/
            if ( *((_BYTE *)v31 + 64) ) /*0x1409e27b1*/
              v38 = 472; /*0x1409e27bf*/
            v39 = v31[9] + v38; /*0x1409e27c7*/
            v140 = 0; /*0x1409e27cb*/
            v34 = sub_1401A42E0(v39, v31 + 8, &v113, &off_141321070); /*0x1409e27e3*/
          }
          v3 = v139; /*0x1409e27e9*/
          *(_QWORD *)(v139 + 3496) = v34; /*0x1409e27f0*/
          break; /*0x1409e27f0*/
        case 1: /*0x1409e22d4*/
LABEL_91:
          v133 = (__int64)v13; /*0x1409e32ce*/
          v132 = v12; /*0x1409e32d5*/
          v136 = (_QWORD *)v7; /*0x1409e32dc*/
          JUMPOUT(0x1409E32E3LL); /*0x1409e32e3*/
        case 2: /*0x1409e22d4*/
LABEL_90:
          v133 = (__int64)v13; /*0x1409e32a3*/
          v132 = v12; /*0x1409e32aa*/
          v136 = (_QWORD *)v7; /*0x1409e32b1*/
          v137 = v5; /*0x1409e32b8*/
          sub_1412ADB40((__int64)&off_141362918); /*0x1409e32c6*/
        case 3: /*0x1409e22d4*/
LABEL_25:
          v133 = (__int64)v13; /*0x1409e24d1*/
          v132 = v12; /*0x1409e24d8*/
          v136 = (_QWORD *)v7; /*0x1409e24df*/
          v137 = v5; /*0x1409e24e6*/
          break; /*0x1409e24ed*/
      }
      v131 = (__int64 *)(v3 + 3496); /*0x1409e2808*/
      sub_140063C90(&v113, v3 + 3496, a2); /*0x1409e2812*/
      v40 = (__int64)v113; /*0x1409e2818*/
      if ( v113 == (const char *)0x8000000000000002LL ) /*0x1409e282c*/
      {
        v42 = (_BYTE *)v139; /*0x1409e2865*/
        *(_BYTE *)(v139 + 3506) = 3; /*0x1409e286c*/
        goto LABEL_40; /*0x1409e286c*/
      }
      if ( v113 == (const char *)0x8000000000000001LL ) /*0x1409e283b*/
      {
        v130 = v114.m256i_i64[2]; /*0x1409e2844*/
        v129 = *(_OWORD *)v114.m256i_i8; /*0x1409e2852*/
        v41 = (const char *)0x800000000000000CLL; /*0x1409e2859*/
      }
      else
      {
        v41 = (const char *)v114.m256i_i64[0]; /*0x1409e288a*/
        v129 = *(_OWORD *)&v114.m256i_u64[1]; /*0x1409e2898*/
        v130 = v114.m256i_i64[3]; /*0x1409e28a6*/
        sub_1412762D0(&v87, &v115, 0x150u); /*0x1409e28c1*/
      }
      *(_OWORD *)v80.m256i_i8 = v129; /*0x1409e28cd*/
      v80.m256i_i64[2] = v130; /*0x1409e28db*/
      sub_1412762D0((__m128i *)&v80.m256i_u64[3], &v87, 0x150u); /*0x1409e28f6*/
      v45 = *v131; /*0x1409e2902*/
      if ( (unsigned __int8)sub_140EE8B80(*v131) ) /*0x1409e2908*/
        sub_140EE5BB0(v45); /*0x1409e2915*/
      if ( v40 == 0x8000000000000001uLL ) /*0x1409e291e*/
      {
        v113 = v41; /*0x1409e2924*/
        v114 = v80; /*0x1409e2939*/
        v115.m128i_i64[0] = v81.m128i_i64[0]; /*0x1409e294e*/
        *(_QWORD *)&v129 = &v113; /*0x1409e2955*/
        *((_QWORD *)&v129 + 1) = sub_140E156C0; /*0x1409e2963*/
        sub_14108F360((unsigned __int8 *)&v87, byte_141362548, (unsigned __int64)&v129); /*0x1409e297f*/
        sub_1409AF240((__int64 *)&v113); /*0x1409e298c*/
        v9 = (const __m128i *)v87.m128i_i64[1]; /*0x1409e2999*/
        v46 = v87.m128i_i64[0]; /*0x1409e2999*/
        v11 = v88; /*0x1409e29a0*/
LABEL_49:
        v47 = v139; /*0x1409e2a90*/
        *(_BYTE *)(v139 + 3507) = 0; /*0x1409e2a97*/
        *(_BYTE *)(v47 + 3508) = 0; /*0x1409e2a9e*/
        sub_1400453B0(v47 + 3336); /*0x1409e2aac*/
        sub_1412762D0(&v78, &v96, 0x1A0u); /*0x1409e2ac9*/
        *(_BYTE *)(v139 + 3506) = 1; /*0x1409e2ad5*/
        v48 = v46 >> 8; /*0x1409e2adf*/
        sub_1412762D0(v71, &v78, 0x1A0u); /*0x1409e2af0*/
        goto LABEL_50; /*0x1409e2af0*/
      }
      if ( __OFSUB__(-v40, 1) ) /*0x1409e29b6*/
      {
        v113 = v41; /*0x1409e29bf*/
        v114 = v80; /*0x1409e29cd*/
        v115 = v81; /*0x1409e29ea*/
        v116 = v82; /*0x1409e29f1*/
        v117 = v83; /*0x1409e29f8*/
        v118.m128i_i64[0] = v84; /*0x1409e2a03*/
        *(_QWORD *)&v129 = 0; /*0x1409e2a0a*/
        *((_QWORD *)&v129 + 1) = 1; /*0x1409e2a15*/
        v130 = 0; /*0x1409e2a20*/
        v88 = 1610612768; /*0x1409e2a2b*/
        v87.m128i_i64[0] = (__int64)&v129; /*0x1409e2a3d*/
        v87.m128i_i64[1] = (__int64)&off_141363340; /*0x1409e2a4b*/
        if ( (unsigned __int8)sub_1400603E0(&v113, &v87) ) /*0x1409e2a60*/
          sub_1412AD780( /*0x1409e3219*/
            (__int64)aADisplayImplem_11,
            55,
            (__int64)&v135,
            (__int64)&unk_141363430,
            (__int64)&off_1413633F8);
        v9 = *((const __m128i **)&v129 + 1); /*0x1409e2a75*/
        v46 = v129; /*0x1409e2a75*/
        v11 = v130; /*0x1409e2a7c*/
        sub_1409B6100((unsigned __int64 *)&v113); /*0x1409e2a8a*/
        goto LABEL_49; /*0x1409e2a8a*/
      }
      sub_1412762D0(v73, (const __m128i *)&v80.m256i_u64[2], 0x158u); /*0x1409e2c70*/
      v72[0].m128i_i64[1] = (__int64)v41; /*0x1409e2c75*/
      v72[1] = *(__m128i *)v80.m256i_i8; /*0x1409e2c83*/
      v72[0].m128i_i64[0] = v40; /*0x1409e2c8a*/
      v60 = v139 + 3336; /*0x1409e2c98*/
      v138 = 1; /*0x1409e2c9f*/
      sub_1400271E0(v139 + 3336); /*0x1409e2ca9*/
      sub_1412762D0(&v87, v72, 0x158u); /*0x1409e2cc6*/
      v89 = v85; /*0x1409e2cd2*/
      v90 = v86; /*0x1409e2ce0*/
      v91 = v74; /*0x1409e2cee*/
      v138 = 0; /*0x1409e2cf4*/
      sub_1400199B0(&v113, &v87); /*0x1409e2d05*/
      v7 = (unsigned __int64)v113; /*0x1409e2d0b*/
      v9 = (const __m128i *)v114.m256i_i64[1]; /*0x1409e2d19*/
      v46 = v114.m256i_i64[0]; /*0x1409e2d19*/
      v61 = v114.m256i_i64[3]; /*0x1409e2d27*/
      v11 = v114.m256i_i64[2]; /*0x1409e2d27*/
      sub_1412762D0(&v96, &v115, 0x1A0u); /*0x1409e2d42*/
      v62 = v139; /*0x1409e2d47*/
      *(_BYTE *)(v139 + 3507) = 0; /*0x1409e2d4e*/
      *(_BYTE *)(v62 + 3508) = 0; /*0x1409e2d55*/
      sub_1400453B0(v60); /*0x1409e2d5f*/
      sub_1412762D0(&v78, &v96, 0x1A0u); /*0x1409e2d79*/
      v42 = (_BYTE *)v139; /*0x1409e2d7e*/
      *(_BYTE *)(v139 + 3506) = 1; /*0x1409e2d85*/
      if ( v7 == 0x8000000000000001uLL ) /*0x1409e2d8f*/
      {
LABEL_40:
        v42[3512] = 3; /*0x1409e2873*/
        v42[3520] = 3; /*0x1409e287a*/
        v43 = 3; /*0x1409e2881*/
        result = 1; /*0x1409e2883*/
        goto LABEL_81; /*0x1409e2885*/
      }
      v48 = v46 >> 8; /*0x1409e2d98*/
      sub_1412762D0(v71, &v78, 0x1A0u); /*0x1409e2db0*/
      if ( !__OFSUB__(-(__int64)v7, 1) ) /*0x1409e2dbb*/
      {
        sub_1412762D0(v95, v71, 0x1A0u); /*0x1409e2dd2*/
        v92.m128i_i64[0] = v7; /*0x1409e2dd7*/
        v92.m128i_i8[8] = v46; /*0x1409e2dde*/
        *(__int32 *)((char *)&v92.m128i_i32[2] + 1) = v46 >> 8; /*0x1409e2de5*/
        v92.m128i_i8[15] = v46 >> 8 >> 48; /*0x1409e2df2*/
        *(__int16 *)((char *)&v92.m128i_i16[6] + 1) = HIDWORD(v46) >> 8; /*0x1409e2dfc*/
        v93 = (__int64)v9; /*0x1409e2e03*/
        v94 = __PAIR128__(v61, v11); /*0x1409e2e0a*/
        sub_1400364A0(&v113, &v92); /*0x1409e2e26*/
        v7 = *(unsigned int *)((char *)v114.m256i_u32 + 2) | ((unsigned __int64)v114.m256i_u16[3] << 32); /*0x1409e2e45*/
        v8 = v114.m256i_i8[0]; /*0x1409e2e52*/
        LOBYTE(v9) = v114.m256i_i8[1]; /*0x1409e2e5a*/
        v11 = v114.m256i_i64[3]; /*0x1409e2e70*/
        v10 = v114.m256i_i64[2]; /*0x1409e2e70*/
        if ( v113 == (const char *)0x8000000000000025LL ) /*0x1409e2e7a*/
        {
          v133 = v114.m256i_i64[1]; /*0x1409e2e80*/
          v54 = 0; /*0x1409e2e87*/
        }
        else
        {
          v78.m128i_i64[0] = 0; /*0x1409e314f*/
          v78.m128i_i64[1] = 1; /*0x1409e315a*/
          v79 = 0; /*0x1409e3165*/
          v97 = 1610612768; /*0x1409e3170*/
          v96.m128i_i64[0] = (__int64)&v78; /*0x1409e317b*/
          v96.m128i_i64[1] = (__int64)&off_141363340; /*0x1409e3189*/
          if ( (unsigned __int8)sub_140E156C0((__int64)&v113, &v96) ) /*0x1409e319e*/
            sub_1412AD780( /*0x1409e324a*/
              (__int64)aADisplayImplem_11,
              55,
              (__int64)&v135,
              (__int64)&unk_141363430,
              (__int64)&off_1413633F8);
          v10 = v78.m128i_i64[1]; /*0x1409e31b6*/
          v133 = v78.m128i_i64[0]; /*0x1409e31b6*/
          v11 = v79; /*0x1409e31bd*/
          sub_1409AF240((__int64 *)&v113); /*0x1409e31cb*/
          v54 = 1; /*0x1409e31d1*/
          v8 = 3; /*0x1409e31d4*/
        }
        goto LABEL_58; /*0x1409e2e89*/
      }
LABEL_50:
      v51 = (v48 << 8) | (unsigned __int8)v46; /*0x1409e2af5*/
      if ( v11 < 0 ) /*0x1409e2b03*/
      {
        v52 = 0; /*0x1409e2b05*/
        goto LABEL_52; /*0x1409e2b05*/
      }
      if ( v11 ) /*0x1409e2b26*/
      {
        nullsub_1(v50, v49); /*0x1409e2b2c*/
        v52 = 1; /*0x1409e2b31*/
        v53 = (__m128i *)sub_140001360(v11, 1); /*0x1409e2b3e*/
        if ( !v53 ) /*0x1409e2b46*/
        {
LABEL_52:
          v134 = (__int64 *)v51; /*0x1409e2b07*/
          v131 = (__int64 *)v9; /*0x1409e2b0e*/
          sub_1412AD46B(v52, v11); /*0x1409e2b1b*/
        }
        v10 = (__int64)v53; /*0x1409e2b48*/
        sub_1412762D0(v53, v9, v11); /*0x1409e2b54*/
        if ( !v51 ) /*0x1409e2b5c*/
          goto LABEL_57; /*0x1409e2b5c*/
      }
      else
      {
        v10 = 1; /*0x1409e2eaa*/
        if ( !v51 ) /*0x1409e2eb2*/
          goto LABEL_57; /*0x1409e2eb2*/
      }
      sub_140001370((__int64)v9, v51, 1); /*0x1409e2b6a*/
LABEL_57:
      v54 = 1; /*0x1409e2b6f*/
      v8 = 3; /*0x1409e2b72*/
      v133 = v11; /*0x1409e2b75*/
LABEL_58:
      *(_BYTE *)v132 = 1; /*0x1409e2b7c*/
      sub_1409A4710(v136); /*0x1409e2b8d*/
      sub_1409B5490(v137); /*0x1409e2b9a*/
      if ( !__OFSUB__(0, *(_QWORD *)(v139 + 2480)) ) /*0x1409e2bb0*/
      {
        v132 = (__int64 *)(v139 + 2488); /*0x1409e2bbd*/
        v55 = *(_QWORD **)(v139 + 2488); /*0x1409e2bc4*/
        v131 = *(__int64 **)(v139 + 2496); /*0x1409e2bd2*/
        v134 = nullptr; /*0x1409e2bd9*/
        v136 = v55; /*0x1409e2be4*/
        v56 = v55; /*0x1409e2beb*/
        while ( v131 != v134 ) /*0x1409e2bfe*/
        {
          v134 = (__int64 *)((char *)v134 + 1); /*0x1409e2c07*/
          v57 = v56 + 12; /*0x1409e2c0e*/
          sub_1401EEBE0(v56); /*0x1409e2c12*/
          v56 = v57; /*0x1409e2c18*/
        }
        v63 = *(_QWORD *)(v139 + 2480); /*0x1409e2e95*/
        if ( v63 ) /*0x1409e2e9f*/
LABEL_79:
          sub_140001370(*v132, 96 * v63, 8); /*0x1409e2fdb*/
      }
LABEL_80:
      *(_BYTE *)(v139 + 3520) = 1; /*0x1409e2ff8*/
      sub_140987450(v137); /*0x1409e300d*/
      v108 = v7; /*0x1409e3013*/
      v109 = WORD2(v7); /*0x1409e301e*/
      v111 = v10; /*0x1409e3026*/
      v112 = v11; /*0x1409e302d*/
      v106 = v8; /*0x1409e3038*/
      v107 = (char)v9; /*0x1409e303f*/
      v110 = v133; /*0x1409e304d*/
      v105 = v54; /*0x1409e3054*/
      v68 = v139; /*0x1409e305b*/
      *(_BYTE *)(v139 + 3539) = 0; /*0x1409e3062*/
      sub_1412762D0((__m128i *)&v113, (const __m128i *)v68, 0x168u); /*0x1409e307c*/
      *(_BYTE *)(v68 + 3538) = 0; /*0x1409e3081*/
      v69 = *(_QWORD *)(v68 + 384); /*0x1409e3088*/
      *(_BYTE *)(v68 + 3537) = 0; /*0x1409e308f*/
      v93 = *(_QWORD *)(v68 + 376); /*0x1409e309d*/
      v92 = *(__m128i *)(v68 + 360); /*0x1409e30ab*/
      invoke_resolver_respond_sys( /*0x1409e30d7*/
        (const __m128i *)&v113,
        v69,
        (__int64)&v105,
        (__int128 *)v92.m128i_i8,
        *(_DWORD *)(v68 + 3528),
        *(_DWORD *)(v68 + 3532));
      v43 = 1; /*0x1409e30dd*/
      result = 0; /*0x1409e30df*/
      v42 = (_BYTE *)v139; /*0x1409e30e1*/
LABEL_81:
      v42[3536] = v43; /*0x1409e30e8*/
      return result;
  }
}