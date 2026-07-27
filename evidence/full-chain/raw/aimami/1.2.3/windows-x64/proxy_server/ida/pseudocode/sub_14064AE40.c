// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x14064ae40  size: 0xf4f  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   References 'unknown ide path' and 'proxy.upstream'; identical size (0xf4f) to sibling sub_14064C7E0
//   -- one of a monomorphized handler pair for the /:ide/v1/... route family (likely chat/completions vs
//   responses variants sharing a generic implementation).
//
// Referenced strings/symbols:
//   0x141684120  sub_141684120
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x1416c2d31  sub_1416C2D31
//   0x1417b6298  off_1417B6298
//   0x1416c3400  sub_1416C3400
//   0x141769280  off_141769280
//   0x1416c3420  sub_1416C3420
//   0x140001660  sub_140001660
//   0x1417545c8  off_1417545C8
//   0x140fa37c0  sub_140FA37C0
//   0x1405e7870  sub_1405E7870
//   0x1405e15c0  sub_1405E15C0
//   0x1417908d0  off_1417908D0
//   0x14177ce48  off_14177CE48
//   0x140fa3720  sub_140FA3720
//   0x140017140  sub_140017140
//   0x140631ce0  __u7b__u7b_closure_u7d__u7d__8
//   0x1405dd0e0  sub_1405DD0E0
//   0x1400104f0  sub_1400104F0
//   0x14066b160  sub_14066B160
//   0x141767ee6  aUnknownIdePath   "unknown ide path"
//   0x14177c428  aProxyUpstream   "proxy.upstream"
//   0x1405dc200  sub_1405DC200
//   0x141767fd0  off_141767FD0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14064AE40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(); // rax
  _BYTE *v12; // r13
  _OWORD *v13; // r12
  __int64 v14; // rbx
  __int64 (__fastcall **v15)(); // rax
  __int64 v16; // rdx
  __int64 (__fastcall **v17)(); // rax
  _BYTE *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // rax
  __int64 v24; // rbx
  char v25; // al
  _BYTE *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 (__fastcall **v31)(); // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm3
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int8 v40; // bl
  __int64 v41; // rdx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int128 v49; // xmm3
  __int128 v50; // xmm0
  __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rax
  __int128 v58; // xmm1
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rdi
  __int128 v63; // xmm6
  __int64 v64; // rax
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  _BYTE v69[1920]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v70[112]; // [rsp+7B0h] [rbp+730h] BYREF
  _BYTE v71[40]; // [rsp+820h] [rbp+7A0h]
  __int128 v72; // [rsp+848h] [rbp+7C8h]
  __int128 v73; // [rsp+858h] [rbp+7D8h]
  __int128 v74; // [rsp+868h] [rbp+7E8h]
  __int128 v75; // [rsp+890h] [rbp+810h]
  __int64 v76; // [rsp+8A0h] [rbp+820h]
  char v77; // [rsp+9A8h] [rbp+928h]
  _OWORD v78[8]; // [rsp+F30h] [rbp+EB0h] BYREF
  _OWORD v79[2]; // [rsp+FB0h] [rbp+F30h] BYREF
  __int128 v80; // [rsp+FD0h] [rbp+F50h]
  __int128 v81; // [rsp+FE0h] [rbp+F60h]
  __int128 v82; // [rsp+FF0h] [rbp+F70h]
  __int128 v83; // [rsp+1000h] [rbp+F80h]
  __int128 v84; // [rsp+1010h] [rbp+F90h]
  __int128 v85; // [rsp+1020h] [rbp+FA0h]
  __int128 v86; // [rsp+1030h] [rbp+FB0h]
  __int128 v87; // [rsp+1040h] [rbp+FC0h]
  __int128 v88; // [rsp+1050h] [rbp+FD0h]
  __int128 v89; // [rsp+1060h] [rbp+FE0h]
  __int128 v90; // [rsp+1070h] [rbp+FF0h]
  __int128 v91; // [rsp+1080h] [rbp+1000h]
  __int128 v92; // [rsp+1090h] [rbp+1010h]
  __int128 v93; // [rsp+10A0h] [rbp+1020h]
  __int128 v94; // [rsp+10B0h] [rbp+1030h]
  __int128 v95; // [rsp+10C0h] [rbp+1040h]
  __int128 v96; // [rsp+10D0h] [rbp+1050h]
  __int64 v97; // [rsp+10E0h] [rbp+1060h]
  __int128 v98; // [rsp+10F0h] [rbp+1070h]
  __int128 v99; // [rsp+1100h] [rbp+1080h]
  __int128 v100; // [rsp+1110h] [rbp+1090h]
  __int128 v101; // [rsp+1120h] [rbp+10A0h]
  __int128 v102; // [rsp+1130h] [rbp+10B0h]
  __int128 v103; // [rsp+1140h] [rbp+10C0h]
  __int64 v104; // [rsp+1150h] [rbp+10D0h]
  _BYTE v105[112]; // [rsp+1160h] [rbp+10E0h] BYREF
  __int128 v106; // [rsp+11D0h] [rbp+1150h]
  __m256i v107; // [rsp+11E0h] [rbp+1160h]
  _BYTE v108[31]; // [rsp+1200h] [rbp+1180h]
  __int64 v109; // [rsp+1228h] [rbp+11A8h]
  __int128 v110; // [rsp+1230h] [rbp+11B0h]
  __int64 v111; // [rsp+1240h] [rbp+11C0h]
  __int64 v112; // [rsp+1248h] [rbp+11C8h]
  _OWORD *v113; // [rsp+1250h] [rbp+11D0h]
  _BYTE *v114; // [rsp+1258h] [rbp+11D8h]
  _OWORD *v115; // [rsp+1260h] [rbp+11E0h]
  _BYTE *v116; // [rsp+1268h] [rbp+11E8h]
  _OWORD *v117; // [rsp+1270h] [rbp+11F0h]
  _BYTE *v118; // [rsp+1278h] [rbp+11F8h]
  _OWORD *v119; // [rsp+1280h] [rbp+1200h]
  _BYTE *v120; // [rsp+1288h] [rbp+1208h]
  _OWORD *v121; // [rsp+1290h] [rbp+1210h]
  _BYTE *v122; // [rsp+1298h] [rbp+1218h]
  __int64 v123; // [rsp+12A0h] [rbp+1220h]
  __int64 v124; // [rsp+12A8h] [rbp+1228h]

  v124 = -2; /*0x14064ae68*/
  v5 = a2; /*0x14064ae76*/
  v7 = *(unsigned __int8 *)(a2 + 608); /*0x14064ae7c*/
  v123 = a2; /*0x14064ae91*/
  switch ( v7 ) /*0x14064ae98*/
  {
    case 0LL: /*0x14064ae98*/
      *(_WORD *)(a2 + 611) = 0; /*0x14064ae9a*/
      *(_BYTE *)(a2 + 613) = 0; /*0x14064aea4*/
      *(_WORD *)(a2 + 614) = 1; /*0x14064aeac*/
      *(_BYTE *)(a2 + 610) = 1; /*0x14064aeb6*/
      sub_141684120(a2 + 288, a2, 224); /*0x14064aece*/
      *(_BYTE *)(v5 + 609) = 1; /*0x14064aed3*/
      *(_OWORD *)(v5 + 512) = *(_OWORD *)(v5 + 224); /*0x14064aee3*/
      *(_QWORD *)(v5 + 528) = v5 + 240; /*0x14064aef2*/
      nullsub_1(v8); /*0x14064aef9*/
      v9 = sub_140001650(16, 8); /*0x14064af08*/
      if ( !v9 ) /*0x14064af10*/
        sub_1416C2D31(8, 16); /*0x14064bd09*/
      v10 = v9; /*0x14064af16*/
      *(_QWORD *)v9 = v5 + 240; /*0x14064af19*/
      *(_BYTE *)(v9 + 8) = 0; /*0x14064af1c*/
      *(_QWORD *)(v5 + 616) = v9; /*0x14064af20*/
      v11 = &off_1417B6298; /*0x14064af27*/
      *(_QWORD *)(v5 + 624) = &off_1417B6298; /*0x14064af2e*/
      goto LABEL_9; /*0x14064af35*/
    case 1LL: /*0x14064ae98*/
      sub_1416C3400(&off_141769280, a2, a3, a4); /*0x14064bd5c*/
    case 2LL: /*0x14064ae98*/
      sub_1416C3420(&off_141769280, a2, a3, a4); /*0x14064bd4e*/
    case 3LL: /*0x14064ae98*/
      v10 = *(_QWORD *)(a2 + 616); /*0x14064af96*/
      v11 = *(__int64 (__fastcall ***)())(v5 + 624); /*0x14064af9d*/
LABEL_9:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v11[3])(v70, v10, a3); /*0x14064afa4*/
      if ( !*(_QWORD *)v70 ) /*0x14064afba*/
      {
        *(_QWORD *)a1 = -1; /*0x14064b75d*/
        v25 = 3; /*0x14064b764*/
        goto LABEL_73; /*0x14064b766*/
      }
      v90 = *(_OWORD *)&v70[32]; /*0x14064afd5*/
      v89 = *(_OWORD *)&v70[16]; /*0x14064afdc*/
      v88 = *(_OWORD *)v70; /*0x14064afe3*/
      v122 = *(_BYTE **)(v123 + 616); /*0x14064aff8*/
      v121 = *(_OWORD **)(v123 + 624); /*0x14064b006*/
      if ( *(_QWORD *)v121 ) /*0x14064b00d*/
        (*(void (__fastcall **)(_BYTE *))v121)(v122); /*0x14064b01c*/
      v18 = v122; /*0x14064b01f*/
      v19 = *((_QWORD *)v121 + 1); /*0x14064b02d*/
      if ( v19 ) /*0x14064b034*/
        sub_140001660(v122, v19, *((_QWORD *)v121 + 2)); /*0x14064b03a*/
      v20 = v123; /*0x14064b03f*/
      *(_BYTE *)(v123 + 613) = 1; /*0x14064b046*/
      v21 = v89; /*0x14064b054*/
      v22 = v90; /*0x14064b05b*/
      *(_OWORD *)(v20 + 536) = v88; /*0x14064b062*/
      *(_OWORD *)(v20 + 552) = v21; /*0x14064b069*/
      *(_OWORD *)(v20 + 568) = v22; /*0x14064b070*/
      nullsub_1(v18); /*0x14064b077*/
      v23 = sub_140001650(16, 8); /*0x14064b086*/
      if ( !v23 ) /*0x14064b08e*/
        sub_1416C2D31(8, 16); /*0x14064bd1b*/
      v16 = v23; /*0x14064b094*/
      *(_QWORD *)v23 = v20 + 288; /*0x14064b09e*/
      *(_BYTE *)(v23 + 8) = 0; /*0x14064b0a1*/
      *(_QWORD *)(v20 + 616) = v23; /*0x14064b0a5*/
      v17 = &off_1417545C8; /*0x14064b0ac*/
      *(_QWORD *)(v20 + 624) = &off_1417545C8; /*0x14064b0b3*/
LABEL_16:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v17[3])(v70, v16, a3); /*0x14064b0ba*/
      v24 = *(_QWORD *)v70; /*0x14064b0c8*/
      if ( *(_QWORD *)v70 == -3 ) /*0x14064b0d3*/
      {
        *(_QWORD *)a1 = -1; /*0x14064b0d5*/
        v25 = 4; /*0x14064b0dc*/
        goto LABEL_73; /*0x14064b0de*/
      }
      v111 = *(_QWORD *)&v70[24]; /*0x14064b0ea*/
      v110 = *(_OWORD *)&v70[8]; /*0x14064b0f8*/
      v86 = *(_OWORD *)&v70[32]; /*0x14064b106*/
      v87 = *(_OWORD *)&v70[48]; /*0x14064b114*/
      v122 = *(_BYTE **)(v123 + 616); /*0x14064b129*/
      v121 = *(_OWORD **)(v123 + 624); /*0x14064b137*/
      if ( *(_QWORD *)v121 ) /*0x14064b13e*/
        (*(void (__fastcall **)(_BYTE *))v121)(v122); /*0x14064b14d*/
      v26 = v122; /*0x14064b150*/
      v27 = *((_QWORD *)v121 + 1); /*0x14064b15e*/
      if ( v27 ) /*0x14064b165*/
        sub_140001660(v122, v27, *((_QWORD *)v121 + 2)); /*0x14064b16b*/
      if ( v24 != -2 ) /*0x14064b174*/
      {
        *(_QWORD *)v70 = v24; /*0x14064b779*/
        *(_OWORD *)&v70[8] = v110; /*0x14064b787*/
        *(_QWORD *)&v70[24] = v111; /*0x14064b795*/
        *(_OWORD *)&v70[32] = v86; /*0x14064b7aa*/
        *(_OWORD *)&v70[48] = v87; /*0x14064b7b1*/
        sub_140FA37C0(v105, v70); /*0x14064b7c6*/
        v52 = v123; /*0x14064b7cc*/
LABEL_51:
        *(_BYTE *)(v52 + 612) = 0; /*0x14064b84c*/
        sub_1405E7870(v52 + 536); /*0x14064b85a*/
        v55 = v123; /*0x14064b860*/
        *(_BYTE *)(v123 + 613) = 0; /*0x14064b867*/
        if ( *(_BYTE *)(v55 + 609) ) /*0x14064b86e*/
        {
          v122 = *(_BYTE **)(v55 + 512); /*0x14064b87e*/
          v121 = *(_OWORD **)(v55 + 520); /*0x14064b88c*/
          if ( *(_QWORD *)v121 ) /*0x14064b893*/
            (*(void (__fastcall **)(_BYTE *))v121)(v122); /*0x14064b8a2*/
          v56 = *((_QWORD *)v121 + 1); /*0x14064b8b3*/
          v55 = v123; /*0x14064b8ba*/
          if ( v56 ) /*0x14064b8c1*/
            sub_140001660(v122, v56, *((_QWORD *)v121 + 2)); /*0x14064b8c7*/
        }
        *(_BYTE *)(v55 + 609) = 0; /*0x14064b8cc*/
        if ( *(_BYTE *)(v55 + 610) ) /*0x14064b8d3*/
          sub_1405E15C0(v123 + 288); /*0x14064b8ea*/
        v57 = v123; /*0x14064b8f0*/
        *(_BYTE *)(v123 + 610) = 0; /*0x14064b8f7*/
        sub_1405E7870(v57 + 240); /*0x14064b905*/
        goto LABEL_71; /*0x14064b90b*/
      }
      v28 = v123; /*0x14064b17a*/
      *(_BYTE *)(v123 + 612) = 1; /*0x14064b181*/
      *(_OWORD *)(v28 + 584) = v110; /*0x14064b18f*/
      *(_QWORD *)(v28 + 600) = v111; /*0x14064b19d*/
      nullsub_1(v26); /*0x14064b1a4*/
      v29 = sub_140001650(16, 8); /*0x14064b1b3*/
      if ( !v29 ) /*0x14064b1bb*/
        sub_1416C2D31(8, 16); /*0x14064bd3f*/
      v30 = v29; /*0x14064b1c1*/
      *(_QWORD *)v29 = v28 + 288; /*0x14064b1cb*/
      *(_BYTE *)(v29 + 8) = 0; /*0x14064b1ce*/
      *(_QWORD *)(v28 + 616) = v29; /*0x14064b1d2*/
      v31 = &off_1417908D0; /*0x14064b1d9*/
      *(_QWORD *)(v28 + 624) = &off_1417908D0; /*0x14064b1e0*/
LABEL_26:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v31[3])(v70, v30, a3); /*0x14064b1f7*/
      if ( *(_DWORD *)v70 == -1 ) /*0x14064b20c*/
      {
        *(_QWORD *)a1 = -1; /*0x14064b76b*/
        v25 = 5; /*0x14064b772*/
        goto LABEL_73; /*0x14064b774*/
      }
      v85 = *(_OWORD *)&v70[80]; /*0x14064b219*/
      v84 = *(_OWORD *)&v70[64]; /*0x14064b227*/
      v83 = *(_OWORD *)&v70[48]; /*0x14064b24a*/
      v82 = *(_OWORD *)&v70[32]; /*0x14064b251*/
      v81 = *(_OWORD *)&v70[16]; /*0x14064b258*/
      v80 = *(_OWORD *)v70; /*0x14064b25f*/
      v122 = *(_BYTE **)(v123 + 616); /*0x14064b274*/
      v121 = *(_OWORD **)(v123 + 624); /*0x14064b282*/
      if ( *(_QWORD *)v121 ) /*0x14064b289*/
        (*(void (__fastcall **)(_BYTE *))v121)(v122); /*0x14064b298*/
      v32 = *((_QWORD *)v121 + 1); /*0x14064b2a9*/
      if ( v32 ) /*0x14064b2b0*/
        sub_140001660(v122, v32, *((_QWORD *)v121 + 2)); /*0x14064b2b6*/
      v33 = v123; /*0x14064b2bb*/
      *(_BYTE *)(v123 + 611) = 1; /*0x14064b2c2*/
      v34 = v81; /*0x14064b2d1*/
      v35 = v82; /*0x14064b2d8*/
      v36 = v83; /*0x14064b2df*/
      *(_OWORD *)(v33 + 632) = v80; /*0x14064b2e6*/
      *(_OWORD *)(v33 + 648) = v34; /*0x14064b2ee*/
      *(_OWORD *)(v33 + 664) = v35; /*0x14064b2f6*/
      *(_OWORD *)(v33 + 680) = v36; /*0x14064b2fe*/
      *(_OWORD *)(v33 + 696) = v84; /*0x14064b30d*/
      *(_OWORD *)(v33 + 712) = v85; /*0x14064b31c*/
      *(_BYTE *)(v33 + 610) = 0; /*0x14064b324*/
      sub_141684120(v70, v33 + 288, 224); /*0x14064b340*/
      *(_BYTE *)(v33 + 609) = 0; /*0x14064b345*/
      v37 = *(_QWORD *)(v33 + 528); /*0x14064b34d*/
      v75 = *(_OWORD *)(v33 + 512); /*0x14064b35c*/
      v76 = v37; /*0x14064b363*/
      v77 = 0; /*0x14064b36a*/
      nullsub_1(v38); /*0x14064b371*/
      v39 = sub_140001650(512, 8); /*0x14064b380*/
      if ( !v39 ) /*0x14064b388*/
        sub_1416C2D31(8, 512); /*0x14064bd2d*/
      v14 = v39; /*0x14064b38e*/
      sub_141684120(v39, v70, 512); /*0x14064b3a1*/
      *(_QWORD *)(v33 + 616) = v14; /*0x14064b3a6*/
      v15 = &off_14177CE48; /*0x14064b3ad*/
      *(_QWORD *)(v33 + 624) = &off_14177CE48; /*0x14064b3b4*/
LABEL_33:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v15[3])(v70, v14, a3); /*0x14064b3bb*/
      v40 = v70[0]; /*0x14064b3cc*/
      if ( v70[0] == 0xFE ) /*0x14064b3d6*/
      {
        *(_QWORD *)a1 = -1; /*0x14064b3d8*/
        v25 = 6; /*0x14064b3df*/
        goto LABEL_73; /*0x14064b3e1*/
      }
      *(_OWORD *)&v108[15] = *(_OWORD *)&v70[16]; /*0x14064b3f4*/
      *(_OWORD *)v108 = *(_OWORD *)&v70[1]; /*0x14064b3fb*/
      v122 = *(_BYTE **)(v123 + 616); /*0x14064b410*/
      v121 = *(_OWORD **)(v123 + 624); /*0x14064b41e*/
      if ( *(_QWORD *)v121 ) /*0x14064b425*/
        (*(void (__fastcall **)(_BYTE *))v121)(v122); /*0x14064b434*/
      v41 = *((_QWORD *)v121 + 1); /*0x14064b445*/
      if ( v41 ) /*0x14064b44c*/
        sub_140001660(v122, v41, *((_QWORD *)v121 + 2)); /*0x14064b452*/
      v5 = v123; /*0x14064b45a*/
      if ( v40 == -1 ) /*0x14064b461*/
      {
        *(_QWORD *)&v70[16] = *(_QWORD *)&v108[23]; /*0x14064b7dc*/
        *(_OWORD *)v70 = *(_OWORD *)&v108[7]; /*0x14064b7ea*/
        sub_140FA3720(v105, v70); /*0x14064b7ff*/
        v53 = v123; /*0x14064b805*/
        *(_BYTE *)(v123 + 615) = 0; /*0x14064b80c*/
        sub_140017140(v53 + 632); /*0x14064b81a*/
        v52 = v123; /*0x14064b820*/
        *(_BYTE *)(v123 + 611) = 0; /*0x14064b827*/
        v54 = *(_QWORD *)(v52 + 584); /*0x14064b82e*/
        if ( v54 ) /*0x14064b838*/
          sub_140001660(*(_QWORD *)(v52 + 592), v54, 1); /*0x14064b847*/
        goto LABEL_51; /*0x14064b847*/
      }
      v13 = (_OWORD *)(v123 + 616); /*0x14064b467*/
      *(_OWORD *)&v107.m256i_u64[2] = *(_OWORD *)&v108[15]; /*0x14064b475*/
      *(_OWORD *)&v107.m256i_i8[1] = *(_OWORD *)v108; /*0x14064b483*/
      v107.m256i_i8[0] = v40; /*0x14064b48a*/
      *(_BYTE *)(v123 + 615) = 0; /*0x14064b490*/
      *(_DWORD *)(v5 + 611) = 0; /*0x14064b498*/
      v42 = *(_OWORD *)(v5 + 536); /*0x14064b4a3*/
      v43 = *(_OWORD *)(v5 + 552); /*0x14064b4ab*/
      v74 = *(_OWORD *)(v5 + 568); /*0x14064b4bb*/
      v73 = v43; /*0x14064b4c2*/
      v72 = v42; /*0x14064b4c9*/
      *(_QWORD *)v71 = *(_QWORD *)(v5 + 600); /*0x14064b4d7*/
      *(_OWORD *)&v70[96] = *(_OWORD *)(v5 + 584); /*0x14064b4e6*/
      v44 = *(_OWORD *)(v5 + 648); /*0x14064b4f5*/
      v45 = *(_OWORD *)(v5 + 664); /*0x14064b4fd*/
      v46 = *(_OWORD *)(v5 + 680); /*0x14064b505*/
      *(_OWORD *)v70 = *(_OWORD *)(v5 + 632); /*0x14064b50d*/
      *(_OWORD *)&v70[16] = v44; /*0x14064b514*/
      *(_OWORD *)&v70[32] = v45; /*0x14064b51b*/
      *(_OWORD *)&v70[48] = v46; /*0x14064b522*/
      *(_OWORD *)&v70[64] = *(_OWORD *)(v5 + 696); /*0x14064b531*/
      *(_OWORD *)&v70[80] = *(_OWORD *)(v5 + 712); /*0x14064b540*/
      *(__m256i *)&v71[8] = v107; /*0x14064b555*/
      sub_141684120(v69, v70, 1920); /*0x14064b577*/
      sub_141684120(v5 + 616, v69, 1920); /*0x14064b588*/
      v12 = (_BYTE *)(v5 + 2536); /*0x14064b58d*/
      *(_BYTE *)(v5 + 2536) = 0; /*0x14064b594*/
LABEL_41:
      *(_OWORD *)(v5 + 848) = *(_OWORD *)(v5 + 800); /*0x14064b59c*/
      *(_OWORD *)(v5 + 832) = *(_OWORD *)(v5 + 784); /*0x14064b5bb*/
      *(_OWORD *)(v5 + 816) = *(_OWORD *)(v5 + 768); /*0x14064b5cb*/
      *(_OWORD *)(v5 + 864) = *(_OWORD *)(v5 + 712); /*0x14064b5db*/
      *(_QWORD *)(v5 + 880) = *(_QWORD *)(v5 + 728); /*0x14064b5ea*/
      v47 = v13[1]; /*0x14064b5fd*/
      v48 = v13[2]; /*0x14064b603*/
      v49 = v13[3]; /*0x14064b609*/
      *(_OWORD *)(v5 + 888) = *v13; /*0x14064b60f*/
      *(_OWORD *)(v5 + 904) = v47; /*0x14064b617*/
      *(_OWORD *)(v5 + 920) = v48; /*0x14064b61f*/
      *(_OWORD *)(v5 + 936) = v49; /*0x14064b627*/
      *(_OWORD *)(v5 + 952) = v13[4]; /*0x14064b635*/
      *(_OWORD *)(v5 + 968) = v13[5]; /*0x14064b643*/
      v50 = *(_OWORD *)(v5 + 736); /*0x14064b64b*/
      v79[1] = *(_OWORD *)(v5 + 752); /*0x14064b65b*/
      v79[0] = v50; /*0x14064b662*/
      *(_BYTE *)(v5 + 2537) = 1; /*0x14064b669*/
      if ( *(_QWORD *)(v5 + 880) == 5 /*0x14064b692*/
        && !(**(_DWORD **)(v5 + 872) ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)(v5 + 872) + 4LL) ^ 0x78) )
      {
        v122 = v12; /*0x14064b910*/
        v121 = v13; /*0x14064b917*/
        *(_BYTE *)(v5 + 2537) = 0; /*0x14064b925*/
        *(_QWORD *)(v5 + 984) = 2; /*0x14064b92d*/
        v58 = *(_OWORD *)(v5 + 752); /*0x14064b93b*/
        *(_OWORD *)(v5 + 992) = *(_OWORD *)(v5 + 736); /*0x14064b93f*/
        *(_OWORD *)(v5 + 1008) = v58; /*0x14064b947*/
        *(_QWORD *)(v5 + 1024) = v5 + 816; /*0x14064b94f*/
        *(_QWORD *)(v5 + 1032) = v5 + 888; /*0x14064b956*/
        *(_BYTE *)(v5 + 2528) = 0; /*0x14064b95d*/
LABEL_60:
        v109 = v5 + 984; /*0x14064b965*/
        _u7b__u7b_closure_u7d__u7d__8(v78, (__int128 *)(v5 + 984), a3, a4); /*0x14064b97d*/
        if ( LODWORD(v78[0]) == -1 ) /*0x14064b98a*/
        {
          *v122 = 3; /*0x14064ba50*/
          goto LABEL_72; /*0x14064ba53*/
        }
        *(_OWORD *)v71 = v78[7]; /*0x14064b997*/
        *(_OWORD *)&v70[96] = v78[6]; /*0x14064b9a5*/
        *(_OWORD *)&v70[80] = v78[5]; /*0x14064b9b3*/
        *(_OWORD *)&v70[64] = v78[4]; /*0x14064b9c1*/
        *(_OWORD *)&v70[48] = v78[3]; /*0x14064b9e4*/
        *(_OWORD *)&v70[32] = v78[2]; /*0x14064b9eb*/
        *(_OWORD *)&v70[16] = v78[1]; /*0x14064b9f2*/
        *(_OWORD *)v70 = v78[0]; /*0x14064b9f9*/
        v12 = v122; /*0x14064ba11*/
        if ( *(_BYTE *)(v123 + 2528) == 3 ) /*0x14064ba18*/
        {
          sub_1405DD0E0(v123 + 1064); /*0x14064ba5f*/
          *(_BYTE *)(v123 + 2529) = 0; /*0x14064ba6c*/
          v13 = v121; /*0x14064ba73*/
          v12 = v122; /*0x14064ba7a*/
        }
        else
        {
          v13 = v121; /*0x14064ba1c*/
          if ( !*(_BYTE *)(v123 + 2528) ) /*0x14064ba07*/
          {
            v120 = v122; /*0x14064ba33*/
            v119 = v121; /*0x14064ba3a*/
            sub_1400104F0(v123 + 992); /*0x14064ba41*/
          }
        }
        v59 = v123; /*0x14064ba81*/
        *(_BYTE *)(v123 + 2537) = 0; /*0x14064ba88*/
        v116 = v12; /*0x14064ba96*/
        v115 = v13; /*0x14064ba9d*/
        sub_140017140(v59 + 888); /*0x14064baa4*/
        v60 = v123; /*0x14064baaa*/
        v61 = *(_QWORD *)(v123 + 864); /*0x14064bab1*/
        if ( v61 ) /*0x14064babb*/
          sub_140001660(*(_QWORD *)(v123 + 872), v61, 1); /*0x14064baca*/
        v114 = v12; /*0x14064bad6*/
        v113 = v13; /*0x14064badd*/
        sub_1405E7870(v60 + 816); /*0x14064bae4*/
      }
      else
      {
        v120 = v12; /*0x14064b698*/
        v119 = v13; /*0x14064b69f*/
        LOWORD(a2) = 404; /*0x14064b6cf*/
        sub_14066B160((unsigned int)v70, a2, (unsigned int)aUnknownIdePath, 16, (__int64)aProxyUpstream, 14); /*0x14064b6d3*/
        v118 = v12; /*0x14064b6d9*/
        v117 = v13; /*0x14064b6e0*/
        sub_1400104F0(v79); /*0x14064b6ee*/
        *(_BYTE *)(v123 + 2537) = 0; /*0x14064b6fb*/
        v116 = v12; /*0x14064b702*/
        v115 = v13; /*0x14064b709*/
        sub_140017140(v5 + 888); /*0x14064b713*/
        v51 = *(_QWORD *)(v123 + 864); /*0x14064b727*/
        if ( v51 ) /*0x14064b72d*/
          sub_140001660(*(_QWORD *)(v123 + 872), v51, 1); /*0x14064b73c*/
        v114 = v12; /*0x14064b741*/
        v113 = v13; /*0x14064b748*/
        sub_1405E7870(v5 + 816); /*0x14064b752*/
      }
      v62 = *(_QWORD *)v70; /*0x14064baea*/
      v98 = *(_OWORD *)&v70[8]; /*0x14064baf8*/
      v99 = *(_OWORD *)&v70[24]; /*0x14064bb06*/
      v100 = *(_OWORD *)&v70[40]; /*0x14064bb14*/
      v101 = *(_OWORD *)&v70[56]; /*0x14064bb22*/
      v102 = *(_OWORD *)&v70[72]; /*0x14064bb30*/
      v103 = *(_OWORD *)&v70[88]; /*0x14064bb3e*/
      v104 = *(_QWORD *)&v70[104]; /*0x14064bb4c*/
      v63 = *(_OWORD *)v71; /*0x14064bb53*/
      *v12 = 1; /*0x14064bb5a*/
      if ( v62 != -1 ) /*0x14064bb63*/
      {
        v97 = v104; /*0x14064bb70*/
        v96 = v103; /*0x14064bb7e*/
        v95 = v102; /*0x14064bb8c*/
        v94 = v101; /*0x14064bbaf*/
        v93 = v100; /*0x14064bbb6*/
        v92 = v99; /*0x14064bbbd*/
        v91 = v98; /*0x14064bbc4*/
        sub_1405DC200(v13); /*0x14064bbce*/
        *(_QWORD *)v105 = v62; /*0x14064bbd4*/
        *(_OWORD *)&v105[8] = v91; /*0x14064bbf7*/
        *(_OWORD *)&v105[24] = v92; /*0x14064bbfe*/
        *(_OWORD *)&v105[40] = v93; /*0x14064bc05*/
        *(_OWORD *)&v105[56] = v94; /*0x14064bc0c*/
        *(_OWORD *)&v105[72] = v95; /*0x14064bc1a*/
        *(_OWORD *)&v105[88] = v96; /*0x14064bc28*/
        *(_QWORD *)&v105[104] = v97; /*0x14064bc36*/
        v106 = v63; /*0x14064bc3d*/
        v64 = v123; /*0x14064bc44*/
        *(_BYTE *)(v123 + 615) = 0; /*0x14064bc4b*/
        *(_BYTE *)(v64 + 613) = 0; /*0x14064bc59*/
        *(_DWORD *)(v64 + 609) = 0; /*0x14064bc60*/
        sub_1405E7870(v64 + 240); /*0x14064bc6a*/
LABEL_71:
        *(_OWORD *)(a1 + 112) = v106; /*0x14064bc70*/
        *(_OWORD *)(a1 + 96) = *(_OWORD *)&v105[96]; /*0x14064bc82*/
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v105[80]; /*0x14064bc8d*/
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v105[64]; /*0x14064bc98*/
        v65 = *(_OWORD *)v105; /*0x14064bc9c*/
        v66 = *(_OWORD *)&v105[16]; /*0x14064bca3*/
        v67 = *(_OWORD *)&v105[32]; /*0x14064bcaa*/
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v105[48]; /*0x14064bcb8*/
        *(_OWORD *)(a1 + 32) = v67; /*0x14064bcbc*/
        *(_OWORD *)(a1 + 16) = v66; /*0x14064bcc0*/
        *(_OWORD *)a1 = v65; /*0x14064bcc4*/
        v25 = 1; /*0x14064bcc7*/
        goto LABEL_73; /*0x14064bcc9*/
      }
LABEL_72:
      *(_QWORD *)a1 = -1; /*0x14064bccb*/
      v25 = 7; /*0x14064bcd2*/
LABEL_73:
      *(_BYTE *)(v123 + 608) = v25; /*0x14064bcd4*/
      return a1;
    case 4LL: /*0x14064ae98*/
      v16 = *(_QWORD *)(a2 + 616); /*0x14064af83*/
      v17 = *(__int64 (__fastcall ***)())(v5 + 624); /*0x14064af8a*/
      goto LABEL_16; /*0x14064af91*/
    case 5LL: /*0x14064ae98*/
      v30 = *(_QWORD *)(a2 + 616); /*0x14064b1e9*/
      v31 = *(__int64 (__fastcall ***)())(v5 + 624); /*0x14064b1f0*/
      goto LABEL_26; /*0x14064b1f0*/
    case 6LL: /*0x14064ae98*/
      v14 = *(_QWORD *)(a2 + 616); /*0x14064af70*/
      v15 = *(__int64 (__fastcall ***)())(a2 + 624); /*0x14064af77*/
      goto LABEL_33; /*0x14064af7e*/
    case 7LL: /*0x14064ae98*/
      v12 = (_BYTE *)(a2 + 2536); /*0x14064af37*/
      v13 = (_OWORD *)(a2 + 616); /*0x14064af46*/
      switch ( *(_BYTE *)(a2 + 2536) ) /*0x14064af5b*/
      {
        case 0: /*0x14064af5b*/
          goto LABEL_41;
        case 1: /*0x14064af5b*/
          v112 = a2 + 616; /*0x14064bd79*/
          sub_1416C3400(&off_141767FD0, a2, a3, a4); /*0x14064bd87*/
        case 2: /*0x14064af5b*/
          v112 = a2 + 616; /*0x14064bd63*/
          sub_1416C3420(&off_141767FD0, a2, a3, a4); /*0x14064bd71*/
        case 3: /*0x14064af5b*/
          v122 = (_BYTE *)(a2 + 2536); /*0x14064af5d*/
          v121 = (_OWORD *)(a2 + 616); /*0x14064af64*/
          goto LABEL_60; /*0x14064af6b*/
      }
  }
}
