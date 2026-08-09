// Pseudocode for export_session_markdown (EA: 0x140d5b000, size: 0x185b)
// Module: commands/sessions
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:把sessionId会话导出为Markdown到targetPath。副作用:写磁盘文件。归属:锚src\commands\sessions.rs。
// Tauri命令handler:把sessionId会话导出为Markdown到targetPath。副作用:写磁盘文件。归属:锚src\commands\sessions.rs。
char __fastcall export_session_markdown(char *a1, __int64 a2)
{
  char *v2; // r12
  char *v4; // rbx
  __int64 v5; // rax
  char *v6; // rdi
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
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // r9
  unsigned __int64 v27; // rdi
  int v28; // r13d
  __int64 v29; // rbx
  PVOID v30; // rcx
  char v31; // al
  unsigned __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int8 v36; // r14
  char *v37; // r15
  __int64 v38; // rcx
  PVOID v39; // rcx
  char v40; // al
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int128 v48; // xmm0
  __m128i v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  __m128i *v52; // r14
  unsigned __int8 v53; // bl
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // r15
  _BYTE *v56; // r10
  char v57; // cl
  char result; // al
  __int64 v59; // rsi
  int v60; // r14d
  unsigned int v61; // esi
  __int64 v62; // rbx
  _BYTE *v63; // rsi
  char *v64; // r14
  _QWORD *v65; // rdx
  __int64 v66; // rbx
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  _QWORD *v71; // r15
  char *v72; // rdi
  __int64 v73; // rdx
  __m128i v74; // xmm0
  __m128i *v75; // rax
  int v76; // r8d
  int v77; // edx
  __int64 v78; // rbx
  __m128i v79; // xmm0
  __m128i v80; // xmm0
  __m128i v81; // xmm0
  int v82; // r14d
  unsigned int v83; // esi
  __int64 v84; // r15
  unsigned __int64 v85; // r15
  _QWORD *v86; // rdi
  __int64 v87; // [rsp+20h] [rbp-60h]
  _BYTE v88[24]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v89; // [rsp+48h] [rbp-38h]
  _QWORD v90[3]; // [rsp+418h] [rbp+398h] BYREF
  char v91; // [rsp+430h] [rbp+3B0h]
  int v92; // [rsp+431h] [rbp+3B1h]
  __int16 v93; // [rsp+435h] [rbp+3B5h]
  char v94; // [rsp+437h] [rbp+3B7h]
  PVOID v95; // [rsp+438h] [rbp+3B8h]
  __m128i v96; // [rsp+440h] [rbp+3C0h]
  __int128 v97; // [rsp+450h] [rbp+3D0h]
  __m128i v98; // [rsp+460h] [rbp+3E0h]
  __int128 v99; // [rsp+470h] [rbp+3F0h]
  __int128 v100; // [rsp+480h] [rbp+400h]
  __int128 v101; // [rsp+490h] [rbp+410h]
  __m128i v102; // [rsp+4A0h] [rbp+420h]
  _QWORD *v103; // [rsp+4B0h] [rbp+430h]
  __m128i *v104; // [rsp+4B8h] [rbp+438h] BYREF
  __int64 v105; // [rsp+4C0h] [rbp+440h]
  __m128i v106; // [rsp+4C8h] [rbp+448h] BYREF
  _BYTE v107[24]; // [rsp+4D8h] [rbp+458h]
  __int128 v108; // [rsp+4F0h] [rbp+470h]
  __m128i v109; // [rsp+500h] [rbp+480h] BYREF
  __int128 v110; // [rsp+510h] [rbp+490h]
  __int128 v111; // [rsp+520h] [rbp+4A0h]
  __int128 v112; // [rsp+530h] [rbp+4B0h]
  __m128i v113; // [rsp+540h] [rbp+4C0h]
  _QWORD *v114; // [rsp+550h] [rbp+4D0h]
  char *v115; // [rsp+898h] [rbp+818h]
  _QWORD *v116; // [rsp+8A0h] [rbp+820h]
  __m128i v117; // [rsp+8A8h] [rbp+828h]
  __int64 v118; // [rsp+8B8h] [rbp+838h]
  __int64 v119; // [rsp+8C0h] [rbp+840h]
  _QWORD v120[2]; // [rsp+8C8h] [rbp+848h] BYREF
  unsigned __int8 v121; // [rsp+8D8h] [rbp+858h]
  int v122; // [rsp+8D9h] [rbp+859h]
  __int16 v123; // [rsp+8DDh] [rbp+85Dh]
  char v124; // [rsp+8DFh] [rbp+85Fh]
  unsigned __int64 v125; // [rsp+8E0h] [rbp+860h]
  __m128i v126; // [rsp+8E8h] [rbp+868h]
  __int128 v127; // [rsp+8F8h] [rbp+878h]
  __m128i v128; // [rsp+908h] [rbp+888h]
  __int64 v129; // [rsp+918h] [rbp+898h] BYREF
  char v130; // [rsp+920h] [rbp+8A0h]
  int v131; // [rsp+921h] [rbp+8A1h]
  __int16 v132; // [rsp+925h] [rbp+8A5h]
  char v133; // [rsp+927h] [rbp+8A7h]
  __m128i v134; // [rsp+928h] [rbp+8A8h]
  __int64 v135; // [rsp+938h] [rbp+8B8h]
  __m128i v136; // [rsp+940h] [rbp+8C0h] BYREF
  __int128 v137; // [rsp+950h] [rbp+8D0h]
  __m128i v138; // [rsp+960h] [rbp+8E0h]
  __int128 v139; // [rsp+970h] [rbp+8F0h]
  __int128 v140; // [rsp+980h] [rbp+900h]
  __int128 v141; // [rsp+990h] [rbp+910h]
  __m128i v142; // [rsp+9A0h] [rbp+920h]
  _QWORD *v143; // [rsp+9B0h] [rbp+930h]
  __m128i v144; // [rsp+9C0h] [rbp+940h] BYREF
  __int128 v145; // [rsp+9D0h] [rbp+950h]
  __m128i v146; // [rsp+9E0h] [rbp+960h]
  __int64 v147; // [rsp+9F8h] [rbp+978h]
  __m128i v148; // [rsp+A00h] [rbp+980h] BYREF
  __int128 v149; // [rsp+A10h] [rbp+990h]
  __m128i v150; // [rsp+A20h] [rbp+9A0h]
  __int128 v151; // [rsp+A30h] [rbp+9B0h]
  __int128 v152; // [rsp+A40h] [rbp+9C0h]
  __int128 v153; // [rsp+A50h] [rbp+9D0h]
  __m128i v154; // [rsp+A60h] [rbp+9E0h]
  _QWORD *v155; // [rsp+A70h] [rbp+9F0h]
  __m128i v156; // [rsp+A80h] [rbp+A00h] BYREF
  __int128 v157; // [rsp+A90h] [rbp+A10h]
  __m128i v158; // [rsp+AA0h] [rbp+A20h]
  __int128 v159; // [rsp+AB0h] [rbp+A30h]
  __int128 v160; // [rsp+AC0h] [rbp+A40h]
  __int128 v161; // [rsp+AD0h] [rbp+A50h]
  __m128i v162; // [rsp+AE0h] [rbp+A60h] BYREF
  _QWORD *v163; // [rsp+AF0h] [rbp+A70h]
  char *v164; // [rsp+B00h] [rbp+A80h]
  char *v165; // [rsp+B08h] [rbp+A88h]
  __m128i v166; // [rsp+B10h] [rbp+A90h] BYREF
  __int128 v167; // [rsp+B20h] [rbp+AA0h]
  __m128i v168; // [rsp+B30h] [rbp+AB0h]
  const __m128i *v169; // [rsp+B40h] [rbp+AC0h]
  _BYTE *v170; // [rsp+B48h] [rbp+AC8h]
  __int64 v171; // [rsp+B50h] [rbp+AD0h] BYREF
  __int64 v172; // [rsp+B58h] [rbp+AD8h]
  unsigned __int64 v173; // [rsp+B60h] [rbp+AE0h]
  char *v174; // [rsp+B68h] [rbp+AE8h]
  int v175; // [rsp+B74h] [rbp+AF4h]
  PVOID Address; // [rsp+B78h] [rbp+AF8h]
  __int64 v177; // [rsp+B80h] [rbp+B00h]
  _QWORD *v178; // [rsp+B88h] [rbp+B08h]
  _QWORD *v179; // [rsp+B90h] [rbp+B10h]
  char *v180; // [rsp+B98h] [rbp+B18h]
  __int64 v181; // [rsp+BA0h] [rbp+B20h]
  char *v182; // [rsp+BA8h] [rbp+B28h]
  _QWORD *v183; // [rsp+BB0h] [rbp+B30h]
  __int64 v184; // [rsp+BB8h] [rbp+B38h]
  _QWORD *v185; // [rsp+BC0h] [rbp+B40h]
  char v186; // [rsp+BCEh] [rbp+B4Eh]
  char v187; // [rsp+BCFh] [rbp+B4Fh] BYREF
  char *v188; // [rsp+BD0h] [rbp+B50h]
  __int64 v189; // [rsp+BD8h] [rbp+B58h]

  v189 = -2;
  v4 = a1;
  v5 = (unsigned __int8)a1[2000];
  v182 = a1;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(a1 + 2001) = 257;
      a1[2003] = 1;
      v6 = a1 + 1192;
      sub_14172B820(a1 + 1192, a1 + 392, 800);
      switch ( v4[1984] )
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
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v6 = a1 + 1192;
      switch ( a1[1984] )
      {
        case 0:
LABEL_4:
          v2 = v4 + 1712;
          *(_QWORD *)&v107[16] = 0;
          v104 = (__m128i *)aExportSessionM;
          v105 = 23;
          v106.m128i_i64[0] = (__int64)aRepo_0;
          v106.m128i_i64[1] = 4;
          v174 = v6;
          *(_QWORD *)v107 = v6;
          *(_QWORD *)&v107[8] = v4 + 1712;
          v7 = sub_140029DD0((volatile void *)(*((_QWORD *)v4 + 213) + 16LL));
          v185 = v4 + 1712;
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)v88, (__int64)&v104, (__int64)&v106);
          v8 = v88[0];
          if ( v88[0] != 0xFF )
            goto LABEL_25;
          v7 = *(_QWORD *)&v88[8];
LABEL_5:
          *(_QWORD *)&v107[16] = 0;
          v104 = (__m128i *)aExportSessionM;
          v105 = 23;
          v106.m128i_i64[0] = (__int64)aSessionid_0;
          v106.m128i_i64[1] = 9;
          *(_QWORD *)v107 = v174;
          *(_QWORD *)&v107[8] = v2;
          sub_140955980(v88, &v104);
          v8 = v88[0];
          if ( v88[0] == 0xFF )
          {
            v184 = *(_QWORD *)&v88[8];
            v188 = *(char **)&v88[16];
            v9 = v89;
            *(_QWORD *)&v107[16] = 0;
            v104 = (__m128i *)aExportSessionM;
            v105 = 23;
            v106.m128i_i64[0] = (__int64)aTargetpath_1;
            v106.m128i_i64[1] = 10;
            *(_QWORD *)v107 = v174;
            *(_QWORD *)&v107[8] = v2;
            sub_140955980(v88, &v104);
            v8 = v88[0];
            if ( v88[0] == 0xFF )
            {
              v47 = v89;
              v48 = *(_OWORD *)&v88[8];
              v4 = v182;
              *((_QWORD *)v182 + 223) = v7;
              *((_QWORD *)v4 + 217) = v184;
              a1 = v188;
              *((_QWORD *)v4 + 218) = v188;
              *((_QWORD *)v4 + 219) = v9;
              *((_OWORD *)v4 + 110) = v48;
              *((_QWORD *)v4 + 222) = v47;
              v4[1808] = 0;
              v14 = (const __m128i *)(v4 + 1816);
              *((_QWORD *)v4 + 227) = *((_QWORD *)v4 + 217);
              *((_QWORD *)v4 + 228) = *((_QWORD *)v4 + 218);
              *((_QWORD *)v4 + 229) = *((_QWORD *)v4 + 219);
              *((_QWORD *)v4 + 230) = *((_QWORD *)v4 + 220);
              *((_QWORD *)v4 + 231) = *((_QWORD *)v4 + 221);
              *((_QWORD *)v4 + 232) = *((_QWORD *)v4 + 222);
              *(_OWORD *)(v4 + 1864) = *(_OWORD *)(v4 + 1784);
              *(_OWORD *)(v4 + 1880) = *(_OWORD *)(v4 + 1800);
              v13 = v4 + 1976;
              v4[1976] = 0;
              *(_OWORD *)(v4 + 1960) = *(_OWORD *)(v4 + 1880);
              v49 = _mm_loadu_si128((const __m128i *)(v4 + 1816));
              v50 = *(_OWORD *)(v4 + 1832);
              v51 = *(_OWORD *)(v4 + 1848);
              *(_OWORD *)(v4 + 1944) = *(_OWORD *)(v4 + 1864);
              *(_OWORD *)(v4 + 1928) = v51;
              *(_OWORD *)(v4 + 1912) = v50;
              *(__m128i *)(v4 + 1896) = v49;
              switch ( v4[1968] )
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
            v10 = ((unsigned __int64)((v88[7] << 16) | (unsigned int)*(unsigned __int16 *)&v88[5]) << 32)
                | *(unsigned int *)&v88[1];
            v11 = _mm_loadu_si128((const __m128i *)&v88[8]);
            v12 = v89;
            if ( v184 )
              sub_140001660(v188, v184, 1);
          }
          else
          {
LABEL_25:
            v10 = ((unsigned __int64)((v88[7] << 16) | (unsigned int)*(unsigned __int16 *)&v88[5]) << 32)
                | *(unsigned int *)&v88[1];
            v11 = _mm_loadu_si128((const __m128i *)&v88[8]);
            v12 = v89;
          }
          sub_140CAB140(v174);
          if ( *v185 == -1 )
          {
            v36 = 1;
            v37 = v182;
            goto LABEL_83;
          }
          v183 = v182 + 1720;
          v33 = *((_QWORD *)v182 + 215);
          v188 = *((char **)v182 + 216);
          v184 = 0;
          v181 = v33;
          while ( v188 != (char *)v184 )
          {
            ++v184;
            v34 = v33 + 96;
            sub_140401FB0();
            v33 = v34;
          }
          v35 = *v185;
          v36 = 1;
          v37 = v182;
          if ( !*v185 )
            goto LABEL_83;
          goto LABEL_82;
        case 1:
LABEL_111:
          v174 = v6;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_110:
          v174 = v6;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_9;
      }
  }
LABEL_9:
  v174 = v6;
  v13 = v4 + 1976;
  v14 = (const __m128i *)(v4 + 1816);
  switch ( v4[1976] )
  {
    case 0:
      *(_OWORD *)(v4 + 1960) = *(_OWORD *)(v4 + 1880);
      v15 = _mm_loadu_si128(v14);
      v16 = *(_OWORD *)(v4 + 1832);
      v17 = *(_OWORD *)(v4 + 1848);
      *(_OWORD *)(v4 + 1944) = *(_OWORD *)(v4 + 1864);
      *(_OWORD *)(v4 + 1928) = v17;
      *(_OWORD *)(v4 + 1912) = v16;
      *(__m128i *)(v4 + 1896) = v15;
      switch ( v4[1968] )
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
      v165 = v4 + 1976;
      v164 = v4 + 1816;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v165 = v4 + 1976;
      v164 = v4 + 1816;
      sub_14176EC20(&off_1418851A0);
    case 3:
      switch ( v4[1968] )
      {
        case 0:
LABEL_12:
          v169 = v14;
          v170 = v13;
          v18 = *((volatile void **)v4 + 243);
          *((_QWORD *)v4 + 244) = v18;
          v188 = *((char **)v4 + 237);
          v183 = *((_QWORD **)v4 + 238);
          *(_WORD *)(v4 + 1969) = 257;
          v185 = *((_QWORD **)v4 + 240);
          v19 = _mm_loadu_si128((const __m128i *)(v4 + 1912));
          v181 = *((_QWORD *)v4 + 241);
          v147 = *((_QWORD *)v4 + 242);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v18, 1, 0) )
          {
            v180 = v188;
            v179 = v183;
            v178 = v185;
            v177 = v181;
            sub_14176CDB0(v18);
          }
          Address = (PVOID)v18;
          v20 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v180 = v188;
            v179 = v183;
            v178 = v185;
            v177 = v181;
            v21 = sub_14176DA50(a1);
            LOBYTE(v21) = v21 ^ 1;
          }
          else
          {
            v21 = 0;
          }
          v22 = (char *)Address;
          v23 = *((_BYTE *)Address + 1);
          v175 = v21;
          if ( !v23 )
            goto LABEL_35;
          v166.m128i_i64[0] = 0;
          v166.m128i_i64[1] = 1;
          *(_QWORD *)&v167 = 0;
          v106.m128i_i64[0] = 1610612768;
          v104 = &v166;
          v105 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v104) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v187,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v22 = (char *)v166.m128i_i64[1];
          v184 = v166.m128i_i64[0];
          LODWORD(v27) = (unsigned __int8)v167;
          v28 = BYTE7(v167);
          v2 = (char *)*(unsigned __int16 *)((char *)&v167 + 5);
          v29 = *(unsigned int *)((char *)&v167 + 1);
          if ( !(_BYTE)v175 )
          {
            if ( 2 * *v20 )
            {
              v180 = v188;
              v179 = v183;
              v178 = v185;
              v177 = v181;
              if ( !(unsigned __int8)sub_14176DA50(v24) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v30 = Address;
          v31 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v31 == 2 )
          {
            v180 = v188;
            v179 = v183;
            v178 = v185;
            v177 = v181;
            WakeByAddressSingle(v30);
          }
          if ( v184 != -1 )
          {
            v32 = ((unsigned __int64)((v28 << 16) | (unsigned int)v2) << 32) | v29;
            goto LABEL_63;
          }
          v175 = v27;
LABEL_35:
          Address = v22;
          sub_140A80280(v88, v22 + 8);
          if ( (v175 & 1) == 0 )
          {
            if ( 2 * *v20 )
            {
              v180 = v188;
              v179 = v183;
              v178 = v185;
              v177 = v181;
              if ( !(unsigned __int8)sub_14176DA50(v38) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v39 = Address;
          v40 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v40 == 2 )
          {
            v180 = v188;
            v179 = v183;
            v178 = v185;
            v177 = v181;
            WakeByAddressSingle(v39);
          }
          *(_WORD *)(v182 + 1969) = 0;
          sub_14172B820(&v104, v88, 992);
          v115 = v188;
          v116 = v183;
          v117 = v19;
          v118 = v181;
          v119 = v147;
          v41 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v186 = 1;
            v86 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v41 = v86;
          }
          if ( *((_DWORD *)v41 + 4) == 2 )
          {
            v42 = 704;
            if ( *(_BYTE *)v41 )
              v42 = 472;
            v43 = v41[1] + v42;
            v186 = 0;
            v44 = sub_14085DED0(v43, v41, &v104, &off_1417EBF48);
          }
          else
          {
            v45 = 704;
            if ( *((_BYTE *)v41 + 64) )
              v45 = 472;
            v46 = v41[9] + v45;
            v186 = 0;
            v44 = sub_14085DED0(v46, v41 + 8, &v104, &off_1417EBF30);
          }
          v4 = v182;
          *((_QWORD *)v182 + 245) = v44;
LABEL_51:
          Address = v4 + 1960;
          sub_140503DF0(&v104, v4 + 1960, a2);
          v52 = v104;
          if ( v104 == (__m128i *)-3LL )
          {
            v56 = v182;
            v182[1968] = 3;
            goto LABEL_55;
          }
          if ( (_DWORD)v104 == -2 )
          {
            v184 = v105;
            v53 = v106.m128i_i8[0];
            v54 = ((unsigned __int64)((v106.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v106.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v106.m128i_u32 + 1);
            v55 = 0x800000000000000CuLL;
            v27 = v106.m128i_u64[1];
          }
          else
          {
            v55 = v105;
            v184 = v106.m128i_i64[0];
            v53 = v106.m128i_u8[8];
            v54 = ((unsigned __int64)((v106.m128i_u8[15] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v106.m128i_u16[6] + 1)) << 32)
                | *(unsigned int *)((char *)&v106.m128i_u32[2] + 1);
            v27 = *(_QWORD *)v107;
            v166 = *(__m128i *)&v107[8];
            v167 = v108;
            v168 = _mm_loadu_si128(&v109);
            v2 = (char *)v110;
          }
          v144 = _mm_load_si128(&v166);
          v145 = v167;
          v146 = v168;
          v59 = *(_QWORD *)Address;
          v180 = v188;
          v179 = v183;
          v178 = v185;
          v177 = v181;
          if ( (unsigned __int8)sub_141398090(v59) )
          {
            v180 = v188;
            v179 = v183;
            v178 = v185;
            v177 = v181;
            sub_14139A2E0(v59);
          }
          if ( (_DWORD)v52 != -1 )
          {
            if ( (_DWORD)v52 == -2 )
            {
              v104 = (__m128i *)v55;
              v105 = v184;
              v106.m128i_i8[0] = v53;
              *(__int32 *)((char *)v106.m128i_i32 + 1) = v54;
              v106.m128i_i8[7] = BYTE6(v54);
              *(__int16 *)((char *)&v106.m128i_i16[2] + 1) = WORD2(v54);
              v106.m128i_i64[1] = v27;
              *(__m128i *)v107 = _mm_load_si128(&v144);
              v171 = 0;
              v172 = 1;
              v173 = 0;
              *(_QWORD *)&v167 = 1610612768;
              v166.m128i_i64[0] = (__int64)&v171;
              v166.m128i_i64[1] = (__int64)&off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v104, &v166) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v187,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v184 = v171;
              v22 = (char *)v172;
              LOBYTE(v27) = v173;
              v60 = HIBYTE(v173);
              v61 = *(unsigned __int16 *)((char *)&v173 + 5);
              v62 = *(unsigned int *)((char *)&v173 + 1);
              v180 = v188;
              v179 = v183;
              v178 = v185;
              v177 = v181;
              sub_140CAB2C0(&v104);
              v32 = ((unsigned __int64)((v60 << 16) | v61) << 32) | v62;
LABEL_63:
              v63 = v182;
              v64 = v188;
              v65 = v185;
              if ( ((v185 != nullptr) & (unsigned __int8)v182[1969]) == 0 )
              {
LABEL_65:
                v63[1969] = 0;
                if ( ((v64 != nullptr) & v63[1970]) != 0 )
                  sub_140001660(v183, v64, 1);
                v63[1970] = 0;
                v163 = v155;
                v162 = v154;
                v161 = v153;
                v160 = v152;
                v159 = v151;
                v158 = v150;
                v157 = v149;
                v156 = v148;
                v63[1968] = 1;
                v136 = v156;
                v137 = v157;
                v138 = v158;
                v139 = v159;
                v140 = v160;
                v141 = v161;
                v142 = _mm_load_si128(&v162);
                v143 = v163;
LABEL_68:
                v66 = v32 << 8;
                v12 = v66 | (unsigned __int8)v27;
                if ( v66 < 0 )
                {
                  v67 = 0;
                  goto LABEL_70;
                }
                if ( v12 )
                {
                  nullsub_1(v30, v65, v25, v26, v87);
                  v67 = 1;
                  v68 = sub_140001650(v12, 1);
                  if ( !v68 )
                  {
LABEL_70:
                    v188 = v22;
                    sub_14176E54B(v67, v12);
                  }
                  v10 = v68;
                  sub_14172B820(v68, v22, v12);
                  v69 = v184;
                  if ( !v184 )
                    goto LABEL_75;
                }
                else
                {
                  v10 = 1;
                  v69 = v184;
                  if ( !v184 )
                    goto LABEL_75;
                }
                sub_140001660(v22, v69, 1);
LABEL_75:
                v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)v10);
LABEL_76:
                v36 = 1;
                v8 = 3;
                goto LABEL_77;
              }
LABEL_64:
              sub_140001660(v181, v65, 1);
              goto LABEL_65;
            }
            v104 = v52;
            v105 = v55;
            v106.m128i_i64[0] = v184;
            v106.m128i_i8[8] = v53;
            *(__int32 *)((char *)&v106.m128i_i32[2] + 1) = v54;
            v106.m128i_i8[15] = BYTE6(v54);
            *(__int16 *)((char *)&v106.m128i_i16[6] + 1) = WORD2(v54);
            *(_QWORD *)v107 = v27;
            *(__m128i *)&v107[8] = _mm_load_si128(&v144);
            v108 = v145;
            v109 = v146;
            *(_QWORD *)&v110 = v2;
            v171 = 0;
            v172 = 1;
            v173 = 0;
            *(_QWORD *)&v167 = 1610612768;
            v166.m128i_i64[0] = (__int64)&v171;
            v166.m128i_i64[1] = (__int64)&off_141891B48;
            if ( (unsigned __int8)sub_1405060F0(&v104, &v166) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v187,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v184 = v171;
            v53 = v172;
            v82 = HIBYTE(v172);
            v83 = *(unsigned __int16 *)((char *)&v172 + 5);
            v84 = *(unsigned int *)((char *)&v172 + 1);
            v27 = v173;
            v180 = v188;
            v179 = v183;
            v178 = v185;
            v177 = v181;
            sub_140CAC460(&v104);
            v85 = ((unsigned __int64)((v82 << 16) | v83) << 32) | v84;
            v64 = v188;
            v65 = v185;
LABEL_96:
            v22 = (char *)(v53 | (v85 << 8));
            v32 = v27 >> 8;
            v63 = v182;
            if ( ((v65 != nullptr) & (unsigned __int8)v182[1969]) == 0 )
              goto LABEL_65;
            goto LABEL_64;
          }
          if ( v55 == -1 )
          {
            v64 = v188;
            v65 = v185;
            v85 = v54;
            goto LABEL_96;
          }
          v74 = _mm_load_si128(&v144);
          v128 = v146;
          v127 = v145;
          v126 = v74;
          v120[0] = v55;
          v120[1] = v184;
          v121 = v53;
          v122 = v54;
          v124 = BYTE6(v54);
          v123 = WORD2(v54);
          v125 = v27;
          v180 = v188;
          v179 = v183;
          v178 = v185;
          v177 = v181;
          sub_1404CDC40(&v104, v120);
          v75 = v104;
          v184 = v105;
          v22 = (char *)v106.m128i_i64[0];
          LOBYTE(v27) = v106.m128i_i8[8];
          v76 = v106.m128i_u8[15];
          v77 = *(unsigned __int16 *)((char *)&v106.m128i_u16[6] + 1);
          v78 = *(unsigned int *)((char *)&v106.m128i_u32[2] + 1);
          v30 = *(PVOID *)v107;
          v148 = *(__m128i *)&v107[8];
          v149 = v108;
          v150 = v109;
          v151 = v110;
          v152 = v111;
          v153 = v112;
          v154 = v113;
          v155 = v114;
          v56 = v182;
          *(_WORD *)(v182 + 1969) = 0;
          v26 = v155;
          v163 = v155;
          v162 = v154;
          v161 = v153;
          v160 = v152;
          v79 = _mm_load_si128(&v148);
          v159 = v151;
          v158 = v150;
          v157 = v149;
          v156 = v79;
          v56[1968] = 1;
          if ( v75 == (__m128i *)-2LL )
          {
LABEL_55:
            v56[1976] = 3;
            v56[1984] = 3;
            v57 = 3;
            result = 1;
            goto LABEL_84;
          }
          v25 = (unsigned int)(v76 << 16);
          v32 = ((unsigned __int64)((unsigned int)v25 | v77) << 32) | v78;
          v65 = v163;
          v143 = v163;
          v142 = v162;
          v141 = v161;
          v140 = v160;
          v80 = _mm_load_si128(&v156);
          v139 = v159;
          v138 = v158;
          v137 = v157;
          v136 = v80;
          if ( v75 == (__m128i *)-1LL )
            goto LABEL_68;
          v103 = v143;
          v102 = v142;
          v101 = v141;
          v100 = v140;
          v81 = _mm_load_si128(&v136);
          v99 = v139;
          v98 = v138;
          v97 = v137;
          v96 = v81;
          v90[0] = v75;
          v90[1] = v184;
          v90[2] = v22;
          v91 = v27;
          v92 = v32;
          v93 = WORD2(v32);
          v94 = BYTE6(v32);
          v95 = v30;
          sub_14050A2B0(&v104, v90);
          v10 = ((unsigned __int64)((HIBYTE(v105) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v105 + 5)) << 32)
              | *(unsigned int *)((char *)&v105 + 1);
          v8 = v105;
          v11 = _mm_loadu_si128(&v106);
          v12 = *(_QWORD *)v107;
          if ( v104 != (__m128i *)-1LL )
          {
            HIBYTE(v105) = (((unsigned __int64)((HIBYTE(v105) << 16)
                                              | (unsigned int)*(unsigned __int16 *)((char *)&v105 + 5)) << 32)
                          | *(unsigned int *)((char *)&v105 + 1)) >> 48;
            *(_WORD *)((char *)&v105 + 5) = WORD2(v10);
            *(_DWORD *)((char *)&v105 + 1) = v10;
            v106 = v11;
            v148.m128i_i64[0] = 0;
            v148.m128i_i64[1] = 1;
            *(_QWORD *)&v149 = 0;
            *(_QWORD *)&v88[16] = 1610612768;
            *(_QWORD *)v88 = &v148;
            *(_QWORD *)&v88[8] = &off_141891B48;
            if ( (unsigned __int8)sub_1412DDF00(&v104, v88) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v187,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v11 = _mm_load_si128(&v148);
            v12 = v149;
            sub_140CAB2C0(&v104);
            goto LABEL_76;
          }
          v36 = 0;
LABEL_77:
          *v170 = 1;
          sub_140CAB140(v174);
          v37 = v182;
          if ( *((_QWORD *)v182 + 214) != -1 )
          {
            v183 = v182 + 1720;
            v70 = *((_QWORD **)v182 + 215);
            v188 = *((char **)v182 + 216);
            v184 = 0;
            v185 = v70;
            while ( v188 != (char *)v184 )
            {
              ++v184;
              v71 = v70 + 12;
              sub_140401FB0();
              v70 = v71;
            }
            v37 = v182;
            v35 = *((_QWORD *)v182 + 214);
            if ( v35 )
LABEL_82:
              sub_140001660(*v183, 96 * v35, 8);
          }
LABEL_83:
          v37[1984] = 1;
          sub_140C9AEA0(v174);
          v131 = v10;
          v133 = BYTE6(v10);
          v132 = WORD2(v10);
          v135 = v12;
          v130 = v8;
          v134 = v11;
          v129 = v36;
          v72 = v182;
          v182[2003] = 0;
          sub_14172B820(&v104, v72, 360);
          v72[2002] = 0;
          v73 = *((_QWORD *)v72 + 48);
          v72[2001] = 0;
          *(_QWORD *)&v88[16] = *((_QWORD *)v72 + 47);
          *(__m128i *)v88 = _mm_loadu_si128((const __m128i *)(v72 + 360));
          sub_140AFFC30(
            (__int64)&v104,
            v73,
            (__int64)&v129,
            (__int128 *)v88,
            *((_DWORD *)v72 + 498),
            *((_DWORD *)v72 + 499));
          v57 = 1;
          result = 0;
          v56 = v182;
LABEL_84:
          v56[2000] = v57;
          return result;
        case 1:
LABEL_113:
          v169 = v14;
          JUMPOUT(0x140D5C80BLL);
        case 2:
LABEL_112:
          v169 = v14;
          v170 = v13;
          sub_14176EC20(&off_141888B18);
        case 3:
LABEL_50:
          v169 = v14;
          v170 = v13;
          goto LABEL_51;
      }
  }
}
