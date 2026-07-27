// module: codexmate_lib/platform/process
// addr: 0x1403b4a80
// name: prepare_transition
// win 1.2.1 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::platform::process::CodexProcessLifecycle::prepare_transition | 跨平台字符串签名匹配(名↔函数一致)
_OWORD *__fastcall prepare_transition(__int64 a1, __int64 a2, int a3, char a4)
{
  _OWORD *v4; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rdi
  char v10; // si
  __int64 v11; // rdx
  char v12; // al
  _OWORD *result; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // r15
  unsigned int v39; // esi
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r8
  int v43; // ebx
  int v44; // r14d
  __int64 v45; // rsi
  _QWORD *v46; // rdi
  __int64 v47; // rdx
  int v48; // eax
  int v49; // edx
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rsi
  __int64 v53; // r8
  unsigned __int64 v54; // rax
  unsigned int v55; // edx
  bool v56; // cf
  __int64 v57; // r15
  __int64 v58; // r14
  __int64 v59; // r13
  unsigned __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // r14
  int v65; // eax
  int v66; // edx
  unsigned __int64 v67; // rsi
  unsigned int v68; // edx
  __int64 v69; // rdi
  _BYTE *i; // r15
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r14
  unsigned __int64 v76; // rax
  unsigned int v77; // edx
  _OWORD *v78; // rax
  __int64 v79; // r13
  __int64 v80; // rcx
  _BYTE *v81; // rbx
  unsigned __int64 v82; // r15
  __int64 v83; // r14
  __int64 v84; // rsi
  _QWORD *v85; // rdi
  __int64 v86; // rdx
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm2
  __int64 v90; // rdx
  __int64 v91; // r8
  _OWORD *v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rbx
  __int64 v95; // r15
  _QWORD *v96; // rdi
  __int64 v97; // rdx
  __int64 v98; // rcx
  _QWORD *v99; // rdi
  __int64 v100; // rdx
  _OWORD v101[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v102; // [rsp+58h] [rbp-28h] BYREF
  __int64 v103; // [rsp+68h] [rbp-18h]
  __int128 v104; // [rsp+70h] [rbp-10h] BYREF
  __int64 v105; // [rsp+80h] [rbp+0h]
  __int128 v106; // [rsp+88h] [rbp+8h] BYREF
  __int64 v107; // [rsp+98h] [rbp+18h]
  __int128 v108; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v109; // [rsp+B0h] [rbp+30h]
  __int128 v110; // [rsp+C0h] [rbp+40h]
  __int64 v111; // [rsp+D0h] [rbp+50h]
  __int128 v112; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v113; // [rsp+F0h] [rbp+70h]
  __int128 v114; // [rsp+100h] [rbp+80h]
  __int64 v115; // [rsp+110h] [rbp+90h]
  __int64 v116; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v117; // [rsp+128h] [rbp+A8h]
  __int128 v118; // [rsp+130h] [rbp+B0h]
  __int128 v119; // [rsp+140h] [rbp+C0h]
  __int128 v120; // [rsp+150h] [rbp+D0h]
  __int64 v121; // [rsp+160h] [rbp+E0h]
  __m256 v122; // [rsp+170h] [rbp+F0h] BYREF
  unsigned int v123; // [rsp+194h] [rbp+114h]
  _OWORD *v124; // [rsp+198h] [rbp+118h]
  __int64 v125; // [rsp+1A0h] [rbp+120h]
  __int64 v126; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v127; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v128; // [rsp+1C0h] [rbp+140h]
  _BYTE v129[96]; // [rsp+1D0h] [rbp+150h] BYREF
  int v130; // [rsp+27Ch] [rbp+1FCh]
  __int64 v131; // [rsp+288h] [rbp+208h] BYREF
  __int64 v132; // [rsp+290h] [rbp+210h]
  __int64 v133; // [rsp+298h] [rbp+218h]
  __int64 v134; // [rsp+2A0h] [rbp+220h]
  __int64 v135; // [rsp+2A8h] [rbp+228h]
  _BYTE v136[96]; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v137; // [rsp+310h] [rbp+290h] BYREF
  __int128 v138; // [rsp+320h] [rbp+2A0h]
  __int128 v139; // [rsp+330h] [rbp+2B0h]
  __int64 v140; // [rsp+340h] [rbp+2C0h]
  _OWORD *v141; // [rsp+348h] [rbp+2C8h]
  __int64 v142; // [rsp+350h] [rbp+2D0h]
  __int128 v143; // [rsp+358h] [rbp+2D8h]
  char v144; // [rsp+36Ch] [rbp+2ECh]
  char v145; // [rsp+36Dh] [rbp+2EDh] BYREF
  char v146; // [rsp+36Eh] [rbp+2EEh]
  char v147; // [rsp+36Fh] [rbp+2EFh]
  __int64 v148; // [rsp+370h] [rbp+2F0h]

  v148 = -2;
  LOBYTE(v143) = a4;
  v134 = a1;
  if ( (sub_140AECEB0(aChatgpt, 7) & 1) != 0 )
  {
    sub_140AED480(&v122);
    if ( *(_QWORD *)v122.m256_f32 != -1 )
      goto LABEL_7;
  }
  else
  {
    *(_QWORD *)v122.m256_f32 = -1;
  }
  if ( (sub_140AECEB0(aCodex_0, 5) & 1) == 0 )
  {
    *(_QWORD *)v122.m256_f32 = -1;
    goto LABEL_10;
  }
  sub_140AED480(&v122);
  if ( *(_QWORD *)v122.m256_f32 == -1 )
    goto LABEL_10;
LABEL_7:
  if ( *(_QWORD *)off_141EC8D80 >= 3u )
  {
    v137 = *(_OWORD *)&v122.m256_f32[2];
    *(_QWORD *)v136 = &v137;
    *(_QWORD *)&v136[8] = sub_14148F3A0;
    *(_QWORD *)v129 = 0;
    *(_QWORD *)&v129[8] = aCodexmateLibPl_2;
    *(_OWORD *)&v129[16] = 0x20u;
    *(_QWORD *)&v129[32] = aSrcPlatformPro_2;
    *(_QWORD *)&v129[40] = 23;
    *(_QWORD *)&v129[48] = 3;
    *(_QWORD *)&v129[56] = aCodexmateLibPl_2;
    *(_QWORD *)&v129[64] = 32;
    *(_QWORD *)&v129[72] = 0xA2A00000001LL;
    *(_QWORD *)&v129[80] = &unk_1417520E6;
    *(_QWORD *)&v129[88] = v136;
    sub_1412C36A0(&v145, v129);
  }
LABEL_10:
  LOBYTE(v8) = 1;
  if ( _InterlockedCompareExchange8(&byte_141EC2408, 1, 0) )
    sub_1416C15B0(&byte_141EC2408);
  v9 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v10 = sub_1416C2250(v8, v7) ^ 1;
    if ( byte_141EC2409 )
    {
LABEL_14:
      v11 = *(_QWORD *)v122.m256_f32;
      if ( *(__int64 *)v122.m256_f32 > 0 )
        sub_140001660(*(_QWORD *)&v122.m256_f32[2], *(_QWORD *)v122.m256_f32, 1);
      if ( v10 )
        goto LABEL_23;
LABEL_22:
      if ( 2 * *v9 && !(unsigned __int8)sub_1416C2250(v8, v11) )
        byte_141EC2409 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    v10 = 0;
    if ( byte_141EC2409 )
      goto LABEL_14;
  }
  v11 = *(_QWORD *)ymmword_141EC2410.m256_f32;
  if ( *(__int64 *)ymmword_141EC2410.m256_f32 > 0 )
    sub_140001660(*(_QWORD *)&ymmword_141EC2410.m256_f32[2], *(_QWORD *)ymmword_141EC2410.m256_f32, 1);
  ymmword_141EC2410 = v122;
  if ( !v10 )
    goto LABEL_22;
LABEL_23:
  v12 = byte_141EC2408;
  byte_141EC2408 = 0;
  if ( v12 != 2 )
  {
    if ( (_BYTE)v143 )
      goto LABEL_25;
LABEL_42:
    if ( (unsigned int)sub_140AECEB0(aChatgpt, 7) == 1 || (unsigned int)sub_140AECEB0(aCodex_0, 5) == 1 )
    {
      v135 = a2;
      DWORD2(v143) = a3;
      v131 = 0;
      v132 = 8;
      v133 = 0;
      v4 = v101;
      v101[0] = *(_OWORD *)&off_141751B30;
      v101[1] = *(_OWORD *)&off_141751B40;
      v31 = 0;
      do
      {
        while ( 1 )
        {
          v32 = v31 + 1;
          v33 = v31;
          v34 = *((_QWORD *)&v101[v33] + 1);
          v116 = *(_QWORD *)&v101[v33];
          v117 = v34;
          if ( (unsigned int)sub_140AECEB0(v116, v34) == 1 )
          {
            *(_QWORD *)v136 = &v116;
            *(_QWORD *)&v136[8] = sub_14041F680;
            sub_14149C0F0(v129, &unk_141751B7D, v136);
            v127 = *(_OWORD *)v129;
            v128 = *(_QWORD *)&v129[16];
            sub_14147B720(v129, aTaskkill, 8);
            v130 = 0x8000000;
            v37 = *((_QWORD *)&v127 + 1);
            v38 = v128;
            sub_14147B600(v129, &unk_141751B84, 3);
            sub_14147B600(v129, v37, v38);
            sub_141481530(&v137, v129);
            if ( (_QWORD)v137 == -1 )
            {
              v126 = *((_QWORD *)&v137 + 1);
              *(_QWORD *)v136 = &v127;
              *(_QWORD *)&v136[8] = sub_1400015F0;
              *(_QWORD *)&v136[16] = &v126;
              *(_QWORD *)&v136[24] = sub_141490720;
              sub_14149C0F0(&v102, &unk_14174D58C, v136);
              *(_OWORD *)v136 = v102;
              *(_QWORD *)&v136[16] = v103;
              sub_140018650(&v126);
              v110 = *(_OWORD *)&v136[32];
              v112 = *(_OWORD *)v136;
              v113 = *(_OWORD *)&v136[16];
              v114 = *(_OWORD *)&v136[32];
              v115 = *(_QWORD *)&v136[48];
              v140 = *(_QWORD *)&v136[48];
              v139 = *(_OWORD *)&v136[32];
              v138 = *(_OWORD *)&v136[16];
              v137 = *(_OWORD *)v136;
              sub_14034D6C0((__int64)v129);
              if ( (_QWORD)v127 )
                sub_140001660(*((_QWORD *)&v127 + 1), v127, 1);
              goto LABEL_67;
            }
            v111 = v140;
            v112 = v137;
            v113 = v138;
            v114 = v139;
            v115 = v140;
            v121 = v140;
            v120 = v139;
            v119 = v138;
            v118 = v137;
            sub_14034D6C0((__int64)v129);
            v39 = v121;
            if ( (_DWORD)v121 && (unsigned int)sub_140AECEB0(v116, v117) == 1 )
            {
              sub_14041CA70(v129, v39);
              *(_QWORD *)&v136[16] = *(_QWORD *)&v129[16];
              *(_OWORD *)v136 = *(_OWORD *)v129;
              *(_QWORD *)v129 = &v127;
              *(_QWORD *)&v129[8] = sub_1400015F0;
              *(_QWORD *)&v129[16] = v136;
              *(_QWORD *)&v129[24] = sub_1400015F0;
              sub_14149C0F0(&v106, &unk_141751B87, v129);
              if ( *(_QWORD *)v136 )
                sub_140001660(*(_QWORD *)&v136[8], *(_QWORD *)v136, 1);
              v40 = v133;
              if ( v133 == v131 )
                sub_141689AB0(&v131);
              v41 = v132;
              v36 = 3 * v40;
              *(_QWORD *)(v132 + 8 * v36 + 16) = v107;
              *(_OWORD *)(v41 + 8 * v36) = v106;
              v133 = v40 + 1;
            }
            if ( (_QWORD)v118 )
              sub_140001660(*((_QWORD *)&v118 + 1), v118, 1);
            if ( *((_QWORD *)&v119 + 1) )
              sub_140001660(v120, *((_QWORD *)&v119 + 1), 1);
            v35 = v127;
            if ( (_QWORD)v127 )
              break;
          }
          v31 = v32;
          if ( v32 == 2 )
            goto LABEL_61;
        }
        sub_140001660(*((_QWORD *)&v127 + 1), v127, 1);
        v31 = v32;
      }
      while ( v32 != 2 );
LABEL_61:
      v42 = v133;
      if ( v133 )
      {
        sub_140440300((unsigned int)v129, v132, v133, (unsigned int)&aCodeSwitchRoll[35], 3);
        *(_QWORD *)&v136[16] = *(_QWORD *)&v129[16];
        *(_OWORD *)v136 = *(_OWORD *)v129;
        *(_QWORD *)v129 = v136;
        *(_QWORD *)&v129[8] = sub_1400015F0;
        sub_14149C0F0(&v104, &unk_141751B5E, v129);
        if ( *(_QWORD *)v136 )
          sub_140001660(*(_QWORD *)&v136[8], *(_QWORD *)v136, 1);
        v137 = v104;
        *(_QWORD *)&v138 = v105;
LABEL_67:
        v43 = DWORD2(v143);
        v44 = v135;
        v45 = v133;
        if ( v133 )
        {
          v46 = (_QWORD *)(v132 + 8);
          do
          {
            v47 = *(v46 - 1);
            if ( v47 )
              sub_140001660(*v46, v47, 1);
            v46 += 3;
            --v45;
          }
          while ( v45 );
        }
        if ( v131 )
          sub_140001660(v132, 24 * v131, 8);
        *(_QWORD *)v136 = 10;
        *(_OWORD *)&v136[8] = v137;
        *(_OWORD *)&v136[24] = v138;
        *(_OWORD *)&v136[40] = v139;
        *(_QWORD *)&v136[56] = v140;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          *(_QWORD *)&v108 = v136;
          *((_QWORD *)&v108 + 1) = sub_140B036A0;
          *(_QWORD *)v129 = 0;
          *(_QWORD *)&v129[8] = aCodexmateLibPl_2;
          *(_OWORD *)&v129[16] = 0x20u;
          *(_QWORD *)&v129[32] = aSrcPlatformPro_2;
          *(_QWORD *)&v129[40] = 23;
          *(_QWORD *)&v129[48] = 2;
          *(_QWORD *)&v129[56] = aCodexmateLibPl_2;
          *(_QWORD *)&v129[64] = 32;
          *(_QWORD *)&v129[72] = 0x5DB00000001LL;
          *(_QWORD *)&v129[80] = &unk_141750031;
          *(_QWORD *)&v129[88] = &v108;
          sub_1412C36A0(&v145, v129);
        }
        sub_14034ED40(v136);
        goto LABEL_80;
      }
      if ( v131 )
        sub_140001660(v132, 24 * v131, 8);
      v43 = DWORD2(v143);
      v44 = v135;
LABEL_80:
      v48 = sub_141471910(v36, v35, v42);
      v52 = sub_141491390(v48, v49, v44, v43, (__int64)&off_1417529D8);
      DWORD2(v143) = v50;
      while ( 1 )
      {
        v54 = sub_141471910(v51, v50, v53);
        v56 = v54 < v52;
        if ( v54 == v52 )
          v56 = v55 < DWORD2(v143);
        if ( !v56 )
          break;
        sub_1403FB4E0((__int64)v129);
        if ( *(_DWORD *)v129 == -1 )
        {
          v57 = *(_QWORD *)&v129[8];
          v58 = *(_QWORD *)&v129[24];
          v4 = *(_OWORD **)&v129[16];
          if ( *(_QWORD *)&v129[24] )
          {
            v59 = 32LL * *(_QWORD *)&v129[24];
            v60 = 0;
            do
            {
              v28 = *((_QWORD *)&v4[v60 / 0x10] + 1);
              if ( v28 )
                sub_140001660(*(_QWORD *)&v4[v60 / 0x10 + 1], v28, 1);
              v60 += 32LL;
            }
            while ( v59 != v60 );
          }
          if ( v57 )
            sub_140001660(v4, 32 * v57, 8);
          if ( !v58 )
            goto LABEL_109;
        }
        else
        {
          *(_OWORD *)v136 = *(_OWORD *)v129;
          *(_OWORD *)&v136[80] = *(_OWORD *)&v129[80];
          *(_OWORD *)&v136[64] = *(_OWORD *)&v129[64];
          *(_OWORD *)&v136[48] = *(_OWORD *)&v129[48];
          *(_OWORD *)&v136[32] = *(_OWORD *)&v129[32];
          *(_OWORD *)&v136[16] = *(_OWORD *)&v129[16];
          if ( *(_QWORD *)v129 == -1 )
          {
            if ( v136[8] )
              goto LABEL_109;
          }
          else
          {
            sub_14034ED40(v136);
          }
        }
        sub_141487490(0, 100000000);
      }
      sub_1403FB4E0((__int64)v129);
      if ( *(_DWORD *)v129 == -1 )
      {
        v61 = *(_QWORD *)&v129[8];
        v62 = *(_QWORD *)&v129[16];
        if ( *(_QWORD *)&v129[24] )
        {
          v63 = 32LL * *(_QWORD *)&v129[24];
          v64 = 0;
          do
          {
            v28 = *(_QWORD *)(v62 + v64 + 8);
            if ( v28 )
              sub_140001660(*(_QWORD *)(v62 + v64 + 16), v28, 1);
            v64 += 32;
          }
          while ( v63 != v64 );
        }
        if ( v61 )
          sub_140001660(v62, 32 * v61, 8);
      }
      else
      {
        *(_OWORD *)v136 = *(_OWORD *)v129;
        *(_OWORD *)&v136[80] = *(_OWORD *)&v129[80];
        *(_OWORD *)&v136[64] = *(_OWORD *)&v129[64];
        *(_OWORD *)&v136[48] = *(_OWORD *)&v129[48];
        *(_OWORD *)&v136[32] = *(_OWORD *)&v129[32];
        *(_OWORD *)&v136[16] = *(_OWORD *)&v129[16];
        if ( *(_QWORD *)v129 != -1 )
          sub_14034ED40(v136);
      }
    }
LABEL_109:
    if ( !(_BYTE)v143 )
      return (_OWORD *)kill_codex_processes_until_clear(v134);
    v65 = sub_141471910(v29, v28, v30);
    v67 = sub_141491390(v65, v66, 3, 0, (__int64)&off_1417529F0);
    v123 = v68;
    v69 = -1;
    for ( i = v129; ; i = v81 )
    {
      v125 = v69;
      v124 = v4;
      v146 = 1;
      sub_1403FA730(i);
      v71 = *(_QWORD *)v129;
      if ( *(_QWORD *)v129 != -1 )
      {
        v87 = *(_OWORD *)&v129[32];
        v88 = *(_OWORD *)&v129[48];
        v89 = *(_OWORD *)&v129[64];
        *(_OWORD *)&v136[80] = *(_OWORD *)&v129[80];
        *(_OWORD *)&v136[64] = *(_OWORD *)&v129[64];
        *(_OWORD *)&v136[48] = *(_OWORD *)&v129[48];
        *(_OWORD *)&v136[32] = *(_OWORD *)&v129[32];
        *(_QWORD *)&v136[8] = *(_QWORD *)&v129[8];
        *(_OWORD *)&v136[16] = *(_OWORD *)&v129[16];
        v108 = *(_OWORD *)&v136[8];
        v109 = *(_QWORD *)&v129[24];
        v90 = v134;
        *(_OWORD *)(v134 + 80) = *(_OWORD *)&v129[80];
        *(_OWORD *)(v90 + 64) = v89;
        *(_OWORD *)(v90 + 48) = v88;
        *(_OWORD *)(v90 + 32) = v87;
        *(_QWORD *)(v90 + 24) = v109;
        *(_OWORD *)(v90 + 8) = v108;
        *(_QWORD *)v90 = v71;
LABEL_135:
        result = (_OWORD *)(v69 - 1);
        if ( (unsigned __int64)(v69 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return result;
        v91 = 1;
        v92 = v4;
        v93 = v69;
        return (_OWORD *)sub_140001660(v92, v93, v91);
      }
      *(_QWORD *)&v137 = *(_QWORD *)&v129[16];
      *((_QWORD *)&v137 + 1) = *(_QWORD *)&v129[16];
      *(_QWORD *)&v138 = *(_QWORD *)&v129[8];
      *((_QWORD *)&v138 + 1) = *(_QWORD *)&v129[16] + 32LL * *(_QWORD *)&v129[24];
      v125 = v69;
      v124 = v4;
      v146 = 1;
      sub_1402CBDD0((char **)&v136[8], (char **)&v137);
      v75 = *(_QWORD *)&v136[24];
      v118 = *(_OWORD *)&v136[8];
      *(_QWORD *)&v119 = *(_QWORD *)&v136[24];
      if ( !*(_QWORD *)&v136[24] )
      {
        *(_QWORD *)v134 = -1;
        if ( (_QWORD)v118 )
          sub_140001660(*((_QWORD *)&v118 + 1), 32 * v118, 8);
        goto LABEL_135;
      }
      v142 = v69;
      *((_QWORD *)&v143 + 1) = v4;
      v141 = v4;
      v147 = 1;
      v76 = sub_141471910(v73, v72, v74);
      if ( v76 == v67 )
      {
        v78 = *((_OWORD **)&v143 + 1);
        if ( v77 >= v123 )
          goto LABEL_137;
      }
      else
      {
        v56 = v76 < v67;
        v78 = *((_OWORD **)&v143 + 1);
        if ( !v56 )
        {
LABEL_137:
          v19 = *((_QWORD *)&v118 + 1);
          v142 = v69;
          v141 = v78;
          v147 = 1;
          sub_140328F40((unsigned __int64 *)&v108, *((__int64 *)&v118 + 1), *((_QWORD *)&v118 + 1) + 32 * v75);
          *(_QWORD *)&v143 = v69;
          v94 = *((_QWORD *)&v108 + 1);
          v95 = v109;
          v144 = 1;
          sub_140440300((unsigned int)v129, DWORD2(v108), v109, (unsigned int)&aCodeSwitchRoll[35], 3);
          *(_QWORD *)&v113 = *(_QWORD *)&v129[16];
          v112 = *(_OWORD *)v129;
          if ( (_QWORD)v143 == -1 )
          {
            *(_QWORD *)&v137 = 0;
            *((_QWORD *)&v137 + 1) = 1;
            *(_QWORD *)&v138 = 0;
          }
          else
          {
            *(_QWORD *)&v129[16] = v135;
            *(_OWORD *)v129 = v143;
            *(_QWORD *)&v137 = v129;
            *((_QWORD *)&v137 + 1) = sub_1400015F0;
            sub_14149C0F0(v136, &unk_14174D71A, &v137);
            if ( *(_QWORD *)v129 )
              sub_140001660(*(_QWORD *)&v129[8], *(_QWORD *)v129, 1);
            v137 = *(_OWORD *)v136;
            *(_QWORD *)&v138 = *(_QWORD *)&v136[16];
          }
          *(_QWORD *)v129 = &v112;
          *(_QWORD *)&v129[8] = sub_1400015F0;
          *(_QWORD *)&v129[16] = &v137;
          *(_QWORD *)&v129[24] = sub_1400015F0;
          sub_14149C0F0(v136, &unk_141752A08, v129);
          if ( (_QWORD)v137 )
            sub_140001660(*((_QWORD *)&v137 + 1), v137, 1);
          if ( (_QWORD)v112 )
            sub_140001660(*((_QWORD *)&v112 + 1), v112, 1);
          if ( v95 )
          {
            v96 = (_QWORD *)(v94 + 8);
            do
            {
              v97 = *(v96 - 1);
              if ( v97 )
                sub_140001660(*v96, v97, 1);
              v96 += 3;
              --v95;
            }
            while ( v95 );
          }
          if ( (_QWORD)v108 )
            sub_140001660(v94, 24 * v108, 8);
          result = *(_OWORD **)&v136[16];
          v98 = v134;
          *(_QWORD *)(v134 + 24) = *(_QWORD *)&v136[16];
          *(_OWORD *)(v98 + 8) = *(_OWORD *)v136;
          *(_QWORD *)v98 = 10;
          v99 = (_QWORD *)(v19 + 16);
          do
          {
            v100 = *(v99 - 1);
            if ( v100 )
              result = (_OWORD *)sub_140001660(*v99, v100, 1);
            v99 += 4;
            --v75;
          }
          while ( v75 );
          v25 = v118;
          if ( !(_QWORD)v118 )
            return result;
          goto LABEL_158;
        }
      }
      v142 = v69;
      v141 = v78;
      v147 = 1;
      sub_1403F7AA0(v136, *((_QWORD *)&v118 + 1), v75);
      if ( *(_QWORD *)v136 == -1 )
      {
        v79 = -1;
        v80 = *((_QWORD *)&v143 + 1);
        v4 = *((_OWORD **)&v143 + 1);
        if ( (unsigned __int64)(v69 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_121;
      }
      else
      {
        *(_QWORD *)&v143 = v69;
        *(_QWORD *)&v129[88] = *(_QWORD *)&v136[88];
        *(_OWORD *)&v129[72] = *(_OWORD *)&v136[72];
        *(_OWORD *)&v129[56] = *(_OWORD *)&v136[56];
        *(_OWORD *)&v129[40] = *(_OWORD *)&v136[40];
        *(_OWORD *)&v129[24] = *(_OWORD *)&v136[24];
        *(_OWORD *)&v129[8] = *(_OWORD *)&v136[8];
        *(_QWORD *)v129 = *(_QWORD *)v136;
        *(_QWORD *)&v137 = 0;
        *((_QWORD *)&v137 + 1) = 1;
        *(_QWORD *)&v138 = 0;
        *(_QWORD *)&v136[16] = 1610612768;
        *(_QWORD *)v136 = &v137;
        *(_QWORD *)&v136[8] = &off_141754110;
        if ( (unsigned __int8)sub_140B036A0(i, v136) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_1,
            55,
            (unsigned int)&v145,
            (unsigned int)&unk_14174DE40,
            (__int64)&off_1417541C8);
        v4 = *((_OWORD **)&v137 + 1);
        v79 = v137;
        v135 = v138;
        __SET_PAIR__((unsigned __int64)v141, v69, v143);
        v142 = v143;
        v147 = 1;
        sub_14034ED40(i);
        v80 = *((_QWORD *)&v143 + 1);
        if ( (unsigned __int64)(v69 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_121:
          sub_140001660(v80, v69, 1);
      }
      v142 = v79;
      v141 = v4;
      v147 = 1;
      sub_141487490(0, 300000000);
      v81 = i;
      v82 = v67;
      v83 = *((_QWORD *)&v118 + 1);
      v84 = v119;
      if ( (_QWORD)v119 )
      {
        v85 = (_QWORD *)(*((_QWORD *)&v118 + 1) + 16LL);
        do
        {
          v86 = *(v85 - 1);
          if ( v86 )
            sub_140001660(*v85, v86, 1);
          v85 += 4;
          --v84;
        }
        while ( v84 );
      }
      if ( (_QWORD)v118 )
        sub_140001660(v83, 32 * v118, 8);
      v69 = v79;
      v67 = v82;
    }
  }
  WakeByAddressSingle(&byte_141EC2408);
  if ( !(_BYTE)v143 )
    goto LABEL_42;
LABEL_25:
  sub_1403FD520(v129);
  result = *(_OWORD **)v129;
  *(_OWORD *)v136 = *(_OWORD *)&v129[8];
  *(_QWORD *)&v136[16] = *(_QWORD *)&v129[24];
  if ( *(_QWORD *)v129 != -1 )
  {
    v14 = *(_OWORD *)&v129[32];
    v15 = *(_OWORD *)&v129[48];
    v16 = *(_OWORD *)&v129[64];
    v17 = v134;
    *(_OWORD *)(v134 + 80) = *(_OWORD *)&v129[80];
    *(_OWORD *)(v17 + 64) = v16;
    *(_OWORD *)(v17 + 48) = v15;
    *(_OWORD *)(v17 + 32) = v14;
    *(_QWORD *)(v17 + 24) = *(_QWORD *)&v136[16];
    *(_OWORD *)(v17 + 8) = *(_OWORD *)v136;
    *(_QWORD *)v17 = result;
    return result;
  }
  v137 = *(_OWORD *)v136;
  v18 = *(_QWORD *)&v136[16];
  *(_QWORD *)&v138 = *(_QWORD *)&v136[16];
  v19 = *(_QWORD *)&v136[8];
  sub_1403289D0((unsigned __int64 *)v136, *(__int64 *)&v136[8], *(_QWORD *)&v136[8] + 32LL * *(_QWORD *)&v136[16]);
  sub_1403FCD20(v129, v136);
  if ( *(_DWORD *)v129 == -1 )
  {
    if ( v18 )
    {
      v26 = (_QWORD *)(v19 + 8);
      do
      {
        v27 = *(v26 - 1);
        if ( v27 )
          sub_140001660(*v26, v27, 1);
        v26 += 4;
        --v18;
      }
      while ( v18 );
    }
    if ( (_QWORD)v137 )
      sub_140001660(v19, 32 * v137, 8);
    goto LABEL_42;
  }
  result = (_OWORD *)v134;
  *(_OWORD *)(v134 + 80) = *(_OWORD *)&v129[80];
  result[4] = *(_OWORD *)&v129[64];
  v20 = *(_OWORD *)v129;
  v21 = *(_OWORD *)&v129[16];
  v22 = *(_OWORD *)&v129[32];
  result[3] = *(_OWORD *)&v129[48];
  result[2] = v22;
  result[1] = v21;
  *result = v20;
  if ( v18 )
  {
    v23 = (_QWORD *)(v19 + 8);
    do
    {
      v24 = *(v23 - 1);
      if ( v24 )
        result = (_OWORD *)sub_140001660(*v23, v24, 1);
      v23 += 4;
      --v18;
    }
    while ( v18 );
  }
  v25 = v137;
  if ( (_QWORD)v137 )
  {
LABEL_158:
    v93 = 32 * v25;
    v91 = 8;
    v92 = (_OWORD *)v19;
    return (_OWORD *)sub_140001660(v92, v93, v91);
  }
  return result;
}