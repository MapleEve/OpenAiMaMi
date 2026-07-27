// module: codexmate_lib
// addr: 0x140c8eb30
// name: export_session_markdown
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = export_session_markdown | mapped via command-name string xref (win-native, ground-truth)
char __fastcall export_session_markdown(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // r12
  char *v6; // rbx
  __int64 v7; // rax
  char *v8; // rdi
  __int64 v9; // rdi
  char v10; // bl
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  __m128i v13; // xmm6
  __int64 v14; // rsi
  _BYTE *v15; // rdx
  const __m128i *v16; // r8
  __m128i v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  volatile void *v20; // rdi
  __m128i v21; // xmm6
  __int64 *v22; // r14
  int v23; // eax
  char *v24; // r15
  char v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  int v29; // r13d
  __int64 v30; // rbx
  PVOID v31; // rcx
  char v32; // al
  unsigned __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rax
  unsigned __int8 v37; // r14
  char *v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  PVOID v41; // rcx
  char v42; // al
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int128 v50; // xmm0
  __m128i v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  __m128i *v54; // r14
  unsigned __int8 v55; // bl
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // r15
  _BYTE *v58; // r10
  char v59; // cl
  char result; // al
  __int64 v61; // rsi
  __int64 v62; // r8
  int v63; // r14d
  unsigned int v64; // esi
  __int64 v65; // rbx
  _BYTE *v66; // rsi
  char *v67; // r14
  _QWORD *v68; // rdx
  __int64 v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  _QWORD *v74; // r15
  char *v75; // rdi
  __int64 v76; // rdx
  __m128i v77; // xmm0
  __m128i *v78; // rax
  int v79; // r8d
  unsigned int v80; // edx
  __int64 v81; // rbx
  __m128i v82; // xmm0
  __m128i v83; // xmm0
  __m128i v84; // xmm0
  __int64 v85; // r8
  int v86; // r14d
  unsigned int v87; // esi
  __int64 v88; // r15
  unsigned __int64 v89; // r15
  _QWORD *v90; // rdi
  _BYTE v91[24]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v92; // [rsp+48h] [rbp-38h]
  _QWORD v93[3]; // [rsp+418h] [rbp+398h] BYREF
  char v94; // [rsp+430h] [rbp+3B0h]
  int v95; // [rsp+431h] [rbp+3B1h]
  __int16 v96; // [rsp+435h] [rbp+3B5h]
  char v97; // [rsp+437h] [rbp+3B7h]
  PVOID v98; // [rsp+438h] [rbp+3B8h]
  __m128i v99; // [rsp+440h] [rbp+3C0h]
  __int128 v100; // [rsp+450h] [rbp+3D0h]
  __m128i v101; // [rsp+460h] [rbp+3E0h]
  __int128 v102; // [rsp+470h] [rbp+3F0h]
  __int128 v103; // [rsp+480h] [rbp+400h]
  __int128 v104; // [rsp+490h] [rbp+410h]
  __m128i v105; // [rsp+4A0h] [rbp+420h]
  __int64 v106; // [rsp+4B0h] [rbp+430h]
  __m128i *v107; // [rsp+4B8h] [rbp+438h] BYREF
  __int64 v108; // [rsp+4C0h] [rbp+440h]
  __m128i v109; // [rsp+4C8h] [rbp+448h] BYREF
  _BYTE v110[24]; // [rsp+4D8h] [rbp+458h]
  __int128 v111; // [rsp+4F0h] [rbp+470h]
  __m128i v112; // [rsp+500h] [rbp+480h] BYREF
  __int128 v113; // [rsp+510h] [rbp+490h]
  __int128 v114; // [rsp+520h] [rbp+4A0h]
  __int128 v115; // [rsp+530h] [rbp+4B0h]
  __m128i v116; // [rsp+540h] [rbp+4C0h]
  __int64 v117; // [rsp+550h] [rbp+4D0h]
  char *v118; // [rsp+898h] [rbp+818h]
  _QWORD *v119; // [rsp+8A0h] [rbp+820h]
  __m128i v120; // [rsp+8A8h] [rbp+828h]
  __int64 v121; // [rsp+8B8h] [rbp+838h]
  __int64 v122; // [rsp+8C0h] [rbp+840h]
  _QWORD v123[2]; // [rsp+8C8h] [rbp+848h] BYREF
  unsigned __int8 v124; // [rsp+8D8h] [rbp+858h]
  int v125; // [rsp+8D9h] [rbp+859h]
  __int16 v126; // [rsp+8DDh] [rbp+85Dh]
  char v127; // [rsp+8DFh] [rbp+85Fh]
  unsigned __int64 v128; // [rsp+8E0h] [rbp+860h]
  __m128i v129; // [rsp+8E8h] [rbp+868h]
  __int128 v130; // [rsp+8F8h] [rbp+878h]
  __m128i v131; // [rsp+908h] [rbp+888h]
  __int64 v132; // [rsp+918h] [rbp+898h] BYREF
  char v133; // [rsp+920h] [rbp+8A0h]
  int v134; // [rsp+921h] [rbp+8A1h]
  __int16 v135; // [rsp+925h] [rbp+8A5h]
  char v136; // [rsp+927h] [rbp+8A7h]
  __m128i v137; // [rsp+928h] [rbp+8A8h]
  __int64 v138; // [rsp+938h] [rbp+8B8h]
  __m128i v139; // [rsp+940h] [rbp+8C0h] BYREF
  __int128 v140; // [rsp+950h] [rbp+8D0h]
  __m128i v141; // [rsp+960h] [rbp+8E0h]
  __int128 v142; // [rsp+970h] [rbp+8F0h]
  __int128 v143; // [rsp+980h] [rbp+900h]
  __int128 v144; // [rsp+990h] [rbp+910h]
  __m128i v145; // [rsp+9A0h] [rbp+920h]
  __int64 v146; // [rsp+9B0h] [rbp+930h]
  __m128i v147; // [rsp+9C0h] [rbp+940h] BYREF
  __int128 v148; // [rsp+9D0h] [rbp+950h]
  __m128i v149; // [rsp+9E0h] [rbp+960h]
  __int64 v150; // [rsp+9F8h] [rbp+978h]
  __m128i v151; // [rsp+A00h] [rbp+980h] BYREF
  __int128 v152; // [rsp+A10h] [rbp+990h]
  __m128i v153; // [rsp+A20h] [rbp+9A0h]
  __int128 v154; // [rsp+A30h] [rbp+9B0h]
  __int128 v155; // [rsp+A40h] [rbp+9C0h]
  __int128 v156; // [rsp+A50h] [rbp+9D0h]
  __m128i v157; // [rsp+A60h] [rbp+9E0h]
  __int64 v158; // [rsp+A70h] [rbp+9F0h]
  __m128i v159; // [rsp+A80h] [rbp+A00h] BYREF
  __int128 v160; // [rsp+A90h] [rbp+A10h]
  __m128i v161; // [rsp+AA0h] [rbp+A20h]
  __int128 v162; // [rsp+AB0h] [rbp+A30h]
  __int128 v163; // [rsp+AC0h] [rbp+A40h]
  __int128 v164; // [rsp+AD0h] [rbp+A50h]
  __m128i v165; // [rsp+AE0h] [rbp+A60h] BYREF
  __int64 v166; // [rsp+AF0h] [rbp+A70h]
  char *v167; // [rsp+B00h] [rbp+A80h]
  char *v168; // [rsp+B08h] [rbp+A88h]
  __m128i v169; // [rsp+B10h] [rbp+A90h] BYREF
  __int128 v170; // [rsp+B20h] [rbp+AA0h]
  __m128i v171; // [rsp+B30h] [rbp+AB0h]
  const __m128i *v172; // [rsp+B40h] [rbp+AC0h]
  _BYTE *v173; // [rsp+B48h] [rbp+AC8h]
  __int64 v174; // [rsp+B50h] [rbp+AD0h] BYREF
  __int64 v175; // [rsp+B58h] [rbp+AD8h]
  unsigned __int64 v176; // [rsp+B60h] [rbp+AE0h]
  char *v177; // [rsp+B68h] [rbp+AE8h]
  int v178; // [rsp+B74h] [rbp+AF4h]
  PVOID Address; // [rsp+B78h] [rbp+AF8h]
  __int64 v180; // [rsp+B80h] [rbp+B00h]
  _QWORD *v181; // [rsp+B88h] [rbp+B08h]
  _QWORD *v182; // [rsp+B90h] [rbp+B10h]
  char *v183; // [rsp+B98h] [rbp+B18h]
  __int64 v184; // [rsp+BA0h] [rbp+B20h]
  char *v185; // [rsp+BA8h] [rbp+B28h]
  _QWORD *v186; // [rsp+BB0h] [rbp+B30h]
  __int64 v187; // [rsp+BB8h] [rbp+B38h]
  _QWORD *v188; // [rsp+BC0h] [rbp+B40h]
  char v189; // [rsp+BCEh] [rbp+B4Eh]
  char v190; // [rsp+BCFh] [rbp+B4Fh] BYREF
  char *v191; // [rsp+BD0h] [rbp+B50h]
  __int64 v192; // [rsp+BD8h] [rbp+B58h]

  v192 = -2;
  v6 = a1;
  v7 = (unsigned __int8)a1[2000];
  v185 = a1;
  switch ( v7 )
  {
    case 0LL:
      *(_WORD *)(a1 + 2001) = 257;
      a1[2003] = 1;
      v8 = a1 + 1192;
      sub_141684120(a1 + 1192, a1 + 392, 800);
      switch ( v6[1984] )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_111;
        case 2:
          goto LABEL_110;
        case 3:
          goto LABEL_9;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v8 = a1 + 1192;
      switch ( a1[1984] )
      {
        case 0:
LABEL_4:
          v4 = v6 + 1712;
          *(_QWORD *)&v110[16] = 0;
          v107 = (__m128i *)aExportSessionM;
          v108 = 23;
          v109.m128i_i64[0] = (__int64)aRepo_0;
          v109.m128i_i64[1] = 4;
          v177 = v8;
          *(_QWORD *)v110 = v8;
          *(_QWORD *)&v110[8] = v6 + 1712;
          v9 = sub_140003640((volatile void *)(*((_QWORD *)v6 + 213) + 16LL));
          v188 = v6 + 1712;
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(v91, &v107, &v109);
          v10 = v91[0];
          if ( v91[0] != 0xFF )
            goto LABEL_25;
          v9 = *(_QWORD *)&v91[8];
LABEL_5:
          *(_QWORD *)&v110[16] = 0;
          v107 = (__m128i *)aExportSessionM;
          v108 = 23;
          v109.m128i_i64[0] = (__int64)aSessionid_0;
          v109.m128i_i64[1] = 9;
          *(_QWORD *)v110 = v177;
          *(_QWORD *)&v110[8] = v4;
          sub_1409757B0(v91, &v107);
          v10 = v91[0];
          if ( v91[0] == 0xFF )
          {
            v187 = *(_QWORD *)&v91[8];
            v191 = *(char **)&v91[16];
            v11 = v92;
            *(_QWORD *)&v110[16] = 0;
            v107 = (__m128i *)aExportSessionM;
            v108 = 23;
            v109.m128i_i64[0] = (__int64)aTargetpath_1;
            v109.m128i_i64[1] = 10;
            *(_QWORD *)v110 = v177;
            *(_QWORD *)&v110[8] = v4;
            sub_1409757B0(v91, &v107);
            v10 = v91[0];
            if ( v91[0] == 0xFF )
            {
              v49 = v92;
              v50 = *(_OWORD *)&v91[8];
              v6 = v185;
              *((_QWORD *)v185 + 223) = v9;
              *((_QWORD *)v6 + 217) = v187;
              a1 = v191;
              *((_QWORD *)v6 + 218) = v191;
              *((_QWORD *)v6 + 219) = v11;
              *((_OWORD *)v6 + 110) = v50;
              *((_QWORD *)v6 + 222) = v49;
              v6[1808] = 0;
              v16 = (const __m128i *)(v6 + 1816);
              *((_QWORD *)v6 + 227) = *((_QWORD *)v6 + 217);
              *((_QWORD *)v6 + 228) = *((_QWORD *)v6 + 218);
              *((_QWORD *)v6 + 229) = *((_QWORD *)v6 + 219);
              *((_QWORD *)v6 + 230) = *((_QWORD *)v6 + 220);
              *((_QWORD *)v6 + 231) = *((_QWORD *)v6 + 221);
              *((_QWORD *)v6 + 232) = *((_QWORD *)v6 + 222);
              *(_OWORD *)(v6 + 1864) = *(_OWORD *)(v6 + 1784);
              *(_OWORD *)(v6 + 1880) = *(_OWORD *)(v6 + 1800);
              v15 = v6 + 1976;
              v6[1976] = 0;
              *(_OWORD *)(v6 + 1960) = *(_OWORD *)(v6 + 1880);
              v51 = _mm_loadu_si128((const __m128i *)(v6 + 1816));
              v52 = *(_OWORD *)(v6 + 1832);
              v53 = *(_OWORD *)(v6 + 1848);
              *(_OWORD *)(v6 + 1944) = *(_OWORD *)(v6 + 1864);
              *(_OWORD *)(v6 + 1928) = v53;
              *(_OWORD *)(v6 + 1912) = v52;
              *(__m128i *)(v6 + 1896) = v51;
              switch ( v6[1968] )
              {
                case 0:
                  goto LABEL_12;
                case 1:
                  goto LABEL_113;
                case 2:
                  goto LABEL_112;
                case 3:
                  goto LABEL_50;
              }
            }
            v12 = ((unsigned __int64)((v91[7] << 16) | (unsigned int)*(unsigned __int16 *)&v91[5]) << 32)
                | *(unsigned int *)&v91[1];
            v13 = _mm_loadu_si128((const __m128i *)&v91[8]);
            v14 = v92;
            if ( v187 )
              sub_140001660(v191, v187, 1);
          }
          else
          {
LABEL_25:
            v12 = ((unsigned __int64)((v91[7] << 16) | (unsigned int)*(unsigned __int16 *)&v91[5]) << 32)
                | *(unsigned int *)&v91[1];
            v13 = _mm_loadu_si128((const __m128i *)&v91[8]);
            v14 = v92;
          }
          sub_140BF0DE0(v177);
          if ( *v188 == -1 )
          {
            v37 = 1;
            v38 = v185;
            goto LABEL_83;
          }
          v186 = v185 + 1720;
          v34 = *((_QWORD *)v185 + 215);
          v191 = *((char **)v185 + 216);
          v187 = 0;
          v184 = v34;
          while ( v191 != (char *)v187 )
          {
            ++v187;
            v35 = v34 + 96;
            sub_1402C7520();
            v34 = v35;
          }
          v36 = *v188;
          v37 = 1;
          v38 = v185;
          if ( !*v188 )
            goto LABEL_83;
          goto LABEL_82;
        case 1:
LABEL_111:
          v177 = v8;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_110:
          v177 = v8;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_9;
      }
  }
LABEL_9:
  v177 = v8;
  v15 = v6 + 1976;
  v16 = (const __m128i *)(v6 + 1816);
  switch ( v6[1976] )
  {
    case 0:
      *(_OWORD *)(v6 + 1960) = *(_OWORD *)(v6 + 1880);
      v17 = _mm_loadu_si128(v16);
      v18 = *(_OWORD *)(v6 + 1832);
      v19 = *(_OWORD *)(v6 + 1848);
      *(_OWORD *)(v6 + 1944) = *(_OWORD *)(v6 + 1864);
      *(_OWORD *)(v6 + 1928) = v19;
      *(_OWORD *)(v6 + 1912) = v18;
      *(__m128i *)(v6 + 1896) = v17;
      switch ( v6[1968] )
      {
        case 0:
          goto LABEL_12;
        case 1:
          goto LABEL_113;
        case 2:
          goto LABEL_112;
        case 3:
          goto LABEL_50;
      }
    case 1:
      v168 = v6 + 1976;
      v167 = v6 + 1816;
      sub_1416C3400(&off_1417B7B80, v15, v16, a4);
    case 2:
      v168 = v6 + 1976;
      v167 = v6 + 1816;
      sub_1416C3420(&off_1417B7B80, v15, v16, a4);
    case 3:
      switch ( v6[1968] )
      {
        case 0:
LABEL_12:
          v172 = v16;
          v173 = v15;
          v20 = *((volatile void **)v6 + 243);
          *((_QWORD *)v6 + 244) = v20;
          v191 = *((char **)v6 + 237);
          v186 = *((_QWORD **)v6 + 238);
          *(_WORD *)(v6 + 1969) = 257;
          v188 = *((_QWORD **)v6 + 240);
          v21 = _mm_loadu_si128((const __m128i *)(v6 + 1912));
          v184 = *((_QWORD *)v6 + 241);
          v150 = *((_QWORD *)v6 + 242);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v20, 1, 0) )
          {
            v183 = v191;
            v182 = v186;
            v181 = v188;
            v180 = v184;
            sub_1416C15B0(v20);
          }
          Address = (PVOID)v20;
          v22 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v183 = v191;
            v182 = v186;
            v181 = v188;
            v180 = v184;
            v23 = sub_1416C2250(a1, v15);
            LOBYTE(v23) = v23 ^ 1;
          }
          else
          {
            v23 = 0;
          }
          v24 = (char *)Address;
          v25 = *((_BYTE *)Address + 1);
          v178 = v23;
          if ( !v25 )
            goto LABEL_35;
          v169.m128i_i64[0] = 0;
          v169.m128i_i64[1] = 1;
          *(_QWORD *)&v170 = 0;
          v109.m128i_i64[0] = 1610612768;
          v107 = &v169;
          v108 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v107) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v190,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v24 = (char *)v169.m128i_i64[1];
          v187 = v169.m128i_i64[0];
          LODWORD(v28) = (unsigned __int8)v170;
          v29 = BYTE7(v170);
          v4 = (char *)*(unsigned __int16 *)((char *)&v170 + 5);
          v30 = *(unsigned int *)((char *)&v170 + 1);
          if ( !(_BYTE)v178 )
          {
            if ( 2 * *v22 )
            {
              v183 = v191;
              v182 = v186;
              v181 = v188;
              v180 = v184;
              if ( !(unsigned __int8)sub_1416C2250(v27, v26) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v31 = Address;
          v32 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v32 == 2 )
          {
            v183 = v191;
            v182 = v186;
            v181 = v188;
            v180 = v184;
            WakeByAddressSingle(v31);
          }
          if ( v187 != -1 )
          {
            v33 = ((unsigned __int64)((v29 << 16) | (unsigned int)v4) << 32) | v30;
            goto LABEL_63;
          }
          v178 = v28;
LABEL_35:
          Address = v24;
          sub_1407BC950(v91, v24 + 8);
          if ( (v178 & 1) == 0 )
          {
            if ( 2 * *v22 )
            {
              v183 = v191;
              v182 = v186;
              v181 = v188;
              v180 = v184;
              if ( !(unsigned __int8)sub_1416C2250(v40, v39) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v41 = Address;
          v42 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v42 == 2 )
          {
            v183 = v191;
            v182 = v186;
            v181 = v188;
            v180 = v184;
            WakeByAddressSingle(v41);
          }
          *(_WORD *)(v185 + 1969) = 0;
          sub_141684120(&v107, v91, 992);
          v118 = v191;
          v119 = v186;
          v120 = v21;
          v121 = v184;
          v122 = v150;
          v43 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v189 = 1;
            v90 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v43 = v90;
          }
          if ( *((_DWORD *)v43 + 4) == 2 )
          {
            v44 = 704;
            if ( *(_BYTE *)v43 )
              v44 = 472;
            v45 = v43[1] + v44;
            v189 = 0;
            v46 = sub_14089D660(v45, v43, &v107, &off_1417642A8);
          }
          else
          {
            v47 = 704;
            if ( *((_BYTE *)v43 + 64) )
              v47 = 472;
            v48 = v43[9] + v47;
            v189 = 0;
            v46 = sub_14089D660(v48, v43 + 8, &v107, &off_141764290);
          }
          v6 = v185;
          *((_QWORD *)v185 + 245) = v46;
LABEL_51:
          Address = v6 + 1960;
          sub_140B01A30(&v107, v6 + 1960, a2);
          v54 = v107;
          if ( v107 == (__m128i *)-3LL )
          {
            v58 = v185;
            v185[1968] = 3;
            goto LABEL_55;
          }
          if ( (_DWORD)v107 == -2 )
          {
            v187 = v108;
            v55 = v109.m128i_i8[0];
            v56 = ((unsigned __int64)((v109.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v109.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v109.m128i_u32 + 1);
            v57 = 0x800000000000000CuLL;
            v28 = v109.m128i_u64[1];
          }
          else
          {
            v57 = v108;
            v187 = v109.m128i_i64[0];
            v55 = v109.m128i_u8[8];
            v56 = ((unsigned __int64)((v109.m128i_u8[15] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v109.m128i_u16[6] + 1)) << 32)
                | *(unsigned int *)((char *)&v109.m128i_u32[2] + 1);
            v28 = *(_QWORD *)v110;
            v169 = *(__m128i *)&v110[8];
            v170 = v111;
            v171 = _mm_loadu_si128(&v112);
            v4 = (char *)v113;
          }
          v147 = _mm_load_si128(&v169);
          v148 = v170;
          v149 = v171;
          v61 = *(_QWORD *)Address;
          v183 = v191;
          v182 = v186;
          v181 = v188;
          v180 = v184;
          if ( (unsigned __int8)sub_1412F2A80(v61) )
          {
            v183 = v191;
            v182 = v186;
            v181 = v188;
            v180 = v184;
            sub_1412E7580(v61);
          }
          if ( (_DWORD)v54 != -1 )
          {
            if ( (_DWORD)v54 == -2 )
            {
              v107 = (__m128i *)v57;
              v108 = v187;
              v109.m128i_i8[0] = v55;
              *(__int32 *)((char *)v109.m128i_i32 + 1) = v56;
              v109.m128i_i8[7] = BYTE6(v56);
              *(__int16 *)((char *)&v109.m128i_i16[2] + 1) = WORD2(v56);
              v109.m128i_i64[1] = v28;
              *(__m128i *)v110 = _mm_load_si128(&v147);
              v174 = 0;
              v175 = 1;
              v176 = 0;
              *(_QWORD *)&v170 = 1610612768;
              v169.m128i_i64[0] = (__int64)&v174;
              v169.m128i_i64[1] = (__int64)&off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v107, &v169, v62) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v190,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v187 = v174;
              v24 = (char *)v175;
              LOBYTE(v28) = v176;
              v63 = HIBYTE(v176);
              v64 = *(unsigned __int16 *)((char *)&v176 + 5);
              v65 = *(unsigned int *)((char *)&v176 + 1);
              v183 = v191;
              v182 = v186;
              v181 = v188;
              v180 = v184;
              sub_140BF0F60(&v107);
              v33 = ((unsigned __int64)((v63 << 16) | v64) << 32) | v65;
LABEL_63:
              v66 = v185;
              v67 = v191;
              v68 = v188;
              if ( ((v188 != nullptr) & (unsigned __int8)v185[1969]) == 0 )
              {
LABEL_65:
                v66[1969] = 0;
                if ( ((v67 != nullptr) & v66[1970]) != 0 )
                  sub_140001660(v186, v67, 1);
                v66[1970] = 0;
                v166 = v158;
                v165 = v157;
                v164 = v156;
                v163 = v155;
                v162 = v154;
                v161 = v153;
                v160 = v152;
                v159 = v151;
                v66[1968] = 1;
                v139 = v159;
                v140 = v160;
                v141 = v161;
                v142 = v162;
                v143 = v163;
                v144 = v164;
                v145 = _mm_load_si128(&v165);
                v146 = v166;
LABEL_68:
                v69 = v33 << 8;
                v14 = v69 | (unsigned __int8)v28;
                if ( v69 < 0 )
                {
                  v70 = 0;
                  goto LABEL_70;
                }
                if ( v14 )
                {
                  nullsub_1(v31);
                  v70 = 1;
                  v71 = sub_140001650(v14, 1);
                  if ( !v71 )
                  {
LABEL_70:
                    v191 = v24;
                    sub_1416C2D4B(v70, v14);
                  }
                  v12 = v71;
                  sub_141684120(v71, v24, v14);
                  v72 = v187;
                  if ( !v187 )
                    goto LABEL_75;
                }
                else
                {
                  v12 = 1;
                  v72 = v187;
                  if ( !v187 )
                    goto LABEL_75;
                }
                sub_140001660(v24, v72, 1);
LABEL_75:
                v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)v12);
LABEL_76:
                v37 = 1;
                v10 = 3;
                goto LABEL_77;
              }
LABEL_64:
              sub_140001660(v184, v68, 1);
              goto LABEL_65;
            }
            v107 = v54;
            v108 = v57;
            v109.m128i_i64[0] = v187;
            v109.m128i_i8[8] = v55;
            *(__int32 *)((char *)&v109.m128i_i32[2] + 1) = v56;
            v109.m128i_i8[15] = BYTE6(v56);
            *(__int16 *)((char *)&v109.m128i_i16[6] + 1) = WORD2(v56);
            *(_QWORD *)v110 = v28;
            *(__m128i *)&v110[8] = _mm_load_si128(&v147);
            v111 = v148;
            v112 = v149;
            *(_QWORD *)&v113 = v4;
            v174 = 0;
            v175 = 1;
            v176 = 0;
            *(_QWORD *)&v170 = 1610612768;
            v169.m128i_i64[0] = (__int64)&v174;
            v169.m128i_i64[1] = (__int64)&off_1417C41C0;
            if ( (unsigned __int8)sub_140B036A0(&v107, &v169) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v190,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v187 = v174;
            v55 = v175;
            v86 = HIBYTE(v175);
            v87 = *(unsigned __int16 *)((char *)&v175 + 5);
            v88 = *(unsigned int *)((char *)&v175 + 1);
            v28 = v176;
            v183 = v191;
            v182 = v186;
            v181 = v188;
            v180 = v184;
            sub_140BF2F60(&v107);
            v89 = ((unsigned __int64)((v86 << 16) | v87) << 32) | v88;
            v67 = v191;
            v68 = v188;
LABEL_96:
            v24 = (char *)(v55 | (v89 << 8));
            v33 = v28 >> 8;
            v66 = v185;
            if ( ((v68 != nullptr) & (unsigned __int8)v185[1969]) == 0 )
              goto LABEL_65;
            goto LABEL_64;
          }
          if ( v57 == -1 )
          {
            v67 = v191;
            v68 = v188;
            v89 = v56;
            goto LABEL_96;
          }
          v77 = _mm_load_si128(&v147);
          v131 = v149;
          v130 = v148;
          v129 = v77;
          v123[0] = v57;
          v123[1] = v187;
          v124 = v55;
          v125 = v56;
          v127 = BYTE6(v56);
          v126 = WORD2(v56);
          v128 = v28;
          v183 = v191;
          v182 = v186;
          v181 = v188;
          v180 = v184;
          sub_140ACB4D0(&v107, v123);
          v78 = v107;
          v187 = v108;
          v24 = (char *)v109.m128i_i64[0];
          LOBYTE(v28) = v109.m128i_i8[8];
          v79 = v109.m128i_u8[15];
          v80 = *(unsigned __int16 *)((char *)&v109.m128i_u16[6] + 1);
          v81 = *(unsigned int *)((char *)&v109.m128i_u32[2] + 1);
          v31 = *(PVOID *)v110;
          v151 = *(__m128i *)&v110[8];
          v152 = v111;
          v153 = v112;
          v154 = v113;
          v155 = v114;
          v156 = v115;
          v157 = v116;
          v158 = v117;
          v58 = v185;
          *(_WORD *)(v185 + 1969) = 0;
          v166 = v158;
          v165 = v157;
          v164 = v156;
          v163 = v155;
          v82 = _mm_load_si128(&v151);
          v162 = v154;
          v161 = v153;
          v160 = v152;
          v159 = v82;
          v58[1968] = 1;
          if ( v78 == (__m128i *)-2LL )
          {
LABEL_55:
            v58[1976] = 3;
            v58[1984] = 3;
            v59 = 3;
            result = 1;
            goto LABEL_84;
          }
          v33 = ((unsigned __int64)((v79 << 16) | v80) << 32) | v81;
          v146 = v166;
          v145 = v165;
          v144 = v164;
          v143 = v163;
          v83 = _mm_load_si128(&v159);
          v142 = v162;
          v141 = v161;
          v140 = v160;
          v139 = v83;
          if ( v78 == (__m128i *)-1LL )
            goto LABEL_68;
          v106 = v146;
          v105 = v145;
          v104 = v144;
          v103 = v143;
          v84 = _mm_load_si128(&v139);
          v102 = v142;
          v101 = v141;
          v100 = v140;
          v99 = v84;
          v93[0] = v78;
          v93[1] = v187;
          v93[2] = v24;
          v94 = v28;
          v95 = v33;
          v96 = WORD2(v33);
          v97 = BYTE6(v33);
          v98 = v31;
          sub_140B07430(&v107, v93);
          v12 = ((unsigned __int64)((HIBYTE(v108) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v108 + 5)) << 32)
              | *(unsigned int *)((char *)&v108 + 1);
          v10 = v108;
          v13 = _mm_loadu_si128(&v109);
          v14 = *(_QWORD *)v110;
          if ( v107 != (__m128i *)-1LL )
          {
            HIBYTE(v108) = (((unsigned __int64)((HIBYTE(v108) << 16)
                                              | (unsigned int)*(unsigned __int16 *)((char *)&v108 + 5)) << 32)
                          | *(unsigned int *)((char *)&v108 + 1)) >> 48;
            *(_WORD *)((char *)&v108 + 5) = WORD2(v12);
            *(_DWORD *)((char *)&v108 + 1) = v12;
            v109 = v13;
            v151.m128i_i64[0] = 0;
            v151.m128i_i64[1] = 1;
            *(_QWORD *)&v152 = 0;
            *(_QWORD *)&v91[16] = 1610612768;
            *(_QWORD *)v91 = &v151;
            *(_QWORD *)&v91[8] = &off_1417C41C0;
            if ( (unsigned __int8)sub_141230630(&v107, v91, v85) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v190,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v13 = _mm_load_si128(&v151);
            v14 = v152;
            sub_140BF0F60(&v107);
            goto LABEL_76;
          }
          v37 = 0;
LABEL_77:
          *v173 = 1;
          sub_140BF0DE0(v177);
          v38 = v185;
          if ( *((_QWORD *)v185 + 214) != -1 )
          {
            v186 = v185 + 1720;
            v73 = *((_QWORD **)v185 + 215);
            v191 = *((char **)v185 + 216);
            v187 = 0;
            v188 = v73;
            while ( v191 != (char *)v187 )
            {
              ++v187;
              v74 = v73 + 12;
              sub_1402C7520();
              v73 = v74;
            }
            v38 = v185;
            v36 = *((_QWORD *)v185 + 214);
            if ( v36 )
LABEL_82:
              sub_140001660(*v186, 96 * v36, 8);
          }
LABEL_83:
          v38[1984] = 1;
          sub_140BDFC90(v177);
          v134 = v12;
          v136 = BYTE6(v12);
          v135 = WORD2(v12);
          v138 = v14;
          v133 = v10;
          v137 = v13;
          v132 = v37;
          v75 = v185;
          v185[2003] = 0;
          sub_141684120(&v107, v75, 360);
          v75[2002] = 0;
          v76 = *((_QWORD *)v75 + 48);
          v75[2001] = 0;
          *(_QWORD *)&v91[16] = *((_QWORD *)v75 + 47);
          *(__m128i *)v91 = _mm_loadu_si128((const __m128i *)(v75 + 360));
          sub_14047E370(
            (unsigned int)&v107,
            v76,
            (unsigned int)&v132,
            (unsigned int)v91,
            *((_DWORD *)v75 + 498),
            *((_DWORD *)v75 + 499));
          v59 = 1;
          result = 0;
          v58 = v185;
LABEL_84:
          v58[2000] = v59;
          return result;
        case 1:
LABEL_113:
          v172 = v16;
          JUMPOUT(0x140C9033BLL);
        case 2:
LABEL_112:
          v172 = v16;
          v173 = v15;
          sub_1416C3420(&off_1417BB460, v15, v16, a4);
        case 3:
LABEL_50:
          v172 = v16;
          v173 = v15;
          goto LABEL_51;
      }
  }
}