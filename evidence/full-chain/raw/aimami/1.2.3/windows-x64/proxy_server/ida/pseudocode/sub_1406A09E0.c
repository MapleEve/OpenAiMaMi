// module: core::relay::proxy_server, core::relay::manager (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x1406a09e0  size: 0x896  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   References the Rust 'internal error: entered unreachable code' guard string; companion to the route-
//   table builders (modules include core::relay::manager) -- likely installs tower middleware/layers
//   (tracing span layer, timeout, or CORS) on the Router built by the sibling function.
//
// Referenced strings/symbols:
//   0x1412f2e70  sub_1412F2E70
//   0x1412f3610  sub_1412F3610
//   0x1416c32a0  sub_1416C32A0
//   0x14177fc28  aInternalErrorE_5   "internal error: entered unreachable code"
//   0x141781950  off_141781950
//   0x140844000  sub_140844000
//   0x1412f2900  sub_1412F2900
//   0x141302e80  sub_141302E80
//   0x141302e90  sub_141302E90
//   0x1412f1530  sub_1412F1530
//   0x141781c00  off_141781C00
//   0x1412f1d10  sub_1412F1D10
//   0x14052de20  sub_14052DE20
//   0x1416c3400  sub_1416C3400
//   0x141781ee0  off_141781EE0
//   0x1416c3420  sub_1416C3420
//   0x141781be8  off_141781BE8
//   0x141781c18  off_141781C18
//   0x141781e78  off_141781E78
//   0x141781938  off_141781938
//   0x141781e90  off_141781E90
//   0x141782118  off_141782118
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_1406A09E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // edx
  _QWORD **v10; // r8
  _BYTE *v11; // r10
  __int64 v12; // rax
  __int64 *v13; // r11
  _BYTE *v14; // rdi
  __int64 *v15; // rbx
  _BYTE *v16; // r14
  _BYTE *v17; // r15
  __int64 v18; // rax
  char v19; // bl
  char result; // al
  char v21; // cl
  char v22; // dl
  __int64 v23; // rax
  _BYTE *v24; // r14
  __int64 *v25; // r15
  _BYTE *v26; // r12
  __int64 v27; // rcx
  void (__fastcall *v28)(__int64, __int64, _BYTE *); // rax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rdx
  char v41; // bl
  unsigned __int64 v42; // rax
  unsigned int v43; // edx
  bool v44; // cl
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  __int128 v48; // xmm4
  __int128 v49; // xmm5
  __int128 v50; // xmm6
  __m256i v51; // [rsp+98h] [rbp+18h] BYREF
  __int128 v52; // [rsp+B8h] [rbp+38h]
  __int128 v53; // [rsp+C8h] [rbp+48h]
  __int128 v54; // [rsp+D8h] [rbp+58h]
  __int128 v55; // [rsp+E8h] [rbp+68h]
  __int128 v56; // [rsp+F8h] [rbp+78h]
  __int64 v57; // [rsp+108h] [rbp+88h]
  __int64 v58; // [rsp+110h] [rbp+90h]
  __int64 v59; // [rsp+118h] [rbp+98h]
  _QWORD **v60; // [rsp+120h] [rbp+A0h]
  _BYTE *v61; // [rsp+128h] [rbp+A8h]
  __int64 v62; // [rsp+130h] [rbp+B0h]
  __int64 v63; // [rsp+138h] [rbp+B8h]
  __int64 v64; // [rsp+140h] [rbp+C0h]
  __int64 v65; // [rsp+148h] [rbp+C8h]
  __int64 v66; // [rsp+150h] [rbp+D0h]
  __int64 v67; // [rsp+158h] [rbp+D8h]
  __int64 v68; // [rsp+160h] [rbp+E0h]
  __int64 v69; // [rsp+168h] [rbp+E8h]
  __int64 v70; // [rsp+170h] [rbp+F0h]
  __int64 v71; // [rsp+178h] [rbp+F8h]
  __int64 v72; // [rsp+180h] [rbp+100h]
  __int64 v73; // [rsp+188h] [rbp+108h]
  __int64 v74; // [rsp+190h] [rbp+110h]
  __int64 v75; // [rsp+198h] [rbp+118h]
  __int64 v76; // [rsp+1A0h] [rbp+120h]
  __int64 v77; // [rsp+1A8h] [rbp+128h]
  __int64 v78; // [rsp+1B0h] [rbp+130h]
  __int64 v79; // [rsp+1B8h] [rbp+138h]
  __int64 v80; // [rsp+1C0h] [rbp+140h]
  __int64 *v81; // [rsp+1C8h] [rbp+148h]
  __int64 *v82; // [rsp+1D0h] [rbp+150h]
  __int64 v83; // [rsp+1D8h] [rbp+158h]
  _BYTE *v84; // [rsp+1E0h] [rbp+160h]
  _BYTE *v85; // [rsp+1E8h] [rbp+168h]
  __int64 v86; // [rsp+1F0h] [rbp+170h]
  _BYTE *v87; // [rsp+1F8h] [rbp+178h]
  __int64 *v88; // [rsp+200h] [rbp+180h]
  _BYTE *v89; // [rsp+208h] [rbp+188h]
  __int64 *v90; // [rsp+210h] [rbp+190h]
  _BYTE *v91; // [rsp+218h] [rbp+198h]
  _QWORD **v92; // [rsp+220h] [rbp+1A0h]
  _BYTE *v93; // [rsp+228h] [rbp+1A8h]
  __int64 v94; // [rsp+230h] [rbp+1B0h]
  _QWORD **v95; // [rsp+238h] [rbp+1B8h]
  _BYTE *v96; // [rsp+240h] [rbp+1C0h]
  __int64 v97; // [rsp+248h] [rbp+1C8h]
  __int64 v98; // [rsp+250h] [rbp+1D0h]
  __int64 v99; // [rsp+258h] [rbp+1D8h]
  _BYTE *v100; // [rsp+260h] [rbp+1E0h]
  __int64 v101; // [rsp+268h] [rbp+1E8h]

  v101 = -2; /*0x1406a0a02*/
  v5 = *(unsigned __int8 *)(a1 + 200); /*0x1406a0a10*/
  v97 = a1; /*0x1406a0a25*/
  switch ( v5 ) /*0x1406a0a2c*/
  {
    case 0LL: /*0x1406a0a2c*/
      v6 = *(_QWORD **)a1; /*0x1406a0a2e*/
      *(_QWORD *)(a1 + 8) = 5; /*0x1406a0a31*/
      *(_DWORD *)(a1 + 16) = 0; /*0x1406a0a39*/
      *(_QWORD *)(a1 + 24) = v6; /*0x1406a0a40*/
      v7 = a1 + 56; /*0x1406a0a44*/
      *(_BYTE *)(a1 + 56) = 0; /*0x1406a0a48*/
      v8 = 5; /*0x1406a0a4c*/
      v9 = 0; /*0x1406a0a52*/
LABEL_5:
      *(_QWORD *)(a1 + 32) = v6; /*0x1406a0a79*/
      *(_QWORD *)(a1 + 40) = v8; /*0x1406a0a7d*/
      *(_DWORD *)(a1 + 48) = v9; /*0x1406a0a81*/
      v10 = (_QWORD **)(a1 + 64); /*0x1406a0a84*/
      *(_QWORD *)(a1 + 64) = v6; /*0x1406a0a88*/
      v11 = (_BYTE *)(a1 + 192); /*0x1406a0a8c*/
      *(_BYTE *)(a1 + 192) = 0; /*0x1406a0a93*/
LABEL_6:
      v12 = *v6 + 16LL; /*0x1406a0a9a*/
      v13 = (__int64 *)(a1 + 72); /*0x1406a0aa1*/
      *(_QWORD *)(a1 + 72) = v12; /*0x1406a0aa5*/
      v14 = (_BYTE *)(a1 + 184); /*0x1406a0aa9*/
      *(_BYTE *)(a1 + 184) = 0; /*0x1406a0ab0*/
LABEL_7:
      v15 = (__int64 *)(a1 + 80); /*0x1406a0ab7*/
      *(_QWORD *)(a1 + 80) = v12; /*0x1406a0abb*/
      v16 = (_BYTE *)(a1 + 176); /*0x1406a0abf*/
      *(_BYTE *)(a1 + 176) = 0; /*0x1406a0ac6*/
LABEL_8:
      v98 = a1 + 88; /*0x1406a0acd*/
      *(_QWORD *)(a1 + 88) = v12; /*0x1406a0ad8*/
      v17 = (_BYTE *)(a1 + 104); /*0x1406a0adc*/
      *(_BYTE *)(a1 + 104) = 0; /*0x1406a0ae0*/
LABEL_9:
      *(_QWORD *)(a1 + 96) = v12; /*0x1406a0ae4*/
      *(_BYTE *)(a1 + 112) = 0; /*0x1406a0ae8*/
LABEL_10:
      v85 = v17; /*0x1406a0aec*/
      v84 = v16; /*0x1406a0af3*/
      v82 = v15; /*0x1406a0afa*/
      v96 = v14; /*0x1406a0b01*/
      v81 = v13; /*0x1406a0b08*/
      v100 = v11; /*0x1406a0b0f*/
      v95 = v10; /*0x1406a0b16*/
      v99 = v7; /*0x1406a0b1d*/
      v18 = *(_QWORD *)(a1 + 96); /*0x1406a0b24*/
      *(_OWORD *)&v51.m256i_u64[1] = 0; /*0x1406a0b2b*/
      *(_QWORD *)(a1 + 112) = v18; /*0x1406a0b2f*/
      *(_QWORD *)(a1 + 120) = 0; /*0x1406a0b33*/
      *(_OWORD *)(a1 + 128) = *(_OWORD *)v51.m256i_i8; /*0x1406a0b3f*/
      *(_QWORD *)(a1 + 144) = v51.m256i_i64[2]; /*0x1406a0b4a*/
      *(_QWORD *)(a1 + 152) = 1; /*0x1406a0b51*/
      *(_QWORD *)(a1 + 160) = 1; /*0x1406a0b5c*/
      *(_BYTE *)(a1 + 168) = 0; /*0x1406a0b67*/
LABEL_11:
      v57 = a1 + 112; /*0x1406a0b6e*/
      v19 = sub_1412F2E70(a1 + 112, a2); /*0x1406a0b82*/
      if ( v19 == 2 ) /*0x1406a0b86*/
      {
        *v85 = 4; /*0x1406a0b8f*/
        *v84 = 3; /*0x1406a0b99*/
        *v96 = 3; /*0x1406a0ba3*/
        *v100 = 3; /*0x1406a0bad*/
        result = 2; /*0x1406a0bb0*/
        v21 = 3; /*0x1406a0bb2*/
        v22 = 3; /*0x1406a0bb4*/
      }
      else
      {
        sub_1412F3610(v57); /*0x1406a0bc2*/
        v23 = *(_QWORD *)(v97 + 120); /*0x1406a0bcf*/
        v24 = v96; /*0x1406a0beb*/
        v25 = v82; /*0x1406a0bf2*/
        v26 = v84; /*0x1406a0bf9*/
        if ( v23 ) /*0x1406a0c07*/
        {
          v27 = *(_QWORD *)(v97 + 128); /*0x1406a0c09*/
          v28 = *(void (__fastcall **)(__int64, __int64, _BYTE *))(v23 + 24); /*0x1406a0c10*/
          v94 = v99; /*0x1406a0c14*/
          v93 = v100; /*0x1406a0c1b*/
          v92 = v95; /*0x1406a0c29*/
          v91 = v96; /*0x1406a0c30*/
          v90 = v81; /*0x1406a0c37*/
          v89 = v84; /*0x1406a0c3e*/
          v88 = v82; /*0x1406a0c45*/
          v87 = v85; /*0x1406a0c4c*/
          v86 = v98; /*0x1406a0c5a*/
          v28(v27, v98, v100); /*0x1406a0c61*/
        }
        if ( v19 == 1 ) /*0x1406a0c67*/
        {
          v94 = v99; /*0x1406a0e84*/
          v93 = v100; /*0x1406a0e92*/
          v92 = v95; /*0x1406a0ea0*/
          v91 = v96; /*0x1406a0ea7*/
          v90 = v81; /*0x1406a0eae*/
          v89 = v84; /*0x1406a0eb5*/
          v88 = v82; /*0x1406a0ebc*/
          v87 = v85; /*0x1406a0ec3*/
          v86 = v98; /*0x1406a0ed1*/
          sub_1416C32A0(aInternalErrorE_5, 40, &off_141781950); /*0x1406a0eeb*/
        }
        *v85 = 1; /*0x1406a0c6d*/
        v29 = *v25; /*0x1406a0c72*/
        *v26 = 1; /*0x1406a0c75*/
        *v24 = 1; /*0x1406a0c7a*/
        v30 = *(_DWORD *)(v29 + 40); /*0x1406a0c7e*/
        v31 = *(_QWORD *)(v29 + 48); /*0x1406a0c81*/
        v96 = (_BYTE *)v29; /*0x1406a0c85*/
        *(_QWORD *)(v29 + 40) = 0; /*0x1406a0c8c*/
        if ( v30 == 1 ) /*0x1406a0c97*/
          sub_140844000(v31); /*0x1406a0c99*/
        v32 = v99; /*0x1406a0c9f*/
        v62 = v99; /*0x1406a0ca6*/
        v61 = v100; /*0x1406a0cb4*/
        v60 = v95; /*0x1406a0cc2*/
        sub_1412F2900(v96, 1); /*0x1406a0cd5*/
        *v100 = 1; /*0x1406a0cdb*/
        v83 = v32; /*0x1406a0cde*/
        v36 = sub_141302E80(v34, v33, v35); /*0x1406a0ce5*/
        v37 = v97; /*0x1406a0ceb*/
        *(_QWORD *)(v97 + 64) = v36; /*0x1406a0cf2*/
        *(_DWORD *)(v37 + 72) = v38; /*0x1406a0cf6*/
        while ( 1 ) /*0x1406a112a*/
        {
          v41 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 32) + 8LL) + 16LL); /*0x1406a112a*/
          if ( !v41 ) /*0x1406a1130*/
            goto LABEL_52; /*0x1406a1130*/
          v83 = v32; /*0x1406a113a*/
          v42 = sub_141302E90(v37 + 64); /*0x1406a1141*/
          v37 = v97; /*0x1406a1149*/
          v44 = v43 >= *(_DWORD *)(v97 + 48); /*0x1406a1154*/
          if ( v42 != *(_QWORD *)(v97 + 40) ) /*0x1406a1160*/
            v44 = v42 >= *(_QWORD *)(v97 + 40); /*0x1406a1160*/
          if ( v44 ) /*0x1406a1165*/
          {
LABEL_52:
            result = v41 == 0; /*0x1406a123a*/
            v21 = 1; /*0x1406a123d*/
            v22 = 1; /*0x1406a123f*/
            goto LABEL_55; /*0x1406a1241*/
          }
          v83 = v32; /*0x1406a116b*/
          sub_1412F1530(&v51, 0, 10000000, &off_141781C00); /*0x1406a1185*/
          v99 = v32; /*0x1406a118b*/
          v45 = v55; /*0x1406a119a*/
          v46 = v54; /*0x1406a11a2*/
          v47 = *(_OWORD *)v51.m256i_i8; /*0x1406a11aa*/
          v48 = *(_OWORD *)&v51.m256i_u64[2]; /*0x1406a11ae*/
          v49 = v52; /*0x1406a11b2*/
          v50 = v53; /*0x1406a11b6*/
          a1 = v97; /*0x1406a11ca*/
          *(_OWORD *)(v97 + 176) = v56; /*0x1406a11d1*/
          *(_OWORD *)(a1 + 160) = v45; /*0x1406a11d8*/
          *(_OWORD *)(a1 + 144) = v46; /*0x1406a11df*/
          *(_OWORD *)(a1 + 128) = v50; /*0x1406a11e6*/
          *(_OWORD *)(a1 + 112) = v49; /*0x1406a11ed*/
          *(_OWORD *)(a1 + 96) = v48; /*0x1406a11f1*/
          *(_OWORD *)(a1 + 80) = v47; /*0x1406a11f5*/
LABEL_50:
          v100 = (_BYTE *)(a1 + 80); /*0x1406a11fd*/
          if ( (unsigned __int8)sub_1412F1D10(a1 + 80, a2) ) /*0x1406a1207*/
            break; /*0x1406a1207*/
          v32 = v99; /*0x1406a1211*/
          v83 = v99; /*0x1406a1218*/
          sub_14052DE20(v100); /*0x1406a1226*/
          v37 = v97; /*0x1406a122c*/
        }
        result = 2; /*0x1406a1243*/
        v22 = 3; /*0x1406a1245*/
        v21 = 4; /*0x1406a1247*/
      }
      v37 = v97; /*0x1406a1249*/
LABEL_55:
      *(_BYTE *)(v37 + 56) = v21; /*0x1406a1250*/
      *(_BYTE *)(v37 + 200) = v22; /*0x1406a1254*/
      return result;
    case 1LL: /*0x1406a0a2c*/
      sub_1416C3400(&off_141781EE0, a2, a3, a4); /*0x1406a0e76*/
    case 2LL: /*0x1406a0a2c*/
      sub_1416C3420(&off_141781EE0, a2, a3, a4); /*0x1406a0e68*/
    case 3LL: /*0x1406a0a2c*/
      v7 = a1 + 56; /*0x1406a0a56*/
      switch ( *(_BYTE *)(a1 + 56) ) /*0x1406a0a6c*/
      {
        case 0: /*0x1406a0a6c*/
          v6 = *(_QWORD **)(a1 + 24); /*0x1406a0a6e*/
          v8 = *(_QWORD *)(a1 + 8); /*0x1406a0a72*/
          v9 = *(_DWORD *)(a1 + 16); /*0x1406a0a76*/
          goto LABEL_5; /*0x1406a0a76*/
        case 1: /*0x1406a0a6c*/
          sub_1416C3400(&off_141781BE8, a2, a3, v7); /*0x1406a0f0f*/
        case 2: /*0x1406a0a6c*/
          sub_1416C3420(&off_141781BE8, a2, a3, v7); /*0x1406a0efd*/
        case 3: /*0x1406a0a6c*/
          v11 = (_BYTE *)(a1 + 192); /*0x1406a0cff*/
          v10 = (_QWORD **)(a1 + 64); /*0x1406a0d0d*/
          switch ( *(_BYTE *)(a1 + 192) ) /*0x1406a0d1f*/
          {
            case 0: /*0x1406a0d1f*/
              v6 = *v10; /*0x1406a0d21*/
              break; /*0x1406a0d24*/
            case 1: /*0x1406a0d1f*/
              v59 = a1 + 56; /*0x1406a0f3a*/
              v58 = a1 + 64; /*0x1406a0f41*/
              sub_1416C3400(&off_141781C18, a2, v10, v7); /*0x1406a0f4f*/
            case 2: /*0x1406a0d1f*/
              v59 = a1 + 56; /*0x1406a0f1a*/
              v58 = a1 + 64; /*0x1406a0f21*/
              sub_1416C3420(&off_141781C18, a2, v10, v7); /*0x1406a0f2f*/
            case 3: /*0x1406a0d1f*/
              v14 = (_BYTE *)(a1 + 184); /*0x1406a0d35*/
              v13 = (__int64 *)(a1 + 72); /*0x1406a0d43*/
              switch ( *(_BYTE *)(a1 + 184) ) /*0x1406a0d55*/
              {
                case 0: /*0x1406a0d55*/
                  v12 = *v13; /*0x1406a0d57*/
                  goto LABEL_7; /*0x1406a0d5a*/
                case 1: /*0x1406a0d55*/
                  v74 = a1 + 56; /*0x1406a0f88*/
                  v73 = a1 + 192; /*0x1406a0f8f*/
                  v72 = a1 + 64; /*0x1406a0f96*/
                  v71 = a1 + 72; /*0x1406a0f9d*/
                  sub_1416C3400(&off_141781E78, a2, v10, v7); /*0x1406a0fab*/
                case 2: /*0x1406a0d55*/
                  v74 = a1 + 56; /*0x1406a0f5a*/
                  v73 = a1 + 192; /*0x1406a0f61*/
                  v72 = a1 + 64; /*0x1406a0f68*/
                  v71 = a1 + 72; /*0x1406a0f6f*/
                  sub_1416C3420(&off_141781E78, a2, v10, v7); /*0x1406a0f7d*/
                case 3: /*0x1406a0d55*/
                  v16 = (_BYTE *)(a1 + 176); /*0x1406a0d5f*/
                  v15 = (__int64 *)(a1 + 80); /*0x1406a0d6d*/
                  switch ( *(_BYTE *)(a1 + 176) ) /*0x1406a0d7f*/
                  {
                    case 0: /*0x1406a0d7f*/
                      v12 = *v15; /*0x1406a0d81*/
                      break; /*0x1406a0d84*/
                    case 1: /*0x1406a0d7f*/
                      v80 = a1 + 56; /*0x1406a0ff2*/
                      v79 = a1 + 192; /*0x1406a0ff9*/
                      v78 = a1 + 64; /*0x1406a1000*/
                      v77 = a1 + 184; /*0x1406a1007*/
                      v76 = a1 + 72; /*0x1406a100e*/
                      v75 = a1 + 80; /*0x1406a1015*/
                      sub_1416C3400(&off_141781938, a2, v10, v7); /*0x1406a1023*/
                    case 2: /*0x1406a0d7f*/
                      v80 = a1 + 56; /*0x1406a0fb6*/
                      v79 = a1 + 192; /*0x1406a0fbd*/
                      v78 = a1 + 64; /*0x1406a0fc4*/
                      v77 = a1 + 184; /*0x1406a0fcb*/
                      v76 = a1 + 72; /*0x1406a0fd2*/
                      v75 = a1 + 80; /*0x1406a0fd9*/
                      sub_1416C3420(&off_141781938, a2, v10, v7); /*0x1406a0fe7*/
                    case 3: /*0x1406a0d7f*/
                      v17 = (_BYTE *)(a1 + 104); /*0x1406a0d89*/
                      v39 = *(unsigned __int8 *)(a1 + 104); /*0x1406a0d8d*/
                      v40 = a1 + 88; /*0x1406a0d91*/
                      v98 = a1 + 88; /*0x1406a0d95*/
                      switch ( v39 ) /*0x1406a0daa*/
                      {
                        case 0LL: /*0x1406a0daa*/
                          v12 = *(_QWORD *)(a1 + 88); /*0x1406a0db0*/
                          goto LABEL_9; /*0x1406a0db3*/
                        case 1LL: /*0x1406a0daa*/
                          v70 = a1 + 56; /*0x1406a107f*/
                          v69 = a1 + 192; /*0x1406a1086*/
                          v68 = a1 + 64; /*0x1406a108d*/
                          v67 = a1 + 184; /*0x1406a1094*/
                          v66 = a1 + 72; /*0x1406a109b*/
                          v65 = a1 + 176; /*0x1406a10a2*/
                          v64 = a1 + 80; /*0x1406a10a9*/
                          v63 = v98; /*0x1406a10b7*/
                          sub_1416C3400(&off_141781E90, v40, v10, v7); /*0x1406a10c5*/
                        case 2LL: /*0x1406a0daa*/
                          v70 = a1 + 56; /*0x1406a102e*/
                          v69 = a1 + 192; /*0x1406a1035*/
                          v68 = a1 + 64; /*0x1406a103c*/
                          v67 = a1 + 184; /*0x1406a1043*/
                          v66 = a1 + 72; /*0x1406a104a*/
                          v65 = a1 + 176; /*0x1406a1051*/
                          v64 = a1 + 80; /*0x1406a1058*/
                          v63 = v98; /*0x1406a1066*/
                          sub_1416C3420(&off_141781E90, v40, v10, v7); /*0x1406a1074*/
                        case 3LL: /*0x1406a0daa*/
                          switch ( *(_BYTE *)(a1 + 112) ) /*0x1406a0dca*/
                          {
                            case 0: /*0x1406a0dca*/
                            case 3: /*0x1406a0dca*/
                              goto LABEL_10;
                            case 1: /*0x1406a0dca*/
                              v94 = a1 + 56; /*0x1406a0dcc*/
                              v93 = (_BYTE *)(a1 + 192); /*0x1406a0dd3*/
                              v92 = (_QWORD **)(a1 + 64); /*0x1406a0dda*/
                              v91 = (_BYTE *)(a1 + 184); /*0x1406a0de1*/
                              v90 = (__int64 *)(a1 + 72); /*0x1406a0de8*/
                              v89 = (_BYTE *)(a1 + 176); /*0x1406a0def*/
                              v88 = (__int64 *)(a1 + 80); /*0x1406a0df6*/
                              v87 = (_BYTE *)(a1 + 104); /*0x1406a0dfd*/
                              v86 = v98; /*0x1406a0e0b*/
                              sub_1416C3400(&off_141782118, v40, v10, v7); /*0x1406a0e19*/
                            case 2: /*0x1406a0dca*/
                              v94 = a1 + 56; /*0x1406a10cd*/
                              v93 = (_BYTE *)(a1 + 192); /*0x1406a10d4*/
                              v92 = (_QWORD **)(a1 + 64); /*0x1406a10db*/
                              v91 = (_BYTE *)(a1 + 184); /*0x1406a10e2*/
                              v90 = (__int64 *)(a1 + 72); /*0x1406a10e9*/
                              v89 = (_BYTE *)(a1 + 176); /*0x1406a10f0*/
                              v88 = (__int64 *)(a1 + 80); /*0x1406a10f7*/
                              v87 = (_BYTE *)(a1 + 104); /*0x1406a10fe*/
                              v86 = v98; /*0x1406a110c*/
                              sub_1416C3420(&off_141782118, v40, v10, v7); /*0x1406a111a*/
                          }
                          goto LABEL_10;
                        case 4LL: /*0x1406a0daa*/
                          v85 = (_BYTE *)(a1 + 104); /*0x1406a0e24*/
                          v84 = (_BYTE *)(a1 + 176); /*0x1406a0e2b*/
                          v82 = (__int64 *)(a1 + 80); /*0x1406a0e32*/
                          v96 = (_BYTE *)(a1 + 184); /*0x1406a0e39*/
                          v81 = (__int64 *)(a1 + 72); /*0x1406a0e40*/
                          v100 = (_BYTE *)(a1 + 192); /*0x1406a0e47*/
                          v95 = (_QWORD **)(a1 + 64); /*0x1406a0e4e*/
                          v99 = a1 + 56; /*0x1406a0e55*/
                          goto LABEL_11; /*0x1406a0e5c*/
                      }
                  }
                  goto LABEL_8; /*0x1406a0d84*/
              }
          }
          goto LABEL_6; /*0x1406a0d24*/
        case 4: /*0x1406a0a6c*/
          v99 = a1 + 56; /*0x1406a0d29*/
          goto LABEL_50; /*0x1406a0d30*/
      }
  }
}
