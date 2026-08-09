// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x140649d90  size: 0x9fa  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   No string refs; identical size (0x9fa) to sibling sub_140648CE0 -- see that entry; the two are
//   almost certainly the same generic handler-wrapper body monomorphized for two distinct route/provider
//   type parameters.
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
//   0x1417908d0  off_1417908D0
//   0x1417b6258  off_1417B6258
//   0x140641240  __u7b__u7b_closure_u7d__u7d__11
//   0x1405de2e0  sub_1405DE2E0
//   0x1405e7870  sub_1405E7870
//   0x1405dde20  sub_1405DDE20
//   0x140faf540  sub_140FAF540
//   0x140017140  sub_140017140
//   0x1405e15c0  sub_1405E15C0
//   0x141768848  off_141768848
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140649D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(); // rax
  _BYTE *v12; // rdx
  _OWORD *v13; // r15
  __int64 v14; // rbx
  __int64 (__fastcall **v15)(); // rax
  _BYTE *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 (__fastcall **v23)(); // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // al
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int128 v43; // xmm3
  __int128 v44; // xmm1
  __int128 v45; // xmm6
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  _OWORD v56[9]; // [rsp+20h] [rbp-60h] BYREF
  __m256i v57; // [rsp+B0h] [rbp+30h]
  __int128 v58; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 v59; // [rsp+2C8h] [rbp+248h]
  __int128 v60; // [rsp+2D8h] [rbp+258h]
  __int128 v61; // [rsp+2E8h] [rbp+268h]
  __int128 v62; // [rsp+2F8h] [rbp+278h]
  __int128 v63; // [rsp+308h] [rbp+288h]
  __int128 v64; // [rsp+318h] [rbp+298h]
  __int128 v65; // [rsp+328h] [rbp+2A8h]
  __int128 v66; // [rsp+398h] [rbp+318h]
  char v67; // [rsp+438h] [rbp+3B8h]
  __int128 v68; // [rsp+440h] [rbp+3C0h]
  __int128 v69; // [rsp+450h] [rbp+3D0h]
  __int128 v70; // [rsp+460h] [rbp+3E0h]
  __int128 v71; // [rsp+470h] [rbp+3F0h]
  __int128 v72; // [rsp+480h] [rbp+400h]
  __int128 v73; // [rsp+490h] [rbp+410h]
  __int128 v74; // [rsp+4A0h] [rbp+420h]
  __int128 v75; // [rsp+4B0h] [rbp+430h]
  __int128 v76; // [rsp+4C0h] [rbp+440h]
  __int128 v77; // [rsp+4D0h] [rbp+450h]
  __int128 v78; // [rsp+4E0h] [rbp+460h]
  __int128 v79; // [rsp+4F0h] [rbp+470h]
  __int128 v80; // [rsp+500h] [rbp+480h]
  __int128 v81; // [rsp+510h] [rbp+490h]
  __int128 v82; // [rsp+520h] [rbp+4A0h]
  __int128 v83; // [rsp+530h] [rbp+4B0h]
  __int128 v84; // [rsp+540h] [rbp+4C0h] BYREF
  __int128 v85; // [rsp+550h] [rbp+4D0h]
  __int128 v86; // [rsp+560h] [rbp+4E0h]
  __int128 v87; // [rsp+570h] [rbp+4F0h]
  __int128 v88; // [rsp+580h] [rbp+500h]
  __int128 v89; // [rsp+590h] [rbp+510h]
  __int128 v90; // [rsp+5A0h] [rbp+520h]
  __int128 v91; // [rsp+5B0h] [rbp+530h]
  __int128 v92; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v93; // [rsp+5D0h] [rbp+550h]
  __m256i v94; // [rsp+5E0h] [rbp+560h]
  __int64 v95; // [rsp+600h] [rbp+580h]
  __int64 v96; // [rsp+608h] [rbp+588h]
  __int64 v97; // [rsp+610h] [rbp+590h]
  __int64 v98; // [rsp+618h] [rbp+598h]
  _OWORD *v99; // [rsp+620h] [rbp+5A0h]
  _BYTE *v100; // [rsp+628h] [rbp+5A8h]
  __int64 v101; // [rsp+630h] [rbp+5B0h]
  __int64 v102; // [rsp+638h] [rbp+5B8h]

  v102 = -2; /*0x140649dae*/
  v5 = a2; /*0x140649dbc*/
  v7 = *(unsigned __int8 *)(a2 + 584); /*0x140649dc2*/
  v101 = a2; /*0x140649dd7*/
  switch ( v7 ) /*0x140649dde*/
  {
    case 0LL: /*0x140649dde*/
      *(_DWORD *)(a2 + 587) = 0x10000; /*0x140649de0*/
      *(_BYTE *)(a2 + 586) = 1; /*0x140649deb*/
      sub_141684120(a2 + 288, a2, 224); /*0x140649e03*/
      *(_BYTE *)(v5 + 585) = 1; /*0x140649e08*/
      *(_OWORD *)(v5 + 512) = *(_OWORD *)(v5 + 224); /*0x140649e18*/
      *(_QWORD *)(v5 + 528) = v5 + 240; /*0x140649e27*/
      nullsub_1(v8); /*0x140649e2e*/
      v9 = sub_140001650(16, 8); /*0x140649e3d*/
      if ( !v9 ) /*0x140649e45*/
        sub_1416C2D31(8, 16); /*0x14064a73a*/
      v10 = v9; /*0x140649e4b*/
      *(_QWORD *)v9 = v5 + 240; /*0x140649e4e*/
      *(_BYTE *)(v9 + 8) = 0; /*0x140649e51*/
      *(_QWORD *)(v5 + 592) = v9; /*0x140649e55*/
      v11 = &off_1417B6298; /*0x140649e5c*/
      *(_QWORD *)(v5 + 600) = &off_1417B6298; /*0x140649e63*/
      goto LABEL_7; /*0x140649e6a*/
    case 1LL: /*0x140649dde*/
      sub_1416C3400(&off_141769280, a2, a3, a4); /*0x14064a757*/
    case 2LL: /*0x140649dde*/
      sub_1416C3420(&off_141769280, a2, a3, a4); /*0x14064a749*/
    case 3LL: /*0x140649dde*/
      v10 = *(_QWORD *)(a2 + 592); /*0x140649eaa*/
      v11 = *(__int64 (__fastcall ***)())(v5 + 600); /*0x140649eb1*/
LABEL_7:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v11[3])(&v58, v10, a3); /*0x140649eb8*/
      if ( !(_QWORD)v58 ) /*0x140649ece*/
      {
        *(_QWORD *)a1 = -1; /*0x14064a3f6*/
        v31 = 3; /*0x14064a3fd*/
        goto LABEL_46; /*0x14064a3ff*/
      }
      v83 = v60; /*0x140649ee9*/
      v82 = v59; /*0x140649ef0*/
      v81 = v58; /*0x140649ef7*/
      v100 = *(_BYTE **)(v101 + 592); /*0x140649f0c*/
      v99 = *(_OWORD **)(v101 + 600); /*0x140649f1a*/
      if ( *(_QWORD *)v99 ) /*0x140649f21*/
        (*(void (__fastcall **)(_BYTE *))v99)(v100); /*0x140649f30*/
      v16 = v100; /*0x140649f33*/
      v17 = *((_QWORD *)v99 + 1); /*0x140649f41*/
      if ( v17 ) /*0x140649f48*/
        sub_140001660(v100, v17, *((_QWORD *)v99 + 2)); /*0x140649f4e*/
      v18 = v101; /*0x140649f53*/
      *(_BYTE *)(v101 + 588) = 1; /*0x140649f5a*/
      v19 = v82; /*0x140649f68*/
      v20 = v83; /*0x140649f6f*/
      *(_OWORD *)(v18 + 536) = v81; /*0x140649f76*/
      *(_OWORD *)(v18 + 552) = v19; /*0x140649f7d*/
      *(_OWORD *)(v18 + 568) = v20; /*0x140649f84*/
      nullsub_1(v16); /*0x140649f8b*/
      v21 = sub_140001650(16, 8); /*0x140649f9a*/
      if ( !v21 ) /*0x140649fa2*/
        sub_1416C2D31(8, 16); /*0x14064a728*/
      v22 = v21; /*0x140649fa8*/
      *(_QWORD *)v21 = v18 + 288; /*0x140649fb2*/
      *(_BYTE *)(v21 + 8) = 0; /*0x140649fb5*/
      *(_QWORD *)(v18 + 592) = v21; /*0x140649fb9*/
      v23 = &off_1417908D0; /*0x140649fc0*/
      *(_QWORD *)(v18 + 600) = &off_1417908D0; /*0x140649fc7*/
LABEL_15:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v23[3])(&v58, v22, a3); /*0x140649fde*/
      if ( (_DWORD)v58 == -1 ) /*0x140649ff3*/
      {
        *(_QWORD *)a1 = -1; /*0x14064a3e8*/
        v31 = 4; /*0x14064a3ef*/
        goto LABEL_46; /*0x14064a3f1*/
      }
      v80 = v63; /*0x14064a000*/
      v79 = v62; /*0x14064a00e*/
      v78 = v61; /*0x14064a031*/
      v77 = v60; /*0x14064a038*/
      v76 = v59; /*0x14064a03f*/
      v75 = v58; /*0x14064a046*/
      v100 = *(_BYTE **)(v101 + 592); /*0x14064a05b*/
      v99 = *(_OWORD **)(v101 + 600); /*0x14064a069*/
      if ( *(_QWORD *)v99 ) /*0x14064a070*/
        (*(void (__fastcall **)(_BYTE *))v99)(v100); /*0x14064a07f*/
      v24 = *((_QWORD *)v99 + 1); /*0x14064a090*/
      if ( v24 ) /*0x14064a097*/
        sub_140001660(v100, v24, *((_QWORD *)v99 + 2)); /*0x14064a09d*/
      v25 = v101; /*0x14064a0a2*/
      *(_BYTE *)(v101 + 587) = 1; /*0x14064a0a9*/
      v26 = v76; /*0x14064a0b8*/
      v27 = v77; /*0x14064a0bf*/
      v28 = v78; /*0x14064a0c6*/
      *(_OWORD *)(v25 + 608) = v75; /*0x14064a0cd*/
      *(_OWORD *)(v25 + 624) = v26; /*0x14064a0d5*/
      *(_OWORD *)(v25 + 640) = v27; /*0x14064a0dd*/
      *(_OWORD *)(v25 + 656) = v28; /*0x14064a0e5*/
      *(_OWORD *)(v25 + 672) = v79; /*0x14064a0f4*/
      *(_OWORD *)(v25 + 688) = v80; /*0x14064a103*/
      *(_BYTE *)(v25 + 586) = 0; /*0x14064a10b*/
      sub_141684120(&v58, v25 + 288, 224); /*0x14064a127*/
      *(_BYTE *)(v25 + 585) = 0; /*0x14064a12c*/
      v66 = *(_OWORD *)(v25 + 512); /*0x14064a13c*/
      v67 = 0; /*0x14064a143*/
      nullsub_1(v29); /*0x14064a14a*/
      v30 = sub_140001650(392, 8); /*0x14064a159*/
      if ( !v30 ) /*0x14064a161*/
        sub_1416C2D31(8, 392); /*0x14064a716*/
      v14 = v30; /*0x14064a167*/
      sub_141684120(v30, &v58, 392); /*0x14064a17a*/
      *(_QWORD *)(v25 + 592) = v14; /*0x14064a17f*/
      v15 = &off_1417B6258; /*0x14064a186*/
      *(_QWORD *)(v25 + 600) = &off_1417B6258; /*0x14064a18d*/
LABEL_22:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v15[3])(&v58, v14, a3); /*0x14064a194*/
      if ( (_DWORD)v58 == 1 ) /*0x14064a1ac*/
      {
        *(_QWORD *)a1 = -1; /*0x14064a1ae*/
        v31 = 5; /*0x14064a1b5*/
        goto LABEL_46; /*0x14064a1b7*/
      }
      v32 = *((_QWORD *)&v58 + 1); /*0x14064a1bc*/
      v92 = v59; /*0x14064a1ca*/
      v93 = v60; /*0x14064a1d8*/
      v100 = *(_BYTE **)(v101 + 592); /*0x14064a1ed*/
      v99 = *(_OWORD **)(v101 + 600); /*0x14064a1fb*/
      if ( *(_QWORD *)v99 ) /*0x14064a202*/
        (*(void (__fastcall **)(_BYTE *))v99)(v100); /*0x14064a211*/
      v33 = *((_QWORD *)v99 + 1); /*0x14064a222*/
      if ( v33 ) /*0x14064a229*/
        sub_140001660(v100, v33, *((_QWORD *)v99 + 2)); /*0x14064a22f*/
      v5 = v101; /*0x14064a237*/
      if ( v32 ) /*0x14064a23e*/
      {
        v13 = (_OWORD *)(v101 + 592); /*0x14064a244*/
        v94.m256i_i64[3] = v93; /*0x14064a252*/
        *(_OWORD *)&v94.m256i_u64[1] = v92; /*0x14064a260*/
        v97 = v32; /*0x14064a267*/
        v94.m256i_i64[0] = v32; /*0x14064a26e*/
        *(_DWORD *)(v101 + 587) = 0; /*0x14064a275*/
        v34 = *(_OWORD *)(v5 + 536); /*0x14064a280*/
        v35 = *(_OWORD *)(v5 + 552); /*0x14064a288*/
        v56[8] = *(_OWORD *)(v5 + 568); /*0x14064a298*/
        v56[7] = v35; /*0x14064a29c*/
        v56[6] = v34; /*0x14064a2a0*/
        v36 = *(_OWORD *)(v5 + 608); /*0x14064a2a4*/
        v37 = *(_OWORD *)(v5 + 640); /*0x14064a2b4*/
        v38 = *(_OWORD *)(v5 + 656); /*0x14064a2bc*/
        v56[1] = *(_OWORD *)(v5 + 624); /*0x14064a2c4*/
        v56[2] = v37; /*0x14064a2c8*/
        v56[3] = v38; /*0x14064a2cc*/
        v56[4] = *(_OWORD *)(v5 + 672); /*0x14064a2d8*/
        v56[5] = *(_OWORD *)(v5 + 688); /*0x14064a2e4*/
        v56[0] = v36; /*0x14064a2e8*/
        v57 = v94; /*0x14064a2fa*/
        sub_141684120(v5 + 592, v56, 656); /*0x14064a30f*/
        v12 = (_BYTE *)(v5 + 1248); /*0x14064a314*/
        *(_BYTE *)(v5 + 1248) = 0; /*0x14064a31b*/
LABEL_30:
        v100 = v12; /*0x14064a323*/
        v39 = *(_OWORD *)(v5 + 688); /*0x14064a331*/
        v40 = *(_OWORD *)(v5 + 704); /*0x14064a339*/
        *(_OWORD *)(v5 + 800) = *(_OWORD *)(v5 + 720); /*0x14064a349*/
        *(_OWORD *)(v5 + 784) = v40; /*0x14064a351*/
        *(_OWORD *)(v5 + 768) = v39; /*0x14064a359*/
        v41 = v13[1]; /*0x14064a365*/
        v42 = v13[2]; /*0x14064a36a*/
        v43 = v13[3]; /*0x14064a36f*/
        *(_OWORD *)(v5 + 816) = *v13; /*0x14064a374*/
        *(_OWORD *)(v5 + 832) = v41; /*0x14064a37c*/
        *(_OWORD *)(v5 + 848) = v42; /*0x14064a384*/
        *(_OWORD *)(v5 + 864) = v43; /*0x14064a38c*/
        *(_OWORD *)(v5 + 880) = v13[4]; /*0x14064a399*/
        v99 = v13; /*0x14064a3a1*/
        *(_OWORD *)(v5 + 896) = v13[5]; /*0x14064a3ad*/
        *(_QWORD *)(v5 + 912) = v5 + 768; /*0x14064a3b5*/
        v44 = *(_OWORD *)(v5 + 752); /*0x14064a3c4*/
        *(_OWORD *)(v5 + 920) = *(_OWORD *)(v5 + 736); /*0x14064a3cc*/
        *(_OWORD *)(v5 + 936) = v44; /*0x14064a3d4*/
        *(_WORD *)(v5 + 1240) = 0; /*0x14064a3dc*/
LABEL_34:
        v96 = v5 + 816; /*0x14064a412*/
        _u7b__u7b_closure_u7d__u7d__11((__int64)&v58, v5 + 816, a3, a4); /*0x14064a42a*/
        if ( (_DWORD)v58 == -1 ) /*0x14064a437*/
        {
          *v100 = 3; /*0x14064a586*/
          *(_QWORD *)a1 = -1; /*0x14064a589*/
          v31 = 6; /*0x14064a590*/
          goto LABEL_46; /*0x14064a592*/
        }
        sub_1405DE2E0(v96); /*0x14064a444*/
        sub_1405E7870(v101 + 768); /*0x14064a458*/
        *v100 = 1; /*0x14064a465*/
        v74 = v64; /*0x14064a46f*/
        v73 = v63; /*0x14064a47d*/
        v72 = v62; /*0x14064a48b*/
        v71 = v61; /*0x14064a4ae*/
        v70 = v60; /*0x14064a4b5*/
        v69 = v59; /*0x14064a4bc*/
        v68 = v58; /*0x14064a4c3*/
        v45 = v65; /*0x14064a4ca*/
        v95 = v97; /*0x14064a4d8*/
        sub_1405DDE20(v99); /*0x14064a4e6*/
        v90 = v74; /*0x14064a4f3*/
        v89 = v73; /*0x14064a501*/
        v88 = v72; /*0x14064a50f*/
        v87 = v71; /*0x14064a532*/
        v86 = v70; /*0x14064a539*/
        v85 = v69; /*0x14064a540*/
        v84 = v68; /*0x14064a547*/
        v91 = v45; /*0x14064a54e*/
        v46 = v101; /*0x14064a555*/
        *(_BYTE *)(v101 + 590) = 0; /*0x14064a55c*/
        *(_DWORD *)(v46 + 585) = 0; /*0x14064a56a*/
        sub_1405E7870(v46 + 240); /*0x14064a574*/
      }
      else
      {
        sub_140FAF540(&v84, &v92); /*0x14064a5a5*/
        v47 = v101; /*0x14064a5ab*/
        *(_BYTE *)(v101 + 590) = 0; /*0x14064a5b2*/
        sub_140017140(v47 + 608); /*0x14064a5c0*/
        v48 = v101; /*0x14064a5c6*/
        *(_BYTE *)(v101 + 587) = 0; /*0x14064a5cd*/
        sub_1405E7870(v48 + 536); /*0x14064a5db*/
        v49 = v101; /*0x14064a5e1*/
        *(_BYTE *)(v101 + 588) = 0; /*0x14064a5e8*/
        if ( *(_BYTE *)(v49 + 585) ) /*0x14064a5ef*/
        {
          v100 = *(_BYTE **)(v49 + 512); /*0x14064a5ff*/
          v99 = *(_OWORD **)(v49 + 520); /*0x14064a60d*/
          if ( *(_QWORD *)v99 ) /*0x14064a614*/
            (*(void (__fastcall **)(_BYTE *))v99)(v100); /*0x14064a623*/
          v50 = *((_QWORD *)v99 + 1); /*0x14064a634*/
          v49 = v101; /*0x14064a63b*/
          if ( v50 ) /*0x14064a642*/
            sub_140001660(v100, v50, *((_QWORD *)v99 + 2)); /*0x14064a648*/
        }
        *(_BYTE *)(v49 + 585) = 0; /*0x14064a64d*/
        if ( *(_BYTE *)(v49 + 586) ) /*0x14064a654*/
          sub_1405E15C0(v101 + 288); /*0x14064a66b*/
        v51 = v101; /*0x14064a671*/
        *(_BYTE *)(v101 + 586) = 0; /*0x14064a678*/
        sub_1405E7870(v51 + 240); /*0x14064a686*/
      }
      *(_OWORD *)(a1 + 112) = v91; /*0x14064a693*/
      *(_OWORD *)(a1 + 96) = v90; /*0x14064a69e*/
      *(_OWORD *)(a1 + 80) = v89; /*0x14064a6a9*/
      *(_OWORD *)(a1 + 64) = v88; /*0x14064a6b4*/
      v52 = v84; /*0x14064a6b8*/
      v53 = v85; /*0x14064a6bf*/
      v54 = v86; /*0x14064a6c6*/
      *(_OWORD *)(a1 + 48) = v87; /*0x14064a6d4*/
      *(_OWORD *)(a1 + 32) = v54; /*0x14064a6d8*/
      *(_OWORD *)(a1 + 16) = v53; /*0x14064a6dc*/
      *(_OWORD *)a1 = v52; /*0x14064a6e0*/
      v31 = 1; /*0x14064a6e3*/
LABEL_46:
      *(_BYTE *)(v101 + 584) = v31; /*0x14064a6e5*/
      return a1;
    case 4LL: /*0x140649dde*/
      v22 = *(_QWORD *)(a2 + 592); /*0x140649fd0*/
      v23 = *(__int64 (__fastcall ***)())(v5 + 600); /*0x140649fd7*/
      goto LABEL_15; /*0x140649fd7*/
    case 5LL: /*0x140649dde*/
      v14 = *(_QWORD *)(a2 + 592); /*0x140649e97*/
      v15 = *(__int64 (__fastcall ***)())(a2 + 600); /*0x140649e9e*/
      goto LABEL_22; /*0x140649ea5*/
    case 6LL: /*0x140649dde*/
      v12 = (_BYTE *)(a2 + 1248); /*0x140649e6c*/
      v13 = (_OWORD *)(v5 + 592); /*0x140649e7b*/
      switch ( *(_BYTE *)(v5 + 1248) ) /*0x140649e90*/
      {
        case 0: /*0x140649e90*/
          goto LABEL_30;
        case 1: /*0x140649e90*/
          v98 = v5 + 592; /*0x14064a774*/
          sub_1416C3400(&off_141768848, v12, a3, a4); /*0x14064a782*/
        case 2: /*0x140649e90*/
          v98 = v5 + 592; /*0x14064a75e*/
          sub_1416C3420(&off_141768848, v12, a3, a4); /*0x14064a76c*/
        case 3: /*0x140649e90*/
          v100 = (_BYTE *)(v5 + 1248); /*0x14064a404*/
          v99 = (_OWORD *)(v5 + 592); /*0x14064a40b*/
          goto LABEL_34; /*0x14064a40b*/
      }
  }
}
