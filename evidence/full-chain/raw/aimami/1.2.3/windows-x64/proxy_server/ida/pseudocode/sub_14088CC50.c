// module: core::relay::proxy_server, core::relay::manager (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x14088cc50  size: 0x8c9  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   References the Rust unreachable-code guard string; companion middleware/layer-setup helper to
//   sub_14088a5c0, mirroring sub_1406a09e0's role for the other router-builder instantiation.
//
// Referenced strings/symbols:
//   0x1413057f0  sub_1413057F0
//   0x1412f2e70  sub_1412F2E70
//   0x1412f3610  sub_1412F3610
//   0x1416c32a0  sub_1416C32A0
//   0x1417927c4  aInternalErrorE_126   "internal error: entered unreachable code"
//   0x1417950d8  off_1417950D8
//   0x140844000  sub_140844000
//   0x1412f2900  sub_1412F2900
//   0x141302e80  sub_141302E80
//   0x141302e90  sub_141302E90
//   0x1412f1530  sub_1412F1530
//   0x1417953a8  off_1417953A8
//   0x1412f1d10  sub_1412F1D10
//   0x1405e6d10  sub_1405E6D10
//   0x1416c3400  sub_1416C3400
//   0x141795720  off_141795720
//   0x1416c3420  sub_1416C3420
//   0x141795390  off_141795390
//   0x1417953c0  off_1417953C0
//   0x1417955d8  off_1417955D8
//   0x1417950c0  off_1417950C0
//   0x1417955f0  off_1417955F0
//   0x141795cc8  off_141795CC8
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14088CC50(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  char v5; // cl
  __int64 v6; // r9
  char result; // al
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rax
  char *v11; // r9
  int v12; // ecx
  _QWORD **v13; // rdx
  _BYTE *v14; // r10
  __int64 v15; // rax
  __int64 *v16; // r11
  _BYTE *v17; // rdi
  __int64 *v18; // rbx
  _BYTE *v19; // r14
  _BYTE *v20; // r15
  __int64 v21; // rax
  char v22; // bl
  char v23; // al
  __int64 v24; // rax
  _BYTE *v25; // r14
  __int64 *v26; // r15
  _BYTE *v27; // r12
  __int64 v28; // rcx
  void (__fastcall *v29)(__int64, __int64, _BYTE *); // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  char *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // edx
  __int64 v40; // rax
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
  char v51; // cl
  __m256i v52; // [rsp+98h] [rbp+18h] BYREF
  __int128 v53; // [rsp+B8h] [rbp+38h]
  __int128 v54; // [rsp+C8h] [rbp+48h]
  __int128 v55; // [rsp+D8h] [rbp+58h]
  __int128 v56; // [rsp+E8h] [rbp+68h]
  __int128 v57; // [rsp+F8h] [rbp+78h]
  __int64 v58; // [rsp+108h] [rbp+88h]
  __int64 v59; // [rsp+110h] [rbp+90h]
  __int64 v60; // [rsp+118h] [rbp+98h]
  _QWORD **v61; // [rsp+120h] [rbp+A0h]
  _BYTE *v62; // [rsp+128h] [rbp+A8h]
  char *v63; // [rsp+130h] [rbp+B0h]
  __int64 v64; // [rsp+138h] [rbp+B8h]
  __int64 v65; // [rsp+140h] [rbp+C0h]
  __int64 v66; // [rsp+148h] [rbp+C8h]
  __int64 v67; // [rsp+150h] [rbp+D0h]
  __int64 v68; // [rsp+158h] [rbp+D8h]
  __int64 v69; // [rsp+160h] [rbp+E0h]
  __int64 v70; // [rsp+168h] [rbp+E8h]
  __int64 v71; // [rsp+170h] [rbp+F0h]
  __int64 v72; // [rsp+178h] [rbp+F8h]
  __int64 v73; // [rsp+180h] [rbp+100h]
  __int64 v74; // [rsp+188h] [rbp+108h]
  __int64 v75; // [rsp+190h] [rbp+110h]
  __int64 v76; // [rsp+198h] [rbp+118h]
  __int64 v77; // [rsp+1A0h] [rbp+120h]
  __int64 v78; // [rsp+1A8h] [rbp+128h]
  __int64 v79; // [rsp+1B0h] [rbp+130h]
  __int64 v80; // [rsp+1B8h] [rbp+138h]
  __int64 v81; // [rsp+1C0h] [rbp+140h]
  __int64 *v82; // [rsp+1C8h] [rbp+148h]
  __int64 *v83; // [rsp+1D0h] [rbp+150h]
  char *v84; // [rsp+1D8h] [rbp+158h]
  _BYTE *v85; // [rsp+1E0h] [rbp+160h]
  _BYTE *v86; // [rsp+1E8h] [rbp+168h]
  __int64 v87; // [rsp+1F0h] [rbp+170h]
  _BYTE *v88; // [rsp+1F8h] [rbp+178h]
  __int64 *v89; // [rsp+200h] [rbp+180h]
  _BYTE *v90; // [rsp+208h] [rbp+188h]
  __int64 *v91; // [rsp+210h] [rbp+190h]
  _BYTE *v92; // [rsp+218h] [rbp+198h]
  _QWORD **v93; // [rsp+220h] [rbp+1A0h]
  _BYTE *v94; // [rsp+228h] [rbp+1A8h]
  char *v95; // [rsp+230h] [rbp+1B0h]
  _QWORD **v96; // [rsp+238h] [rbp+1B8h]
  __int64 v97; // [rsp+240h] [rbp+1C0h]
  _BYTE *v98; // [rsp+248h] [rbp+1C8h]
  __int64 v99; // [rsp+250h] [rbp+1D0h]
  _BYTE *v100; // [rsp+258h] [rbp+1D8h]
  char *v101; // [rsp+260h] [rbp+1E0h]
  __int64 v102; // [rsp+268h] [rbp+1E8h]

  v102 = -2; /*0x14088cc72*/
  v3 = *(__int64 **)(a1 + 8); /*0x14088cc83*/
  v5 = sub_1413057F0(**(_QWORD **)a1, a2); /*0x14088cc8f*/
  result = 2; /*0x14088cc91*/
  if ( v5 ) /*0x14088cc95*/
  {
    v8 = *v3; /*0x14088cc9b*/
    v9 = *(unsigned __int8 *)(*v3 + 200); /*0x14088cc9e*/
    v97 = *v3; /*0x14088ccb4*/
    switch ( v9 ) /*0x14088ccbb*/
    {
      case 0LL: /*0x14088ccbb*/
        v10 = *(_QWORD **)v8; /*0x14088ccbd*/
        *(_QWORD *)(v8 + 8) = 5; /*0x14088ccc0*/
        *(_DWORD *)(v8 + 16) = 0; /*0x14088ccc8*/
        *(_QWORD *)(v8 + 24) = v10; /*0x14088ccd0*/
        v11 = (char *)(v8 + 56); /*0x14088ccd4*/
        *(_BYTE *)(v8 + 56) = 0; /*0x14088ccd8*/
        v12 = 0; /*0x14088ccdd*/
LABEL_6:
        *(_QWORD *)(v8 + 32) = v10; /*0x14088cd02*/
        *(_QWORD *)(v8 + 40) = *(_QWORD *)(v8 + 8); /*0x14088cd0a*/
        *(_DWORD *)(v8 + 48) = v12; /*0x14088cd0e*/
        v13 = (_QWORD **)(v8 + 64); /*0x14088cd12*/
        *(_QWORD *)(v8 + 64) = v10; /*0x14088cd16*/
        v14 = (_BYTE *)(v8 + 192); /*0x14088cd1a*/
        *(_BYTE *)(v8 + 192) = 0; /*0x14088cd21*/
LABEL_7:
        v15 = *v10 + 16LL; /*0x14088cd29*/
        v16 = (__int64 *)(v8 + 72); /*0x14088cd30*/
        *(_QWORD *)(v8 + 72) = v15; /*0x14088cd34*/
        v17 = (_BYTE *)(v8 + 184); /*0x14088cd38*/
        *(_BYTE *)(v8 + 184) = 0; /*0x14088cd3f*/
LABEL_8:
        v18 = (__int64 *)(v8 + 80); /*0x14088cd47*/
        *(_QWORD *)(v8 + 80) = v15; /*0x14088cd4b*/
        v19 = (_BYTE *)(v8 + 176); /*0x14088cd4f*/
        *(_BYTE *)(v8 + 176) = 0; /*0x14088cd56*/
LABEL_9:
        v99 = v8 + 88; /*0x14088cd5e*/
        *(_QWORD *)(v8 + 88) = v15; /*0x14088cd69*/
        v20 = (_BYTE *)(v8 + 104); /*0x14088cd6d*/
        *(_BYTE *)(v8 + 104) = 0; /*0x14088cd71*/
LABEL_10:
        *(_QWORD *)(v8 + 96) = v15; /*0x14088cd76*/
        *(_BYTE *)(v8 + 112) = 0; /*0x14088cd7a*/
LABEL_11:
        v86 = v20; /*0x14088cd7f*/
        v85 = v19; /*0x14088cd86*/
        v83 = v18; /*0x14088cd8d*/
        v98 = v17; /*0x14088cd94*/
        v82 = v16; /*0x14088cd9b*/
        v100 = v14; /*0x14088cda2*/
        v96 = v13; /*0x14088cda9*/
        v101 = v11; /*0x14088cdb0*/
        v21 = *(_QWORD *)(v8 + 96); /*0x14088cdb7*/
        *(_OWORD *)&v52.m256i_u64[1] = 0; /*0x14088cdbe*/
        *(_QWORD *)(v8 + 112) = v21; /*0x14088cdc2*/
        *(_QWORD *)(v8 + 120) = 0; /*0x14088cdc6*/
        *(_OWORD *)(v8 + 128) = *(_OWORD *)v52.m256i_i8; /*0x14088cdd2*/
        *(_QWORD *)(v8 + 144) = v52.m256i_i64[2]; /*0x14088cdde*/
        *(_QWORD *)(v8 + 152) = 1; /*0x14088cde5*/
        *(_QWORD *)(v8 + 160) = 1; /*0x14088cdf0*/
        *(_BYTE *)(v8 + 168) = 0; /*0x14088cdfb*/
LABEL_12:
        v58 = v8 + 112; /*0x14088ce03*/
        v22 = sub_1412F2E70(v8 + 112, a2); /*0x14088ce17*/
        if ( v22 == 2 ) /*0x14088ce1b*/
        {
          *v86 = 4; /*0x14088ce24*/
          *v85 = 3; /*0x14088ce2e*/
          *v98 = 3; /*0x14088ce38*/
          *v100 = 3; /*0x14088ce42*/
          v23 = 3; /*0x14088ce45*/
        }
        else
        {
          sub_1412F3610(v58); /*0x14088ce53*/
          v24 = *(_QWORD *)(v97 + 120); /*0x14088ce60*/
          v25 = v98; /*0x14088ce7c*/
          v26 = v83; /*0x14088ce83*/
          v27 = v85; /*0x14088ce8a*/
          if ( v24 ) /*0x14088ce98*/
          {
            v28 = *(_QWORD *)(v97 + 128); /*0x14088ce9a*/
            v29 = *(void (__fastcall **)(__int64, __int64, _BYTE *))(v24 + 24); /*0x14088cea1*/
            v95 = v101; /*0x14088cea5*/
            v94 = v100; /*0x14088ceac*/
            v93 = v96; /*0x14088ceba*/
            v92 = v98; /*0x14088cec1*/
            v91 = v82; /*0x14088cec8*/
            v90 = v85; /*0x14088cecf*/
            v89 = v83; /*0x14088ced6*/
            v88 = v86; /*0x14088cedd*/
            v87 = v99; /*0x14088ceeb*/
            v29(v28, v99, v100); /*0x14088cef2*/
          }
          if ( v22 == 1 ) /*0x14088cef8*/
          {
            v95 = v101; /*0x14088d11a*/
            v94 = v100; /*0x14088d128*/
            v93 = v96; /*0x14088d136*/
            v92 = v98; /*0x14088d13d*/
            v91 = v82; /*0x14088d144*/
            v90 = v85; /*0x14088d14b*/
            v89 = v83; /*0x14088d152*/
            v88 = v86; /*0x14088d159*/
            v87 = v99; /*0x14088d167*/
            sub_1416C32A0(aInternalErrorE_126, 40, &off_1417950D8); /*0x14088d181*/
          }
          *v86 = 1; /*0x14088cefe*/
          v30 = *v26; /*0x14088cf03*/
          *v27 = 1; /*0x14088cf06*/
          *v25 = 1; /*0x14088cf0b*/
          v31 = *(_DWORD *)(v30 + 40); /*0x14088cf0f*/
          v32 = *(_QWORD *)(v30 + 48); /*0x14088cf12*/
          v98 = (_BYTE *)v30; /*0x14088cf16*/
          *(_QWORD *)(v30 + 40) = 0; /*0x14088cf1d*/
          if ( v31 == 1 ) /*0x14088cf28*/
            sub_140844000(v32); /*0x14088cf2a*/
          v33 = v101; /*0x14088cf30*/
          v63 = v101; /*0x14088cf37*/
          v62 = v100; /*0x14088cf45*/
          v61 = v96; /*0x14088cf53*/
          sub_1412F2900(v98, 1); /*0x14088cf66*/
          *v100 = 1; /*0x14088cf6c*/
          v84 = v33; /*0x14088cf6f*/
          v37 = sub_141302E80(v35, v34, v36); /*0x14088cf76*/
          v38 = v97; /*0x14088cf7c*/
          *(_QWORD *)(v97 + 64) = v37; /*0x14088cf83*/
          *(_DWORD *)(v38 + 72) = v39; /*0x14088cf87*/
          while ( 1 ) /*0x14088d3c0*/
          {
            v41 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v38 + 32) + 8LL) + 16LL); /*0x14088d3c0*/
            if ( !v41 ) /*0x14088d3c6*/
              goto LABEL_53; /*0x14088d3c6*/
            v84 = v33; /*0x14088d3d0*/
            v42 = sub_141302E90(v38 + 64); /*0x14088d3d7*/
            v38 = v97; /*0x14088d3df*/
            v44 = v43 >= *(_DWORD *)(v97 + 48); /*0x14088d3ea*/
            if ( v42 != *(_QWORD *)(v97 + 40) ) /*0x14088d3f6*/
              v44 = v42 >= *(_QWORD *)(v97 + 40); /*0x14088d3f6*/
            if ( v44 ) /*0x14088d3fb*/
            {
LABEL_53:
              result = v41 == 0; /*0x14088d4d7*/
              *v33 = 1; /*0x14088d4da*/
              v51 = 1; /*0x14088d4dd*/
              goto LABEL_56; /*0x14088d4df*/
            }
            v84 = v33; /*0x14088d401*/
            sub_1412F1530(&v52, 0, 10000000, &off_1417953A8); /*0x14088d41b*/
            v101 = v33; /*0x14088d421*/
            v45 = v56; /*0x14088d430*/
            v46 = v55; /*0x14088d438*/
            v47 = *(_OWORD *)v52.m256i_i8; /*0x14088d440*/
            v48 = *(_OWORD *)&v52.m256i_u64[2]; /*0x14088d444*/
            v49 = v53; /*0x14088d448*/
            v50 = v54; /*0x14088d44c*/
            v8 = v97; /*0x14088d460*/
            *(_OWORD *)(v97 + 176) = v57; /*0x14088d467*/
            *(_OWORD *)(v8 + 160) = v45; /*0x14088d46f*/
            *(_OWORD *)(v8 + 144) = v46; /*0x14088d477*/
            *(_OWORD *)(v8 + 128) = v50; /*0x14088d47f*/
            *(_OWORD *)(v8 + 112) = v49; /*0x14088d487*/
            *(_OWORD *)(v8 + 96) = v48; /*0x14088d48c*/
            *(_OWORD *)(v8 + 80) = v47; /*0x14088d491*/
LABEL_51:
            v100 = (_BYTE *)(v8 + 80); /*0x14088d49a*/
            if ( (unsigned __int8)sub_1412F1D10(v8 + 80, a2) ) /*0x14088d4a4*/
              break; /*0x14088d4a4*/
            v33 = v101; /*0x14088d4ae*/
            v84 = v101; /*0x14088d4b5*/
            sub_1405E6D10(v100); /*0x14088d4c3*/
            v38 = v97; /*0x14088d4c9*/
          }
          v23 = 4; /*0x14088d4e1*/
        }
        *v101 = v23; /*0x14088d4ea*/
        result = -1; /*0x14088d4ec*/
        v51 = 3; /*0x14088d4ee*/
        v38 = v97; /*0x14088d4f0*/
LABEL_56:
        *(_BYTE *)(v38 + 200) = v51; /*0x14088d4f7*/
        break; /*0x14088d4f7*/
      case 1LL: /*0x14088ccbb*/
        sub_1416C3400(&off_141795720, v4, v8, v6); /*0x14088d10c*/
      case 2LL: /*0x14088ccbb*/
        sub_1416C3420(&off_141795720, v4, v8, v6); /*0x14088d0fe*/
      case 3LL: /*0x14088ccbb*/
        v11 = (char *)(v8 + 56); /*0x14088cce1*/
        switch ( *(_BYTE *)(v8 + 56) ) /*0x14088ccf8*/
        {
          case 0: /*0x14088ccf8*/
            v10 = *(_QWORD **)(v8 + 24); /*0x14088ccfa*/
            v12 = *(_DWORD *)(v8 + 16); /*0x14088ccfe*/
            goto LABEL_6; /*0x14088ccfe*/
          case 1: /*0x14088ccf8*/
            sub_1416C3400(&off_141795390, v4, v8, v11); /*0x14088d1a5*/
          case 2: /*0x14088ccf8*/
            sub_1416C3420(&off_141795390, v4, v8, v11); /*0x14088d193*/
          case 3: /*0x14088ccf8*/
            v14 = (_BYTE *)(v8 + 192); /*0x14088cf90*/
            v13 = (_QWORD **)(v8 + 64); /*0x14088cf9f*/
            switch ( *(_BYTE *)(v8 + 192) ) /*0x14088cfb1*/
            {
              case 0: /*0x14088cfb1*/
                v10 = *v13; /*0x14088cfb3*/
                break; /*0x14088cfb6*/
              case 1: /*0x14088cfb1*/
                v60 = v8 + 56; /*0x14088d1d0*/
                v59 = v8 + 64; /*0x14088d1d7*/
                sub_1416C3400(&off_1417953C0, v13, v8, v11); /*0x14088d1e5*/
              case 2: /*0x14088cfb1*/
                v60 = v8 + 56; /*0x14088d1b0*/
                v59 = v8 + 64; /*0x14088d1b7*/
                sub_1416C3420(&off_1417953C0, v13, v8, v11); /*0x14088d1c5*/
              case 3: /*0x14088cfb1*/
                v17 = (_BYTE *)(v8 + 184); /*0x14088cfc7*/
                v16 = (__int64 *)(v8 + 72); /*0x14088cfd6*/
                switch ( *(_BYTE *)(v8 + 184) ) /*0x14088cfe8*/
                {
                  case 0: /*0x14088cfe8*/
                    v15 = *v16; /*0x14088cfea*/
                    goto LABEL_8; /*0x14088cfed*/
                  case 1: /*0x14088cfe8*/
                    v75 = v8 + 56; /*0x14088d21e*/
                    v74 = v8 + 192; /*0x14088d225*/
                    v73 = v8 + 64; /*0x14088d22c*/
                    v72 = v8 + 72; /*0x14088d233*/
                    sub_1416C3400(&off_1417955D8, v13, v8, v11); /*0x14088d241*/
                  case 2: /*0x14088cfe8*/
                    v75 = v8 + 56; /*0x14088d1f0*/
                    v74 = v8 + 192; /*0x14088d1f7*/
                    v73 = v8 + 64; /*0x14088d1fe*/
                    v72 = v8 + 72; /*0x14088d205*/
                    sub_1416C3420(&off_1417955D8, v13, v8, v11); /*0x14088d213*/
                  case 3: /*0x14088cfe8*/
                    v19 = (_BYTE *)(v8 + 176); /*0x14088cff2*/
                    v18 = (__int64 *)(v8 + 80); /*0x14088d001*/
                    switch ( *(_BYTE *)(v8 + 176) ) /*0x14088d013*/
                    {
                      case 0: /*0x14088d013*/
                        v15 = *v18; /*0x14088d015*/
                        break; /*0x14088d018*/
                      case 1: /*0x14088d013*/
                        v81 = v8 + 56; /*0x14088d288*/
                        v80 = v8 + 192; /*0x14088d28f*/
                        v79 = v8 + 64; /*0x14088d296*/
                        v78 = v8 + 184; /*0x14088d29d*/
                        v77 = v8 + 72; /*0x14088d2a4*/
                        v76 = v8 + 80; /*0x14088d2ab*/
                        sub_1416C3400(&off_1417950C0, v13, v8, v11); /*0x14088d2b9*/
                      case 2: /*0x14088d013*/
                        v81 = v8 + 56; /*0x14088d24c*/
                        v80 = v8 + 192; /*0x14088d253*/
                        v79 = v8 + 64; /*0x14088d25a*/
                        v78 = v8 + 184; /*0x14088d261*/
                        v77 = v8 + 72; /*0x14088d268*/
                        v76 = v8 + 80; /*0x14088d26f*/
                        sub_1416C3420(&off_1417950C0, v13, v8, v11); /*0x14088d27d*/
                      case 3: /*0x14088d013*/
                        v20 = (_BYTE *)(v8 + 104); /*0x14088d01d*/
                        v40 = *(unsigned __int8 *)(v8 + 104); /*0x14088d021*/
                        v99 = v8 + 88; /*0x14088d02a*/
                        switch ( v40 ) /*0x14088d03f*/
                        {
                          case 0LL: /*0x14088d03f*/
                            v15 = *(_QWORD *)(v8 + 88); /*0x14088d045*/
                            goto LABEL_10; /*0x14088d048*/
                          case 1LL: /*0x14088d03f*/
                            v71 = v8 + 56; /*0x14088d315*/
                            v70 = v8 + 192; /*0x14088d31c*/
                            v69 = v8 + 64; /*0x14088d323*/
                            v68 = v8 + 184; /*0x14088d32a*/
                            v67 = v8 + 72; /*0x14088d331*/
                            v66 = v8 + 176; /*0x14088d338*/
                            v65 = v8 + 80; /*0x14088d33f*/
                            v64 = v99; /*0x14088d34d*/
                            sub_1416C3400(&off_1417955F0, v13, v8, v11); /*0x14088d35b*/
                          case 2LL: /*0x14088d03f*/
                            v71 = v8 + 56; /*0x14088d2c4*/
                            v70 = v8 + 192; /*0x14088d2cb*/
                            v69 = v8 + 64; /*0x14088d2d2*/
                            v68 = v8 + 184; /*0x14088d2d9*/
                            v67 = v8 + 72; /*0x14088d2e0*/
                            v66 = v8 + 176; /*0x14088d2e7*/
                            v65 = v8 + 80; /*0x14088d2ee*/
                            v64 = v99; /*0x14088d2fc*/
                            sub_1416C3420(&off_1417955F0, v13, v8, v11); /*0x14088d30a*/
                          case 3LL: /*0x14088d03f*/
                            switch ( *(_BYTE *)(v8 + 112) ) /*0x14088d060*/
                            {
                              case 0: /*0x14088d060*/
                              case 3: /*0x14088d060*/
                                goto LABEL_11;
                              case 1: /*0x14088d060*/
                                v95 = (char *)(v8 + 56); /*0x14088d062*/
                                v94 = (_BYTE *)(v8 + 192); /*0x14088d069*/
                                v93 = (_QWORD **)(v8 + 64); /*0x14088d070*/
                                v92 = (_BYTE *)(v8 + 184); /*0x14088d077*/
                                v91 = (__int64 *)(v8 + 72); /*0x14088d07e*/
                                v90 = (_BYTE *)(v8 + 176); /*0x14088d085*/
                                v89 = (__int64 *)(v8 + 80); /*0x14088d08c*/
                                v88 = (_BYTE *)(v8 + 104); /*0x14088d093*/
                                v87 = v99; /*0x14088d0a1*/
                                sub_1416C3400(&off_141795CC8, v13, v8, v11); /*0x14088d0af*/
                              case 2: /*0x14088d060*/
                                v95 = (char *)(v8 + 56); /*0x14088d363*/
                                v94 = (_BYTE *)(v8 + 192); /*0x14088d36a*/
                                v93 = (_QWORD **)(v8 + 64); /*0x14088d371*/
                                v92 = (_BYTE *)(v8 + 184); /*0x14088d378*/
                                v91 = (__int64 *)(v8 + 72); /*0x14088d37f*/
                                v90 = (_BYTE *)(v8 + 176); /*0x14088d386*/
                                v89 = (__int64 *)(v8 + 80); /*0x14088d38d*/
                                v88 = (_BYTE *)(v8 + 104); /*0x14088d394*/
                                v87 = v99; /*0x14088d3a2*/
                                sub_1416C3420(&off_141795CC8, v13, v8, v11); /*0x14088d3b0*/
                            }
                            goto LABEL_11;
                          case 4LL: /*0x14088d03f*/
                            v86 = (_BYTE *)(v8 + 104); /*0x14088d0ba*/
                            v85 = (_BYTE *)(v8 + 176); /*0x14088d0c1*/
                            v83 = (__int64 *)(v8 + 80); /*0x14088d0c8*/
                            v98 = (_BYTE *)(v8 + 184); /*0x14088d0cf*/
                            v82 = (__int64 *)(v8 + 72); /*0x14088d0d6*/
                            v100 = (_BYTE *)(v8 + 192); /*0x14088d0dd*/
                            v96 = (_QWORD **)(v8 + 64); /*0x14088d0e4*/
                            v101 = (char *)(v8 + 56); /*0x14088d0eb*/
                            goto LABEL_12; /*0x14088d0f2*/
                        }
                    }
                    goto LABEL_9; /*0x14088d018*/
                }
            }
            goto LABEL_7; /*0x14088cfb6*/
          case 4: /*0x14088ccf8*/
            v101 = (char *)(v8 + 56); /*0x14088cfbb*/
            goto LABEL_51; /*0x14088cfc2*/
        }
    }
  }
  return result; /*0x14088d4fe*/
}
