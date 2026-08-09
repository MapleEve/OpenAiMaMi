// addr: 0x140844c60
// name (owner-map): sub_140844C60
// module: core::relay::manager
// source: IDA remote hexrays decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140844C60(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __m128i v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rdx
  char *v16; // rbx
  __int64 *v17; // rdi
  int v18; // r15d
  __int64 *v19; // r14
  __m128i *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m128i *v23; // rdi
  char v24; // al
  __int64 v25; // rax
  PVOID v26; // rcx
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  PVOID v34; // rcx
  char v35; // al
  __m128i v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // rcx
  char v40; // al
  void *v41; // rcx
  char v42; // al
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rdi
  unsigned __int64 v50; // r12
  __m128i v51; // xmm8
  char *v53; // rax
  int v54; // eax
  char *v56; // rdx
  unsigned __int64 v57; // r12
  __int64 v58; // r13
  unsigned __int64 v59; // r15
  __m128i v60; // xmm0
  __m128i v61; // xmm7
  __int64 v62; // r12
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rdi
  bool v68; // zf
  __int64 v69; // rdi
  unsigned __int64 v70; // rdi
  __m128i v71; // xmm0
  __int64 v72; // rcx
  PVOID v73; // rbx
  __int64 v74; // rdi
  unsigned __int64 v75; // r12
  __int64 v76; // rdx
  __int64 v77; // rcx
  __m128i v78; // xmm0
  __m128i v79; // xmm7
  __int64 i; // r8
  unsigned __int64 v81; // r12
  __m128i v82; // xmm8
  __int64 v84; // r13
  unsigned __int64 v85; // r14
  __int64 v86; // r15
  __int64 v87; // rbx
  int v88; // eax
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rcx
  __m128i v92; // xmm0
  __m128i v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm2
  int v96; // eax
  __m128i si128; // xmm0
  __int128 v98; // xmm2
  __int128 v99; // xmm3
  __int128 v100; // xmm1
  __m128i v101; // [rsp+30h] [rbp-50h] BYREF
  __int128 v102; // [rsp+40h] [rbp-40h]
  __int128 v103; // [rsp+50h] [rbp-30h]
  __int128 v104; // [rsp+60h] [rbp-20h]
  char v105; // [rsp+154h] [rbp+D4h]
  __m128i v106; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v107; // [rsp+170h] [rbp+F0h]
  __m128i v108; // [rsp+178h] [rbp+F8h] BYREF
  __int128 v109; // [rsp+188h] [rbp+108h]
  __int128 v110; // [rsp+198h] [rbp+118h]
  __int128 v111; // [rsp+1A8h] [rbp+128h]
  __int128 v112; // [rsp+1B8h] [rbp+138h]
  __int128 v113; // [rsp+1C8h] [rbp+148h]
  __m128i v114[2]; // [rsp+1D8h] [rbp+158h] BYREF
  _QWORD v115[4]; // [rsp+1F8h] [rbp+178h] BYREF
  char v116[16]; // [rsp+218h] [rbp+198h] BYREF
  __m128i v117; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v118; // [rsp+238h] [rbp+1B8h]
  __m128i v119; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v120; // [rsp+250h] [rbp+1D0h]
  __int128 v121; // [rsp+260h] [rbp+1E0h]
  __int128 v122; // [rsp+270h] [rbp+1F0h]
  __m128i v123; // [rsp+280h] [rbp+200h] BYREF
  __int128 v124; // [rsp+290h] [rbp+210h]
  _QWORD v125[2]; // [rsp+2A0h] [rbp+220h] BYREF
  _BYTE v126[288]; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v127; // [rsp+3D8h] [rbp+358h] BYREF
  __m128i *v128; // [rsp+3E8h] [rbp+368h]
  __int64 v129; // [rsp+3F0h] [rbp+370h]
  __int64 v130; // [rsp+3F8h] [rbp+378h] BYREF
  __int64 v131; // [rsp+400h] [rbp+380h]
  __int64 v132; // [rsp+408h] [rbp+388h]
  __m128i v133; // [rsp+410h] [rbp+390h] BYREF
  __m128i *v134; // [rsp+420h] [rbp+3A0h]
  __m128i v135; // [rsp+430h] [rbp+3B0h] BYREF
  __m128i *v136; // [rsp+440h] [rbp+3C0h]
  __int64 (__fastcall *v137)(); // [rsp+448h] [rbp+3C8h]
  __int64 v138; // [rsp+450h] [rbp+3D0h]
  __int64 v139; // [rsp+458h] [rbp+3D8h]
  PVOID v140; // [rsp+460h] [rbp+3E0h]
  __int64 v141; // [rsp+468h] [rbp+3E8h]
  __int64 v142; // [rsp+470h] [rbp+3F0h]
  __int64 v143; // [rsp+478h] [rbp+3F8h]
  __int128 v144; // [rsp+480h] [rbp+400h]
  PVOID v145; // [rsp+490h] [rbp+410h]
  __int64 v146; // [rsp+498h] [rbp+418h]
  char v147; // [rsp+4A6h] [rbp+426h]
  unsigned __int8 v148; // [rsp+4A7h] [rbp+427h]
  __int64 v149; // [rsp+4A8h] [rbp+428h]

  v149 = -2; /*0x140844c94*/
  v6 = a2[2]; /*0x140844ca5*/
  if ( *(_QWORD *)(v6 + 16) != -1 ) /*0x140844cae*/
  {
    sub_14149C500(&v126[8], v6 + 16); /*0x140844cbb*/
    *(_QWORD *)v126 = 9; /*0x140844cc0*/
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v126[80]; /*0x140844cd2*/
    v7 = _mm_loadu_si128((const __m128i *)&v126[16]); /*0x140844cd6*/
    v8 = *(_OWORD *)&v126[32]; /*0x140844cde*/
    v9 = *(_OWORD *)&v126[48]; /*0x140844ce5*/
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v126[64]; /*0x140844cf3*/
    *(_OWORD *)(a1 + 48) = v9; /*0x140844cf7*/
    *(_OWORD *)(a1 + 32) = v8; /*0x140844cfb*/
    *(__m128i *)(a1 + 16) = v7; /*0x140844cff*/
    *(_OWORD *)a1 = *(_OWORD *)v126; /*0x140844d0b*/
    return a1; /*0x140844d19*/
  }
  parse_import_file_0(v126, a3, a4); /*0x140844d2b*/
  v11 = *(_QWORD *)v126; /*0x140844d30*/
  v101 = *(__m128i *)&v126[8]; /*0x140844d3e*/
  v102 = *(_OWORD *)&v126[24]; /*0x140844d49*/
  v103 = *(_OWORD *)&v126[40]; /*0x140844d54*/
  v104 = *(_OWORD *)&v126[56]; /*0x140844d5f*/
  if ( *(_QWORD *)v126 != -1 ) /*0x140844d67*/
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v126[88]; /*0x140844d70*/
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v126[72]; /*0x140844d7b*/
    v12 = _mm_load_si128(&v101); /*0x140844d7f*/
    v13 = v102; /*0x140844d84*/
    v14 = v103; /*0x140844d88*/
    *(_OWORD *)(a1 + 56) = v104; /*0x140844d90*/
    *(_OWORD *)(a1 + 40) = v14; /*0x140844d94*/
    *(_OWORD *)(a1 + 24) = v13; /*0x140844d98*/
    *(__m128i *)(a1 + 8) = v12; /*0x140844d9c*/
    *(_QWORD *)a1 = v11; /*0x140844da1*/
    return a1; /*0x140844da4*/
  }
  v119 = _mm_load_si128(&v101); /*0x140844dba*/
  v120 = v102; /*0x140844dc2*/
  v121 = v103; /*0x140844dc9*/
  v122 = v104; /*0x140844dd0*/
  v15 = a2[4]; /*0x140844dd7*/
  v16 = (char *)(v15 + 16); /*0x140844ddb*/
  LOBYTE(v10) = 1; /*0x140844ddf*/
  v143 = v15; /*0x140844de3*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v15 + 16), 1, 0) ) /*0x140844dea*/
    sub_1416C15B0((volatile void *)(v15 + 16)); /*0x140844eac*/
  v17 = off_141EC90B8; /*0x140844df5*/
  if ( 2 * *off_141EC90B8 ) /*0x140844dff*/
  {
    v18 = sub_1416C2250(v10, v15); /*0x140844ebd*/
    LOBYTE(v18) = v18 ^ 1; /*0x140844ec0*/
    if ( *(_BYTE *)(v143 + 17) ) /*0x140844ecb*/
      goto LABEL_9; /*0x140844ed1*/
  }
  else
  {
    v18 = 0; /*0x140844e0b*/
    if ( *(_BYTE *)(v143 + 17) ) /*0x140844e15*/
    {
LABEL_9:
      v19 = v17; /*0x140844e21*/
      nullsub_1(v10); /*0x140844e24*/
      v20 = (__m128i *)sub_140001650(40, 1); /*0x140844e33*/
      if ( !v20 ) /*0x140844e3b*/
      {
        LODWORD(v144) = v18; /*0x140845c9b*/
        *((_QWORD *)&v144 + 1) = v16; /*0x140845ca2*/
        sub_1416C2D4B(1, 40); /*0x140845cb3*/
      }
      v23 = v20; /*0x140844e41*/
      qmemcpy(&v20[1], "nsition lock is poisoned", 24); /*0x140844e4b*/
      *v20 = _mm_loadu_si128((const __m128i *)&xmmword_141795608); /*0x140844e57*/
      if ( !(_BYTE)v18 && 2 * *v19 && !(unsigned __int8)sub_1416C2250(v22, v21) ) /*0x140845afd*/
        *(_BYTE *)(v143 + 17) = 1; /*0x140845b12*/
      v24 = *v16; /*0x140844e7f*/
      *v16 = 0; /*0x140844e7f*/
      if ( v24 == 2 ) /*0x140844e83*/
        WakeByAddressSingle(v16); /*0x140845ae7*/
      *(_QWORD *)a1 = 10; /*0x140844e89*/
      *(_QWORD *)(a1 + 8) = 40; /*0x140844e90*/
      *(_QWORD *)(a1 + 16) = v23; /*0x140844e98*/
      *(_QWORD *)(a1 + 24) = 40; /*0x140844e9c*/
      goto LABEL_38; /*0x140844ea4*/
    }
  }
  LODWORD(v144) = v18; /*0x140844ed7*/
  *((_QWORD *)&v144 + 1) = v16; /*0x140844ede*/
  lock(v126, a2 + 5, aImportingRelay, 25); /*0x140844efd*/
  v26 = *(PVOID *)&v126[8]; /*0x140844f0a*/
  v25 = *(_QWORD *)v126; /*0x140844f0a*/
  v27 = v126[16]; /*0x140844f11*/
  if ( *(_QWORD *)v126 != -1 ) /*0x140844f1c*/
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v126[80]; /*0x140844f25*/
    v28 = _mm_loadu_si128((const __m128i *)&v126[17]); /*0x140844f29*/
    v29 = *(_OWORD *)&v126[33]; /*0x140844f31*/
    v30 = *(_OWORD *)&v126[49]; /*0x140844f38*/
    *(_OWORD *)(a1 + 65) = *(_OWORD *)&v126[65]; /*0x140844f46*/
    *(_OWORD *)(a1 + 49) = v30; /*0x140844f4a*/
    *(_OWORD *)(a1 + 33) = v29; /*0x140844f4e*/
    *(__m128i *)(a1 + 17) = v28; /*0x140844f52*/
    *(_QWORD *)a1 = v25; /*0x140844f57*/
    *(_QWORD *)(a1 + 8) = v26; /*0x140844f5a*/
    *(_BYTE *)(a1 + 16) = v27; /*0x140844f5e*/
    goto LABEL_34; /*0x140844f61*/
  }
  v148 = v126[16]; /*0x140844f66*/
  v140 = *(PVOID *)&v126[8]; /*0x140844f6c*/
  v31 = a2[1]; /*0x140844f73*/
  LOBYTE(v26) = 1; /*0x140844f7b*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v31 + 16), 1, 0) ) /*0x140844f7f*/
    sub_1416C15B0((volatile void *)(v31 + 16)); /*0x140845b3c*/
  if ( !(2 * *off_141EC90B8) ) /*0x140844f94*/
  {
    LODWORD(v146) = 0; /*0x140844fa0*/
    v145 = (PVOID)(v31 + 16); /*0x140844faa*/
    if ( !*(_BYTE *)(v31 + 17) ) /*0x140844fb1*/
      goto LABEL_22; /*0x140844fb7*/
LABEL_116:
    *(_QWORD *)v126 = v145; /*0x140845b73*/
    v126[8] = v146; /*0x140845b87*/
    sub_1416C3060( /*0x140845bb3*/
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)v126,
      (unsigned int)&off_141796230,
      (__int64)&off_141796780);
  }
  v96 = sub_1416C2250(v26, v27); /*0x140845b47*/
  LOBYTE(v96) = v96 ^ 1; /*0x140845b58*/
  LODWORD(v146) = v96; /*0x140845b5a*/
  v145 = (PVOID)(v31 + 16); /*0x140845b60*/
  if ( *(_BYTE *)(v31 + 17) ) /*0x140845b67*/
    goto LABEL_116; /*0x140845b6d*/
LABEL_22:
  sub_140892360(&v101, v31 + 24); /*0x140844fbd*/
  if ( !(_BYTE)v146 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v33, v32) ) /*0x140845c51*/
    *(_BYTE *)(v31 + 17) = 1; /*0x140845c5f*/
  v34 = v145; /*0x140844fec*/
  v35 = *(_BYTE *)v145; /*0x140844ff3*/
  *(_BYTE *)v145 = 0; /*0x140844ff3*/
  if ( v35 == 2 ) /*0x140844ff7*/
    WakeByAddressSingle(v34); /*0x140845bbe*/
  if ( v105 ) /*0x140845004*/
  {
    sub_1408732C0(v126); /*0x14084500d*/
LABEL_29:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v126[80]; /*0x140845032*/
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v126[64]; /*0x140845044*/
    v36 = _mm_loadu_si128((const __m128i *)v126); /*0x140845048*/
    v37 = *(_OWORD *)&v126[16]; /*0x140845050*/
    v38 = *(_OWORD *)&v126[32]; /*0x140845057*/
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v126[48]; /*0x140845065*/
    *(_OWORD *)(a1 + 32) = v38; /*0x140845069*/
    *(_OWORD *)(a1 + 16) = v37; /*0x14084506d*/
    *(__m128i *)a1 = v36; /*0x140845071*/
    goto LABEL_30; /*0x140845071*/
  }
  sub_140846F90(v126, a2); /*0x14084501f*/
  if ( *(_DWORD *)v126 != -1 ) /*0x14084502c*/
    goto LABEL_29; /*0x14084502c*/
  sub_1407E6320(v115, v101.m128i_i64[1], v101.m128i_i64[1] + 232 * v102); /*0x1408451c4*/
  v46 = sub_1407BF4A0(&off_1417964A0); /*0x1408451d1*/
  v124 = xmmword_1417939D0; /*0x1408451de*/
  v123 = _mm_loadu_si128((const __m128i *)&off_1417939C0); /*0x1408451ed*/
  v125[0] = v46; /*0x1408451f5*/
  v125[1] = v47; /*0x1408451fc*/
  v48 = v121; /*0x140845203*/
  v49 = v121 + 176LL * *((_QWORD *)&v121 + 1); /*0x140845215*/
  v139 = *a2 + 16LL; /*0x14084521f*/
  v129 = v115[3]; /*0x14084522d*/
  v145 = (PVOID)v115[0]; /*0x14084523b*/
  v138 = v115[1]; /*0x140845249*/
  v142 = v49; /*0x140845254*/
  while ( v48 != v49 ) /*0x140845310*/
  {
    v58 = v48; /*0x140845316*/
    v48 += 176; /*0x140845319*/
    if ( *(_QWORD *)(v58 + 144) != -1 && *(_QWORD *)(v58 + 160) ) /*0x14084532a*/
    {
      v56 = *(char **)(v58 + 8); /*0x140845334*/
      v59 = *(_QWORD *)(v58 + 16); /*0x140845338*/
      if ( v129 ) /*0x140845344*/
      {
        v146 = *(_QWORD *)(v58 + 8); /*0x14084534d*/
        v57 = sub_1403795A0(v116, v56, v59); /*0x14084535c*/
        v60 = _mm_cvtsi32_si128(v57 >> 57); /*0x140845363*/
        v61 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v60, v60), 0), 68); /*0x140845370*/
        for ( _RCX = 0; ; _RCX += 16 ) /*0x140845375*/
        {
          v50 = v138 & v57; /*0x140845260*/
          v51 = _mm_loadu_si128((const __m128i *)((char *)v145 + v50)); /*0x14084526e*/
          _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v51, v61)); /*0x14084527d*/
          if ( _EDI ) /*0x140845283*/
            break; /*0x140845283*/
LABEL_52:
          v49 = v142; /*0x1408452d6*/
          v56 = (char *)v146; /*0x1408452e9*/
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v51, (__m128i)-1LL)) ) /*0x1408452db*/
            goto LABEL_60; /*0x1408452f0*/
          v57 = _RCX + v50 + 16; /*0x1408452f9*/
        }
        v141 = _RCX; /*0x140845285*/
        while ( 1 ) /*0x14084528c*/
        {
          __asm { tzcnt ecx, edi } /*0x14084528c*/
          v53 = (char *)v145 - 16 * (v138 & (v50 + _RCX)); /*0x1408452a5*/
          if ( v59 == *((_QWORD *)v53 - 1) && !(unsigned int)sub_1416847B0(v146, *((_QWORD *)v53 - 2), v59) ) /*0x1408452bc*/
            break; /*0x1408452bc*/
          v54 = _EDI - 1; /*0x1408452c5*/
          LOWORD(v54) = _EDI & (_EDI - 1); /*0x1408452c8*/
          _EDI = v54; /*0x1408452cb*/
          _RCX = v141; /*0x1408452cd*/
          if ( !(_WORD)v54 ) /*0x1408452d4*/
            goto LABEL_52; /*0x1408452d4*/
        }
        v49 = v142; /*0x140845306*/
      }
      else
      {
LABEL_60:
        v62 = (__int64)v56; /*0x14084537c*/
        sub_140AE73A0((__int64)v126, v56, v59); /*0x140845389*/
        v63 = *(_QWORD *)v126; /*0x14084538f*/
        if ( *(_QWORD *)v126 == -1 ) /*0x14084539a*/
        {
          if ( *(_QWORD *)(v58 + 40) ) /*0x1408453bc*/
          {
            v65 = *(_QWORD *)(v58 + 64); /*0x1408453c7*/
            if ( v65 ) /*0x1408453ce*/
            {
              sub_140A49CF0(v126, *(_QWORD *)(v58 + 56), v65); /*0x1408453df*/
              v63 = *(_QWORD *)&v126[8]; /*0x1408453e5*/
              if ( v126[0] ) /*0x1408453f3*/
              {
                if ( *(_QWORD *)&v126[8] ) /*0x1408453f8*/
                {
                  v64 = *(_QWORD *)&v126[16]; /*0x1408453fe*/
LABEL_63:
                  sub_140001660(v64, v63, 1); /*0x1408453ac*/
                }
              }
              else
              {
                if ( *(_QWORD *)&v126[8] ) /*0x14084540a*/
                  sub_140001660(*(_QWORD *)&v126[16], *(_QWORD *)&v126[8], 1); /*0x140845419*/
                v66 = *(_QWORD *)(v58 + 88); /*0x14084541e*/
                if ( v66 ) /*0x140845425*/
                {
                  normalize_relay_models( /*0x14084544f*/
                    (unsigned int)v126,
                    *(_QWORD *)(v58 + 104),
                    *(_QWORD *)(v58 + 112),
                    *(_QWORD *)(v58 + 80),
                    v66,
                    *(_BYTE *)(v58 + 169));
                  v67 = *(_QWORD *)v126; /*0x140845455*/
                  sub_1407D3BC0(v126); /*0x140845463*/
                  v68 = v67 == -1; /*0x140845468*/
                  v49 = v142; /*0x14084546c*/
                  if ( !v68 && !(unsigned __int8)sub_14042A5B0(&v123, v58) ) /*0x140845483*/
                  {
                    get_api_key(&v108, v139, v62, v59); /*0x1408454a5*/
                    if ( v108.m128i_i32[0] == 1 ) /*0x1408454b2*/
                    {
                      v136 = *((__m128i **)&v109 + 1); /*0x140845bdf*/
                      v135 = _mm_loadu_si128((const __m128i *)&v108.m128i_u64[1]); /*0x140845bea*/
                      sub_140831FB0(v126, v58, &v135); /*0x140845c03*/
                      si128 = _mm_load_si128((const __m128i *)&v126[16]); /*0x140845c09*/
                      v98 = *(_OWORD *)&v126[48]; /*0x140845c18*/
                      v99 = *(_OWORD *)&v126[64]; /*0x140845c1f*/
                      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v126[32]; /*0x140845c26*/
                      *(_OWORD *)(a1 + 48) = v98; /*0x140845c2a*/
                      *(_OWORD *)(a1 + 64) = v99; /*0x140845c2e*/
                      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v126[80]; /*0x140845c39*/
                      v100 = *(_OWORD *)v126; /*0x140845c3d*/
                      *(__m128i *)(a1 + 16) = si128; /*0x140845c44*/
                      *(_OWORD *)a1 = v100; /*0x140845c49*/
                      goto LABEL_110; /*0x140845c4c*/
                    }
                    v146 = v108.m128i_i64[1]; /*0x1408454bf*/
                    v69 = *((_QWORD *)&v109 + 1); /*0x1408454d4*/
                    v141 = v109; /*0x1408454d4*/
                    v147 = 1; /*0x1408454db*/
                    sub_14149C500(&v108, v58); /*0x1408454ef*/
                    *(_QWORD *)v126 = v146; /*0x1408454fc*/
                    *(_QWORD *)&v126[8] = v141; /*0x14084550a*/
                    *(_QWORD *)&v126[16] = v69; /*0x140845511*/
                    v147 = 0; /*0x140845518*/
                    sub_1404714A0(&v135, &v123, &v108, v126); /*0x140845537*/
                    if ( v135.m128i_i64[0] > 0 ) /*0x140845547*/
                      sub_140001660(v135.m128i_i64[1], v135.m128i_i64[0], 1); /*0x140845556*/
                    v49 = v142; /*0x14084555b*/
                  }
                }
              }
            }
          }
        }
        else if ( *(_QWORD *)v126 ) /*0x14084539f*/
        {
          v64 = *(_QWORD *)&v126[8]; /*0x1408453a5*/
          goto LABEL_63; /*0x1408453a5*/
        }
      }
    }
  }
  v70 = v102; /*0x140845567*/
  apply_import_to_state(v114, v139, &v101, &v119); /*0x140845584*/
  sub_140892360(v126, &v101); /*0x140845595*/
  sub_1408582D0(&v108, a2, v126); /*0x1408455ac*/
  if ( v108.m128i_i32[0] == -1 ) /*0x1408455b9*/
  {
    v92 = _mm_loadu_si128(v114); /*0x1408459ef*/
    *(__m128i *)(a1 + 24) = v114[1]; /*0x1408459fe*/
    *(__m128i *)(a1 + 8) = v92; /*0x140845a02*/
    *(_QWORD *)a1 = -1; /*0x140845a07*/
    sub_14067F030(&v123); /*0x140845a15*/
    sub_140680B40(v115); /*0x140845a22*/
    sub_140018740(&v101); /*0x140845a2c*/
    sub_14000E270(v140, v148); /*0x140845a40*/
    sub_14000E270(*((_QWORD *)&v144 + 1), (unsigned int)v144); /*0x140845a53*/
    sub_1407DB370(&v119); /*0x140845a60*/
    return a1; /*0x140845a65*/
  }
  *(_OWORD *)&v126[80] = v113; /*0x1408455c6*/
  *(_OWORD *)&v126[64] = v112; /*0x1408455d4*/
  v71 = _mm_loadu_si128(&v108); /*0x1408455db*/
  *(_OWORD *)&v126[48] = v111; /*0x1408455f8*/
  *(_OWORD *)&v126[32] = v110; /*0x1408455ff*/
  *(_OWORD *)&v126[16] = v109; /*0x140845606*/
  *(__m128i *)v126 = v71; /*0x14084560d*/
  v130 = 0; /*0x140845615*/
  v131 = 8; /*0x140845620*/
  v132 = 0; /*0x14084562b*/
  if ( v70 > (unsigned __int64)v102 ) /*0x14084563d*/
    sub_1416C32F0(v70, v102, v102, &off_1417967F0); /*0x140845c93*/
  v72 = v101.m128i_i64[1] + 232 * v70; /*0x14084564e*/
  v73 = (PVOID)(v101.m128i_i64[1] + 232 * v102); /*0x140845658*/
  v145 = v73; /*0x140845666*/
  while ( 2 ) /*0x140845679*/
  {
    if ( (PVOID)v72 != v73 ) /*0x140845679*/
    {
      v74 = v72; /*0x14084567f*/
      v72 += 232; /*0x140845682*/
      if ( !*(_BYTE *)(v74 + 228) ) /*0x140845690*/
        continue; /*0x140845690*/
      v146 = v72; /*0x140845692*/
      if ( *((_QWORD *)&v124 + 1) ) /*0x1408456a1*/
      {
        v75 = sub_140378810(v125, v74); /*0x1408456b7*/
        v76 = v123.m128i_i64[1]; /*0x1408456c5*/
        v77 = v123.m128i_i64[0]; /*0x1408456c5*/
        v78 = _mm_cvtsi32_si128(v75 >> 57); /*0x1408456cc*/
        v79 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v78, v78), 0), 68); /*0x1408456d9*/
        for ( i = 0; ; i += 16 ) /*0x1408456de*/
        {
          v81 = v76 & v75; /*0x1408456e1*/
          v82 = _mm_loadu_si128((const __m128i *)(v77 + v81)); /*0x1408456e4*/
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v82, v79)); /*0x1408456f3*/
          if ( (_DWORD)_RAX ) /*0x1408456f9*/
            break; /*0x1408456f9*/
LABEL_91:
          v73 = v145; /*0x140845774*/
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v82, (__m128i)-1LL)) ) /*0x140845779*/
            goto LABEL_93; /*0x140845787*/
          v75 = i + v81 + 16; /*0x14084578c*/
        }
        v84 = *(_QWORD *)(v74 + 16); /*0x1408456fb*/
        v129 = v76; /*0x1408456ff*/
        v142 = i; /*0x140845706*/
        while ( 1 ) /*0x14084570d*/
        {
          v138 = _RAX; /*0x14084570d*/
          __asm { tzcnt eax, eax } /*0x140845714*/
          if ( v84 == *(_QWORD *)(v77 - 48 * (v76 & (v81 + _RAX)) - 32) ) /*0x14084572e*/
          {
            v85 = v77 - 48 * (v76 & (v81 + _RAX)); /*0x140845730*/
            v86 = *(_QWORD *)(v74 + 8); /*0x140845737*/
            v87 = v77; /*0x14084573b*/
            v88 = sub_1416847B0(v86, *(_QWORD *)(v85 - 40), v84); /*0x140845744*/
            v77 = v87; /*0x140845749*/
            if ( !v88 ) /*0x14084574e*/
              break; /*0x14084574e*/
          }
          _RAX = (unsigned int)(v138 - 1); /*0x140845757*/
          LOWORD(_RAX) = v138 & (v138 - 1); /*0x14084575a*/
          v76 = v129; /*0x140845764*/
          i = v142; /*0x14084576b*/
          if ( !(_WORD)_RAX ) /*0x140845772*/
            goto LABEL_91; /*0x140845772*/
        }
        if ( *(_QWORD *)(v85 - 24) != -1 ) /*0x1408457be*/
        {
          sub_1404D9720((unsigned int)&v127, v139, v86, v84, *(_QWORD *)(v85 - 16), *(_QWORD *)(v85 - 8)); /*0x1408457ed*/
          v73 = v145; /*0x1408457f3*/
          goto LABEL_97; /*0x1408457f3*/
        }
        v73 = v145; /*0x1408458db*/
      }
      else
      {
LABEL_93:
        v86 = *(_QWORD *)(v74 + 8); /*0x140845799*/
        v84 = *(_QWORD *)(v74 + 16); /*0x14084579d*/
      }
      sub_1404D9B20(&v127, v139, v86, v84); /*0x1408457b1*/
LABEL_97:
      if ( v127.m128i_i64[0] != -1 ) /*0x140845802*/
      {
        v134 = v128; /*0x14084580f*/
        v133 = v127; /*0x14084581d*/
        v135.m128i_i64[0] = v74; /*0x140845824*/
        v135.m128i_i64[1] = (__int64)sub_1400015F0; /*0x140845832*/
        v136 = &v133; /*0x140845840*/
        v137 = sub_1400015F0; /*0x140845847*/
        sub_14149C0F0(&v117, &unk_1417967E9, &v135); /*0x140845863*/
        v89 = v132; /*0x140845869*/
        if ( v132 == v130 ) /*0x140845877*/
          sub_141689AB0(&v130); /*0x140845880*/
        v90 = v131; /*0x140845886*/
        v91 = 3 * v89; /*0x14084588d*/
        *(_QWORD *)(v131 + 8 * v91 + 16) = v118; /*0x140845898*/
        *(__m128i *)(v90 + 8 * v91) = _mm_loadu_si128(&v117); /*0x1408458a5*/
        v132 = v89 + 1; /*0x1408458ad*/
        if ( v133.m128i_i64[0] ) /*0x1408458be*/
          sub_140001660(v133.m128i_i64[1], v133.m128i_i64[0], 1); /*0x1408458d1*/
      }
      v72 = v146; /*0x14084566f*/
      continue; /*0x14084566f*/
    }
    break;
  }
  if ( v132 ) /*0x1408458f8*/
  {
    sub_140440300((unsigned int)&v135, v131, v132, (unsigned int)&unk_141796798, 3); /*0x14084591c*/
    v134 = v136; /*0x140845929*/
    v133 = _mm_loadu_si128(&v135); /*0x140845938*/
    v135.m128i_i64[0] = (__int64)v126; /*0x140845947*/
    v135.m128i_i64[1] = (__int64)sub_140B036A0; /*0x140845955*/
    v136 = &v133; /*0x140845963*/
    v137 = sub_1400015F0; /*0x140845971*/
    sub_14149C0F0(&v106, &unk_14179679B, &v135); /*0x14084598d*/
    if ( v133.m128i_i64[0] ) /*0x14084599d*/
      sub_140001660(v133.m128i_i64[1], v133.m128i_i64[0], 1); /*0x1408459ac*/
    *(_QWORD *)(a1 + 24) = v107; /*0x1408459b8*/
    *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v106); /*0x1408459c4*/
    *(_QWORD *)a1 = 10; /*0x1408459c9*/
    sub_140009B20(&v130); /*0x1408459d7*/
    sub_1407DA310(v126); /*0x1408459e4*/
  }
  else
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v126[80]; /*0x140845a71*/
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v126[64]; /*0x140845a7c*/
    v93 = _mm_load_si128((const __m128i *)v126); /*0x140845a80*/
    v94 = *(_OWORD *)&v126[16]; /*0x140845a88*/
    v95 = *(_OWORD *)&v126[32]; /*0x140845a8f*/
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v126[48]; /*0x140845a9d*/
    *(_OWORD *)(a1 + 32) = v95; /*0x140845aa1*/
    *(_OWORD *)(a1 + 16) = v94; /*0x140845aa5*/
    *(__m128i *)a1 = v93; /*0x140845aa9*/
    sub_140009B20(&v130); /*0x140845ab4*/
  }
  sub_1402B86C0(v114); /*0x140845ac0*/
LABEL_110:
  sub_14067F030(&v123); /*0x140845ac6*/
  sub_140680B40(v115); /*0x140845ada*/
LABEL_30:
  sub_140018740(&v101); /*0x140845075*/
  v17 = off_141EC90B8; /*0x140845086*/
  if ( (v148 & 1) == 0 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v39, v27) ) /*0x140845c68*/
    *((_BYTE *)v140 + 1) = 1; /*0x140845c7d*/
  v26 = v140; /*0x1408450a0*/
  v40 = *(_BYTE *)v140; /*0x1408450a7*/
  *(_BYTE *)v140 = 0; /*0x1408450a7*/
  if ( v40 == 2 ) /*0x1408450ab*/
    WakeByAddressSingle(v26); /*0x140845bc9*/
LABEL_34:
  if ( !(_BYTE)v144 && 2 * *v17 && !(unsigned __int8)sub_1416C2250(v26, v27) ) /*0x140845b1b*/
    *(_BYTE *)(v143 + 17) = 1; /*0x140845b30*/
  v41 = *((void **)&v144 + 1); /*0x1408450cb*/
  v42 = **((_BYTE **)&v144 + 1); /*0x1408450d2*/
  **((_BYTE **)&v144 + 1) = 0; /*0x1408450d2*/
  if ( v42 == 2 ) /*0x1408450d6*/
    WakeByAddressSingle(v41); /*0x140845af2*/
LABEL_38:
  if ( v119.m128i_i64[0] ) /*0x1408450e6*/
    sub_140001660(v119.m128i_i64[1], v119.m128i_i64[0], 1); /*0x1408450f5*/
  v43 = v121; /*0x140845101*/
  v143 = 0; /*0x14084510f*/
  v144 = v121; /*0x14084511a*/
  while ( *((_QWORD *)&v144 + 1) != v143 ) /*0x14084513e*/
  {
    ++v143; /*0x140845143*/
    v44 = v43 + 176; /*0x14084514a*/
    sub_1402C7F80(); /*0x140845151*/
    v43 = v44; /*0x140845157*/
  }
  if ( *((_QWORD *)&v120 + 1) ) /*0x140845166*/
    sub_140001660(v121, 176LL * *((_QWORD *)&v120 + 1), 8); /*0x14084517c*/
  return a1; /*0x140845184*/
}

// --- refs ---
// 0x14149c500  sub_14149C500
// 0x140ae2ab0  parse_import_file_0
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d4b  sub_1416C2D4B
// 0x141795608  xmmword_141795608
// 0x1416c1670  WakeByAddressSingle
// 0x1403b7e80  lock
// 0x141796763  aImportingRelay  // string: "importing relay providers"
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x141796780  off_141796780
// 0x140892360  sub_140892360
// 0x1408732c0  sub_1408732C0
// 0x140846f90  sub_140846F90
// 0x1407e6320  sub_1407E6320
// 0x1407bf4a0  sub_1407BF4A0
// 0x1417964a0  off_1417964A0
// 0x1417939d0  xmmword_1417939D0
// 0x1417939c0  off_1417939C0
// 0x1403795a0  sub_1403795A0
// 0x1416847b0  sub_1416847B0
// 0x140ae73a0  sub_140AE73A0
// 0x140a49cf0  sub_140A49CF0
// 0x140001660  sub_140001660
// 0x140ae6160  normalize_relay_models
// 0x1407d3bc0  sub_1407D3BC0
// 0x1404d9190  get_api_key
// 0x140831fb0  sub_140831FB0
// 0x1404714a0  sub_1404714A0
// 0x14042a5b0  sub_14042A5B0
// 0x140ae3170  apply_import_to_state
// 0x1408582d0  sub_1408582D0
// 0x14067f030  sub_14067F030
// 0x140680b40  sub_140680B40
// 0x140018740  sub_140018740
// 0x14000e270  sub_14000E270
// 0x1407db370  sub_1407DB370
// 0x1416c32f0  sub_1416C32F0
// 0x1417967f0  off_1417967F0
// 0x140378810  sub_140378810
// 0x1404d9720  sub_1404D9720
// 0x1404d9b20  sub_1404D9B20
// 0x1400015f0  sub_1400015F0
// 0x14149c0f0  sub_14149C0F0
// 0x1417967e9  unk_1417967E9
// 0x141689ab0  sub_141689AB0
// 0x140440300  sub_140440300
// 0x141796798  unk_141796798
// 0x140b036a0  sub_140B036A0
// 0x14179679b  unk_14179679B
// 0x140009b20  sub_140009B20
// 0x1407da310  sub_1407DA310
// 0x1402b86c0  sub_1402B86C0
// 0x1402c7f80  sub_1402C7F80
