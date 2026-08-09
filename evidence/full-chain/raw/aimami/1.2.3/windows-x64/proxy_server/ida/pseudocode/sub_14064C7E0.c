// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x14064c7e0  size: 0xf4f  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   References 'unknown ide path' and 'proxy.upstream'; identical size (0xf4f) to sibling sub_14064AE40
//   -- see that entry; paired monomorphized IDE-route handler.
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
//   0x141768410  off_141768410
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14064C7E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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

  v124 = -2; /*0x14064c808*/
  v5 = a2; /*0x14064c816*/
  v7 = *(unsigned __int8 *)(a2 + 608); /*0x14064c81c*/
  v123 = a2; /*0x14064c831*/
  switch ( v7 ) /*0x14064c838*/
  {
    case 0LL: /*0x14064c838*/
      *(_WORD *)(a2 + 611) = 0; /*0x14064c83a*/
      *(_BYTE *)(a2 + 613) = 0; /*0x14064c844*/
      *(_WORD *)(a2 + 614) = 1; /*0x14064c84c*/
      *(_BYTE *)(a2 + 610) = 1; /*0x14064c856*/
      sub_141684120(a2 + 288, a2, 224); /*0x14064c86e*/
      *(_BYTE *)(v5 + 609) = 1; /*0x14064c873*/
      *(_OWORD *)(v5 + 512) = *(_OWORD *)(v5 + 224); /*0x14064c883*/
      *(_QWORD *)(v5 + 528) = v5 + 240; /*0x14064c892*/
      nullsub_1(v8); /*0x14064c899*/
      v9 = sub_140001650(16, 8); /*0x14064c8a8*/
      if ( !v9 ) /*0x14064c8b0*/
        sub_1416C2D31(8, 16); /*0x14064d6a9*/
      v10 = v9; /*0x14064c8b6*/
      *(_QWORD *)v9 = v5 + 240; /*0x14064c8b9*/
      *(_BYTE *)(v9 + 8) = 0; /*0x14064c8bc*/
      *(_QWORD *)(v5 + 616) = v9; /*0x14064c8c0*/
      v11 = &off_1417B6298; /*0x14064c8c7*/
      *(_QWORD *)(v5 + 624) = &off_1417B6298; /*0x14064c8ce*/
      goto LABEL_9; /*0x14064c8d5*/
    case 1LL: /*0x14064c838*/
      sub_1416C3400(&off_141769280, a2, a3, a4); /*0x14064d6fc*/
    case 2LL: /*0x14064c838*/
      sub_1416C3420(&off_141769280, a2, a3, a4); /*0x14064d6ee*/
    case 3LL: /*0x14064c838*/
      v10 = *(_QWORD *)(a2 + 616); /*0x14064c936*/
      v11 = *(__int64 (__fastcall ***)())(v5 + 624); /*0x14064c93d*/
LABEL_9:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v11[3])(v70, v10, a3); /*0x14064c944*/
      if ( !*(_QWORD *)v70 ) /*0x14064c95a*/
      {
        *(_QWORD *)a1 = -1; /*0x14064d0fd*/
        v25 = 3; /*0x14064d104*/
        goto LABEL_73; /*0x14064d106*/
      }
      v90 = *(_OWORD *)&v70[32]; /*0x14064c975*/
      v89 = *(_OWORD *)&v70[16]; /*0x14064c97c*/
      v88 = *(_OWORD *)v70; /*0x14064c983*/
      v122 = *(_BYTE **)(v123 + 616); /*0x14064c998*/
      v121 = *(_OWORD **)(v123 + 624); /*0x14064c9a6*/
      if ( *(_QWORD *)v121 ) /*0x14064c9ad*/
        (*(void (__fastcall **)(_BYTE *))v121)(v122); /*0x14064c9bc*/
      v18 = v122; /*0x14064c9bf*/
      v19 = *((_QWORD *)v121 + 1); /*0x14064c9cd*/
      if ( v19 ) /*0x14064c9d4*/
        sub_140001660(v122, v19, *((_QWORD *)v121 + 2)); /*0x14064c9da*/
      v20 = v123; /*0x14064c9df*/
      *(_BYTE *)(v123 + 613) = 1; /*0x14064c9e6*/
      v21 = v89; /*0x14064c9f4*/
      v22 = v90; /*0x14064c9fb*/
      *(_OWORD *)(v20 + 536) = v88; /*0x14064ca02*/
      *(_OWORD *)(v20 + 552) = v21; /*0x14064ca09*/
      *(_OWORD *)(v20 + 568) = v22; /*0x14064ca10*/
      nullsub_1(v18); /*0x14064ca17*/
      v23 = sub_140001650(16, 8); /*0x14064ca26*/
      if ( !v23 ) /*0x14064ca2e*/
        sub_1416C2D31(8, 16); /*0x14064d6bb*/
      v16 = v23; /*0x14064ca34*/
      *(_QWORD *)v23 = v20 + 288; /*0x14064ca3e*/
      *(_BYTE *)(v23 + 8) = 0; /*0x14064ca41*/
      *(_QWORD *)(v20 + 616) = v23; /*0x14064ca45*/
      v17 = &off_1417545C8; /*0x14064ca4c*/
      *(_QWORD *)(v20 + 624) = &off_1417545C8; /*0x14064ca53*/
LABEL_16:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v17[3])(v70, v16, a3); /*0x14064ca5a*/
      v24 = *(_QWORD *)v70; /*0x14064ca68*/
      if ( *(_QWORD *)v70 == -3 ) /*0x14064ca73*/
      {
        *(_QWORD *)a1 = -1; /*0x14064ca75*/
        v25 = 4; /*0x14064ca7c*/
        goto LABEL_73; /*0x14064ca7e*/
      }
      v111 = *(_QWORD *)&v70[24]; /*0x14064ca8a*/
      v110 = *(_OWORD *)&v70[8]; /*0x14064ca98*/
      v86 = *(_OWORD *)&v70[32]; /*0x14064caa6*/
      v87 = *(_OWORD *)&v70[48]; /*0x14064cab4*/
      v122 = *(_BYTE **)(v123 + 616); /*0x14064cac9*/
      v121 = *(_OWORD **)(v123 + 624); /*0x14064cad7*/
      if ( *(_QWORD *)v121 ) /*0x14064cade*/
        (*(void (__fastcall **)(_BYTE *))v121)(v122); /*0x14064caed*/
      v26 = v122; /*0x14064caf0*/
      v27 = *((_QWORD *)v121 + 1); /*0x14064cafe*/
      if ( v27 ) /*0x14064cb05*/
        sub_140001660(v122, v27, *((_QWORD *)v121 + 2)); /*0x14064cb0b*/
      if ( v24 != -2 ) /*0x14064cb14*/
      {
        *(_QWORD *)v70 = v24; /*0x14064d119*/
        *(_OWORD *)&v70[8] = v110; /*0x14064d127*/
        *(_QWORD *)&v70[24] = v111; /*0x14064d135*/
        *(_OWORD *)&v70[32] = v86; /*0x14064d14a*/
        *(_OWORD *)&v70[48] = v87; /*0x14064d151*/
        sub_140FA37C0(v105, v70); /*0x14064d166*/
        v52 = v123; /*0x14064d16c*/
LABEL_51:
        *(_BYTE *)(v52 + 612) = 0; /*0x14064d1ec*/
        sub_1405E7870(v52 + 536); /*0x14064d1fa*/
        v55 = v123; /*0x14064d200*/
        *(_BYTE *)(v123 + 613) = 0; /*0x14064d207*/
        if ( *(_BYTE *)(v55 + 609) ) /*0x14064d20e*/
        {
          v122 = *(_BYTE **)(v55 + 512); /*0x14064d21e*/
          v121 = *(_OWORD **)(v55 + 520); /*0x14064d22c*/
          if ( *(_QWORD *)v121 ) /*0x14064d233*/
            (*(void (__fastcall **)(_BYTE *))v121)(v122); /*0x14064d242*/
          v56 = *((_QWORD *)v121 + 1); /*0x14064d253*/
          v55 = v123; /*0x14064d25a*/
          if ( v56 ) /*0x14064d261*/
            sub_140001660(v122, v56, *((_QWORD *)v121 + 2)); /*0x14064d267*/
        }
        *(_BYTE *)(v55 + 609) = 0; /*0x14064d26c*/
        if ( *(_BYTE *)(v55 + 610) ) /*0x14064d273*/
          sub_1405E15C0(v123 + 288); /*0x14064d28a*/
        v57 = v123; /*0x14064d290*/
        *(_BYTE *)(v123 + 610) = 0; /*0x14064d297*/
        sub_1405E7870(v57 + 240); /*0x14064d2a5*/
        goto LABEL_71; /*0x14064d2ab*/
      }
      v28 = v123; /*0x14064cb1a*/
      *(_BYTE *)(v123 + 612) = 1; /*0x14064cb21*/
      *(_OWORD *)(v28 + 584) = v110; /*0x14064cb2f*/
      *(_QWORD *)(v28 + 600) = v111; /*0x14064cb3d*/
      nullsub_1(v26); /*0x14064cb44*/
      v29 = sub_140001650(16, 8); /*0x14064cb53*/
      if ( !v29 ) /*0x14064cb5b*/
        sub_1416C2D31(8, 16); /*0x14064d6df*/
      v30 = v29; /*0x14064cb61*/
      *(_QWORD *)v29 = v28 + 288; /*0x14064cb6b*/
      *(_BYTE *)(v29 + 8) = 0; /*0x14064cb6e*/
      *(_QWORD *)(v28 + 616) = v29; /*0x14064cb72*/
      v31 = &off_1417908D0; /*0x14064cb79*/
      *(_QWORD *)(v28 + 624) = &off_1417908D0; /*0x14064cb80*/
LABEL_26:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v31[3])(v70, v30, a3); /*0x14064cb97*/
      if ( *(_DWORD *)v70 == -1 ) /*0x14064cbac*/
      {
        *(_QWORD *)a1 = -1; /*0x14064d10b*/
        v25 = 5; /*0x14064d112*/
        goto LABEL_73; /*0x14064d114*/
      }
      v85 = *(_OWORD *)&v70[80]; /*0x14064cbb9*/
      v84 = *(_OWORD *)&v70[64]; /*0x14064cbc7*/
      v83 = *(_OWORD *)&v70[48]; /*0x14064cbea*/
      v82 = *(_OWORD *)&v70[32]; /*0x14064cbf1*/
      v81 = *(_OWORD *)&v70[16]; /*0x14064cbf8*/
      v80 = *(_OWORD *)v70; /*0x14064cbff*/
      v122 = *(_BYTE **)(v123 + 616); /*0x14064cc14*/
      v121 = *(_OWORD **)(v123 + 624); /*0x14064cc22*/
      if ( *(_QWORD *)v121 ) /*0x14064cc29*/
        (*(void (__fastcall **)(_BYTE *))v121)(v122); /*0x14064cc38*/
      v32 = *((_QWORD *)v121 + 1); /*0x14064cc49*/
      if ( v32 ) /*0x14064cc50*/
        sub_140001660(v122, v32, *((_QWORD *)v121 + 2)); /*0x14064cc56*/
      v33 = v123; /*0x14064cc5b*/
      *(_BYTE *)(v123 + 611) = 1; /*0x14064cc62*/
      v34 = v81; /*0x14064cc71*/
      v35 = v82; /*0x14064cc78*/
      v36 = v83; /*0x14064cc7f*/
      *(_OWORD *)(v33 + 632) = v80; /*0x14064cc86*/
      *(_OWORD *)(v33 + 648) = v34; /*0x14064cc8e*/
      *(_OWORD *)(v33 + 664) = v35; /*0x14064cc96*/
      *(_OWORD *)(v33 + 680) = v36; /*0x14064cc9e*/
      *(_OWORD *)(v33 + 696) = v84; /*0x14064ccad*/
      *(_OWORD *)(v33 + 712) = v85; /*0x14064ccbc*/
      *(_BYTE *)(v33 + 610) = 0; /*0x14064ccc4*/
      sub_141684120(v70, v33 + 288, 224); /*0x14064cce0*/
      *(_BYTE *)(v33 + 609) = 0; /*0x14064cce5*/
      v37 = *(_QWORD *)(v33 + 528); /*0x14064cced*/
      v75 = *(_OWORD *)(v33 + 512); /*0x14064ccfc*/
      v76 = v37; /*0x14064cd03*/
      v77 = 0; /*0x14064cd0a*/
      nullsub_1(v38); /*0x14064cd11*/
      v39 = sub_140001650(512, 8); /*0x14064cd20*/
      if ( !v39 ) /*0x14064cd28*/
        sub_1416C2D31(8, 512); /*0x14064d6cd*/
      v14 = v39; /*0x14064cd2e*/
      sub_141684120(v39, v70, 512); /*0x14064cd41*/
      *(_QWORD *)(v33 + 616) = v14; /*0x14064cd46*/
      v15 = &off_14177CE48; /*0x14064cd4d*/
      *(_QWORD *)(v33 + 624) = &off_14177CE48; /*0x14064cd54*/
LABEL_33:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v15[3])(v70, v14, a3); /*0x14064cd5b*/
      v40 = v70[0]; /*0x14064cd6c*/
      if ( v70[0] == 0xFE ) /*0x14064cd76*/
      {
        *(_QWORD *)a1 = -1; /*0x14064cd78*/
        v25 = 6; /*0x14064cd7f*/
        goto LABEL_73; /*0x14064cd81*/
      }
      *(_OWORD *)&v108[15] = *(_OWORD *)&v70[16]; /*0x14064cd94*/
      *(_OWORD *)v108 = *(_OWORD *)&v70[1]; /*0x14064cd9b*/
      v122 = *(_BYTE **)(v123 + 616); /*0x14064cdb0*/
      v121 = *(_OWORD **)(v123 + 624); /*0x14064cdbe*/
      if ( *(_QWORD *)v121 ) /*0x14064cdc5*/
        (*(void (__fastcall **)(_BYTE *))v121)(v122); /*0x14064cdd4*/
      v41 = *((_QWORD *)v121 + 1); /*0x14064cde5*/
      if ( v41 ) /*0x14064cdec*/
        sub_140001660(v122, v41, *((_QWORD *)v121 + 2)); /*0x14064cdf2*/
      v5 = v123; /*0x14064cdfa*/
      if ( v40 == -1 ) /*0x14064ce01*/
      {
        *(_QWORD *)&v70[16] = *(_QWORD *)&v108[23]; /*0x14064d17c*/
        *(_OWORD *)v70 = *(_OWORD *)&v108[7]; /*0x14064d18a*/
        sub_140FA3720(v105, v70); /*0x14064d19f*/
        v53 = v123; /*0x14064d1a5*/
        *(_BYTE *)(v123 + 615) = 0; /*0x14064d1ac*/
        sub_140017140(v53 + 632); /*0x14064d1ba*/
        v52 = v123; /*0x14064d1c0*/
        *(_BYTE *)(v123 + 611) = 0; /*0x14064d1c7*/
        v54 = *(_QWORD *)(v52 + 584); /*0x14064d1ce*/
        if ( v54 ) /*0x14064d1d8*/
          sub_140001660(*(_QWORD *)(v52 + 592), v54, 1); /*0x14064d1e7*/
        goto LABEL_51; /*0x14064d1e7*/
      }
      v13 = (_OWORD *)(v123 + 616); /*0x14064ce07*/
      *(_OWORD *)&v107.m256i_u64[2] = *(_OWORD *)&v108[15]; /*0x14064ce15*/
      *(_OWORD *)&v107.m256i_i8[1] = *(_OWORD *)v108; /*0x14064ce23*/
      v107.m256i_i8[0] = v40; /*0x14064ce2a*/
      *(_BYTE *)(v123 + 615) = 0; /*0x14064ce30*/
      *(_DWORD *)(v5 + 611) = 0; /*0x14064ce38*/
      v42 = *(_OWORD *)(v5 + 536); /*0x14064ce43*/
      v43 = *(_OWORD *)(v5 + 552); /*0x14064ce4b*/
      v74 = *(_OWORD *)(v5 + 568); /*0x14064ce5b*/
      v73 = v43; /*0x14064ce62*/
      v72 = v42; /*0x14064ce69*/
      *(_QWORD *)v71 = *(_QWORD *)(v5 + 600); /*0x14064ce77*/
      *(_OWORD *)&v70[96] = *(_OWORD *)(v5 + 584); /*0x14064ce86*/
      v44 = *(_OWORD *)(v5 + 648); /*0x14064ce95*/
      v45 = *(_OWORD *)(v5 + 664); /*0x14064ce9d*/
      v46 = *(_OWORD *)(v5 + 680); /*0x14064cea5*/
      *(_OWORD *)v70 = *(_OWORD *)(v5 + 632); /*0x14064cead*/
      *(_OWORD *)&v70[16] = v44; /*0x14064ceb4*/
      *(_OWORD *)&v70[32] = v45; /*0x14064cebb*/
      *(_OWORD *)&v70[48] = v46; /*0x14064cec2*/
      *(_OWORD *)&v70[64] = *(_OWORD *)(v5 + 696); /*0x14064ced1*/
      *(_OWORD *)&v70[80] = *(_OWORD *)(v5 + 712); /*0x14064cee0*/
      *(__m256i *)&v71[8] = v107; /*0x14064cef5*/
      sub_141684120(v69, v70, 1920); /*0x14064cf17*/
      sub_141684120(v5 + 616, v69, 1920); /*0x14064cf28*/
      v12 = (_BYTE *)(v5 + 2536); /*0x14064cf2d*/
      *(_BYTE *)(v5 + 2536) = 0; /*0x14064cf34*/
LABEL_41:
      *(_OWORD *)(v5 + 848) = *(_OWORD *)(v5 + 800); /*0x14064cf3c*/
      *(_OWORD *)(v5 + 832) = *(_OWORD *)(v5 + 784); /*0x14064cf5b*/
      *(_OWORD *)(v5 + 816) = *(_OWORD *)(v5 + 768); /*0x14064cf6b*/
      *(_OWORD *)(v5 + 864) = *(_OWORD *)(v5 + 712); /*0x14064cf7b*/
      *(_QWORD *)(v5 + 880) = *(_QWORD *)(v5 + 728); /*0x14064cf8a*/
      v47 = v13[1]; /*0x14064cf9d*/
      v48 = v13[2]; /*0x14064cfa3*/
      v49 = v13[3]; /*0x14064cfa9*/
      *(_OWORD *)(v5 + 888) = *v13; /*0x14064cfaf*/
      *(_OWORD *)(v5 + 904) = v47; /*0x14064cfb7*/
      *(_OWORD *)(v5 + 920) = v48; /*0x14064cfbf*/
      *(_OWORD *)(v5 + 936) = v49; /*0x14064cfc7*/
      *(_OWORD *)(v5 + 952) = v13[4]; /*0x14064cfd5*/
      *(_OWORD *)(v5 + 968) = v13[5]; /*0x14064cfe3*/
      v50 = *(_OWORD *)(v5 + 736); /*0x14064cfeb*/
      v79[1] = *(_OWORD *)(v5 + 752); /*0x14064cffb*/
      v79[0] = v50; /*0x14064d002*/
      *(_BYTE *)(v5 + 2537) = 1; /*0x14064d009*/
      if ( *(_QWORD *)(v5 + 880) == 5 /*0x14064d032*/
        && !(**(_DWORD **)(v5 + 872) ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)(v5 + 872) + 4LL) ^ 0x78) )
      {
        v122 = v12; /*0x14064d2b0*/
        v121 = v13; /*0x14064d2b7*/
        *(_BYTE *)(v5 + 2537) = 0; /*0x14064d2c5*/
        *(_QWORD *)(v5 + 984) = 0; /*0x14064d2cd*/
        v58 = *(_OWORD *)(v5 + 752); /*0x14064d2db*/
        *(_OWORD *)(v5 + 992) = *(_OWORD *)(v5 + 736); /*0x14064d2df*/
        *(_OWORD *)(v5 + 1008) = v58; /*0x14064d2e7*/
        *(_QWORD *)(v5 + 1024) = v5 + 816; /*0x14064d2ef*/
        *(_QWORD *)(v5 + 1032) = v5 + 888; /*0x14064d2f6*/
        *(_BYTE *)(v5 + 2528) = 0; /*0x14064d2fd*/
LABEL_60:
        v109 = v5 + 984; /*0x14064d305*/
        _u7b__u7b_closure_u7d__u7d__8(v78, (__int128 *)(v5 + 984), a3, a4); /*0x14064d31d*/
        if ( LODWORD(v78[0]) == -1 ) /*0x14064d32a*/
        {
          *v122 = 3; /*0x14064d3f0*/
          goto LABEL_72; /*0x14064d3f3*/
        }
        *(_OWORD *)v71 = v78[7]; /*0x14064d337*/
        *(_OWORD *)&v70[96] = v78[6]; /*0x14064d345*/
        *(_OWORD *)&v70[80] = v78[5]; /*0x14064d353*/
        *(_OWORD *)&v70[64] = v78[4]; /*0x14064d361*/
        *(_OWORD *)&v70[48] = v78[3]; /*0x14064d384*/
        *(_OWORD *)&v70[32] = v78[2]; /*0x14064d38b*/
        *(_OWORD *)&v70[16] = v78[1]; /*0x14064d392*/
        *(_OWORD *)v70 = v78[0]; /*0x14064d399*/
        v12 = v122; /*0x14064d3b1*/
        if ( *(_BYTE *)(v123 + 2528) == 3 ) /*0x14064d3b8*/
        {
          sub_1405DD0E0(v123 + 1064); /*0x14064d3ff*/
          *(_BYTE *)(v123 + 2529) = 0; /*0x14064d40c*/
          v13 = v121; /*0x14064d413*/
          v12 = v122; /*0x14064d41a*/
        }
        else
        {
          v13 = v121; /*0x14064d3bc*/
          if ( !*(_BYTE *)(v123 + 2528) ) /*0x14064d3a7*/
          {
            v120 = v122; /*0x14064d3d3*/
            v119 = v121; /*0x14064d3da*/
            sub_1400104F0(v123 + 992); /*0x14064d3e1*/
          }
        }
        v59 = v123; /*0x14064d421*/
        *(_BYTE *)(v123 + 2537) = 0; /*0x14064d428*/
        v116 = v12; /*0x14064d436*/
        v115 = v13; /*0x14064d43d*/
        sub_140017140(v59 + 888); /*0x14064d444*/
        v60 = v123; /*0x14064d44a*/
        v61 = *(_QWORD *)(v123 + 864); /*0x14064d451*/
        if ( v61 ) /*0x14064d45b*/
          sub_140001660(*(_QWORD *)(v123 + 872), v61, 1); /*0x14064d46a*/
        v114 = v12; /*0x14064d476*/
        v113 = v13; /*0x14064d47d*/
        sub_1405E7870(v60 + 816); /*0x14064d484*/
      }
      else
      {
        v120 = v12; /*0x14064d038*/
        v119 = v13; /*0x14064d03f*/
        LOWORD(a2) = 404; /*0x14064d06f*/
        sub_14066B160((unsigned int)v70, a2, (unsigned int)aUnknownIdePath, 16, (__int64)aProxyUpstream, 14); /*0x14064d073*/
        v118 = v12; /*0x14064d079*/
        v117 = v13; /*0x14064d080*/
        sub_1400104F0(v79); /*0x14064d08e*/
        *(_BYTE *)(v123 + 2537) = 0; /*0x14064d09b*/
        v116 = v12; /*0x14064d0a2*/
        v115 = v13; /*0x14064d0a9*/
        sub_140017140(v5 + 888); /*0x14064d0b3*/
        v51 = *(_QWORD *)(v123 + 864); /*0x14064d0c7*/
        if ( v51 ) /*0x14064d0cd*/
          sub_140001660(*(_QWORD *)(v123 + 872), v51, 1); /*0x14064d0dc*/
        v114 = v12; /*0x14064d0e1*/
        v113 = v13; /*0x14064d0e8*/
        sub_1405E7870(v5 + 816); /*0x14064d0f2*/
      }
      v62 = *(_QWORD *)v70; /*0x14064d48a*/
      v98 = *(_OWORD *)&v70[8]; /*0x14064d498*/
      v99 = *(_OWORD *)&v70[24]; /*0x14064d4a6*/
      v100 = *(_OWORD *)&v70[40]; /*0x14064d4b4*/
      v101 = *(_OWORD *)&v70[56]; /*0x14064d4c2*/
      v102 = *(_OWORD *)&v70[72]; /*0x14064d4d0*/
      v103 = *(_OWORD *)&v70[88]; /*0x14064d4de*/
      v104 = *(_QWORD *)&v70[104]; /*0x14064d4ec*/
      v63 = *(_OWORD *)v71; /*0x14064d4f3*/
      *v12 = 1; /*0x14064d4fa*/
      if ( v62 != -1 ) /*0x14064d503*/
      {
        v97 = v104; /*0x14064d510*/
        v96 = v103; /*0x14064d51e*/
        v95 = v102; /*0x14064d52c*/
        v94 = v101; /*0x14064d54f*/
        v93 = v100; /*0x14064d556*/
        v92 = v99; /*0x14064d55d*/
        v91 = v98; /*0x14064d564*/
        sub_1405DC200(v13); /*0x14064d56e*/
        *(_QWORD *)v105 = v62; /*0x14064d574*/
        *(_OWORD *)&v105[8] = v91; /*0x14064d597*/
        *(_OWORD *)&v105[24] = v92; /*0x14064d59e*/
        *(_OWORD *)&v105[40] = v93; /*0x14064d5a5*/
        *(_OWORD *)&v105[56] = v94; /*0x14064d5ac*/
        *(_OWORD *)&v105[72] = v95; /*0x14064d5ba*/
        *(_OWORD *)&v105[88] = v96; /*0x14064d5c8*/
        *(_QWORD *)&v105[104] = v97; /*0x14064d5d6*/
        v106 = v63; /*0x14064d5dd*/
        v64 = v123; /*0x14064d5e4*/
        *(_BYTE *)(v123 + 615) = 0; /*0x14064d5eb*/
        *(_BYTE *)(v64 + 613) = 0; /*0x14064d5f9*/
        *(_DWORD *)(v64 + 609) = 0; /*0x14064d600*/
        sub_1405E7870(v64 + 240); /*0x14064d60a*/
LABEL_71:
        *(_OWORD *)(a1 + 112) = v106; /*0x14064d610*/
        *(_OWORD *)(a1 + 96) = *(_OWORD *)&v105[96]; /*0x14064d622*/
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v105[80]; /*0x14064d62d*/
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v105[64]; /*0x14064d638*/
        v65 = *(_OWORD *)v105; /*0x14064d63c*/
        v66 = *(_OWORD *)&v105[16]; /*0x14064d643*/
        v67 = *(_OWORD *)&v105[32]; /*0x14064d64a*/
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v105[48]; /*0x14064d658*/
        *(_OWORD *)(a1 + 32) = v67; /*0x14064d65c*/
        *(_OWORD *)(a1 + 16) = v66; /*0x14064d660*/
        *(_OWORD *)a1 = v65; /*0x14064d664*/
        v25 = 1; /*0x14064d667*/
        goto LABEL_73; /*0x14064d669*/
      }
LABEL_72:
      *(_QWORD *)a1 = -1; /*0x14064d66b*/
      v25 = 7; /*0x14064d672*/
LABEL_73:
      *(_BYTE *)(v123 + 608) = v25; /*0x14064d674*/
      return a1;
    case 4LL: /*0x14064c838*/
      v16 = *(_QWORD *)(a2 + 616); /*0x14064c923*/
      v17 = *(__int64 (__fastcall ***)())(v5 + 624); /*0x14064c92a*/
      goto LABEL_16; /*0x14064c931*/
    case 5LL: /*0x14064c838*/
      v30 = *(_QWORD *)(a2 + 616); /*0x14064cb89*/
      v31 = *(__int64 (__fastcall ***)())(v5 + 624); /*0x14064cb90*/
      goto LABEL_26; /*0x14064cb90*/
    case 6LL: /*0x14064c838*/
      v14 = *(_QWORD *)(a2 + 616); /*0x14064c910*/
      v15 = *(__int64 (__fastcall ***)())(a2 + 624); /*0x14064c917*/
      goto LABEL_33; /*0x14064c91e*/
    case 7LL: /*0x14064c838*/
      v12 = (_BYTE *)(a2 + 2536); /*0x14064c8d7*/
      v13 = (_OWORD *)(a2 + 616); /*0x14064c8e6*/
      switch ( *(_BYTE *)(a2 + 2536) ) /*0x14064c8fb*/
      {
        case 0: /*0x14064c8fb*/
          goto LABEL_41;
        case 1: /*0x14064c8fb*/
          v112 = a2 + 616; /*0x14064d719*/
          sub_1416C3400(&off_141768410, a2, a3, a4); /*0x14064d727*/
        case 2: /*0x14064c8fb*/
          v112 = a2 + 616; /*0x14064d703*/
          sub_1416C3420(&off_141768410, a2, a3, a4); /*0x14064d711*/
        case 3: /*0x14064c8fb*/
          v122 = (_BYTE *)(a2 + 2536); /*0x14064c8fd*/
          v121 = (_OWORD *)(a2 + 616); /*0x14064c904*/
          goto LABEL_60; /*0x14064c90b*/
      }
  }
}
