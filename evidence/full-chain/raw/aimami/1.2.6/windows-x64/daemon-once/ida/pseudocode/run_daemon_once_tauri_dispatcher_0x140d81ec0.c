// sub_140D81EC0 @ 0x140d81ec0 | size=0xc19 | windows-x64 1.2.6 | owner: run_daemon_once (tauri command async dispatcher)
// identification method: exact string xref to "run_daemon_once" @ 0x141887265 (single xref, unambiguous) -- tauri
// command-name exact-string xref per partition-plan.json P0 requirement (NOT panic-location, NOT size/CFG heuristics)
// verbatim Hex-Rays decompile() output, IDA MCP win, 2026-08-06, live IDB E:\binary\AiMaMi 1.2.6 win64.exe.i64
// (sha256 763c9b677d612b18115cb56c03f717b1820deb09ad32f89fd43619a0fdcc60fb, total_functions=106272)
char __fastcall sub_140D81EC0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 *v6; // r13
  unsigned __int64 v7; // r15
  char v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  __int64 *v23; // r13
  unsigned __int64 v24; // r12
  _BYTE *v25; // rdx
  char v26; // cl
  char result; // al
  __int64 v28; // rbx
  unsigned __int8 v29; // bl
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 *v36; // rcx
  __int64 *v37; // r13
  __int64 v38; // rdi
  __int64 v39; // rdx
  _QWORD *v40; // rsi
  __int128 v41; // [rsp+30h] [rbp-50h]
  __int128 v42; // [rsp+40h] [rbp-40h]
  __int128 v43; // [rsp+50h] [rbp-30h]
  __int128 v44; // [rsp+60h] [rbp-20h]
  __int128 v45; // [rsp+70h] [rbp-10h]
  __int128 v46; // [rsp+80h] [rbp+0h]
  __int128 v47; // [rsp+90h] [rbp+10h]
  __int128 v48; // [rsp+A0h] [rbp+20h]
  __int128 v49; // [rsp+B0h] [rbp+30h]
  __int128 v50; // [rsp+C0h] [rbp+40h]
  __int128 v51; // [rsp+D0h] [rbp+50h]
  __int128 v52; // [rsp+E0h] [rbp+60h]
  __int128 v53; // [rsp+F0h] [rbp+70h]
  __int128 v54; // [rsp+100h] [rbp+80h]
  __int128 v55; // [rsp+110h] [rbp+90h]
  __int128 v56; // [rsp+120h] [rbp+A0h] BYREF
  const char *v57; // [rsp+130h] [rbp+B0h]
  __int64 v58; // [rsp+138h] [rbp+B8h]
  unsigned __int64 v59; // [rsp+140h] [rbp+C0h]
  __int128 v60; // [rsp+148h] [rbp+C8h]
  __int128 v61; // [rsp+158h] [rbp+D8h]
  __int128 v62; // [rsp+168h] [rbp+E8h]
  __int128 v63; // [rsp+178h] [rbp+F8h]
  __int128 v64; // [rsp+188h] [rbp+108h]
  __int128 v65; // [rsp+198h] [rbp+118h]
  __int128 v66; // [rsp+1A8h] [rbp+128h]
  __int128 v67; // [rsp+1B8h] [rbp+138h]
  __int128 v68; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v69; // [rsp+1E0h] [rbp+160h]
  __int128 v70; // [rsp+1F0h] [rbp+170h]
  __int128 v71; // [rsp+200h] [rbp+180h]
  __int128 v72; // [rsp+210h] [rbp+190h]
  __int128 v73; // [rsp+220h] [rbp+1A0h]
  __int128 v74; // [rsp+230h] [rbp+1B0h]
  __int128 v75; // [rsp+240h] [rbp+1C0h]
  unsigned __int64 v76; // [rsp+250h] [rbp+1D0h] BYREF
  unsigned __int64 v77; // [rsp+258h] [rbp+1D8h]
  __int64 v78; // [rsp+260h] [rbp+1E0h]
  unsigned __int64 v79; // [rsp+268h] [rbp+1E8h]
  _BYTE v80[24]; // [rsp+270h] [rbp+1F0h]
  __int128 v81; // [rsp+288h] [rbp+208h]
  __int128 v82; // [rsp+298h] [rbp+218h]
  __int128 v83; // [rsp+2A8h] [rbp+228h]
  __int128 v84; // [rsp+2B8h] [rbp+238h]
  __int128 v85; // [rsp+2C8h] [rbp+248h]
  __int128 v86; // [rsp+2D8h] [rbp+258h]
  __int128 v87; // [rsp+2E8h] [rbp+268h]
  _QWORD v88[2]; // [rsp+3B8h] [rbp+338h] BYREF
  __int64 v89; // [rsp+3C8h] [rbp+348h] BYREF
  char v90; // [rsp+3D0h] [rbp+350h]
  int v91; // [rsp+3D1h] [rbp+351h]
  __int16 v92; // [rsp+3D5h] [rbp+355h]
  char v93; // [rsp+3D7h] [rbp+357h]
  __int64 v94; // [rsp+3D8h] [rbp+358h]
  __int64 v95; // [rsp+3E0h] [rbp+360h]
  __int64 v96; // [rsp+3E8h] [rbp+368h]
  __int128 v97; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v98; // [rsp+400h] [rbp+380h]
  __int128 v99; // [rsp+410h] [rbp+390h]
  __int128 v100; // [rsp+420h] [rbp+3A0h]
  __int128 v101; // [rsp+430h] [rbp+3B0h]
  __int128 v102; // [rsp+440h] [rbp+3C0h]
  __int128 v103; // [rsp+450h] [rbp+3D0h]
  __int128 v104; // [rsp+460h] [rbp+3E0h]
  __int64 v105; // [rsp+478h] [rbp+3F8h]
  __int64 v106; // [rsp+480h] [rbp+400h]
  char v107; // [rsp+48Fh] [rbp+40Fh] BYREF
  unsigned __int64 v108; // [rsp+490h] [rbp+410h]
  _BYTE *v109; // [rsp+498h] [rbp+418h]
  _QWORD *v110; // [rsp+4A0h] [rbp+420h]
  __int64 *v111; // [rsp+4A8h] [rbp+428h]
  __int64 v112; // [rsp+4B0h] [rbp+430h]
  char v113; // [rsp+4BFh] [rbp+43Fh]
  __int64 v114; // [rsp+4C0h] [rbp+440h]

  v114 = -2; /*0x140d81edb*/
  v3 = a1; /*0x140d81ee9*/
  v4 = *(unsigned __int8 *)(a1 + 2528); /*0x140d81eec*/
  v112 = a1; /*0x140d81f01*/
  switch ( v4 ) /*0x140d81f08*/
  {
    case 0LL: /*0x140d81f08*/
      *(_WORD *)(a1 + 2529) = 257; /*0x140d81f0a*/
      *(_BYTE *)(a1 + 2531) = 1; /*0x140d81f14*/
      v5 = a1 + 1456; /*0x140d81f23*/
      sub_14172B820(a1 + 1456, a1 + 392, 1064); /*0x140d81f33*/
      switch ( *(_BYTE *)(v3 + 2512) ) /*0x140d81f4e*/
      {
        case 0: /*0x140d81f4e*/
          goto LABEL_4;
        case 1: /*0x140d81f4e*/
          goto LABEL_61;
        case 2: /*0x140d81f4e*/
          goto LABEL_60;
        case 3: /*0x140d81f4e*/
          goto LABEL_6;
      }
    case 1LL: /*0x140d81f08*/
      sub_14176EC00(&off_141885220); /*0x140d82a5c*/
    case 2LL: /*0x140d81f08*/
      sub_14176EC20(&off_141885220); /*0x140d82a4e*/
    case 3LL: /*0x140d81f08*/
      v5 = a1 + 1456; /*0x140d81f50*/
      switch ( *(_BYTE *)(a1 + 2512) ) /*0x140d81f6d*/
      {
        case 0: /*0x140d81f6d*/
LABEL_4:
          v6 = (__int64 *)(v3 + 1976); /*0x140d81f6f*/
          *(_QWORD *)&v56 = aRunDaemonOnce; /*0x140d81f88*/
          *((_QWORD *)&v56 + 1) = 15; /*0x140d81f8f*/
          v57 = aApp_4; /*0x140d81fa1*/
          v58 = 3; /*0x140d81fa8*/
          v108 = v5; /*0x140d81fb3*/
          v59 = v5; /*0x140d81fba*/
          v60 = (unsigned __int64)v6; /*0x140d81fc1*/
          sub_1401A9630(&v76, &v56); /*0x140d81fd6*/
          v7 = ((unsigned __int64)((HIBYTE(v77) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v77 + 5)) << 32) /*0x140d82001*/
             | *(unsigned int *)((char *)&v77 + 1);
          v8 = v77; /*0x140d82004*/
          v9 = v78; /*0x140d8200c*/
          v10 = v79; /*0x140d82013*/
          v11 = *(_QWORD *)v80; /*0x140d8201a*/
          if ( v76 == -1 ) /*0x140d82025*/
          {
            v111 = v6; /*0x140d82734*/
            sub_140CAB140(v108); /*0x140d82742*/
            v29 = 1; /*0x140d82748*/
            if ( *v111 == -1 ) /*0x140d82755*/
              goto LABEL_45; /*0x140d82755*/
            v31 = *(_QWORD *)(v112 + 1984); /*0x140d82762*/
            v110 = *(_QWORD **)(v112 + 1992); /*0x140d82770*/
            v109 = nullptr; /*0x140d82777*/
            v106 = v31; /*0x140d82782*/
            while ( v110 != (_QWORD *)v109 ) /*0x140d8279e*/
            {
              ++v109; /*0x140d827a3*/
              v32 = v31 + 96; /*0x140d827aa*/
              sub_140401FB0(); /*0x140d827ae*/
              v31 = v32; /*0x140d827b4*/
            }
            v34 = *v111; /*0x140d82813*/
            if ( !*v111 ) /*0x140d82813*/
            {
LABEL_45:
              v35 = v112; /*0x140d82827*/
              goto LABEL_55; /*0x140d8282e*/
            }
            v35 = v112; /*0x140d8281b*/
            goto LABEL_54; /*0x140d82822*/
          }
          v55 = v86; /*0x140d82032*/
          v54 = v85; /*0x140d82040*/
          v53 = v84; /*0x140d8204e*/
          v52 = v83; /*0x140d8206e*/
          v51 = v82; /*0x140d82072*/
          v50 = v81; /*0x140d82076*/
          v49 = *(_OWORD *)&v80[8]; /*0x140d8207a*/
          v3 = v112; /*0x140d8207e*/
          v12 = v112 + 2000; /*0x140d82085*/
          *(_QWORD *)(v112 + 2000) = v76; /*0x140d8208c*/
          *(_BYTE *)(v3 + 2008) = v8; /*0x140d82093*/
          *(_BYTE *)(v3 + 2015) = BYTE6(v7); /*0x140d820a1*/
          *(_WORD *)(v3 + 2013) = WORD2(v7); /*0x140d820af*/
          *(_DWORD *)(v3 + 2009) = v7; /*0x140d820b7*/
          *(_QWORD *)(v3 + 2016) = v9; /*0x140d820be*/
          *(_QWORD *)(v3 + 2024) = v10; /*0x140d820c5*/
          *(_QWORD *)(v3 + 2032) = v11; /*0x140d820cc*/
          *(_OWORD *)(v3 + 2040) = v49; /*0x140d820e3*/
          *(_OWORD *)(v3 + 2056) = v50; /*0x140d820eb*/
          *(_OWORD *)(v3 + 2072) = v51; /*0x140d820f3*/
          *(_OWORD *)(v3 + 2088) = v52; /*0x140d820fb*/
          *(_OWORD *)(v3 + 2104) = v53; /*0x140d82107*/
          *(_OWORD *)(v3 + 2120) = v54; /*0x140d82116*/
          *(_OWORD *)(v3 + 2136) = v55; /*0x140d82125*/
          *(_BYTE *)(v3 + 2160) = 0; /*0x140d8212d*/
          v13 = v3 + 2168; /*0x140d82135*/
          sub_14172B820(v3 + 2168, v12, 168); /*0x140d82145*/
          v109 = (_BYTE *)(v3 + 2504); /*0x140d82151*/
          *(_BYTE *)(v3 + 2504) = 0; /*0x140d82158*/
LABEL_7:
          v111 = (__int64 *)(v3 + 2336); /*0x140d82196*/
          v106 = v13; /*0x140d821aa*/
          sub_14172B820(v3 + 2336, v13, 168); /*0x140d821b4*/
LABEL_9:
          sub_14172B820(&v76, v111, 152); /*0x140d821fe*/
          v15 = off_141FB97C0; /*0x140d82217*/
          if ( *((_DWORD *)off_141FB97C0 + 24) ) /*0x140d8221e*/
          {
            v113 = 1; /*0x140d829f8*/
            v40 = off_141FB97C0; /*0x140d82a06*/
            sub_14172E34C(off_141FB97C0); /*0x140d82a09*/
            v15 = v40; /*0x140d82a0e*/
          }
          if ( *((_DWORD *)v15 + 4) == 2 ) /*0x140d8222d*/
          {
            v16 = 704; /*0x140d82237*/
            if ( *(_BYTE *)v15 ) /*0x140d8222f*/
              v16 = 472; /*0x140d8223c*/
            v17 = v15[1] + v16; /*0x140d82240*/
            v113 = 0; /*0x140d82244*/
            v18 = sub_14085A6F0(v17, v15, &v76, &off_1417EBF48); /*0x140d82259*/
          }
          else
          {
            v19 = 704; /*0x140d8226a*/
            if ( *((_BYTE *)v15 + 64) ) /*0x140d82261*/
              v19 = 472; /*0x140d8226f*/
            v20 = v15[9] + v19; /*0x140d82277*/
            v113 = 0; /*0x140d8227b*/
            v18 = sub_14085A6F0(v20, v15 + 8, &v76, &off_1417EBF30); /*0x140d82293*/
          }
          v21 = v112; /*0x140d82299*/
          *(_QWORD *)(v112 + 2488) = v18; /*0x140d822a0*/
          v110 = (_QWORD *)(v21 + 2488); /*0x140d822b8*/
          sub_140501B40(&v76, v21 + 2488, a2); /*0x140d822c2*/
          v22 = v76; /*0x140d822c8*/
          if ( v76 == -3 ) /*0x140d822d3*/
          {
            v25 = (_BYTE *)v112; /*0x140d822ff*/
            *(_BYTE *)(v112 + 2496) = 3; /*0x140d82306*/
            v25[2504] = 3; /*0x140d8230d*/
            v25[2512] = 3; /*0x140d82314*/
            v26 = 3; /*0x140d8231b*/
            result = 1; /*0x140d8231d*/
            goto LABEL_56; /*0x140d8231f*/
          }
          if ( v76 == -2 ) /*0x140d822d9*/
          {
            v23 = (__int64 *)v77; /*0x140d822db*/
            v11 = v78; /*0x140d822e2*/
            v24 = 0x800000000000000CuLL; /*0x140d822e9*/
            v7 = v79; /*0x140d822f3*/
          }
          else
          {
            v24 = v77; /*0x140d82324*/
            v23 = (__int64 *)v78; /*0x140d8232b*/
            v11 = v79; /*0x140d82332*/
            v7 = *(_QWORD *)v80; /*0x140d82339*/
            v97 = *(_OWORD *)&v80[8]; /*0x140d82347*/
            v98 = v81; /*0x140d82355*/
            v99 = v82; /*0x140d82363*/
            v100 = v83; /*0x140d82371*/
            v101 = v84; /*0x140d8237f*/
            v102 = v85; /*0x140d8238d*/
            v103 = v86; /*0x140d8239b*/
            v104 = v87; /*0x140d823a9*/
          }
          v68 = v97; /*0x140d823d3*/
          v69 = v98; /*0x140d823da*/
          v70 = v99; /*0x140d823e1*/
          v71 = v100; /*0x140d823e8*/
          v72 = v101; /*0x140d823f6*/
          v73 = v102; /*0x140d82404*/
          v74 = v103; /*0x140d82412*/
          v75 = v104; /*0x140d82420*/
          v28 = *v110; /*0x140d82427*/
          if ( (unsigned __int8)sub_141398090(*v110) ) /*0x140d8242d*/
            sub_14139A2E0(v28); /*0x140d8243a*/
          if ( v22 == -2 ) /*0x140d82444*/
          {
            v76 = v24; /*0x140d8244a*/
            v77 = (unsigned __int64)v23; /*0x140d82451*/
            v78 = v11; /*0x140d82458*/
            v79 = v7; /*0x140d8245f*/
            *(_OWORD *)v80 = v68; /*0x140d8246d*/
            v88[0] = &v76; /*0x140d82474*/
            v88[1] = sub_1412DDF00; /*0x140d82482*/
            sub_141543AF0(&v97, &unk_1418877E7, v88); /*0x140d8249e*/
            sub_140CAB2C0(&v76); /*0x140d824ab*/
            v23 = *((__int64 **)&v97 + 1); /*0x140d824b8*/
            v24 = v97; /*0x140d824b8*/
            v11 = v98; /*0x140d824bf*/
            *(_BYTE *)(v112 + 2496) = 1; /*0x140d824cd*/
            goto LABEL_31; /*0x140d824d4*/
          }
          v48 = v75; /*0x140d824e0*/
          v47 = v74; /*0x140d824eb*/
          v46 = v73; /*0x140d824f6*/
          v45 = v72; /*0x140d82501*/
          v44 = v71; /*0x140d82521*/
          v43 = v70; /*0x140d82525*/
          v42 = v69; /*0x140d82529*/
          v41 = v68; /*0x140d8252d*/
          *(_BYTE *)(v112 + 2496) = 1; /*0x140d82538*/
          if ( v22 == -1 ) /*0x140d82543*/
          {
LABEL_31:
            if ( v11 < 0 ) /*0x140d8270d*/
            {
              v30 = 0; /*0x140d82713*/
              goto LABEL_33; /*0x140d82713*/
            }
            if ( v11 ) /*0x140d827b9*/
            {
              nullsub_1(); /*0x140d827bb*/
              v30 = 1; /*0x140d827c0*/
              v33 = sub_140001650(v11, 1); /*0x140d827cd*/
              if ( !v33 ) /*0x140d827d5*/
              {
LABEL_33:
                v111 = v23; /*0x140d82715*/
                v110 = (_QWORD *)v24; /*0x140d8271c*/
                sub_14176E54B(v30, v11); /*0x140d82729*/
              }
              v10 = v33; /*0x140d827db*/
              sub_14172B820(v33, v23, v11); /*0x140d827e7*/
              if ( !v24 ) /*0x140d827ef*/
                goto LABEL_42; /*0x140d827ef*/
            }
            else
            {
              v10 = 1; /*0x140d82833*/
              if ( !v24 ) /*0x140d8283b*/
                goto LABEL_42; /*0x140d8283b*/
            }
            sub_140001660(v23, v24, 1); /*0x140d827fd*/
LABEL_42:
            v29 = 1; /*0x140d82802*/
            v8 = 3; /*0x140d82804*/
            v9 = v11; /*0x140d82807*/
            goto LABEL_49; /*0x140d8280a*/
          }
          v67 = v48; /*0x140d8254d*/
          v66 = v47; /*0x140d82558*/
          v65 = v46; /*0x140d82563*/
          v64 = v45; /*0x140d8256e*/
          v63 = v44; /*0x140d82585*/
          v62 = v43; /*0x140d8258c*/
          v61 = v42; /*0x140d82593*/
          v60 = v41; /*0x140d8259a*/
          *(_QWORD *)&v56 = v22; /*0x140d825a1*/
          *((_QWORD *)&v56 + 1) = v24; /*0x140d825a8*/
          v57 = (const char *)v23; /*0x140d825af*/
          v58 = v11; /*0x140d825b6*/
          v59 = v7; /*0x140d825bd*/
          sub_140507EE0(&v76, &v56); /*0x140d825d2*/
          v7 = ((unsigned __int64)((HIBYTE(v77) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v77 + 5)) << 32) /*0x140d825fd*/
             | *(unsigned int *)((char *)&v77 + 1);
          v8 = v77; /*0x140d82600*/
          v9 = v78; /*0x140d82608*/
          v10 = v79; /*0x140d8260f*/
          v11 = *(_QWORD *)v80; /*0x140d82616*/
          if ( v76 == -1 ) /*0x140d82621*/
          {
            v29 = 0; /*0x140d8283f*/
          }
          else
          {
            HIBYTE(v77) = (((unsigned __int64)((HIBYTE(v77) << 16) /*0x140d82635*/
                                             | (unsigned int)*(unsigned __int16 *)((char *)&v77 + 5)) << 32)
                         | *(unsigned int *)((char *)&v77 + 1)) >> 48;
            *(_WORD *)((char *)&v77 + 5) = WORD2(v7); /*0x140d82642*/
            *(_DWORD *)((char *)&v77 + 1) = v7; /*0x140d82649*/
            *(_QWORD *)&v97 = 0; /*0x140d8267a*/
            *((_QWORD *)&v97 + 1) = 1; /*0x140d82685*/
            *(_QWORD *)&v98 = 0; /*0x140d82690*/
            *(_QWORD *)&v69 = 1610612768; /*0x140d8269b*/
            *(_QWORD *)&v68 = &v97; /*0x140d826ad*/
            *((_QWORD *)&v68 + 1) = &off_141891B48; /*0x140d826bb*/
            if ( (unsigned __int8)sub_1412DDF00(&v76, &v68) ) /*0x140d826d0*/
              sub_14176E860( /*0x140d82a3c*/
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v107,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v10 = *((_QWORD *)&v97 + 1); /*0x140d826e5*/
            v9 = v97; /*0x140d826e5*/
            v11 = v98; /*0x140d826ec*/
            sub_140CAB2C0(&v76); /*0x140d826fa*/
            v29 = 1; /*0x140d82700*/
            v8 = 3; /*0x140d82702*/
          }
LABEL_49:
          *v109 = 1; /*0x140d82841*/
          sub_140CAB140(v108); /*0x140d82852*/
          v35 = v112; /*0x140d82858*/
          if ( *(_QWORD *)(v112 + 1976) != -1 ) /*0x140d82867*/
          {
            v36 = *(__int64 **)(v112 + 1984); /*0x140d8286d*/
            v110 = *(_QWORD **)(v112 + 1992); /*0x140d8287b*/
            v109 = nullptr; /*0x140d82882*/
            v111 = v36; /*0x140d8288d*/
            while ( v110 != (_QWORD *)v109 ) /*0x140d828ae*/
            {
              ++v109; /*0x140d828b3*/
              v37 = v36 + 12; /*0x140d828ba*/
              sub_140401FB0(); /*0x140d828be*/
              v36 = v37; /*0x140d828c4*/
            }
            v35 = v112; /*0x140d828c9*/
            v34 = *(_QWORD *)(v112 + 1976); /*0x140d828d0*/
            if ( v34 ) /*0x140d828da*/
LABEL_54:
              sub_140001660(*(_QWORD *)(v35 + 1984), 96 * v34, 8); /*0x140d828dc*/
          }
LABEL_55:
          *(_BYTE *)(v35 + 2512) = 1; /*0x140d828f6*/
          sub_140C9F530(v108); /*0x140d82905*/
          v91 = v7; /*0x140d8290b*/
          v93 = BYTE6(v7); /*0x140d82919*/
          v92 = WORD2(v7); /*0x140d82923*/
          v94 = v9; /*0x140d8292b*/
          v95 = v10; /*0x140d82932*/
          v96 = v11; /*0x140d82939*/
          v90 = v8; /*0x140d82943*/
          v89 = v29; /*0x140d8294a*/
          v38 = v112; /*0x140d82951*/
          *(_BYTE *)(v112 + 2531) = 0; /*0x140d82958*/
          sub_14172B820(&v76, v38, 360); /*0x140d82972*/
          *(_BYTE *)(v38 + 2530) = 0; /*0x140d82977*/
          v39 = *(_QWORD *)(v38 + 384); /*0x140d8297e*/
          *(_BYTE *)(v38 + 2529) = 0; /*0x140d82985*/
          v57 = *(const char **)(v38 + 376); /*0x140d82993*/
          v56 = *(_OWORD *)(v38 + 360); /*0x140d829a1*/
          sub_140AFFC30( /*0x140d829cd*/
            (unsigned int)&v76,
            v39,
            (unsigned int)&v89,
            (unsigned int)&v56,
            *(_DWORD *)(v38 + 2520),
            *(_DWORD *)(v38 + 2524));
          v26 = 1; /*0x140d829d3*/
          result = 0; /*0x140d829d5*/
          v25 = (_BYTE *)v112; /*0x140d829d7*/
LABEL_56:
          v25[2528] = v26; /*0x140d829de*/
          return result;
        case 1: /*0x140d81f6d*/
LABEL_61:
          v108 = v5; /*0x140d82a79*/
          sub_14176EC00(&off_141886DB8); /*0x140d82a87*/
        case 2: /*0x140d81f6d*/
LABEL_60:
          v108 = v5; /*0x140d82a63*/
          sub_14176EC20(&off_141886DB8); /*0x140d82a71*/
        case 3: /*0x140d81f6d*/
LABEL_6:
          v108 = v5; /*0x140d82162*/
          v14 = *(unsigned __int8 *)(v3 + 2504); /*0x140d82170*/
          v13 = v3 + 2168; /*0x140d82178*/
          v109 = (_BYTE *)(v3 + 2504); /*0x140d8218d*/
          switch ( v14 ) /*0x140d82194*/
          {
            case 0LL: /*0x140d82194*/
              goto LABEL_7;
            case 1LL: /*0x140d82194*/
              v105 = v3 + 2168; /*0x140d82ac3*/
              sub_14176EC00(&off_1418851A0); /*0x140d82ad1*/
            case 2LL: /*0x140d82194*/
              v105 = v3 + 2168; /*0x140d82aad*/
              sub_14176EC20(&off_1418851A0); /*0x140d82abb*/
            case 3LL: /*0x140d82194*/
              v106 = v3 + 2168; /*0x140d821d1*/
              v111 = (__int64 *)(v3 + 2336); /*0x140d821df*/
              goto LABEL_9; /*0x140d821df*/
          }
      }
  }
}

// refs (from decompile() output): sub_14172B820, sub_14176EC00, off_141885220, sub_14176EC20,
// aRunDaemonOnce="run_daemon_once"@0x141887265, aApp_4="app"@0x1418864e7, sub_1401A9630, sub_140CAB140,
// sub_140401FB0, off_141FB97C0, sub_14172E34C, sub_14085A6F0, off_1417EBF48, off_1417EBF30, sub_140501B40,
// sub_14139A2E0, sub_141398090, sub_1412DDF00, sub_141543AF0, unk_1418877E7, sub_140CAB2C0, nullsub_1,
// sub_140001650, sub_14176E54B, sub_140001660, sub_140507EE0, off_141891B48, sub_14176E860,
// aADisplayImplem_11="a Display implementation returned an error unexpectedly"@0x141891b78, unk_141889838,
// off_141891C00, sub_140C9F530, sub_140AFFC30, off_141886DB8, off_1418851A0
