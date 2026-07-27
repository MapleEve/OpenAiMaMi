// addr: 0x140859440
// name (owner-map): sub_140859440
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140859440(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // r14
  char *v11; // r15
  __int64 *v12; // r13
  unsigned int v13; // ebx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // cl
  volatile void *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // r12
  __int64 v24; // r14
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // rcx
  _OWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 v40; // r14
  __int64 v41; // rbx
  __int64 v42; // rax
  char v43; // dl
  __int64 v44; // r15
  __int64 v45; // r13
  __int64 v46; // r8
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  unsigned __int64 v50; // rax
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  unsigned __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  char *v56; // rdi
  char v57; // al
  PVOID v58; // rcx
  char v59; // al
  void *v61; // rdi
  void *v62; // rdi
  char v63; // cl
  unsigned int v64; // eax
  __int64 v65; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v66; // [rsp+30h] [rbp-50h] BYREF
  __int128 v67; // [rsp+38h] [rbp-48h]
  __int128 v68; // [rsp+48h] [rbp-38h]
  __int128 v69; // [rsp+58h] [rbp-28h]
  __int128 v70; // [rsp+68h] [rbp-18h]
  __int128 v71; // [rsp+78h] [rbp-8h]
  __int128 v72; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v73; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v74; // [rsp+170h] [rbp+F0h]
  __int128 v75; // [rsp+180h] [rbp+100h]
  __int128 v76; // [rsp+190h] [rbp+110h]
  __int128 v77; // [rsp+1A0h] [rbp+120h]
  __int64 v78; // [rsp+280h] [rbp+200h] BYREF
  __int128 v79; // [rsp+288h] [rbp+208h]
  __int128 v80; // [rsp+298h] [rbp+218h]
  __int128 v81; // [rsp+2A8h] [rbp+228h]
  __int128 v82; // [rsp+2B8h] [rbp+238h]
  __int128 v83; // [rsp+2C8h] [rbp+248h]
  __int128 v84; // [rsp+2D8h] [rbp+258h]
  __int128 v85; // [rsp+2E8h] [rbp+268h]
  __int128 v86; // [rsp+2F8h] [rbp+278h]
  __int128 v87; // [rsp+308h] [rbp+288h]
  __int128 v88; // [rsp+318h] [rbp+298h]
  __int128 v89; // [rsp+328h] [rbp+2A8h]
  __int128 v90; // [rsp+338h] [rbp+2B8h]
  __int128 v91; // [rsp+348h] [rbp+2C8h]
  __int128 v92; // [rsp+358h] [rbp+2D8h]
  _QWORD v93[2]; // [rsp+368h] [rbp+2E8h] BYREF
  _QWORD v94[2]; // [rsp+378h] [rbp+2F8h] BYREF
  _BYTE v95[104]; // [rsp+388h] [rbp+308h] BYREF
  __int128 v96; // [rsp+3F0h] [rbp+370h]
  __int128 v97; // [rsp+400h] [rbp+380h]
  __int128 v98; // [rsp+410h] [rbp+390h]
  __int128 v99; // [rsp+420h] [rbp+3A0h]
  __int128 v100; // [rsp+430h] [rbp+3B0h]
  __int128 v101; // [rsp+440h] [rbp+3C0h]
  __int128 v102; // [rsp+450h] [rbp+3D0h]
  __int128 v103; // [rsp+460h] [rbp+3E0h]
  char v104; // [rsp+4ACh] [rbp+42Ch]
  unsigned __int128 v105; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v106; // [rsp+4C0h] [rbp+440h]
  __int128 v107; // [rsp+4D0h] [rbp+450h]
  __int128 v108; // [rsp+4E0h] [rbp+460h]
  __int128 v109; // [rsp+4F0h] [rbp+470h]
  __int128 v110; // [rsp+500h] [rbp+480h]
  __int64 v111; // [rsp+518h] [rbp+498h]
  __int64 v112; // [rsp+520h] [rbp+4A0h]
  __int64 v113; // [rsp+528h] [rbp+4A8h]
  __int64 v114; // [rsp+530h] [rbp+4B0h]
  PVOID Address; // [rsp+538h] [rbp+4B8h]
  PVOID v116; // [rsp+540h] [rbp+4C0h]
  __int64 v117; // [rsp+548h] [rbp+4C8h]
  unsigned int v118; // [rsp+554h] [rbp+4D4h]
  unsigned int v119; // [rsp+558h] [rbp+4D8h]
  char v120; // [rsp+55Dh] [rbp+4DDh]
  unsigned __int8 v121; // [rsp+55Eh] [rbp+4DEh]
  char v122; // [rsp+55Fh] [rbp+4DFh]
  __int64 v123; // [rsp+560h] [rbp+4E0h]

  v123 = -2; /*0x14085945b*/
  v5 = a1; /*0x140859469*/
  v94[0] = a3; /*0x14085946c*/
  v94[1] = a4; /*0x140859473*/
  v6 = a2[2]; /*0x14085947a*/
  if ( *(_QWORD *)(v6 + 16) != -1 ) /*0x140859483*/
  {
    sub_14149C500(&v95[8], v6 + 16); /*0x140859490*/
    *(_QWORD *)v95 = 9; /*0x140859495*/
    *(_OWORD *)(v5 + 88) = *(_OWORD *)&v95[80]; /*0x1408594a7*/
    v7 = *(_OWORD *)&v95[16]; /*0x1408594ab*/
    v8 = *(_OWORD *)&v95[32]; /*0x1408594b2*/
    v9 = *(_OWORD *)&v95[48]; /*0x1408594b9*/
    *(_OWORD *)(v5 + 72) = *(_OWORD *)&v95[64]; /*0x1408594c7*/
    *(_OWORD *)(v5 + 56) = v9; /*0x1408594cb*/
    *(_OWORD *)(v5 + 40) = v8; /*0x1408594cf*/
    *(_OWORD *)(v5 + 24) = v7; /*0x1408594d3*/
    *(_OWORD *)(v5 + 8) = *(_OWORD *)v95; /*0x1408594de*/
    *(_QWORD *)v5 = -1; /*0x1408594ed*/
    return v5; /*0x1408594f4*/
  }
  v10 = a2[4]; /*0x1408594f9*/
  v11 = (char *)(v10 + 16); /*0x1408594fd*/
  LOBYTE(a1) = 1; /*0x140859501*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v10 + 16), 1, 0) ) /*0x140859505*/
  {
    v18 = (volatile void *)(v10 + 16); /*0x1408595c1*/
    v19 = a4; /*0x1408595c4*/
    v20 = v10; /*0x1408595c7*/
    v21 = a3; /*0x1408595ca*/
    sub_1416C15B0(v18); /*0x1408595cd*/
    a3 = v21; /*0x1408595d2*/
    v10 = v20; /*0x1408595d5*/
    a4 = v19; /*0x1408595d8*/
  }
  v12 = off_141EC90B8; /*0x140859511*/
  if ( 2 * *off_141EC90B8 ) /*0x14085951c*/
  {
    v22 = a4; /*0x1408595e0*/
    v23 = v10; /*0x1408595e3*/
    v24 = a3; /*0x1408595e6*/
    v25 = sub_1416C2250(a1, v6); /*0x1408595e9*/
    a3 = v24; /*0x1408595ee*/
    v10 = v23; /*0x1408595f1*/
    a4 = v22; /*0x1408595f4*/
    v13 = v25; /*0x1408595f7*/
    LOBYTE(v13) = v25 ^ 1; /*0x1408595f9*/
    if ( *(_BYTE *)(v23 + 17) ) /*0x1408595fc*/
      goto LABEL_7; /*0x140859603*/
  }
  else
  {
    v13 = 0; /*0x140859528*/
    if ( *(_BYTE *)(v10 + 17) ) /*0x14085952a*/
    {
LABEL_7:
      nullsub_1(a1); /*0x140859537*/
      v14 = (void *)sub_140001650(40, 1); /*0x140859546*/
      if ( !v14 ) /*0x14085954e*/
      {
        v118 = v13; /*0x140859f12*/
        Address = v11; /*0x140859f18*/
        sub_1416C2D4B(1, 40); /*0x140859f29*/
      }
      qmemcpy(v14, "Codex router transition lock is poisoned", 40); /*0x140859566*/
      if ( !(_BYTE)v13 ) /*0x140859579*/
      {
        v16 = 2 * *v12; /*0x14085957f*/
        if ( v16 ) /*0x140859585*/
        {
          v62 = v14; /*0x140859e2a*/
          v63 = sub_1416C2250(v16, v15); /*0x140859e32*/
          v14 = v62; /*0x140859e34*/
          if ( !v63 ) /*0x140859e39*/
            *(_BYTE *)(v10 + 17) = 1; /*0x140859e3f*/
        }
      }
      v17 = *v11; /*0x14085958d*/
      *v11 = 0; /*0x14085958d*/
      if ( v17 == 2 ) /*0x140859593*/
      {
        v61 = v14; /*0x140859e13*/
        WakeByAddressSingle(v11); /*0x140859e16*/
        v14 = v61; /*0x140859e1b*/
      }
      *(_QWORD *)(v5 + 8) = 10; /*0x140859599*/
      *(_QWORD *)(v5 + 16) = 40; /*0x1408595a1*/
      *(_QWORD *)(v5 + 24) = v14; /*0x1408595a9*/
      *(_QWORD *)(v5 + 32) = 40; /*0x1408595ad*/
      *(_QWORD *)v5 = -1; /*0x1408595b5*/
      return v5; /*0x1408595bc*/
    }
  }
  v118 = v13; /*0x140859609*/
  Address = v11; /*0x14085960f*/
  v111 = a3; /*0x140859616*/
  v114 = a4; /*0x14085961d*/
  lock(v95, a2 + 5, aActivatingARel, 27); /*0x14085963c*/
  v27 = *(_QWORD *)&v95[8]; /*0x140859649*/
  v26 = *(_QWORD *)v95; /*0x140859649*/
  v28 = v95[16]; /*0x140859650*/
  if ( *(_QWORD *)v95 == -1 ) /*0x14085965b*/
  {
    v121 = v95[16]; /*0x1408596ab*/
    v116 = *(PVOID *)&v95[8]; /*0x1408596b1*/
    sub_14085A1E0((__int64)v95, (__int64)a2); /*0x1408596c2*/
    if ( v104 ) /*0x1408596cf*/
    {
      sub_140018740(v95); /*0x1408596dc*/
      nullsub_1(v32); /*0x1408596e2*/
      v33 = (_OWORD *)sub_140001650(107, 1); /*0x1408596f1*/
      if ( !v33 ) /*0x1408596f9*/
        sub_1416C2D4B(1, 107); /*0x140859f3b*/
      *(_OWORD *)((char *)v33 + 91) = *(__int128 *)((char *)&xmmword_141798C00 + 11); /*0x140859706*/
      v33[5] = xmmword_141798C00; /*0x140859711*/
      v33[4] = xmmword_141798BF0; /*0x14085971c*/
      v33[3] = xmmword_141798BE0; /*0x140859727*/
      v33[2] = xmmword_141798BD0; /*0x140859732*/
      v33[1] = xmmword_141798BC0; /*0x14085973d*/
      *v33 = xmmword_141798BB0; /*0x140859748*/
      *(_QWORD *)(v5 + 8) = 10; /*0x14085974b*/
      *(_QWORD *)(v5 + 16) = 107; /*0x140859753*/
      *(_QWORD *)(v5 + 24) = v33; /*0x14085975b*/
      *(_QWORD *)(v5 + 32) = 107; /*0x14085975f*/
    }
    else
    {
      sub_140018740(v95); /*0x140859773*/
      sub_14084BAA0(v95, a2, v111, v114); /*0x140859791*/
      if ( *(_QWORD *)v95 != -1 ) /*0x1408597a2*/
      {
        v77 = *(_OWORD *)&v95[88]; /*0x1408597af*/
        v76 = *(_OWORD *)&v95[72]; /*0x1408597bd*/
        v75 = *(_OWORD *)&v95[56]; /*0x1408597e0*/
        v74 = *(_OWORD *)&v95[40]; /*0x1408597e7*/
        v73 = *(_OWORD *)&v95[24]; /*0x1408597ee*/
        v72 = *(_OWORD *)&v95[8]; /*0x1408597f5*/
        v85 = v96; /*0x140859803*/
        v86 = v97; /*0x140859811*/
        v87 = v98; /*0x14085981f*/
        v88 = v99; /*0x14085982d*/
        v89 = v100; /*0x14085983b*/
        v90 = v101; /*0x140859849*/
        v91 = v102; /*0x140859857*/
        v92 = v103; /*0x140859865*/
        v105 = *(_OWORD *)&v95[8]; /*0x140859888*/
        v106 = *(_OWORD *)&v95[24]; /*0x14085988f*/
        v107 = *(_OWORD *)&v95[40]; /*0x140859896*/
        v108 = *(_OWORD *)&v95[56]; /*0x14085989d*/
        v109 = *(_OWORD *)&v95[72]; /*0x1408598ab*/
        v110 = *(_OWORD *)&v95[88]; /*0x1408598b9*/
        v79 = *(_OWORD *)&v95[8]; /*0x1408598c0*/
        v80 = *(_OWORD *)&v95[24]; /*0x1408598c7*/
        v81 = *(_OWORD *)&v95[40]; /*0x1408598ce*/
        v82 = *(_OWORD *)&v95[56]; /*0x1408598d5*/
        v83 = *(_OWORD *)&v95[72]; /*0x1408598dc*/
        v84 = *(_OWORD *)&v95[88]; /*0x1408598e3*/
        v78 = *(_QWORD *)v95; /*0x1408598ea*/
        v36 = a2[1]; /*0x1408598f1*/
        LOBYTE(v35) = 1; /*0x1408598f9*/
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v36 + 16), 1, 0) ) /*0x1408598fd*/
          sub_1416C15B0((volatile void *)(v36 + 16)); /*0x140859e88*/
        if ( 2 * *v12 ) /*0x14085990d*/
        {
          v64 = sub_1416C2250(v35, v34); /*0x140859e93*/
          LOBYTE(v64) = v64 ^ 1; /*0x140859ea4*/
          v119 = v64; /*0x140859ea6*/
        }
        else
        {
          v119 = 0; /*0x140859919*/
        }
        v117 = v36 + 16; /*0x140859923*/
        v112 = v10; /*0x14085992a*/
        if ( *(_BYTE *)(v36 + 17) ) /*0x140859931*/
        {
          *(_QWORD *)v95 = v117; /*0x140859eb8*/
          v95[8] = v119; /*0x140859ec5*/
          sub_1416C3060( /*0x140859ef1*/
            (unsigned int)aRelayStatePois_0,
            20,
            (unsigned int)v95,
            (unsigned int)&off_141796230,
            (__int64)&off_141797E48);
        }
        v113 = v36; /*0x14085993e*/
        v37 = *(_QWORD *)(v36 + 64); /*0x140859945*/
        if ( v37 ) /*0x14085994c*/
        {
          v38 = *(_QWORD *)(v113 + 56); /*0x140859967*/
          v39 = 24 * v37; /*0x14085996f*/
          v40 = 0; /*0x140859973*/
          while ( *(_QWORD *)(v38 + v40 + 16) != *((_QWORD *)&v79 + 1) /*0x1408599a2*/
               || (unsigned int)sub_1416847B0(*(_QWORD *)(v38 + v40 + 8), v79, *((_QWORD *)&v79 + 1)) )
          {
            v40 += 24; /*0x140859980*/
            if ( v39 == v40 ) /*0x140859987*/
              goto LABEL_31; /*0x140859987*/
          }
          sub_1404D4A90(v95, v113 + 24); /*0x1408599b6*/
          v10 = v112; /*0x1408599bc*/
          v12 = off_141EC90B8; /*0x1408599c3*/
          sub_141684120(v5, v95, 296); /*0x1408599da*/
          sub_14000E270(v117, v119); /*0x1408599ed*/
        }
        else
        {
LABEL_31:
          v41 = v117; /*0x1408599f8*/
          sub_14000E270(v117, v119); /*0x140859a08*/
          v10 = v112; /*0x140859a0e*/
          sub_140B93B50(v95, v41); /*0x140859a1f*/
          v42 = sub_14083F5B0(v95, &off_141797E60); /*0x140859a33*/
          LOBYTE(v119) = v43 & 1; /*0x140859a3c*/
          v117 = v42; /*0x140859a42*/
          sub_140892360(&v72, v42 + 8); /*0x140859a57*/
          v122 = 1; /*0x140859a5d*/
          sub_14000E270(v117, (unsigned __int8)v119); /*0x140859a72*/
          sub_140388B60((unsigned int)v95, v114, 0, 1, 1); /*0x140859a98*/
          v44 = *(_QWORD *)&v95[8]; /*0x140859a9d*/
          if ( *(_DWORD *)v95 == 1 ) /*0x140859aab*/
          {
            v122 = 1; /*0x140859f00*/
            sub_1416C2D4B(*(_QWORD *)&v95[8], *(_QWORD *)&v95[16]); /*0x140859f0a*/
          }
          v45 = *(_QWORD *)&v95[16]; /*0x140859ab8*/
          v46 = v114; /*0x140859abf*/
          if ( v114 ) /*0x140859ad0*/
          {
            sub_141684120(*(_QWORD *)&v95[16], v111, v114); /*0x140859ad5*/
            v46 = v114; /*0x140859ada*/
          }
          *(_QWORD *)v95 = v44; /*0x140859ae1*/
          *(_QWORD *)&v95[8] = v45; /*0x140859ae8*/
          *(_QWORD *)&v95[16] = v46; /*0x140859aef*/
          v122 = 1; /*0x140859af6*/
          sub_140AC8F70((char *)&v73 + 8, v95); /*0x140859b07*/
          v12 = off_141EC90B8; /*0x140859b0d*/
          v122 = 1; /*0x140859b14*/
          sub_1404D4A90(&v65, &v72); /*0x140859b26*/
          v120 = 1; /*0x140859b2c*/
          sub_140846F90(v95, a2); /*0x140859b3d*/
          if ( *(_DWORD *)v95 == -1 ) /*0x140859b4a*/
          {
            sub_141684120(v95, &v72, 296); /*0x140859cca*/
            v120 = 0; /*0x140859ccf*/
            sub_1408582D0((__int64)&v105, a2, (__int64)v95); /*0x140859ce3*/
            if ( (_DWORD)v105 == -1 ) /*0x140859cf0*/
            {
              sub_141684120(v5, &v65, 296); /*0x140859dd6*/
              sub_140018960(&v78); /*0x140859de2*/
              sub_14000E270(v116, v121); /*0x140859df6*/
              sub_14000E270(Address, v118); /*0x140859e09*/
              return v5; /*0x140859e0e*/
            }
            *(_OWORD *)(v5 + 88) = v110; /*0x140859cfd*/
            *(_OWORD *)(v5 + 72) = v109; /*0x140859d08*/
            v53 = v105; /*0x140859d0c*/
            v54 = v106; /*0x140859d13*/
            v55 = v107; /*0x140859d1a*/
            *(_OWORD *)(v5 + 56) = v108; /*0x140859d28*/
            *(_OWORD *)(v5 + 40) = v55; /*0x140859d2c*/
            *(_OWORD *)(v5 + 24) = v54; /*0x140859d30*/
            *(_OWORD *)(v5 + 8) = v53; /*0x140859d34*/
            *(_QWORD *)v5 = -1; /*0x140859d38*/
            v122 = 0; /*0x140859d3f*/
            sub_140018740(&v65); /*0x140859d4a*/
          }
          else
          {
            *(_OWORD *)(v5 + 88) = *(_OWORD *)&v95[80]; /*0x140859b57*/
            *(_OWORD *)(v5 + 72) = *(_OWORD *)&v95[64]; /*0x140859b62*/
            v47 = *(_OWORD *)v95; /*0x140859b66*/
            v48 = *(_OWORD *)&v95[16]; /*0x140859b6d*/
            v49 = *(_OWORD *)&v95[32]; /*0x140859b74*/
            *(_OWORD *)(v5 + 56) = *(_OWORD *)&v95[48]; /*0x140859b82*/
            *(_OWORD *)(v5 + 40) = v49; /*0x140859b86*/
            *(_OWORD *)(v5 + 24) = v48; /*0x140859b8a*/
            *(_OWORD *)(v5 + 8) = v47; /*0x140859b8e*/
            *(_QWORD *)v5 = -1; /*0x140859b92*/
            v122 = 1; /*0x140859b99*/
            sub_140018740(&v65); /*0x140859ba4*/
            sub_140018740(&v72); /*0x140859bb1*/
          }
        }
        sub_140018960(&v78); /*0x140859d57*/
        goto LABEL_41; /*0x140859d57*/
      }
      v93[0] = v94; /*0x140859bc3*/
      v93[1] = sub_14041F680; /*0x140859bd1*/
      sub_14149C0F0(&v66, &unk_141795836, v93); /*0x140859bea*/
      v65 = 8; /*0x140859bf0*/
      v74 = v68; /*0x140859c08*/
      v75 = v69; /*0x140859c0f*/
      v76 = v70; /*0x140859c16*/
      v106 = v67; /*0x140859c29*/
      v107 = v68; /*0x140859c30*/
      v108 = v69; /*0x140859c37*/
      v109 = v70; /*0x140859c3e*/
      v110 = v71; /*0x140859c45*/
      v105 = __PAIR128__(v66, 8); /*0x140859c4c*/
      *(_OWORD *)(v5 + 88) = v71; /*0x140859c61*/
      *(_OWORD *)(v5 + 72) = v109; /*0x140859c6c*/
      v27 = *((_QWORD *)&v105 + 1); /*0x140859c77*/
      v50 = v105; /*0x140859c77*/
      v51 = v106; /*0x140859c7e*/
      v52 = v107; /*0x140859c85*/
      *(_OWORD *)(v5 + 56) = v108; /*0x140859c93*/
      *(_OWORD *)(v5 + 40) = v52; /*0x140859c97*/
      *(_OWORD *)(v5 + 24) = v51; /*0x140859c9b*/
      *(_OWORD *)(v5 + 8) = __PAIR128__(v27, v50); /*0x140859c9f*/
    }
    *(_QWORD *)v5 = -1; /*0x140859ca7*/
LABEL_41:
    v56 = (char *)v116; /*0x140859d5c*/
    if ( (v121 & 1) == 0 && 2 * *v12 && !(unsigned __int8)sub_1416C2250(v27, v28) ) /*0x140859e6e*/
      v56[1] = 1; /*0x140859e7c*/
    v57 = *v56; /*0x140859d80*/
    *v56 = 0; /*0x140859d80*/
    if ( v57 == 2 ) /*0x140859d84*/
      WakeByAddressSingle(v56); /*0x140859e63*/
    goto LABEL_45; /*0x140859e63*/
  }
  *(_OWORD *)(v5 + 88) = *(_OWORD *)&v95[80]; /*0x140859664*/
  v29 = *(_OWORD *)&v95[17]; /*0x140859668*/
  v30 = *(_OWORD *)&v95[33]; /*0x14085966f*/
  v31 = *(_OWORD *)&v95[49]; /*0x140859676*/
  *(_OWORD *)(v5 + 73) = *(_OWORD *)&v95[65]; /*0x140859684*/
  *(_OWORD *)(v5 + 57) = v31; /*0x140859688*/
  *(_OWORD *)(v5 + 41) = v30; /*0x14085968c*/
  *(_OWORD *)(v5 + 25) = v29; /*0x140859690*/
  *(_QWORD *)(v5 + 8) = v26; /*0x140859694*/
  *(_QWORD *)(v5 + 16) = v27; /*0x140859698*/
  *(_BYTE *)(v5 + 24) = v28; /*0x14085969c*/
  *(_QWORD *)v5 = -1; /*0x14085969f*/
LABEL_45:
  if ( !(_BYTE)v118 && 2 * *v12 && !(unsigned __int8)sub_1416C2250(v27, v28) ) /*0x140859e49*/
    *(_BYTE *)(v10 + 17) = 1; /*0x140859e56*/
  v58 = Address; /*0x140859da5*/
  v59 = *(_BYTE *)Address; /*0x140859dac*/
  *(_BYTE *)Address = 0; /*0x140859dac*/
  if ( v59 == 2 ) /*0x140859db0*/
    WakeByAddressSingle(v58); /*0x140859e23*/
  return v5; /*0x140859db5*/
}

// --- refs ---
// 0x14149c500  sub_14149C500
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d4b  sub_1416C2D4B
// 0x1416c1670  WakeByAddressSingle
// 0x1403b7e80  lock
// 0x141797e28  aActivatingARel  // string: "activating a relay provider"
// 0x14085a1e0  sub_14085A1E0
// 0x140018740  sub_140018740
// 0x141798c00  xmmword_141798C00
// 0x141798bf0  xmmword_141798BF0
// 0x141798be0  xmmword_141798BE0
// 0x141798bd0  xmmword_141798BD0
// 0x141798bc0  xmmword_141798BC0
// 0x141798bb0  xmmword_141798BB0
// 0x14084baa0  sub_14084BAA0
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x141797e48  off_141797E48
// 0x1416847b0  sub_1416847B0
// 0x1404d4a90  sub_1404D4A90
// 0x141684120  sub_141684120
// 0x14000e270  sub_14000E270
// 0x140b93b50  sub_140B93B50
// 0x14083f5b0  sub_14083F5B0
// 0x141797e60  off_141797E60
// 0x140892360  sub_140892360
// 0x140388b60  sub_140388B60
// 0x140ac8f70  sub_140AC8F70
// 0x140846f90  sub_140846F90
// 0x1408582d0  sub_1408582D0
// 0x140018960  sub_140018960
// 0x14041f680  sub_14041F680
// 0x14149c0f0  sub_14149C0F0
// 0x141795836  unk_141795836
