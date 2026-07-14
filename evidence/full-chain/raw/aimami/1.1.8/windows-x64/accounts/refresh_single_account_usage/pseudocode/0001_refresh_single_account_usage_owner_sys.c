// refresh_single_account_usage_owner_sys @ 0x140a6c900 (win, AiMaMi 1.1.8)
char __fastcall sub_140A6C900(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r12
  __int8 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rbx
  const __m128i *v14; // rsi
  __int128 v15; // xmm6
  const __m128i *v16; // r14
  _BYTE *v17; // rbx
  const __m128i *v18; // r12
  __int64 v19; // rsi
  _QWORD *v20; // r13
  __int64 v21; // r14
  char v22; // of
  __int64 v23; // r12
  volatile signed __int64 *v24; // rbx
  __int64 v25; // rt0
  volatile signed __int64 *v26; // r15
  __int64 v27; // rt0
  const __m128i *v28; // r15
  char v29; // bl
  __int64 v30; // r12
  const __m128i *v31; // rsi
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r15
  const __m128i *v39; // r13
  __int64 v40; // rdi
  _BYTE *v41; // rdx
  char v42; // cl
  char result; // al
  __int64 *v44; // r14
  __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // rax
  int v48; // r13d
  unsigned int v49; // edi
  __int64 v50; // r12
  unsigned __int8 v51; // di
  __int64 v52; // r13
  _BYTE *v53; // rcx
  _BYTE *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdi
  __m128i *v62; // rax
  __int64 *v63; // rcx
  __int64 *v64; // r13
  __int64 v65; // rdi
  __int64 v66; // rdx
  _QWORD *v67; // rsi
  __m128i v68[45]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v69[45]; // [rsp+300h] [rbp+280h] BYREF
  __m128i v70; // [rsp+5D0h] [rbp+550h] BYREF
  __int64 v71; // [rsp+5E0h] [rbp+560h]
  __m128i v72; // [rsp+8A0h] [rbp+820h] BYREF
  __int64 v73; // [rsp+8B0h] [rbp+830h]
  __m128i v74[11]; // [rsp+B70h] [rbp+AF0h] BYREF
  __m128i v75[8]; // [rsp+C28h] [rbp+BA8h] BYREF
  volatile signed __int64 *v76; // [rsp+CB0h] [rbp+C30h]
  volatile signed __int64 *v77; // [rsp+CB8h] [rbp+C38h]
  __m128i *v78; // [rsp+CC0h] [rbp+C40h] BYREF
  __int128 v79; // [rsp+CC8h] [rbp+C48h]
  __int64 v80; // [rsp+CD8h] [rbp+C58h]
  __int64 v81; // [rsp+CE0h] [rbp+C60h]
  __int64 v82; // [rsp+CE8h] [rbp+C68h]
  __int64 v83; // [rsp+CF0h] [rbp+C70h]
  __m128i v84; // [rsp+F90h] [rbp+F10h] BYREF
  const __m128i *v85; // [rsp+FA0h] [rbp+F20h]
  __int64 v86; // [rsp+FA8h] [rbp+F28h]
  unsigned __int64 v87; // [rsp+FB0h] [rbp+F30h]
  __m128i v88[45]; // [rsp+FB8h] [rbp+F38h] BYREF
  __m128i v89; // [rsp+1290h] [rbp+1210h] BYREF
  const char *v90; // [rsp+12A0h] [rbp+1220h]
  __int64 v91; // [rsp+12A8h] [rbp+1228h]
  _BYTE v92[24]; // [rsp+12B0h] [rbp+1230h] BYREF
  __m128i v93; // [rsp+12C8h] [rbp+1248h]
  __m128i v94; // [rsp+12D8h] [rbp+1258h]
  __m128i v95; // [rsp+12E8h] [rbp+1268h]
  __m128i v96; // [rsp+12F8h] [rbp+1278h]
  __m128i v97; // [rsp+1308h] [rbp+1288h]
  __m128i v98; // [rsp+1318h] [rbp+1298h]
  __int64 v99; // [rsp+1588h] [rbp+1508h]
  const __m128i *v100; // [rsp+1590h] [rbp+1510h]
  __int64 v101; // [rsp+1598h] [rbp+1518h]
  _QWORD v102[2]; // [rsp+15A0h] [rbp+1520h] BYREF
  __int64 v103; // [rsp+15B0h] [rbp+1530h] BYREF
  __int8 v104; // [rsp+15B8h] [rbp+1538h]
  int v105; // [rsp+15B9h] [rbp+1539h]
  __int16 v106; // [rsp+15BDh] [rbp+153Dh]
  char v107; // [rsp+15BFh] [rbp+153Fh]
  __int64 v108; // [rsp+15C0h] [rbp+1540h]
  __int64 v109; // [rsp+15C8h] [rbp+1548h]
  __int64 v110; // [rsp+15D0h] [rbp+1550h]
  __int64 v111; // [rsp+15E8h] [rbp+1568h]
  const __m128i *v112; // [rsp+15F0h] [rbp+1570h]
  __int64 v113; // [rsp+15F8h] [rbp+1578h]
  __int64 v114; // [rsp+1600h] [rbp+1580h]
  __int64 v115; // [rsp+1608h] [rbp+1588h]
  _QWORD *v116; // [rsp+1610h] [rbp+1590h]
  const __m128i *v117; // [rsp+1618h] [rbp+1598h]
  __int64 *v118; // [rsp+1620h] [rbp+15A0h]
  _QWORD *v119; // [rsp+1628h] [rbp+15A8h]
  const __m128i *v120; // [rsp+1630h] [rbp+15B0h]
  const __m128i *v121; // [rsp+1638h] [rbp+15B8h]
  __int64 v122; // [rsp+1640h] [rbp+15C0h]
  const __m128i *v123; // [rsp+1648h] [rbp+15C8h]
  char v124; // [rsp+1657h] [rbp+15D7h] BYREF
  _BYTE *v125; // [rsp+1658h] [rbp+15D8h]
  __int64 *v126; // [rsp+1660h] [rbp+15E0h]
  __m128i *v127; // [rsp+1668h] [rbp+15E8h]
  _QWORD *v128; // [rsp+1670h] [rbp+15F0h]
  const __m128i *v129; // [rsp+1678h] [rbp+15F8h]
  __int64 v130; // [rsp+1680h] [rbp+1600h]
  _QWORD *v131; // [rsp+1688h] [rbp+1608h]
  __int64 *v132; // [rsp+1690h] [rbp+1610h]
  const __m128i *v133; // [rsp+1698h] [rbp+1618h]
  __m128i *v134; // [rsp+16A0h] [rbp+1620h]
  __int64 v135; // [rsp+16A8h] [rbp+1628h]
  char v136; // [rsp+16B7h] [rbp+1637h]
  __int64 v137; // [rsp+16B8h] [rbp+1638h]

  v137 = -2; /*0x140a6c928*/
  v3 = a1; /*0x140a6c936*/
  v4 = *(unsigned __int8 *)(a1 + 4736); /*0x140a6c939*/
  v135 = a1; /*0x140a6c94e*/
  switch ( v4 ) /*0x140a6c955*/
  {
    case 0LL: /*0x140a6c955*/
      *(_WORD *)(a1 + 4737) = 257; /*0x140a6c957*/
      *(_BYTE *)(a1 + 4739) = 1; /*0x140a6c961*/
      v5 = a1 + 2560; /*0x140a6c970*/
      sub_1412762D0((__m128i *)(a1 + 2560), (const __m128i *)(a1 + 392), 0x878u); /*0x140a6c980*/
      switch ( *(_BYTE *)(v3 + 4720) ) /*0x140a6c99b*/
      {
        case 0: /*0x140a6c99b*/
          goto LABEL_4;
        case 1: /*0x140a6c99b*/
          goto LABEL_75;
        case 2: /*0x140a6c99b*/
          goto LABEL_74;
        case 3: /*0x140a6c99b*/
          goto LABEL_7;
      }
    case 1LL: /*0x140a6c955*/
      sub_1412ADB20(&off_141363680); /*0x140a6d803*/
    case 2LL: /*0x140a6c955*/
      sub_1412ADB40(&off_141363680); /*0x140a6d7f5*/
    case 3LL: /*0x140a6c955*/
      v5 = a1 + 2560; /*0x140a6c99d*/
      switch ( *(_BYTE *)(a1 + 4720) ) /*0x140a6c9ba*/
      {
        case 0: /*0x140a6c9ba*/
LABEL_4:
          v83 = 0; /*0x140a6c9bc*/
          v78 = (__m128i *)aRefreshSingleA; /*0x140a6c9d5*/
          *(_QWORD *)&v79 = 28; /*0x140a6c9dc*/
          *((_QWORD *)&v79 + 1) = aApp_4; /*0x140a6c9ee*/
          v80 = 3; /*0x140a6c9f5*/
          v130 = v5; /*0x140a6ca00*/
          v81 = v5; /*0x140a6ca07*/
          v132 = (__int64 *)(v3 + 3080); /*0x140a6ca0e*/
          v82 = v3 + 3080; /*0x140a6ca15*/
          sub_140421360(&v89, (__int64)&v78); /*0x140a6ca2a*/
          v7 = (unsigned __int64)((v89.m128i_u8[15] << 16) /*0x140a6ca4a*/
                                | (unsigned int)*(unsigned __int16 *)((char *)&v89.m128i_u16[6] + 1)) << 32;
          v8 = v7 | *(unsigned int *)((char *)&v89.m128i_u32[2] + 1); /*0x140a6ca55*/
          v9 = v89.m128i_i8[8]; /*0x140a6ca58*/
          v10 = (__int64)v90; /*0x140a6ca60*/
          v11 = v91; /*0x140a6ca67*/
          v12 = *(_QWORD *)v92; /*0x140a6ca6e*/
          if ( v89.m128i_i64[0] != 3 ) /*0x140a6ca79*/
          {
            v88[6] = v98; /*0x140a6ca86*/
            v88[5] = v97; /*0x140a6ca94*/
            v88[4] = v96; /*0x140a6caa2*/
            v88[3] = v95; /*0x140a6cac5*/
            v88[2] = v94; /*0x140a6cacc*/
            v88[1] = v93; /*0x140a6cad3*/
            v88[0] = *(__m128i *)&v92[8]; /*0x140a6cada*/
            *(__int32 *)((char *)&v84.m128i_i32[2] + 1) = *(__int32 *)((char *)&v89.m128i_i32[2] + 1); /*0x140a6cae1*/
            v84.m128i_i8[15] = (v7 | *(unsigned int *)((char *)&v89.m128i_u32[2] + 1)) >> 48; /*0x140a6caef*/
            *(__int16 *)((char *)&v84.m128i_i16[6] + 1) = WORD2(v8); /*0x140a6caf9*/
            v85 = (const __m128i *)v90; /*0x140a6cb01*/
            v86 = v91; /*0x140a6cb08*/
            v87 = *(_QWORD *)v92; /*0x140a6cb0f*/
            v84.m128i_i64[0] = v89.m128i_i64[0]; /*0x140a6cb16*/
            v84.m128i_i8[8] = v89.m128i_i8[8]; /*0x140a6cb1d*/
            *(_QWORD *)&v92[16] = 0; /*0x140a6cb24*/
            v89.m128i_i64[0] = (__int64)aRefreshSingleA; /*0x140a6cb2f*/
            v89.m128i_i64[1] = 28; /*0x140a6cb36*/
            v90 = aAccountkey_4; /*0x140a6cb48*/
            v91 = 10; /*0x140a6cb4f*/
            *(_QWORD *)v92 = v130; /*0x140a6cb61*/
            *(_QWORD *)&v92[8] = v132; /*0x140a6cb6f*/
            sub_14086FD70((__int64)&v78, v89.m128i_i64); /*0x140a6cb84*/
            v9 = (char)v78; /*0x140a6cb8a*/
            if ( (_BYTE)v78 == 6 ) /*0x140a6cb96*/
            {
              v13 = v80; /*0x140a6cb9c*/
              v3 = v135; /*0x140a6cba3*/
              v14 = (const __m128i *)(v135 + 3104); /*0x140a6cbaa*/
              v15 = v79; /*0x140a6cbb1*/
              sub_1412762D0((__m128i *)(v135 + 3104), &v84, 0x98u); /*0x140a6cbc8*/
              *(_OWORD *)(v3 + 3256) = v15; /*0x140a6cbcd*/
              *(_QWORD *)(v3 + 3272) = v13; /*0x140a6cbd5*/
              *(_BYTE *)(v3 + 3632) = 0; /*0x140a6cbdc*/
              v16 = (const __m128i *)(v3 + 3640); /*0x140a6cbe4*/
              sub_1412762D0((__m128i *)(v3 + 3640), v14, 0x218u); /*0x140a6cbf7*/
              v17 = (_BYTE *)(v3 + 4712); /*0x140a6cbfc*/
              *(_BYTE *)(v3 + 4712) = 0; /*0x140a6cc03*/
              v5 = v130; /*0x140a6cc0b*/
LABEL_8:
              v18 = (const __m128i *)(v3 + 4176); /*0x140a6cc3a*/
              sub_1412762D0((__m128i *)(v3 + 4176), v16, 0x218u); /*0x140a6cc4d*/
              switch ( *(_BYTE *)(v3 + 4704) ) /*0x140a6cc68*/
              {
                case 0: /*0x140a6cc68*/
                  goto LABEL_10;
                case 1: /*0x140a6cc68*/
                  goto LABEL_77;
                case 2: /*0x140a6cc68*/
                  goto LABEL_76;
                case 3: /*0x140a6cc68*/
                  goto LABEL_13;
              }
            }
            v48 = HIBYTE(v78); /*0x140a6d1a3*/
            v49 = *(unsigned __int16 *)((char *)&v78 + 5); /*0x140a6d1ab*/
            v50 = *(unsigned int *)((char *)&v78 + 1); /*0x140a6d1b2*/
            v11 = *((_QWORD *)&v79 + 1); /*0x140a6d1c0*/
            v10 = v79; /*0x140a6d1c0*/
            v12 = v80; /*0x140a6d1c7*/
            sub_1400453B0((__int64)&v84); /*0x140a6d1d5*/
            v8 = ((unsigned __int64)((v48 << 16) | v49) << 32) | v50; /*0x140a6d1e6*/
          }
          sub_1409B5490(v130, v7, v6); /*0x140a6d1f0*/
          v51 = 1; /*0x140a6d1f6*/
          if ( __OFSUB__(0, *v132) ) /*0x140a6d202*/
          {
            v52 = v135; /*0x140a6d207*/
            goto LABEL_67; /*0x140a6d20e*/
          }
          v131 = (_QWORD *)(v135 + 3088); /*0x140a6d221*/
          v53 = *(_BYTE **)(v135 + 3088); /*0x140a6d228*/
          v133 = *(const __m128i **)(v135 + 3096); /*0x140a6d236*/
          v134 = nullptr; /*0x140a6d23d*/
          v125 = v53; /*0x140a6d248*/
          while ( v133 != v134 ) /*0x140a6d25e*/
          {
            v134 = (__m128i *)((char *)v134 + 1); /*0x140a6d263*/
            v54 = v53 + 96; /*0x140a6d26a*/
            sub_1401EEBE0(); /*0x140a6d26e*/
            v53 = v54; /*0x140a6d274*/
          }
          v55 = *v132; /*0x140a6d280*/
          v51 = 1; /*0x140a6d283*/
          v52 = v135; /*0x140a6d289*/
          if ( !*v132 ) /*0x140a6d280*/
            goto LABEL_67; /*0x140a6d290*/
          goto LABEL_66; /*0x140a6d290*/
        case 1: /*0x140a6c9ba*/
LABEL_75:
          v130 = v5; /*0x140a6d823*/
          sub_1412ADB20(&off_1413613C8); /*0x140a6d831*/
        case 2: /*0x140a6c9ba*/
LABEL_74:
          v130 = v5; /*0x140a6d80a*/
          sub_1412ADB40(&off_1413613C8); /*0x140a6d818*/
        case 3: /*0x140a6c9ba*/
          goto LABEL_7;
      }
  }
LABEL_7:
  v17 = (_BYTE *)(v3 + 4712); /*0x140a6cc14*/
  v16 = (const __m128i *)(v3 + 3640); /*0x140a6cc23*/
  switch ( *(_BYTE *)(v3 + 4712) ) /*0x140a6cc38*/
  {
    case 0: /*0x140a6cc38*/
      goto LABEL_8;
    case 1: /*0x140a6cc38*/
      v130 = v5; /*0x140a6d8b9*/
      v114 = v3 + 4712; /*0x140a6d8c0*/
      v113 = v3 + 3640; /*0x140a6d8c7*/
      sub_1412ADB20(&off_141363708); /*0x140a6d8d5*/
    case 2: /*0x140a6cc38*/
      v130 = v5; /*0x140a6d895*/
      v114 = v3 + 4712; /*0x140a6d89c*/
      v113 = v3 + 3640; /*0x140a6d8a3*/
      sub_1412ADB40(&off_141363708); /*0x140a6d8b1*/
    case 3: /*0x140a6cc38*/
      v18 = (const __m128i *)(v3 + 4176); /*0x140a6cc6a*/
      switch ( *(_BYTE *)(v3 + 4704) ) /*0x140a6cc87*/
      {
        case 0: /*0x140a6cc87*/
LABEL_10:
          v121 = v16; /*0x140a6cc89*/
          v125 = v17; /*0x140a6cc90*/
          v130 = v5; /*0x140a6cc97*/
          *(_BYTE *)(v3 + 4705) = 0; /*0x140a6cc9e*/
          v19 = v3 + 4352; /*0x140a6cca6*/
          v123 = v18; /*0x140a6ccb6*/
          sub_1412762D0((__m128i *)(v3 + 4352), v18, 0x98u); /*0x140a6ccc0*/
          *(_BYTE *)(v3 + 4706) = 1; /*0x140a6ccc5*/
          v20 = *(_QWORD **)(v3 + 4336); /*0x140a6ccd4*/
          v21 = *(_QWORD *)(v3 + 4344); /*0x140a6ccdb*/
          v133 = *(const __m128i **)(v3 + 4328); /*0x140a6cce2*/
          v117 = v133; /*0x140a6cce9*/
          v116 = v20; /*0x140a6ccf0*/
          sub_140103590(&v89, v3 + 4352); /*0x140a6cd01*/
          v23 = v135; /*0x140a6cd07*/
          v24 = *(volatile signed __int64 **)(v135 + 4488); /*0x140a6cd0e*/
          v25 = _InterlockedIncrement64(v24); /*0x140a6cd16*/
          if ( (v25 < 0) ^ v22 | (v25 == 0) /*0x140a6cd2c*/
            || (v26 = *(volatile signed __int64 **)(v23 + 4496),
                v27 = _InterlockedIncrement64(v26),
                (v27 < 0) ^ v22 | (v27 == 0)) )
          {
            BUG(); /*0x140a6d907*/
          }
          sub_1412762D0(v75, &v89, 0x88u); /*0x140a6cd46*/
          v76 = v24; /*0x140a6cd4b*/
          v77 = v26; /*0x140a6cd52*/
          *(_BYTE *)(v23 + 4705) = 1; /*0x140a6cd59*/
          v28 = v133; /*0x140a6cd62*/
          v120 = v133; /*0x140a6cd69*/
          v119 = v20; /*0x140a6cd70*/
          v29 = sub_14035BE40(v19); /*0x140a6cd80*/
          v30 = v135; /*0x140a6cd82*/
          *(_WORD *)(v135 + 4705) = 0; /*0x140a6cd89*/
          v31 = (const __m128i *)(v30 + 4504); /*0x140a6cd94*/
          sub_1412762D0((__m128i *)(v30 + 4504), v75, 0x98u); /*0x140a6cdac*/
          *(_QWORD *)(v30 + 4656) = v28; /*0x140a6cdb1*/
          v131 = v20; /*0x140a6cdb9*/
          *(_QWORD *)(v30 + 4664) = v20; /*0x140a6cdc0*/
          *(_QWORD *)(v30 + 4672) = v21; /*0x140a6cdc8*/
          *(_BYTE *)(v30 + 4680) = v29; /*0x140a6cdd0*/
          v134 = (__m128i *)(v30 + 4696); /*0x140a6cde0*/
          *(_BYTE *)(v30 + 4696) = 0; /*0x140a6cde7*/
LABEL_14:
          v132 = (__int64 *)v31; /*0x140a6ce3b*/
          sub_1412762D0(v74, v31, 0xB8u); /*0x140a6ce52*/
          v32 = off_141963508; /*0x140a6ce57*/
          if ( *((_DWORD *)off_141963508 + 24) ) /*0x140a6ce5e*/
          {
            v136 = 1; /*0x140a6d7a6*/
            v67 = off_141963508; /*0x140a6d7ad*/
            sub_141277ED3(); /*0x140a6d7b0*/
            v32 = v67; /*0x140a6d7b5*/
          }
          if ( *((_DWORD *)v32 + 4) == 2 ) /*0x140a6ce6d*/
          {
            v33 = 704; /*0x140a6ce77*/
            if ( *(_BYTE *)v32 ) /*0x140a6ce6f*/
              v33 = 472; /*0x140a6ce7c*/
            v34 = v32[1] + v33; /*0x140a6ce80*/
            v136 = 0; /*0x140a6ce84*/
            v35 = sub_1401A4BB0(v34, v32, v74, &off_141321088); /*0x140a6ce99*/
          }
          else
          {
            v36 = 704; /*0x140a6ceaa*/
            if ( *((_BYTE *)v32 + 64) ) /*0x140a6cea1*/
              v36 = 472; /*0x140a6ceaf*/
            v37 = v32[9] + v36; /*0x140a6ceb7*/
            v136 = 0; /*0x140a6cebb*/
            v35 = sub_1401A4BB0(v37, v32 + 8, v74, &off_141321070); /*0x140a6ced3*/
          }
          v3 = v135; /*0x140a6ced9*/
          *(_QWORD *)(v135 + 4688) = v35; /*0x140a6cee0*/
LABEL_25:
          v118 = (__int64 *)(v3 + 4688); /*0x140a6cef0*/
          sub_1400650E0(&v89, v3 + 4688, a2); /*0x140a6cf0b*/
          v38 = v89.m128i_i64[0]; /*0x140a6cf11*/
          if ( v89.m128i_i64[0] == 5 ) /*0x140a6cf1c*/
          {
            v41 = (_BYTE *)v135; /*0x140a6cf48*/
            *(_BYTE *)(v135 + 4696) = 3; /*0x140a6cf4f*/
            v41[4704] = 3; /*0x140a6cf56*/
            v41[4712] = 3; /*0x140a6cf5d*/
            v41[4720] = 3; /*0x140a6cf64*/
            v42 = 3; /*0x140a6cf6b*/
            result = 1; /*0x140a6cf6d*/
            goto LABEL_68; /*0x140a6cf6f*/
          }
          if ( v89.m128i_i32[0] == 4 ) /*0x140a6cf22*/
          {
            v39 = (const __m128i *)v89.m128i_i64[1]; /*0x140a6cf24*/
            v12 = (__int64)v90; /*0x140a6cf2b*/
            v40 = 0x800000000000000CuLL; /*0x140a6cf32*/
            v8 = v91; /*0x140a6cf3c*/
          }
          else
          {
            v40 = v89.m128i_i64[1]; /*0x140a6cf74*/
            v39 = (const __m128i *)v90; /*0x140a6cf7b*/
            v12 = v91; /*0x140a6cf82*/
            v8 = *(_QWORD *)v92; /*0x140a6cf89*/
            sub_1412762D0(&v70, (const __m128i *)&v92[8], 0x2D0u); /*0x140a6cfa4*/
            v122 = v99; /*0x140a6cfb0*/
            v112 = v100; /*0x140a6cfbe*/
            v111 = v101; /*0x140a6cfcc*/
          }
          v44 = v118; /*0x140a6cfd3*/
          sub_1412762D0(&v72, &v70, 0x2D0u); /*0x140a6cfee*/
          v45 = *v44; /*0x140a6cff3*/
          v129 = v133; /*0x140a6cffd*/
          v128 = v131; /*0x140a6d00b*/
          v127 = v134; /*0x140a6d019*/
          v126 = v132; /*0x140a6d027*/
          if ( (unsigned __int8)sub_140EE8B80(v45) ) /*0x140a6d031*/
          {
            v129 = v133; /*0x140a6d042*/
            v128 = v131; /*0x140a6d050*/
            v127 = v134; /*0x140a6d05e*/
            v126 = v132; /*0x140a6d06c*/
            sub_140EE5BB0(v45); /*0x140a6d076*/
          }
          if ( (_DWORD)v38 == 4 ) /*0x140a6d080*/
          {
            v89.m128i_i64[0] = v40; /*0x140a6d086*/
            v89.m128i_i64[1] = (__int64)v39; /*0x140a6d08d*/
            v90 = (const char *)v12; /*0x140a6d094*/
            v91 = v8; /*0x140a6d09b*/
            *(__m128i *)v92 = v72; /*0x140a6d0a9*/
            v102[0] = &v89; /*0x140a6d0b0*/
            v102[1] = sub_140E156C0; /*0x140a6d0be*/
            sub_14108F360(&v70, &unk_141362548, v102); /*0x140a6d0da*/
            v129 = v133; /*0x140a6d0e7*/
            v128 = v131; /*0x140a6d0f5*/
            v127 = v134; /*0x140a6d103*/
            v126 = v132; /*0x140a6d111*/
            sub_1409AF240(&v89); /*0x140a6d11f*/
            v39 = (const __m128i *)v70.m128i_i64[1]; /*0x140a6d12c*/
            v46 = v70.m128i_i64[0]; /*0x140a6d12c*/
            v12 = v71; /*0x140a6d133*/
            v134->m128i_i8[0] = 1; /*0x140a6d141*/
LABEL_35:
            v47 = v135; /*0x140a6d176*/
            *(_BYTE *)(v135 + 4705) = 0; /*0x140a6d17d*/
            *(_BYTE *)(v47 + 4706) = 0; /*0x140a6d184*/
            sub_1400453B0(v47 + 4352); /*0x140a6d192*/
            v38 = 3; /*0x140a6d198*/
            goto LABEL_48; /*0x140a6d19e*/
          }
          sub_1412762D0((__m128i *)&v78, &v72, 0x2D0u); /*0x140a6d15a*/
          v134->m128i_i8[0] = 1; /*0x140a6d166*/
          v46 = v40; /*0x140a6d16d*/
          if ( (_DWORD)v38 == 3 ) /*0x140a6d170*/
            goto LABEL_35; /*0x140a6d170*/
          v89.m128i_i64[1] = v40; /*0x140a6d29b*/
          v90 = (const char *)v39; /*0x140a6d2a2*/
          v91 = v12; /*0x140a6d2a9*/
          v89.m128i_i64[0] = v38; /*0x140a6d2b0*/
          *(_QWORD *)v92 = v8; /*0x140a6d2b7*/
          sub_1412762D0((__m128i *)&v92[8], (const __m128i *)&v78, 0x2D0u); /*0x140a6d2d2*/
          v56 = v135 + 4352; /*0x140a6d2de*/
          sub_140352C90(v135 + 4352, &v89, aUsage_2, 5); /*0x140a6d2fc*/
          if ( __OFSUB__(-v122, 1) ) /*0x140a6d309*/
          {
            sub_1412762D0(v68, (const __m128i *)&v78, 0x2D0u); /*0x140a6d31f*/
          }
          else
          {
            v120 = v133; /*0x140a6d32d*/
            v119 = v131; /*0x140a6d33b*/
            sub_140878BF0(&v89); /*0x140a6d349*/
            v38 = 3; /*0x140a6d34f*/
            v46 = v122; /*0x140a6d355*/
            v39 = v112; /*0x140a6d35c*/
            v12 = v111; /*0x140a6d363*/
          }
          v57 = v135; /*0x140a6d36a*/
          *(_BYTE *)(v135 + 4705) = 0; /*0x140a6d371*/
          *(_BYTE *)(v57 + 4706) = 0; /*0x140a6d378*/
          sub_1400453B0(v56); /*0x140a6d382*/
LABEL_48:
          sub_1412762D0(v69, v68, 0x2D0u); /*0x140a6d388*/
          *(_BYTE *)(v135 + 4704) = 1; /*0x140a6d3a5*/
          sub_1409850C0(v123); /*0x140a6d3b3*/
          if ( (_DWORD)v38 == 3 ) /*0x140a6d3bd*/
          {
            if ( v12 < 0 ) /*0x140a6d3c2*/
            {
              v61 = 0; /*0x140a6d3c8*/
              goto LABEL_51; /*0x140a6d3c8*/
            }
            if ( v12 ) /*0x140a6d575*/
            {
              nullsub_1(v59, v58); /*0x140a6d57b*/
              v61 = 1; /*0x140a6d580*/
              v62 = (__m128i *)sub_140001360(v12, 1); /*0x140a6d58d*/
              if ( !v62 ) /*0x140a6d595*/
              {
LABEL_51:
                v133 = v39; /*0x140a6d3ca*/
                v134 = (__m128i *)v46; /*0x140a6d3d1*/
                sub_1412AD46B(v61, v12); /*0x140a6d3de*/
              }
              v11 = (__int64)v62; /*0x140a6d59b*/
              sub_1412762D0(v62, v39, v12); /*0x140a6d5a7*/
              if ( !v46 ) /*0x140a6d5af*/
                goto LABEL_60; /*0x140a6d5af*/
            }
            else
            {
              v11 = 1; /*0x140a6d793*/
              if ( !v46 ) /*0x140a6d79b*/
                goto LABEL_60; /*0x140a6d79b*/
            }
            sub_140001370(v39, v46, 1); /*0x140a6d5bd*/
LABEL_60:
            v51 = 1; /*0x140a6d5c2*/
            v9 = 3; /*0x140a6d5c5*/
            v10 = v12; /*0x140a6d5c8*/
            goto LABEL_61; /*0x140a6d5c8*/
          }
          sub_1412762D0(v88, v69, 0x2D0u); /*0x140a6d3fd*/
          v84.m128i_i64[0] = v38; /*0x140a6d402*/
          v84.m128i_i64[1] = v46; /*0x140a6d409*/
          v85 = v39; /*0x140a6d410*/
          v86 = v12; /*0x140a6d417*/
          v87 = v8; /*0x140a6d41e*/
          sub_14003CD00(&v89, &v84); /*0x140a6d433*/
          v58 = (unsigned __int64)((v89.m128i_u8[15] << 16) /*0x140a6d453*/
                                 | (unsigned int)*(unsigned __int16 *)((char *)&v89.m128i_u16[6] + 1)) << 32;
          v8 = v58 | *(unsigned int *)((char *)&v89.m128i_u32[2] + 1); /*0x140a6d45e*/
          v9 = v89.m128i_i8[8]; /*0x140a6d46b*/
          v10 = (__int64)v90; /*0x140a6d473*/
          v11 = v91; /*0x140a6d47a*/
          v12 = *(_QWORD *)v92; /*0x140a6d481*/
          if ( v89.m128i_i64[0] == 0x8000000000000025uLL ) /*0x140a6d48b*/
          {
            v51 = 0; /*0x140a6d48d*/
          }
          else
          {
            v89.m128i_i8[15] = (v58 | *(unsigned int *)((char *)&v89.m128i_u32[2] + 1)) >> 48; /*0x140a6d4a2*/
            *(__int16 *)((char *)&v89.m128i_i16[6] + 1) = WORD2(v8); /*0x140a6d4af*/
            *(__int32 *)((char *)&v89.m128i_i32[2] + 1) |= v58; /*0x140a6d4b6*/
            v72.m128i_i64[0] = 0; /*0x140a6d4e7*/
            v72.m128i_i64[1] = 1; /*0x140a6d4f2*/
            v73 = 0; /*0x140a6d4fd*/
            *((_QWORD *)&v79 + 1) = 1610612768; /*0x140a6d508*/
            v78 = &v72; /*0x140a6d51a*/
            *(_QWORD *)&v79 = &off_141363340; /*0x140a6d528*/
            if ( (unsigned __int8)sub_140E156C0(&v89, &v78, v60) ) /*0x140a6d53d*/
              sub_1412AD780( /*0x140a6d7e3*/
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v124,
                (unsigned int)&unk_141363430,
                (__int64)&off_1413633F8);
            v11 = v72.m128i_i64[1]; /*0x140a6d552*/
            v10 = v72.m128i_i64[0]; /*0x140a6d552*/
            v12 = v73; /*0x140a6d559*/
            sub_1409AF240(&v89); /*0x140a6d567*/
            v51 = 1; /*0x140a6d56d*/
            v9 = 3; /*0x140a6d570*/
          }
LABEL_61:
          *v125 = 1; /*0x140a6d5cb*/
          sub_1409B5490(v130, v58, v60); /*0x140a6d5dc*/
          v52 = v135; /*0x140a6d5e4*/
          if ( !__OFSUB__(0, *(_QWORD *)(v135 + 3080)) ) /*0x140a6d5f2*/
          {
            v131 = (_QWORD *)(v135 + 3088); /*0x140a6d5ff*/
            v63 = *(__int64 **)(v135 + 3088); /*0x140a6d606*/
            v133 = *(const __m128i **)(v135 + 3096); /*0x140a6d614*/
            v134 = nullptr; /*0x140a6d61b*/
            v132 = v63; /*0x140a6d626*/
            while ( v133 != v134 ) /*0x140a6d63e*/
            {
              v134 = (__m128i *)((char *)v134 + 1); /*0x140a6d643*/
              v64 = v63 + 12; /*0x140a6d64a*/
              sub_1401EEBE0(); /*0x140a6d64e*/
              v63 = v64; /*0x140a6d654*/
            }
            v52 = v135; /*0x140a6d659*/
            v55 = *(_QWORD *)(v135 + 3080); /*0x140a6d660*/
            if ( v55 ) /*0x140a6d66a*/
LABEL_66:
              sub_140001370(*v131, 96 * v55, 8); /*0x140a6d66c*/
          }
LABEL_67:
          *(_BYTE *)(v52 + 4720) = 1; /*0x140a6d689*/
          sub_1409886D0(v130); /*0x140a6d698*/
          v105 = v8; /*0x140a6d69e*/
          v107 = BYTE6(v8); /*0x140a6d6ac*/
          v106 = WORD2(v8); /*0x140a6d6b6*/
          v108 = v10; /*0x140a6d6be*/
          v109 = v11; /*0x140a6d6c5*/
          v110 = v12; /*0x140a6d6cc*/
          v104 = v9; /*0x140a6d6d7*/
          v103 = v51; /*0x140a6d6de*/
          v65 = v135; /*0x140a6d6e5*/
          *(_BYTE *)(v135 + 4739) = 0; /*0x140a6d6ec*/
          sub_1412762D0(&v89, (const __m128i *)v65, 0x168u); /*0x140a6d706*/
          *(_BYTE *)(v65 + 4738) = 0; /*0x140a6d70b*/
          v66 = *(_QWORD *)(v65 + 384); /*0x140a6d712*/
          *(_BYTE *)(v65 + 4737) = 0; /*0x140a6d719*/
          v85 = *(const __m128i **)(v65 + 376); /*0x140a6d727*/
          v84 = *(__m128i *)(v65 + 360); /*0x140a6d735*/
          invoke_resolver_respond_sys( /*0x140a6d761*/
            &v89,
            v66,
            (__int64)&v103,
            (__int128 *)v84.m128i_i8,
            *(_DWORD *)(v65 + 4728),
            *(_DWORD *)(v65 + 4732));
          v42 = 1; /*0x140a6d767*/
          result = 0; /*0x140a6d769*/
          v41 = (_BYTE *)v135; /*0x140a6d76b*/
LABEL_68:
          v41[4736] = v42; /*0x140a6d772*/
          return result;
        case 1: /*0x140a6cc87*/
LABEL_77:
          v123 = v18; /*0x140a6d86a*/
          v121 = v16; /*0x140a6d871*/
          v125 = v17; /*0x140a6d878*/
          JUMPOUT(0x140A6D87FLL); /*0x140a6d87f*/
        case 2: /*0x140a6cc87*/
LABEL_76:
          v123 = v18; /*0x140a6d83c*/
          v121 = v16; /*0x140a6d843*/
          v125 = v17; /*0x140a6d84a*/
          v130 = v5; /*0x140a6d851*/
          sub_1412ADB40(&off_141362A30); /*0x140a6d85f*/
        case 3: /*0x140a6cc87*/
LABEL_13:
          v123 = v18; /*0x140a6cdf2*/
          v121 = v16; /*0x140a6cdf9*/
          v125 = v17; /*0x140a6ce00*/
          v130 = v5; /*0x140a6ce07*/
          v134 = (__m128i *)(v3 + 4696); /*0x140a6ce15*/
          v31 = (const __m128i *)(v3 + 4504); /*0x140a6ce24*/
          switch ( *(_BYTE *)(v3 + 4696) ) /*0x140a6ce39*/
          {
            case 0: /*0x140a6ce39*/
              goto LABEL_14;
            case 1: /*0x140a6ce39*/
              v115 = v3 + 4504; /*0x140a6d8f3*/
              sub_1412ADB20(&off_141362A00); /*0x140a6d901*/
            case 2: /*0x140a6ce39*/
              v115 = v3 + 4504; /*0x140a6d8dd*/
              sub_1412ADB40(&off_141362A00); /*0x140a6d8eb*/
            case 3: /*0x140a6ce39*/
              v132 = (__int64 *)(v3 + 4504); /*0x140a6cee9*/
              goto LABEL_25; /*0x140a6cee9*/
          }
      }
  }
}
