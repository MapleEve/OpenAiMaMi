// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x14064f8a0  size: 0xe72  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   References 'router-compact'; identical size (0xe72) to sibling sub_14064E180 -- handler for the
//   /codex/router/v1/responses/compact endpoint, the compacting counterpart of the previous entry.
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
//   0x141753878  off_141753878
//   0x1417908d0  off_1417908D0
//   0x14177ce48  off_14177CE48
//   0x140fa3720  sub_140FA3720
//   0x140017140  sub_140017140
//   0x1402c3580  sub_1402C3580
//   0x1405e7870  sub_1405E7870
//   0x1405e15c0  sub_1405E15C0
//   0x1416c2f60  sub_1416C2F60
//   0x14177a960  off_14177A960
//   0x141768860  aRouterCompact   "router-compact"
//   0x140642680  __u7b__u7b_closure_u7d__u7d__9
//   0x1405de4e0  sub_1405DE4E0
//   0x1405dd820  sub_1405DD820
//   0x141768870  off_141768870
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_14064F8A0(__m128i *a1, __int64 a2, void *a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(); // rax
  __int64 v12; // r9
  _OWORD *v13; // r15
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
  _BYTE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 (__fastcall **v32)(); // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int8 v41; // bl
  char v42; // al
  __int64 v43; // rdx
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int128 v51; // xmm3
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  __int128 v54; // xmm3
  unsigned __int64 v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __m128i v59; // xmm0
  __int64 v60; // r8
  unsigned __int64 v61; // r8
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rax
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm2
  _BYTE *v78; // rbx
  _OWORD *v79; // rdi
  __m128i v80; // xmm6
  __int64 v81; // rax
  __m128i v82; // xmm0
  __m128i v83; // xmm1
  __m128i v84; // xmm2
  _BYTE v86[3768]; // [rsp+28h] [rbp-58h] BYREF
  __m256i v87; // [rsp+EE0h] [rbp+E60h] BYREF
  __int128 v88; // [rsp+F00h] [rbp+E80h]
  __int128 v89; // [rsp+F10h] [rbp+E90h]
  __int128 v90; // [rsp+F20h] [rbp+EA0h]
  __int128 v91; // [rsp+F30h] [rbp+EB0h]
  __int128 v92; // [rsp+F40h] [rbp+EC0h]
  __int128 v93; // [rsp+F50h] [rbp+ED0h]
  __int128 v94; // [rsp+F60h] [rbp+EE0h]
  __int128 v95; // [rsp+F70h] [rbp+EF0h]
  __int128 v96; // [rsp+F80h] [rbp+F00h]
  __int64 v97; // [rsp+F90h] [rbp+F10h]
  __m256i v98; // [rsp+F98h] [rbp+F18h]
  __m256i v99; // [rsp+FB8h] [rbp+F38h]
  __int128 v100; // [rsp+FD8h] [rbp+F58h]
  char v101; // [rsp+10D8h] [rbp+1058h]
  __int128 v102; // [rsp+1DA0h] [rbp+1D20h]
  __int128 v103; // [rsp+1DB0h] [rbp+1D30h]
  __int128 v104; // [rsp+1DC0h] [rbp+1D40h]
  __int128 v105; // [rsp+1DD0h] [rbp+1D50h]
  __int128 v106; // [rsp+1DE0h] [rbp+1D60h]
  __int128 v107; // [rsp+1DF0h] [rbp+1D70h]
  __m128i v108[10]; // [rsp+1E00h] [rbp+1D80h] BYREF
  __m128i v109; // [rsp+1EA0h] [rbp+1E20h]
  __m128i v110; // [rsp+1EB0h] [rbp+1E30h]
  __m128i v111; // [rsp+1EC0h] [rbp+1E40h]
  __m128i v112; // [rsp+1ED0h] [rbp+1E50h]
  __m128i v113; // [rsp+1EE0h] [rbp+1E60h]
  __m128i v114; // [rsp+1EF0h] [rbp+1E70h]
  __m128i v115; // [rsp+1F00h] [rbp+1E80h]
  __m256i v116; // [rsp+1F10h] [rbp+1E90h]
  __int128 v117; // [rsp+1F30h] [rbp+1EB0h]
  __int128 v118; // [rsp+1F40h] [rbp+1EC0h]
  __int128 v119; // [rsp+1F50h] [rbp+1ED0h]
  __int128 v120; // [rsp+1F60h] [rbp+1EE0h]
  __m256i v121; // [rsp+1F70h] [rbp+1EF0h]
  __int128 v122; // [rsp+1F90h] [rbp+1F10h]
  __m128i v123; // [rsp+1FA0h] [rbp+1F20h] BYREF
  __m128i v124; // [rsp+1FB0h] [rbp+1F30h]
  __m128i v125; // [rsp+1FC0h] [rbp+1F40h]
  __m128i v126; // [rsp+1FD0h] [rbp+1F50h]
  __m128i v127; // [rsp+1FE0h] [rbp+1F60h]
  __m128i v128; // [rsp+1FF0h] [rbp+1F70h]
  __m128i v129; // [rsp+2000h] [rbp+1F80h]
  __m128i v130; // [rsp+2010h] [rbp+1F90h]
  __m256i v131; // [rsp+2020h] [rbp+1FA0h]
  __int128 v132; // [rsp+2040h] [rbp+1FC0h]
  __int128 v133; // [rsp+2050h] [rbp+1FD0h]
  __int128 v134; // [rsp+2060h] [rbp+1FE0h]
  __int64 v135; // [rsp+2070h] [rbp+1FF0h]
  __m256i v136; // [rsp+2080h] [rbp+2000h]
  _BYTE v137[31]; // [rsp+20A0h] [rbp+2020h]
  _OWORD *v138; // [rsp+20C0h] [rbp+2040h]
  _BYTE *v139; // [rsp+20C8h] [rbp+2048h]
  _OWORD *v140; // [rsp+20D0h] [rbp+2050h]
  _BYTE *v141; // [rsp+20D8h] [rbp+2058h]
  __int64 v142; // [rsp+20E0h] [rbp+2060h]
  __int64 v143; // [rsp+20E8h] [rbp+2068h]
  _OWORD *v144; // [rsp+20F0h] [rbp+2070h]
  _BYTE *v145; // [rsp+20F8h] [rbp+2078h]
  _OWORD *v146; // [rsp+2100h] [rbp+2080h]
  _BYTE *v147; // [rsp+2108h] [rbp+2088h]
  __int64 v148; // [rsp+2110h] [rbp+2090h]
  __int64 v149; // [rsp+2118h] [rbp+2098h]

  v149 = -2; /*0x14064f8c4*/
  v5 = a2; /*0x14064f8d2*/
  v7 = *(unsigned __int8 *)(a2 + 672); /*0x14064f8d8*/
  v148 = a2; /*0x14064f8ed*/
  switch ( v7 ) /*0x14064f8f4*/
  {
    case 0LL: /*0x14064f8f4*/
      *(_WORD *)(a2 + 675) = 0; /*0x14064f8f6*/
      *(_BYTE *)(a2 + 677) = 0; /*0x14064f900*/
      *(_WORD *)(a2 + 678) = 1; /*0x14064f908*/
      *(_BYTE *)(a2 + 674) = 1; /*0x14064f912*/
      sub_141684120(a2 + 288, a2, 224); /*0x14064f92a*/
      *(_BYTE *)(v5 + 673) = 1; /*0x14064f92f*/
      *(_OWORD *)(v5 + 512) = *(_OWORD *)(v5 + 224); /*0x14064f93f*/
      *(_QWORD *)(v5 + 528) = v5 + 240; /*0x14064f94e*/
      nullsub_1(v8); /*0x14064f955*/
      v9 = sub_140001650(16, 8); /*0x14064f964*/
      if ( !v9 ) /*0x14064f96c*/
        sub_1416C2D31(8, 16); /*0x14065069e*/
      v10 = v9; /*0x14064f972*/
      *(_QWORD *)v9 = v5 + 240; /*0x14064f975*/
      *(_BYTE *)(v9 + 8) = 0; /*0x14064f978*/
      *(_QWORD *)(v5 + 680) = v9; /*0x14064f97c*/
      v11 = &off_1417B6298; /*0x14064f983*/
      *(_QWORD *)(v5 + 688) = &off_1417B6298; /*0x14064f98a*/
      goto LABEL_9; /*0x14064f991*/
    case 1LL: /*0x14064f8f4*/
      sub_1416C3400(&off_141769280, a2, a3, a4); /*0x1406506df*/
    case 2LL: /*0x14064f8f4*/
      sub_1416C3420(&off_141769280, a2, a3, a4); /*0x1406506d1*/
    case 3LL: /*0x14064f8f4*/
      v10 = *(_QWORD *)(a2 + 680); /*0x14064f9f2*/
      v11 = *(__int64 (__fastcall ***)())(v5 + 688); /*0x14064f9f9*/
LABEL_9:
      ((void (__fastcall *)(__m256i *, __int64, void *))v11[3])(&v87, v10, a3); /*0x14064fa00*/
      if ( !v87.m256i_i64[0] ) /*0x14064fa16*/
      {
        a1->m128i_i64[0] = -1; /*0x1406501e0*/
        v42 = 3; /*0x1406501e7*/
        goto LABEL_62; /*0x1406501e9*/
      }
      v122 = v88; /*0x14064fa31*/
      v121 = v87; /*0x14064fa38*/
      v147 = *(_BYTE **)(v148 + 680); /*0x14064fa54*/
      v146 = *(_OWORD **)(v148 + 688); /*0x14064fa62*/
      if ( *(_QWORD *)v146 ) /*0x14064fa69*/
        (*(void (__fastcall **)(_BYTE *))v146)(v147); /*0x14064fa78*/
      v18 = v147; /*0x14064fa7b*/
      v19 = *((_QWORD *)v146 + 1); /*0x14064fa89*/
      if ( v19 ) /*0x14064fa90*/
        sub_140001660(v147, v19, *((_QWORD *)v146 + 2)); /*0x14064fa96*/
      v20 = v148; /*0x14064fa9b*/
      *(_BYTE *)(v148 + 677) = 1; /*0x14064faa2*/
      v21 = *(_OWORD *)&v121.m256i_u64[2]; /*0x14064fab0*/
      v22 = v122; /*0x14064fab7*/
      *(_OWORD *)(v20 + 536) = *(_OWORD *)v121.m256i_i8; /*0x14064fabe*/
      *(_OWORD *)(v20 + 552) = v21; /*0x14064fac5*/
      *(_OWORD *)(v20 + 568) = v22; /*0x14064facc*/
      nullsub_1(v18); /*0x14064fad3*/
      v23 = sub_140001650(16, 8); /*0x14064fae2*/
      if ( !v23 ) /*0x14064faea*/
        sub_1416C2D31(8, 16); /*0x1406506c2*/
      v16 = v23; /*0x14064faf0*/
      *(_QWORD *)v23 = v20 + 288; /*0x14064fafa*/
      *(_BYTE *)(v23 + 8) = 0; /*0x14064fafd*/
      *(_QWORD *)(v20 + 680) = v23; /*0x14064fb01*/
      v17 = &off_141753878; /*0x14064fb08*/
      *(_QWORD *)(v20 + 688) = &off_141753878; /*0x14064fb0f*/
LABEL_16:
      ((void (__fastcall *)(__m256i *, __int64, void *))v17[3])(&v87, v16, a3); /*0x14064fb16*/
      if ( v87.m256i_i8[0] == -1 ) /*0x14064fb2b*/
      {
        a1->m128i_i64[0] = -1; /*0x1406501d2*/
        v42 = 4; /*0x1406501d9*/
        goto LABEL_62; /*0x1406501db*/
      }
      v135 = v91; /*0x14064fb38*/
      v134 = v90; /*0x14064fb46*/
      v133 = v89; /*0x14064fb69*/
      v132 = v88; /*0x14064fb70*/
      v131 = v87; /*0x14064fb77*/
      v147 = *(_BYTE **)(v148 + 680); /*0x14064fb93*/
      v146 = *(_OWORD **)(v148 + 688); /*0x14064fba1*/
      if ( *(_QWORD *)v146 ) /*0x14064fba8*/
        (*(void (__fastcall **)(_BYTE *))v146)(v147); /*0x14064fbb7*/
      v24 = v147; /*0x14064fbba*/
      v25 = *((_QWORD *)v146 + 1); /*0x14064fbc8*/
      if ( v25 ) /*0x14064fbcf*/
        sub_140001660(v147, v25, *((_QWORD *)v146 + 2)); /*0x14064fbd5*/
      v26 = v148; /*0x14064fbda*/
      *(_BYTE *)(v148 + 676) = 1; /*0x14064fbe1*/
      v27 = *(_OWORD *)&v131.m256i_u64[2]; /*0x14064fbef*/
      v28 = v132; /*0x14064fbf6*/
      v29 = v133; /*0x14064fbfd*/
      *(_OWORD *)(v26 + 584) = *(_OWORD *)v131.m256i_i8; /*0x14064fc04*/
      *(_OWORD *)(v26 + 600) = v27; /*0x14064fc0b*/
      *(_OWORD *)(v26 + 616) = v28; /*0x14064fc12*/
      *(_OWORD *)(v26 + 632) = v29; /*0x14064fc19*/
      *(_OWORD *)(v26 + 648) = v134; /*0x14064fc27*/
      *(_QWORD *)(v26 + 664) = v135; /*0x14064fc35*/
      nullsub_1(v24); /*0x14064fc3c*/
      v30 = sub_140001650(16, 8); /*0x14064fc4b*/
      if ( !v30 ) /*0x14064fc53*/
        sub_1416C2D31(8, 16); /*0x14065068c*/
      v31 = v30; /*0x14064fc59*/
      *(_QWORD *)v30 = v26 + 288; /*0x14064fc63*/
      *(_BYTE *)(v30 + 8) = 0; /*0x14064fc66*/
      *(_QWORD *)(v26 + 680) = v30; /*0x14064fc6a*/
      v32 = &off_1417908D0; /*0x14064fc71*/
      *(_QWORD *)(v26 + 688) = &off_1417908D0; /*0x14064fc78*/
LABEL_24:
      ((void (__fastcall *)(__m256i *, __int64, void *))v32[3])(&v87, v31, a3); /*0x14064fc8f*/
      if ( v87.m256i_i32[0] == -1 ) /*0x14064fca4*/
      {
        a1->m128i_i64[0] = -1; /*0x1406501c4*/
        v42 = 5; /*0x1406501cb*/
        goto LABEL_62; /*0x1406501cd*/
      }
      v120 = v91; /*0x14064fcb1*/
      v119 = v90; /*0x14064fcbf*/
      v118 = v89; /*0x14064fce2*/
      v117 = v88; /*0x14064fce9*/
      v116 = v87; /*0x14064fcf0*/
      v147 = *(_BYTE **)(v148 + 680); /*0x14064fd0c*/
      v146 = *(_OWORD **)(v148 + 688); /*0x14064fd1a*/
      if ( *(_QWORD *)v146 ) /*0x14064fd21*/
        (*(void (__fastcall **)(_BYTE *))v146)(v147); /*0x14064fd30*/
      v33 = *((_QWORD *)v146 + 1); /*0x14064fd41*/
      if ( v33 ) /*0x14064fd48*/
        sub_140001660(v147, v33, *((_QWORD *)v146 + 2)); /*0x14064fd4e*/
      v34 = v148; /*0x14064fd53*/
      *(_BYTE *)(v148 + 675) = 1; /*0x14064fd5a*/
      v35 = *(_OWORD *)&v116.m256i_u64[2]; /*0x14064fd69*/
      v36 = v117; /*0x14064fd70*/
      v37 = v118; /*0x14064fd77*/
      *(_OWORD *)(v34 + 696) = *(_OWORD *)v116.m256i_i8; /*0x14064fd7e*/
      *(_OWORD *)(v34 + 712) = v35; /*0x14064fd86*/
      *(_OWORD *)(v34 + 728) = v36; /*0x14064fd8e*/
      *(_OWORD *)(v34 + 744) = v37; /*0x14064fd96*/
      *(_OWORD *)(v34 + 760) = v119; /*0x14064fda5*/
      *(_OWORD *)(v34 + 776) = v120; /*0x14064fdb4*/
      *(_BYTE *)(v34 + 674) = 0; /*0x14064fdbc*/
      sub_141684120(&v87, v34 + 288, 224); /*0x14064fdd8*/
      *(_BYTE *)(v34 + 673) = 0; /*0x14064fddd*/
      v38 = *(_QWORD *)(v34 + 528); /*0x14064fde5*/
      *(_OWORD *)&v99.m256i_u64[1] = *(_OWORD *)(v34 + 512); /*0x14064fdf4*/
      v99.m256i_i64[3] = v38; /*0x14064fdfb*/
      v101 = 0; /*0x14064fe02*/
      nullsub_1(v39); /*0x14064fe09*/
      v40 = sub_140001650(512, 8); /*0x14064fe18*/
      if ( !v40 ) /*0x14064fe20*/
        sub_1416C2D31(8, 512); /*0x1406506b0*/
      v14 = v40; /*0x14064fe26*/
      sub_141684120(v40, &v87, 512); /*0x14064fe39*/
      *(_QWORD *)(v34 + 680) = v14; /*0x14064fe3e*/
      v15 = &off_14177CE48; /*0x14064fe45*/
      *(_QWORD *)(v34 + 688) = &off_14177CE48; /*0x14064fe4c*/
LABEL_31:
      ((void (__fastcall *)(__m256i *, __int64, void *))v15[3])(&v87, v14, a3); /*0x14064fe53*/
      v41 = v87.m256i_i8[0]; /*0x14064fe64*/
      if ( v87.m256i_i8[0] != -2 ) /*0x14064fe6e*/
      {
        *(_OWORD *)&v137[15] = *(_OWORD *)&v87.m256i_u64[2]; /*0x14064fe8c*/
        *(_OWORD *)v137 = *(_OWORD *)&v87.m256i_i8[1]; /*0x14064fe93*/
        v147 = *(_BYTE **)(v148 + 680); /*0x14064fea8*/
        v146 = *(_OWORD **)(v148 + 688); /*0x14064feb6*/
        if ( *(_QWORD *)v146 ) /*0x14064febd*/
          (*(void (__fastcall **)(_BYTE *))v146)(v147); /*0x14064fecc*/
        v43 = *((_QWORD *)v146 + 1); /*0x14064fedd*/
        if ( v43 ) /*0x14064fee4*/
          sub_140001660(v147, v43, *((_QWORD *)v146 + 2)); /*0x14064feea*/
        v5 = v148; /*0x14064fef2*/
        if ( v41 == -1 ) /*0x14064fef9*/
        {
          v87.m256i_i64[2] = *(_QWORD *)&v137[23]; /*0x1406501fc*/
          *(_OWORD *)v87.m256i_i8 = *(_OWORD *)&v137[7]; /*0x14065020a*/
          sub_140FA3720(&v123, &v87); /*0x14065021f*/
          v65 = v148; /*0x140650225*/
          *(_BYTE *)(v148 + 679) = 0; /*0x14065022c*/
          sub_140017140(v65 + 696); /*0x14065023a*/
          v66 = v148; /*0x140650240*/
          *(_BYTE *)(v148 + 675) = 0; /*0x140650247*/
          sub_1402C3580(v66 + 584); /*0x140650255*/
          v67 = v148; /*0x14065025b*/
          *(_BYTE *)(v148 + 676) = 0; /*0x140650262*/
          sub_1405E7870(v67 + 536); /*0x140650270*/
          v68 = v148; /*0x140650276*/
          *(_BYTE *)(v148 + 677) = 0; /*0x14065027d*/
          if ( *(_BYTE *)(v68 + 673) ) /*0x140650284*/
          {
            v147 = *(_BYTE **)(v68 + 512); /*0x140650294*/
            v146 = *(_OWORD **)(v68 + 520); /*0x1406502a2*/
            if ( *(_QWORD *)v146 ) /*0x1406502a9*/
              (*(void (__fastcall **)(_BYTE *))v146)(v147); /*0x1406502b8*/
            v69 = *((_QWORD *)v146 + 1); /*0x1406502c9*/
            v68 = v148; /*0x1406502d0*/
            if ( v69 ) /*0x1406502d7*/
              sub_140001660(v147, v69, *((_QWORD *)v146 + 2)); /*0x1406502dd*/
          }
          *(_BYTE *)(v68 + 673) = 0; /*0x1406502e2*/
          if ( *(_BYTE *)(v68 + 674) ) /*0x1406502e9*/
            sub_1405E15C0(v148 + 288); /*0x140650300*/
          v70 = v148; /*0x140650306*/
          *(_BYTE *)(v148 + 674) = 0; /*0x14065030d*/
          sub_1405E7870(v70 + 240); /*0x14065031b*/
        }
        else
        {
          v13 = (_OWORD *)(v148 + 680); /*0x14064feff*/
          *(_OWORD *)&v136.m256i_u64[2] = *(_OWORD *)&v137[15]; /*0x14064ff0d*/
          *(_OWORD *)&v136.m256i_i8[1] = *(_OWORD *)v137; /*0x14064ff1b*/
          v136.m256i_i8[0] = v41; /*0x14064ff22*/
          *(_BYTE *)(v148 + 679) = 0; /*0x14064ff28*/
          *(_DWORD *)(v5 + 675) = 0; /*0x14064ff30*/
          v44 = *(_OWORD *)(v5 + 536); /*0x14064ff3b*/
          v45 = *(_OWORD *)(v5 + 552); /*0x14064ff43*/
          v100 = *(_OWORD *)(v5 + 568); /*0x14064ff53*/
          *(_OWORD *)&v99.m256i_u64[2] = v45; /*0x14064ff5a*/
          *(_OWORD *)v99.m256i_i8 = v44; /*0x14064ff61*/
          v97 = *(_QWORD *)(v5 + 664); /*0x14064ff6f*/
          v96 = *(_OWORD *)(v5 + 648); /*0x14064ff7e*/
          v46 = *(_OWORD *)(v5 + 584); /*0x14064ff85*/
          v47 = *(_OWORD *)(v5 + 600); /*0x14064ff8d*/
          v48 = *(_OWORD *)(v5 + 616); /*0x14064ff95*/
          v95 = *(_OWORD *)(v5 + 632); /*0x14064ffa5*/
          v94 = v48; /*0x14064ffac*/
          v93 = v47; /*0x14064ffb3*/
          v92 = v46; /*0x14064ffba*/
          v49 = *(_OWORD *)(v5 + 712); /*0x14064ffc9*/
          v50 = *(_OWORD *)(v5 + 728); /*0x14064ffd1*/
          v51 = *(_OWORD *)(v5 + 744); /*0x14064ffd9*/
          *(_OWORD *)v87.m256i_i8 = *(_OWORD *)(v5 + 696); /*0x14064ffe1*/
          *(_OWORD *)&v87.m256i_u64[2] = v49; /*0x14064ffe8*/
          v88 = v50; /*0x14064ffef*/
          v89 = v51; /*0x14064fff6*/
          v90 = *(_OWORD *)(v5 + 760); /*0x140650005*/
          v91 = *(_OWORD *)(v5 + 776); /*0x140650014*/
          v98 = v136; /*0x140650029*/
          sub_141684120(v86, &v87, 3768); /*0x14065004b*/
          sub_141684120(v5 + 680, v86, 3768); /*0x14065005c*/
          v12 = v5 + 4448; /*0x140650061*/
          *(_BYTE *)(v5 + 4448) = 0; /*0x140650068*/
LABEL_39:
          *(_OWORD *)(v5 + 976) = *(_OWORD *)(v5 + 928); /*0x140650070*/
          *(_OWORD *)(v5 + 960) = *(_OWORD *)(v5 + 912); /*0x140650088*/
          *(_OWORD *)(v5 + 944) = *(_OWORD *)(v5 + 896); /*0x140650098*/
          v52 = *(_OWORD *)(v5 + 792); /*0x1406500a8*/
          v53 = *(_OWORD *)(v5 + 808); /*0x1406500b0*/
          v54 = *(_OWORD *)(v5 + 824); /*0x1406500b8*/
          *(_OWORD *)(v5 + 992) = *(_OWORD *)(v5 + 776); /*0x1406500c0*/
          *(_OWORD *)(v5 + 1008) = v52; /*0x1406500c8*/
          *(_OWORD *)(v5 + 1024) = v53; /*0x1406500d0*/
          *(_OWORD *)(v5 + 1040) = v54; /*0x1406500d8*/
          *(_OWORD *)(v5 + 1056) = *(_OWORD *)(v5 + 840); /*0x1406500e8*/
          v55 = *(_QWORD *)(v5 + 856); /*0x1406500f0*/
          *(_QWORD *)(v5 + 1072) = v55; /*0x1406500f7*/
          v107 = v13[5]; /*0x140650103*/
          v106 = v13[4]; /*0x14065010f*/
          v56 = *v13; /*0x140650116*/
          v57 = v13[1]; /*0x14065011a*/
          v58 = v13[2]; /*0x14065011f*/
          v105 = v13[3]; /*0x140650129*/
          v104 = v58; /*0x140650130*/
          v103 = v57; /*0x140650137*/
          v102 = v56; /*0x14065013e*/
          v59 = *(__m128i *)(v5 + 864); /*0x140650145*/
          v108[9] = *(__m128i *)(v5 + 880); /*0x140650155*/
          v108[8] = v59; /*0x14065015c*/
          v60 = *(unsigned __int16 *)(v5 + 1072); /*0x140650163*/
          v146 = v13; /*0x140650172*/
          v147 = (_BYTE *)v12; /*0x140650179*/
          if ( v60 == 0xFFFF ) /*0x140650180*/
          {
            v64 = 0; /*0x1406501ee*/
          }
          else
          {
            v61 = v60 + 1; /*0x140650182*/
            v62 = *(_QWORD *)(v5 + 1048); /*0x140650185*/
            v63 = *(_QWORD *)(v5 + 1056); /*0x14065018c*/
            v55 = v63 - v61; /*0x140650196*/
            if ( v63 <= v61 ) /*0x140650199*/
            {
              if ( v63 != v61 ) /*0x140650326*/
LABEL_42:
                sub_1416C2F60(v62, v63, v61, v63, (__int64)&off_14177A960); /*0x1406501aa*/
            }
            else if ( *(char *)(v62 + v61) < -64 ) /*0x1406501a4*/
            {
              goto LABEL_42; /*0x1406501a4*/
            }
            v64 = v61 + v62; /*0x14065032c*/
          }
          v91 = v13[5]; /*0x140650342*/
          v90 = v13[4]; /*0x14065034e*/
          v71 = *v13; /*0x140650355*/
          v72 = v13[1]; /*0x140650359*/
          v73 = v13[2]; /*0x14065035e*/
          v89 = v13[3]; /*0x140650368*/
          v88 = v73; /*0x14065036f*/
          *(_OWORD *)&v87.m256i_u64[2] = v72; /*0x140650376*/
          *(_OWORD *)v87.m256i_i8 = v71; /*0x14065037d*/
          v74 = *(_OWORD *)(v5 + 880); /*0x140650388*/
          v92 = *(_OWORD *)(v5 + 864); /*0x14065038d*/
          v93 = v74; /*0x140650394*/
          *(_OWORD *)(v5 + 1192) = v74; /*0x1406503a2*/
          *(_OWORD *)(v5 + 1176) = v92; /*0x1406503b1*/
          *(_OWORD *)(v5 + 1160) = v91; /*0x1406503c0*/
          *(_OWORD *)(v5 + 1144) = v90; /*0x1406503cf*/
          v75 = *(_OWORD *)v87.m256i_i8; /*0x1406503d7*/
          v76 = *(_OWORD *)&v87.m256i_u64[2]; /*0x1406503de*/
          v77 = v88; /*0x1406503e5*/
          *(_OWORD *)(v5 + 1128) = v89; /*0x1406503f3*/
          *(_OWORD *)(v5 + 1112) = v77; /*0x1406503fb*/
          *(_OWORD *)(v5 + 1096) = v76; /*0x140650403*/
          *(_OWORD *)(v5 + 1080) = v75; /*0x14065040b*/
          *(_QWORD *)(v5 + 1208) = v5 + 944; /*0x140650413*/
          *(_QWORD *)(v5 + 1216) = aRouterCompact; /*0x140650421*/
          *(_QWORD *)(v5 + 1224) = 14; /*0x140650428*/
          *(_QWORD *)(v5 + 1232) = v64; /*0x140650433*/
          *(_QWORD *)(v5 + 1240) = v55; /*0x14065043a*/
          *(_WORD *)(v5 + 1776) = 1; /*0x140650441*/
LABEL_58:
          v142 = v5 + 1080; /*0x14065044b*/
          _u7b__u7b_closure_u7d__u7d__9(v108, v5 + 1080, a3, v12); /*0x140650463*/
          if ( v108[0].m128i_i32[0] == -1 ) /*0x140650470*/
          {
            *v147 = 3; /*0x14065064f*/
            a1->m128i_i64[0] = -1; /*0x140650652*/
            v42 = 7; /*0x140650659*/
            goto LABEL_62; /*0x140650659*/
          }
          v78 = v147; /*0x140650476*/
          v145 = v147; /*0x14065047d*/
          v79 = v146; /*0x140650484*/
          v144 = v146; /*0x14065048b*/
          sub_1405DE4E0(v142); /*0x140650499*/
          v141 = v78; /*0x1406504ad*/
          v140 = v79; /*0x1406504b4*/
          sub_1402C3580(v148 + 992); /*0x1406504bb*/
          v139 = v78; /*0x1406504cf*/
          v138 = v79; /*0x1406504d6*/
          sub_1405E7870(v148 + 944); /*0x1406504dd*/
          *v78 = 1; /*0x1406504e3*/
          v109 = v108[0]; /*0x140650502*/
          v110 = v108[1]; /*0x140650509*/
          v111 = v108[2]; /*0x140650510*/
          v112 = v108[3]; /*0x140650517*/
          v113 = v108[4]; /*0x140650525*/
          v114 = v108[5]; /*0x140650533*/
          v115 = v108[6]; /*0x140650541*/
          v80 = v108[7]; /*0x140650548*/
          sub_1405DD820(v79); /*0x140650552*/
          v123 = v109; /*0x140650574*/
          v124 = v110; /*0x14065057b*/
          v125 = v111; /*0x140650582*/
          v126 = v112; /*0x140650589*/
          v127 = v113; /*0x140650597*/
          v128 = v114; /*0x1406505a5*/
          v129 = v115; /*0x1406505b3*/
          v130 = v80; /*0x1406505ba*/
          v81 = v148; /*0x1406505c1*/
          *(_BYTE *)(v148 + 679) = 0; /*0x1406505c8*/
          *(_BYTE *)(v81 + 677) = 0; /*0x1406505d6*/
          *(_DWORD *)(v81 + 673) = 0; /*0x1406505dd*/
          sub_1405E7870(v81 + 240); /*0x1406505e7*/
        }
        a1[7] = v130; /*0x1406505f4*/
        a1[6] = v129; /*0x1406505ff*/
        a1[5] = v128; /*0x14065060a*/
        a1[4] = v127; /*0x140650615*/
        v82 = v123; /*0x140650619*/
        v83 = v124; /*0x140650620*/
        v84 = v125; /*0x140650627*/
        a1[3] = v126; /*0x140650635*/
        a1[2] = v84; /*0x140650639*/
        a1[1] = v83; /*0x14065063d*/
        *a1 = v82; /*0x140650641*/
        v42 = 1; /*0x140650644*/
        goto LABEL_62; /*0x140650646*/
      }
      a1->m128i_i64[0] = -1; /*0x14064fe70*/
      v42 = 6; /*0x14064fe77*/
LABEL_62:
      *(_BYTE *)(v148 + 672) = v42; /*0x14065065b*/
      return a1;
    case 4LL: /*0x14064f8f4*/
      v16 = *(_QWORD *)(a2 + 680); /*0x14064f9df*/
      v17 = *(__int64 (__fastcall ***)())(v5 + 688); /*0x14064f9e6*/
      goto LABEL_16; /*0x14064f9ed*/
    case 5LL: /*0x14064f8f4*/
      v31 = *(_QWORD *)(a2 + 680); /*0x14064fc81*/
      v32 = *(__int64 (__fastcall ***)())(v5 + 688); /*0x14064fc88*/
      goto LABEL_24; /*0x14064fc88*/
    case 6LL: /*0x14064f8f4*/
      v14 = *(_QWORD *)(a2 + 680); /*0x14064f9cc*/
      v15 = *(__int64 (__fastcall ***)())(a2 + 688); /*0x14064f9d3*/
      goto LABEL_31; /*0x14064f9da*/
    case 7LL: /*0x14064f8f4*/
      v12 = a2 + 4448; /*0x14064f993*/
      v13 = (_OWORD *)(a2 + 680); /*0x14064f9a2*/
      switch ( *(_BYTE *)(a2 + 4448) ) /*0x14064f9b7*/
      {
        case 0: /*0x14064f9b7*/
          goto LABEL_39;
        case 1: /*0x14064f9b7*/
          v143 = a2 + 680; /*0x1406506fc*/
          sub_1416C3400(&off_141768870, a2, a3, v12); /*0x14065070a*/
        case 2: /*0x14064f9b7*/
          v143 = a2 + 680; /*0x1406506e6*/
          sub_1416C3420(&off_141768870, a2, a3, v12); /*0x1406506f4*/
        case 3: /*0x14064f9b7*/
          v147 = (_BYTE *)(a2 + 4448); /*0x14064f9b9*/
          v146 = (_OWORD *)(a2 + 680); /*0x14064f9c0*/
          goto LABEL_58; /*0x14064f9c7*/
      }
  }
}
