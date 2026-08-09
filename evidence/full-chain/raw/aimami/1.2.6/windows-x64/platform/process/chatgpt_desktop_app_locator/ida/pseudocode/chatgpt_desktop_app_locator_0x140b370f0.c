// Pseudocode for chatgpt_desktop_app_locator (EA: 0x140b370f0, size: 0x16cf)
// Module: platform/process
// Source: IDA Hex-Rays decompiler
// IDA Comment: ChatGPT 桌面应用定位器（1.2.6 新增平台函数）。按优先级尝试四级定位链：①遍历 10 组环境变量+路径候选（LOCALAPPDATA/PROGRAMFILES/PROGRAMFILES(X86) × ChatGPT/OpenAI 各种目录组合）做文件存在性探测；②HKCU/HKLM SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\
// ChatGPT 桌面应用定位器（1.2.6 新增平台函数）。按优先级尝试四级定位链：①遍历 10 组环境变量+路径候选（LOCALAPPDATA/PROGRAMFILES/PROGRAMFILES(X86) × ChatGPT/OpenAI 各种目录组合）做文件存在性探测；②HKCU/HKLM SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\ChatGPT.exe 注册表 reg query /ve 读取默认安装路径；③HKCU/HKLM Uninstall 键经 powershell -NoProfile -Command 查询；④where 命令兜底。返回定位到的可执行文件完整路径，未找到返回空。红线20副作用：派生只读查询子进程（reg/powershell/where），无文件写删。
__int64 __fastcall locate_chatgpt_desktop_app(__int64 a1)
{
  __int128 v1; // xmm6
  __int64 i; // r13
  __int64 v3; // rax
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int128 v13; // kr00_16
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r14
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rbx
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rsi
  char v36; // bl
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rdi
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // r12
  const char *v47; // rdx
  const char *v48; // r14
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r12
  __int64 v56; // r13
  __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rbx
  __int64 result; // rax
  __int64 v62; // rbx
  __int64 v63; // rdi
  __int64 v64; // r15
  __int64 v65; // r12
  char j; // al
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int128 v73; // xmm0
  _OWORD *v74; // rax
  __int64 k; // r14
  __int64 v76; // r13
  __int64 v77; // rbx
  __int64 v78; // rbx
  __int64 v79; // r13
  __int64 v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r13
  __int64 v85; // rax
  __int64 v86; // r13
  __int128 v87; // xmm7
  __int64 v88; // r13
  __int64 v89; // rax
  __int64 v90; // r14
  _QWORD *v91; // rdi
  unsigned __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // [rsp+20h] [rbp-60h]
  __int128 v97; // [rsp+30h] [rbp-50h] BYREF
  __int64 v98; // [rsp+40h] [rbp-40h] BYREF
  __int128 v99; // [rsp+48h] [rbp-38h]
  __int64 v100; // [rsp+58h] [rbp-28h]
  __m512i v101; // [rsp+60h] [rbp-20h] BYREF
  __int128 v102; // [rsp+A0h] [rbp+20h]
  __int128 v103; // [rsp+B0h] [rbp+30h]
  const char *v104; // [rsp+C0h] [rbp+40h]
  __int64 v105; // [rsp+C8h] [rbp+48h]
  const char *v106; // [rsp+D0h] [rbp+50h]
  __int64 v107; // [rsp+D8h] [rbp+58h]
  __int64 v108; // [rsp+E0h] [rbp+60h]
  __int64 v109; // [rsp+E8h] [rbp+68h]
  const char *v110; // [rsp+F0h] [rbp+70h]
  __int64 v111; // [rsp+F8h] [rbp+78h]
  const char *v112; // [rsp+100h] [rbp+80h]
  __int64 v113; // [rsp+108h] [rbp+88h]
  const char *v114; // [rsp+110h] [rbp+90h]
  __int64 v115; // [rsp+118h] [rbp+98h]
  const char *v116; // [rsp+120h] [rbp+A0h]
  __int64 v117; // [rsp+128h] [rbp+A8h]
  const char *v118; // [rsp+130h] [rbp+B0h]
  __int64 v119; // [rsp+138h] [rbp+B8h]
  const char *v120; // [rsp+140h] [rbp+C0h]
  __int64 v121; // [rsp+148h] [rbp+C8h]
  const char *v122; // [rsp+150h] [rbp+D0h]
  __int64 v123; // [rsp+158h] [rbp+D8h]
  const char *v124; // [rsp+160h] [rbp+E0h]
  __int64 v125; // [rsp+168h] [rbp+E8h]
  const char *v126; // [rsp+170h] [rbp+F0h]
  __int64 v127; // [rsp+178h] [rbp+F8h]
  const char *v128; // [rsp+180h] [rbp+100h]
  __int64 v129; // [rsp+188h] [rbp+108h]
  const char *v130; // [rsp+190h] [rbp+110h]
  __int64 v131; // [rsp+198h] [rbp+118h]
  const char *v132; // [rsp+1A0h] [rbp+120h]
  __int64 v133; // [rsp+1A8h] [rbp+128h]
  __int64 v134; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v135; // [rsp+1B8h] [rbp+138h]
  __int128 v136; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v137; // [rsp+1D0h] [rbp+150h]
  __int128 v138; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v139; // [rsp+1F0h] [rbp+170h]
  __m512i v140; // [rsp+200h] [rbp+180h] BYREF
  __int128 v141; // [rsp+240h] [rbp+1C0h]
  __int64 v142; // [rsp+250h] [rbp+1D0h]
  __int64 v143; // [rsp+258h] [rbp+1D8h] BYREF
  __int128 v144; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v145; // [rsp+270h] [rbp+1F0h]
  __int128 v146; // [rsp+280h] [rbp+200h]
  char v147; // [rsp+290h] [rbp+210h]
  __int16 v148; // [rsp+298h] [rbp+218h]
  __m512i v149; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v150; // [rsp+2E0h] [rbp+260h]
  __int128 v151; // [rsp+2F0h] [rbp+270h]
  const char *v152; // [rsp+300h] [rbp+280h]
  __int64 v153; // [rsp+310h] [rbp+290h]
  __int64 v154; // [rsp+318h] [rbp+298h]
  __int64 v155; // [rsp+320h] [rbp+2A0h]
  __int64 v156; // [rsp+328h] [rbp+2A8h]
  __int64 v157; // [rsp+330h] [rbp+2B0h]
  __int128 v158; // [rsp+338h] [rbp+2B8h]
  __int64 v159; // [rsp+348h] [rbp+2C8h]

  v159 = -2;
  v154 = a1;
  v143 = 0;
  v144 = 8u;
  v101.m512i_i64[2] = (__int64)aLocalappdata;
  v101.m512i_i64[3] = 12;
  v101.m512i_i64[4] = (__int64)aProgramsChatgp;
  v101.m512i_i64[5] = 28;
  v101.m512i_i64[6] = (__int64)aLocalappdata;
  v101.m512i_i64[7] = 12;
  *(_QWORD *)&v102 = aChatgptChatgpt_0;
  *((_QWORD *)&v102 + 1) = 19;
  *(_QWORD *)&v103 = aLocalappdata;
  *((_QWORD *)&v103 + 1) = 12;
  v104 = aProgramsOpenai;
  v105 = 35;
  v106 = aLocalappdata;
  v107 = 12;
  v108 = (__int64)aProgramsOpenai_0;
  v109 = 27;
  v110 = aProgramfiles;
  v111 = 12;
  v112 = aChatgptChatgpt_0;
  v113 = 19;
  v114 = aProgramfiles;
  v115 = 12;
  v116 = aOpenaiChatgptC;
  v117 = 26;
  v118 = aProgramfiles;
  v119 = 12;
  v120 = aOpenaiChatgptE;
  v121 = 18;
  v122 = aProgramfilesX8;
  v123 = 17;
  v124 = aChatgptChatgpt_0;
  v125 = 19;
  v126 = aProgramfilesX8;
  v127 = 17;
  v128 = aOpenaiChatgptC;
  v129 = 26;
  v130 = aProgramfilesX8;
  v131 = 17;
  v132 = aOpenaiChatgptE;
  v133 = 18;
  for ( i = 0; i != 10; ++i )
  {
    v8 = 4 * i;
    v9 = v101.m512i_i64[4 * i + 2];
    if ( !v9 )
      break;
    v10 = v101.m512i_i64[v8 + 4];
    v11 = v101.m512i_i64[4 * i + 5];
    sub_14152B3C0(&v140, v9, v101.m512i_i64[v8 + 3]);
    v6 = v140.m512i_i64[0];
    if ( v140.m512i_i64[0] != -1 )
    {
      if ( v140.m512i_i64[0] == -2 )
      {
        v12 = v140.m512i_i64[1];
        v13 = *(_OWORD *)&v140.m512i_u64[2];
        sub_140A82F20(v140.m512i_i64[2], v140.m512i_i64[3]);
        if ( v14 )
        {
          *((_QWORD *)&v158 + 1) = v12;
          *(_QWORD *)&v158 = v13;
          sub_14151B4E0((unsigned int)&v149, v13, DWORD2(v13), v10, v11);
          v15 = *((_QWORD *)&v144 + 1);
          if ( *((_QWORD *)&v144 + 1) == v143 )
            sub_14172C8D0(&v143);
          v3 = v144;
          v4 = 32 * v15;
          v5 = *(_OWORD *)v149.m512i_i8;
          *(_OWORD *)(v144 + v4 + 16) = *(_OWORD *)&v149.m512i_u64[2];
          *(_OWORD *)(v3 + v4) = v5;
          *((_QWORD *)&v144 + 1) = v15 + 1;
          v6 = *((_QWORD *)&v158 + 1);
          v7 = v158;
          if ( *((_QWORD *)&v158 + 1) )
            goto LABEL_3;
        }
        else if ( v12 )
        {
          v7 = v13;
          v6 = v12;
          goto LABEL_3;
        }
      }
      else if ( v140.m512i_i64[0] )
      {
        v7 = v140.m512i_i64[1];
LABEL_3:
        sub_140001660(v7, v6, 1);
        continue;
      }
    }
  }
  v16 = v143;
  v17 = v144;
  v18 = 32LL * *((_QWORD *)&v144 + 1);
  v19 = v144 + 32LL * *((_QWORD *)&v144 + 1);
  v140.m512i_i64[0] = v144;
  v140.m512i_i64[2] = v143;
  v140.m512i_i64[3] = v19;
  v20 = v144;
  if ( *((_QWORD *)&v144 + 1) )
  {
    v21 = 0;
    v156 = v144;
    while ( *(_QWORD *)(v17 + v21) != -1 )
    {
      *((_QWORD *)&v158 + 1) = *(_QWORD *)(v17 + v21);
      v22 = *(_QWORD *)(v17 + v21 + 8);
      v1 = *(_OWORD *)(v17 + v21 + 16);
      *(_QWORD *)&v158 = v21;
      v23 = *(_QWORD *)(v17 + v21 + 16);
      v157 = v22;
      sub_14152E0B0(&v101, v22, v23);
      if ( v101.m512i_i32[0] == 2 )
      {
        v149.m512i_i64[1] = v101.m512i_i64[1];
        v149.m512i_i64[0] = 2;
      }
      else
      {
        v149 = v101;
        *(_QWORD *)&v151 = v103;
        v150 = v102;
        if ( v101.m512i_i64[0] != 2 )
        {
          v89 = v154;
          *(_QWORD *)v154 = *((_QWORD *)&v158 + 1);
          *(_QWORD *)(v89 + 8) = v157;
          *(_OWORD *)(v89 + 16) = v1;
          result = v18 - 32;
          v90 = v156;
          if ( v18 - 32 != (_QWORD)v158 )
          {
            v91 = (_QWORD *)(v156 + v158 + 40);
            v92 = (unsigned __int64)(v18 - v158 - 32) >> 5;
            do
            {
              v93 = *(v91 - 1);
              if ( v93 )
                result = sub_140001660(*v91, v93, 1);
              v91 += 4;
              --v92;
            }
            while ( v92 );
          }
          if ( v16 )
            return sub_140001660(v90, 32 * v16, 8);
          return result;
        }
      }
      sub_1400478E0(&v149.m512i_u64[1]);
      if ( *((_QWORD *)&v158 + 1) )
        sub_140001660(v157, *((_QWORD *)&v158 + 1), 1);
      v21 = v158 + 32;
      v17 = v156;
      if ( v18 == (_QWORD)v158 + 32LL )
        goto LABEL_31;
    }
    v20 = v17 + v21 + 32;
  }
  v140.m512i_i64[1] = v20;
  v24 = v19 - v20;
  if ( v24 )
  {
    v25 = v24 >> 5;
    v26 = (_QWORD *)(v20 + 8);
    do
    {
      v27 = *(v26 - 1);
      if ( v27 )
        sub_140001660(*v26, v27, 1);
      v26 += 4;
      --v25;
    }
    while ( v25 );
  }
LABEL_31:
  if ( v16 )
    sub_140001660(v17, 32 * v16, 8);
  *(_QWORD *)&v144 = 2;
  *((_QWORD *)&v144 + 1) = aHkcuSoftwareMi;
  *(_QWORD *)&v145 = 68;
  *((_QWORD *)&v145 + 1) = aHklmSoftwareMi_0;
  *(_QWORD *)&v146 = 68;
  v28 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          v29 = v28;
          if ( v28 == 2 )
          {
            v135 = 2;
            *(_QWORD *)&v136 = aHkcuSoftwareMi_0;
            *((_QWORD *)&v136 + 1) = 56;
            *(_QWORD *)&v137 = aHklmSoftwareMi_1;
            *((_QWORD *)&v137 + 1) = 56;
            for ( result = 0; ; result = v62 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  if ( result == 2 )
                  {
                    *(_QWORD *)v154 = -1;
                    goto LABEL_149;
                  }
                  v62 = result + 1;
                  v134 = result + 1;
                  v97 = *(&v136 + result);
                  sub_141522C60(&v101, aPowershell);
                  HIDWORD(v113) = 0x8000000;
                  *(_QWORD *)&v138 = &v97;
                  *((_QWORD *)&v138 + 1) = sub_1402DDC10;
                  sub_141543AF0(&v140, &unk_141861904, &v138);
                  v158 = *(_OWORD *)v140.m512i_i8;
                  v63 = v140.m512i_i64[2];
                  sub_141522B40(&v101, aNoprofile, 10);
                  sub_141522B40(&v101, aCommand_4, 8);
                  sub_141522B40(&v101, *((_QWORD *)&v158 + 1), v63);
                  sub_141528ED0(&v149, &v101);
                  v64 = v149.m512i_i64[0];
                  if ( v149.m512i_i64[0] != -1 )
                    break;
                  sub_1400478E0(&v149.m512i_u64[1]);
                  *(_QWORD *)v154 = -1;
                  if ( (_QWORD)v158 )
                    sub_140001660(*((_QWORD *)&v158 + 1), v158, 1);
                  sub_1402E8430(&v101);
                  result = v62;
                }
                v146 = *(_OWORD *)&v149.m512i_u64[5];
                v145 = *(_OWORD *)&v149.m512i_u64[3];
                v144 = *(_OWORD *)&v149.m512i_u64[1];
                v143 = v149.m512i_i64[0];
                if ( (_QWORD)v158 )
                  sub_140001660(*((_QWORD *)&v158 + 1), v158, 1);
                sub_1402E8430(&v101);
                if ( !DWORD2(v146) )
                  break;
                *(_QWORD *)v154 = -1;
LABEL_106:
                if ( v64 )
                  sub_140001660(v144, v64, 1);
                if ( (_QWORD)v145 )
                  sub_140001660(*((_QWORD *)&v145 + 1), v145, 1);
                result = v62;
                if ( *(_QWORD *)v154 != -1 )
                  return result;
              }
              v65 = v144;
              sub_141541900(&v98, v144, *((_QWORD *)&v144 + 1));
              v140.m512i_i64[0] = 0;
              v140.m512i_i64[1] = *((_QWORD *)&v99 + 1);
              v157 = v99;
              *(_OWORD *)&v140.m512i_u64[2] = v99;
              v140.m512i_i64[4] = 0;
              v140.m512i_i64[5] = *((_QWORD *)&v99 + 1);
              v140.m512i_i64[6] = 0xA0000000ALL;
              v140.m512i_i8[56] = 1;
              LOWORD(v141) = 0;
              for ( j = 0; (j & 1) == 0; j = BYTE1(v141) )
              {
                v67 = v140.m512i_i64[2];
                sub_140B6D030(&v101, &v140.m512i_u64[2]);
                if ( v101.m512i_i32[0] == 1 )
                {
                  v68 = v140.m512i_i64[0];
                  v140.m512i_i64[0] = v101.m512i_i64[2];
                  v69 = v101.m512i_i64[2] - v68;
                  v70 = v68 + v67;
                  if ( v101.m512i_i64[2] == v68 )
                    goto LABEL_129;
                }
                else
                {
                  if ( BYTE1(v141) )
                    break;
                  BYTE1(v141) = 1;
                  v69 = v140.m512i_i64[1] - v140.m512i_i64[0];
                  if ( ((unsigned __int8)v141 | (v140.m512i_i64[1] != v140.m512i_i64[0])) != 1 )
                    break;
                  v70 = v140.m512i_i64[2] + v140.m512i_i64[0];
                  if ( !v69 )
                    goto LABEL_129;
                }
                if ( *(_BYTE *)(v70 + v69 - 1) != 10 )
                  goto LABEL_129;
                if ( v69 == 1 )
                {
                  v69 = 0;
LABEL_129:
                  v71 = sub_140A82F20(v70, v69);
                  if ( !v72 )
                    continue;
                  goto LABEL_130;
                }
                if ( *(_BYTE *)(v70 + v69 - 2) == 13 )
                {
                  v71 = sub_140A82F20(v70, v69 - 2);
                  if ( !v72 )
                    continue;
                }
                else
                {
                  v71 = sub_140A82F20(v70, v69 - 1);
                  if ( !v72 )
                    continue;
                }
LABEL_130:
                sub_141543570(&v101, v71, v72);
                *(_QWORD *)&v158 = v101.m512i_i64[1];
                *((_QWORD *)&v158 + 1) = v101.m512i_i64[0];
                sub_14151B4E0((unsigned int)&v138, v101.m512i_i32[2], v101.m512i_i32[4], (unsigned int)aChatgptExe, 11);
                if ( *((_QWORD *)&v158 + 1) )
                  sub_140001660(v158, *((_QWORD *)&v158 + 1), 1);
                *((_QWORD *)&v158 + 1) = *((_QWORD *)&v138 + 1);
                sub_14152E0B0(&v101, *((_QWORD *)&v138 + 1), v139);
                if ( v101.m512i_i32[0] == 2 )
                {
                  v149.m512i_i64[1] = v101.m512i_i64[1];
                  v149.m512i_i64[0] = 2;
                }
                else
                {
                  v149 = v101;
                  *(_QWORD *)&v151 = v103;
                  v150 = v102;
                  if ( v101.m512i_i64[0] != 2 )
                  {
                    v73 = v138;
                    v74 = (_OWORD *)v154;
                    *(_OWORD *)(v154 + 16) = v139;
                    *v74 = v73;
                    if ( v98 > 0 )
                      sub_140001660(v157, v98, 1);
                    goto LABEL_106;
                  }
                }
                sub_1400478E0(&v149.m512i_u64[1]);
                if ( (_QWORD)v138 )
                  sub_140001660(*((_QWORD *)&v158 + 1), v138, 1);
              }
              *(_QWORD *)v154 = -1;
              if ( v98 > 0 )
                sub_140001660(v157, v98, 1);
              if ( v64 )
                sub_140001660(v65, v64, 1);
              if ( (_QWORD)v145 )
                sub_140001660(*((_QWORD *)&v145 + 1), v145, 1);
            }
          }
          ++v28;
          v143 = v29 + 1;
          v30 = 16 * v29;
          v31 = *(_QWORD *)((char *)&v144 + v30 + 8);
          v32 = *(_QWORD *)((char *)&v144 + v30 + 16);
          sub_141522C60(&v101, aReg);
          HIDWORD(v113) = 0x8000000;
          sub_141522B40(&v101, aQuery_1, 5);
          sub_141522B40(&v101, v31, v32);
          sub_141522B40(&v101, aVe, 3);
          sub_141528ED0(&v149, &v101);
          v33 = v149.m512i_i64[0];
          if ( v149.m512i_i64[0] == -1 )
          {
            sub_1400478E0(&v149.m512i_u64[1]);
            sub_1402E8430(&v101);
            continue;
          }
          break;
        }
        *(_OWORD *)&v140.m512i_u64[5] = *(_OWORD *)&v149.m512i_u64[5];
        *(_OWORD *)&v140.m512i_u64[3] = *(_OWORD *)&v149.m512i_u64[3];
        *(_OWORD *)&v140.m512i_u64[1] = *(_OWORD *)&v149.m512i_u64[1];
        v140.m512i_i64[0] = v149.m512i_i64[0];
        sub_1402E8430(&v101);
        if ( v140.m512i_i32[12] )
        {
          v56 = -1;
          if ( v33 )
            goto LABEL_82;
          goto LABEL_83;
        }
        v156 = v140.m512i_i64[1];
        sub_141541900(&v138, v140.m512i_i64[1], v140.m512i_i64[2]);
        v157 = v33;
        *(_QWORD *)&v158 = v28;
        *((_QWORD *)&v158 + 1) = *((_QWORD *)&v138 + 1);
        v34 = v139;
        v35 = 0;
        v36 = 0;
        v37 = 0;
LABEL_39:
        if ( (v36 & 1) != 0 )
          goto LABEL_68;
        if ( v34 < v35 )
        {
          v38 = v35;
LABEL_54:
          v36 = 1;
          v35 = v38;
          v38 = v37;
          v44 = v34;
          if ( v34 != v37 )
            goto LABEL_55;
LABEL_68:
          if ( (__int64)v138 > 0 )
            sub_140001660(*((_QWORD *)&v158 + 1), v138, 1);
          v28 = v158;
          if ( v157 )
            sub_140001660(v156, v157, 1);
          if ( v140.m512i_i64[3] )
            sub_140001660(v140.m512i_i64[4], v140.m512i_i64[3], 1);
          continue;
        }
        break;
      }
      v39 = *((_QWORD *)&v158 + 1);
      while ( 1 )
      {
        v40 = v34 - v35;
        v41 = v39 + v35;
        if ( v34 - v35 >= 0x10 )
        {
          LOBYTE(v39) = 10;
          v43 = sub_14154B8A0(v39, v41, v40);
          v39 = *((_QWORD *)&v158 + 1);
          if ( v43 != 1 )
          {
LABEL_53:
            v38 = v34;
            goto LABEL_54;
          }
        }
        else
        {
          v42 = 0;
          if ( !v40 )
            goto LABEL_53;
          while ( *(_BYTE *)(v41 + v42) != 10 )
          {
            if ( v40 == ++v42 )
              goto LABEL_53;
          }
        }
        v38 = v42 + v35 + 1;
        if ( v42 + v35 < v34 && *(_BYTE *)(v41 + v42) == 10 )
          break;
        v35 += v42 + 1;
        if ( v34 < v38 )
          goto LABEL_54;
      }
      v36 = 0;
      v35 += v42 + 1;
      v44 = v38;
LABEL_55:
      v45 = v44 - v37;
      if ( v44 != v37 && *(_BYTE *)(*((_QWORD *)&v158 + 1) + v44 - 1) == 10 )
      {
        if ( v45 == 1 )
        {
          v45 = 0;
        }
        else if ( *(_BYTE *)(*((_QWORD *)&v158 + 1) + v44 - 2) == 13 )
        {
          v45 -= 2LL;
        }
        else
        {
          --v45;
        }
      }
      v46 = sub_140A82F20(*((_QWORD *)&v158 + 1) + v37, v45);
      v48 = v47;
      if ( !(unsigned __int8)sub_140B6F020(aRegSz, 6, v46, v47) )
      {
        v37 = v38;
        if ( !(unsigned __int8)sub_140B6F020(aRegExpandSz, 13, v46, v48) )
          goto LABEL_39;
      }
      sub_14154A390((unsigned int)&v149, v46, (_DWORD)v48, (unsigned int)asc_141860E4E, 4);
      v104 = v152;
      v103 = v151;
      v102 = v150;
      v101 = v149;
      v105 = 0;
      v106 = v48;
      LOWORD(v107) = 1;
      v108 = 3;
      sub_140455AE0(&v134, &v101);
      if ( (_QWORD)v136 != 3 || (v49 = v135, v50 = sub_140A82F20(*(_QWORD *)(v135 + 32), *(_QWORD *)(v135 + 40)), !v51) )
      {
        if ( v134 )
          sub_140001660(v135, 16 * v134, 8);
        v37 = v38;
        goto LABEL_39;
      }
      v156 = v49;
      if ( v51 < 0 )
      {
        v57 = 0;
        goto LABEL_97;
      }
      v55 = v50;
      v56 = v51;
      nullsub_1(v52, v51, v53, v54, v96);
      v57 = 1;
      v58 = sub_140001650(v56, 1);
      if ( !v58 )
      {
        v155 = v56;
LABEL_97:
        sub_14176E54B(v57, v155);
      }
      v155 = v58;
      sub_14172B820(v58, v55, v56);
      v28 = v158;
      v33 = v157;
      if ( v134 )
        sub_140001660(v156, 16 * v134, 8);
      if ( (__int64)v138 > 0 )
        sub_140001660(*((_QWORD *)&v158 + 1), v138, 1);
      v153 = v56;
      if ( v33 )
LABEL_82:
        sub_140001660(v140.m512i_i64[1], v33, 1);
LABEL_83:
      if ( v140.m512i_i64[3] )
        sub_140001660(v140.m512i_i64[4], v140.m512i_i64[3], 1);
      if ( v56 == -1 )
        continue;
      break;
    }
    *((_QWORD *)&v158 + 1) = v56;
    sub_141543570(&v101, v155, v153);
    *(_QWORD *)&v158 = v101.m512i_i64[0];
    v1 = *(_OWORD *)&v101.m512i_u64[2];
    v59 = v101.m512i_i64[2];
    v157 = v101.m512i_i64[1];
    sub_14152E0B0(&v101, v101.m512i_i64[1], v101.m512i_i64[2]);
    if ( v101.m512i_i32[0] == 2 )
    {
      v149.m512i_i64[1] = v101.m512i_i64[1];
      v149.m512i_i64[0] = 2;
      goto LABEL_89;
    }
    v149 = v101;
    *(_QWORD *)&v151 = v103;
    v150 = v102;
    if ( v101.m512i_i64[0] == 2 )
    {
LABEL_89:
      sub_1400478E0(&v149.m512i_u64[1]);
      goto LABEL_93;
    }
    if ( !(unsigned __int8)sub_140B425E0(v157, v59) )
    {
LABEL_93:
      v60 = *((_QWORD *)&v158 + 1);
      if ( (_QWORD)v158 )
        sub_140001660(v157, v158, 1);
      sub_140001660(v155, v60, 1);
      continue;
    }
    break;
  }
  v95 = v154;
  *(_QWORD *)v154 = v158;
  *(_QWORD *)(v95 + 8) = v157;
  *(_OWORD *)(v95 + 16) = v1;
  result = sub_140001660(v155, *((_QWORD *)&v158 + 1), 1);
  if ( *(_QWORD *)v95 == -1 )
  {
LABEL_149:
    v137 = *(_OWORD *)&off_141860E78;
    v136 = *(_OWORD *)&off_141860E68;
    for ( k = 0; ; ++k )
    {
      if ( k == 2 )
      {
        result = v154;
        *(_QWORD *)v154 = -1;
        return result;
      }
      v76 = *((_QWORD *)&v136 + 2 * k);
      v77 = *((_QWORD *)&v136 + 2 * k + 1);
      sub_141522C60(&v101, aWhere);
      HIDWORD(v113) = 0x8000000;
      sub_141522B40(&v101, v76, v77);
      sub_141528ED0(&v149, &v101);
      if ( v149.m512i_i64[0] == -1 )
      {
        sub_1400478E0(&v149.m512i_u64[1]);
        goto LABEL_151;
      }
      *((_QWORD *)&v158 + 1) = v149.m512i_i64[0];
      *(_QWORD *)&v158 = v149.m512i_i64[4];
      v78 = v149.m512i_i64[3];
      if ( v149.m512i_i32[12] )
      {
        if ( *((_QWORD *)&v158 + 1) )
          sub_140001660(v149.m512i_i64[1], *((_QWORD *)&v158 + 1), 1);
        if ( v78 )
          sub_140001660(v158, v78, 1);
        goto LABEL_151;
      }
      v156 = v149.m512i_i64[3];
      v79 = v149.m512i_i64[2];
      v157 = v149.m512i_i64[1];
      sub_14154B690(&v149, v149.m512i_i64[1], v149.m512i_i64[2]);
      if ( !v149.m512i_i8[0] )
        break;
      v80 = -1;
LABEL_161:
      if ( *((_QWORD *)&v158 + 1) )
        sub_140001660(v157, *((_QWORD *)&v158 + 1), 1);
      if ( v156 )
        sub_140001660(v158, v156, 1);
      if ( v80 != -1 )
      {
        v94 = v154;
        *(_QWORD *)(v154 + 8) = v100;
        *(_OWORD *)(v94 + 16) = v1;
        *(_QWORD *)v94 = v80;
        return sub_1402E8430(&v101);
      }
LABEL_151:
      sub_1402E8430(&v101);
    }
    v143 = 0;
    *(_QWORD *)&v144 = v79;
    *((_QWORD *)&v144 + 1) = v157;
    v145 = (unsigned __int64)v79;
    *(_QWORD *)&v146 = v79;
    *((_QWORD *)&v146 + 1) = 0xA0000000ALL;
    v147 = 1;
    v148 = 0;
    while ( 1 )
    {
      v80 = -1;
      if ( HIBYTE(v148) )
        goto LABEL_161;
      v84 = *((_QWORD *)&v144 + 1);
      sub_140B6D030(&v149, (char *)&v144 + 8);
      if ( v149.m512i_i32[0] != 1 )
        break;
      v85 = v143;
      v143 = v149.m512i_i64[2];
      v81 = v149.m512i_i64[2] - v85;
      v86 = v85 + v84;
      if ( v149.m512i_i64[2] != v85 )
        goto LABEL_177;
LABEL_169:
      v82 = sub_140A82F20(v86, v81);
      if ( v83 )
      {
        sub_141543570(&v149, v82, v83);
        v155 = v149.m512i_i64[0];
        if ( v149.m512i_i64[0] == -1 )
          goto LABEL_161;
        v87 = *(_OWORD *)&v149.m512i_u64[2];
        v88 = v149.m512i_i64[2];
        v153 = v149.m512i_i64[1];
        sub_14152E0B0(&v149, v149.m512i_i64[1], v149.m512i_i64[2]);
        if ( v149.m512i_i32[0] == 2 )
        {
          v140.m512i_i64[1] = v149.m512i_i64[1];
          v140.m512i_i64[0] = 2;
          goto LABEL_186;
        }
        v140 = v149;
        v142 = v151;
        v141 = v150;
        if ( v149.m512i_i64[0] == 2 )
        {
LABEL_186:
          sub_1400478E0(&v140.m512i_u64[1]);
        }
        else if ( (unsigned __int8)sub_140B425E0(v153, v88) )
        {
          v100 = v153;
          v80 = v155;
          v1 = v87;
          goto LABEL_161;
        }
        if ( v155 )
          sub_140001660(v153, v155, 1);
        goto LABEL_161;
      }
    }
    if ( HIBYTE(v148) )
      goto LABEL_161;
    HIBYTE(v148) = 1;
    v81 = v144 - v143;
    if ( ((unsigned __int8)v148 | ((_QWORD)v144 != v143)) != 1 )
      goto LABEL_161;
    v86 = *((_QWORD *)&v144 + 1) + v143;
    if ( !v81 )
      goto LABEL_169;
LABEL_177:
    if ( *(_BYTE *)(v86 + v81 - 1) == 10 )
    {
      if ( v81 == 1 )
      {
        v81 = 0;
      }
      else if ( *(_BYTE *)(v86 + v81 - 2) == 13 )
      {
        v81 -= 2;
      }
      else
      {
        --v81;
      }
    }
    goto LABEL_169;
  }
  return result;
}
