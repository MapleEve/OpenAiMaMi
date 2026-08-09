// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x14064e180  size: 0xe72  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   References 'router'; identical size (0xe72) to sibling sub_14064F8A0 -- handler for the
//   /codex/router/v1/responses endpoint (non-compact variant), part of a monomorphized pair with the
//   '-compact' handler below.
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
//   0x141768477  aRouter   "router"
//   0x140642680  __u7b__u7b_closure_u7d__u7d__9
//   0x1405de4e0  sub_1405DE4E0
//   0x1405dd820  sub_1405DD820
//   0x141768480  off_141768480
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_14064E180(__m128i *a1, __int64 a2, void *a3, __int64 a4)
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

  v149 = -2; /*0x14064e1a4*/
  v5 = a2; /*0x14064e1b2*/
  v7 = *(unsigned __int8 *)(a2 + 672); /*0x14064e1b8*/
  v148 = a2; /*0x14064e1cd*/
  switch ( v7 ) /*0x14064e1d4*/
  {
    case 0LL: /*0x14064e1d4*/
      *(_WORD *)(a2 + 675) = 0; /*0x14064e1d6*/
      *(_BYTE *)(a2 + 677) = 0; /*0x14064e1e0*/
      *(_WORD *)(a2 + 678) = 1; /*0x14064e1e8*/
      *(_BYTE *)(a2 + 674) = 1; /*0x14064e1f2*/
      sub_141684120(a2 + 288, a2, 224); /*0x14064e20a*/
      *(_BYTE *)(v5 + 673) = 1; /*0x14064e20f*/
      *(_OWORD *)(v5 + 512) = *(_OWORD *)(v5 + 224); /*0x14064e21f*/
      *(_QWORD *)(v5 + 528) = v5 + 240; /*0x14064e22e*/
      nullsub_1(v8); /*0x14064e235*/
      v9 = sub_140001650(16, 8); /*0x14064e244*/
      if ( !v9 ) /*0x14064e24c*/
        sub_1416C2D31(8, 16); /*0x14064ef7e*/
      v10 = v9; /*0x14064e252*/
      *(_QWORD *)v9 = v5 + 240; /*0x14064e255*/
      *(_BYTE *)(v9 + 8) = 0; /*0x14064e258*/
      *(_QWORD *)(v5 + 680) = v9; /*0x14064e25c*/
      v11 = &off_1417B6298; /*0x14064e263*/
      *(_QWORD *)(v5 + 688) = &off_1417B6298; /*0x14064e26a*/
      goto LABEL_9; /*0x14064e271*/
    case 1LL: /*0x14064e1d4*/
      sub_1416C3400(&off_141769280, a2, a3, a4); /*0x14064efbf*/
    case 2LL: /*0x14064e1d4*/
      sub_1416C3420(&off_141769280, a2, a3, a4); /*0x14064efb1*/
    case 3LL: /*0x14064e1d4*/
      v10 = *(_QWORD *)(a2 + 680); /*0x14064e2d2*/
      v11 = *(__int64 (__fastcall ***)())(v5 + 688); /*0x14064e2d9*/
LABEL_9:
      ((void (__fastcall *)(__m256i *, __int64, void *))v11[3])(&v87, v10, a3); /*0x14064e2e0*/
      if ( !v87.m256i_i64[0] ) /*0x14064e2f6*/
      {
        a1->m128i_i64[0] = -1; /*0x14064eac0*/
        v42 = 3; /*0x14064eac7*/
        goto LABEL_62; /*0x14064eac9*/
      }
      v122 = v88; /*0x14064e311*/
      v121 = v87; /*0x14064e318*/
      v147 = *(_BYTE **)(v148 + 680); /*0x14064e334*/
      v146 = *(_OWORD **)(v148 + 688); /*0x14064e342*/
      if ( *(_QWORD *)v146 ) /*0x14064e349*/
        (*(void (__fastcall **)(_BYTE *))v146)(v147); /*0x14064e358*/
      v18 = v147; /*0x14064e35b*/
      v19 = *((_QWORD *)v146 + 1); /*0x14064e369*/
      if ( v19 ) /*0x14064e370*/
        sub_140001660(v147, v19, *((_QWORD *)v146 + 2)); /*0x14064e376*/
      v20 = v148; /*0x14064e37b*/
      *(_BYTE *)(v148 + 677) = 1; /*0x14064e382*/
      v21 = *(_OWORD *)&v121.m256i_u64[2]; /*0x14064e390*/
      v22 = v122; /*0x14064e397*/
      *(_OWORD *)(v20 + 536) = *(_OWORD *)v121.m256i_i8; /*0x14064e39e*/
      *(_OWORD *)(v20 + 552) = v21; /*0x14064e3a5*/
      *(_OWORD *)(v20 + 568) = v22; /*0x14064e3ac*/
      nullsub_1(v18); /*0x14064e3b3*/
      v23 = sub_140001650(16, 8); /*0x14064e3c2*/
      if ( !v23 ) /*0x14064e3ca*/
        sub_1416C2D31(8, 16); /*0x14064efa2*/
      v16 = v23; /*0x14064e3d0*/
      *(_QWORD *)v23 = v20 + 288; /*0x14064e3da*/
      *(_BYTE *)(v23 + 8) = 0; /*0x14064e3dd*/
      *(_QWORD *)(v20 + 680) = v23; /*0x14064e3e1*/
      v17 = &off_141753878; /*0x14064e3e8*/
      *(_QWORD *)(v20 + 688) = &off_141753878; /*0x14064e3ef*/
LABEL_16:
      ((void (__fastcall *)(__m256i *, __int64, void *))v17[3])(&v87, v16, a3); /*0x14064e3f6*/
      if ( v87.m256i_i8[0] == -1 ) /*0x14064e40b*/
      {
        a1->m128i_i64[0] = -1; /*0x14064eab2*/
        v42 = 4; /*0x14064eab9*/
        goto LABEL_62; /*0x14064eabb*/
      }
      v135 = v91; /*0x14064e418*/
      v134 = v90; /*0x14064e426*/
      v133 = v89; /*0x14064e449*/
      v132 = v88; /*0x14064e450*/
      v131 = v87; /*0x14064e457*/
      v147 = *(_BYTE **)(v148 + 680); /*0x14064e473*/
      v146 = *(_OWORD **)(v148 + 688); /*0x14064e481*/
      if ( *(_QWORD *)v146 ) /*0x14064e488*/
        (*(void (__fastcall **)(_BYTE *))v146)(v147); /*0x14064e497*/
      v24 = v147; /*0x14064e49a*/
      v25 = *((_QWORD *)v146 + 1); /*0x14064e4a8*/
      if ( v25 ) /*0x14064e4af*/
        sub_140001660(v147, v25, *((_QWORD *)v146 + 2)); /*0x14064e4b5*/
      v26 = v148; /*0x14064e4ba*/
      *(_BYTE *)(v148 + 676) = 1; /*0x14064e4c1*/
      v27 = *(_OWORD *)&v131.m256i_u64[2]; /*0x14064e4cf*/
      v28 = v132; /*0x14064e4d6*/
      v29 = v133; /*0x14064e4dd*/
      *(_OWORD *)(v26 + 584) = *(_OWORD *)v131.m256i_i8; /*0x14064e4e4*/
      *(_OWORD *)(v26 + 600) = v27; /*0x14064e4eb*/
      *(_OWORD *)(v26 + 616) = v28; /*0x14064e4f2*/
      *(_OWORD *)(v26 + 632) = v29; /*0x14064e4f9*/
      *(_OWORD *)(v26 + 648) = v134; /*0x14064e507*/
      *(_QWORD *)(v26 + 664) = v135; /*0x14064e515*/
      nullsub_1(v24); /*0x14064e51c*/
      v30 = sub_140001650(16, 8); /*0x14064e52b*/
      if ( !v30 ) /*0x14064e533*/
        sub_1416C2D31(8, 16); /*0x14064ef6c*/
      v31 = v30; /*0x14064e539*/
      *(_QWORD *)v30 = v26 + 288; /*0x14064e543*/
      *(_BYTE *)(v30 + 8) = 0; /*0x14064e546*/
      *(_QWORD *)(v26 + 680) = v30; /*0x14064e54a*/
      v32 = &off_1417908D0; /*0x14064e551*/
      *(_QWORD *)(v26 + 688) = &off_1417908D0; /*0x14064e558*/
LABEL_24:
      ((void (__fastcall *)(__m256i *, __int64, void *))v32[3])(&v87, v31, a3); /*0x14064e56f*/
      if ( v87.m256i_i32[0] == -1 ) /*0x14064e584*/
      {
        a1->m128i_i64[0] = -1; /*0x14064eaa4*/
        v42 = 5; /*0x14064eaab*/
        goto LABEL_62; /*0x14064eaad*/
      }
      v120 = v91; /*0x14064e591*/
      v119 = v90; /*0x14064e59f*/
      v118 = v89; /*0x14064e5c2*/
      v117 = v88; /*0x14064e5c9*/
      v116 = v87; /*0x14064e5d0*/
      v147 = *(_BYTE **)(v148 + 680); /*0x14064e5ec*/
      v146 = *(_OWORD **)(v148 + 688); /*0x14064e5fa*/
      if ( *(_QWORD *)v146 ) /*0x14064e601*/
        (*(void (__fastcall **)(_BYTE *))v146)(v147); /*0x14064e610*/
      v33 = *((_QWORD *)v146 + 1); /*0x14064e621*/
      if ( v33 ) /*0x14064e628*/
        sub_140001660(v147, v33, *((_QWORD *)v146 + 2)); /*0x14064e62e*/
      v34 = v148; /*0x14064e633*/
      *(_BYTE *)(v148 + 675) = 1; /*0x14064e63a*/
      v35 = *(_OWORD *)&v116.m256i_u64[2]; /*0x14064e649*/
      v36 = v117; /*0x14064e650*/
      v37 = v118; /*0x14064e657*/
      *(_OWORD *)(v34 + 696) = *(_OWORD *)v116.m256i_i8; /*0x14064e65e*/
      *(_OWORD *)(v34 + 712) = v35; /*0x14064e666*/
      *(_OWORD *)(v34 + 728) = v36; /*0x14064e66e*/
      *(_OWORD *)(v34 + 744) = v37; /*0x14064e676*/
      *(_OWORD *)(v34 + 760) = v119; /*0x14064e685*/
      *(_OWORD *)(v34 + 776) = v120; /*0x14064e694*/
      *(_BYTE *)(v34 + 674) = 0; /*0x14064e69c*/
      sub_141684120(&v87, v34 + 288, 224); /*0x14064e6b8*/
      *(_BYTE *)(v34 + 673) = 0; /*0x14064e6bd*/
      v38 = *(_QWORD *)(v34 + 528); /*0x14064e6c5*/
      *(_OWORD *)&v99.m256i_u64[1] = *(_OWORD *)(v34 + 512); /*0x14064e6d4*/
      v99.m256i_i64[3] = v38; /*0x14064e6db*/
      v101 = 0; /*0x14064e6e2*/
      nullsub_1(v39); /*0x14064e6e9*/
      v40 = sub_140001650(512, 8); /*0x14064e6f8*/
      if ( !v40 ) /*0x14064e700*/
        sub_1416C2D31(8, 512); /*0x14064ef90*/
      v14 = v40; /*0x14064e706*/
      sub_141684120(v40, &v87, 512); /*0x14064e719*/
      *(_QWORD *)(v34 + 680) = v14; /*0x14064e71e*/
      v15 = &off_14177CE48; /*0x14064e725*/
      *(_QWORD *)(v34 + 688) = &off_14177CE48; /*0x14064e72c*/
LABEL_31:
      ((void (__fastcall *)(__m256i *, __int64, void *))v15[3])(&v87, v14, a3); /*0x14064e733*/
      v41 = v87.m256i_i8[0]; /*0x14064e744*/
      if ( v87.m256i_i8[0] != -2 ) /*0x14064e74e*/
      {
        *(_OWORD *)&v137[15] = *(_OWORD *)&v87.m256i_u64[2]; /*0x14064e76c*/
        *(_OWORD *)v137 = *(_OWORD *)&v87.m256i_i8[1]; /*0x14064e773*/
        v147 = *(_BYTE **)(v148 + 680); /*0x14064e788*/
        v146 = *(_OWORD **)(v148 + 688); /*0x14064e796*/
        if ( *(_QWORD *)v146 ) /*0x14064e79d*/
          (*(void (__fastcall **)(_BYTE *))v146)(v147); /*0x14064e7ac*/
        v43 = *((_QWORD *)v146 + 1); /*0x14064e7bd*/
        if ( v43 ) /*0x14064e7c4*/
          sub_140001660(v147, v43, *((_QWORD *)v146 + 2)); /*0x14064e7ca*/
        v5 = v148; /*0x14064e7d2*/
        if ( v41 == -1 ) /*0x14064e7d9*/
        {
          v87.m256i_i64[2] = *(_QWORD *)&v137[23]; /*0x14064eadc*/
          *(_OWORD *)v87.m256i_i8 = *(_OWORD *)&v137[7]; /*0x14064eaea*/
          sub_140FA3720(&v123, &v87); /*0x14064eaff*/
          v65 = v148; /*0x14064eb05*/
          *(_BYTE *)(v148 + 679) = 0; /*0x14064eb0c*/
          sub_140017140(v65 + 696); /*0x14064eb1a*/
          v66 = v148; /*0x14064eb20*/
          *(_BYTE *)(v148 + 675) = 0; /*0x14064eb27*/
          sub_1402C3580(v66 + 584); /*0x14064eb35*/
          v67 = v148; /*0x14064eb3b*/
          *(_BYTE *)(v148 + 676) = 0; /*0x14064eb42*/
          sub_1405E7870(v67 + 536); /*0x14064eb50*/
          v68 = v148; /*0x14064eb56*/
          *(_BYTE *)(v148 + 677) = 0; /*0x14064eb5d*/
          if ( *(_BYTE *)(v68 + 673) ) /*0x14064eb64*/
          {
            v147 = *(_BYTE **)(v68 + 512); /*0x14064eb74*/
            v146 = *(_OWORD **)(v68 + 520); /*0x14064eb82*/
            if ( *(_QWORD *)v146 ) /*0x14064eb89*/
              (*(void (__fastcall **)(_BYTE *))v146)(v147); /*0x14064eb98*/
            v69 = *((_QWORD *)v146 + 1); /*0x14064eba9*/
            v68 = v148; /*0x14064ebb0*/
            if ( v69 ) /*0x14064ebb7*/
              sub_140001660(v147, v69, *((_QWORD *)v146 + 2)); /*0x14064ebbd*/
          }
          *(_BYTE *)(v68 + 673) = 0; /*0x14064ebc2*/
          if ( *(_BYTE *)(v68 + 674) ) /*0x14064ebc9*/
            sub_1405E15C0(v148 + 288); /*0x14064ebe0*/
          v70 = v148; /*0x14064ebe6*/
          *(_BYTE *)(v148 + 674) = 0; /*0x14064ebed*/
          sub_1405E7870(v70 + 240); /*0x14064ebfb*/
        }
        else
        {
          v13 = (_OWORD *)(v148 + 680); /*0x14064e7df*/
          *(_OWORD *)&v136.m256i_u64[2] = *(_OWORD *)&v137[15]; /*0x14064e7ed*/
          *(_OWORD *)&v136.m256i_i8[1] = *(_OWORD *)v137; /*0x14064e7fb*/
          v136.m256i_i8[0] = v41; /*0x14064e802*/
          *(_BYTE *)(v148 + 679) = 0; /*0x14064e808*/
          *(_DWORD *)(v5 + 675) = 0; /*0x14064e810*/
          v44 = *(_OWORD *)(v5 + 536); /*0x14064e81b*/
          v45 = *(_OWORD *)(v5 + 552); /*0x14064e823*/
          v100 = *(_OWORD *)(v5 + 568); /*0x14064e833*/
          *(_OWORD *)&v99.m256i_u64[2] = v45; /*0x14064e83a*/
          *(_OWORD *)v99.m256i_i8 = v44; /*0x14064e841*/
          v97 = *(_QWORD *)(v5 + 664); /*0x14064e84f*/
          v96 = *(_OWORD *)(v5 + 648); /*0x14064e85e*/
          v46 = *(_OWORD *)(v5 + 584); /*0x14064e865*/
          v47 = *(_OWORD *)(v5 + 600); /*0x14064e86d*/
          v48 = *(_OWORD *)(v5 + 616); /*0x14064e875*/
          v95 = *(_OWORD *)(v5 + 632); /*0x14064e885*/
          v94 = v48; /*0x14064e88c*/
          v93 = v47; /*0x14064e893*/
          v92 = v46; /*0x14064e89a*/
          v49 = *(_OWORD *)(v5 + 712); /*0x14064e8a9*/
          v50 = *(_OWORD *)(v5 + 728); /*0x14064e8b1*/
          v51 = *(_OWORD *)(v5 + 744); /*0x14064e8b9*/
          *(_OWORD *)v87.m256i_i8 = *(_OWORD *)(v5 + 696); /*0x14064e8c1*/
          *(_OWORD *)&v87.m256i_u64[2] = v49; /*0x14064e8c8*/
          v88 = v50; /*0x14064e8cf*/
          v89 = v51; /*0x14064e8d6*/
          v90 = *(_OWORD *)(v5 + 760); /*0x14064e8e5*/
          v91 = *(_OWORD *)(v5 + 776); /*0x14064e8f4*/
          v98 = v136; /*0x14064e909*/
          sub_141684120(v86, &v87, 3768); /*0x14064e92b*/
          sub_141684120(v5 + 680, v86, 3768); /*0x14064e93c*/
          v12 = v5 + 4448; /*0x14064e941*/
          *(_BYTE *)(v5 + 4448) = 0; /*0x14064e948*/
LABEL_39:
          *(_OWORD *)(v5 + 976) = *(_OWORD *)(v5 + 928); /*0x14064e950*/
          *(_OWORD *)(v5 + 960) = *(_OWORD *)(v5 + 912); /*0x14064e968*/
          *(_OWORD *)(v5 + 944) = *(_OWORD *)(v5 + 896); /*0x14064e978*/
          v52 = *(_OWORD *)(v5 + 792); /*0x14064e988*/
          v53 = *(_OWORD *)(v5 + 808); /*0x14064e990*/
          v54 = *(_OWORD *)(v5 + 824); /*0x14064e998*/
          *(_OWORD *)(v5 + 992) = *(_OWORD *)(v5 + 776); /*0x14064e9a0*/
          *(_OWORD *)(v5 + 1008) = v52; /*0x14064e9a8*/
          *(_OWORD *)(v5 + 1024) = v53; /*0x14064e9b0*/
          *(_OWORD *)(v5 + 1040) = v54; /*0x14064e9b8*/
          *(_OWORD *)(v5 + 1056) = *(_OWORD *)(v5 + 840); /*0x14064e9c8*/
          v55 = *(_QWORD *)(v5 + 856); /*0x14064e9d0*/
          *(_QWORD *)(v5 + 1072) = v55; /*0x14064e9d7*/
          v107 = v13[5]; /*0x14064e9e3*/
          v106 = v13[4]; /*0x14064e9ef*/
          v56 = *v13; /*0x14064e9f6*/
          v57 = v13[1]; /*0x14064e9fa*/
          v58 = v13[2]; /*0x14064e9ff*/
          v105 = v13[3]; /*0x14064ea09*/
          v104 = v58; /*0x14064ea10*/
          v103 = v57; /*0x14064ea17*/
          v102 = v56; /*0x14064ea1e*/
          v59 = *(__m128i *)(v5 + 864); /*0x14064ea25*/
          v108[9] = *(__m128i *)(v5 + 880); /*0x14064ea35*/
          v108[8] = v59; /*0x14064ea3c*/
          v60 = *(unsigned __int16 *)(v5 + 1072); /*0x14064ea43*/
          v146 = v13; /*0x14064ea52*/
          v147 = (_BYTE *)v12; /*0x14064ea59*/
          if ( v60 == 0xFFFF ) /*0x14064ea60*/
          {
            v64 = 0; /*0x14064eace*/
          }
          else
          {
            v61 = v60 + 1; /*0x14064ea62*/
            v62 = *(_QWORD *)(v5 + 1048); /*0x14064ea65*/
            v63 = *(_QWORD *)(v5 + 1056); /*0x14064ea6c*/
            v55 = v63 - v61; /*0x14064ea76*/
            if ( v63 <= v61 ) /*0x14064ea79*/
            {
              if ( v63 != v61 ) /*0x14064ec06*/
LABEL_42:
                sub_1416C2F60(v62, v63, v61, v63, (__int64)&off_14177A960); /*0x14064ea8a*/
            }
            else if ( *(char *)(v62 + v61) < -64 ) /*0x14064ea84*/
            {
              goto LABEL_42; /*0x14064ea84*/
            }
            v64 = v61 + v62; /*0x14064ec0c*/
          }
          v91 = v13[5]; /*0x14064ec22*/
          v90 = v13[4]; /*0x14064ec2e*/
          v71 = *v13; /*0x14064ec35*/
          v72 = v13[1]; /*0x14064ec39*/
          v73 = v13[2]; /*0x14064ec3e*/
          v89 = v13[3]; /*0x14064ec48*/
          v88 = v73; /*0x14064ec4f*/
          *(_OWORD *)&v87.m256i_u64[2] = v72; /*0x14064ec56*/
          *(_OWORD *)v87.m256i_i8 = v71; /*0x14064ec5d*/
          v74 = *(_OWORD *)(v5 + 880); /*0x14064ec68*/
          v92 = *(_OWORD *)(v5 + 864); /*0x14064ec6d*/
          v93 = v74; /*0x14064ec74*/
          *(_OWORD *)(v5 + 1192) = v74; /*0x14064ec82*/
          *(_OWORD *)(v5 + 1176) = v92; /*0x14064ec91*/
          *(_OWORD *)(v5 + 1160) = v91; /*0x14064eca0*/
          *(_OWORD *)(v5 + 1144) = v90; /*0x14064ecaf*/
          v75 = *(_OWORD *)v87.m256i_i8; /*0x14064ecb7*/
          v76 = *(_OWORD *)&v87.m256i_u64[2]; /*0x14064ecbe*/
          v77 = v88; /*0x14064ecc5*/
          *(_OWORD *)(v5 + 1128) = v89; /*0x14064ecd3*/
          *(_OWORD *)(v5 + 1112) = v77; /*0x14064ecdb*/
          *(_OWORD *)(v5 + 1096) = v76; /*0x14064ece3*/
          *(_OWORD *)(v5 + 1080) = v75; /*0x14064eceb*/
          *(_QWORD *)(v5 + 1208) = v5 + 944; /*0x14064ecf3*/
          *(_QWORD *)(v5 + 1216) = aRouter; /*0x14064ed01*/
          *(_QWORD *)(v5 + 1224) = 6; /*0x14064ed08*/
          *(_QWORD *)(v5 + 1232) = v64; /*0x14064ed13*/
          *(_QWORD *)(v5 + 1240) = v55; /*0x14064ed1a*/
          *(_WORD *)(v5 + 1776) = 0; /*0x14064ed21*/
LABEL_58:
          v142 = v5 + 1080; /*0x14064ed2b*/
          _u7b__u7b_closure_u7d__u7d__9(v108, v5 + 1080, a3, v12); /*0x14064ed43*/
          if ( v108[0].m128i_i32[0] == -1 ) /*0x14064ed50*/
          {
            *v147 = 3; /*0x14064ef2f*/
            a1->m128i_i64[0] = -1; /*0x14064ef32*/
            v42 = 7; /*0x14064ef39*/
            goto LABEL_62; /*0x14064ef39*/
          }
          v78 = v147; /*0x14064ed56*/
          v145 = v147; /*0x14064ed5d*/
          v79 = v146; /*0x14064ed64*/
          v144 = v146; /*0x14064ed6b*/
          sub_1405DE4E0(v142); /*0x14064ed79*/
          v141 = v78; /*0x14064ed8d*/
          v140 = v79; /*0x14064ed94*/
          sub_1402C3580(v148 + 992); /*0x14064ed9b*/
          v139 = v78; /*0x14064edaf*/
          v138 = v79; /*0x14064edb6*/
          sub_1405E7870(v148 + 944); /*0x14064edbd*/
          *v78 = 1; /*0x14064edc3*/
          v109 = v108[0]; /*0x14064ede2*/
          v110 = v108[1]; /*0x14064ede9*/
          v111 = v108[2]; /*0x14064edf0*/
          v112 = v108[3]; /*0x14064edf7*/
          v113 = v108[4]; /*0x14064ee05*/
          v114 = v108[5]; /*0x14064ee13*/
          v115 = v108[6]; /*0x14064ee21*/
          v80 = v108[7]; /*0x14064ee28*/
          sub_1405DD820(v79); /*0x14064ee32*/
          v123 = v109; /*0x14064ee54*/
          v124 = v110; /*0x14064ee5b*/
          v125 = v111; /*0x14064ee62*/
          v126 = v112; /*0x14064ee69*/
          v127 = v113; /*0x14064ee77*/
          v128 = v114; /*0x14064ee85*/
          v129 = v115; /*0x14064ee93*/
          v130 = v80; /*0x14064ee9a*/
          v81 = v148; /*0x14064eea1*/
          *(_BYTE *)(v148 + 679) = 0; /*0x14064eea8*/
          *(_BYTE *)(v81 + 677) = 0; /*0x14064eeb6*/
          *(_DWORD *)(v81 + 673) = 0; /*0x14064eebd*/
          sub_1405E7870(v81 + 240); /*0x14064eec7*/
        }
        a1[7] = v130; /*0x14064eed4*/
        a1[6] = v129; /*0x14064eedf*/
        a1[5] = v128; /*0x14064eeea*/
        a1[4] = v127; /*0x14064eef5*/
        v82 = v123; /*0x14064eef9*/
        v83 = v124; /*0x14064ef00*/
        v84 = v125; /*0x14064ef07*/
        a1[3] = v126; /*0x14064ef15*/
        a1[2] = v84; /*0x14064ef19*/
        a1[1] = v83; /*0x14064ef1d*/
        *a1 = v82; /*0x14064ef21*/
        v42 = 1; /*0x14064ef24*/
        goto LABEL_62; /*0x14064ef26*/
      }
      a1->m128i_i64[0] = -1; /*0x14064e750*/
      v42 = 6; /*0x14064e757*/
LABEL_62:
      *(_BYTE *)(v148 + 672) = v42; /*0x14064ef3b*/
      return a1;
    case 4LL: /*0x14064e1d4*/
      v16 = *(_QWORD *)(a2 + 680); /*0x14064e2bf*/
      v17 = *(__int64 (__fastcall ***)())(v5 + 688); /*0x14064e2c6*/
      goto LABEL_16; /*0x14064e2cd*/
    case 5LL: /*0x14064e1d4*/
      v31 = *(_QWORD *)(a2 + 680); /*0x14064e561*/
      v32 = *(__int64 (__fastcall ***)())(v5 + 688); /*0x14064e568*/
      goto LABEL_24; /*0x14064e568*/
    case 6LL: /*0x14064e1d4*/
      v14 = *(_QWORD *)(a2 + 680); /*0x14064e2ac*/
      v15 = *(__int64 (__fastcall ***)())(a2 + 688); /*0x14064e2b3*/
      goto LABEL_31; /*0x14064e2ba*/
    case 7LL: /*0x14064e1d4*/
      v12 = a2 + 4448; /*0x14064e273*/
      v13 = (_OWORD *)(a2 + 680); /*0x14064e282*/
      switch ( *(_BYTE *)(a2 + 4448) ) /*0x14064e297*/
      {
        case 0: /*0x14064e297*/
          goto LABEL_39;
        case 1: /*0x14064e297*/
          v143 = a2 + 680; /*0x14064efdc*/
          sub_1416C3400(&off_141768480, a2, a3, v12); /*0x14064efea*/
        case 2: /*0x14064e297*/
          v143 = a2 + 680; /*0x14064efc6*/
          sub_1416C3420(&off_141768480, a2, a3, v12); /*0x14064efd4*/
        case 3: /*0x14064e297*/
          v147 = (_BYTE *)(a2 + 4448); /*0x14064e299*/
          v146 = (_OWORD *)(a2 + 680); /*0x14064e2a0*/
          goto LABEL_58; /*0x14064e2a7*/
      }
  }
}
