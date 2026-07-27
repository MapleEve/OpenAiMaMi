// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = detect_api_proxy_config | mapped via command-name string xref (win-native, ground-truth)
char __fastcall detect_api_proxy_config(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // r13
  unsigned __int64 v9; // r15
  char v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r13
  const char *v28; // rbx
  unsigned __int64 v29; // r13
  __int64 v30; // r12
  _BYTE *v31; // rdx
  char v32; // cl
  char result; // al
  __int64 *v34; // r14
  __int64 v35; // r14
  __int64 v36; // rcx
  __int64 *v37; // r14
  __int64 v38; // r8
  unsigned __int8 v39; // bl
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 *v46; // rcx
  __int64 *v47; // r13
  __int64 v48; // rdi
  __int64 v49; // rdx
  _QWORD *v50; // rsi
  _BYTE v51[136]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v52; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v53; // [rsp+C8h] [rbp+48h]
  __int128 v54; // [rsp+140h] [rbp+C0h] BYREF
  const char *v55; // [rsp+150h] [rbp+D0h]
  __int64 v56; // [rsp+158h] [rbp+D8h]
  __int64 v57; // [rsp+160h] [rbp+E0h]
  _QWORD v58[18]; // [rsp+168h] [rbp+E8h] BYREF
  unsigned __int64 v59; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v60; // [rsp+200h] [rbp+180h]
  __int64 v61; // [rsp+208h] [rbp+188h]
  __int128 v62; // [rsp+280h] [rbp+200h]
  __int128 v63; // [rsp+290h] [rbp+210h]
  __int128 v64; // [rsp+2A0h] [rbp+220h]
  __int128 v65; // [rsp+2B0h] [rbp+230h]
  __int128 v66; // [rsp+2C0h] [rbp+240h]
  __int128 v67; // [rsp+2D0h] [rbp+250h]
  __int128 v68; // [rsp+2E0h] [rbp+260h]
  unsigned __int64 v69; // [rsp+2F8h] [rbp+278h] BYREF
  unsigned __int64 v70; // [rsp+300h] [rbp+280h]
  __int64 v71; // [rsp+308h] [rbp+288h]
  __int64 v72; // [rsp+310h] [rbp+290h]
  _OWORD v73[20]; // [rsp+318h] [rbp+298h] BYREF
  _QWORD v74[2]; // [rsp+460h] [rbp+3E0h] BYREF
  __int64 v75; // [rsp+470h] [rbp+3F0h] BYREF
  char v76; // [rsp+478h] [rbp+3F8h]
  int v77; // [rsp+479h] [rbp+3F9h]
  __int16 v78; // [rsp+47Dh] [rbp+3FDh]
  char v79; // [rsp+47Fh] [rbp+3FFh]
  __int64 v80; // [rsp+480h] [rbp+400h]
  __int64 v81; // [rsp+488h] [rbp+408h]
  __int64 v82; // [rsp+490h] [rbp+410h]
  __int64 v83; // [rsp+498h] [rbp+418h]
  __int64 v84; // [rsp+4A0h] [rbp+420h]
  char v85; // [rsp+4AFh] [rbp+42Fh] BYREF
  __int64 v86; // [rsp+4B0h] [rbp+430h]
  __int64 *v87; // [rsp+4B8h] [rbp+438h]
  __int64 *v88; // [rsp+4C0h] [rbp+440h]
  __int64 *v89; // [rsp+4C8h] [rbp+448h]
  __int64 v90; // [rsp+4D0h] [rbp+450h]
  char v91; // [rsp+4DFh] [rbp+45Fh]
  __int64 v92; // [rsp+4E0h] [rbp+460h]

  v92 = -2; /*0x140cc396b*/
  v5 = a1; /*0x140cc3979*/
  v6 = *(unsigned __int8 *)(a1 + 2528); /*0x140cc397c*/
  v90 = a1; /*0x140cc3991*/
  switch ( v6 ) /*0x140cc3998*/
  {
    case 0LL: /*0x140cc3998*/
      *(_WORD *)(a1 + 2529) = 257; /*0x140cc399a*/
      *(_BYTE *)(a1 + 2531) = 1; /*0x140cc39a4*/
      v7 = a1 + 1456; /*0x140cc39b3*/
      sub_141684120(a1 + 1456, a1 + 392, 1064); /*0x140cc39c3*/
      switch ( *(_BYTE *)(v5 + 2512) ) /*0x140cc39de*/
      {
        case 0: /*0x140cc39de*/
          goto LABEL_4;
        case 1: /*0x140cc39de*/
          goto LABEL_61;
        case 2: /*0x140cc39de*/
          goto LABEL_60;
        case 3: /*0x140cc39de*/
          goto LABEL_6;
      }
    case 1LL: /*0x140cc3998*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140cc43bc*/
    case 2LL: /*0x140cc3998*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140cc43ae*/
    case 3LL: /*0x140cc3998*/
      v7 = a1 + 1456; /*0x140cc39e0*/
      switch ( *(_BYTE *)(a1 + 2512) ) /*0x140cc39fd*/
      {
        case 0: /*0x140cc39fd*/
LABEL_4:
          v8 = (__int64 *)(v5 + 1976); /*0x140cc39ff*/
          v58[1] = 0; /*0x140cc3a06*/
          *(_QWORD *)&v54 = aDetectApiProxy; /*0x140cc3a18*/
          *((_QWORD *)&v54 + 1) = 23; /*0x140cc3a1f*/
          v55 = aApp_2; /*0x140cc3a31*/
          v56 = 3; /*0x140cc3a38*/
          v86 = v7; /*0x140cc3a43*/
          v57 = v7; /*0x140cc3a4a*/
          v58[0] = v8; /*0x140cc3a51*/
          sub_1401C3650(&v69, &v54); /*0x140cc3a66*/
          v9 = ((unsigned __int64)((HIBYTE(v70) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v70 + 5)) << 32) /*0x140cc3a91*/
             | *(unsigned int *)((char *)&v70 + 1);
          v10 = v70; /*0x140cc3a94*/
          v11 = v71; /*0x140cc3a9c*/
          v12 = v72; /*0x140cc3aa3*/
          v13 = *(_QWORD *)&v73[0]; /*0x140cc3aaa*/
          if ( v69 == -1 ) /*0x140cc3ab5*/
          {
            v89 = v8; /*0x140cc409b*/
            sub_140BF0DE0(v86); /*0x140cc40a9*/
            v39 = 1; /*0x140cc40af*/
            if ( *v89 == -1 ) /*0x140cc40bc*/
              goto LABEL_45; /*0x140cc40bc*/
            v41 = *(_QWORD *)(v90 + 1984); /*0x140cc40c9*/
            v88 = *(__int64 **)(v90 + 1992); /*0x140cc40d7*/
            v87 = nullptr; /*0x140cc40de*/
            v84 = v41; /*0x140cc40e9*/
            while ( v88 != v87 ) /*0x140cc40fe*/
            {
              v87 = (__int64 *)((char *)v87 + 1); /*0x140cc4103*/
              v42 = v41 + 96; /*0x140cc410a*/
              sub_1402C7520(); /*0x140cc410e*/
              v41 = v42; /*0x140cc4114*/
            }
            v44 = *v89; /*0x140cc4173*/
            if ( !*v89 ) /*0x140cc4173*/
            {
LABEL_45:
              v45 = v90; /*0x140cc4187*/
              goto LABEL_55; /*0x140cc418e*/
            }
            v45 = v90; /*0x140cc417b*/
            goto LABEL_54; /*0x140cc4182*/
          }
          v68 = *(_OWORD *)((char *)&v73[6] + 8); /*0x140cc3ac2*/
          v67 = *(_OWORD *)((char *)&v73[5] + 8); /*0x140cc3ad0*/
          v66 = *(_OWORD *)((char *)&v73[4] + 8); /*0x140cc3ade*/
          v65 = *(_OWORD *)((char *)&v73[3] + 8); /*0x140cc3b01*/
          v64 = *(_OWORD *)((char *)&v73[2] + 8); /*0x140cc3b08*/
          v63 = *(_OWORD *)((char *)&v73[1] + 8); /*0x140cc3b0f*/
          v62 = *(_OWORD *)((char *)v73 + 8); /*0x140cc3b16*/
          v5 = v90; /*0x140cc3b1d*/
          v14 = v90 + 2000; /*0x140cc3b24*/
          *(_QWORD *)(v90 + 2000) = v69; /*0x140cc3b2b*/
          *(_BYTE *)(v5 + 2008) = v10; /*0x140cc3b32*/
          *(_BYTE *)(v5 + 2015) = BYTE6(v9); /*0x140cc3b40*/
          *(_WORD *)(v5 + 2013) = WORD2(v9); /*0x140cc3b4e*/
          *(_DWORD *)(v5 + 2009) = v9; /*0x140cc3b56*/
          *(_QWORD *)(v5 + 2016) = v11; /*0x140cc3b5d*/
          *(_QWORD *)(v5 + 2024) = v12; /*0x140cc3b64*/
          *(_QWORD *)(v5 + 2032) = v13; /*0x140cc3b6b*/
          v15 = v63; /*0x140cc3b79*/
          v16 = v64; /*0x140cc3b80*/
          v17 = v65; /*0x140cc3b87*/
          *(_OWORD *)(v5 + 2040) = v62; /*0x140cc3b8e*/
          *(_OWORD *)(v5 + 2056) = v15; /*0x140cc3b96*/
          *(_OWORD *)(v5 + 2072) = v16; /*0x140cc3b9e*/
          *(_OWORD *)(v5 + 2088) = v17; /*0x140cc3ba6*/
          *(_OWORD *)(v5 + 2104) = v66; /*0x140cc3bb5*/
          *(_OWORD *)(v5 + 2120) = v67; /*0x140cc3bc4*/
          *(_OWORD *)(v5 + 2136) = v68; /*0x140cc3bd3*/
          *(_BYTE *)(v5 + 2160) = 0; /*0x140cc3bdb*/
          v18 = v5 + 2168; /*0x140cc3be3*/
          sub_141684120(v5 + 2168, v14, 168); /*0x140cc3bf3*/
          v87 = (__int64 *)(v5 + 2504); /*0x140cc3bff*/
          *(_BYTE *)(v5 + 2504) = 0; /*0x140cc3c06*/
LABEL_7:
          v89 = (__int64 *)(v5 + 2336); /*0x140cc3c44*/
          v84 = v18; /*0x140cc3c58*/
          sub_141684120(v5 + 2336, v18, 168); /*0x140cc3c62*/
LABEL_9:
          sub_141684120(&v69, v89, 152); /*0x140cc3cac*/
          v21 = off_141EC8710; /*0x140cc3cc5*/
          if ( *((_DWORD *)off_141EC8710 + 24) ) /*0x140cc3ccc*/
          {
            v91 = 1; /*0x140cc4358*/
            v50 = off_141EC8710; /*0x140cc4366*/
            sub_1416984A3(off_141EC8710); /*0x140cc4369*/
            v21 = v50; /*0x140cc436e*/
          }
          if ( *((_DWORD *)v21 + 4) == 2 ) /*0x140cc3cdb*/
          {
            v22 = 704; /*0x140cc3ce5*/
            if ( *(_BYTE *)v21 ) /*0x140cc3cdd*/
              v22 = 472; /*0x140cc3cea*/
            v23 = v21[1] + v22; /*0x140cc3cee*/
            v91 = 0; /*0x140cc3cf2*/
            v24 = sub_14089B030(v23, v21, &v69, &off_1417642A8); /*0x140cc3d07*/
          }
          else
          {
            v25 = 704; /*0x140cc3d18*/
            if ( *((_BYTE *)v21 + 64) ) /*0x140cc3d0f*/
              v25 = 472; /*0x140cc3d1d*/
            v26 = v21[9] + v25; /*0x140cc3d25*/
            v91 = 0; /*0x140cc3d29*/
            v24 = sub_14089B030(v26, v21 + 8, &v69, &off_141764290); /*0x140cc3d41*/
          }
          v27 = v90; /*0x140cc3d47*/
          *(_QWORD *)(v90 + 2488) = v24; /*0x140cc3d4e*/
          v88 = (__int64 *)(v27 + 2488); /*0x140cc3d66*/
          sub_140B000A0(&v69, v27 + 2488, a2); /*0x140cc3d70*/
          v9 = v69; /*0x140cc3d76*/
          if ( v69 == -3 ) /*0x140cc3d81*/
          {
            v31 = (_BYTE *)v90; /*0x140cc3daa*/
            *(_BYTE *)(v90 + 2496) = 3; /*0x140cc3db1*/
            v31[2504] = 3; /*0x140cc3db8*/
            v31[2512] = 3; /*0x140cc3dbf*/
            v32 = 3; /*0x140cc3dc6*/
            result = 1; /*0x140cc3dc8*/
            goto LABEL_56; /*0x140cc3dca*/
          }
          if ( v69 == -2 ) /*0x140cc3d87*/
          {
            v28 = (const char *)v70; /*0x140cc3d89*/
            v13 = v71; /*0x140cc3d90*/
            v29 = 0x800000000000000CuLL; /*0x140cc3d97*/
            v30 = v72; /*0x140cc3da1*/
          }
          else
          {
            v29 = v70; /*0x140cc3dcf*/
            v28 = (const char *)v71; /*0x140cc3dd6*/
            v13 = v72; /*0x140cc3ddd*/
            v30 = *(_QWORD *)&v73[0]; /*0x140cc3de4*/
            sub_141684120(&v59, (char *)v73 + 8, 136); /*0x140cc3dff*/
          }
          v34 = v88; /*0x140cc3e04*/
          sub_141684120(&v52, &v59, 136); /*0x140cc3e1c*/
          v35 = *v34; /*0x140cc3e21*/
          if ( (unsigned __int8)sub_1412F2A80(v35) ) /*0x140cc3e27*/
            sub_1412E7580(v35); /*0x140cc3e34*/
          if ( v9 == -2 ) /*0x140cc3e3e*/
          {
            v69 = v29; /*0x140cc3e44*/
            v70 = (unsigned __int64)v28; /*0x140cc3e4b*/
            v71 = v13; /*0x140cc3e52*/
            v72 = v30; /*0x140cc3e59*/
            v73[0] = v52; /*0x140cc3e64*/
            v74[0] = &v69; /*0x140cc3e6b*/
            v74[1] = sub_141230630; /*0x140cc3e79*/
            sub_14149C0F0(&v59, &unk_1417B8CB0, v74); /*0x140cc3e95*/
            sub_140BF0F60(&v69); /*0x140cc3ea2*/
            v29 = v59; /*0x140cc3ea8*/
            v37 = (__int64 *)v60; /*0x140cc3eaf*/
            v13 = v61; /*0x140cc3eb6*/
            *(_BYTE *)(v90 + 2496) = 1; /*0x140cc3ec4*/
            goto LABEL_31; /*0x140cc3ecb*/
          }
          sub_141684120(v51, &v52, 136); /*0x140cc3ede*/
          *(_BYTE *)(v90 + 2496) = 1; /*0x140cc3eea*/
          v37 = (__int64 *)v28; /*0x140cc3ef5*/
          if ( v9 == -1 ) /*0x140cc3ef8*/
          {
LABEL_31:
            if ( v13 < 0 ) /*0x140cc4074*/
            {
              v40 = 0; /*0x140cc407a*/
              goto LABEL_33; /*0x140cc407a*/
            }
            if ( v13 ) /*0x140cc4119*/
            {
              nullsub_1(v36); /*0x140cc411b*/
              v40 = 1; /*0x140cc4120*/
              v43 = sub_140001650(v13, 1); /*0x140cc412d*/
              if ( !v43 ) /*0x140cc4135*/
              {
LABEL_33:
                v89 = v37; /*0x140cc407c*/
                v88 = (__int64 *)v29; /*0x140cc4083*/
                sub_1416C2D4B(v40, v13); /*0x140cc4090*/
              }
              v12 = v43; /*0x140cc413b*/
              sub_141684120(v43, v37, v13); /*0x140cc4147*/
              if ( !v29 ) /*0x140cc414f*/
                goto LABEL_42; /*0x140cc414f*/
            }
            else
            {
              v12 = 1; /*0x140cc4193*/
              if ( !v29 ) /*0x140cc419b*/
                goto LABEL_42; /*0x140cc419b*/
            }
            sub_140001660(v37, v29, 1); /*0x140cc415d*/
LABEL_42:
            v39 = 1; /*0x140cc4162*/
            v10 = 3; /*0x140cc4164*/
            v11 = v13; /*0x140cc4167*/
            goto LABEL_49; /*0x140cc416a*/
          }
          sub_141684120(v58, v51, 136); /*0x140cc3f0f*/
          *(_QWORD *)&v54 = v9; /*0x140cc3f14*/
          *((_QWORD *)&v54 + 1) = v29; /*0x140cc3f1b*/
          v55 = v28; /*0x140cc3f22*/
          v56 = v13; /*0x140cc3f29*/
          v57 = v30; /*0x140cc3f30*/
          sub_140B07BD0(&v69, &v54); /*0x140cc3f45*/
          v9 = ((unsigned __int64)((HIBYTE(v70) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v70 + 5)) << 32) /*0x140cc3f70*/
             | *(unsigned int *)((char *)&v70 + 1);
          v10 = v70; /*0x140cc3f73*/
          v11 = v71; /*0x140cc3f7b*/
          v12 = v72; /*0x140cc3f82*/
          v13 = *(_QWORD *)&v73[0]; /*0x140cc3f89*/
          if ( v69 == -1 ) /*0x140cc3f94*/
          {
            v39 = 0; /*0x140cc419f*/
          }
          else
          {
            HIBYTE(v70) = (((unsigned __int64)((HIBYTE(v70) << 16) /*0x140cc3fa8*/
                                             | (unsigned int)*(unsigned __int16 *)((char *)&v70 + 5)) << 32)
                         | *(unsigned int *)((char *)&v70 + 1)) >> 48;
            *(_WORD *)((char *)&v70 + 5) = WORD2(v9); /*0x140cc3fb5*/
            *(_DWORD *)((char *)&v70 + 1) = v9; /*0x140cc3fbc*/
            v59 = 0; /*0x140cc3fed*/
            v60 = 1; /*0x140cc3ff8*/
            v61 = 0; /*0x140cc4003*/
            v53 = 1610612768; /*0x140cc400e*/
            *(_QWORD *)&v52 = &v59; /*0x140cc401d*/
            *((_QWORD *)&v52 + 1) = &off_1417C41C0; /*0x140cc4028*/
            if ( (unsigned __int8)sub_141230630(&v69, &v52, v38) ) /*0x140cc4037*/
              sub_1416C3060( /*0x140cc439c*/
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v85,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v11 = v59; /*0x140cc4045*/
            v12 = v60; /*0x140cc404c*/
            v13 = v61; /*0x140cc4053*/
            sub_140BF0F60(&v69); /*0x140cc4061*/
            v39 = 1; /*0x140cc4067*/
            v10 = 3; /*0x140cc4069*/
          }
LABEL_49:
          *(_BYTE *)v87 = 1; /*0x140cc41a1*/
          sub_140BF0DE0(v86); /*0x140cc41b2*/
          v45 = v90; /*0x140cc41b8*/
          if ( *(_QWORD *)(v90 + 1976) != -1 ) /*0x140cc41c7*/
          {
            v46 = *(__int64 **)(v90 + 1984); /*0x140cc41cd*/
            v88 = *(__int64 **)(v90 + 1992); /*0x140cc41db*/
            v87 = nullptr; /*0x140cc41e2*/
            v89 = v46; /*0x140cc41ed*/
            while ( v88 != v87 ) /*0x140cc420e*/
            {
              v87 = (__int64 *)((char *)v87 + 1); /*0x140cc4213*/
              v47 = v46 + 12; /*0x140cc421a*/
              sub_1402C7520(); /*0x140cc421e*/
              v46 = v47; /*0x140cc4224*/
            }
            v45 = v90; /*0x140cc4229*/
            v44 = *(_QWORD *)(v90 + 1976); /*0x140cc4230*/
            if ( v44 ) /*0x140cc423a*/
LABEL_54:
              sub_140001660(*(_QWORD *)(v45 + 1984), 96 * v44, 8); /*0x140cc423c*/
          }
LABEL_55:
          *(_BYTE *)(v45 + 2512) = 1; /*0x140cc4256*/
          sub_140BE4E80(v86); /*0x140cc4265*/
          v77 = v9; /*0x140cc426b*/
          v79 = BYTE6(v9); /*0x140cc4279*/
          v78 = WORD2(v9); /*0x140cc4283*/
          v80 = v11; /*0x140cc428b*/
          v81 = v12; /*0x140cc4292*/
          v82 = v13; /*0x140cc4299*/
          v76 = v10; /*0x140cc42a3*/
          v75 = v39; /*0x140cc42aa*/
          v48 = v90; /*0x140cc42b1*/
          *(_BYTE *)(v90 + 2531) = 0; /*0x140cc42b8*/
          sub_141684120(&v69, v48, 360); /*0x140cc42d2*/
          *(_BYTE *)(v48 + 2530) = 0; /*0x140cc42d7*/
          v49 = *(_QWORD *)(v48 + 384); /*0x140cc42de*/
          *(_BYTE *)(v48 + 2529) = 0; /*0x140cc42e5*/
          v55 = *(const char **)(v48 + 376); /*0x140cc42f3*/
          v54 = *(_OWORD *)(v48 + 360); /*0x140cc4301*/
          sub_14047E370( /*0x140cc432d*/
            (unsigned int)&v69,
            v49,
            (unsigned int)&v75,
            (unsigned int)&v54,
            *(_DWORD *)(v48 + 2520),
            *(_DWORD *)(v48 + 2524));
          v32 = 1; /*0x140cc4333*/
          result = 0; /*0x140cc4335*/
          v31 = (_BYTE *)v90; /*0x140cc4337*/
LABEL_56:
          v31[2528] = v32; /*0x140cc433e*/
          return result;
        case 1: /*0x140cc39fd*/
LABEL_61:
          v86 = v7; /*0x140cc43d9*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140cc43e7*/
        case 2: /*0x140cc39fd*/
LABEL_60:
          v86 = v7; /*0x140cc43c3*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140cc43d1*/
        case 3: /*0x140cc39fd*/
LABEL_6:
          v86 = v7; /*0x140cc3c10*/
          v19 = v5 + 2504; /*0x140cc3c17*/
          v20 = *(unsigned __int8 *)(v5 + 2504); /*0x140cc3c1e*/
          v18 = v5 + 2168; /*0x140cc3c26*/
          v87 = (__int64 *)(v5 + 2504); /*0x140cc3c3b*/
          switch ( v20 ) /*0x140cc3c42*/
          {
            case 0LL: /*0x140cc3c42*/
              goto LABEL_7;
            case 1LL: /*0x140cc3c42*/
              v83 = v5 + 2168; /*0x140cc4423*/
              sub_1416C3400(&off_1417B7B80, v19, a3, a4); /*0x140cc4431*/
            case 2LL: /*0x140cc3c42*/
              v83 = v5 + 2168; /*0x140cc440d*/
              sub_1416C3420(&off_1417B7B80, v19, a3, a4); /*0x140cc441b*/
            case 3LL: /*0x140cc3c42*/
              v84 = v5 + 2168; /*0x140cc3c7f*/
              v89 = (__int64 *)(v5 + 2336); /*0x140cc3c8d*/
              goto LABEL_9; /*0x140cc3c8d*/
          }
      }
  }
}