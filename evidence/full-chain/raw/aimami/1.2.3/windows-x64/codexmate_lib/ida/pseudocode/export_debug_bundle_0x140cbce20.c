// module: codexmate_lib
// addr: 0x140cbce20
// name: export_debug_bundle
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = export_debug_bundle | mapped via command-name string xref (win-native, ground-truth)
char __fastcall export_debug_bundle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rdi
  __int8 v10; // bl
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // r8
  __int64 v16; // rax
  __int128 *v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _QWORD *v20; // r12
  __int64 *v21; // r15
  __int64 v22; // rdi
  char v23; // of
  __int64 v24; // r14
  volatile signed __int64 **v25; // rdx
  volatile signed __int64 *v26; // rax
  __int64 v27; // rt0
  volatile signed __int64 *v28; // rcx
  __int64 v29; // rt0
  volatile signed __int64 *v30; // r8
  __int64 v31; // rt0
  volatile signed __int64 *v32; // r9
  __int64 v33; // rt0
  volatile signed __int64 *v34; // r10
  __int64 v35; // rt0
  volatile signed __int64 *v36; // r11
  __int64 v37; // rt0
  volatile signed __int64 *v38; // rbx
  volatile signed __int64 *v39; // rdx
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // r15
  __int64 v45; // r14
  __int128 v46; // rdi
  _BYTE *v47; // rcx
  _BYTE *v48; // r12
  __int64 v49; // rax
  unsigned __int8 v50; // r12
  __int64 v51; // r13
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rbx
  __int64 v56; // r14
  _BYTE *v57; // rdx
  _QWORD *v58; // r12
  __int64 v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // r12
  __int64 v62; // r14
  char v63; // cl
  char result; // al
  unsigned __int64 v65; // rbx
  __int64 *v66; // r14
  __int64 v67; // rbx
  __int64 v68; // rax
  _QWORD *v69; // rcx
  _QWORD *v70; // r13
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // r8
  _QWORD *v74; // rdi
  _BYTE v75[152]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v76; // [rsp+D0h] [rbp+50h]
  _BYTE v77[80]; // [rsp+E0h] [rbp+60h]
  __m256i v78; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v79; // [rsp+150h] [rbp+D0h]
  char v80[152]; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v81; // [rsp+1F0h] [rbp+170h] BYREF
  __int8 v82; // [rsp+1F8h] [rbp+178h]
  int v83; // [rsp+1F9h] [rbp+179h]
  __int16 v84; // [rsp+1FDh] [rbp+17Dh]
  char v85; // [rsp+1FFh] [rbp+17Fh]
  __int64 v86; // [rsp+200h] [rbp+180h]
  __int128 v87; // [rsp+208h] [rbp+188h]
  _BYTE v88[40]; // [rsp+218h] [rbp+198h] BYREF
  __m256i v89; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v90; // [rsp+260h] [rbp+1E0h]
  __int128 v91; // [rsp+270h] [rbp+1F0h]
  __int64 v92; // [rsp+280h] [rbp+200h]
  __m256i v93; // [rsp+380h] [rbp+300h] BYREF
  __int128 v94; // [rsp+3A0h] [rbp+320h]
  __int128 v95; // [rsp+3B0h] [rbp+330h]
  __int128 v96; // [rsp+3C0h] [rbp+340h]
  __int128 v97; // [rsp+3D0h] [rbp+350h]
  __int128 v98; // [rsp+3E0h] [rbp+360h]
  __m256i v99; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v100; // [rsp+410h] [rbp+390h]
  __int128 v101; // [rsp+420h] [rbp+3A0h]
  __int128 v102; // [rsp+430h] [rbp+3B0h]
  __int128 v103; // [rsp+440h] [rbp+3C0h]
  __int128 v104; // [rsp+450h] [rbp+3D0h] BYREF
  __int64 v105; // [rsp+460h] [rbp+3E0h]
  _BYTE *v106; // [rsp+468h] [rbp+3E8h]
  _QWORD *v107; // [rsp+470h] [rbp+3F0h]
  __int64 v108; // [rsp+478h] [rbp+3F8h]
  unsigned __int64 v109; // [rsp+480h] [rbp+400h]
  _QWORD *v110; // [rsp+488h] [rbp+408h]
  __int64 *v111; // [rsp+490h] [rbp+410h]
  char v112; // [rsp+49Fh] [rbp+41Fh] BYREF
  _QWORD *v113; // [rsp+4A0h] [rbp+420h]
  __int64 *v114; // [rsp+4A8h] [rbp+428h]
  __int64 v115; // [rsp+4B0h] [rbp+430h]
  char v116; // [rsp+4BEh] [rbp+43Eh]
  char v117; // [rsp+4BFh] [rbp+43Fh]
  __int64 v118; // [rsp+4C0h] [rbp+440h]

  v118 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 1856);
  v115 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 1857) = 257;
      *(_BYTE *)(a1 + 1859) = 1;
      v7 = a1 + 1120;
      sub_141684120(a1 + 1120, a1 + 392, 728);
      switch ( *(_BYTE *)(v5 + 1840) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_79;
        case 2:
          goto LABEL_78;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 1120;
      switch ( *(_BYTE *)(a1 + 1840) )
      {
        case 0:
LABEL_4:
          v8 = v5 + 1640;
          *(_QWORD *)v88 = aExportDebugBun;
          *(_QWORD *)&v88[8] = 19;
          *(_QWORD *)&v88[16] = aManager_1;
          *(_QWORD *)&v88[24] = 7;
          v108 = v7;
          *(_QWORD *)&v88[32] = v7;
          *(_OWORD *)v89.m256i_i8 = (unsigned __int64)(v5 + 1640);
          v9 = sub_140004B10((volatile void *)(*(_QWORD *)(v5 + 1632) + 16LL));
          v113 = (_QWORD *)(v5 + 1640);
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(&v78, v88, &v88[16]);
          v10 = v78.m256i_i8[0];
          if ( v78.m256i_i8[0] == -1 )
          {
            v9 = v78.m256i_i64[1];
LABEL_5:
            *(_QWORD *)v88 = aExportDebugBun;
            *(_QWORD *)&v88[8] = 19;
            *(_QWORD *)&v88[16] = aTargetpath_1;
            *(_QWORD *)&v88[24] = 10;
            *(_QWORD *)&v88[32] = v108;
            *(_OWORD *)v89.m256i_i8 = v8;
            sub_1409757B0(&v78, v88);
            v10 = v78.m256i_i8[0];
            if ( v78.m256i_i8[0] == -1 )
            {
              v11 = v78.m256i_i64[3];
              v12 = *(_OWORD *)&v78.m256i_u64[1];
              v5 = v115;
              *(_QWORD *)(v115 + 1688) = v9;
              *(_OWORD *)(v5 + 1664) = v12;
              *(_QWORD *)(v5 + 1680) = v11;
              *(_BYTE *)(v5 + 1712) = 0;
              *(_OWORD *)(v5 + 1752) = *(_OWORD *)(v5 + 1696);
              *(_OWORD *)(v5 + 1720) = *(_OWORD *)(v5 + 1664);
              *(_QWORD *)(v5 + 1736) = *(_QWORD *)(v5 + 1680);
              *(_QWORD *)(v5 + 1744) = *(_QWORD *)(v5 + 1688);
              *(_QWORD *)(v5 + 1768) = *(_QWORD *)(v5 + 1712);
              v106 = (_BYTE *)(v5 + 1832);
              *(_BYTE *)(v5 + 1832) = 0;
              *(_QWORD *)(v5 + 1824) = *(_QWORD *)(v5 + 1768);
              v13 = *(_OWORD *)(v5 + 1720);
              v14 = *(_OWORD *)(v5 + 1736);
              v107 = (_QWORD *)(v5 + 1720);
              *(_OWORD *)(v5 + 1808) = *(_OWORD *)(v5 + 1752);
              *(_OWORD *)(v5 + 1792) = v14;
              *(_OWORD *)(v5 + 1776) = v13;
LABEL_9:
              *(_QWORD *)(v5 + 1808) = *(_QWORD *)(v5 + 1800);
              *(_BYTE *)(v5 + 1825) = 1;
              v20 = *(_QWORD **)(v5 + 1776);
              v21 = *(__int64 **)(v5 + 1784);
              v22 = *(_QWORD *)(v5 + 1792);
              v110 = v20;
              v109 = (unsigned __int64)v21;
              sub_140356370(
                (unsigned int)aDebugBundle,
                12,
                (unsigned int)aExportStarted,
                14,
                (__int64)aTargetSelected,
                15);
              v24 = v115;
              v25 = *(volatile signed __int64 ***)(v115 + 1808);
              v26 = *v25;
              v27 = _InterlockedIncrement64(*v25);
              if ( (v27 < 0) ^ v23 | (v27 == 0) )
                goto LABEL_82;
              v28 = v25[1];
              v29 = _InterlockedIncrement64(v28);
              if ( (v29 < 0) ^ v23 | (v29 == 0) )
                goto LABEL_82;
              v30 = v25[2];
              v31 = _InterlockedIncrement64(v30);
              if ( (v31 < 0) ^ v23 | (v31 == 0) )
                goto LABEL_82;
              v32 = v25[3];
              v33 = _InterlockedIncrement64(v32);
              if ( (v33 < 0) ^ v23 | (v33 == 0) )
                goto LABEL_82;
              v34 = v25[4];
              v35 = _InterlockedIncrement64(v34);
              if ( (v35 < 0) ^ v23 | (v35 == 0) )
                goto LABEL_82;
              v36 = v25[5];
              v37 = _InterlockedIncrement64(v36);
              if ( (v37 < 0) ^ v23 | (v37 == 0) )
                goto LABEL_82;
              v38 = v25[7];
              if ( v38 )
              {
                if ( _InterlockedIncrement64(v38) <= 0 )
                  goto LABEL_82;
              }
              v39 = v25[6];
              if ( _InterlockedIncrement64(v39) <= 0 )
LABEL_82:
                BUG();
              *(_BYTE *)(v24 + 1825) = 0;
              v113 = v20;
              *(_QWORD *)v88 = v20;
              v114 = v21;
              *(_QWORD *)&v88[8] = v21;
              *(_QWORD *)&v88[16] = v22;
              *(_QWORD *)&v88[24] = v26;
              *(_QWORD *)&v88[32] = v28;
              v89.m256i_i64[0] = (__int64)v30;
              v89.m256i_i64[1] = (__int64)v32;
              v89.m256i_i64[2] = (__int64)v34;
              v89.m256i_i64[3] = (__int64)v36;
              *(_QWORD *)&v90 = v39;
              *((_QWORD *)&v90 + 1) = v38;
              v40 = off_141EC8710;
              if ( *((_DWORD *)off_141EC8710 + 24) )
              {
                v117 = 1;
                v74 = off_141EC8710;
                sub_1416984A3(off_141EC8710);
                v40 = v74;
              }
              if ( *((_DWORD *)v40 + 4) == 2 )
              {
                v41 = 704;
                if ( *(_BYTE *)v40 )
                  v41 = 472;
                v42 = v40[1] + v41;
                v117 = 0;
                v43 = sub_140897130(v42, v40, v88, &off_1417642A8);
              }
              else
              {
                v52 = 704;
                if ( *((_BYTE *)v40 + 64) )
                  v52 = 472;
                v53 = v40[9] + v52;
                v117 = 0;
                v43 = sub_140897130(v53, v40 + 8, v88, &off_141764290);
              }
              v54 = v115;
              *(_QWORD *)(v115 + 1816) = v43;
              v111 = (__int64 *)(v54 + 1816);
              sub_140B00D40(v88, v54 + 1816, a2);
              v55 = *(_QWORD *)v88;
              if ( *(_QWORD *)v88 == -3 )
              {
                v57 = (_BYTE *)v115;
                *(_BYTE *)(v115 + 1824) = 3;
              }
              else
              {
                if ( *(_QWORD *)v88 == -2 )
                {
                  v99.m256i_i64[2] = *(_QWORD *)&v88[24];
                  *(_OWORD *)v99.m256i_i8 = *(_OWORD *)&v88[8];
                  v56 = 0x800000000000000CuLL;
                }
                else
                {
                  v56 = *(_QWORD *)&v88[8];
                  *(_OWORD *)v99.m256i_i8 = *(_OWORD *)&v88[16];
                  v99.m256i_i64[2] = *(_QWORD *)&v88[32];
                  v93 = v89;
                  v94 = v90;
                  v95 = v91;
                  *(_QWORD *)&v96 = v92;
                }
                v44 = (unsigned __int64)v114;
                v58 = v113;
                v76 = *(_OWORD *)v99.m256i_i8;
                *(_QWORD *)v77 = v99.m256i_i64[2];
                *(__m256i *)&v77[8] = v93;
                *(_OWORD *)&v77[40] = v94;
                *(_OWORD *)&v77[56] = v95;
                *(_QWORD *)&v77[72] = v96;
                v59 = *v111;
                v110 = v113;
                v109 = (unsigned __int64)v114;
                if ( (unsigned __int8)sub_1412F2A80(v59) )
                {
                  v110 = v58;
                  v109 = v44;
                  sub_1412E7580(v59);
                }
                if ( v55 == -2 )
                {
                  *(_QWORD *)v88 = v56;
                  *(_OWORD *)&v88[8] = v76;
                  *(_OWORD *)&v88[24] = *(_OWORD *)v77;
                  v89.m256i_i64[0] = *(_QWORD *)&v77[16];
                  v99.m256i_i64[0] = (__int64)v88;
                  v99.m256i_i64[1] = (__int64)sub_141230630;
                  sub_14149C0F0(&v93, &unk_1417B9F13, &v99);
                  v110 = v113;
                  v109 = (unsigned __int64)v114;
                  sub_140BF0F60(v88);
                  v61 = v93.m256i_i64[1];
                  *(_QWORD *)&v46 = v93.m256i_i64[0];
                  *((_QWORD *)&v46 + 1) = v93.m256i_i64[2];
LABEL_49:
                  *(_WORD *)(v115 + 1824) = 1;
                  v65 = (unsigned __int64)v46 >> 8;
                  goto LABEL_50;
                }
                if ( v55 == -1 )
                {
                  *(_QWORD *)v88 = v56;
                  *(_OWORD *)&v88[8] = v76;
                  *(_OWORD *)&v88[24] = *(_OWORD *)v77;
                  v89 = *(__m256i *)&v77[16];
                  v90 = *(_OWORD *)&v77[48];
                  *(_QWORD *)&v91 = *(_QWORD *)&v77[64];
                  v99.m256i_i64[0] = (__int64)v88;
                  v99.m256i_i64[1] = (__int64)sub_140B036A0;
                  sub_14149C0F0(&v93, &unk_1417BAC01, &v99);
                  *(_OWORD *)v99.m256i_i8 = *(_OWORD *)v93.m256i_i8;
                  v99.m256i_i64[2] = v93.m256i_i64[2];
                  sub_1403565C0((unsigned int)aDebugBundle, 12, (unsigned int)aExportFailed, 13, (__int64)&v99);
                  v99.m256i_i64[0] = 0;
                  *(_OWORD *)&v99.m256i_u64[1] = 1u;
                  v93.m256i_i64[2] = 1610612768;
                  v93.m256i_i64[0] = (__int64)&v99;
                  v93.m256i_i64[1] = (__int64)&off_1417C41C0;
                  if ( (unsigned __int8)sub_140B036A0(v88, &v93) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v112,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v61 = v99.m256i_i64[1];
                  *(_QWORD *)&v46 = v99.m256i_i64[0];
                  *((_QWORD *)&v46 + 1) = v99.m256i_i64[2];
                  v110 = v113;
                  v109 = (unsigned __int64)v114;
                  sub_140BF2F60(v88);
                  goto LABEL_49;
                }
                v99.m256i_i64[0] = v55;
                v99.m256i_i64[1] = v56;
                *(_OWORD *)&v99.m256i_u64[2] = v76;
                v100 = *(_OWORD *)v77;
                v101 = *(_OWORD *)&v77[16];
                v102 = *(_OWORD *)&v77[32];
                v103 = *(_OWORD *)&v77[48];
                v104 = *(_OWORD *)&v77[64];
                v93.m256i_i64[0] = (__int64)&v104;
                v93.m256i_i64[1] = (__int64)sub_1414AC520;
                v116 = 1;
                sub_14149C0F0(v88, &unk_1417BABE8, &v93);
                *(_OWORD *)v93.m256i_i8 = *(_OWORD *)v88;
                v93.m256i_i64[2] = *(_QWORD *)&v88[16];
                v116 = 1;
                sub_1403565C0((unsigned int)aDebugBundle, 12, (unsigned int)aExportSucceede, 16, (__int64)&v93);
                v98 = v104;
                v97 = v103;
                v96 = v102;
                v95 = v101;
                v94 = v100;
                v93 = v99;
                v116 = 0;
                sub_140ACD530(v88, &v93);
                *(_QWORD *)&v46 = *(_QWORD *)&v88[8];
                v44 = *(_QWORD *)v88;
                v61 = *(_QWORD *)&v88[16];
                v62 = *(_QWORD *)&v88[32];
                *((_QWORD *)&v46 + 1) = *(_QWORD *)&v88[24];
                sub_141684120(v75, &v89, 152);
                v57 = (_BYTE *)v115;
                *(_WORD *)(v115 + 1824) = 1;
                if ( v44 != -2 )
                {
                  v65 = (unsigned __int64)v46 >> 8;
                  if ( v44 != -1 )
                  {
                    sub_141684120(v80, v75, 152);
                    v78.m256i_i64[0] = v44;
                    v78.m256i_i8[8] = v46;
                    *(__int32 *)((char *)&v78.m256i_i32[2] + 1) = (unsigned __int64)v46 >> 8;
                    v78.m256i_i8[15] = (unsigned __int64)v46 >> 8 >> 48;
                    *(__int16 *)((char *)&v78.m256i_i16[6] + 1) = DWORD1(v46) >> 8;
                    v78.m256i_i64[2] = v61;
                    v78.m256i_i64[3] = *((_QWORD *)&v46 + 1);
                    v79 = v62;
                    sub_140B0AC30(v88, &v78);
                    v44 = ((unsigned __int64)((v88[15] << 16) | (unsigned int)*(unsigned __int16 *)&v88[13]) << 32)
                        | *(unsigned int *)&v88[9];
                    v10 = v88[8];
                    v45 = *(_QWORD *)&v88[16];
                    v46 = *(_OWORD *)&v88[24];
                    if ( *(_QWORD *)v88 == -1 )
                    {
                      v50 = 0;
                    }
                    else
                    {
                      v88[15] = (((unsigned __int64)((v88[15] << 16) | (unsigned int)*(unsigned __int16 *)&v88[13]) << 32)
                               | *(unsigned int *)&v88[9]) >> 48;
                      *(_WORD *)&v88[13] = WORD2(v44);
                      *(_DWORD *)&v88[9] = v44;
                      v99.m256i_i64[0] = 0;
                      *(_OWORD *)&v99.m256i_u64[1] = 1u;
                      v93.m256i_i64[2] = 1610612768;
                      v93.m256i_i64[0] = (__int64)&v99;
                      v93.m256i_i64[1] = (__int64)&off_1417C41C0;
                      if ( (unsigned __int8)sub_141230630(v88, &v93, v73) )
                        sub_1416C3060(
                          (unsigned int)aADisplayImplem_11,
                          55,
                          (unsigned int)&v112,
                          (unsigned int)&unk_1417BC180,
                          (__int64)&off_1417C4278);
                      v46 = *(_OWORD *)&v99.m256i_u64[1];
                      v45 = v99.m256i_i64[0];
                      sub_140BF0F60(v88);
                      v50 = 1;
                      v10 = 3;
                    }
LABEL_58:
                    *v106 = 1;
                    sub_140BC6870(v107);
                    sub_140BF0DE0(v108);
                    v51 = v115;
                    if ( *(_QWORD *)(v115 + 1640) == -1 )
                      goto LABEL_64;
                    v107 = (_QWORD *)(v115 + 1648);
                    v69 = *(_QWORD **)(v115 + 1648);
                    v114 = *(__int64 **)(v115 + 1656);
                    v111 = nullptr;
                    v113 = v69;
                    while ( v114 != v111 )
                    {
                      v111 = (__int64 *)((char *)v111 + 1);
                      v70 = v69 + 12;
                      sub_1402C7520();
                      v69 = v70;
                    }
                    v51 = v115;
                    v49 = *(_QWORD *)(v115 + 1640);
                    if ( !v49 )
                      goto LABEL_64;
                    goto LABEL_63;
                  }
LABEL_50:
                  v66 = (__int64 *)((v65 << 8) | (unsigned __int8)v46);
                  if ( v46 < 0 )
                  {
                    v67 = 0;
                    goto LABEL_52;
                  }
                  if ( *((_QWORD *)&v46 + 1) )
                  {
                    nullsub_1(v60);
                    v67 = 1;
                    v68 = sub_140001650(*((_QWORD *)&v46 + 1), 1);
                    if ( !v68 )
                    {
LABEL_52:
                      v111 = v66;
                      v114 = (__int64 *)v61;
                      sub_1416C2D4B(v67, *((_QWORD *)&v46 + 1));
                    }
                    *(_QWORD *)&v46 = v68;
                    sub_141684120(v68, v61, *((_QWORD *)&v46 + 1));
                    if ( !v66 )
                      goto LABEL_57;
                  }
                  else
                  {
                    *(_QWORD *)&v46 = 1;
                    if ( !v66 )
                      goto LABEL_57;
                  }
                  sub_140001660(v61, v66, 1);
LABEL_57:
                  v50 = 1;
                  v10 = 3;
                  v45 = *((_QWORD *)&v46 + 1);
                  goto LABEL_58;
                }
              }
              v57[1832] = 3;
              v57[1840] = 3;
              v63 = 3;
              result = 1;
              goto LABEL_65;
            }
          }
          v44 = ((unsigned __int64)((v78.m256i_u8[7] << 16)
                                  | (unsigned int)*(unsigned __int16 *)((char *)&v78.m256i_u16[2] + 1)) << 32)
              | *(unsigned int *)((char *)v78.m256i_u32 + 1);
          v45 = v78.m256i_i64[1];
          v46 = *(_OWORD *)&v78.m256i_u64[2];
          sub_140BF0DE0(v108);
          if ( *v113 != -1 )
          {
            v107 = (_QWORD *)(v115 + 1648);
            v47 = *(_BYTE **)(v115 + 1648);
            v114 = *(__int64 **)(v115 + 1656);
            v111 = nullptr;
            v106 = v47;
            while ( v114 != v111 )
            {
              v111 = (__int64 *)((char *)v111 + 1);
              v48 = v47 + 96;
              sub_1402C7520();
              v47 = v48;
            }
            v49 = *v113;
            v50 = 1;
            v51 = v115;
            if ( !*v113 )
              goto LABEL_64;
LABEL_63:
            sub_140001660(*v107, 96 * v49, 8);
            goto LABEL_64;
          }
          v50 = 1;
          v51 = v115;
LABEL_64:
          *(_BYTE *)(v51 + 1840) = 1;
          sub_140BE1300(v108);
          v83 = v44;
          v85 = BYTE6(v44);
          v84 = WORD2(v44);
          v87 = v46;
          v82 = v10;
          v86 = v45;
          v81 = v50;
          v71 = v115;
          *(_BYTE *)(v115 + 1859) = 0;
          sub_141684120(v88, v71, 360);
          *(_BYTE *)(v71 + 1858) = 0;
          v72 = *(_QWORD *)(v71 + 384);
          *(_BYTE *)(v71 + 1857) = 0;
          v78.m256i_i64[2] = *(_QWORD *)(v71 + 376);
          *(_OWORD *)v78.m256i_i8 = *(_OWORD *)(v71 + 360);
          sub_14047E370(
            (unsigned int)v88,
            v72,
            (unsigned int)&v81,
            (unsigned int)&v78,
            *(_DWORD *)(v71 + 1848),
            *(_DWORD *)(v71 + 1852));
          v63 = 1;
          result = 0;
          v57 = (_BYTE *)v115;
LABEL_65:
          v57[1856] = v63;
          return result;
        case 1:
LABEL_79:
          v108 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_78:
          v108 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
LABEL_7:
          v108 = v7;
          v15 = v5 + 1832;
          v16 = *(unsigned __int8 *)(v5 + 1832);
          v17 = (__int128 *)(v5 + 1720);
          v107 = (_QWORD *)(v5 + 1720);
          v106 = (_BYTE *)(v5 + 1832);
          switch ( v16 )
          {
            case 0LL:
              *(_QWORD *)(v5 + 1824) = *(_QWORD *)(v5 + 1768);
              v18 = *v17;
              v19 = *(_OWORD *)(v5 + 1736);
              *(_OWORD *)(v5 + 1808) = *(_OWORD *)(v5 + 1752);
              *(_OWORD *)(v5 + 1792) = v19;
              *(_OWORD *)(v5 + 1776) = v18;
              break;
            case 1LL:
              v105 = v5 + 1720;
              sub_1416C3400(&off_1417B7B80, v17, v15, a4);
            case 2LL:
              v105 = v5 + 1720;
              sub_1416C3420(&off_1417B7B80, v17, v15, a4);
            case 3LL:
              goto LABEL_9;
          }
          goto LABEL_9;
      }
  }
}