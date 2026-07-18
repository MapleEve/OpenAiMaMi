// win 1.2.1 NEW export_session_markdown 0x140cc2f40 d=0
char __fastcall sub_140CC2F40(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  char v8; // bl
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  __m128i v11; // xmm6
  __int64 v12; // rsi
  _BYTE *v13; // rdx
  const __m128i *v14; // r8
  __m128i v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  volatile void *v18; // rdi
  __m128i v19; // xmm6
  __int64 *v20; // r14
  int v21; // eax
  char *v22; // r15
  char v23; // cl
  unsigned __int64 v24; // rdi
  int v25; // r13d
  __int64 v26; // rbx
  PVOID v27; // rcx
  char v28; // al
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned __int8 v33; // r14
  __int64 v34; // r15
  PVOID v35; // rcx
  char v36; // al
  _QWORD *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int128 v44; // xmm0
  __m128i v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __m128i *v48; // r14
  unsigned __int8 v49; // bl
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // r15
  _BYTE *v52; // r10
  char v53; // cl
  char result; // al
  __int64 v55; // rsi
  int v56; // r14d
  unsigned int v57; // esi
  __int64 v58; // rbx
  _BYTE *v59; // rsi
  char *v60; // r14
  _QWORD *v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  _QWORD *v67; // r15
  __int64 v68; // rdi
  __int64 v69; // rdx
  __m128i v70; // xmm0
  __m128i *v71; // rax
  int v72; // r8d
  unsigned int v73; // edx
  __int64 v74; // rbx
  __int64 v75; // rcx
  __m128i v76; // xmm0
  __m128i v77; // xmm0
  __m128i v78; // xmm0
  int v79; // r14d
  unsigned int v80; // esi
  __int64 v81; // r15
  unsigned __int64 v82; // r15
  _QWORD *v83; // rdi
  _BYTE v84[24]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v85; // [rsp+48h] [rbp-38h]
  _QWORD v86[3]; // [rsp+418h] [rbp+398h] BYREF
  char v87; // [rsp+430h] [rbp+3B0h]
  int v88; // [rsp+431h] [rbp+3B1h]
  __int16 v89; // [rsp+435h] [rbp+3B5h]
  char v90; // [rsp+437h] [rbp+3B7h]
  __int64 v91; // [rsp+438h] [rbp+3B8h]
  __m128i v92; // [rsp+440h] [rbp+3C0h]
  __int128 v93; // [rsp+450h] [rbp+3D0h]
  __m128i v94; // [rsp+460h] [rbp+3E0h]
  __int128 v95; // [rsp+470h] [rbp+3F0h]
  __int128 v96; // [rsp+480h] [rbp+400h]
  __int128 v97; // [rsp+490h] [rbp+410h]
  __m128i v98; // [rsp+4A0h] [rbp+420h]
  __int64 v99; // [rsp+4B0h] [rbp+430h]
  __m128i *v100; // [rsp+4B8h] [rbp+438h] BYREF
  __int64 v101; // [rsp+4C0h] [rbp+440h]
  __m128i v102; // [rsp+4C8h] [rbp+448h] BYREF
  _BYTE v103[24]; // [rsp+4D8h] [rbp+458h]
  __int128 v104; // [rsp+4F0h] [rbp+470h]
  __m128i v105; // [rsp+500h] [rbp+480h] BYREF
  __int128 v106; // [rsp+510h] [rbp+490h]
  __int128 v107; // [rsp+520h] [rbp+4A0h]
  __int128 v108; // [rsp+530h] [rbp+4B0h]
  __m128i v109; // [rsp+540h] [rbp+4C0h]
  __int64 v110; // [rsp+550h] [rbp+4D0h]
  char *v111; // [rsp+898h] [rbp+818h]
  _QWORD *v112; // [rsp+8A0h] [rbp+820h]
  __m128i v113; // [rsp+8A8h] [rbp+828h]
  __int64 v114; // [rsp+8B8h] [rbp+838h]
  __int64 v115; // [rsp+8C0h] [rbp+840h]
  _QWORD v116[2]; // [rsp+8C8h] [rbp+848h] BYREF
  unsigned __int8 v117; // [rsp+8D8h] [rbp+858h]
  int v118; // [rsp+8D9h] [rbp+859h]
  __int16 v119; // [rsp+8DDh] [rbp+85Dh]
  char v120; // [rsp+8DFh] [rbp+85Fh]
  unsigned __int64 v121; // [rsp+8E0h] [rbp+860h]
  __m128i v122; // [rsp+8E8h] [rbp+868h]
  __int128 v123; // [rsp+8F8h] [rbp+878h]
  __m128i v124; // [rsp+908h] [rbp+888h]
  __int64 v125; // [rsp+918h] [rbp+898h] BYREF
  char v126; // [rsp+920h] [rbp+8A0h]
  int v127; // [rsp+921h] [rbp+8A1h]
  __int16 v128; // [rsp+925h] [rbp+8A5h]
  char v129; // [rsp+927h] [rbp+8A7h]
  __m128i v130; // [rsp+928h] [rbp+8A8h]
  __int64 v131; // [rsp+938h] [rbp+8B8h]
  __m128i v132; // [rsp+940h] [rbp+8C0h] BYREF
  __int128 v133; // [rsp+950h] [rbp+8D0h]
  __m128i v134; // [rsp+960h] [rbp+8E0h]
  __int128 v135; // [rsp+970h] [rbp+8F0h]
  __int128 v136; // [rsp+980h] [rbp+900h]
  __int128 v137; // [rsp+990h] [rbp+910h]
  __m128i v138; // [rsp+9A0h] [rbp+920h]
  __int64 v139; // [rsp+9B0h] [rbp+930h]
  __m128i v140; // [rsp+9C0h] [rbp+940h] BYREF
  __int128 v141; // [rsp+9D0h] [rbp+950h]
  __m128i v142; // [rsp+9E0h] [rbp+960h]
  __int64 v143; // [rsp+9F8h] [rbp+978h]
  __m128i v144; // [rsp+A00h] [rbp+980h] BYREF
  __int128 v145; // [rsp+A10h] [rbp+990h]
  __m128i v146; // [rsp+A20h] [rbp+9A0h]
  __int128 v147; // [rsp+A30h] [rbp+9B0h]
  __int128 v148; // [rsp+A40h] [rbp+9C0h]
  __int128 v149; // [rsp+A50h] [rbp+9D0h]
  __m128i v150; // [rsp+A60h] [rbp+9E0h]
  __int64 v151; // [rsp+A70h] [rbp+9F0h]
  __m128i v152; // [rsp+A80h] [rbp+A00h] BYREF
  __int128 v153; // [rsp+A90h] [rbp+A10h]
  __m128i v154; // [rsp+AA0h] [rbp+A20h]
  __int128 v155; // [rsp+AB0h] [rbp+A30h]
  __int128 v156; // [rsp+AC0h] [rbp+A40h]
  __int128 v157; // [rsp+AD0h] [rbp+A50h]
  __m128i v158; // [rsp+AE0h] [rbp+A60h] BYREF
  __int64 v159; // [rsp+AF0h] [rbp+A70h]
  __int64 v160; // [rsp+B00h] [rbp+A80h]
  __int64 v161; // [rsp+B08h] [rbp+A88h]
  __m128i v162; // [rsp+B10h] [rbp+A90h] BYREF
  __int128 v163; // [rsp+B20h] [rbp+AA0h]
  __m128i v164; // [rsp+B30h] [rbp+AB0h]
  const __m128i *v165; // [rsp+B40h] [rbp+AC0h]
  _BYTE *v166; // [rsp+B48h] [rbp+AC8h]
  __int64 v167; // [rsp+B50h] [rbp+AD0h] BYREF
  __int64 v168; // [rsp+B58h] [rbp+AD8h]
  unsigned __int64 v169; // [rsp+B60h] [rbp+AE0h]
  __int64 v170; // [rsp+B68h] [rbp+AE8h]
  int v171; // [rsp+B74h] [rbp+AF4h]
  PVOID Address; // [rsp+B78h] [rbp+AF8h]
  __int64 v173; // [rsp+B80h] [rbp+B00h]
  _QWORD *v174; // [rsp+B88h] [rbp+B08h]
  _QWORD *v175; // [rsp+B90h] [rbp+B10h]
  char *v176; // [rsp+B98h] [rbp+B18h]
  __int64 v177; // [rsp+BA0h] [rbp+B20h]
  __int64 v178; // [rsp+BA8h] [rbp+B28h]
  _QWORD *v179; // [rsp+BB0h] [rbp+B30h]
  __int64 v180; // [rsp+BB8h] [rbp+B38h]
  _QWORD *v181; // [rsp+BC0h] [rbp+B40h]
  char v182; // [rsp+BCEh] [rbp+B4Eh]
  char v183; // [rsp+BCFh] [rbp+B4Fh] BYREF
  char *v184; // [rsp+BD0h] [rbp+B50h]
  __int64 v185; // [rsp+BD8h] [rbp+B58h]

  v185 = -2; /*0x140cc2f63*/
  v4 = a1; /*0x140cc2f71*/
  v5 = *(unsigned __int8 *)(a1 + 2000); /*0x140cc2f74*/
  v178 = a1; /*0x140cc2f89*/
  switch ( v5 ) /*0x140cc2f90*/
  {
    case 0LL: /*0x140cc2f90*/
      *(_WORD *)(a1 + 2001) = 257; /*0x140cc2f92*/
      *(_BYTE *)(a1 + 2003) = 1; /*0x140cc2f9b*/
      v6 = a1 + 1192; /*0x140cc2fa9*/
      sub_1415B2FE0(a1 + 1192, a1 + 392, 800); /*0x140cc2fb9*/
      switch ( *(_BYTE *)(v4 + 1984) ) /*0x140cc2fd3*/
      {
        case 0: /*0x140cc2fd3*/
          goto LABEL_4;
        case 1: /*0x140cc2fd3*/
          goto LABEL_111;
        case 2: /*0x140cc2fd3*/
          goto LABEL_110;
        case 3: /*0x140cc2fd3*/
          goto LABEL_9;
      }
    case 1LL: /*0x140cc2f90*/
      sub_1415F0F60(&off_1416DF770); /*0x140cc46f1*/
    case 2LL: /*0x140cc2f90*/
      sub_1415F0F80(&off_1416DF770); /*0x140cc46e3*/
    case 3LL: /*0x140cc2f90*/
      v6 = a1 + 1192; /*0x140cc2fd5*/
      switch ( *(_BYTE *)(a1 + 1984) ) /*0x140cc2ff1*/
      {
        case 0: /*0x140cc2ff1*/
LABEL_4:
          v2 = v4 + 1712; /*0x140cc2ff3*/
          *(_QWORD *)&v103[16] = 0; /*0x140cc2ffa*/
          v100 = (__m128i *)aExportSessionM; /*0x140cc300c*/
          v101 = 23; /*0x140cc3013*/
          v102.m128i_i64[0] = (__int64)aRepo_0; /*0x140cc3025*/
          v102.m128i_i64[1] = 4; /*0x140cc302c*/
          v170 = v6; /*0x140cc3037*/
          *(_QWORD *)v103 = v6; /*0x140cc303e*/
          *(_QWORD *)&v103[8] = v4 + 1712; /*0x140cc3045*/
          v7 = sub_14029E2E0((volatile void *)(*(_QWORD *)(v4 + 1704) + 16LL)); /*0x140cc305d*/
          v181 = (_QWORD *)(v4 + 1712); /*0x140cc3063*/
          if ( v7 ) /*0x140cc306a*/
            goto LABEL_5; /*0x140cc306a*/
          sub_1415C5640(v84, &v100, &v102); /*0x140cc33ed*/
          v8 = v84[0]; /*0x140cc33f3*/
          if ( v84[0] != 0xFF ) /*0x140cc33fa*/
            goto LABEL_25; /*0x140cc33fa*/
          v7 = *(_QWORD *)&v84[8]; /*0x140cc34da*/
LABEL_5:
          *(_QWORD *)&v103[16] = 0; /*0x140cc3070*/
          v100 = (__m128i *)aExportSessionM; /*0x140cc307b*/
          v101 = 23; /*0x140cc3082*/
          v102.m128i_i64[0] = (__int64)aSessionid_0; /*0x140cc3094*/
          v102.m128i_i64[1] = 9; /*0x140cc309b*/
          *(_QWORD *)v103 = v170; /*0x140cc30ad*/
          *(_QWORD *)&v103[8] = v2; /*0x140cc30b4*/
          sub_1400DB700(v84, &v100); /*0x140cc30c6*/
          v8 = v84[0]; /*0x140cc30cc*/
          if ( v84[0] == 0xFF ) /*0x140cc30d3*/
          {
            v180 = *(_QWORD *)&v84[8]; /*0x140cc30dd*/
            v184 = *(char **)&v84[16]; /*0x140cc30e8*/
            v9 = v85; /*0x140cc30ef*/
            *(_QWORD *)&v103[16] = 0; /*0x140cc30f3*/
            v100 = (__m128i *)aExportSessionM; /*0x140cc30fe*/
            v101 = 23; /*0x140cc3105*/
            v102.m128i_i64[0] = (__int64)aTargetpath_1; /*0x140cc3117*/
            v102.m128i_i64[1] = 10; /*0x140cc311e*/
            *(_QWORD *)v103 = v170; /*0x140cc3130*/
            *(_QWORD *)&v103[8] = v2; /*0x140cc3137*/
            sub_1400DB700(v84, &v100); /*0x140cc3149*/
            v8 = v84[0]; /*0x140cc314f*/
            if ( v84[0] == 0xFF ) /*0x140cc3156*/
            {
              v43 = v85; /*0x140cc3626*/
              v44 = *(_OWORD *)&v84[8]; /*0x140cc362a*/
              v4 = v178; /*0x140cc362e*/
              *(_QWORD *)(v178 + 1784) = v7; /*0x140cc3635*/
              *(_QWORD *)(v4 + 1736) = v180; /*0x140cc3643*/
              *(_QWORD *)(v4 + 1744) = v184; /*0x140cc3651*/
              *(_QWORD *)(v4 + 1752) = v9; /*0x140cc3658*/
              *(_OWORD *)(v4 + 1760) = v44; /*0x140cc365f*/
              *(_QWORD *)(v4 + 1776) = v43; /*0x140cc3666*/
              *(_BYTE *)(v4 + 1808) = 0; /*0x140cc366d*/
              v14 = (const __m128i *)(v4 + 1816); /*0x140cc3674*/
              *(_QWORD *)(v4 + 1816) = *(_QWORD *)(v4 + 1736); /*0x140cc3682*/
              *(_QWORD *)(v4 + 1824) = *(_QWORD *)(v4 + 1744); /*0x140cc3690*/
              *(_QWORD *)(v4 + 1832) = *(_QWORD *)(v4 + 1752); /*0x140cc369e*/
              *(_QWORD *)(v4 + 1840) = *(_QWORD *)(v4 + 1760); /*0x140cc36ac*/
              *(_QWORD *)(v4 + 1848) = *(_QWORD *)(v4 + 1768); /*0x140cc36ba*/
              *(_QWORD *)(v4 + 1856) = *(_QWORD *)(v4 + 1776); /*0x140cc36c8*/
              *(_OWORD *)(v4 + 1864) = *(_OWORD *)(v4 + 1784); /*0x140cc36d6*/
              *(_OWORD *)(v4 + 1880) = *(_OWORD *)(v4 + 1800); /*0x140cc36e4*/
              v13 = (_BYTE *)(v4 + 1976); /*0x140cc36eb*/
              *(_BYTE *)(v4 + 1976) = 0; /*0x140cc36f2*/
              *(_OWORD *)(v4 + 1960) = *(_OWORD *)(v4 + 1880); /*0x140cc36fe*/
              v45 = _mm_loadu_si128((const __m128i *)(v4 + 1816)); /*0x140cc3705*/
              v46 = *(_OWORD *)(v4 + 1832); /*0x140cc370a*/
              v47 = *(_OWORD *)(v4 + 1848); /*0x140cc370f*/
              *(_OWORD *)(v4 + 1944) = *(_OWORD *)(v4 + 1864); /*0x140cc3719*/
              *(_OWORD *)(v4 + 1928) = v47; /*0x140cc3720*/
              *(_OWORD *)(v4 + 1912) = v46; /*0x140cc3727*/
              *(__m128i *)(v4 + 1896) = v45; /*0x140cc372e*/
              switch ( *(_BYTE *)(v4 + 1968) ) /*0x140cc374b*/
              {
                case 0: /*0x140cc374b*/
                  goto LABEL_12;
                case 1: /*0x140cc374b*/
                  goto LABEL_113;
                case 2: /*0x140cc374b*/
                  goto LABEL_112;
                case 3: /*0x140cc374b*/
                  goto LABEL_50;
              }
            }
            v10 = ((unsigned __int64)((v84[7] << 16) | (unsigned int)*(unsigned __int16 *)&v84[5]) << 32) /*0x140cc3170*/
                | *(unsigned int *)&v84[1];
            v11 = _mm_loadu_si128((const __m128i *)&v84[8]); /*0x140cc3173*/
            v12 = v85; /*0x140cc3178*/
            if ( v180 ) /*0x140cc3186*/
              sub_140001360(v184, v180, 1); /*0x140cc3199*/
          }
          else
          {
LABEL_25:
            v10 = ((unsigned __int64)((v84[7] << 16) | (unsigned int)*(unsigned __int16 *)&v84[5]) << 32) /*0x140cc3414*/
                | *(unsigned int *)&v84[1];
            v11 = _mm_loadu_si128((const __m128i *)&v84[8]); /*0x140cc3417*/
            v12 = v85; /*0x140cc341c*/
          }
          sub_140C300E0(v170); /*0x140cc3427*/
          if ( *v181 == -1 ) /*0x140cc3438*/
          {
            v33 = 1; /*0x140cc34cb*/
            v34 = v178; /*0x140cc34ce*/
            goto LABEL_83; /*0x140cc34d5*/
          }
          v179 = (_QWORD *)(v178 + 1720); /*0x140cc344c*/
          v30 = *(_QWORD *)(v178 + 1720); /*0x140cc3453*/
          v184 = *(char **)(v178 + 1728); /*0x140cc3461*/
          v180 = 0; /*0x140cc3468*/
          v177 = v30; /*0x140cc3473*/
          while ( v184 != (char *)v180 ) /*0x140cc348e*/
          {
            ++v180; /*0x140cc3493*/
            v31 = v30 + 96; /*0x140cc349a*/
            sub_1408780B0(); /*0x140cc349e*/
            v30 = v31; /*0x140cc34a4*/
          }
          v32 = *v181; /*0x140cc34b0*/
          v33 = 1; /*0x140cc34b3*/
          v34 = v178; /*0x140cc34b9*/
          if ( !*v181 ) /*0x140cc34b0*/
            goto LABEL_83; /*0x140cc34c0*/
          goto LABEL_82; /*0x140cc34c0*/
        case 1: /*0x140cc2ff1*/
LABEL_111:
          v170 = v6; /*0x140cc4711*/
          sub_1415F0F60(&off_1416E1230); /*0x140cc471f*/
        case 2: /*0x140cc2ff1*/
LABEL_110:
          v170 = v6; /*0x140cc46f8*/
          sub_1415F0F80(&off_1416E1230); /*0x140cc4706*/
        case 3: /*0x140cc2ff1*/
          goto LABEL_9;
      }
  }
LABEL_9:
  v170 = v6; /*0x140cc31a3*/
  v13 = (_BYTE *)(v4 + 1976); /*0x140cc31aa*/
  v14 = (const __m128i *)(v4 + 1816); /*0x140cc31b8*/
  switch ( *(_BYTE *)(v4 + 1976) ) /*0x140cc31cd*/
  {
    case 0: /*0x140cc31cd*/
      *(_OWORD *)(v4 + 1960) = *(_OWORD *)(v4 + 1880); /*0x140cc31d4*/
      v15 = _mm_loadu_si128(v14); /*0x140cc31db*/
      v16 = *(_OWORD *)(v4 + 1832); /*0x140cc31e0*/
      v17 = *(_OWORD *)(v4 + 1848); /*0x140cc31e5*/
      *(_OWORD *)(v4 + 1944) = *(_OWORD *)(v4 + 1864); /*0x140cc31ef*/
      *(_OWORD *)(v4 + 1928) = v17; /*0x140cc31f6*/
      *(_OWORD *)(v4 + 1912) = v16; /*0x140cc31fd*/
      *(__m128i *)(v4 + 1896) = v15; /*0x140cc3204*/
      switch ( *(_BYTE *)(v4 + 1968) ) /*0x140cc3221*/
      {
        case 0: /*0x140cc3221*/
          goto LABEL_12;
        case 1: /*0x140cc3221*/
          goto LABEL_113;
        case 2: /*0x140cc3221*/
          goto LABEL_112;
        case 3: /*0x140cc3221*/
          goto LABEL_50;
      }
    case 1: /*0x140cc31cd*/
      v161 = v4 + 1976; /*0x140cc477e*/
      v160 = v4 + 1816; /*0x140cc4785*/
      sub_1415F0F60(&off_1416DF6F0); /*0x140cc4793*/
    case 2: /*0x140cc31cd*/
      v161 = v4 + 1976; /*0x140cc4761*/
      v160 = v4 + 1816; /*0x140cc4768*/
      sub_1415F0F80(&off_1416DF6F0); /*0x140cc4776*/
    case 3: /*0x140cc31cd*/
      switch ( *(_BYTE *)(v4 + 1968) ) /*0x140cc3238*/
      {
        case 0: /*0x140cc3238*/
LABEL_12:
          v165 = v14; /*0x140cc323a*/
          v166 = v13; /*0x140cc3241*/
          v18 = *(volatile void **)(v4 + 1944); /*0x140cc3248*/
          *(_QWORD *)(v4 + 1952) = v18; /*0x140cc324f*/
          v184 = *(char **)(v4 + 1896); /*0x140cc325d*/
          v179 = *(_QWORD **)(v4 + 1904); /*0x140cc326b*/
          *(_WORD *)(v4 + 1969) = 257; /*0x140cc3272*/
          v181 = *(_QWORD **)(v4 + 1920); /*0x140cc3282*/
          v19 = _mm_loadu_si128((const __m128i *)(v4 + 1912)); /*0x140cc3289*/
          v177 = *(_QWORD *)(v4 + 1928); /*0x140cc3298*/
          v143 = *(_QWORD *)(v4 + 1936); /*0x140cc32a6*/
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v18, 1, 0) ) /*0x140cc32b1*/
          {
            v176 = v184; /*0x140cc4444*/
            v175 = v179; /*0x140cc4452*/
            v174 = v181; /*0x140cc4460*/
            v173 = v177; /*0x140cc446e*/
            sub_1415EF110(v18); /*0x140cc4478*/
          }
          Address = (PVOID)v18; /*0x140cc32bb*/
          v20 = off_141DC2000; /*0x140cc32c2*/
          if ( 2 * *off_141DC2000 ) /*0x140cc32cc*/
          {
            v176 = v184; /*0x140cc448a*/
            v175 = v179; /*0x140cc4498*/
            v174 = v181; /*0x140cc44a6*/
            v173 = v177; /*0x140cc44b4*/
            v21 = sub_1415EFDB0(); /*0x140cc44bb*/
            LOBYTE(v21) = v21 ^ 1; /*0x140cc44c1*/
          }
          else
          {
            v21 = 0; /*0x140cc32d8*/
          }
          v22 = (char *)Address; /*0x140cc32da*/
          v23 = *((_BYTE *)Address + 1); /*0x140cc32e1*/
          v171 = v21; /*0x140cc32e8*/
          if ( !v23 ) /*0x140cc32ee*/
            goto LABEL_35; /*0x140cc32ee*/
          v162.m128i_i64[0] = 0; /*0x140cc32f4*/
          v162.m128i_i64[1] = 1; /*0x140cc32ff*/
          *(_QWORD *)&v163 = 0; /*0x140cc330a*/
          v102.m128i_i64[0] = 1610612768; /*0x140cc3315*/
          v100 = &v162; /*0x140cc3327*/
          v101 = (__int64)&off_1416EB4D0; /*0x140cc3335*/
          if ( (unsigned __int8)sub_1413DB990(aPoisonedLockAn_0, 41, &v100) ) /*0x140cc334f*/
            sub_1415F0BC0( /*0x140cc44ee*/
              (unsigned int)aADisplayImplem_12,
              55,
              (unsigned int)&v183,
              (unsigned int)&unk_1416E38F0,
              (__int64)&off_1416EB588);
          v22 = (char *)v162.m128i_i64[1]; /*0x140cc336b*/
          v180 = v162.m128i_i64[0]; /*0x140cc336b*/
          LODWORD(v24) = (unsigned __int8)v163; /*0x140cc3372*/
          v25 = BYTE7(v163); /*0x140cc3379*/
          v2 = *(unsigned __int16 *)((char *)&v163 + 5); /*0x140cc3381*/
          v26 = *(unsigned int *)((char *)&v163 + 1); /*0x140cc3389*/
          if ( !(_BYTE)v171 ) /*0x140cc3396*/
          {
            if ( 2 * *v20 ) /*0x140cc339b*/
            {
              v176 = v184; /*0x140cc4606*/
              v175 = v179; /*0x140cc4614*/
              v174 = v181; /*0x140cc4622*/
              v173 = v177; /*0x140cc4630*/
              if ( !(unsigned __int8)sub_1415EFDB0() ) /*0x140cc4637*/
                *((_BYTE *)Address + 1) = 1; /*0x140cc464c*/
            }
          }
          v27 = Address; /*0x140cc33a9*/
          v28 = *(_BYTE *)Address; /*0x140cc33b0*/
          *(_BYTE *)Address = 0; /*0x140cc33b0*/
          if ( v28 == 2 ) /*0x140cc33b4*/
          {
            v176 = v184; /*0x140cc4500*/
            v175 = v179; /*0x140cc450e*/
            v174 = v181; /*0x140cc451c*/
            v173 = v177; /*0x140cc452a*/
            WakeByAddressSingle(v27); /*0x140cc4531*/
          }
          if ( v180 != -1 ) /*0x140cc33c2*/
          {
            v29 = ((unsigned __int64)((v25 << 16) | (unsigned int)v2) << 32) | v26; /*0x140cc33d3*/
            goto LABEL_63; /*0x140cc33d6*/
          }
          v171 = v24; /*0x140cc34e5*/
LABEL_35:
          Address = v22; /*0x140cc34eb*/
          sub_1401FAE10(v84, v22 + 8); /*0x140cc34fa*/
          if ( (v171 & 1) == 0 ) /*0x140cc3507*/
          {
            if ( 2 * *v20 ) /*0x140cc350c*/
            {
              v176 = v184; /*0x140cc465c*/
              v175 = v179; /*0x140cc466a*/
              v174 = v181; /*0x140cc4678*/
              v173 = v177; /*0x140cc4686*/
              if ( !(unsigned __int8)sub_1415EFDB0() ) /*0x140cc468d*/
                *((_BYTE *)Address + 1) = 1; /*0x140cc46a2*/
            }
          }
          v35 = Address; /*0x140cc351a*/
          v36 = *(_BYTE *)Address; /*0x140cc3521*/
          *(_BYTE *)Address = 0; /*0x140cc3521*/
          if ( v36 == 2 ) /*0x140cc3525*/
          {
            v176 = v184; /*0x140cc4543*/
            v175 = v179; /*0x140cc4551*/
            v174 = v181; /*0x140cc455f*/
            v173 = v177; /*0x140cc456d*/
            WakeByAddressSingle(v35); /*0x140cc4574*/
          }
          *(_WORD *)(v178 + 1969) = 0; /*0x140cc3532*/
          sub_1415B2FE0(&v100, v84, 992); /*0x140cc354c*/
          v111 = v184; /*0x140cc3558*/
          v112 = v179; /*0x140cc3566*/
          v113 = v19; /*0x140cc356d*/
          v114 = v177; /*0x140cc357c*/
          v115 = v143; /*0x140cc358a*/
          v37 = off_141DC1660; /*0x140cc3591*/
          if ( *((_DWORD *)off_141DC1660 + 24) ) /*0x140cc3598*/
          {
            v182 = 1; /*0x140cc457f*/
            v83 = off_141DC1660; /*0x140cc458d*/
            sub_1415C9485(off_141DC1660); /*0x140cc4590*/
            v37 = v83; /*0x140cc4595*/
          }
          if ( *((_DWORD *)v37 + 4) == -1 ) /*0x140cc35a7*/
          {
            v41 = 704; /*0x140cc35eb*/
            if ( *(_BYTE *)v37 ) /*0x140cc35e3*/
              v41 = 472; /*0x140cc35f0*/
            v42 = v37[1] + v41; /*0x140cc35f4*/
            v182 = 0; /*0x140cc35f8*/
            v40 = sub_140643A20(v42, v37, &v100, &off_1416A4508); /*0x140cc360d*/
          }
          else
          {
            v38 = 704; /*0x140cc35b2*/
            if ( *((_BYTE *)v37 + 64) ) /*0x140cc35a9*/
              v38 = 472; /*0x140cc35b7*/
            v39 = v37[9] + v38; /*0x140cc35bf*/
            v182 = 0; /*0x140cc35c3*/
            v40 = sub_140643A20(v39, v37 + 8, &v100, &off_1416A44F0); /*0x140cc35db*/
          }
          v4 = v178; /*0x140cc3613*/
          *(_QWORD *)(v178 + 1960) = v40; /*0x140cc361a*/
LABEL_51:
          Address = (PVOID)(v4 + 1960); /*0x140cc375b*/
          sub_1402843F0(&v100, v4 + 1960, a2); /*0x140cc3773*/
          v48 = v100; /*0x140cc3779*/
          if ( v100 == (__m128i *)-3LL ) /*0x140cc3784*/
          {
            v52 = (_BYTE *)v178; /*0x140cc37d8*/
            *(_BYTE *)(v178 + 1968) = 3; /*0x140cc37df*/
            goto LABEL_55; /*0x140cc37df*/
          }
          if ( (_DWORD)v100 == -2 ) /*0x140cc378a*/
          {
            v180 = v101; /*0x140cc3793*/
            v49 = v102.m128i_i8[0]; /*0x140cc379a*/
            v50 = ((unsigned __int64)((v102.m128i_u8[7] << 16) /*0x140cc37bf*/
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v102.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v102.m128i_u32 + 1);
            v51 = 0x800000000000000CuLL; /*0x140cc37c2*/
            v24 = v102.m128i_u64[1]; /*0x140cc37cc*/
          }
          else
          {
            v51 = v101; /*0x140cc3800*/
            v180 = v102.m128i_i64[0]; /*0x140cc380e*/
            v49 = v102.m128i_u8[8]; /*0x140cc3815*/
            v50 = ((unsigned __int64)((v102.m128i_u8[15] << 16) /*0x140cc383a*/
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v102.m128i_u16[6] + 1)) << 32)
                | *(unsigned int *)((char *)&v102.m128i_u32[2] + 1);
            v24 = *(_QWORD *)v103; /*0x140cc383d*/
            v162 = *(__m128i *)&v103[8]; /*0x140cc384b*/
            v163 = v104; /*0x140cc3859*/
            v164 = _mm_loadu_si128(&v105); /*0x140cc3868*/
            v2 = v106; /*0x140cc3870*/
          }
          v140 = _mm_load_si128(&v162); /*0x140cc38a2*/
          v141 = v163; /*0x140cc38aa*/
          v142 = v164; /*0x140cc38b1*/
          v55 = *(_QWORD *)Address; /*0x140cc38b8*/
          v176 = v184; /*0x140cc38bb*/
          v175 = v179; /*0x140cc38c9*/
          v174 = v181; /*0x140cc38d0*/
          v173 = v177; /*0x140cc38de*/
          if ( (unsigned __int8)sub_141221580(v55) ) /*0x140cc38e8*/
          {
            v176 = v184; /*0x140cc38f9*/
            v175 = v179; /*0x140cc3907*/
            v174 = v181; /*0x140cc3915*/
            v173 = v177; /*0x140cc3923*/
            sub_14122BD90(v55); /*0x140cc392d*/
          }
          if ( (_DWORD)v48 != -1 ) /*0x140cc3937*/
          {
            if ( (_DWORD)v48 == -2 ) /*0x140cc3948*/
            {
              v100 = (__m128i *)v51; /*0x140cc394e*/
              v101 = v180; /*0x140cc3955*/
              v102.m128i_i8[0] = v49; /*0x140cc395c*/
              *(__int32 *)((char *)v102.m128i_i32 + 1) = v50; /*0x140cc3965*/
              v102.m128i_i8[7] = BYTE6(v50); /*0x140cc3972*/
              *(__int16 *)((char *)&v102.m128i_i16[2] + 1) = WORD2(v50); /*0x140cc397c*/
              v102.m128i_i64[1] = v24; /*0x140cc3983*/
              *(__m128i *)v103 = _mm_load_si128(&v140); /*0x140cc3992*/
              v167 = 0; /*0x140cc399a*/
              v168 = 1; /*0x140cc39a5*/
              v169 = 0; /*0x140cc39b0*/
              *(_QWORD *)&v163 = 1610612768; /*0x140cc39bb*/
              v162.m128i_i64[0] = (__int64)&v167; /*0x140cc39cd*/
              v162.m128i_i64[1] = (__int64)&off_1416EB4D0; /*0x140cc39db*/
              if ( (unsigned __int8)sub_141170260(&v100, &v162) ) /*0x140cc39f0*/
                sub_1415F0BC0( /*0x140cc45c3*/
                  (unsigned int)aADisplayImplem_12,
                  55,
                  (unsigned int)&v183,
                  (unsigned int)&unk_1416E38F0,
                  (__int64)&off_1416EB588);
              v180 = v167; /*0x140cc3a05*/
              v22 = (char *)v168; /*0x140cc3a0c*/
              LOBYTE(v24) = v169; /*0x140cc3a13*/
              v56 = HIBYTE(v169); /*0x140cc3a1a*/
              v57 = *(unsigned __int16 *)((char *)&v169 + 5); /*0x140cc3a22*/
              v58 = *(unsigned int *)((char *)&v169 + 1); /*0x140cc3a29*/
              v176 = v184; /*0x140cc3a36*/
              v175 = v179; /*0x140cc3a44*/
              v174 = v181; /*0x140cc3a52*/
              v173 = v177; /*0x140cc3a60*/
              sub_140C30260(&v100); /*0x140cc3a6e*/
              v29 = ((unsigned __int64)((v56 << 16) | v57) << 32) | v58; /*0x140cc3a7f*/
LABEL_63:
              v59 = (_BYTE *)v178; /*0x140cc3a82*/
              v60 = v184; /*0x140cc3a89*/
              v61 = v181; /*0x140cc3a90*/
              if ( ((v181 != nullptr) & *(_BYTE *)(v178 + 1969)) == 0 ) /*0x140cc3aa3*/
              {
LABEL_65:
                v59[1969] = 0; /*0x140cc3ab7*/
                if ( ((v60 != nullptr) & v59[1970]) != 0 ) /*0x140cc3aca*/
                  sub_140001360(v179, v60, 1); /*0x140cc3adc*/
                v59[1970] = 0; /*0x140cc3ae1*/
                v159 = v151; /*0x140cc3aef*/
                v158 = v150; /*0x140cc3afd*/
                v157 = v149; /*0x140cc3b0b*/
                v156 = v148; /*0x140cc3b19*/
                v155 = v147; /*0x140cc3b3c*/
                v154 = v146; /*0x140cc3b43*/
                v153 = v145; /*0x140cc3b4a*/
                v152 = v144; /*0x140cc3b51*/
                v59[1968] = 1; /*0x140cc3b58*/
                v132 = v152; /*0x140cc3b7b*/
                v133 = v153; /*0x140cc3b82*/
                v134 = v154; /*0x140cc3b89*/
                v135 = v155; /*0x140cc3b90*/
                v136 = v156; /*0x140cc3b9e*/
                v137 = v157; /*0x140cc3bac*/
                v138 = _mm_load_si128(&v158); /*0x140cc3bbb*/
                v139 = v159; /*0x140cc3bca*/
LABEL_68:
                v62 = v29 << 8; /*0x140cc3bd1*/
                v12 = v62 | (unsigned __int8)v24; /*0x140cc3bd9*/
                if ( v62 < 0 ) /*0x140cc3bdf*/
                {
                  v63 = 0; /*0x140cc3be1*/
                  goto LABEL_70; /*0x140cc3be1*/
                }
                if ( v12 ) /*0x140cc3bfe*/
                {
                  nullsub_1(); /*0x140cc3c04*/
                  v63 = 1; /*0x140cc3c09*/
                  v64 = sub_140001350(v12, 1); /*0x140cc3c16*/
                  if ( !v64 ) /*0x140cc3c1e*/
                  {
LABEL_70:
                    v184 = v22; /*0x140cc3be3*/
                    sub_1415F08AB(v63, v12); /*0x140cc3bf0*/
                  }
                  v10 = v64; /*0x140cc3c20*/
                  sub_1415B2FE0(v64, v22, v12); /*0x140cc3c2c*/
                  v65 = v180; /*0x140cc3c31*/
                  if ( !v180 ) /*0x140cc3c3b*/
                    goto LABEL_75; /*0x140cc3c3b*/
                }
                else
                {
                  v10 = 1; /*0x140cc43db*/
                  v65 = v180; /*0x140cc43e0*/
                  if ( !v180 ) /*0x140cc43ea*/
                    goto LABEL_75; /*0x140cc43ea*/
                }
                sub_140001360(v22, v65, 1); /*0x140cc3c46*/
LABEL_75:
                v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)v10); /*0x140cc3c4b*/
LABEL_76:
                v33 = 1; /*0x140cc3c59*/
                v8 = 3; /*0x140cc3c5c*/
                goto LABEL_77; /*0x140cc3c5c*/
              }
LABEL_64:
              sub_140001360(v177, v61, 1); /*0x140cc3aa5*/
              goto LABEL_65; /*0x140cc3ab2*/
            }
            v100 = v48; /*0x140cc426d*/
            v101 = v51; /*0x140cc4274*/
            v102.m128i_i64[0] = v180; /*0x140cc427b*/
            v102.m128i_i8[8] = v49; /*0x140cc4282*/
            *(__int32 *)((char *)&v102.m128i_i32[2] + 1) = v50; /*0x140cc428b*/
            v102.m128i_i8[15] = BYTE6(v50); /*0x140cc4298*/
            *(__int16 *)((char *)&v102.m128i_i16[6] + 1) = WORD2(v50); /*0x140cc42a2*/
            *(_QWORD *)v103 = v24; /*0x140cc42a9*/
            *(__m128i *)&v103[8] = _mm_load_si128(&v140); /*0x140cc42c6*/
            v104 = v141; /*0x140cc42ce*/
            v105 = v142; /*0x140cc42d5*/
            *(_QWORD *)&v106 = v2; /*0x140cc42dc*/
            v167 = 0; /*0x140cc42e3*/
            v168 = 1; /*0x140cc42ee*/
            v169 = 0; /*0x140cc42f9*/
            *(_QWORD *)&v163 = 1610612768; /*0x140cc4304*/
            v162.m128i_i64[0] = (__int64)&v167; /*0x140cc4316*/
            v162.m128i_i64[1] = (__int64)&off_1416EB4D0; /*0x140cc4324*/
            if ( (unsigned __int8)sub_140286360(&v100, &v162) ) /*0x140cc4339*/
              sub_1415F0BC0( /*0x140cc45f4*/
                (unsigned int)aADisplayImplem_12,
                55,
                (unsigned int)&v183,
                (unsigned int)&unk_1416E38F0,
                (__int64)&off_1416EB588);
            v180 = v167; /*0x140cc434e*/
            v49 = v168; /*0x140cc4355*/
            v79 = HIBYTE(v168); /*0x140cc435b*/
            v80 = *(unsigned __int16 *)((char *)&v168 + 5); /*0x140cc4363*/
            v81 = *(unsigned int *)((char *)&v168 + 1); /*0x140cc436a*/
            v24 = v169; /*0x140cc4371*/
            v176 = v184; /*0x140cc437f*/
            v175 = v179; /*0x140cc438d*/
            v174 = v181; /*0x140cc439b*/
            v173 = v177; /*0x140cc43a9*/
            sub_140C30CE0(&v100); /*0x140cc43b7*/
            v82 = ((unsigned __int64)((v79 << 16) | v80) << 32) | v81; /*0x140cc43c8*/
            v60 = v184; /*0x140cc43cb*/
            v61 = v181; /*0x140cc43d2*/
LABEL_96:
            v22 = (char *)(v49 | (v82 << 8)); /*0x140cc4406*/
            v29 = v24 >> 8; /*0x140cc4413*/
            v59 = (_BYTE *)v178; /*0x140cc4417*/
            if ( ((v61 != nullptr) & *(_BYTE *)(v178 + 1969)) == 0 ) /*0x140cc442a*/
              goto LABEL_65; /*0x140cc442a*/
            goto LABEL_64; /*0x140cc442a*/
          }
          if ( v51 == -1 ) /*0x140cc3e1f*/
          {
            v60 = v184; /*0x140cc43f5*/
            v61 = v181; /*0x140cc43fc*/
            v82 = v50; /*0x140cc4403*/
            goto LABEL_96; /*0x140cc4403*/
          }
          v70 = _mm_load_si128(&v140); /*0x140cc3e25*/
          v124 = v142; /*0x140cc3e3b*/
          v123 = v141; /*0x140cc3e42*/
          v122 = v70; /*0x140cc3e49*/
          v116[0] = v51; /*0x140cc3e51*/
          v116[1] = v180; /*0x140cc3e58*/
          v117 = v49; /*0x140cc3e5f*/
          v118 = v50; /*0x140cc3e68*/
          v120 = BYTE6(v50); /*0x140cc3e75*/
          v119 = WORD2(v50); /*0x140cc3e7f*/
          v121 = v24; /*0x140cc3e86*/
          v176 = v184; /*0x140cc3e94*/
          v175 = v179; /*0x140cc3ea2*/
          v174 = v181; /*0x140cc3eb0*/
          v173 = v177; /*0x140cc3ebe*/
          sub_140255D90(&v100, v116); /*0x140cc3ed3*/
          v71 = v100; /*0x140cc3ed9*/
          v180 = v101; /*0x140cc3ee7*/
          v22 = (char *)v102.m128i_i64[0]; /*0x140cc3eee*/
          LOBYTE(v24) = v102.m128i_i8[8]; /*0x140cc3ef5*/
          v72 = v102.m128i_u8[15]; /*0x140cc3efc*/
          v73 = *(unsigned __int16 *)((char *)&v102.m128i_u16[6] + 1); /*0x140cc3f04*/
          v74 = *(unsigned int *)((char *)&v102.m128i_u32[2] + 1); /*0x140cc3f0b*/
          v75 = *(_QWORD *)v103; /*0x140cc3f11*/
          v144 = *(__m128i *)&v103[8]; /*0x140cc3f1f*/
          v145 = v104; /*0x140cc3f2d*/
          v146 = v105; /*0x140cc3f3b*/
          v147 = v106; /*0x140cc3f49*/
          v148 = v107; /*0x140cc3f57*/
          v149 = v108; /*0x140cc3f65*/
          v150 = v109; /*0x140cc3f73*/
          v151 = v110; /*0x140cc3f81*/
          v52 = (_BYTE *)v178; /*0x140cc3f88*/
          *(_WORD *)(v178 + 1969) = 0; /*0x140cc3f8f*/
          v159 = v151; /*0x140cc3fa0*/
          v158 = v150; /*0x140cc3fae*/
          v157 = v149; /*0x140cc3fbc*/
          v156 = v148; /*0x140cc3fca*/
          v76 = _mm_load_si128(&v144); /*0x140cc3fd1*/
          v155 = v147; /*0x140cc3fee*/
          v154 = v146; /*0x140cc3ff5*/
          v153 = v145; /*0x140cc3ffc*/
          v152 = v76; /*0x140cc4003*/
          v52[1968] = 1; /*0x140cc400b*/
          if ( v71 == (__m128i *)-2LL ) /*0x140cc4017*/
          {
LABEL_55:
            v52[1976] = 3; /*0x140cc37e7*/
            v52[1984] = 3; /*0x140cc37ef*/
            v53 = 3; /*0x140cc37f7*/
            result = 1; /*0x140cc37f9*/
            goto LABEL_84; /*0x140cc37fb*/
          }
          v29 = ((unsigned __int64)((v72 << 16) | v73) << 32) | v74; /*0x140cc4028*/
          v139 = v159; /*0x140cc4032*/
          v138 = v158; /*0x140cc4040*/
          v137 = v157; /*0x140cc404e*/
          v136 = v156; /*0x140cc405c*/
          v77 = _mm_load_si128(&v152); /*0x140cc4063*/
          v135 = v155; /*0x140cc4080*/
          v134 = v154; /*0x140cc4087*/
          v133 = v153; /*0x140cc408e*/
          v132 = v77; /*0x140cc4095*/
          if ( v71 == (__m128i *)-1LL ) /*0x140cc40a1*/
            goto LABEL_68; /*0x140cc40a1*/
          v99 = v139; /*0x140cc40b9*/
          v98 = v138; /*0x140cc40c7*/
          v97 = v137; /*0x140cc40d5*/
          v96 = v136; /*0x140cc40e3*/
          v78 = _mm_load_si128(&v132); /*0x140cc40ea*/
          v95 = v135; /*0x140cc4107*/
          v94 = v134; /*0x140cc410e*/
          v93 = v133; /*0x140cc4115*/
          v92 = v78; /*0x140cc411c*/
          v86[0] = v71; /*0x140cc4124*/
          v86[1] = v180; /*0x140cc4132*/
          v86[2] = v22; /*0x140cc4139*/
          v87 = v24; /*0x140cc4140*/
          v88 = v29; /*0x140cc4140*/
          v89 = WORD2(v29); /*0x140cc4140*/
          v90 = BYTE6(v29); /*0x140cc4140*/
          v91 = v75; /*0x140cc4147*/
          sub_14028A010(&v100, v86); /*0x140cc415c*/
          v10 = ((unsigned __int64)((HIBYTE(v101) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v101 + 5)) << 32) /*0x140cc4186*/
              | *(unsigned int *)((char *)&v101 + 1);
          v8 = v101; /*0x140cc4189*/
          v11 = _mm_loadu_si128(&v102); /*0x140cc4190*/
          v12 = *(_QWORD *)v103; /*0x140cc4198*/
          if ( v100 != (__m128i *)-1LL ) /*0x140cc41a3*/
          {
            HIBYTE(v101) = (((unsigned __int64)((HIBYTE(v101) << 16) /*0x140cc41b7*/
                                              | (unsigned int)*(unsigned __int16 *)((char *)&v101 + 5)) << 32)
                          | *(unsigned int *)((char *)&v101 + 1)) >> 48;
            *(_WORD *)((char *)&v101 + 5) = WORD2(v10); /*0x140cc41c4*/
            *(_DWORD *)((char *)&v101 + 1) = v10; /*0x140cc41cb*/
            v102 = v11; /*0x140cc41d1*/
            v144.m128i_i64[0] = 0; /*0x140cc41f4*/
            v144.m128i_i64[1] = 1; /*0x140cc41ff*/
            *(_QWORD *)&v145 = 0; /*0x140cc420a*/
            *(_QWORD *)&v84[16] = 1610612768; /*0x140cc4215*/
            *(_QWORD *)v84 = &v144; /*0x140cc4224*/
            *(_QWORD *)&v84[8] = &off_1416EB4D0; /*0x140cc422f*/
            if ( (unsigned __int8)sub_141170260(&v100, v84) ) /*0x140cc423e*/
              sub_1415F0BC0( /*0x140cc46d1*/
                (unsigned int)aADisplayImplem_12,
                55,
                (unsigned int)&v183,
                (unsigned int)&unk_1416E38F0,
                (__int64)&off_1416EB588);
            v11 = _mm_load_si128(&v144); /*0x140cc424c*/
            v12 = v145; /*0x140cc4254*/
            sub_140C30260(&v100); /*0x140cc4262*/
            goto LABEL_76; /*0x140cc4268*/
          }
          v33 = 0; /*0x140cc4435*/
LABEL_77:
          *v166 = 1; /*0x140cc3c5e*/
          sub_140C300E0(v170); /*0x140cc3c6f*/
          v34 = v178; /*0x140cc3c75*/
          if ( *(_QWORD *)(v178 + 1712) != -1 ) /*0x140cc3c84*/
          {
            v179 = (_QWORD *)(v178 + 1720); /*0x140cc3c91*/
            v66 = *(_QWORD **)(v178 + 1720); /*0x140cc3c98*/
            v184 = *(char **)(v178 + 1728); /*0x140cc3ca6*/
            v180 = 0; /*0x140cc3cad*/
            v181 = v66; /*0x140cc3cb8*/
            while ( v184 != (char *)v180 ) /*0x140cc3cce*/
            {
              ++v180; /*0x140cc3cd3*/
              v67 = v66 + 12; /*0x140cc3cda*/
              sub_1408780B0(); /*0x140cc3cde*/
              v66 = v67; /*0x140cc3ce4*/
            }
            v34 = v178; /*0x140cc3ce9*/
            v32 = *(_QWORD *)(v178 + 1712); /*0x140cc3cf0*/
            if ( v32 ) /*0x140cc3cfa*/
LABEL_82:
              sub_140001360(*v179, 96 * v32, 8); /*0x140cc3cfc*/
          }
LABEL_83:
          *(_BYTE *)(v34 + 1984) = 1; /*0x140cc3d19*/
          sub_140C21520(v170); /*0x140cc3d28*/
          v127 = v10; /*0x140cc3d2e*/
          v129 = BYTE6(v10); /*0x140cc3d3b*/
          v128 = WORD2(v10); /*0x140cc3d45*/
          v131 = v12; /*0x140cc3d4c*/
          v126 = v8; /*0x140cc3d57*/
          v130 = v11; /*0x140cc3d5d*/
          v125 = v33; /*0x140cc3d65*/
          v68 = v178; /*0x140cc3d6c*/
          *(_BYTE *)(v178 + 2003) = 0; /*0x140cc3d73*/
          sub_1415B2FE0(&v100, v68, 360); /*0x140cc3d8d*/
          *(_BYTE *)(v68 + 2002) = 0; /*0x140cc3d92*/
          v69 = *(_QWORD *)(v68 + 384); /*0x140cc3d99*/
          *(_BYTE *)(v68 + 2001) = 0; /*0x140cc3da0*/
          *(_QWORD *)&v84[16] = *(_QWORD *)(v68 + 376); /*0x140cc3dae*/
          *(__m128i *)v84 = _mm_loadu_si128((const __m128i *)(v68 + 360)); /*0x140cc3dba*/
          sub_140768E20( /*0x140cc3de1*/
            (unsigned int)&v100,
            v69,
            (unsigned int)&v125,
            (unsigned int)v84,
            *(_DWORD *)(v68 + 1992),
            *(_DWORD *)(v68 + 1996));
          v53 = 1; /*0x140cc3de7*/
          result = 0; /*0x140cc3de9*/
          v52 = (_BYTE *)v178; /*0x140cc3deb*/
LABEL_84:
          v52[2000] = v53; /*0x140cc3df2*/
          return result;
        case 1: /*0x140cc3238*/
LABEL_113:
          v165 = v14; /*0x140cc4744*/
          JUMPOUT(0x140CC474BLL); /*0x140cc474b*/
        case 2: /*0x140cc3238*/
LABEL_112:
          v165 = v14; /*0x140cc4727*/
          v166 = v13; /*0x140cc472e*/
          sub_1415F0F80(&off_1416E2BB8); /*0x140cc473c*/
        case 3: /*0x140cc3238*/
LABEL_50:
          v165 = v14; /*0x140cc374d*/
          v166 = v13; /*0x140cc3754*/
          goto LABEL_51; /*0x140cc3754*/
      }
  }
}