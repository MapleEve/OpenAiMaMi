// Pseudocode for get_relay_provider_quota (EA: 0x140d85690, size: 0x12f0)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 get_relay_provider_quota 的 handler：按入参 providerId 查询 relay provider 额度/quota。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs（内联 core\relay\manager.rs）。
// Tauri 命令 get_relay_provider_quota 的 handler：按入参 providerId 查询 relay provider 额度/quota。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs（内联 core\relay\manager.rs）。
char __fastcall sub_140D85690(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 *v12; // r15
  _BYTE *v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r10
  _BYTE *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // r12
  __int64 v24; // r15
  __int128 v25; // rdi
  _BYTE *v26; // rcx
  _BYTE *v27; // rbx
  __int64 v28; // rax
  unsigned __int8 v29; // bl
  __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int64 v39; // rsi
  _BYTE *v40; // r15
  __m128i v41; // xmm6
  _BYTE *v42; // rdi
  __int64 v43; // rdx
  _BYTE *v44; // r14
  unsigned __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rbx
  char v53; // cl
  char result; // al
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 *v58; // rcx
  __int64 *v59; // r13
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // [rsp+20h] [rbp-60h]
  _BYTE v63[176]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v64[22]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v65; // [rsp+198h] [rbp+118h] BYREF
  __int128 v66; // [rsp+1A0h] [rbp+120h]
  _QWORD v67[2]; // [rsp+248h] [rbp+1C8h] BYREF
  __int128 v68; // [rsp+258h] [rbp+1D8h]
  __int128 v69; // [rsp+268h] [rbp+1E8h]
  __int128 v70; // [rsp+278h] [rbp+1F8h]
  __int128 v71; // [rsp+288h] [rbp+208h]
  __int128 v72; // [rsp+298h] [rbp+218h]
  __int64 v73; // [rsp+2A8h] [rbp+228h]
  __m256i v74; // [rsp+2B0h] [rbp+230h]
  __m256i v75; // [rsp+2D0h] [rbp+250h]
  __m256i v76; // [rsp+2F0h] [rbp+270h]
  __m256i v77; // [rsp+310h] [rbp+290h]
  _BYTE v78[40]; // [rsp+330h] [rbp+2B0h] BYREF
  char v79[184]; // [rsp+358h] [rbp+2D8h] BYREF
  __int128 v80; // [rsp+410h] [rbp+390h]
  __int128 v81; // [rsp+420h] [rbp+3A0h]
  __int128 v82; // [rsp+430h] [rbp+3B0h]
  __int128 v83; // [rsp+440h] [rbp+3C0h]
  __int128 v84; // [rsp+450h] [rbp+3D0h]
  __int64 v85; // [rsp+460h] [rbp+3E0h]
  __int128 v86; // [rsp+470h] [rbp+3F0h]
  __int128 v87; // [rsp+480h] [rbp+400h]
  __int128 v88; // [rsp+490h] [rbp+410h]
  __int128 v89; // [rsp+4A0h] [rbp+420h]
  __int128 v90; // [rsp+4B0h] [rbp+430h]
  __int64 v91; // [rsp+4C0h] [rbp+440h]
  _BYTE v92[96]; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v93; // [rsp+530h] [rbp+4B0h]
  __int128 v94; // [rsp+540h] [rbp+4C0h]
  __int128 v95; // [rsp+550h] [rbp+4D0h]
  __int128 v96; // [rsp+560h] [rbp+4E0h]
  __int128 v97; // [rsp+570h] [rbp+4F0h]
  __int128 v98; // [rsp+580h] [rbp+500h]
  __int128 v99; // [rsp+590h] [rbp+510h]
  __int64 v100; // [rsp+5A0h] [rbp+520h]
  _QWORD v101[2]; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v102; // [rsp+5C0h] [rbp+540h]
  __int128 v103; // [rsp+5D0h] [rbp+550h]
  __int128 v104; // [rsp+5E0h] [rbp+560h]
  __int128 v105; // [rsp+5F0h] [rbp+570h]
  __int128 v106; // [rsp+600h] [rbp+580h]
  __int64 v107; // [rsp+610h] [rbp+590h]
  __m256i v108; // [rsp+618h] [rbp+598h]
  __int64 v109; // [rsp+640h] [rbp+5C0h] BYREF
  char v110; // [rsp+648h] [rbp+5C8h]
  int v111; // [rsp+649h] [rbp+5C9h]
  __int16 v112; // [rsp+64Dh] [rbp+5CDh]
  char v113; // [rsp+64Fh] [rbp+5CFh]
  __int64 v114; // [rsp+650h] [rbp+5D0h]
  __int128 v115; // [rsp+658h] [rbp+5D8h]
  const char *v116; // [rsp+668h] [rbp+5E8h] BYREF
  _BYTE v117[88]; // [rsp+670h] [rbp+5F0h] BYREF
  __int64 v118; // [rsp+6C8h] [rbp+648h]
  __m256i v119; // [rsp+6D0h] [rbp+650h]
  __int128 v120; // [rsp+6F0h] [rbp+670h]
  __int128 v121; // [rsp+700h] [rbp+680h]
  __int128 v122; // [rsp+710h] [rbp+690h]
  __int128 v123; // [rsp+720h] [rbp+6A0h]
  __int128 v124; // [rsp+730h] [rbp+6B0h]
  __int128 v125; // [rsp+740h] [rbp+6C0h]
  __int128 v126; // [rsp+7D0h] [rbp+750h]
  __int128 v127; // [rsp+7E0h] [rbp+760h]
  __int128 v128; // [rsp+7F0h] [rbp+770h]
  __int128 v129; // [rsp+800h] [rbp+780h]
  __int128 v130; // [rsp+810h] [rbp+790h]
  __int64 v131; // [rsp+820h] [rbp+7A0h]
  __int128 v132; // [rsp+830h] [rbp+7B0h] BYREF
  __int128 v133; // [rsp+840h] [rbp+7C0h]
  __int128 v134; // [rsp+850h] [rbp+7D0h]
  __int128 v135; // [rsp+860h] [rbp+7E0h]
  __int128 v136; // [rsp+870h] [rbp+7F0h]
  __int64 v137; // [rsp+880h] [rbp+800h]
  __int64 v138; // [rsp+888h] [rbp+808h]
  __int64 v139; // [rsp+890h] [rbp+810h]
  __int64 v140; // [rsp+898h] [rbp+818h]
  __int64 v141; // [rsp+8A0h] [rbp+820h]
  __int64 v142; // [rsp+8A8h] [rbp+828h]
  _BYTE *v143; // [rsp+8B0h] [rbp+830h]
  _BYTE *v144; // [rsp+8B8h] [rbp+838h]
  _QWORD *v145; // [rsp+8C0h] [rbp+840h]
  _BYTE *v146; // [rsp+8C8h] [rbp+848h]
  __int64 *v147; // [rsp+8D0h] [rbp+850h]
  char v148; // [rsp+8DFh] [rbp+85Fh] BYREF
  _BYTE *v149; // [rsp+8E0h] [rbp+860h]
  __int64 v150; // [rsp+8E8h] [rbp+868h]
  __int64 v151; // [rsp+8F0h] [rbp+870h]
  __int64 v152; // [rsp+8F8h] [rbp+878h]

  v152 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 11024);
  v151 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 11025) = 257;
      *(_BYTE *)(a1 + 11027) = 1;
      v5 = a1 + 5704;
      sub_14172B820(a1 + 5704, a1 + 392, 5312);
      switch ( *(_BYTE *)(v3 + 11008) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_71;
        case 2:
          goto LABEL_70;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 5704;
      switch ( *(_BYTE *)(a1 + 11008) )
      {
        case 0:
LABEL_4:
          v6 = v3 + 6224;
          v116 = aGetRelayProvid;
          *(_QWORD *)v117 = 24;
          *(_QWORD *)&v117[8] = aManager_1;
          *(_QWORD *)&v117[16] = 7;
          v150 = v5;
          *(_QWORD *)&v117[24] = v5;
          *(_OWORD *)&v117[32] = (unsigned __int64)(v3 + 6224);
          v7 = sub_14002B2A0((_QWORD *)(*(_QWORD *)(v3 + 6216) + 16LL));
          v147 = (__int64 *)(v3 + 6224);
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)v78, (__int64)&v116, (__int64)&v117[8]);
          v8 = v78[0];
          if ( v78[0] == 0xFF )
          {
            v7 = *(_QWORD *)&v78[8];
LABEL_5:
            v116 = aGetRelayProvid;
            *(_QWORD *)v117 = 24;
            *(_QWORD *)&v117[8] = aProviderid_2;
            *(_QWORD *)&v117[16] = 10;
            *(_QWORD *)&v117[24] = v150;
            *(_OWORD *)&v117[32] = v6;
            sub_140955980(v78, &v116);
            v8 = v78[0];
            if ( v78[0] == 0xFF )
            {
              v9 = *(_QWORD *)&v78[24];
              v3 = v151;
              v10 = v151 + 6248;
              v11 = *(_OWORD *)&v78[8];
              *(_QWORD *)(v151 + 6272) = v7;
              *(_OWORD *)(v3 + 6248) = v11;
              *(_QWORD *)(v3 + 6264) = v9;
              *(_BYTE *)(v3 + 7824) = 0;
              v12 = (__int64 *)(v3 + 7832);
              sub_14172B820(v3 + 7832, v10, 1584);
              v13 = (_BYTE *)(v3 + 11000);
              *(_BYTE *)(v3 + 11000) = 0;
              v5 = v150;
LABEL_8:
              v14 = v3 + 9416;
              sub_14172B820(v3 + 9416, v12, 1584);
              switch ( *(_BYTE *)(v3 + 10992) )
              {
                case 0:
                  goto LABEL_10;
                case 1:
                  goto LABEL_73;
                case 2:
                  goto LABEL_72;
                case 3:
                  goto LABEL_11;
              }
            }
          }
          v23 = ((unsigned __int64)((v78[7] << 16) | (unsigned int)*(unsigned __int16 *)&v78[5]) << 32)
              | *(unsigned int *)&v78[1];
          v24 = *(_QWORD *)&v78[8];
          v25 = *(_OWORD *)&v78[16];
          sub_140CAB140(v150);
          if ( *v147 == -1 )
          {
            v29 = 1;
            v30 = v151;
            goto LABEL_61;
          }
          v145 = (_QWORD *)(v151 + 6232);
          v26 = *(_BYTE **)(v151 + 6232);
          v146 = *(_BYTE **)(v151 + 6240);
          v149 = nullptr;
          v144 = v26;
          while ( v146 != v149 )
          {
            ++v149;
            v27 = v26 + 96;
            sub_140401FB0();
            v26 = v27;
          }
          v28 = *v147;
          v29 = 1;
          v30 = v151;
          if ( !*v147 )
            goto LABEL_61;
          goto LABEL_60;
        case 1:
LABEL_71:
          v150 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_70:
          v150 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v13 = (_BYTE *)(v3 + 11000);
  v12 = (__int64 *)(v3 + 7832);
  switch ( *(_BYTE *)(v3 + 11000) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v150 = v5;
      v139 = v3 + 11000;
      v138 = v3 + 7832;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v150 = v5;
      v139 = v3 + 11000;
      v138 = v3 + 7832;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v14 = v3 + 9416;
      switch ( *(_BYTE *)(v3 + 10992) )
      {
        case 0:
LABEL_10:
          v15 = *(_QWORD *)(v3 + 9440);
          *(_QWORD *)(v3 + 9448) = v15;
          *(_OWORD *)(v3 + 9456) = *(_OWORD *)v14;
          v16 = *(_QWORD *)(v14 + 16);
          *(_QWORD *)(v3 + 9472) = v16;
          v17 = *(_QWORD *)(v3 + 9464);
          v18 = v3 + 9480;
          *(_QWORD *)(v3 + 9480) = v15;
          *(_QWORD *)(v3 + 9488) = v17;
          *(_QWORD *)(v3 + 9496) = v16;
          v19 = (_BYTE *)(v3 + 10984);
          *(_BYTE *)(v3 + 10984) = 0;
LABEL_13:
          v149 = (_BYTE *)v14;
          v147 = v12;
          v146 = v13;
          v150 = v5;
          *(_QWORD *)(v3 + 9504) = v17;
          *(_QWORD *)(v3 + 9512) = v16;
          v20 = *(_QWORD *)(v15 + 16);
          if ( *(_QWORD *)(v20 + 16) != -1 )
          {
            v143 = v19;
            v142 = v18;
            sub_141543F00(v117, v20 + 16);
            v137 = *(_QWORD *)&v117[80];
            v136 = *(_OWORD *)&v117[64];
            v135 = *(_OWORD *)&v117[48];
            v134 = *(_OWORD *)&v117[32];
            v133 = *(_OWORD *)&v117[16];
            v132 = *(_OWORD *)v117;
            v21 = 9;
LABEL_15:
            v22 = -1;
            goto LABEL_28;
          }
          v143 = v19;
          v141 = v18;
          v142 = v18;
          sub_1409B18A0(&v116);
          if ( v116 == (const char *)-1LL )
          {
            v101[0] = v151 + 9504;
            v101[1] = sub_1402DDC10;
            v143 = v19;
            v142 = v141;
            sub_141543AF0(&v92[8], &unk_141887458, v101);
            v97 = *(_OWORD *)&v92[40];
            v98 = *(_OWORD *)&v92[56];
            v99 = *(_OWORD *)&v92[72];
            v126 = *(_OWORD *)&v92[8];
            v127 = *(_OWORD *)&v92[24];
            v128 = *(_OWORD *)&v92[40];
            v129 = *(_OWORD *)&v92[56];
            v130 = *(_OWORD *)&v92[72];
            v131 = *(_QWORD *)&v92[88];
            v137 = *(_QWORD *)&v92[88];
            v136 = *(_OWORD *)&v92[72];
            v135 = *(_OWORD *)&v92[56];
            v134 = *(_OWORD *)&v92[40];
            v133 = *(_OWORD *)&v92[24];
            v132 = *(_OWORD *)&v92[8];
            v21 = 8;
            goto LABEL_15;
          }
          v144 = v19;
          v31 = *(_QWORD *)v117;
          v95 = *(_OWORD *)&v117[8];
          v96 = *(_OWORD *)&v117[24];
          v97 = *(_OWORD *)&v117[40];
          v98 = *(_OWORD *)&v117[56];
          v99 = *(_OWORD *)&v117[72];
          v100 = v118;
          v94 = v125;
          v93 = v124;
          *(_OWORD *)&v92[80] = v123;
          *(_OWORD *)&v92[64] = v122;
          *(_OWORD *)&v92[48] = v121;
          *(_OWORD *)&v92[32] = v120;
          *(__m256i *)v92 = v119;
          v131 = v118;
          v130 = *(_OWORD *)&v117[72];
          v129 = *(_OWORD *)&v117[56];
          v128 = *(_OWORD *)&v117[40];
          v127 = *(_OWORD *)&v117[24];
          v126 = *(_OWORD *)&v117[8];
          v3 = v151;
          v32 = v151 + 9520;
          *(_QWORD *)(v151 + 9520) = v116;
          *(_QWORD *)(v3 + 9528) = v31;
          v33 = v127;
          v34 = v128;
          v35 = v129;
          *(_OWORD *)(v3 + 9536) = v126;
          *(_OWORD *)(v3 + 9552) = v33;
          *(_OWORD *)(v3 + 9568) = v34;
          *(_OWORD *)(v3 + 9584) = v35;
          *(_OWORD *)(v3 + 9600) = v130;
          *(_QWORD *)(v3 + 9616) = v131;
          v36 = *(_OWORD *)&v92[16];
          v37 = *(_OWORD *)&v92[32];
          v38 = *(_OWORD *)&v92[48];
          *(_OWORD *)(v3 + 9624) = *(_OWORD *)v92;
          *(_OWORD *)(v3 + 9640) = v36;
          *(_OWORD *)(v3 + 9656) = v37;
          *(_OWORD *)(v3 + 9672) = v38;
          *(_OWORD *)(v3 + 9688) = *(_OWORD *)&v92[64];
          *(_OWORD *)(v3 + 9704) = *(_OWORD *)&v92[80];
          *(_OWORD *)(v3 + 9720) = v93;
          *(_OWORD *)(v3 + 9736) = v94;
          *(_QWORD *)(v3 + 9984) = v32;
          *(_BYTE *)(v3 + 9993) = 0;
LABEL_26:
          v145 = (_QWORD *)(v3 + 9752);
          sub_140DBA870(&v116, v3 + 9752, a2);
          v22 = (__int64)v116;
          if ( v116 == (const char *)-1LL )
          {
            v42 = (_BYTE *)v151;
            *(_BYTE *)(v151 + 10984) = 3;
            v42[10992] = 3;
LABEL_46:
            v42[11000] = 3;
            v42[11008] = 3;
            v53 = 3;
            result = 1;
            goto LABEL_62;
          }
          v21 = *(_QWORD *)v117;
          v80 = *(_OWORD *)&v117[8];
          v81 = *(_OWORD *)&v117[24];
          v82 = *(_OWORD *)&v117[40];
          v83 = *(_OWORD *)&v117[56];
          v84 = *(_OWORD *)&v117[72];
          v85 = v118;
          v76 = v119;
          sub_140CA8800(v145);
          v137 = v85;
          v136 = v84;
          v135 = v83;
          v134 = v82;
          v133 = v81;
          v132 = v80;
          v75 = v76;
          sub_1402085B0(v151 + 9520);
          v19 = v144;
LABEL_28:
          v91 = v137;
          v90 = v136;
          v89 = v135;
          v88 = v134;
          v87 = v133;
          v86 = v132;
          v77 = v75;
          *v19 = 1;
          v102 = v86;
          v103 = v87;
          v104 = v88;
          v105 = v89;
          v106 = v90;
          v107 = v91;
          v108 = v77;
          if ( v22 == -1 )
          {
            v116 = (const char *)v21;
            *(_OWORD *)v117 = v102;
            *(_OWORD *)&v117[16] = v103;
            *(_OWORD *)&v117[32] = v104;
            *(_OWORD *)&v117[48] = v105;
            *(_OWORD *)&v117[64] = v106;
            *(_QWORD *)&v117[80] = v107;
            *(_QWORD *)&v132 = 0;
            *((_QWORD *)&v132 + 1) = 1;
            *(_QWORD *)&v133 = 0;
            *(_QWORD *)&v92[16] = 1610612768;
            *(_QWORD *)v92 = &v132;
            *(_QWORD *)&v92[8] = &off_141891B48;
            if ( (unsigned __int8)sub_1405060F0(&v116, v92) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v148,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v23 = *((_QWORD *)&v132 + 1);
            v40 = (_BYTE *)v132;
            v45 = v133;
            sub_140CAC460(&v116);
            v46 = v151;
            v47 = *(_QWORD *)(v151 + 9456);
            if ( v47 )
              sub_140001660(*(_QWORD *)(v151 + 9464), v47, 1);
            sub_14172B820(&v65, v64, 176);
            *(_BYTE *)(v46 + 10992) = 1;
            v41 = (__m128i)v45;
            v39 = -1;
            v44 = v149;
          }
          else
          {
            v74 = v108;
            v73 = v107;
            v72 = v106;
            v71 = v105;
            v70 = v104;
            v69 = v103;
            v67[0] = v22;
            v67[1] = v21;
            v68 = v102;
            sub_1404D1120(&v116, v67);
            v39 = (__int64)v116;
            v23 = *(_QWORD *)&v117[8];
            v40 = *(_BYTE **)v117;
            v41 = _mm_loadu_si128((const __m128i *)&v117[16]);
            sub_14172B820(v64, &v117[32], 176);
            v42 = (_BYTE *)v151;
            v43 = *(_QWORD *)(v151 + 9456);
            if ( v43 )
              sub_140001660(*(_QWORD *)(v151 + 9464), v43, 1);
            sub_14172B820(&v65, v64, 176);
            v42[10992] = 1;
            v44 = v149;
            if ( v39 == -2 )
              goto LABEL_46;
          }
          sub_14172B820(v63, &v65, 176);
          sub_140CA44C0(v44);
          if ( v39 != -1 )
          {
            sub_14172B820(v79, v63, 176);
            *(_QWORD *)v78 = v39;
            *(_QWORD *)&v78[8] = v40;
            *(_QWORD *)&v78[16] = v23;
            *(__m128i *)&v78[24] = v41;
            sub_140510380(&v116, v78);
            v23 = ((unsigned __int64)((v117[7] << 16) | (unsigned int)*(unsigned __int16 *)&v117[5]) << 32)
                | *(unsigned int *)&v117[1];
            v8 = v117[0];
            v24 = *(_QWORD *)&v117[8];
            v25 = *(_OWORD *)&v117[16];
            if ( v116 == (const char *)-1LL )
            {
              v29 = 0;
            }
            else
            {
              v117[7] = (((unsigned __int64)((v117[7] << 16) | (unsigned int)*(unsigned __int16 *)&v117[5]) << 32)
                       | *(unsigned int *)&v117[1]) >> 48;
              *(_WORD *)&v117[5] = WORD2(v23);
              *(_DWORD *)&v117[1] = v23;
              v65 = 0;
              v66 = 1u;
              v64[2] = 1610612768;
              v64[0] = &v65;
              v64[1] = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v116, v64) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v148,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v24 = v65;
              v25 = v66;
              sub_140CAB2C0(&v116);
              v29 = 1;
              v8 = 3;
            }
            v55 = v150;
            goto LABEL_55;
          }
          *((_QWORD *)&v25 + 1) = v41.m128i_i64[0];
          if ( v41.m128i_i64[0] < 0 )
          {
            v52 = 0;
            goto LABEL_43;
          }
          if ( v41.m128i_i64[0] )
          {
            nullsub_1(v49, v48, v50, v51, v62);
            v52 = 1;
            v56 = sub_140001650(v41.m128i_i64[0], 1);
            if ( !v56 )
            {
LABEL_43:
              v145 = (_QWORD *)v23;
              v149 = v40;
              sub_14176E54B(v52, v41.m128i_i64[0]);
            }
            *(_QWORD *)&v25 = v56;
            sub_14172B820(v56, v23, v41.m128i_i64[0]);
            v55 = v150;
            if ( v40 )
              goto LABEL_53;
          }
          else
          {
            *(_QWORD *)&v25 = 1;
            v55 = v150;
            if ( v40 )
            {
LABEL_53:
              v57 = v55;
              sub_140001660(v23, v40, 1);
              v55 = v57;
            }
          }
          v29 = 1;
          v8 = 3;
          v24 = v41.m128i_i64[0];
LABEL_55:
          *v146 = 1;
          sub_140CAB140(v55);
          v30 = v151;
          if ( *(_QWORD *)(v151 + 6224) != -1 )
          {
            v145 = (_QWORD *)(v151 + 6232);
            v58 = *(__int64 **)(v151 + 6232);
            v146 = *(_BYTE **)(v151 + 6240);
            v149 = nullptr;
            v147 = v58;
            while ( v146 != v149 )
            {
              ++v149;
              v59 = v58 + 12;
              sub_140401FB0();
              v58 = v59;
            }
            v30 = v151;
            v28 = *(_QWORD *)(v151 + 6224);
            if ( v28 )
LABEL_60:
              sub_140001660(*v145, 96 * v28, 8);
          }
LABEL_61:
          *(_BYTE *)(v30 + 11008) = 1;
          sub_140C9FC80(v150);
          v111 = v23;
          v113 = BYTE6(v23);
          v112 = WORD2(v23);
          v115 = v25;
          v110 = v8;
          v114 = v24;
          v109 = v29;
          v60 = v151;
          *(_BYTE *)(v151 + 11027) = 0;
          sub_14172B820(&v116, v60, 360);
          *(_BYTE *)(v60 + 11026) = 0;
          v61 = *(_QWORD *)(v60 + 384);
          *(_BYTE *)(v60 + 11025) = 0;
          *(_QWORD *)&v78[16] = *(_QWORD *)(v60 + 376);
          *(_OWORD *)v78 = *(_OWORD *)(v60 + 360);
          sub_140AFFC30(
            (__int64)&v116,
            v61,
            (__int64)&v109,
            (__int128 *)v78,
            *(_DWORD *)(v60 + 11016),
            *(_DWORD *)(v60 + 11020));
          v53 = 1;
          result = 0;
          v42 = (_BYTE *)v151;
LABEL_62:
          v42[11024] = v53;
          return result;
        case 1:
LABEL_73:
          v149 = (_BYTE *)v14;
          v147 = v12;
          v146 = v13;
          v150 = v5;
          sub_14176EC00(&off_1418885A8);
        case 2:
LABEL_72:
          v149 = (_BYTE *)v14;
          v147 = v12;
          v146 = v13;
          v150 = v5;
          sub_14176EC20(&off_1418885A8);
        case 3:
LABEL_11:
          v19 = (_BYTE *)(v3 + 10984);
          v18 = v3 + 9480;
          switch ( *(_BYTE *)(v3 + 10984) )
          {
            case 0:
              v15 = *(_QWORD *)(v3 + 9480);
              v17 = *(_QWORD *)(v3 + 9488);
              v16 = *(_QWORD *)(v3 + 9496);
              goto LABEL_13;
            case 1:
              v149 = (_BYTE *)v14;
              v147 = v12;
              v146 = v13;
              v150 = v5;
              v140 = v3 + 9480;
              sub_14176EC00(&off_141887DC8);
            case 2:
              v149 = (_BYTE *)v14;
              v147 = v12;
              v146 = v13;
              v150 = v5;
              v140 = v3 + 9480;
              sub_14176EC20(&off_141887DC8);
            case 3:
              v141 = v3 + 9480;
              v144 = (_BYTE *)(v3 + 10984);
              v149 = (_BYTE *)v14;
              v147 = v12;
              v146 = v13;
              v150 = v5;
              goto LABEL_26;
          }
      }
  }
}
