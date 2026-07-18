// win 1.2.1 NEW migrate_session_worktree 0x140cc1170 d=0
char __fastcall sub_140CC1170(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int8 v9; // r14
  unsigned __int64 v10; // rax
  __int128 v11; // xmm0
  const __m128i *v12; // rdx
  _BYTE *v13; // r8
  __m128i v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __m128i v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  volatile void *v20; // rdi
  __int64 v21; // r14
  __int64 *v22; // r15
  int v23; // eax
  __m128i *v24; // r8
  char v25; // cl
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  int v28; // r13d
  unsigned int v29; // r12d
  __int64 v30; // rdi
  PVOID v31; // rcx
  char v32; // al
  unsigned __int64 v33; // rdi
  _BYTE *v34; // r14
  __int64 v35; // r12
  __int64 v36; // r13
  __m128i v37; // xmm6
  unsigned __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdi
  volatile signed __int64 *v41; // rax
  unsigned __int8 v42; // di
  __int64 v43; // r15
  PVOID v44; // rcx
  char v45; // al
  bool v46; // of
  __int64 v47; // rcx
  volatile signed __int64 *v48; // rax
  __int64 v49; // rt0
  _QWORD *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r14
  __int64 v57; // r15
  _BYTE *v58; // r14
  volatile signed __int64 *v59; // rsi
  int v60; // r14d
  unsigned int v61; // esi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __m128i *v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rdx
  char *v67; // rcx
  char *v68; // r15
  __int64 v69; // rdi
  __int64 v70; // rdx
  char v71; // cl
  char result; // al
  __int64 v73; // rsi
  __m128i v74; // xmm6
  _QWORD *v75; // rdi
  char v76; // al
  __m128i v77[10]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v78[10]; // [rsp+D8h] [rbp+58h] BYREF
  _QWORD v79[3]; // [rsp+180h] [rbp+100h] BYREF
  __m128i v80; // [rsp+198h] [rbp+118h]
  __m128i v81[10]; // [rsp+1A8h] [rbp+128h] BYREF
  _BYTE v82[24]; // [rsp+250h] [rbp+1D0h] BYREF
  unsigned __int64 v83; // [rsp+268h] [rbp+1E8h]
  __m128i v84; // [rsp+630h] [rbp+5B0h] BYREF
  unsigned __int64 v85; // [rsp+640h] [rbp+5C0h]
  __m128i v86; // [rsp+6E0h] [rbp+660h] BYREF
  __m128i v87; // [rsp+6F0h] [rbp+670h] BYREF
  _BYTE v88[24]; // [rsp+700h] [rbp+680h] BYREF
  __int128 v89; // [rsp+718h] [rbp+698h]
  __int128 v90; // [rsp+728h] [rbp+6A8h]
  __int128 v91; // [rsp+738h] [rbp+6B8h]
  __m128i v92; // [rsp+748h] [rbp+6C8h] BYREF
  __int64 v93; // [rsp+758h] [rbp+6D8h]
  __int64 v94; // [rsp+AC0h] [rbp+A40h]
  __int64 *v95; // [rsp+AC8h] [rbp+A48h]
  __int64 v96; // [rsp+AD0h] [rbp+A50h]
  volatile signed __int64 *v97; // [rsp+AD8h] [rbp+A58h]
  _QWORD v98[3]; // [rsp+AE0h] [rbp+A60h] BYREF
  char v99; // [rsp+AF8h] [rbp+A78h]
  int v100; // [rsp+AF9h] [rbp+A79h]
  __int16 v101; // [rsp+AFDh] [rbp+A7Dh]
  char v102; // [rsp+AFFh] [rbp+A7Fh]
  __int64 v103; // [rsp+B00h] [rbp+A80h]
  __m128i v104; // [rsp+B08h] [rbp+A88h]
  __int128 v105; // [rsp+B18h] [rbp+A98h]
  __int128 v106; // [rsp+B28h] [rbp+AA8h]
  __int128 v107; // [rsp+B38h] [rbp+AB8h]
  __m128i v108; // [rsp+B48h] [rbp+AC8h]
  __int64 v109; // [rsp+B58h] [rbp+AD8h]
  __m128i v110; // [rsp+B60h] [rbp+AE0h] BYREF
  __int128 v111; // [rsp+B70h] [rbp+AF0h]
  __int128 v112; // [rsp+B80h] [rbp+B00h]
  __int128 v113; // [rsp+B90h] [rbp+B10h]
  __m128i v114; // [rsp+BA0h] [rbp+B20h] BYREF
  __int64 v115; // [rsp+BB0h] [rbp+B30h]
  __int64 v116; // [rsp+BB8h] [rbp+B38h] BYREF
  __int8 v117; // [rsp+BC0h] [rbp+B40h]
  int v118; // [rsp+BC1h] [rbp+B41h]
  __int16 v119; // [rsp+BC5h] [rbp+B45h]
  char v120; // [rsp+BC7h] [rbp+B47h]
  __m128i v121; // [rsp+BC8h] [rbp+B48h]
  unsigned __int64 v122; // [rsp+BD8h] [rbp+B58h]
  __m128i v123; // [rsp+BE0h] [rbp+B60h] BYREF
  __int128 v124; // [rsp+BF0h] [rbp+B70h]
  __int128 v125; // [rsp+C00h] [rbp+B80h]
  __int128 v126; // [rsp+C10h] [rbp+B90h]
  __m128i v127; // [rsp+C20h] [rbp+BA0h] BYREF
  __int64 v128; // [rsp+C30h] [rbp+BB0h]
  __int64 v129; // [rsp+C40h] [rbp+BC0h]
  __int64 v130; // [rsp+C48h] [rbp+BC8h] BYREF
  __int64 v131; // [rsp+C50h] [rbp+BD0h]
  __int64 v132; // [rsp+C58h] [rbp+BD8h]
  const __m128i *v133; // [rsp+C60h] [rbp+BE0h]
  _BYTE *v134; // [rsp+C68h] [rbp+BE8h]
  __int64 v135; // [rsp+C70h] [rbp+BF0h]
  __int64 v136; // [rsp+C78h] [rbp+BF8h]
  __int64 *v137; // [rsp+C80h] [rbp+C00h]
  __int64 v138; // [rsp+C88h] [rbp+C08h]
  PVOID Address; // [rsp+C90h] [rbp+C10h]
  __m128i *v140; // [rsp+C98h] [rbp+C18h]
  __int64 v141; // [rsp+CA0h] [rbp+C20h]
  __int64 v142; // [rsp+CA8h] [rbp+C28h]
  __int64 *v143; // [rsp+CB0h] [rbp+C30h]
  char v144; // [rsp+CBFh] [rbp+C3Fh] BYREF
  __int64 v145; // [rsp+CC0h] [rbp+C40h]
  __int64 v146; // [rsp+CC8h] [rbp+C48h]
  char v147; // [rsp+CD7h] [rbp+C57h]
  __int64 v148; // [rsp+CD8h] [rbp+C58h]

  v148 = -2; /*0x140cc1193*/
  v3 = a1; /*0x140cc11a1*/
  v4 = *(unsigned __int8 *)(a1 + 1952); /*0x140cc11a4*/
  v146 = a1; /*0x140cc11b9*/
  switch ( v4 ) /*0x140cc11c0*/
  {
    case 0LL: /*0x140cc11c0*/
      *(_WORD *)(a1 + 1953) = 257; /*0x140cc11c2*/
      *(_BYTE *)(a1 + 1955) = 1; /*0x140cc11cc*/
      v5 = a1 + 1168; /*0x140cc11db*/
      sub_1415B2FE0((__m128i *)(a1 + 1168), (const __m128i *)(a1 + 392), 0x308u); /*0x140cc11eb*/
      switch ( *(_BYTE *)(v3 + 1936) ) /*0x140cc1206*/
      {
        case 0: /*0x140cc1206*/
          goto LABEL_4;
        case 1: /*0x140cc1206*/
          goto LABEL_104;
        case 2: /*0x140cc1206*/
          goto LABEL_103;
        case 3: /*0x140cc1206*/
          goto LABEL_8;
      }
    case 1LL: /*0x140cc11c0*/
      sub_1415F0F60(&off_1416DF770); /*0x140cc2482*/
    case 2LL: /*0x140cc11c0*/
      sub_1415F0F80(&off_1416DF770); /*0x140cc2474*/
    case 3LL: /*0x140cc11c0*/
      v5 = a1 + 1168; /*0x140cc1208*/
      switch ( *(_BYTE *)(a1 + 1936) ) /*0x140cc1225*/
      {
        case 0: /*0x140cc1225*/
LABEL_4:
          v6 = v3 + 1688; /*0x140cc1227*/
          *(_QWORD *)&v88[16] = 0; /*0x140cc122e*/
          v86.m128i_i64[0] = (__int64)aMigrateSession; /*0x140cc1240*/
          v86.m128i_i64[1] = 24; /*0x140cc1247*/
          v87.m128i_i64[0] = (__int64)aRepo_0; /*0x140cc1259*/
          v87.m128i_i64[1] = 4; /*0x140cc1260*/
          v141 = v5; /*0x140cc126b*/
          *(_QWORD *)v88 = v5; /*0x140cc1272*/
          *(_QWORD *)&v88[8] = v3 + 1688; /*0x140cc1279*/
          v7 = sub_14029E2E0((_QWORD *)(*(_QWORD *)(v3 + 1680) + 16LL)); /*0x140cc1291*/
          Address = (PVOID)(v3 + 1688); /*0x140cc1297*/
          if ( v7 ) /*0x140cc129e*/
            goto LABEL_5; /*0x140cc129e*/
          sub_1415C5640((__int64)v82, (__int64)&v86, (__int64)&v87); /*0x140cc16f7*/
          v9 = v82[0]; /*0x140cc16fd*/
          if ( v82[0] != 0xFF ) /*0x140cc1709*/
            goto LABEL_27; /*0x140cc1709*/
          v7 = *(_QWORD *)&v82[8]; /*0x140cc170b*/
LABEL_5:
          *(_QWORD *)&v88[16] = 0; /*0x140cc12a4*/
          v86.m128i_i64[0] = (__int64)aMigrateSession; /*0x140cc12b6*/
          v86.m128i_i64[1] = 24; /*0x140cc12bd*/
          v87.m128i_i64[0] = (__int64)aMutationgate_0; /*0x140cc12cf*/
          v87.m128i_i64[1] = 12; /*0x140cc12d6*/
          *(_QWORD *)v88 = v141; /*0x140cc12e1*/
          *(_QWORD *)&v88[8] = v6; /*0x140cc12e8*/
          v8 = sub_14029F0C0((volatile void *)(*(_QWORD *)(v146 + 1680) + 16LL)); /*0x140cc1307*/
          if ( v8 ) /*0x140cc130d*/
            goto LABEL_6; /*0x140cc130d*/
          sub_1415C5640((__int64)v82, (__int64)&v86, (__int64)&v87); /*0x140cc172c*/
          v9 = v82[0]; /*0x140cc1732*/
          if ( v82[0] == 0xFF ) /*0x140cc173e*/
          {
            v8 = *(_QWORD *)&v82[8]; /*0x140cc2252*/
LABEL_6:
            *(_QWORD *)&v88[16] = 0; /*0x140cc1313*/
            v86.m128i_i64[0] = (__int64)aMigrateSession; /*0x140cc1325*/
            v86.m128i_i64[1] = 24; /*0x140cc132c*/
            v87.m128i_i64[0] = (__int64)aSessionid_0; /*0x140cc133e*/
            v87.m128i_i64[1] = 9; /*0x140cc1345*/
            *(_QWORD *)v88 = v141; /*0x140cc1350*/
            *(_QWORD *)&v88[8] = v6; /*0x140cc1357*/
            sub_1400DB700((__int64)v82, v86.m128i_i64); /*0x140cc136c*/
            v9 = v82[0]; /*0x140cc1372*/
            if ( v82[0] == 0xFF ) /*0x140cc137e*/
            {
              v10 = v83; /*0x140cc1384*/
              v11 = *(_OWORD *)&v82[8]; /*0x140cc138b*/
              v3 = v146; /*0x140cc1392*/
              *(_QWORD *)(v146 + 1736) = v7; /*0x140cc1399*/
              *(_QWORD *)(v3 + 1744) = v8; /*0x140cc13a0*/
              *(_OWORD *)(v3 + 1712) = v11; /*0x140cc13a7*/
              *(_QWORD *)(v3 + 1728) = v10; /*0x140cc13af*/
              *(_BYTE *)(v3 + 1776) = 0; /*0x140cc13b6*/
              v12 = (const __m128i *)(v3 + 1784); /*0x140cc13be*/
              *(_OWORD *)(v3 + 1832) = *(_OWORD *)(v3 + 1760); /*0x140cc13cd*/
              *(_OWORD *)(v3 + 1784) = *(_OWORD *)(v3 + 1712); /*0x140cc13dd*/
              *(_QWORD *)(v3 + 1800) = *(_QWORD *)(v3 + 1728); /*0x140cc13ec*/
              *(_QWORD *)(v3 + 1808) = *(_QWORD *)(v3 + 1736); /*0x140cc13fa*/
              *(_QWORD *)(v3 + 1816) = *(_QWORD *)(v3 + 1744); /*0x140cc1408*/
              *(_QWORD *)(v3 + 1824) = *(_QWORD *)(v3 + 1752); /*0x140cc1416*/
              *(_QWORD *)(v3 + 1848) = *(_QWORD *)(v3 + 1776); /*0x140cc1424*/
              v13 = (_BYTE *)(v3 + 1928); /*0x140cc142b*/
              *(_BYTE *)(v3 + 1928) = 0; /*0x140cc1432*/
              *(_QWORD *)(v3 + 1920) = *(_QWORD *)(v3 + 1848); /*0x140cc143e*/
              v14 = _mm_loadu_si128((const __m128i *)(v3 + 1784)); /*0x140cc1445*/
              v15 = *(_OWORD *)(v3 + 1800); /*0x140cc1449*/
              v16 = *(_OWORD *)(v3 + 1816); /*0x140cc144d*/
              *(_OWORD *)(v3 + 1904) = *(_OWORD *)(v3 + 1832); /*0x140cc1455*/
              *(_OWORD *)(v3 + 1888) = v16; /*0x140cc145d*/
              *(_OWORD *)(v3 + 1872) = v15; /*0x140cc1465*/
              *(__m128i *)(v3 + 1856) = v14; /*0x140cc146d*/
              v5 = v141; /*0x140cc148c*/
              switch ( *(_BYTE *)(v3 + 1920) ) /*0x140cc1493*/
              {
                case 0: /*0x140cc1493*/
                  goto LABEL_11;
                case 1: /*0x140cc1493*/
                  goto LABEL_106;
                case 2: /*0x140cc1493*/
                  goto LABEL_105;
                case 3: /*0x140cc1493*/
                  goto LABEL_23;
              }
            }
          }
LABEL_27:
          v27 = ((unsigned __int64)((v82[7] << 16) | (unsigned int)*(unsigned __int16 *)&v82[5]) << 32) /*0x140cc1744*/
              | *(unsigned int *)&v82[1];
          v37 = _mm_loadu_si128((const __m128i *)&v82[8]); /*0x140cc1764*/
          v38 = v83; /*0x140cc176c*/
          sub_140C300E0(v141); /*0x140cc177a*/
          if ( *(_QWORD *)Address == -1 ) /*0x140cc178b*/
          {
            v42 = 1; /*0x140cc181b*/
            v43 = v146; /*0x140cc181e*/
            goto LABEL_80; /*0x140cc1825*/
          }
          v143 = (__int64 *)(v146 + 1696); /*0x140cc179f*/
          v39 = *(_QWORD *)(v146 + 1696); /*0x140cc17a6*/
          v140 = *(__m128i **)(v146 + 1704); /*0x140cc17b4*/
          v145 = 0; /*0x140cc17bb*/
          v142 = v39; /*0x140cc17c6*/
          while ( v140 != (__m128i *)v145 ) /*0x140cc17de*/
          {
            ++v145; /*0x140cc17e3*/
            v40 = v39 + 96; /*0x140cc17ea*/
            sub_1408780B0(v39); /*0x140cc17ee*/
            v39 = v40; /*0x140cc17f4*/
          }
          v41 = *(volatile signed __int64 **)Address; /*0x140cc1800*/
          v42 = 1; /*0x140cc1803*/
          v43 = v146; /*0x140cc1809*/
          if ( !*(_QWORD *)Address ) /*0x140cc1800*/
            goto LABEL_80; /*0x140cc1810*/
          goto LABEL_79; /*0x140cc1810*/
        case 1: /*0x140cc1225*/
LABEL_104:
          v141 = v5; /*0x140cc24a2*/
          sub_1415F0F60(&off_1416E1230); /*0x140cc24b0*/
        case 2: /*0x140cc1225*/
LABEL_103:
          v141 = v5; /*0x140cc2489*/
          sub_1415F0F80(&off_1416E1230); /*0x140cc2497*/
        case 3: /*0x140cc1225*/
          goto LABEL_8;
      }
  }
LABEL_8:
  v13 = (_BYTE *)(v3 + 1928); /*0x140cc1495*/
  v12 = (const __m128i *)(v3 + 1784); /*0x140cc14a4*/
  switch ( *(_BYTE *)(v3 + 1928) ) /*0x140cc14b9*/
  {
    case 0: /*0x140cc14b9*/
      *(_QWORD *)(v3 + 1920) = *(_QWORD *)(v3 + 1848); /*0x140cc14bf*/
      v17 = _mm_loadu_si128(v12); /*0x140cc14c6*/
      v18 = *(_OWORD *)(v3 + 1800); /*0x140cc14ca*/
      v19 = *(_OWORD *)(v3 + 1816); /*0x140cc14ce*/
      *(_OWORD *)(v3 + 1904) = *(_OWORD *)(v3 + 1832); /*0x140cc14d6*/
      *(_OWORD *)(v3 + 1888) = v19; /*0x140cc14de*/
      *(_OWORD *)(v3 + 1872) = v18; /*0x140cc14e6*/
      *(__m128i *)(v3 + 1856) = v17; /*0x140cc14ee*/
      switch ( *(_BYTE *)(v3 + 1920) ) /*0x140cc150d*/
      {
        case 0: /*0x140cc150d*/
          goto LABEL_11;
        case 1: /*0x140cc150d*/
          goto LABEL_106;
        case 2: /*0x140cc150d*/
          goto LABEL_105;
        case 3: /*0x140cc150d*/
          goto LABEL_23;
      }
    case 1: /*0x140cc14b9*/
      v141 = v5; /*0x140cc2520*/
      v129 = v3 + 1784; /*0x140cc2527*/
      sub_1415F0F60(&off_1416DF6F0); /*0x140cc2535*/
    case 2: /*0x140cc14b9*/
      v141 = v5; /*0x140cc2503*/
      v129 = v3 + 1784; /*0x140cc250a*/
      sub_1415F0F80(&off_1416DF6F0); /*0x140cc2518*/
    case 3: /*0x140cc14b9*/
      switch ( *(_BYTE *)(v3 + 1920) ) /*0x140cc1525*/
      {
        case 0: /*0x140cc1525*/
LABEL_11:
          v134 = v13; /*0x140cc1527*/
          v133 = v12; /*0x140cc152e*/
          v141 = v5; /*0x140cc1535*/
          v20 = *(volatile void **)(v3 + 1880); /*0x140cc1545*/
          *(__m128i *)(v3 + 1896) = _mm_loadu_si128((const __m128i *)(v3 + 1880)); /*0x140cc154c*/
          *(_WORD *)(v3 + 1921) = 1; /*0x140cc1555*/
          v142 = *(_QWORD *)(v3 + 1856); /*0x140cc1566*/
          v143 = *(__int64 **)(v3 + 1864); /*0x140cc1574*/
          v21 = *(_QWORD *)(v3 + 1872); /*0x140cc157b*/
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v20, 1, 0) ) /*0x140cc1586*/
          {
            v138 = v142; /*0x140cc2278*/
            v137 = v143; /*0x140cc2286*/
            sub_1415EF110(v20); /*0x140cc2290*/
          }
          Address = (PVOID)v20; /*0x140cc1590*/
          v22 = off_141DC2000; /*0x140cc1597*/
          if ( 2 * *off_141DC2000 ) /*0x140cc15a1*/
          {
            v138 = v142; /*0x140cc22a2*/
            v137 = v143; /*0x140cc22b0*/
            v23 = sub_1415EFDB0(); /*0x140cc22b7*/
            LOBYTE(v23) = v23 ^ 1; /*0x140cc22bd*/
          }
          else
          {
            v23 = 0; /*0x140cc15ad*/
          }
          v24 = (__m128i *)Address; /*0x140cc15af*/
          v25 = *((_BYTE *)Address + 1); /*0x140cc15b6*/
          LODWORD(v145) = v23; /*0x140cc15bd*/
          if ( !v25 ) /*0x140cc15c3*/
            goto LABEL_35; /*0x140cc15c3*/
          v123.m128i_i64[0] = 0; /*0x140cc15c9*/
          v123.m128i_i64[1] = 1; /*0x140cc15d4*/
          *(_QWORD *)&v124 = 0; /*0x140cc15df*/
          v87.m128i_i64[0] = 1610612768; /*0x140cc15ea*/
          v86.m128i_i64[0] = (__int64)&v123; /*0x140cc15fc*/
          v86.m128i_i64[1] = (__int64)&off_1416EB4D0; /*0x140cc160a*/
          if ( (unsigned __int8)sub_1413DB990((__int64)aPoisonedLockAn_0, 41, (__int64)&v86) ) /*0x140cc1624*/
            sub_1415F0BC0( /*0x140cc22ea*/
              (unsigned int)aADisplayImplem_12,
              55,
              (unsigned int)&v144,
              (unsigned int)&unk_1416E38F0,
              (__int64)&off_1416EB588);
          v24 = (__m128i *)v123.m128i_i64[1]; /*0x140cc1639*/
          v26 = v123.m128i_i64[0]; /*0x140cc1639*/
          v27 = (unsigned __int8)v124; /*0x140cc1640*/
          v28 = BYTE7(v124); /*0x140cc1647*/
          v29 = *(unsigned __int16 *)((char *)&v124 + 5); /*0x140cc164f*/
          v30 = *(unsigned int *)((char *)&v124 + 1); /*0x140cc1657*/
          if ( !(_BYTE)v145 ) /*0x140cc1664*/
          {
            if ( 2 * *v22 ) /*0x140cc1669*/
            {
              v138 = v142; /*0x140cc23b4*/
              v137 = v143; /*0x140cc23c2*/
              v140 = (__m128i *)v123.m128i_i64[1]; /*0x140cc23c9*/
              v145 = v123.m128i_i64[0]; /*0x140cc23d0*/
              v76 = sub_1415EFDB0(); /*0x140cc23d7*/
              v26 = v145; /*0x140cc23dc*/
              v24 = v140; /*0x140cc23e3*/
              if ( !v76 ) /*0x140cc23ec*/
                *((_BYTE *)Address + 1) = 1; /*0x140cc23f9*/
            }
          }
          v31 = Address; /*0x140cc1677*/
          v32 = *(_BYTE *)Address; /*0x140cc167e*/
          *(_BYTE *)Address = 0; /*0x140cc167e*/
          if ( v32 == 2 ) /*0x140cc1682*/
          {
            v138 = v142; /*0x140cc22fc*/
            v137 = v143; /*0x140cc230a*/
            v140 = v24; /*0x140cc2311*/
            v145 = v26; /*0x140cc2318*/
            WakeByAddressSingle(v31); /*0x140cc231f*/
            v26 = v145; /*0x140cc2324*/
            v24 = v140; /*0x140cc232b*/
          }
          if ( v26 != -1 ) /*0x140cc168c*/
          {
            v145 = v26; /*0x140cc1692*/
            v140 = v24; /*0x140cc1699*/
            v33 = ((unsigned __int64)((v28 << 16) | v29) << 32) | v30; /*0x140cc16ab*/
            v34 = (_BYTE *)v146; /*0x140cc16ae*/
            v35 = (__int64)v143; /*0x140cc16b5*/
            v36 = v142; /*0x140cc16bc*/
LABEL_62:
            v34[1922] = 0; /*0x140cc1c96*/
            if ( ((v36 != 0) & v34[1921]) != 0 ) /*0x140cc1cab*/
              sub_140001360(v35, v36, 1); /*0x140cc1cb9*/
            v34[1921] = 0; /*0x140cc1cbe*/
            sub_1415B2FE0(v78, &v84, 0xA8u); /*0x140cc1cda*/
            v34[1920] = 1; /*0x140cc1cdf*/
            sub_1415B2FE0(v77, v78, 0xA8u); /*0x140cc1cf4*/
LABEL_65:
            v63 = v33 << 8; /*0x140cc1cf9*/
            v38 = v63 | (unsigned __int8)v27; /*0x140cc1d00*/
            if ( v63 < 0 ) /*0x140cc1d06*/
            {
              v27 = 0; /*0x140cc1d08*/
              goto LABEL_67; /*0x140cc1d08*/
            }
            if ( v38 ) /*0x140cc1d1e*/
            {
              nullsub_1(); /*0x140cc1d24*/
              v27 = 1; /*0x140cc1d29*/
              v64 = (__m128i *)sub_140001350(v38, 1); /*0x140cc1d36*/
              if ( !v64 ) /*0x140cc1d3e*/
LABEL_67:
                sub_1415F08AB(v27, v38); /*0x140cc1d0a*/
              v65 = (__int64)v64; /*0x140cc1d40*/
              sub_1415B2FE0(v64, v140, v38); /*0x140cc1d50*/
              v66 = v145; /*0x140cc1d55*/
              if ( !v145 ) /*0x140cc1d5f*/
                goto LABEL_72; /*0x140cc1d5f*/
            }
            else
            {
              v65 = 1; /*0x140cc20b4*/
              v66 = v145; /*0x140cc20b9*/
              if ( !v145 ) /*0x140cc20c3*/
                goto LABEL_72; /*0x140cc20c3*/
            }
            sub_140001360((__int64)v140, v66, 1); /*0x140cc1d6e*/
LABEL_72:
            v37 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)(unsigned __int64)v65); /*0x140cc1d73*/
LABEL_73:
            v42 = 1; /*0x140cc1d81*/
            v9 = 3; /*0x140cc1d84*/
            goto LABEL_74; /*0x140cc1d84*/
          }
          LODWORD(v145) = v27; /*0x140cc182c*/
LABEL_35:
          Address = v24; /*0x140cc1832*/
          sub_1401FAE10((__int64)v82, (__int64)&v24->m128i_i64[1]); /*0x140cc1844*/
          *(_BYTE *)(v146 + 1922) = 1; /*0x140cc1851*/
          if ( (v145 & 1) == 0 ) /*0x140cc185f*/
          {
            if ( 2 * *v22 ) /*0x140cc1864*/
            {
              v138 = v142; /*0x140cc2409*/
              v137 = v143; /*0x140cc2417*/
              if ( !(unsigned __int8)sub_1415EFDB0() ) /*0x140cc241e*/
                *((_BYTE *)Address + 1) = 1; /*0x140cc2433*/
            }
          }
          v44 = Address; /*0x140cc1872*/
          v45 = *(_BYTE *)Address; /*0x140cc1879*/
          *(_BYTE *)Address = 0; /*0x140cc1879*/
          v46 = __OFSUB__(v45, 2); /*0x140cc187b*/
          if ( v45 == 2 ) /*0x140cc187d*/
          {
            v138 = v142; /*0x140cc233e*/
            v137 = v143; /*0x140cc234c*/
            WakeByAddressSingle(v44); /*0x140cc2353*/
          }
          v47 = v146; /*0x140cc1883*/
          v48 = **(volatile signed __int64 ***)(v146 + 1904); /*0x140cc1891*/
          v49 = _InterlockedIncrement64(v48); /*0x140cc1894*/
          if ( (v49 < 0) ^ v46 | (v49 == 0) ) /*0x140cc1898*/
            BUG(); /*0x140cc253b*/
          *(_WORD *)(v47 + 1921) = 0; /*0x140cc189e*/
          v97 = v48; /*0x140cc18a7*/
          sub_1415B2FE0(&v86, (const __m128i *)v82, 0x3E0u); /*0x140cc18c2*/
          v94 = v142; /*0x140cc18ce*/
          v95 = v143; /*0x140cc18dc*/
          v96 = v21; /*0x140cc18e3*/
          v50 = off_141DC1660; /*0x140cc18ea*/
          if ( *((_DWORD *)off_141DC1660 + 24) ) /*0x140cc18f1*/
          {
            v147 = 1; /*0x140cc235e*/
            v75 = off_141DC1660; /*0x140cc236c*/
            sub_1415C9485(off_141DC1660); /*0x140cc236f*/
            v50 = v75; /*0x140cc2374*/
          }
          if ( *((_DWORD *)v50 + 4) == -1 ) /*0x140cc1900*/
          {
            v54 = 704; /*0x140cc1944*/
            if ( *(_BYTE *)v50 ) /*0x140cc193c*/
              v54 = 472; /*0x140cc1949*/
            v55 = v50[1] + v54; /*0x140cc194d*/
            v147 = 0; /*0x140cc1951*/
            v53 = sub_140643D10(v55, v50, &v86, &off_1416A4508); /*0x140cc1966*/
          }
          else
          {
            v51 = 704; /*0x140cc190b*/
            if ( *((_BYTE *)v50 + 64) ) /*0x140cc1902*/
              v51 = 472; /*0x140cc1910*/
            v52 = v50[9] + v51; /*0x140cc1918*/
            v147 = 0; /*0x140cc191c*/
            v53 = sub_140643D10(v52, v50 + 8, &v86, &off_1416A44F0); /*0x140cc1934*/
          }
          v3 = v146; /*0x140cc196c*/
          *(_QWORD *)(v146 + 1912) = v53; /*0x140cc1973*/
LABEL_50:
          Address = (PVOID)(v3 + 1912); /*0x140cc197a*/
          sub_140284D50(&v86, v3 + 1912, a2); /*0x140cc1992*/
          v56 = v86.m128i_i64[0]; /*0x140cc1998*/
          if ( v86.m128i_i64[0] == -3 ) /*0x140cc19a3*/
          {
            v58 = (_BYTE *)v146; /*0x140cc19fd*/
            *(_BYTE *)(v146 + 1920) = 3; /*0x140cc1a04*/
            goto LABEL_82; /*0x140cc1a0c*/
          }
          if ( v86.m128i_i64[0] == -2 ) /*0x140cc19a9*/
          {
            v140 = (__m128i *)v86.m128i_i64[1]; /*0x140cc19b2*/
            v27 = v87.m128i_u8[0]; /*0x140cc19b9*/
            v33 = ((unsigned __int64)((v87.m128i_u8[7] << 16) /*0x140cc19dd*/
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v87.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v87.m128i_u32 + 1);
            v145 = 0x800000000000000CuLL; /*0x140cc19ea*/
            v57 = v87.m128i_i64[1]; /*0x140cc19f1*/
          }
          else
          {
            v145 = v86.m128i_i64[1]; /*0x140cc1a18*/
            v140 = (__m128i *)v87.m128i_i64[0]; /*0x140cc1a26*/
            v27 = v87.m128i_u8[8]; /*0x140cc1a2d*/
            v33 = ((unsigned __int64)((v87.m128i_u8[15] << 16) /*0x140cc1a51*/
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v87.m128i_u16[6] + 1)) << 32)
                | *(unsigned int *)((char *)&v87.m128i_u32[2] + 1);
            v57 = *(_QWORD *)v88; /*0x140cc1a54*/
            v123 = *(__m128i *)&v88[8]; /*0x140cc1a62*/
            v124 = v89; /*0x140cc1a70*/
            v125 = v90; /*0x140cc1a7e*/
            v126 = v91; /*0x140cc1a8c*/
            v127 = _mm_loadu_si128(&v92); /*0x140cc1a9b*/
            v128 = v93; /*0x140cc1aaa*/
          }
          v35 = (__int64)v143; /*0x140cc1ab1*/
          v36 = v142; /*0x140cc1ab8*/
          v110 = v123; /*0x140cc1adb*/
          v111 = v124; /*0x140cc1ae2*/
          v112 = v125; /*0x140cc1ae9*/
          v113 = v126; /*0x140cc1af0*/
          v114 = _mm_load_si128(&v127); /*0x140cc1aff*/
          v115 = v128; /*0x140cc1b0e*/
          v59 = *(volatile signed __int64 **)Address; /*0x140cc1b1c*/
          v136 = v142; /*0x140cc1b1f*/
          v135 = (__int64)v143; /*0x140cc1b26*/
          if ( sub_141221580(v59) ) /*0x140cc1b30*/
          {
            v136 = v36; /*0x140cc1b3a*/
            v135 = v35; /*0x140cc1b41*/
            sub_14122BD90((__int64)v59); /*0x140cc1b4b*/
          }
          if ( v56 == -1 ) /*0x140cc1b55*/
            goto LABEL_61; /*0x140cc1b55*/
          if ( v56 == -2 ) /*0x140cc1b6d*/
          {
            v86.m128i_i64[0] = v145; /*0x140cc1b73*/
            v86.m128i_i64[1] = (__int64)v140; /*0x140cc1b7a*/
            v87.m128i_i8[0] = v27; /*0x140cc1b81*/
            *(__int32 *)((char *)v87.m128i_i32 + 1) = v33; /*0x140cc1b87*/
            v87.m128i_i8[7] = BYTE6(v33); /*0x140cc1b94*/
            *(__int16 *)((char *)&v87.m128i_i16[2] + 1) = WORD2(v33); /*0x140cc1b9e*/
            v87.m128i_i64[1] = v57; /*0x140cc1ba5*/
            *(__m128i *)v88 = _mm_load_si128(&v110); /*0x140cc1bb4*/
            v130 = 0; /*0x140cc1bbc*/
            v131 = 1; /*0x140cc1bc7*/
            v132 = 0; /*0x140cc1bd2*/
            *(_QWORD *)&v124 = 1610612768; /*0x140cc1bdd*/
            v123.m128i_i64[0] = (__int64)&v130; /*0x140cc1bef*/
            v123.m128i_i64[1] = (__int64)&off_1416EB4D0; /*0x140cc1bfd*/
            if ( (unsigned __int8)sub_141170260((__int64)&v86, &v123) ) /*0x140cc1c12*/
              sub_1415F0BC0( /*0x140cc23a2*/
                (unsigned int)aADisplayImplem_12,
                55,
                (unsigned int)&v144,
                (unsigned int)&unk_1416E38F0,
                (__int64)&off_1416EB588);
            v145 = v130; /*0x140cc1c27*/
            v140 = (__m128i *)v131; /*0x140cc1c35*/
            v27 = (unsigned __int8)v132; /*0x140cc1c3c*/
            v60 = HIBYTE(v132); /*0x140cc1c43*/
            v61 = *(unsigned __int16 *)((char *)&v132 + 5); /*0x140cc1c4b*/
            v62 = *(unsigned int *)((char *)&v132 + 1); /*0x140cc1c52*/
            v36 = v142; /*0x140cc1c58*/
            v136 = v142; /*0x140cc1c5f*/
            v35 = (__int64)v143; /*0x140cc1c66*/
            v135 = (__int64)v143; /*0x140cc1c6d*/
            sub_140C30260(v86.m128i_i64); /*0x140cc1c7b*/
            v33 = ((unsigned __int64)((v60 << 16) | v61) << 32) | v62; /*0x140cc1c8c*/
LABEL_61:
            v34 = (_BYTE *)v146; /*0x140cc1c8f*/
            goto LABEL_62; /*0x140cc1c8f*/
          }
          v103 = v57; /*0x140cc1f41*/
          v104 = v110; /*0x140cc1f64*/
          v105 = v111; /*0x140cc1f6b*/
          v106 = v112; /*0x140cc1f72*/
          v107 = v113; /*0x140cc1f79*/
          v108 = _mm_load_si128(&v114); /*0x140cc1f88*/
          v109 = v115; /*0x140cc1f97*/
          v98[0] = v56; /*0x140cc1f9e*/
          v98[1] = v145; /*0x140cc1fa5*/
          v98[2] = v140; /*0x140cc1fac*/
          v99 = v27; /*0x140cc1fb3*/
          v100 = v33; /*0x140cc1fb9*/
          v102 = BYTE6(v33); /*0x140cc1fc6*/
          v101 = WORD2(v33); /*0x140cc1fd0*/
          v136 = v36; /*0x140cc1fd7*/
          v135 = v35; /*0x140cc1fde*/
          sub_1402577A0(&v86, v98); /*0x140cc1ff3*/
          v145 = v86.m128i_i64[1]; /*0x140cc2007*/
          v73 = v86.m128i_i64[0]; /*0x140cc2007*/
          v140 = (__m128i *)v87.m128i_i64[0]; /*0x140cc2015*/
          v74 = _mm_loadu_si128((const __m128i *)&v87.m128i_u64[1]); /*0x140cc201c*/
          v27 = v87.m128i_u64[1]; /*0x140cc2024*/
          sub_1415B2FE0(&v84, (const __m128i *)&v88[8], 0xA8u); /*0x140cc2042*/
          v58 = (_BYTE *)v146; /*0x140cc2047*/
          *(_BYTE *)(v146 + 1922) = 0; /*0x140cc204e*/
          v58[1921] = 0; /*0x140cc2056*/
          sub_1415B2FE0(v78, &v84, 0xA8u); /*0x140cc206b*/
          v58[1920] = 1; /*0x140cc2070*/
          if ( v73 == -2 ) /*0x140cc207c*/
          {
LABEL_82:
            v58[1928] = 3; /*0x140cc207e*/
            v58[1936] = 3; /*0x140cc2086*/
            v71 = 3; /*0x140cc208e*/
            result = 1; /*0x140cc2090*/
            goto LABEL_83; /*0x140cc2090*/
          }
          sub_1415B2FE0(v77, v78, 0xA8u); /*0x140cc20dc*/
          if ( v73 == -1 ) /*0x140cc20e5*/
          {
            v33 = v27 >> 8; /*0x140cc2261*/
            goto LABEL_65; /*0x140cc2265*/
          }
          sub_1415B2FE0(v81, v77, 0xA8u); /*0x140cc20fc*/
          v79[0] = v73; /*0x140cc2101*/
          v79[1] = v145; /*0x140cc210f*/
          v79[2] = v140; /*0x140cc211d*/
          v80 = v74; /*0x140cc2124*/
          sub_14028D2F0(&v86, v79); /*0x140cc213a*/
          v27 = ((unsigned __int64)((v86.m128i_u8[15] << 16) /*0x140cc2164*/
                                  | (unsigned int)*(unsigned __int16 *)((char *)&v86.m128i_u16[6] + 1)) << 32)
              | *(unsigned int *)((char *)&v86.m128i_u32[2] + 1);
          v9 = v86.m128i_i8[8]; /*0x140cc2167*/
          v37 = _mm_loadu_si128(&v87); /*0x140cc216f*/
          v38 = *(_QWORD *)v88; /*0x140cc2177*/
          if ( v86.m128i_i64[0] != -1 ) /*0x140cc2182*/
          {
            v86.m128i_i8[15] = (((unsigned __int64)((v86.m128i_u8[15] << 16) /*0x140cc2196*/
                                                  | (unsigned int)*(unsigned __int16 *)((char *)&v86.m128i_u16[6] + 1)) << 32)
                              | *(unsigned int *)((char *)&v86.m128i_u32[2] + 1)) >> 48;
            *(__int16 *)((char *)&v86.m128i_i16[6] + 1) = WORD2(v27); /*0x140cc21a3*/
            *(__int32 *)((char *)&v86.m128i_i32[2] + 1) = v27; /*0x140cc21aa*/
            v87 = v37; /*0x140cc21b0*/
            v84.m128i_i64[0] = 0; /*0x140cc21d4*/
            v84.m128i_i64[1] = 1; /*0x140cc21df*/
            v85 = 0; /*0x140cc21ea*/
            *(_QWORD *)&v82[16] = 1610612768; /*0x140cc21f5*/
            *(_QWORD *)v82 = &v84; /*0x140cc2200*/
            *(_QWORD *)&v82[8] = &off_1416EB4D0; /*0x140cc220e*/
            if ( (unsigned __int8)sub_141170260((__int64)&v86, v82) ) /*0x140cc2223*/
              sub_1415F0BC0( /*0x140cc2462*/
                (unsigned int)aADisplayImplem_12,
                55,
                (unsigned int)&v144,
                (unsigned int)&unk_1416E38F0,
                (__int64)&off_1416EB588);
            v37 = _mm_load_si128(&v84); /*0x140cc2231*/
            v38 = v85; /*0x140cc2239*/
            sub_140C30260(v86.m128i_i64); /*0x140cc2247*/
            goto LABEL_73; /*0x140cc224d*/
          }
          v42 = 0; /*0x140cc226a*/
LABEL_74:
          *v134 = 1; /*0x140cc1d87*/
          sub_140C09460(v133); /*0x140cc1d98*/
          sub_140C300E0(v141); /*0x140cc1da5*/
          v43 = v146; /*0x140cc1dab*/
          if ( *(_QWORD *)(v146 + 1688) != -1 ) /*0x140cc1dba*/
          {
            v143 = (__int64 *)(v146 + 1696); /*0x140cc1dc7*/
            v67 = *(char **)(v146 + 1696); /*0x140cc1dce*/
            v140 = *(__m128i **)(v146 + 1704); /*0x140cc1ddc*/
            v145 = 0; /*0x140cc1de3*/
            Address = v67; /*0x140cc1dee*/
            while ( v140 != (__m128i *)v145 ) /*0x140cc1e0e*/
            {
              ++v145; /*0x140cc1e13*/
              v68 = v67 + 96; /*0x140cc1e1a*/
              sub_1408780B0((__int64)v67); /*0x140cc1e1e*/
              v67 = v68; /*0x140cc1e24*/
            }
            v43 = v146; /*0x140cc1e29*/
            v41 = *(volatile signed __int64 **)(v146 + 1688); /*0x140cc1e30*/
            if ( v41 ) /*0x140cc1e3a*/
LABEL_79:
              sub_140001360(*v143, 96LL * (_QWORD)v41, 8); /*0x140cc1e3c*/
          }
LABEL_80:
          *(_BYTE *)(v43 + 1936) = 1; /*0x140cc1e59*/
          sub_140C211C0(v141); /*0x140cc1e68*/
          v118 = v27; /*0x140cc1e6e*/
          v120 = BYTE6(v27); /*0x140cc1e7b*/
          v119 = WORD2(v27); /*0x140cc1e85*/
          v122 = v38; /*0x140cc1e8c*/
          v117 = v9; /*0x140cc1e97*/
          v121 = v37; /*0x140cc1e9e*/
          v116 = v42; /*0x140cc1ea6*/
          v69 = v146; /*0x140cc1ead*/
          *(_BYTE *)(v146 + 1955) = 0; /*0x140cc1eb4*/
          sub_1415B2FE0(&v86, (const __m128i *)v69, 0x168u); /*0x140cc1ece*/
          *(_BYTE *)(v69 + 1954) = 0; /*0x140cc1ed3*/
          v70 = *(_QWORD *)(v69 + 384); /*0x140cc1eda*/
          *(_BYTE *)(v69 + 1953) = 0; /*0x140cc1ee1*/
          *(_QWORD *)&v82[16] = *(_QWORD *)(v69 + 376); /*0x140cc1eef*/
          *(__m128i *)v82 = _mm_loadu_si128((const __m128i *)(v69 + 360)); /*0x140cc1efe*/
          sub_140768E20( /*0x140cc1f2b*/
            (unsigned int)&v86,
            v70,
            (unsigned int)&v116,
            (unsigned int)v82,
            *(_DWORD *)(v69 + 1944),
            *(_DWORD *)(v69 + 1948));
          v71 = 1; /*0x140cc1f31*/
          result = 0; /*0x140cc1f33*/
          v58 = (_BYTE *)v146; /*0x140cc1f35*/
LABEL_83:
          v58[1952] = v71; /*0x140cc2092*/
          return result;
        case 1: /*0x140cc1525*/
LABEL_106:
          v134 = v13; /*0x140cc24df*/
          v133 = v12; /*0x140cc24e6*/
          JUMPOUT(0x140CC24EDLL); /*0x140cc24ed*/
        case 2: /*0x140cc1525*/
LABEL_105:
          v134 = v13; /*0x140cc24bb*/
          v133 = v12; /*0x140cc24c2*/
          v141 = v5; /*0x140cc24c9*/
          sub_1415F0F80(&off_1416E2BD0); /*0x140cc24d7*/
        case 3: /*0x140cc1525*/
LABEL_23:
          v134 = v13; /*0x140cc16c8*/
          v133 = v12; /*0x140cc16cf*/
          v141 = v5; /*0x140cc16d6*/
          goto LABEL_50; /*0x140cc16dd*/
      }
  }
}