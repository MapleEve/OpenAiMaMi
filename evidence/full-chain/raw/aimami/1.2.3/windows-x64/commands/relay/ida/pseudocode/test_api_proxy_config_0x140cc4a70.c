// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = test_api_proxy_config | mapped via command-name string xref (win-native, ground-truth)
char __fastcall test_api_proxy_config(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r13
  __int8 v9; // r15
  __int64 v10; // r12
  __int128 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // rax
  _BYTE *v16; // rdx
  char v17; // al
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  const char *v25; // r14
  __int64 v26; // r12
  __int64 v27; // r15
  _BYTE *v28; // rdx
  char v29; // cl
  char result; // al
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int8 v34; // bl
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int128 v43; // xmm6
  _QWORD *v44; // rcx
  _QWORD *v45; // r14
  __int64 v46; // rdi
  __int64 v47; // rdx
  _QWORD *v48; // rsi
  __m256i v49; // [rsp+30h] [rbp-50h] BYREF
  __int128 v50; // [rsp+50h] [rbp-30h]
  __int128 v51; // [rsp+60h] [rbp-20h]
  __int128 v52; // [rsp+70h] [rbp-10h]
  __int128 v53; // [rsp+80h] [rbp+0h]
  __int64 v54; // [rsp+90h] [rbp+10h]
  _QWORD v55[2]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v56; // [rsp+B0h] [rbp+30h] BYREF
  __int8 v57; // [rsp+B8h] [rbp+38h]
  char v58; // [rsp+B9h] [rbp+39h]
  int v59; // [rsp+BAh] [rbp+3Ah]
  __int16 v60; // [rsp+BEh] [rbp+3Eh]
  __int64 v61; // [rsp+C0h] [rbp+40h]
  __int128 v62; // [rsp+C8h] [rbp+48h]
  const char *v63; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v64; // [rsp+E0h] [rbp+60h]
  const char *v65; // [rsp+E8h] [rbp+68h]
  _BYTE v66[48]; // [rsp+F0h] [rbp+70h]
  __int128 v67; // [rsp+120h] [rbp+A0h]
  __int128 v68; // [rsp+130h] [rbp+B0h]
  __int128 v69; // [rsp+140h] [rbp+C0h]
  __int128 v70; // [rsp+150h] [rbp+D0h]
  __int128 v71; // [rsp+160h] [rbp+E0h]
  __int128 v72; // [rsp+170h] [rbp+F0h]
  __int64 v73; // [rsp+180h] [rbp+100h]
  char v74; // [rsp+188h] [rbp+108h]
  __int128 v75; // [rsp+240h] [rbp+1C0h] BYREF
  unsigned __int64 v76; // [rsp+250h] [rbp+1D0h]
  _BYTE v77[48]; // [rsp+258h] [rbp+1D8h]
  __int128 v78; // [rsp+288h] [rbp+208h]
  __int128 v79; // [rsp+298h] [rbp+218h]
  __int128 v80; // [rsp+2A8h] [rbp+228h]
  __int128 v81; // [rsp+2B8h] [rbp+238h]
  __int128 v82; // [rsp+2C8h] [rbp+248h]
  __int64 v83; // [rsp+2D8h] [rbp+258h]
  __m256i v84; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v85; // [rsp+300h] [rbp+280h]
  __int128 v86; // [rsp+310h] [rbp+290h]
  __int128 v87; // [rsp+320h] [rbp+2A0h]
  __int128 v88; // [rsp+330h] [rbp+2B0h]
  __int64 v89; // [rsp+340h] [rbp+2C0h]
  __m256i v90; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v91; // [rsp+370h] [rbp+2F0h]
  __int128 v92; // [rsp+380h] [rbp+300h]
  __int128 v93; // [rsp+390h] [rbp+310h]
  __int128 v94; // [rsp+3A0h] [rbp+320h]
  __int64 v95; // [rsp+3B0h] [rbp+330h]
  __int64 v96; // [rsp+3B8h] [rbp+338h]
  _QWORD *v97; // [rsp+3C0h] [rbp+340h]
  char v98; // [rsp+3CFh] [rbp+34Fh] BYREF
  _BYTE *v99; // [rsp+3D0h] [rbp+350h]
  _BYTE *v100; // [rsp+3D8h] [rbp+358h]
  __int64 v101; // [rsp+3E0h] [rbp+360h]
  unsigned __int64 v102; // [rsp+3E8h] [rbp+368h]
  _QWORD *v103; // [rsp+3F0h] [rbp+370h]
  __int64 v104; // [rsp+3F8h] [rbp+378h]
  char v105; // [rsp+407h] [rbp+387h]
  __int64 v106; // [rsp+408h] [rbp+388h]

  v106 = -2; /*0x140cc4a92*/
  v5 = a1; /*0x140cc4aa0*/
  v6 = *(unsigned __int8 *)(a1 + 2672); /*0x140cc4aa3*/
  v104 = a1; /*0x140cc4ab8*/
  switch ( v6 ) /*0x140cc4abf*/
  {
    case 0LL: /*0x140cc4abf*/
      *(_WORD *)(a1 + 2673) = 257; /*0x140cc4ac1*/
      *(_BYTE *)(a1 + 2675) = 1; /*0x140cc4aca*/
      v7 = a1 + 1528; /*0x140cc4ad8*/
      sub_141684120(a1 + 1528, a1 + 392, 1136); /*0x140cc4ae8*/
      switch ( *(_BYTE *)(v5 + 2656) ) /*0x140cc4b02*/
      {
        case 0: /*0x140cc4b02*/
          goto LABEL_4;
        case 1: /*0x140cc4b02*/
          goto LABEL_67;
        case 2: /*0x140cc4b02*/
          goto LABEL_66;
        case 3: /*0x140cc4b02*/
          goto LABEL_7;
      }
    case 1LL: /*0x140cc4abf*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140cc56b8*/
    case 2LL: /*0x140cc4abf*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140cc56aa*/
    case 3LL: /*0x140cc4abf*/
      v7 = a1 + 1528; /*0x140cc4b04*/
      switch ( *(_BYTE *)(a1 + 2656) ) /*0x140cc4b20*/
      {
        case 0: /*0x140cc4b20*/
LABEL_4:
          *(_QWORD *)&v92 = 0; /*0x140cc4b22*/
          v90.m256i_i64[0] = (__int64)aTestApiProxyCo; /*0x140cc4b3b*/
          v90.m256i_i64[1] = 21; /*0x140cc4b42*/
          v90.m256i_i64[2] = (__int64)aApp_2; /*0x140cc4b54*/
          v90.m256i_i64[3] = 3; /*0x140cc4b5b*/
          v101 = v7; /*0x140cc4b66*/
          *(_QWORD *)&v91 = v7; /*0x140cc4b6d*/
          v103 = (_QWORD *)(v5 + 2048); /*0x140cc4b74*/
          *((_QWORD *)&v91 + 1) = v5 + 2048; /*0x140cc4b7b*/
          sub_1401C3650(&v63, &v90); /*0x140cc4b8d*/
          v8 = *(unsigned int *)((char *)&v64 + 2) | ((unsigned __int64)HIWORD(v64) << 32); /*0x140cc4ba3*/
          v9 = v64; /*0x140cc4ba6*/
          v10 = (__int64)v65; /*0x140cc4baf*/
          v11 = *(_OWORD *)v66; /*0x140cc4bb3*/
          if ( v63 == (const char *)-1LL ) /*0x140cc4bbf*/
          {
            LOBYTE(v102) = BYTE1(v64); /*0x140cc4e27*/
LABEL_44:
            sub_140BF0DE0(v101); /*0x140cc533e*/
            if ( *v103 == -1 ) /*0x140cc5356*/
            {
              v34 = 1; /*0x140cc53ea*/
              v40 = v104; /*0x140cc53ec*/
LABEL_61:
              *(_BYTE *)(v40 + 2656) = 1; /*0x140cc5569*/
              sub_140BE5270(v101); /*0x140cc5578*/
              v59 = v8; /*0x140cc557e*/
              v60 = WORD2(v8); /*0x140cc5586*/
              v61 = v10; /*0x140cc558b*/
              v62 = v11; /*0x140cc558f*/
              v57 = v9; /*0x140cc559a*/
              v58 = v102; /*0x140cc55a5*/
              v56 = v34; /*0x140cc55a8*/
              v46 = v104; /*0x140cc55ac*/
              *(_BYTE *)(v104 + 2675) = 0; /*0x140cc55b3*/
              sub_141684120(&v63, v46, 360); /*0x140cc55ca*/
              *(_BYTE *)(v46 + 2674) = 0; /*0x140cc55cf*/
              v47 = *(_QWORD *)(v46 + 384); /*0x140cc55d6*/
              *(_BYTE *)(v46 + 2673) = 0; /*0x140cc55dd*/
              v76 = *(_QWORD *)(v46 + 376); /*0x140cc55eb*/
              v75 = *(_OWORD *)(v46 + 360); /*0x140cc55f9*/
              sub_14047E370( /*0x140cc5622*/
                (unsigned int)&v63,
                v47,
                (unsigned int)&v56,
                (unsigned int)&v75,
                *(_DWORD *)(v46 + 2664),
                *(_DWORD *)(v46 + 2668));
              v29 = 1; /*0x140cc5628*/
              result = 0; /*0x140cc562a*/
              v28 = (_BYTE *)v104; /*0x140cc562c*/
              goto LABEL_62; /*0x140cc562c*/
            }
            v97 = (_QWORD *)(v104 + 2056); /*0x140cc536a*/
            v37 = *(_QWORD *)(v104 + 2056); /*0x140cc5371*/
            v99 = *(_BYTE **)(v104 + 2064); /*0x140cc537f*/
            v100 = nullptr; /*0x140cc5386*/
            v83 = v37; /*0x140cc5391*/
            while ( v99 != v100 ) /*0x140cc53ae*/
            {
              ++v100; /*0x140cc53b3*/
              v38 = v37 + 96; /*0x140cc53ba*/
              sub_1402C7520(); /*0x140cc53be*/
              v37 = v38; /*0x140cc53c4*/
            }
            v39 = *v103; /*0x140cc53d0*/
            v34 = 1; /*0x140cc53d3*/
            v40 = v104; /*0x140cc53d8*/
            if ( !*v103 ) /*0x140cc53d0*/
              goto LABEL_61; /*0x140cc53df*/
LABEL_60:
            sub_140001660(*v97, 96 * v39, 8); /*0x140cc554c*/
            goto LABEL_61; /*0x140cc5564*/
          }
          v82 = v71; /*0x140cc4bcc*/
          v81 = v70; /*0x140cc4bda*/
          v80 = v69; /*0x140cc4be8*/
          v79 = v68; /*0x140cc4c0b*/
          v78 = v67; /*0x140cc4c12*/
          *(_OWORD *)&v77[32] = *(_OWORD *)&v66[32]; /*0x140cc4c19*/
          *(__m256i *)v77 = *(__m256i *)v66; /*0x140cc4c20*/
          *(_DWORD *)((char *)&v75 + 10) = *(_DWORD *)((char *)&v64 + 2); /*0x140cc4c27*/
          HIWORD(v75) = WORD2(v8); /*0x140cc4c32*/
          v76 = (unsigned __int64)v65; /*0x140cc4c3a*/
          *(_QWORD *)&v75 = v63; /*0x140cc4c4f*/
          WORD4(v75) = v64; /*0x140cc4c56*/
          v63 = aTestApiProxyCo; /*0x140cc4c6e*/
          v64 = 21; /*0x140cc4c72*/
          v65 = aMode_4; /*0x140cc4c81*/
          *(_QWORD *)v66 = 4; /*0x140cc4c85*/
          *(_QWORD *)&v66[8] = v101; /*0x140cc4c94*/
          *(_OWORD *)&v66[16] = (unsigned __int64)v103; /*0x140cc4c9f*/
          sub_140AEF5D0(&v90, &v63); /*0x140cc4cb1*/
          v9 = v90.m256i_i8[0]; /*0x140cc4cb7*/
          LOBYTE(v102) = v90.m256i_i8[1]; /*0x140cc4cc6*/
          if ( v90.m256i_i8[0] != -1 ) /*0x140cc4cd0*/
          {
            v12 = *(unsigned int *)((char *)v90.m256i_u32 + 2); /*0x140cc4cd6*/
            v13 = v90.m256i_u16[3]; /*0x140cc4cdc*/
            v10 = v90.m256i_i64[1]; /*0x140cc4ce4*/
            v11 = *(_OWORD *)&v90.m256i_u64[2]; /*0x140cc4ceb*/
            sub_140014150(&v75); /*0x140cc4d00*/
LABEL_43:
            v8 = v12 | (v13 << 32); /*0x140cc5337*/
            goto LABEL_44; /*0x140cc533b*/
          }
          v63 = aTestApiProxyCo; /*0x140cc529f*/
          v64 = 21; /*0x140cc52a3*/
          v65 = aUrl_8; /*0x140cc52b2*/
          *(_QWORD *)v66 = 3; /*0x140cc52b6*/
          *(_QWORD *)&v66[8] = v101; /*0x140cc52c5*/
          *(_OWORD *)&v66[16] = (unsigned __int64)v103; /*0x140cc52d0*/
          sub_140973410(&v90, &v63); /*0x140cc52e2*/
          v9 = v90.m256i_i8[0]; /*0x140cc52e8*/
          if ( v90.m256i_i8[0] != -1 ) /*0x140cc52f4*/
          {
            LOBYTE(v102) = v90.m256i_i8[1]; /*0x140cc5301*/
            v12 = *(unsigned int *)((char *)v90.m256i_u32 + 2); /*0x140cc5307*/
            v13 = v90.m256i_u16[3]; /*0x140cc530d*/
            v10 = v90.m256i_i64[1]; /*0x140cc5315*/
            v11 = *(_OWORD *)&v90.m256i_u64[2]; /*0x140cc531c*/
            sub_140014150(&v75); /*0x140cc5331*/
            goto LABEL_43; /*0x140cc5331*/
          }
          v41 = v90.m256i_i64[3]; /*0x140cc540b*/
          v5 = v104; /*0x140cc5412*/
          v42 = v104 + 2072; /*0x140cc5419*/
          v43 = *(_OWORD *)&v90.m256i_u64[1]; /*0x140cc5420*/
          sub_141684120(v104 + 2072, &v75, 152); /*0x140cc5437*/
          *(_BYTE *)(v5 + 2256) = v102; /*0x140cc5443*/
          *(_OWORD *)(v5 + 2224) = v43; /*0x140cc5449*/
          *(_QWORD *)(v5 + 2240) = v41; /*0x140cc5450*/
          *(_BYTE *)(v5 + 2257) = 0; /*0x140cc5457*/
          sub_141684120(v5 + 2264, v42, 192); /*0x140cc5471*/
          v16 = (_BYTE *)(v5 + 2264); /*0x140cc5476*/
          v100 = (_BYTE *)(v5 + 2648); /*0x140cc5480*/
          *(_BYTE *)(v5 + 2648) = 0; /*0x140cc5487*/
LABEL_8:
          v102 = v5 + 2456; /*0x140cc4d3e*/
          v99 = v16; /*0x140cc4d52*/
          sub_141684120(v5 + 2456, v16, 192); /*0x140cc4d59*/
LABEL_10:
          sub_141684120(&v63, v102, 152); /*0x140cc4da1*/
          v17 = *(_BYTE *)(v5 + 2640); /*0x140cc4db7*/
          v72 = *(_OWORD *)(v5 + 2608); /*0x140cc4dc5*/
          v73 = *(_QWORD *)(v5 + 2624); /*0x140cc4dd3*/
          v74 = v17; /*0x140cc4dda*/
          v18 = off_141EC8710; /*0x140cc4de0*/
          if ( *((_DWORD *)off_141EC8710 + 24) ) /*0x140cc4de7*/
          {
            v105 = 1; /*0x140cc5654*/
            v48 = off_141EC8710; /*0x140cc5662*/
            sub_1416984A3(off_141EC8710); /*0x140cc5665*/
            v18 = v48; /*0x140cc566a*/
          }
          if ( *((_DWORD *)v18 + 4) == 2 ) /*0x140cc4df6*/
          {
            v19 = 704; /*0x140cc4e00*/
            if ( *(_BYTE *)v18 ) /*0x140cc4df8*/
              v19 = 472; /*0x140cc4e05*/
            v20 = v18[1] + v19; /*0x140cc4e09*/
            v105 = 0; /*0x140cc4e0d*/
            v21 = sub_14089AD40(v20, v18, &v63, &off_1417642A8); /*0x140cc4e1f*/
          }
          else
          {
            v22 = 704; /*0x140cc4e3b*/
            if ( *((_BYTE *)v18 + 64) ) /*0x140cc4e32*/
              v22 = 472; /*0x140cc4e40*/
            v23 = v18[9] + v22; /*0x140cc4e48*/
            v105 = 0; /*0x140cc4e4c*/
            v21 = sub_14089AD40(v23, v18 + 8, &v63, &off_141764290); /*0x140cc4e61*/
          }
          v24 = v104; /*0x140cc4e67*/
          *(_QWORD *)(v104 + 2632) = v21; /*0x140cc4e6e*/
          v103 = (_QWORD *)(v24 + 2632); /*0x140cc4e83*/
          sub_140AFF940(&v63, v24 + 2632, a2); /*0x140cc4e8d*/
          v25 = v63; /*0x140cc4e93*/
          if ( v63 != (const char *)-3LL ) /*0x140cc4e9b*/
          {
            if ( v63 == (const char *)-2LL ) /*0x140cc4ea1*/
            {
              v8 = v64; /*0x140cc4ea3*/
              *((_QWORD *)&v11 + 1) = v65; /*0x140cc4ea7*/
              v26 = 0x800000000000000CuLL; /*0x140cc4eab*/
              v27 = *(_QWORD *)v66; /*0x140cc4eb5*/
            }
            else
            {
              v26 = v64; /*0x140cc4ee3*/
              v8 = (unsigned __int64)v65; /*0x140cc4ee7*/
              v27 = *(_QWORD *)&v66[8]; /*0x140cc4eef*/
              *((_QWORD *)&v11 + 1) = *(_QWORD *)v66; /*0x140cc4eef*/
              v84 = *(__m256i *)&v66[16]; /*0x140cc4efa*/
              v85 = v67; /*0x140cc4f16*/
              v86 = v68; /*0x140cc4f24*/
              v87 = v69; /*0x140cc4f32*/
              v88 = v70; /*0x140cc4f40*/
              v89 = v71; /*0x140cc4f4e*/
            }
            v49 = v84; /*0x140cc4f71*/
            v50 = v85; /*0x140cc4f79*/
            v51 = v86; /*0x140cc4f7d*/
            v52 = v87; /*0x140cc4f88*/
            v53 = v88; /*0x140cc4f93*/
            v54 = v89; /*0x140cc4f9e*/
            v31 = *v103; /*0x140cc4fa9*/
            if ( (unsigned __int8)sub_1412F2A80(*v103) ) /*0x140cc4faf*/
              sub_1412E7580(v31); /*0x140cc4fbc*/
            if ( v25 == (const char *)-2LL ) /*0x140cc4fc6*/
            {
              v63 = (const char *)v26; /*0x140cc4fc8*/
              v64 = v8; /*0x140cc4fcc*/
              v65 = *((const char **)&v11 + 1); /*0x140cc4fd0*/
              *(_QWORD *)v66 = v27; /*0x140cc4fd4*/
              *(_OWORD *)&v66[8] = *(_OWORD *)v49.m256i_i8; /*0x140cc4fdc*/
              v55[0] = &v63; /*0x140cc4fe0*/
              v55[1] = sub_141230630; /*0x140cc4feb*/
              sub_14149C0F0(&v84, &unk_1417B8CB0, v55); /*0x140cc5001*/
              sub_140BF0F60(&v63); /*0x140cc500b*/
              v8 = v84.m256i_u64[1]; /*0x140cc5018*/
              v26 = v84.m256i_i64[0]; /*0x140cc5018*/
              *((_QWORD *)&v11 + 1) = v84.m256i_i64[2]; /*0x140cc501f*/
              *(_BYTE *)(v104 + 2641) = 1; /*0x140cc502d*/
            }
            else
            {
              v95 = v54; /*0x140cc503d*/
              v94 = v53; /*0x140cc5048*/
              v93 = v52; /*0x140cc5053*/
              v92 = v51; /*0x140cc506a*/
              v91 = v50; /*0x140cc5071*/
              v90 = v49; /*0x140cc5078*/
              *(_BYTE *)(v104 + 2641) = 1; /*0x140cc508d*/
              if ( v25 != (const char *)-1LL ) /*0x140cc5098*/
              {
                *(_QWORD *)&v82 = v95; /*0x140cc50a5*/
                v81 = v94; /*0x140cc50b3*/
                v80 = v93; /*0x140cc50c1*/
                v79 = v92; /*0x140cc50e4*/
                v78 = v91; /*0x140cc50eb*/
                *(__m256i *)&v77[16] = v90; /*0x140cc50f2*/
                *(_QWORD *)&v75 = v25; /*0x140cc5100*/
                *((_QWORD *)&v75 + 1) = v26; /*0x140cc5107*/
                v76 = v8; /*0x140cc510e*/
                *(_QWORD *)v77 = *((_QWORD *)&v11 + 1); /*0x140cc5115*/
                *(_QWORD *)&v77[8] = v27; /*0x140cc511c*/
                sub_140B06230(&v63, &v75); /*0x140cc512e*/
                v8 = *(unsigned int *)((char *)&v64 + 2) | ((unsigned __int64)HIWORD(v64) << 32); /*0x140cc5144*/
                v9 = v64; /*0x140cc5147*/
                v10 = (__int64)v65; /*0x140cc5150*/
                v11 = *(_OWORD *)v66; /*0x140cc5154*/
                if ( v63 == (const char *)-1LL ) /*0x140cc5160*/
                {
                  LOBYTE(v102) = BYTE1(v64); /*0x140cc5493*/
                  v34 = 0; /*0x140cc5499*/
                }
                else
                {
                  v84.m256i_i64[0] = 0; /*0x140cc519a*/
                  *(_OWORD *)&v84.m256i_u64[1] = 1u; /*0x140cc51a5*/
                  v49.m256i_i64[2] = 1610612768; /*0x140cc51bb*/
                  v49.m256i_i64[0] = (__int64)&v84; /*0x140cc51ca*/
                  v49.m256i_i64[1] = (__int64)&off_1417C41C0; /*0x140cc51d5*/
                  if ( (unsigned __int8)sub_141230630(&v63, &v49, v33) ) /*0x140cc51e1*/
                    sub_1416C3060( /*0x140cc5698*/
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v98,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v11 = *(_OWORD *)&v84.m256i_u64[1]; /*0x140cc51f6*/
                  v10 = v84.m256i_i64[0]; /*0x140cc51f6*/
                  sub_140BF0F60(&v63); /*0x140cc5208*/
                  v34 = 1; /*0x140cc520e*/
                  v9 = 3; /*0x140cc5210*/
                }
LABEL_55:
                *v100 = 1; /*0x140cc549b*/
                sub_140BC6430(v99); /*0x140cc54ac*/
                sub_140BF0DE0(v101); /*0x140cc54b9*/
                v40 = v104; /*0x140cc54bf*/
                if ( *(_QWORD *)(v104 + 2048) == -1 ) /*0x140cc54ce*/
                  goto LABEL_61; /*0x140cc54ce*/
                v97 = (_QWORD *)(v104 + 2056); /*0x140cc54db*/
                v44 = *(_QWORD **)(v104 + 2056); /*0x140cc54e2*/
                v99 = *(_BYTE **)(v104 + 2064); /*0x140cc54f0*/
                v100 = nullptr; /*0x140cc54f7*/
                v103 = v44; /*0x140cc5502*/
                while ( v99 != v100 ) /*0x140cc551e*/
                {
                  ++v100; /*0x140cc5523*/
                  v45 = v44 + 12; /*0x140cc552a*/
                  sub_1402C7520(); /*0x140cc552e*/
                  v44 = v45; /*0x140cc5534*/
                }
                v40 = v104; /*0x140cc5539*/
                v39 = *(_QWORD *)(v104 + 2048); /*0x140cc5540*/
                if ( !v39 ) /*0x140cc554a*/
                  goto LABEL_61; /*0x140cc554a*/
                goto LABEL_60; /*0x140cc554a*/
              }
            }
            if ( v11 < 0 ) /*0x140cc521b*/
            {
              v35 = 0; /*0x140cc521d*/
              goto LABEL_35; /*0x140cc521d*/
            }
            if ( *((_QWORD *)&v11 + 1) ) /*0x140cc523e*/
            {
              nullsub_1(v32); /*0x140cc5244*/
              v35 = 1; /*0x140cc5249*/
              v36 = sub_140001650(*((_QWORD *)&v11 + 1), 1); /*0x140cc5256*/
              if ( !v36 ) /*0x140cc525e*/
              {
LABEL_35:
                v102 = v8; /*0x140cc521f*/
                v103 = (_QWORD *)v26; /*0x140cc5226*/
                sub_1416C2D4B(v35, *((_QWORD *)&v11 + 1)); /*0x140cc5233*/
              }
              *(_QWORD *)&v11 = v36; /*0x140cc5260*/
              sub_141684120(v36, v8, *((_QWORD *)&v11 + 1)); /*0x140cc526c*/
              if ( !v26 ) /*0x140cc5274*/
                goto LABEL_40; /*0x140cc5274*/
            }
            else
            {
              *(_QWORD *)&v11 = 1; /*0x140cc53f8*/
              if ( !v26 ) /*0x140cc5400*/
                goto LABEL_40; /*0x140cc5400*/
            }
            sub_140001660(v8, v26, 1); /*0x140cc5282*/
LABEL_40:
            v34 = 1; /*0x140cc5287*/
            v9 = 3; /*0x140cc5289*/
            v10 = *((_QWORD *)&v11 + 1); /*0x140cc528c*/
            goto LABEL_55; /*0x140cc528f*/
          }
          v28 = (_BYTE *)v104; /*0x140cc4ebe*/
          *(_BYTE *)(v104 + 2641) = 3; /*0x140cc4ec5*/
          v28[2648] = 3; /*0x140cc4ecc*/
          v28[2656] = 3; /*0x140cc4ed3*/
          v29 = 3; /*0x140cc4eda*/
          result = 1; /*0x140cc4edc*/
LABEL_62:
          v28[2672] = v29; /*0x140cc5633*/
          return result;
        case 1: /*0x140cc4b20*/
LABEL_67:
          v101 = v7; /*0x140cc56d5*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140cc56e3*/
        case 2: /*0x140cc4b20*/
LABEL_66:
          v101 = v7; /*0x140cc56bf*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140cc56cd*/
        case 3: /*0x140cc4b20*/
LABEL_7:
          v101 = v7; /*0x140cc4d0b*/
          v14 = v5 + 2648; /*0x140cc4d12*/
          v15 = *(unsigned __int8 *)(v5 + 2648); /*0x140cc4d19*/
          v16 = (_BYTE *)(v5 + 2264); /*0x140cc4d20*/
          v100 = (_BYTE *)(v5 + 2648); /*0x140cc4d35*/
          switch ( v15 ) /*0x140cc4d3c*/
          {
            case 0LL: /*0x140cc4d3c*/
              goto LABEL_8;
            case 1LL: /*0x140cc4d3c*/
              v96 = v5 + 2264; /*0x140cc571f*/
              sub_1416C3400(&off_1417B7B80, v16, v14, a4); /*0x140cc572d*/
            case 2LL: /*0x140cc4d3c*/
              v96 = v5 + 2264; /*0x140cc5709*/
              sub_1416C3420(&off_1417B7B80, v16, v14, a4); /*0x140cc5717*/
            case 3LL: /*0x140cc4d3c*/
              v99 = (_BYTE *)(v5 + 2264); /*0x140cc4d75*/
              v102 = v5 + 2456; /*0x140cc4d83*/
              goto LABEL_10; /*0x140cc4d83*/
          }
      }
  }
}