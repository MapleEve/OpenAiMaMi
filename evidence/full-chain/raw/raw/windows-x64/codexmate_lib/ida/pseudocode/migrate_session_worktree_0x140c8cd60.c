// module: codexmate_lib
// addr: 0x140c8cd60
// name: migrate_session_worktree
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = migrate_session_worktree | mapped via command-name string xref (win-native, ground-truth)
char __fastcall migrate_session_worktree(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rbx
  char v11; // r14
  __int64 v12; // rax
  __int128 v13; // xmm0
  const __m128i *v14; // rdx
  _BYTE *v15; // r8
  __m128i v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __m128i v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  volatile void *v22; // rdi
  __int64 v23; // r14
  __int64 *v24; // r15
  int v25; // eax
  char *v26; // r8
  char v27; // cl
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  int v31; // r13d
  unsigned int v32; // r12d
  __int64 v33; // rdi
  PVOID v34; // rcx
  char v35; // al
  unsigned __int64 v36; // rdi
  _BYTE *v37; // r14
  _QWORD *v38; // r12
  __int64 v39; // r13
  __m128i v40; // xmm6
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned __int8 v45; // di
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  PVOID v49; // rcx
  char v50; // al
  bool v51; // of
  __int64 v52; // rcx
  volatile signed __int64 *v53; // rax
  __int64 v54; // rt0
  _QWORD *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __m128i *v61; // r14
  __int64 v62; // r15
  _BYTE *v63; // r14
  __int64 v64; // rsi
  __int64 v65; // r8
  int v66; // r14d
  unsigned int v67; // esi
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdi
  unsigned __int64 v73; // rdx
  char *v74; // rcx
  char *v75; // r15
  __int64 v76; // rdi
  __int64 v77; // rdx
  char v78; // cl
  char result; // al
  __m128i *v80; // rsi
  __m128i v81; // xmm6
  __int64 v82; // r8
  _QWORD *v83; // rdi
  char v84; // al
  _BYTE v85[168]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v86[168]; // [rsp+D8h] [rbp+58h] BYREF
  _QWORD v87[3]; // [rsp+180h] [rbp+100h] BYREF
  __m128i v88; // [rsp+198h] [rbp+118h]
  char v89[168]; // [rsp+1A8h] [rbp+128h] BYREF
  _BYTE v90[24]; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v91; // [rsp+268h] [rbp+1E8h]
  __m128i v92; // [rsp+630h] [rbp+5B0h] BYREF
  __int64 v93; // [rsp+640h] [rbp+5C0h]
  __m128i *v94; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v95; // [rsp+6E8h] [rbp+668h]
  __m128i v96; // [rsp+6F0h] [rbp+670h] BYREF
  _BYTE v97[24]; // [rsp+700h] [rbp+680h] BYREF
  __int128 v98; // [rsp+718h] [rbp+698h]
  __int128 v99; // [rsp+728h] [rbp+6A8h]
  __int128 v100; // [rsp+738h] [rbp+6B8h]
  __m128i v101; // [rsp+748h] [rbp+6C8h] BYREF
  __int64 v102; // [rsp+758h] [rbp+6D8h]
  __int64 v103; // [rsp+AC0h] [rbp+A40h]
  _QWORD *v104; // [rsp+AC8h] [rbp+A48h]
  __int64 v105; // [rsp+AD0h] [rbp+A50h]
  volatile signed __int64 *v106; // [rsp+AD8h] [rbp+A58h]
  _QWORD v107[3]; // [rsp+AE0h] [rbp+A60h] BYREF
  char v108; // [rsp+AF8h] [rbp+A78h]
  int v109; // [rsp+AF9h] [rbp+A79h]
  __int16 v110; // [rsp+AFDh] [rbp+A7Dh]
  char v111; // [rsp+AFFh] [rbp+A7Fh]
  __int64 v112; // [rsp+B00h] [rbp+A80h]
  __m128i v113; // [rsp+B08h] [rbp+A88h]
  __int128 v114; // [rsp+B18h] [rbp+A98h]
  __int128 v115; // [rsp+B28h] [rbp+AA8h]
  __int128 v116; // [rsp+B38h] [rbp+AB8h]
  __m128i v117; // [rsp+B48h] [rbp+AC8h]
  __int64 v118; // [rsp+B58h] [rbp+AD8h]
  __m128i v119; // [rsp+B60h] [rbp+AE0h] BYREF
  __int128 v120; // [rsp+B70h] [rbp+AF0h]
  __int128 v121; // [rsp+B80h] [rbp+B00h]
  __int128 v122; // [rsp+B90h] [rbp+B10h]
  __m128i v123; // [rsp+BA0h] [rbp+B20h] BYREF
  __int64 v124; // [rsp+BB0h] [rbp+B30h]
  __int64 v125; // [rsp+BB8h] [rbp+B38h] BYREF
  char v126; // [rsp+BC0h] [rbp+B40h]
  int v127; // [rsp+BC1h] [rbp+B41h]
  __int16 v128; // [rsp+BC5h] [rbp+B45h]
  char v129; // [rsp+BC7h] [rbp+B47h]
  __m128i v130; // [rsp+BC8h] [rbp+B48h]
  __int64 v131; // [rsp+BD8h] [rbp+B58h]
  __m128i v132; // [rsp+BE0h] [rbp+B60h] BYREF
  __int128 v133; // [rsp+BF0h] [rbp+B70h]
  __int128 v134; // [rsp+C00h] [rbp+B80h]
  __int128 v135; // [rsp+C10h] [rbp+B90h]
  __m128i v136; // [rsp+C20h] [rbp+BA0h] BYREF
  __int64 v137; // [rsp+C30h] [rbp+BB0h]
  __int64 v138; // [rsp+C40h] [rbp+BC0h]
  unsigned __int64 v139; // [rsp+C48h] [rbp+BC8h] BYREF
  __int64 v140; // [rsp+C50h] [rbp+BD0h]
  __int64 v141; // [rsp+C58h] [rbp+BD8h]
  const __m128i *v142; // [rsp+C60h] [rbp+BE0h]
  _BYTE *v143; // [rsp+C68h] [rbp+BE8h]
  _QWORD *v144; // [rsp+C70h] [rbp+BF0h]
  __int64 v145; // [rsp+C78h] [rbp+BF8h]
  _QWORD *v146; // [rsp+C80h] [rbp+C00h]
  __int64 v147; // [rsp+C88h] [rbp+C08h]
  PVOID Address; // [rsp+C90h] [rbp+C10h]
  __int64 v149; // [rsp+C98h] [rbp+C18h]
  __int64 v150; // [rsp+CA0h] [rbp+C20h]
  __int64 v151; // [rsp+CA8h] [rbp+C28h]
  _QWORD *v152; // [rsp+CB0h] [rbp+C30h]
  char v153; // [rsp+CBFh] [rbp+C3Fh] BYREF
  unsigned __int64 v154; // [rsp+CC0h] [rbp+C40h]
  __int64 v155; // [rsp+CC8h] [rbp+C48h]
  char v156; // [rsp+CD7h] [rbp+C57h]
  __int64 v157; // [rsp+CD8h] [rbp+C58h]

  v157 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 1952);
  v155 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 1953) = 257;
      *(_BYTE *)(a1 + 1955) = 1;
      v7 = a1 + 1168;
      sub_141684120(a1 + 1168, a1 + 392, 776);
      switch ( *(_BYTE *)(v5 + 1936) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_104;
        case 2:
          goto LABEL_103;
        case 3:
          goto LABEL_8;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 1168;
      switch ( *(_BYTE *)(a1 + 1936) )
      {
        case 0:
LABEL_4:
          v8 = v5 + 1688;
          *(_QWORD *)&v97[16] = 0;
          v94 = (__m128i *)aMigrateSession;
          v95 = 24;
          v96.m128i_i64[0] = (__int64)aRepo_0;
          v96.m128i_i64[1] = 4;
          v150 = v7;
          *(_QWORD *)v97 = v7;
          *(_QWORD *)&v97[8] = v5 + 1688;
          v9 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 1680) + 16LL));
          Address = (PVOID)(v5 + 1688);
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(v90, &v94, &v96);
          v11 = v90[0];
          if ( v90[0] != 0xFF )
            goto LABEL_27;
          v9 = *(_QWORD *)&v90[8];
LABEL_5:
          *(_QWORD *)&v97[16] = 0;
          v94 = (__m128i *)aMigrateSession;
          v95 = 24;
          v96.m128i_i64[0] = (__int64)aMutationgate_0;
          v96.m128i_i64[1] = 12;
          *(_QWORD *)v97 = v150;
          *(_QWORD *)&v97[8] = v8;
          v10 = sub_1400048C0((volatile void *)(*(_QWORD *)(v155 + 1680) + 16LL));
          if ( v10 )
            goto LABEL_6;
          sub_1416850A0(v90, &v94, &v96);
          v11 = v90[0];
          if ( v90[0] == 0xFF )
          {
            v10 = *(_QWORD *)&v90[8];
LABEL_6:
            *(_QWORD *)&v97[16] = 0;
            v94 = (__m128i *)aMigrateSession;
            v95 = 24;
            v96.m128i_i64[0] = (__int64)aSessionid_0;
            v96.m128i_i64[1] = 9;
            *(_QWORD *)v97 = v150;
            *(_QWORD *)&v97[8] = v8;
            sub_1409757B0(v90, &v94);
            v11 = v90[0];
            if ( v90[0] == 0xFF )
            {
              v12 = v91;
              v13 = *(_OWORD *)&v90[8];
              v5 = v155;
              *(_QWORD *)(v155 + 1736) = v9;
              *(_QWORD *)(v5 + 1744) = v10;
              *(_OWORD *)(v5 + 1712) = v13;
              *(_QWORD *)(v5 + 1728) = v12;
              *(_BYTE *)(v5 + 1776) = 0;
              v14 = (const __m128i *)(v5 + 1784);
              *(_OWORD *)(v5 + 1832) = *(_OWORD *)(v5 + 1760);
              *(_OWORD *)(v5 + 1784) = *(_OWORD *)(v5 + 1712);
              *(_QWORD *)(v5 + 1800) = *(_QWORD *)(v5 + 1728);
              *(_QWORD *)(v5 + 1808) = *(_QWORD *)(v5 + 1736);
              *(_QWORD *)(v5 + 1816) = *(_QWORD *)(v5 + 1744);
              *(_QWORD *)(v5 + 1824) = *(_QWORD *)(v5 + 1752);
              *(_QWORD *)(v5 + 1848) = *(_QWORD *)(v5 + 1776);
              v15 = (_BYTE *)(v5 + 1928);
              *(_BYTE *)(v5 + 1928) = 0;
              *(_QWORD *)(v5 + 1920) = *(_QWORD *)(v5 + 1848);
              v16 = _mm_loadu_si128((const __m128i *)(v5 + 1784));
              v17 = *(_OWORD *)(v5 + 1800);
              v18 = *(_OWORD *)(v5 + 1816);
              *(_OWORD *)(v5 + 1904) = *(_OWORD *)(v5 + 1832);
              *(_OWORD *)(v5 + 1888) = v18;
              *(_OWORD *)(v5 + 1872) = v17;
              *(__m128i *)(v5 + 1856) = v16;
              v7 = v150;
              switch ( *(_BYTE *)(v5 + 1920) )
              {
                case 0:
                  goto LABEL_11;
                case 1:
                  goto LABEL_106;
                case 2:
                  goto LABEL_105;
                case 3:
                  goto LABEL_23;
              }
            }
          }
LABEL_27:
          v30 = ((unsigned __int64)((v90[7] << 16) | (unsigned int)*(unsigned __int16 *)&v90[5]) << 32)
              | *(unsigned int *)&v90[1];
          v40 = _mm_loadu_si128((const __m128i *)&v90[8]);
          v41 = v91;
          sub_140BF0DE0(v150);
          if ( *(_QWORD *)Address == -1 )
          {
            v45 = 1;
            v46 = v155;
            goto LABEL_80;
          }
          v152 = (_QWORD *)(v155 + 1696);
          v42 = *(_QWORD *)(v155 + 1696);
          v149 = *(_QWORD *)(v155 + 1704);
          v154 = 0;
          v151 = v42;
          while ( v149 != v154 )
          {
            ++v154;
            v43 = v42 + 96;
            sub_1402C7520();
            v42 = v43;
          }
          v44 = *(_QWORD *)Address;
          v45 = 1;
          v46 = v155;
          if ( !*(_QWORD *)Address )
            goto LABEL_80;
          goto LABEL_79;
        case 1:
LABEL_104:
          v150 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_103:
          v150 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_8;
      }
  }
LABEL_8:
  v15 = (_BYTE *)(v5 + 1928);
  v14 = (const __m128i *)(v5 + 1784);
  switch ( *(_BYTE *)(v5 + 1928) )
  {
    case 0:
      *(_QWORD *)(v5 + 1920) = *(_QWORD *)(v5 + 1848);
      v19 = _mm_loadu_si128(v14);
      v20 = *(_OWORD *)(v5 + 1800);
      v21 = *(_OWORD *)(v5 + 1816);
      *(_OWORD *)(v5 + 1904) = *(_OWORD *)(v5 + 1832);
      *(_OWORD *)(v5 + 1888) = v21;
      *(_OWORD *)(v5 + 1872) = v20;
      *(__m128i *)(v5 + 1856) = v19;
      switch ( *(_BYTE *)(v5 + 1920) )
      {
        case 0:
          goto LABEL_11;
        case 1:
          goto LABEL_106;
        case 2:
          goto LABEL_105;
        case 3:
          goto LABEL_23;
      }
    case 1:
      v150 = v7;
      v138 = v5 + 1784;
      sub_1416C3400(&off_1417B7B80, v14, v15, a4);
    case 2:
      v150 = v7;
      v138 = v5 + 1784;
      sub_1416C3420(&off_1417B7B80, v14, v15, a4);
    case 3:
      switch ( *(_BYTE *)(v5 + 1920) )
      {
        case 0:
LABEL_11:
          v143 = v15;
          v142 = v14;
          v150 = v7;
          v22 = *(volatile void **)(v5 + 1880);
          *(__m128i *)(v5 + 1896) = _mm_loadu_si128((const __m128i *)(v5 + 1880));
          *(_WORD *)(v5 + 1921) = 1;
          v151 = *(_QWORD *)(v5 + 1856);
          v152 = *(_QWORD **)(v5 + 1864);
          v23 = *(_QWORD *)(v5 + 1872);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v22, 1, 0) )
          {
            v147 = v151;
            v146 = v152;
            sub_1416C15B0(v22);
          }
          Address = (PVOID)v22;
          v24 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v147 = v151;
            v146 = v152;
            v25 = sub_1416C2250(a1, v14);
            LOBYTE(v25) = v25 ^ 1;
          }
          else
          {
            v25 = 0;
          }
          v26 = (char *)Address;
          v27 = *((_BYTE *)Address + 1);
          LODWORD(v154) = v25;
          if ( !v27 )
            goto LABEL_35;
          v132.m128i_i64[0] = 0;
          v132.m128i_i64[1] = 1;
          *(_QWORD *)&v133 = 0;
          v96.m128i_i64[0] = 1610612768;
          v94 = &v132;
          v95 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v94) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v153,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v26 = (char *)v132.m128i_i64[1];
          v29 = v132.m128i_i64[0];
          v30 = (unsigned __int8)v133;
          v31 = BYTE7(v133);
          v32 = *(unsigned __int16 *)((char *)&v133 + 5);
          v33 = *(unsigned int *)((char *)&v133 + 1);
          if ( !(_BYTE)v154 )
          {
            if ( 2 * *v24 )
            {
              v147 = v151;
              v146 = v152;
              v149 = v132.m128i_i64[1];
              v154 = v132.m128i_i64[0];
              v84 = sub_1416C2250(v28, v132.m128i_i64[0]);
              v29 = v154;
              v26 = (char *)v149;
              if ( !v84 )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v34 = Address;
          v35 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v35 == 2 )
          {
            v147 = v151;
            v146 = v152;
            v149 = (__int64)v26;
            v154 = v29;
            WakeByAddressSingle(v34);
            v29 = v154;
            v26 = (char *)v149;
          }
          if ( v29 != -1 )
          {
            v154 = v29;
            v149 = (__int64)v26;
            v36 = ((unsigned __int64)((v31 << 16) | v32) << 32) | v33;
            v37 = (_BYTE *)v155;
            v38 = v152;
            v39 = v151;
LABEL_62:
            v37[1922] = 0;
            if ( ((v39 != 0) & v37[1921]) != 0 )
              sub_140001660(v38, v39, 1);
            v37[1921] = 0;
            sub_141684120(v86, &v92, 168);
            v37[1920] = 1;
            sub_141684120(v85, v86, 168);
LABEL_65:
            v70 = v36 << 8;
            v41 = v70 | (unsigned __int8)v30;
            if ( v70 < 0 )
            {
              v30 = 0;
              goto LABEL_67;
            }
            if ( v41 )
            {
              nullsub_1(v69);
              v30 = 1;
              v71 = sub_140001650(v41, 1);
              if ( !v71 )
LABEL_67:
                sub_1416C2D4B(v30, v41);
              v72 = v71;
              sub_141684120(v71, v149, v41);
              v73 = v154;
              if ( !v154 )
                goto LABEL_72;
            }
            else
            {
              v72 = 1;
              v73 = v154;
              if ( !v154 )
                goto LABEL_72;
            }
            sub_140001660(v149, v73, 1);
LABEL_72:
            v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)(unsigned __int64)v72);
LABEL_73:
            v45 = 1;
            v11 = 3;
            goto LABEL_74;
          }
          LODWORD(v154) = v30;
LABEL_35:
          Address = v26;
          sub_1407BC950(v90, v26 + 8);
          *(_BYTE *)(v155 + 1922) = 1;
          if ( (v154 & 1) == 0 )
          {
            if ( 2 * *v24 )
            {
              v147 = v151;
              v146 = v152;
              if ( !(unsigned __int8)sub_1416C2250(v48, v47) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v49 = Address;
          v50 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          v51 = __OFSUB__(v50, 2);
          if ( v50 == 2 )
          {
            v147 = v151;
            v146 = v152;
            WakeByAddressSingle(v49);
          }
          v52 = v155;
          v53 = **(volatile signed __int64 ***)(v155 + 1904);
          v54 = _InterlockedIncrement64(v53);
          if ( (v54 < 0) ^ v51 | (v54 == 0) )
            BUG();
          *(_WORD *)(v52 + 1921) = 0;
          v106 = v53;
          sub_141684120(&v94, v90, 992);
          v103 = v151;
          v104 = v152;
          v105 = v23;
          v55 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v156 = 1;
            v83 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v55 = v83;
          }
          if ( *((_DWORD *)v55 + 4) == 2 )
          {
            v56 = 704;
            if ( *(_BYTE *)v55 )
              v56 = 472;
            v57 = v55[1] + v56;
            v156 = 0;
            v58 = sub_14089D950(v57, v55, &v94, &off_1417642A8);
          }
          else
          {
            v59 = 704;
            if ( *((_BYTE *)v55 + 64) )
              v59 = 472;
            v60 = v55[9] + v59;
            v156 = 0;
            v58 = sub_14089D950(v60, v55 + 8, &v94, &off_141764290);
          }
          v5 = v155;
          *(_QWORD *)(v155 + 1912) = v58;
LABEL_50:
          Address = (PVOID)(v5 + 1912);
          sub_140B02390(&v94, v5 + 1912, a2);
          v61 = v94;
          if ( v94 == (__m128i *)-3LL )
          {
            v63 = (_BYTE *)v155;
            *(_BYTE *)(v155 + 1920) = 3;
            goto LABEL_82;
          }
          if ( v94 == (__m128i *)-2LL )
          {
            v149 = v95;
            v30 = v96.m128i_u8[0];
            v36 = ((unsigned __int64)((v96.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v96.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v96.m128i_u32 + 1);
            v154 = 0x800000000000000CuLL;
            v62 = v96.m128i_i64[1];
          }
          else
          {
            v154 = v95;
            v149 = v96.m128i_i64[0];
            v30 = v96.m128i_u8[8];
            v36 = ((unsigned __int64)((v96.m128i_u8[15] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v96.m128i_u16[6] + 1)) << 32)
                | *(unsigned int *)((char *)&v96.m128i_u32[2] + 1);
            v62 = *(_QWORD *)v97;
            v132 = *(__m128i *)&v97[8];
            v133 = v98;
            v134 = v99;
            v135 = v100;
            v136 = _mm_loadu_si128(&v101);
            v137 = v102;
          }
          v38 = v152;
          v39 = v151;
          v119 = v132;
          v120 = v133;
          v121 = v134;
          v122 = v135;
          v123 = _mm_load_si128(&v136);
          v124 = v137;
          v64 = *(_QWORD *)Address;
          v145 = v151;
          v144 = v152;
          if ( (unsigned __int8)sub_1412F2A80(v64) )
          {
            v145 = v39;
            v144 = v38;
            sub_1412E7580(v64);
          }
          if ( v61 == (__m128i *)-1LL )
            goto LABEL_61;
          if ( v61 == (__m128i *)-2LL )
          {
            v94 = (__m128i *)v154;
            v95 = v149;
            v96.m128i_i8[0] = v30;
            *(__int32 *)((char *)v96.m128i_i32 + 1) = v36;
            v96.m128i_i8[7] = BYTE6(v36);
            *(__int16 *)((char *)&v96.m128i_i16[2] + 1) = WORD2(v36);
            v96.m128i_i64[1] = v62;
            *(__m128i *)v97 = _mm_load_si128(&v119);
            v139 = 0;
            v140 = 1;
            v141 = 0;
            *(_QWORD *)&v133 = 1610612768;
            v132.m128i_i64[0] = (__int64)&v139;
            v132.m128i_i64[1] = (__int64)&off_1417C41C0;
            if ( (unsigned __int8)sub_141230630(&v94, &v132, v65) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v153,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v154 = v139;
            v149 = v140;
            v30 = (unsigned __int8)v141;
            v66 = HIBYTE(v141);
            v67 = *(unsigned __int16 *)((char *)&v141 + 5);
            v68 = *(unsigned int *)((char *)&v141 + 1);
            v39 = v151;
            v145 = v151;
            v38 = v152;
            v144 = v152;
            sub_140BF0F60(&v94);
            v36 = ((unsigned __int64)((v66 << 16) | v67) << 32) | v68;
LABEL_61:
            v37 = (_BYTE *)v155;
            goto LABEL_62;
          }
          v112 = v62;
          v113 = v119;
          v114 = v120;
          v115 = v121;
          v116 = v122;
          v117 = _mm_load_si128(&v123);
          v118 = v124;
          v107[0] = v61;
          v107[1] = v154;
          v107[2] = v149;
          v108 = v30;
          v109 = v36;
          v111 = BYTE6(v36);
          v110 = WORD2(v36);
          v145 = v39;
          v144 = v38;
          sub_140ACD200(&v94, v107);
          v80 = v94;
          v154 = v95;
          v149 = v96.m128i_i64[0];
          v81 = _mm_loadu_si128((const __m128i *)&v96.m128i_u64[1]);
          v30 = v96.m128i_u64[1];
          sub_141684120(&v92, &v97[8], 168);
          v63 = (_BYTE *)v155;
          *(_BYTE *)(v155 + 1922) = 0;
          v63[1921] = 0;
          sub_141684120(v86, &v92, 168);
          v63[1920] = 1;
          if ( v80 == (__m128i *)-2LL )
          {
LABEL_82:
            v63[1928] = 3;
            v63[1936] = 3;
            v78 = 3;
            result = 1;
            goto LABEL_83;
          }
          sub_141684120(v85, v86, 168);
          if ( v80 == (__m128i *)-1LL )
          {
            v36 = v30 >> 8;
            goto LABEL_65;
          }
          sub_141684120(v89, v85, 168);
          v87[0] = v80;
          v87[1] = v154;
          v87[2] = v149;
          v88 = v81;
          sub_140B0A710(&v94, v87);
          v30 = ((unsigned __int64)((HIBYTE(v95) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v95 + 5)) << 32)
              | *(unsigned int *)((char *)&v95 + 1);
          v11 = v95;
          v40 = _mm_loadu_si128(&v96);
          v41 = *(_QWORD *)v97;
          if ( v94 != (__m128i *)-1LL )
          {
            HIBYTE(v95) = (((unsigned __int64)((HIBYTE(v95) << 16)
                                             | (unsigned int)*(unsigned __int16 *)((char *)&v95 + 5)) << 32)
                         | *(unsigned int *)((char *)&v95 + 1)) >> 48;
            *(_WORD *)((char *)&v95 + 5) = WORD2(v30);
            *(_DWORD *)((char *)&v95 + 1) = v30;
            v96 = v40;
            v92.m128i_i64[0] = 0;
            v92.m128i_i64[1] = 1;
            v93 = 0;
            *(_QWORD *)&v90[16] = 1610612768;
            *(_QWORD *)v90 = &v92;
            *(_QWORD *)&v90[8] = &off_1417C41C0;
            if ( (unsigned __int8)sub_141230630(&v94, v90, v82) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v153,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v40 = _mm_load_si128(&v92);
            v41 = v93;
            sub_140BF0F60(&v94);
            goto LABEL_73;
          }
          v45 = 0;
LABEL_74:
          *v143 = 1;
          sub_140BC6750(v142);
          sub_140BF0DE0(v150);
          v46 = v155;
          if ( *(_QWORD *)(v155 + 1688) != -1 )
          {
            v152 = (_QWORD *)(v155 + 1696);
            v74 = *(char **)(v155 + 1696);
            v149 = *(_QWORD *)(v155 + 1704);
            v154 = 0;
            Address = v74;
            while ( v149 != v154 )
            {
              ++v154;
              v75 = v74 + 96;
              sub_1402C7520();
              v74 = v75;
            }
            v46 = v155;
            v44 = *(_QWORD *)(v155 + 1688);
            if ( v44 )
LABEL_79:
              sub_140001660(*v152, 96 * v44, 8);
          }
LABEL_80:
          *(_BYTE *)(v46 + 1936) = 1;
          sub_140BDF930(v150);
          v127 = v30;
          v129 = BYTE6(v30);
          v128 = WORD2(v30);
          v131 = v41;
          v126 = v11;
          v130 = v40;
          v125 = v45;
          v76 = v155;
          *(_BYTE *)(v155 + 1955) = 0;
          sub_141684120(&v94, v76, 360);
          *(_BYTE *)(v76 + 1954) = 0;
          v77 = *(_QWORD *)(v76 + 384);
          *(_BYTE *)(v76 + 1953) = 0;
          *(_QWORD *)&v90[16] = *(_QWORD *)(v76 + 376);
          *(__m128i *)v90 = _mm_loadu_si128((const __m128i *)(v76 + 360));
          sub_14047E370(
            (unsigned int)&v94,
            v77,
            (unsigned int)&v125,
            (unsigned int)v90,
            *(_DWORD *)(v76 + 1944),
            *(_DWORD *)(v76 + 1948));
          v78 = 1;
          result = 0;
          v63 = (_BYTE *)v155;
LABEL_83:
          v63[1952] = v78;
          return result;
        case 1:
LABEL_106:
          v143 = v15;
          v142 = v14;
          JUMPOUT(0x140C8E0DDLL);
        case 2:
LABEL_105:
          v143 = v15;
          v142 = v14;
          v150 = v7;
          sub_1416C3420(&off_1417BB478, v14, v15, a4);
        case 3:
LABEL_23:
          v143 = v15;
          v142 = v14;
          v150 = v7;
          goto LABEL_50;
      }
  }
}