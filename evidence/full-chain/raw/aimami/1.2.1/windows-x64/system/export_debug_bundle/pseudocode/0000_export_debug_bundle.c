// win 1.2.1 NEW export_debug_bundle 0x140d0fa00 d=0
char __fastcall sub_140D0FA00(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  __int8 v8; // bl
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _QWORD *v16; // r12
  volatile signed __int64 **v17; // r15
  __int64 v18; // rdi
  char v19; // of
  __int64 v20; // r14
  volatile signed __int64 **v21; // rdx
  volatile signed __int64 *v22; // rax
  __int64 v23; // rt0
  volatile signed __int64 *v24; // rcx
  __int64 v25; // rt0
  volatile signed __int64 *v26; // r8
  __int64 v27; // rt0
  volatile signed __int64 *v28; // r9
  __int64 v29; // rt0
  volatile signed __int64 *v30; // r10
  __int64 v31; // rt0
  volatile signed __int64 *v32; // r11
  __int64 v33; // rt0
  volatile signed __int64 *v34; // rbx
  volatile signed __int64 *v35; // rdx
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // r15
  __int64 v41; // r14
  __int128 v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // r12
  __int64 v45; // rax
  unsigned __int8 v46; // r12
  __int64 v47; // r13
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rbx
  __int64 v52; // r14
  _BYTE *v53; // rdx
  _QWORD *v54; // r12
  volatile signed __int64 *v55; // rsi
  const __m128i *v56; // r12
  __int64 v57; // r14
  char v58; // cl
  char result; // al
  unsigned __int64 v60; // rbx
  __int64 v61; // r14
  __int64 v62; // rbx
  __m128i *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r13
  __int64 v66; // rdi
  __int64 v67; // rdx
  _QWORD *v68; // rdi
  __m128i v69[9]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v70; // [rsp+D0h] [rbp+50h]
  _BYTE v71[80]; // [rsp+E0h] [rbp+60h]
  __m256i v72; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v73; // [rsp+150h] [rbp+D0h]
  __m128i v74[9]; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v75; // [rsp+1F0h] [rbp+170h] BYREF
  __int8 v76; // [rsp+1F8h] [rbp+178h]
  int v77; // [rsp+1F9h] [rbp+179h]
  __int16 v78; // [rsp+1FDh] [rbp+17Dh]
  char v79; // [rsp+1FFh] [rbp+17Fh]
  __int64 v80; // [rsp+200h] [rbp+180h]
  __int128 v81; // [rsp+208h] [rbp+188h]
  _BYTE v82[40]; // [rsp+218h] [rbp+198h] BYREF
  __m256i v83; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v84; // [rsp+260h] [rbp+1E0h]
  __int128 v85; // [rsp+270h] [rbp+1F0h]
  __int64 v86; // [rsp+280h] [rbp+200h]
  __m256i v87; // [rsp+380h] [rbp+300h] BYREF
  __int128 v88; // [rsp+3A0h] [rbp+320h]
  __int128 v89; // [rsp+3B0h] [rbp+330h]
  __int128 v90; // [rsp+3C0h] [rbp+340h]
  __int128 v91; // [rsp+3D0h] [rbp+350h]
  __int128 v92; // [rsp+3E0h] [rbp+360h]
  __m256i v93; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v94; // [rsp+410h] [rbp+390h]
  __int128 v95; // [rsp+420h] [rbp+3A0h]
  __int128 v96; // [rsp+430h] [rbp+3B0h]
  __int128 v97; // [rsp+440h] [rbp+3C0h]
  __int128 v98; // [rsp+450h] [rbp+3D0h] BYREF
  __int64 v99; // [rsp+460h] [rbp+3E0h]
  _BYTE *v100; // [rsp+468h] [rbp+3E8h]
  __int64 *v101; // [rsp+470h] [rbp+3F0h]
  __int64 v102; // [rsp+478h] [rbp+3F8h]
  unsigned __int64 v103; // [rsp+480h] [rbp+400h]
  _QWORD *v104; // [rsp+488h] [rbp+408h]
  volatile signed __int64 **v105; // [rsp+490h] [rbp+410h]
  char v106; // [rsp+49Fh] [rbp+41Fh] BYREF
  _QWORD *v107; // [rsp+4A0h] [rbp+420h]
  volatile signed __int64 **v108; // [rsp+4A8h] [rbp+428h]
  __int64 v109; // [rsp+4B0h] [rbp+430h]
  char v110; // [rsp+4BEh] [rbp+43Eh]
  char v111; // [rsp+4BFh] [rbp+43Fh]
  __int64 v112; // [rsp+4C0h] [rbp+440h]

  v112 = -2; /*0x140d0fa1b*/
  v3 = a1; /*0x140d0fa29*/
  v4 = *(unsigned __int8 *)(a1 + 1856); /*0x140d0fa2c*/
  v109 = a1; /*0x140d0fa41*/
  switch ( v4 ) /*0x140d0fa48*/
  {
    case 0LL: /*0x140d0fa48*/
      *(_WORD *)(a1 + 1857) = 257; /*0x140d0fa4a*/
      *(_BYTE *)(a1 + 1859) = 1; /*0x140d0fa53*/
      v5 = a1 + 1120; /*0x140d0fa61*/
      sub_1415B2FE0((__m128i *)(a1 + 1120), (const __m128i *)(a1 + 392), 0x2D8u); /*0x140d0fa71*/
      switch ( *(_BYTE *)(v3 + 1840) ) /*0x140d0fa8b*/
      {
        case 0: /*0x140d0fa8b*/
          goto LABEL_4;
        case 1: /*0x140d0fa8b*/
          goto LABEL_79;
        case 2: /*0x140d0fa8b*/
          goto LABEL_78;
        case 3: /*0x140d0fa8b*/
          goto LABEL_7;
      }
    case 1LL: /*0x140d0fa48*/
      sub_1415F0F60(&off_1416DF770); /*0x140d10a13*/
    case 2LL: /*0x140d0fa48*/
      sub_1415F0F80(&off_1416DF770); /*0x140d10a05*/
    case 3LL: /*0x140d0fa48*/
      v5 = a1 + 1120; /*0x140d0fa8d*/
      switch ( *(_BYTE *)(a1 + 1840) ) /*0x140d0faa9*/
      {
        case 0: /*0x140d0faa9*/
LABEL_4:
          v6 = v3 + 1640; /*0x140d0faab*/
          *(_QWORD *)v82 = aExportDebugBun; /*0x140d0fac4*/
          *(_QWORD *)&v82[8] = 19; /*0x140d0facb*/
          *(_QWORD *)&v82[16] = aManager_1; /*0x140d0fadd*/
          *(_QWORD *)&v82[24] = 7; /*0x140d0fae4*/
          v102 = v5; /*0x140d0faef*/
          *(_QWORD *)&v82[32] = v5; /*0x140d0faf6*/
          *(_OWORD *)v83.m256i_i8 = (unsigned __int64)(v3 + 1640); /*0x140d0fafd*/
          v7 = sub_14029F310((_QWORD *)(*(_QWORD *)(v3 + 1632) + 16LL)); /*0x140d0fb15*/
          v107 = (_QWORD *)(v3 + 1640); /*0x140d0fb1b*/
          if ( v7 ) /*0x140d0fb22*/
            goto LABEL_5; /*0x140d0fb22*/
          sub_1415C5640((__int64)&v72, (__int64)v82, (__int64)&v82[16]); /*0x140d0fec5*/
          v8 = v72.m256i_i8[0]; /*0x140d0fecb*/
          if ( v72.m256i_i8[0] == -1 ) /*0x140d0fed5*/
          {
            v7 = v72.m256i_i64[1]; /*0x140d107ab*/
LABEL_5:
            *(_QWORD *)v82 = aExportDebugBun; /*0x140d0fb3a*/
            *(_QWORD *)&v82[8] = 19; /*0x140d0fb41*/
            *(_QWORD *)&v82[16] = aTargetpath_1; /*0x140d0fb53*/
            *(_QWORD *)&v82[24] = 10; /*0x140d0fb5a*/
            *(_QWORD *)&v82[32] = v102; /*0x140d0fb65*/
            *(_OWORD *)v83.m256i_i8 = v6; /*0x140d0fb6c*/
            sub_1400DB700((__int64)&v72, (__int64 *)v82); /*0x140d0fb81*/
            v8 = v72.m256i_i8[0]; /*0x140d0fb87*/
            if ( v72.m256i_i8[0] == -1 ) /*0x140d0fb91*/
            {
              v9 = v72.m256i_i64[3]; /*0x140d0fb97*/
              v10 = *(_OWORD *)&v72.m256i_u64[1]; /*0x140d0fb9e*/
              v3 = v109; /*0x140d0fba5*/
              *(_QWORD *)(v109 + 1688) = v7; /*0x140d0fbac*/
              *(_OWORD *)(v3 + 1664) = v10; /*0x140d0fbb3*/
              *(_QWORD *)(v3 + 1680) = v9; /*0x140d0fbba*/
              *(_BYTE *)(v3 + 1712) = 0; /*0x140d0fbc1*/
              *(_OWORD *)(v3 + 1752) = *(_OWORD *)(v3 + 1696); /*0x140d0fbd6*/
              *(_OWORD *)(v3 + 1720) = *(_OWORD *)(v3 + 1664); /*0x140d0fbe4*/
              *(_QWORD *)(v3 + 1736) = *(_QWORD *)(v3 + 1680); /*0x140d0fbf2*/
              *(_QWORD *)(v3 + 1744) = *(_QWORD *)(v3 + 1688); /*0x140d0fc00*/
              *(_QWORD *)(v3 + 1768) = *(_QWORD *)(v3 + 1712); /*0x140d0fc0e*/
              v100 = (_BYTE *)(v3 + 1832); /*0x140d0fc1c*/
              *(_BYTE *)(v3 + 1832) = 0; /*0x140d0fc23*/
              *(_QWORD *)(v3 + 1824) = *(_QWORD *)(v3 + 1768); /*0x140d0fc2e*/
              v11 = *(_OWORD *)(v3 + 1720); /*0x140d0fc35*/
              v12 = *(_OWORD *)(v3 + 1736); /*0x140d0fc38*/
              v101 = (__int64 *)(v3 + 1720); /*0x140d0fc3c*/
              *(_OWORD *)(v3 + 1808) = *(_OWORD *)(v3 + 1752); /*0x140d0fc47*/
              *(_OWORD *)(v3 + 1792) = v12; /*0x140d0fc4e*/
              *(_OWORD *)(v3 + 1776) = v11; /*0x140d0fc55*/
LABEL_9:
              *(_QWORD *)(v3 + 1808) = *(_QWORD *)(v3 + 1800); /*0x140d0fd06*/
              *(_BYTE *)(v3 + 1825) = 1; /*0x140d0fd14*/
              v16 = *(_QWORD **)(v3 + 1776); /*0x140d0fd1b*/
              v17 = *(volatile signed __int64 ***)(v3 + 1784); /*0x140d0fd22*/
              v18 = *(_QWORD *)(v3 + 1792); /*0x140d0fd29*/
              v104 = v16; /*0x140d0fd30*/
              v103 = (unsigned __int64)v17; /*0x140d0fd37*/
              sub_1407E5110( /*0x140d0fd6c*/
                (unsigned int)aDebugBundle,
                12,
                (unsigned int)aExportStarted,
                14,
                (__int64)aTargetSelected,
                15);
              v20 = v109; /*0x140d0fd72*/
              v21 = *(volatile signed __int64 ***)(v109 + 1808); /*0x140d0fd79*/
              v22 = *v21; /*0x140d0fd80*/
              v23 = _InterlockedIncrement64(*v21); /*0x140d0fd83*/
              if ( (v23 < 0) ^ v19 | (v23 == 0) ) /*0x140d0fd87*/
                goto LABEL_82; /*0x140d0fd87*/
              v24 = v21[1]; /*0x140d0fd8d*/
              v25 = _InterlockedIncrement64(v24); /*0x140d0fd91*/
              if ( (v25 < 0) ^ v19 | (v25 == 0) ) /*0x140d0fd95*/
                goto LABEL_82; /*0x140d0fd95*/
              v26 = v21[2]; /*0x140d0fd9b*/
              v27 = _InterlockedIncrement64(v26); /*0x140d0fd9f*/
              if ( (v27 < 0) ^ v19 | (v27 == 0) ) /*0x140d0fda3*/
                goto LABEL_82; /*0x140d0fda3*/
              v28 = v21[3]; /*0x140d0fda9*/
              v29 = _InterlockedIncrement64(v28); /*0x140d0fdad*/
              if ( (v29 < 0) ^ v19 | (v29 == 0) ) /*0x140d0fdb1*/
                goto LABEL_82; /*0x140d0fdb1*/
              v30 = v21[4]; /*0x140d0fdb7*/
              v31 = _InterlockedIncrement64(v30); /*0x140d0fdbb*/
              if ( (v31 < 0) ^ v19 | (v31 == 0) ) /*0x140d0fdbf*/
                goto LABEL_82; /*0x140d0fdbf*/
              v32 = v21[5]; /*0x140d0fdc5*/
              v33 = _InterlockedIncrement64(v32); /*0x140d0fdc9*/
              if ( (v33 < 0) ^ v19 | (v33 == 0) ) /*0x140d0fdcd*/
                goto LABEL_82; /*0x140d0fdcd*/
              v34 = v21[7]; /*0x140d0fdd3*/
              if ( v34 ) /*0x140d0fdda*/
              {
                if ( _InterlockedIncrement64(v34) <= 0 ) /*0x140d0fde0*/
                  goto LABEL_82; /*0x140d0fde0*/
              }
              v35 = v21[6]; /*0x140d0fde6*/
              if ( _InterlockedIncrement64(v35) <= 0 ) /*0x140d0fdee*/
LABEL_82:
                BUG(); /*0x140d10a8e*/
              *(_BYTE *)(v20 + 1825) = 0; /*0x140d0fdf4*/
              v107 = v16; /*0x140d0fdfc*/
              *(_QWORD *)v82 = v16; /*0x140d0fe03*/
              v108 = v17; /*0x140d0fe0a*/
              *(_QWORD *)&v82[8] = v17; /*0x140d0fe11*/
              *(_QWORD *)&v82[16] = v18; /*0x140d0fe18*/
              *(_QWORD *)&v82[24] = v22; /*0x140d0fe1f*/
              *(_QWORD *)&v82[32] = v24; /*0x140d0fe26*/
              v83.m256i_i64[0] = (__int64)v26; /*0x140d0fe2d*/
              v83.m256i_i64[1] = (__int64)v28; /*0x140d0fe34*/
              v83.m256i_i64[2] = (__int64)v30; /*0x140d0fe3b*/
              v83.m256i_i64[3] = (__int64)v32; /*0x140d0fe42*/
              *(_QWORD *)&v84 = v35; /*0x140d0fe49*/
              *((_QWORD *)&v84 + 1) = v34; /*0x140d0fe50*/
              v36 = off_141DC1660; /*0x140d0fe57*/
              if ( *((_DWORD *)off_141DC1660 + 24) ) /*0x140d0fe5e*/
              {
                v111 = 1; /*0x140d1097e*/
                v68 = off_141DC1660; /*0x140d1098c*/
                sub_1415C9485(off_141DC1660); /*0x140d1098f*/
                v36 = v68; /*0x140d10994*/
              }
              if ( *((_DWORD *)v36 + 4) == -1 ) /*0x140d0fe6d*/
              {
                v48 = 704; /*0x140d0ffd2*/
                if ( *(_BYTE *)v36 ) /*0x140d0ffca*/
                  v48 = 472; /*0x140d0ffd7*/
                v49 = v36[1] + v48; /*0x140d0ffdb*/
                v111 = 0; /*0x140d0ffdf*/
                v39 = sub_14063DDC0(v49, v36, v82, &off_1416A4508); /*0x140d0fff4*/
              }
              else
              {
                v37 = 704; /*0x140d0fe7c*/
                if ( *((_BYTE *)v36 + 64) ) /*0x140d0fe73*/
                  v37 = 472; /*0x140d0fe81*/
                v38 = v36[9] + v37; /*0x140d0fe89*/
                v111 = 0; /*0x140d0fe8d*/
                v39 = sub_14063DDC0(v38, v36 + 8, v82, &off_1416A44F0); /*0x140d0fea5*/
              }
              v50 = v109; /*0x140d0fffa*/
              *(_QWORD *)(v109 + 1816) = v39; /*0x140d10001*/
              v105 = (volatile signed __int64 **)(v50 + 1816); /*0x140d10019*/
              sub_140283700(v82, v50 + 1816, a2); /*0x140d10023*/
              v51 = *(_QWORD *)v82; /*0x140d10029*/
              if ( *(_QWORD *)v82 == -3 ) /*0x140d10034*/
              {
                v53 = (_BYTE *)v109; /*0x140d10064*/
                *(_BYTE *)(v109 + 1824) = 3; /*0x140d1006b*/
              }
              else
              {
                if ( *(_QWORD *)v82 == -2 ) /*0x140d1003a*/
                {
                  v93.m256i_i64[2] = *(_QWORD *)&v82[24]; /*0x140d10043*/
                  *(_OWORD *)v93.m256i_i8 = *(_OWORD *)&v82[8]; /*0x140d10051*/
                  v52 = 0x800000000000000CuLL; /*0x140d10058*/
                }
                else
                {
                  v52 = *(_QWORD *)&v82[8]; /*0x140d10077*/
                  *(_OWORD *)v93.m256i_i8 = *(_OWORD *)&v82[16]; /*0x140d10085*/
                  v93.m256i_i64[2] = *(_QWORD *)&v82[32]; /*0x140d10093*/
                  v87 = v83; /*0x140d100a1*/
                  v88 = v84; /*0x140d100bd*/
                  v89 = v85; /*0x140d100cb*/
                  *(_QWORD *)&v90 = v86; /*0x140d100d9*/
                }
                v40 = (unsigned __int64)v108; /*0x140d100e0*/
                v54 = v107; /*0x140d100e7*/
                v70 = *(_OWORD *)v93.m256i_i8; /*0x140d100f5*/
                *(_QWORD *)v71 = v93.m256i_i64[2]; /*0x140d10100*/
                *(__m256i *)&v71[8] = v87; /*0x140d10120*/
                *(_OWORD *)&v71[40] = v88; /*0x140d10128*/
                *(_OWORD *)&v71[56] = v89; /*0x140d1012f*/
                *(_QWORD *)&v71[72] = v90; /*0x140d1013d*/
                v55 = *v105; /*0x140d1014b*/
                v104 = v107; /*0x140d1014e*/
                v103 = (unsigned __int64)v108; /*0x140d10155*/
                if ( sub_141221580(v55) ) /*0x140d1015f*/
                {
                  v104 = v54; /*0x140d10169*/
                  v103 = v40; /*0x140d10170*/
                  sub_14122BD90((__int64)v55); /*0x140d1017a*/
                }
                if ( v51 == -2 ) /*0x140d10184*/
                {
                  *(_QWORD *)v82 = v52; /*0x140d1018a*/
                  *(_OWORD *)&v82[8] = v70; /*0x140d10199*/
                  *(_OWORD *)&v82[24] = *(_OWORD *)v71; /*0x140d101a0*/
                  v83.m256i_i64[0] = *(_QWORD *)&v71[16]; /*0x140d101ab*/
                  v93.m256i_i64[0] = (__int64)v82; /*0x140d101b2*/
                  v93.m256i_i64[1] = (__int64)sub_141170260; /*0x140d101c0*/
                  sub_1413CAFD0(&v87, &unk_1416E1963, &v93); /*0x140d101dc*/
                  v104 = v107; /*0x140d101e9*/
                  v103 = (unsigned __int64)v108; /*0x140d101f7*/
                  sub_140C30260((__int64 *)v82); /*0x140d10205*/
                  v56 = (const __m128i *)v87.m256i_i64[1]; /*0x140d10212*/
                  *(_QWORD *)&v42 = v87.m256i_i64[0]; /*0x140d10212*/
                  *((_QWORD *)&v42 + 1) = v87.m256i_i64[2]; /*0x140d10219*/
LABEL_49:
                  *(_WORD *)(v109 + 1824) = 1; /*0x140d10547*/
                  v60 = (unsigned __int64)v42 >> 8; /*0x140d1055a*/
                  goto LABEL_50; /*0x140d1055a*/
                }
                if ( v51 == -1 ) /*0x140d1022d*/
                {
                  *(_QWORD *)v82 = v52; /*0x140d103f1*/
                  *(_OWORD *)&v82[8] = v70; /*0x140d103fc*/
                  *(_OWORD *)&v82[24] = *(_OWORD *)v71; /*0x140d10412*/
                  v83 = *(__m256i *)&v71[16]; /*0x140d10419*/
                  v84 = *(_OWORD *)&v71[48]; /*0x140d10427*/
                  *(_QWORD *)&v85 = *(_QWORD *)&v71[64]; /*0x140d10432*/
                  v93.m256i_i64[0] = (__int64)v82; /*0x140d10439*/
                  v93.m256i_i64[1] = (__int64)sub_140286360; /*0x140d10447*/
                  sub_1413CAFD0(&v87, &unk_1416E25C1, &v93); /*0x140d10466*/
                  *(_OWORD *)v93.m256i_i8 = *(_OWORD *)v87.m256i_i8; /*0x140d10473*/
                  v93.m256i_i64[2] = v87.m256i_i64[2]; /*0x140d10481*/
                  sub_1407E5340((unsigned int)aDebugBundle, 12, (unsigned int)aExportFailed, 13, (__int64)&v93); /*0x140d104a6*/
                  v93.m256i_i64[0] = 0; /*0x140d104ac*/
                  *(_OWORD *)&v93.m256i_u64[1] = 1u; /*0x140d104b7*/
                  v87.m256i_i64[2] = 1610612768; /*0x140d104cd*/
                  v87.m256i_i64[0] = (__int64)&v93; /*0x140d104d8*/
                  v87.m256i_i64[1] = (__int64)&off_1416EB4D0; /*0x140d104e6*/
                  if ( (unsigned __int8)sub_140286360(v82, &v87) ) /*0x140d104fb*/
                    sub_1415F0BC0( /*0x140d109c2*/
                      (__int64)aADisplayImplem_12,
                      55,
                      (__int64)&v106,
                      (__int64)&unk_1416E38F0,
                      (__int64)&off_1416EB588);
                  v56 = (const __m128i *)v93.m256i_i64[1]; /*0x140d10510*/
                  *(_QWORD *)&v42 = v93.m256i_i64[0]; /*0x140d10510*/
                  *((_QWORD *)&v42 + 1) = v93.m256i_i64[2]; /*0x140d10517*/
                  v104 = v107; /*0x140d10525*/
                  v103 = (unsigned __int64)v108; /*0x140d10533*/
                  sub_140C30CE0(v82); /*0x140d10541*/
                  goto LABEL_49; /*0x140d10541*/
                }
                v93.m256i_i64[0] = v51; /*0x140d10233*/
                v93.m256i_i64[1] = v52; /*0x140d1023a*/
                *(_OWORD *)&v93.m256i_u64[2] = v70; /*0x140d10245*/
                v94 = *(_OWORD *)v71; /*0x140d1025b*/
                v95 = *(_OWORD *)&v71[16]; /*0x140d10262*/
                v96 = *(_OWORD *)&v71[32]; /*0x140d10269*/
                v97 = *(_OWORD *)&v71[48]; /*0x140d10270*/
                v98 = *(_OWORD *)&v71[64]; /*0x140d1027b*/
                v87.m256i_i64[0] = (__int64)&v98; /*0x140d10289*/
                v87.m256i_i64[1] = (__int64)sub_1413DB400; /*0x140d10297*/
                v110 = 1; /*0x140d1029e*/
                sub_1413CAFD0(v82, &unk_1416E25A8, &v87); /*0x140d102bd*/
                *(_OWORD *)v87.m256i_i8 = *(_OWORD *)v82; /*0x140d102ca*/
                v87.m256i_i64[2] = *(_QWORD *)&v82[16]; /*0x140d102d8*/
                v110 = 1; /*0x140d102df*/
                sub_1407E5340((unsigned int)aDebugBundle, 12, (unsigned int)aExportSucceede, 16, (__int64)&v87); /*0x140d10304*/
                v92 = v98; /*0x140d10311*/
                v91 = v97; /*0x140d1031f*/
                v90 = v96; /*0x140d1032d*/
                v89 = v95; /*0x140d10350*/
                v88 = v94; /*0x140d10357*/
                v87 = v93; /*0x140d1035e*/
                v110 = 0; /*0x140d1036c*/
                sub_140257AE0(v82, &v87); /*0x140d10381*/
                *(_QWORD *)&v42 = *(_QWORD *)&v82[8]; /*0x140d1038e*/
                v40 = *(_QWORD *)v82; /*0x140d1038e*/
                v56 = *(const __m128i **)&v82[16]; /*0x140d10395*/
                v57 = *(_QWORD *)&v82[32]; /*0x140d103a3*/
                *((_QWORD *)&v42 + 1) = *(_QWORD *)&v82[24]; /*0x140d103a3*/
                sub_1415B2FE0(v69, (const __m128i *)&v83, 0x98u); /*0x140d103bb*/
                v53 = (_BYTE *)v109; /*0x140d103c0*/
                *(_WORD *)(v109 + 1824) = 1; /*0x140d103c7*/
                if ( v40 != -2 ) /*0x140d103d4*/
                {
                  v60 = (unsigned __int64)v42 >> 8; /*0x140d107ba*/
                  if ( v40 != -1 ) /*0x140d107c2*/
                  {
                    sub_1415B2FE0(v74, v69, 0x98u); /*0x140d107d9*/
                    v72.m256i_i64[0] = v40; /*0x140d107de*/
                    v72.m256i_i8[8] = v42; /*0x140d107e5*/
                    *(__int32 *)((char *)&v72.m256i_i32[2] + 1) = (unsigned __int64)v42 >> 8; /*0x140d107ec*/
                    v72.m256i_i8[15] = (unsigned __int64)v42 >> 8 >> 48; /*0x140d107f9*/
                    *(__int16 *)((char *)&v72.m256i_i16[6] + 1) = DWORD1(v42) >> 8; /*0x140d10803*/
                    v72.m256i_i64[2] = (__int64)v56; /*0x140d1080a*/
                    v72.m256i_i64[3] = *((_QWORD *)&v42 + 1); /*0x140d10811*/
                    v73 = v57; /*0x140d10818*/
                    sub_14028D810(v82, &v72); /*0x140d1082d*/
                    v40 = ((unsigned __int64)((v82[15] << 16) | (unsigned int)*(unsigned __int16 *)&v82[13]) << 32) /*0x140d10858*/
                        | *(unsigned int *)&v82[9];
                    v8 = v82[8]; /*0x140d1085b*/
                    v41 = *(_QWORD *)&v82[16]; /*0x140d10862*/
                    v42 = *(_OWORD *)&v82[24]; /*0x140d10869*/
                    if ( *(_QWORD *)v82 == -1 ) /*0x140d1087b*/
                    {
                      v46 = 0; /*0x140d10976*/
                    }
                    else
                    {
                      v82[15] = (((unsigned __int64)((v82[15] << 16) | (unsigned int)*(unsigned __int16 *)&v82[13]) << 32) /*0x140d1088f*/
                               | *(unsigned int *)&v82[9]) >> 48;
                      *(_WORD *)&v82[13] = WORD2(v40); /*0x140d1089c*/
                      *(_DWORD *)&v82[9] = v40; /*0x140d108a3*/
                      v93.m256i_i64[0] = 0; /*0x140d108d3*/
                      *(_OWORD *)&v93.m256i_u64[1] = 1u; /*0x140d108de*/
                      v87.m256i_i64[2] = 1610612768; /*0x140d108f4*/
                      v87.m256i_i64[0] = (__int64)&v93; /*0x140d10906*/
                      v87.m256i_i64[1] = (__int64)&off_1416EB4D0; /*0x140d10914*/
                      if ( (unsigned __int8)sub_141170260((__int64)v82, &v87) ) /*0x140d10929*/
                        sub_1415F0BC0( /*0x140d109f3*/
                          (__int64)aADisplayImplem_12,
                          55,
                          (__int64)&v106,
                          (__int64)&unk_1416E38F0,
                          (__int64)&off_1416EB588);
                      v42 = *(_OWORD *)&v93.m256i_u64[1]; /*0x140d1093e*/
                      v41 = v93.m256i_i64[0]; /*0x140d1093e*/
                      sub_140C30260((__int64 *)v82); /*0x140d10953*/
                      v46 = 1; /*0x140d10959*/
                      v8 = 3; /*0x140d1095c*/
                    }
LABEL_58:
                    *v100 = 1; /*0x140d105e0*/
                    sub_140C09580(v101); /*0x140d105f1*/
                    sub_140C300E0(v102); /*0x140d105fe*/
                    v47 = v109; /*0x140d10604*/
                    if ( *(_QWORD *)(v109 + 1640) == -1 ) /*0x140d10613*/
                      goto LABEL_64; /*0x140d10613*/
                    v101 = (__int64 *)(v109 + 1648); /*0x140d10620*/
                    v64 = *(_QWORD *)(v109 + 1648); /*0x140d10627*/
                    v108 = *(volatile signed __int64 ***)(v109 + 1656); /*0x140d10635*/
                    v105 = nullptr; /*0x140d1063c*/
                    v107 = (_QWORD *)v64; /*0x140d10647*/
                    while ( v108 != v105 ) /*0x140d1065e*/
                    {
                      v105 = (volatile signed __int64 **)((char *)v105 + 1); /*0x140d10663*/
                      v65 = v64 + 96; /*0x140d1066a*/
                      sub_1408780B0(v64); /*0x140d1066e*/
                      v64 = v65; /*0x140d10674*/
                    }
                    v47 = v109; /*0x140d10679*/
                    v45 = *(_QWORD *)(v109 + 1640); /*0x140d10680*/
                    if ( !v45 ) /*0x140d1068a*/
                      goto LABEL_64; /*0x140d1068a*/
                    goto LABEL_63; /*0x140d1068a*/
                  }
LABEL_50:
                  v61 = (v60 << 8) | (unsigned __int8)v42; /*0x140d1055e*/
                  if ( v42 < 0 ) /*0x140d1056c*/
                  {
                    v62 = 0; /*0x140d1056e*/
                    goto LABEL_52; /*0x140d1056e*/
                  }
                  if ( *((_QWORD *)&v42 + 1) ) /*0x140d1058f*/
                  {
                    nullsub_1(); /*0x140d10595*/
                    v62 = 1; /*0x140d1059a*/
                    v63 = (__m128i *)sub_140001350(*((__int64 *)&v42 + 1), 1); /*0x140d105a7*/
                    if ( !v63 ) /*0x140d105af*/
                    {
LABEL_52:
                      v105 = (volatile signed __int64 **)v61; /*0x140d10570*/
                      v108 = (volatile signed __int64 **)v56; /*0x140d10577*/
                      sub_1415F08AB(v62, *((__int64 *)&v42 + 1)); /*0x140d10584*/
                    }
                    *(_QWORD *)&v42 = v63; /*0x140d105b1*/
                    sub_1415B2FE0(v63, v56, *((unsigned __int64 *)&v42 + 1)); /*0x140d105bd*/
                    if ( !v61 ) /*0x140d105c5*/
                      goto LABEL_57; /*0x140d105c5*/
                  }
                  else
                  {
                    *(_QWORD *)&v42 = 1; /*0x140d10963*/
                    if ( !v61 ) /*0x140d1096b*/
                      goto LABEL_57; /*0x140d1096b*/
                  }
                  sub_140001360((__int64)v56, v61, 1); /*0x140d105d3*/
LABEL_57:
                  v46 = 1; /*0x140d105d8*/
                  v8 = 3; /*0x140d105db*/
                  v41 = *((_QWORD *)&v42 + 1); /*0x140d105dd*/
                  goto LABEL_58; /*0x140d105dd*/
                }
              }
              v53[1832] = 3; /*0x140d103da*/
              v53[1840] = 3; /*0x140d103e1*/
              v58 = 3; /*0x140d103e8*/
              result = 1; /*0x140d103ea*/
              goto LABEL_65; /*0x140d103ec*/
            }
          }
          v40 = ((unsigned __int64)((v72.m256i_u8[7] << 16) /*0x140d0fef9*/
                                  | (unsigned int)*(unsigned __int16 *)((char *)&v72.m256i_u16[2] + 1)) << 32)
              | *(unsigned int *)((char *)v72.m256i_u32 + 1);
          v41 = v72.m256i_i64[1]; /*0x140d0fefc*/
          v42 = *(_OWORD *)&v72.m256i_u64[2]; /*0x140d0ff03*/
          sub_140C300E0(v102); /*0x140d0ff18*/
          if ( *v107 != -1 ) /*0x140d0ff29*/
          {
            v101 = (__int64 *)(v109 + 1648); /*0x140d0ff3d*/
            v43 = *(_QWORD *)(v109 + 1648); /*0x140d0ff44*/
            v108 = *(volatile signed __int64 ***)(v109 + 1656); /*0x140d0ff52*/
            v105 = nullptr; /*0x140d0ff59*/
            v100 = (_BYTE *)v43; /*0x140d0ff64*/
            while ( v108 != v105 ) /*0x140d0ff7e*/
            {
              v105 = (volatile signed __int64 **)((char *)v105 + 1); /*0x140d0ff83*/
              v44 = v43 + 96; /*0x140d0ff8a*/
              sub_1408780B0(v43); /*0x140d0ff8e*/
              v43 = v44; /*0x140d0ff94*/
            }
            v45 = *v107; /*0x140d0ffa0*/
            v46 = 1; /*0x140d0ffa3*/
            v47 = v109; /*0x140d0ffa9*/
            if ( !*v107 ) /*0x140d0ffa0*/
              goto LABEL_64; /*0x140d0ffb0*/
LABEL_63:
            sub_140001360(*v101, 96 * v45, 8); /*0x140d1068c*/
            goto LABEL_64; /*0x140d106a4*/
          }
          v46 = 1; /*0x140d0ffbb*/
          v47 = v109; /*0x140d0ffbe*/
LABEL_64:
          *(_BYTE *)(v47 + 1840) = 1; /*0x140d106a9*/
          sub_140C23290(v102); /*0x140d106b8*/
          v77 = v40; /*0x140d106be*/
          v79 = BYTE6(v40); /*0x140d106cc*/
          v78 = WORD2(v40); /*0x140d106d6*/
          v81 = v42; /*0x140d106de*/
          v76 = v8; /*0x140d106f0*/
          v80 = v41; /*0x140d106f6*/
          v75 = v46; /*0x140d106fd*/
          v66 = v109; /*0x140d10704*/
          *(_BYTE *)(v109 + 1859) = 0; /*0x140d1070b*/
          sub_1415B2FE0((__m128i *)v82, (const __m128i *)v66, 0x168u); /*0x140d10725*/
          *(_BYTE *)(v66 + 1858) = 0; /*0x140d1072a*/
          v67 = *(_QWORD *)(v66 + 384); /*0x140d10731*/
          *(_BYTE *)(v66 + 1857) = 0; /*0x140d10738*/
          v72.m256i_i64[2] = *(_QWORD *)(v66 + 376); /*0x140d10746*/
          *(_OWORD *)v72.m256i_i8 = *(_OWORD *)(v66 + 360); /*0x140d10754*/
          sub_140768E20( /*0x140d10780*/
            (const __m128i *)v82,
            v67,
            (__int64)&v75,
            (__int128 *)v72.m256i_i8,
            *(_DWORD *)(v66 + 1848),
            *(_DWORD *)(v66 + 1852));
          v58 = 1; /*0x140d10786*/
          result = 0; /*0x140d10788*/
          v53 = (_BYTE *)v109; /*0x140d1078a*/
LABEL_65:
          v53[1856] = v58; /*0x140d10791*/
          return result;
        case 1: /*0x140d0faa9*/
LABEL_79:
          v102 = v5; /*0x140d10a30*/
          sub_1415F0F60(&off_1416E1230); /*0x140d10a3e*/
        case 2: /*0x140d0faa9*/
LABEL_78:
          v102 = v5; /*0x140d10a1a*/
          sub_1415F0F80(&off_1416E1230); /*0x140d10a28*/
        case 3: /*0x140d0faa9*/
LABEL_7:
          v102 = v5; /*0x140d0fc73*/
          v13 = *(unsigned __int8 *)(v3 + 1832); /*0x140d0fc81*/
          v101 = (__int64 *)(v3 + 1720); /*0x140d0fc9d*/
          v100 = (_BYTE *)(v3 + 1832); /*0x140d0fca4*/
          switch ( v13 ) /*0x140d0fcab*/
          {
            case 0LL: /*0x140d0fcab*/
              *(_QWORD *)(v3 + 1824) = *(_QWORD *)(v3 + 1768); /*0x140d0fcb1*/
              v14 = *(_OWORD *)(v3 + 1720); /*0x140d0fcb8*/
              v15 = *(_OWORD *)(v3 + 1736); /*0x140d0fcbb*/
              *(_OWORD *)(v3 + 1808) = *(_OWORD *)(v3 + 1752); /*0x140d0fcc3*/
              *(_OWORD *)(v3 + 1792) = v15; /*0x140d0fcca*/
              *(_OWORD *)(v3 + 1776) = v14; /*0x140d0fcd1*/
              break; /*0x140d0fcd1*/
            case 1LL: /*0x140d0fcab*/
              v99 = v3 + 1720; /*0x140d10a7a*/
              sub_1415F0F60(&off_1416DF6F0); /*0x140d10a88*/
            case 2LL: /*0x140d0fcab*/
              v99 = v3 + 1720; /*0x140d10a64*/
              sub_1415F0F80(&off_1416DF6F0); /*0x140d10a72*/
            case 3LL: /*0x140d0fcab*/
              goto LABEL_9;
          }
          goto LABEL_9;
      }
  }
}