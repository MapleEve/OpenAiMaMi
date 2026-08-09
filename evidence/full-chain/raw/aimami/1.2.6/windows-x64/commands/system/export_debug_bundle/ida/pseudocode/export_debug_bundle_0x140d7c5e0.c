// Pseudocode for export_debug_bundle (EA: 0x140d7c5e0, size: 0x10a0)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 export_debug_bundle 处理器（commands::debug_bundle，argKeys: targetPath）。导出调试包到 targetPath，体内 export_started/export_succeeded/export_failed 进度事件串佐证。⚠副作用：写文件。
// Tauri 命令 export_debug_bundle 处理器（commands::debug_bundle，argKeys: targetPath）。导出调试包到 targetPath，体内 export_started/export_succeeded/export_failed 进度事件串佐证。⚠副作用：写文件。
char __fastcall export_debug_bundle(__int64 a1, __int64 a2)
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
  __int64 *v17; // r15
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
  _BYTE *v43; // rcx
  _BYTE *v44; // r12
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
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r12
  __int64 v60; // r14
  char v61; // cl
  char result; // al
  unsigned __int64 v63; // rbx
  __int64 *v64; // r14
  __int64 v65; // rbx
  __int64 v66; // rax
  _QWORD *v67; // rcx
  _QWORD *v68; // r13
  __int64 v69; // rdi
  __int64 v70; // rdx
  _QWORD *v71; // rdi
  __int64 v72; // [rsp+20h] [rbp-60h]
  _BYTE v73[152]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v74; // [rsp+D0h] [rbp+50h]
  _BYTE v75[80]; // [rsp+E0h] [rbp+60h]
  __m256i v76; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v77; // [rsp+150h] [rbp+D0h]
  char v78[152]; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v79; // [rsp+1F0h] [rbp+170h] BYREF
  __int8 v80; // [rsp+1F8h] [rbp+178h]
  int v81; // [rsp+1F9h] [rbp+179h]
  __int16 v82; // [rsp+1FDh] [rbp+17Dh]
  char v83; // [rsp+1FFh] [rbp+17Fh]
  __int64 v84; // [rsp+200h] [rbp+180h]
  __int128 v85; // [rsp+208h] [rbp+188h]
  _BYTE v86[40]; // [rsp+218h] [rbp+198h] BYREF
  __m256i v87; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v88; // [rsp+260h] [rbp+1E0h]
  __int128 v89; // [rsp+270h] [rbp+1F0h]
  __int64 v90; // [rsp+280h] [rbp+200h]
  __m256i v91; // [rsp+380h] [rbp+300h] BYREF
  __int128 v92; // [rsp+3A0h] [rbp+320h]
  __int128 v93; // [rsp+3B0h] [rbp+330h]
  __int128 v94; // [rsp+3C0h] [rbp+340h]
  __int128 v95; // [rsp+3D0h] [rbp+350h]
  __int128 v96; // [rsp+3E0h] [rbp+360h]
  __m256i v97; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v98; // [rsp+410h] [rbp+390h]
  __int128 v99; // [rsp+420h] [rbp+3A0h]
  __int128 v100; // [rsp+430h] [rbp+3B0h]
  __int128 v101; // [rsp+440h] [rbp+3C0h]
  __int128 v102; // [rsp+450h] [rbp+3D0h] BYREF
  __int64 v103; // [rsp+460h] [rbp+3E0h]
  _BYTE *v104; // [rsp+468h] [rbp+3E8h]
  _QWORD *v105; // [rsp+470h] [rbp+3F0h]
  __int64 v106; // [rsp+478h] [rbp+3F8h]
  unsigned __int64 v107; // [rsp+480h] [rbp+400h]
  _QWORD *v108; // [rsp+488h] [rbp+408h]
  __int64 *v109; // [rsp+490h] [rbp+410h]
  char v110; // [rsp+49Fh] [rbp+41Fh] BYREF
  _QWORD *v111; // [rsp+4A0h] [rbp+420h]
  __int64 *v112; // [rsp+4A8h] [rbp+428h]
  __int64 v113; // [rsp+4B0h] [rbp+430h]
  char v114; // [rsp+4BEh] [rbp+43Eh]
  char v115; // [rsp+4BFh] [rbp+43Fh]
  __int64 v116; // [rsp+4C0h] [rbp+440h]

  v116 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 1856);
  v113 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 1857) = 257;
      *(_BYTE *)(a1 + 1859) = 1;
      v5 = a1 + 1120;
      sub_14172B820(a1 + 1120, a1 + 392, 728);
      switch ( *(_BYTE *)(v3 + 1840) )
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
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1120;
      switch ( *(_BYTE *)(a1 + 1840) )
      {
        case 0:
LABEL_4:
          v6 = v3 + 1640;
          *(_QWORD *)v86 = aExportDebugBun;
          *(_QWORD *)&v86[8] = 19;
          *(_QWORD *)&v86[16] = aManager_1;
          *(_QWORD *)&v86[24] = 7;
          v106 = v5;
          *(_QWORD *)&v86[32] = v5;
          *(_OWORD *)v87.m256i_i8 = (unsigned __int64)(v3 + 1640);
          v7 = sub_14002B2A0((_QWORD *)(*(_QWORD *)(v3 + 1632) + 16LL));
          v111 = (_QWORD *)(v3 + 1640);
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)&v76, (__int64)v86, (__int64)&v86[16]);
          v8 = v76.m256i_i8[0];
          if ( v76.m256i_i8[0] == -1 )
          {
            v7 = v76.m256i_i64[1];
LABEL_5:
            *(_QWORD *)v86 = aExportDebugBun;
            *(_QWORD *)&v86[8] = 19;
            *(_QWORD *)&v86[16] = aTargetpath_1;
            *(_QWORD *)&v86[24] = 10;
            *(_QWORD *)&v86[32] = v106;
            *(_OWORD *)v87.m256i_i8 = v6;
            sub_140955980(&v76, v86);
            v8 = v76.m256i_i8[0];
            if ( v76.m256i_i8[0] == -1 )
            {
              v9 = v76.m256i_i64[3];
              v10 = *(_OWORD *)&v76.m256i_u64[1];
              v3 = v113;
              *(_QWORD *)(v113 + 1688) = v7;
              *(_OWORD *)(v3 + 1664) = v10;
              *(_QWORD *)(v3 + 1680) = v9;
              *(_BYTE *)(v3 + 1712) = 0;
              *(_OWORD *)(v3 + 1752) = *(_OWORD *)(v3 + 1696);
              *(_OWORD *)(v3 + 1720) = *(_OWORD *)(v3 + 1664);
              *(_QWORD *)(v3 + 1736) = *(_QWORD *)(v3 + 1680);
              *(_QWORD *)(v3 + 1744) = *(_QWORD *)(v3 + 1688);
              *(_QWORD *)(v3 + 1768) = *(_QWORD *)(v3 + 1712);
              v104 = (_BYTE *)(v3 + 1832);
              *(_BYTE *)(v3 + 1832) = 0;
              *(_QWORD *)(v3 + 1824) = *(_QWORD *)(v3 + 1768);
              v11 = *(_OWORD *)(v3 + 1720);
              v12 = *(_OWORD *)(v3 + 1736);
              v105 = (_QWORD *)(v3 + 1720);
              *(_OWORD *)(v3 + 1808) = *(_OWORD *)(v3 + 1752);
              *(_OWORD *)(v3 + 1792) = v12;
              *(_OWORD *)(v3 + 1776) = v11;
LABEL_9:
              *(_QWORD *)(v3 + 1808) = *(_QWORD *)(v3 + 1800);
              *(_BYTE *)(v3 + 1825) = 1;
              v16 = *(_QWORD **)(v3 + 1776);
              v17 = *(__int64 **)(v3 + 1784);
              v18 = *(_QWORD *)(v3 + 1792);
              v108 = v16;
              v107 = (unsigned __int64)v17;
              sub_140AA6020(
                (unsigned int)aDebugBundle,
                12,
                (unsigned int)aExportStarted,
                14,
                (__int64)aTargetSelected,
                15);
              v20 = v113;
              v21 = *(volatile signed __int64 ***)(v113 + 1808);
              v22 = *v21;
              v23 = _InterlockedIncrement64(*v21);
              if ( (v23 < 0) ^ v19 | (v23 == 0) )
                goto LABEL_82;
              v24 = v21[1];
              v25 = _InterlockedIncrement64(v24);
              if ( (v25 < 0) ^ v19 | (v25 == 0) )
                goto LABEL_82;
              v26 = v21[2];
              v27 = _InterlockedIncrement64(v26);
              if ( (v27 < 0) ^ v19 | (v27 == 0) )
                goto LABEL_82;
              v28 = v21[3];
              v29 = _InterlockedIncrement64(v28);
              if ( (v29 < 0) ^ v19 | (v29 == 0) )
                goto LABEL_82;
              v30 = v21[4];
              v31 = _InterlockedIncrement64(v30);
              if ( (v31 < 0) ^ v19 | (v31 == 0) )
                goto LABEL_82;
              v32 = v21[5];
              v33 = _InterlockedIncrement64(v32);
              if ( (v33 < 0) ^ v19 | (v33 == 0) )
                goto LABEL_82;
              v34 = v21[7];
              if ( v34 )
              {
                if ( _InterlockedIncrement64(v34) <= 0 )
                  goto LABEL_82;
              }
              v35 = v21[6];
              if ( _InterlockedIncrement64(v35) <= 0 )
LABEL_82:
                BUG();
              *(_BYTE *)(v20 + 1825) = 0;
              v111 = v16;
              *(_QWORD *)v86 = v16;
              v112 = v17;
              *(_QWORD *)&v86[8] = v17;
              *(_QWORD *)&v86[16] = v18;
              *(_QWORD *)&v86[24] = v22;
              *(_QWORD *)&v86[32] = v24;
              v87.m256i_i64[0] = (__int64)v26;
              v87.m256i_i64[1] = (__int64)v28;
              v87.m256i_i64[2] = (__int64)v30;
              v87.m256i_i64[3] = (__int64)v32;
              *(_QWORD *)&v88 = v35;
              *((_QWORD *)&v88 + 1) = v34;
              v36 = off_141FB97C0;
              if ( *((_DWORD *)off_141FB97C0 + 24) )
              {
                v115 = 1;
                v71 = off_141FB97C0;
                sub_14172E34C(off_141FB97C0);
                v36 = v71;
              }
              if ( *((_DWORD *)v36 + 4) == 2 )
              {
                v37 = 704;
                if ( *(_BYTE *)v36 )
                  v37 = 472;
                v38 = v36[1] + v37;
                v115 = 0;
                v39 = sub_140857060(v38, v36, v86, &off_1417EBF48);
              }
              else
              {
                v48 = 704;
                if ( *((_BYTE *)v36 + 64) )
                  v48 = 472;
                v49 = v36[9] + v48;
                v115 = 0;
                v39 = sub_140857060(v49, v36 + 8, v86, &off_1417EBF30);
              }
              v50 = v113;
              *(_QWORD *)(v113 + 1816) = v39;
              v109 = (__int64 *)(v50 + 1816);
              sub_140503100(v86, v50 + 1816, a2);
              v51 = *(_QWORD *)v86;
              if ( *(_QWORD *)v86 == -3 )
              {
                v53 = (_BYTE *)v113;
                *(_BYTE *)(v113 + 1824) = 3;
              }
              else
              {
                if ( *(_QWORD *)v86 == -2 )
                {
                  v97.m256i_i64[2] = *(_QWORD *)&v86[24];
                  *(_OWORD *)v97.m256i_i8 = *(_OWORD *)&v86[8];
                  v52 = 0x800000000000000CuLL;
                }
                else
                {
                  v52 = *(_QWORD *)&v86[8];
                  *(_OWORD *)v97.m256i_i8 = *(_OWORD *)&v86[16];
                  v97.m256i_i64[2] = *(_QWORD *)&v86[32];
                  v91 = v87;
                  v92 = v88;
                  v93 = v89;
                  *(_QWORD *)&v94 = v90;
                }
                v40 = (unsigned __int64)v112;
                v54 = v111;
                v74 = *(_OWORD *)v97.m256i_i8;
                *(_QWORD *)v75 = v97.m256i_i64[2];
                *(__m256i *)&v75[8] = v91;
                *(_OWORD *)&v75[40] = v92;
                *(_OWORD *)&v75[56] = v93;
                *(_QWORD *)&v75[72] = v94;
                v55 = *v109;
                v108 = v111;
                v107 = (unsigned __int64)v112;
                if ( (unsigned __int8)sub_141398090(v55) )
                {
                  v108 = v54;
                  v107 = v40;
                  sub_14139A2E0(v55);
                }
                if ( v51 == -2 )
                {
                  *(_QWORD *)v86 = v52;
                  *(_OWORD *)&v86[8] = v74;
                  *(_OWORD *)&v86[24] = *(_OWORD *)v75;
                  v87.m256i_i64[0] = *(_QWORD *)&v75[16];
                  v97.m256i_i64[0] = (__int64)v86;
                  v97.m256i_i64[1] = (__int64)sub_1412DDF00;
                  sub_141543AF0(&v91, &unk_141887583, &v97);
                  v108 = v111;
                  v107 = (unsigned __int64)v112;
                  sub_140CAB2C0(v86);
                  v59 = v91.m256i_i64[1];
                  *(_QWORD *)&v42 = v91.m256i_i64[0];
                  *((_QWORD *)&v42 + 1) = v91.m256i_i64[2];
LABEL_49:
                  *(_WORD *)(v113 + 1824) = 1;
                  v63 = (unsigned __int64)v42 >> 8;
                  goto LABEL_50;
                }
                if ( v51 == -1 )
                {
                  *(_QWORD *)v86 = v52;
                  *(_OWORD *)&v86[8] = v74;
                  *(_OWORD *)&v86[24] = *(_OWORD *)v75;
                  v87 = *(__m256i *)&v75[16];
                  v88 = *(_OWORD *)&v75[48];
                  *(_QWORD *)&v89 = *(_QWORD *)&v75[64];
                  v97.m256i_i64[0] = (__int64)v86;
                  v97.m256i_i64[1] = (__int64)sub_1405060F0;
                  sub_141543AF0(&v91, &unk_141888271, &v97);
                  *(_OWORD *)v97.m256i_i8 = *(_OWORD *)v91.m256i_i8;
                  v97.m256i_i64[2] = v91.m256i_i64[2];
                  sub_140AA6250((unsigned int)aDebugBundle, 12, (unsigned int)aExportFailed, 13, (__int64)&v97);
                  v97.m256i_i64[0] = 0;
                  *(_OWORD *)&v97.m256i_u64[1] = 1u;
                  v91.m256i_i64[2] = 1610612768;
                  v91.m256i_i64[0] = (__int64)&v97;
                  v91.m256i_i64[1] = (__int64)&off_141891B48;
                  if ( (unsigned __int8)sub_1405060F0(v86, &v91) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v110,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v59 = v97.m256i_i64[1];
                  *(_QWORD *)&v42 = v97.m256i_i64[0];
                  *((_QWORD *)&v42 + 1) = v97.m256i_i64[2];
                  v108 = v111;
                  v107 = (unsigned __int64)v112;
                  sub_140CAC460(v86);
                  goto LABEL_49;
                }
                v97.m256i_i64[0] = v51;
                v97.m256i_i64[1] = v52;
                *(_OWORD *)&v97.m256i_u64[2] = v74;
                v98 = *(_OWORD *)v75;
                v99 = *(_OWORD *)&v75[16];
                v100 = *(_OWORD *)&v75[32];
                v101 = *(_OWORD *)&v75[48];
                v102 = *(_OWORD *)&v75[64];
                v91.m256i_i64[0] = (__int64)&v102;
                v91.m256i_i64[1] = (__int64)sub_141553F20;
                v114 = 1;
                sub_141543AF0(v86, &unk_141888258, &v91);
                *(_OWORD *)v91.m256i_i8 = *(_OWORD *)v86;
                v91.m256i_i64[2] = *(_QWORD *)&v86[16];
                v114 = 1;
                sub_140AA6250((unsigned int)aDebugBundle, 12, (unsigned int)aExportSucceede, 16, (__int64)&v91);
                v96 = v102;
                v95 = v101;
                v94 = v100;
                v93 = v99;
                v92 = v98;
                v91 = v97;
                v114 = 0;
                sub_1404CFCA0(v86, &v91);
                *(_QWORD *)&v42 = *(_QWORD *)&v86[8];
                v40 = *(_QWORD *)v86;
                v59 = *(_QWORD *)&v86[16];
                v60 = *(_QWORD *)&v86[32];
                *((_QWORD *)&v42 + 1) = *(_QWORD *)&v86[24];
                sub_14172B820(v73, &v87, 152);
                v53 = (_BYTE *)v113;
                *(_WORD *)(v113 + 1824) = 1;
                if ( v40 != -2 )
                {
                  v63 = (unsigned __int64)v42 >> 8;
                  if ( v40 != -1 )
                  {
                    sub_14172B820(v78, v73, 152);
                    v76.m256i_i64[0] = v40;
                    v76.m256i_i8[8] = v42;
                    *(__int32 *)((char *)&v76.m256i_i32[2] + 1) = (unsigned __int64)v42 >> 8;
                    v76.m256i_i8[15] = (unsigned __int64)v42 >> 8 >> 48;
                    *(__int16 *)((char *)&v76.m256i_i16[6] + 1) = DWORD1(v42) >> 8;
                    v76.m256i_i64[2] = v59;
                    v76.m256i_i64[3] = *((_QWORD *)&v42 + 1);
                    v77 = v60;
                    sub_14050DAB0(v86, &v76);
                    v40 = ((unsigned __int64)((v86[15] << 16) | (unsigned int)*(unsigned __int16 *)&v86[13]) << 32)
                        | *(unsigned int *)&v86[9];
                    v8 = v86[8];
                    v41 = *(_QWORD *)&v86[16];
                    v42 = *(_OWORD *)&v86[24];
                    if ( *(_QWORD *)v86 == -1 )
                    {
                      v46 = 0;
                    }
                    else
                    {
                      v86[15] = (((unsigned __int64)((v86[15] << 16) | (unsigned int)*(unsigned __int16 *)&v86[13]) << 32)
                               | *(unsigned int *)&v86[9]) >> 48;
                      *(_WORD *)&v86[13] = WORD2(v40);
                      *(_DWORD *)&v86[9] = v40;
                      v97.m256i_i64[0] = 0;
                      *(_OWORD *)&v97.m256i_u64[1] = 1u;
                      v91.m256i_i64[2] = 1610612768;
                      v91.m256i_i64[0] = (__int64)&v97;
                      v91.m256i_i64[1] = (__int64)&off_141891B48;
                      if ( (unsigned __int8)sub_1412DDF00(v86, &v91) )
                        sub_14176E860(
                          (unsigned int)aADisplayImplem_11,
                          55,
                          (unsigned int)&v110,
                          (unsigned int)&unk_141889838,
                          (__int64)&off_141891C00);
                      v42 = *(_OWORD *)&v97.m256i_u64[1];
                      v41 = v97.m256i_i64[0];
                      sub_140CAB2C0(v86);
                      v46 = 1;
                      v8 = 3;
                    }
LABEL_58:
                    *v104 = 1;
                    sub_140C7F7A0(v105);
                    sub_140CAB140(v106);
                    v47 = v113;
                    if ( *(_QWORD *)(v113 + 1640) == -1 )
                      goto LABEL_64;
                    v105 = (_QWORD *)(v113 + 1648);
                    v67 = *(_QWORD **)(v113 + 1648);
                    v112 = *(__int64 **)(v113 + 1656);
                    v109 = nullptr;
                    v111 = v67;
                    while ( v112 != v109 )
                    {
                      v109 = (__int64 *)((char *)v109 + 1);
                      v68 = v67 + 12;
                      sub_140401FB0();
                      v67 = v68;
                    }
                    v47 = v113;
                    v45 = *(_QWORD *)(v113 + 1640);
                    if ( !v45 )
                      goto LABEL_64;
                    goto LABEL_63;
                  }
LABEL_50:
                  v64 = (__int64 *)((v63 << 8) | (unsigned __int8)v42);
                  if ( v42 < 0 )
                  {
                    v65 = 0;
                    goto LABEL_52;
                  }
                  if ( *((_QWORD *)&v42 + 1) )
                  {
                    nullsub_1(v56, v53, v57, v58, v72);
                    v65 = 1;
                    v66 = sub_140001650(*((_QWORD *)&v42 + 1), 1);
                    if ( !v66 )
                    {
LABEL_52:
                      v109 = v64;
                      v112 = (__int64 *)v59;
                      sub_14176E54B(v65, *((_QWORD *)&v42 + 1));
                    }
                    *(_QWORD *)&v42 = v66;
                    sub_14172B820(v66, v59, *((_QWORD *)&v42 + 1));
                    if ( !v64 )
                      goto LABEL_57;
                  }
                  else
                  {
                    *(_QWORD *)&v42 = 1;
                    if ( !v64 )
                      goto LABEL_57;
                  }
                  sub_140001660(v59, v64, 1);
LABEL_57:
                  v46 = 1;
                  v8 = 3;
                  v41 = *((_QWORD *)&v42 + 1);
                  goto LABEL_58;
                }
              }
              v53[1832] = 3;
              v53[1840] = 3;
              v61 = 3;
              result = 1;
              goto LABEL_65;
            }
          }
          v40 = ((unsigned __int64)((v76.m256i_u8[7] << 16)
                                  | (unsigned int)*(unsigned __int16 *)((char *)&v76.m256i_u16[2] + 1)) << 32)
              | *(unsigned int *)((char *)v76.m256i_u32 + 1);
          v41 = v76.m256i_i64[1];
          v42 = *(_OWORD *)&v76.m256i_u64[2];
          sub_140CAB140(v106);
          if ( *v111 != -1 )
          {
            v105 = (_QWORD *)(v113 + 1648);
            v43 = *(_BYTE **)(v113 + 1648);
            v112 = *(__int64 **)(v113 + 1656);
            v109 = nullptr;
            v104 = v43;
            while ( v112 != v109 )
            {
              v109 = (__int64 *)((char *)v109 + 1);
              v44 = v43 + 96;
              sub_140401FB0();
              v43 = v44;
            }
            v45 = *v111;
            v46 = 1;
            v47 = v113;
            if ( !*v111 )
              goto LABEL_64;
LABEL_63:
            sub_140001660(*v105, 96 * v45, 8);
            goto LABEL_64;
          }
          v46 = 1;
          v47 = v113;
LABEL_64:
          *(_BYTE *)(v47 + 1840) = 1;
          sub_140C9AB40(v106);
          v81 = v40;
          v83 = BYTE6(v40);
          v82 = WORD2(v40);
          v85 = v42;
          v80 = v8;
          v84 = v41;
          v79 = v46;
          v69 = v113;
          *(_BYTE *)(v113 + 1859) = 0;
          sub_14172B820(v86, v69, 360);
          *(_BYTE *)(v69 + 1858) = 0;
          v70 = *(_QWORD *)(v69 + 384);
          *(_BYTE *)(v69 + 1857) = 0;
          v76.m256i_i64[2] = *(_QWORD *)(v69 + 376);
          *(_OWORD *)v76.m256i_i8 = *(_OWORD *)(v69 + 360);
          sub_140AFFC30(
            (__int64)v86,
            v70,
            (__int64)&v79,
            (__int128 *)v76.m256i_i8,
            *(_DWORD *)(v69 + 1848),
            *(_DWORD *)(v69 + 1852));
          v61 = 1;
          result = 0;
          v53 = (_BYTE *)v113;
LABEL_65:
          v53[1856] = v61;
          return result;
        case 1:
LABEL_79:
          v106 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_78:
          v106 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
LABEL_7:
          v106 = v5;
          v13 = *(unsigned __int8 *)(v3 + 1832);
          v105 = (_QWORD *)(v3 + 1720);
          v104 = (_BYTE *)(v3 + 1832);
          switch ( v13 )
          {
            case 0LL:
              *(_QWORD *)(v3 + 1824) = *(_QWORD *)(v3 + 1768);
              v14 = *(_OWORD *)(v3 + 1720);
              v15 = *(_OWORD *)(v3 + 1736);
              *(_OWORD *)(v3 + 1808) = *(_OWORD *)(v3 + 1752);
              *(_OWORD *)(v3 + 1792) = v15;
              *(_OWORD *)(v3 + 1776) = v14;
              break;
            case 1LL:
              v103 = v3 + 1720;
              sub_14176EC00(&off_1418851A0);
            case 2LL:
              v103 = v3 + 1720;
              sub_14176EC20(&off_1418851A0);
            case 3LL:
              goto LABEL_9;
          }
          goto LABEL_9;
      }
  }
}
