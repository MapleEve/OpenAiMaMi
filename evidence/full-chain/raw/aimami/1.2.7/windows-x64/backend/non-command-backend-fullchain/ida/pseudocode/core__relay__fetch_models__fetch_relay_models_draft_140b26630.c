// win 1.2.7 | module src/core/relay/fetch_models.rs | ea 0x140b26630 | name fetch_relay_models_draft
// win 1.2.7 | module src/core/relay/fetch_models.rs | attributed via panic-Location xref (win-native)
// win 1.2.7 | tauri command handler = fetch_relay_models_draft | mapped via command-name string xref (win-native, ground-truth)
char __fastcall fetch_relay_models_draft(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int8 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rbx
  signed __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  const __m128i *v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  const __m128i *v19; // rdi
  const __m128i *v20; // rdx
  __int64 *v21; // rdi
  __int128 *v22; // r15
  __int64 v23; // rdx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int64 v34; // r12
  __int64 v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rcx
  _QWORD *v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 *v41; // rsi
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r14
  __int64 v47; // r15
  char v48; // r12
  unsigned int v49; // ebx
  __int64 v50; // rsi
  _BYTE *v51; // r10
  _QWORD *v52; // r9
  const __m128i *v53; // rcx
  const __m128i *v54; // rsi
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  __int128 v61; // xmm3
  __int64 v62; // rbx
  __int64 v63; // rax
  unsigned __int8 v64; // si
  unsigned __int64 v65; // r14
  _QWORD *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // r14
  const __m128i *v73; // r15
  __int64 v74; // rcx
  unsigned __int64 v75; // rax
  unsigned __int128 v76; // kr20_16
  __int64 v77; // rsi
  __int128 v78; // xmm0
  _BYTE *v79; // rdx
  __int64 *v81; // rcx
  __int64 *v82; // r14
  unsigned __int64 v83; // rdi
  __int64 v84; // rdx
  char v85; // cl
  char result; // al
  volatile signed __int64 **v87; // rcx
  unsigned __int64 v88; // rcx
  __int128 v89; // xmm0
  __int64 v90; // rbx
  __int64 v91; // rcx
  void *v92; // rax
  unsigned __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rdx
  __int64 v96; // rdx
  unsigned __int64 v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // [rsp+38h] [rbp-48h] BYREF
  __int64 v101; // [rsp+40h] [rbp-40h]
  signed __int64 v102; // [rsp+48h] [rbp-38h]
  __int64 v103; // [rsp+D8h] [rbp+58h]
  __int64 v104; // [rsp+E0h] [rbp+60h]
  __int128 v105; // [rsp+E8h] [rbp+68h]
  volatile signed __int64 **v106; // [rsp+1D8h] [rbp+158h]
  _QWORD *v107; // [rsp+1E0h] [rbp+160h]
  char v108; // [rsp+1EFh] [rbp+16Fh]
  char v109; // [rsp+1F0h] [rbp+170h]
  __m128i v110; // [rsp+300h] [rbp+280h] BYREF
  __int128 v111; // [rsp+310h] [rbp+290h]
  __int128 v112; // [rsp+320h] [rbp+2A0h]
  __int128 v113; // [rsp+330h] [rbp+2B0h]
  __int128 v114; // [rsp+640h] [rbp+5C0h]
  __int128 v115; // [rsp+650h] [rbp+5D0h]
  __int128 v116; // [rsp+660h] [rbp+5E0h]
  __int128 v117; // [rsp+670h] [rbp+5F0h]
  __int128 v118; // [rsp+680h] [rbp+600h]
  __int128 v119; // [rsp+690h] [rbp+610h]
  __int64 v120; // [rsp+6A0h] [rbp+620h]
  unsigned __int128 v121; // [rsp+6A8h] [rbp+628h] BYREF
  const __m128i *v122; // [rsp+6B8h] [rbp+638h]
  __int128 v123; // [rsp+6C0h] [rbp+640h]
  __int128 v124; // [rsp+6D0h] [rbp+650h]
  __int128 v125; // [rsp+6E0h] [rbp+660h]
  __int128 v126; // [rsp+6F0h] [rbp+670h]
  __int128 v127; // [rsp+700h] [rbp+680h]
  __int128 v128; // [rsp+710h] [rbp+690h]
  __int128 v129; // [rsp+720h] [rbp+6A0h]
  __int128 v130; // [rsp+730h] [rbp+6B0h]
  __int128 v131; // [rsp+740h] [rbp+6C0h]
  __int128 v132; // [rsp+750h] [rbp+6D0h]
  __int128 v133; // [rsp+760h] [rbp+6E0h]
  __int128 v134; // [rsp+770h] [rbp+6F0h]
  __int128 v135; // [rsp+780h] [rbp+700h]
  __int128 v136; // [rsp+790h] [rbp+710h]
  __int128 v137; // [rsp+7A0h] [rbp+720h]
  __int128 v138; // [rsp+7B0h] [rbp+730h]
  __int128 v139; // [rsp+7C0h] [rbp+740h]
  unsigned __int128 v140; // [rsp+7D0h] [rbp+750h] BYREF
  __int64 v141; // [rsp+7E0h] [rbp+760h] BYREF
  _BYTE v142[80]; // [rsp+7E8h] [rbp+768h]
  _QWORD v143[3]; // [rsp+B08h] [rbp+A88h] BYREF
  __int128 v144; // [rsp+B20h] [rbp+AA0h]
  __int128 v145; // [rsp+B30h] [rbp+AB0h]
  __int128 v146; // [rsp+B40h] [rbp+AC0h]
  __int128 v147; // [rsp+B50h] [rbp+AD0h]
  __int128 v148; // [rsp+B60h] [rbp+AE0h]
  __int128 v149; // [rsp+B70h] [rbp+AF0h]
  __int128 v150; // [rsp+B80h] [rbp+B00h]
  __int128 v151; // [rsp+B90h] [rbp+B10h]
  __int64 v152; // [rsp+BA8h] [rbp+B28h] BYREF
  __int8 v153; // [rsp+BB0h] [rbp+B30h]
  int v154; // [rsp+BB1h] [rbp+B31h]
  __int16 v155; // [rsp+BB5h] [rbp+B35h]
  char v156; // [rsp+BB7h] [rbp+B37h]
  __int64 v157; // [rsp+BB8h] [rbp+B38h]
  __int64 v158; // [rsp+BC0h] [rbp+B40h]
  signed __int64 v159; // [rsp+BC8h] [rbp+B48h]
  __int128 v160; // [rsp+BD0h] [rbp+B50h]
  __int128 v161; // [rsp+BE0h] [rbp+B60h]
  __int128 v162; // [rsp+BF0h] [rbp+B70h]
  __int128 v163; // [rsp+C00h] [rbp+B80h]
  unsigned __int64 v164; // [rsp+C10h] [rbp+B90h]
  _BYTE *v165; // [rsp+C18h] [rbp+B98h]
  __int64 v166; // [rsp+C20h] [rbp+BA0h]
  unsigned __int64 v167; // [rsp+C28h] [rbp+BA8h]
  unsigned __int64 v168; // [rsp+C30h] [rbp+BB0h]
  unsigned __int64 v169; // [rsp+C38h] [rbp+BB8h]
  unsigned __int64 v170; // [rsp+C40h] [rbp+BC0h]
  _BYTE *v171; // [rsp+C48h] [rbp+BC8h]
  const __m128i *v172; // [rsp+C60h] [rbp+BE0h]
  _QWORD *v173; // [rsp+C68h] [rbp+BE8h]
  _BYTE *v174; // [rsp+C70h] [rbp+BF0h]
  unsigned __int64 v175; // [rsp+C78h] [rbp+BF8h]
  _BYTE *v176; // [rsp+C80h] [rbp+C00h]
  __int128 *v177; // [rsp+C88h] [rbp+C08h]
  _QWORD *v178; // [rsp+C90h] [rbp+C10h]
  volatile signed __int64 **v179; // [rsp+C98h] [rbp+C18h]
  _BYTE *v180; // [rsp+CA0h] [rbp+C20h]
  __int64 *v181; // [rsp+CA8h] [rbp+C28h]
  char v182; // [rsp+CB7h] [rbp+C37h] BYREF
  unsigned __int64 v183; // [rsp+CB8h] [rbp+C38h]
  _BYTE *v184; // [rsp+CC0h] [rbp+C40h]
  _QWORD *v185; // [rsp+CC8h] [rbp+C48h]
  _BYTE *v186; // [rsp+CD0h] [rbp+C50h]
  unsigned __int64 v187; // [rsp+CD8h] [rbp+C58h]
  __int64 v188; // [rsp+CE0h] [rbp+C60h]

  v188 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 10112);
  v187 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 10113) = 257;
      *(_BYTE *)(a1 + 10115) = 1;
      v5 = a1 + 5248;
      sub_1418F44E0((__m128i *)(a1 + 5248), (const __m128i *)(a1 + 392), 0x12F8u);
      switch ( *(_BYTE *)(v3 + 10096) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_125;
        case 2:
          goto LABEL_124;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_1419393E0(&off_141A28008);
    case 2LL:
      sub_141939400(&off_141A28008);
    case 3LL:
      v5 = a1 + 5248;
      switch ( *(_BYTE *)(a1 + 10096) )
      {
        case 0:
LABEL_4:
          v6 = (__int64 *)(v3 + 5768);
          *(_QWORD *)&v140 = aFetchRelayMode;
          *((_QWORD *)&v140 + 1) = 24;
          v141 = (__int64)aManager_1;
          *(_QWORD *)v142 = 7;
          v183 = v5;
          *(_QWORD *)&v142[8] = v5;
          *(_OWORD *)&v142[16] = v3 + 5768;
          v7 = sub_1404CA940((volatile void *)(*(_QWORD *)(v3 + 5760) + 16LL));
          v181 = v6;
          if ( v7 )
            goto LABEL_5;
          sub_14190D280(&v110, &v140, &v141);
          v10 = v110.m128i_i8[0];
          if ( v110.m128i_i8[0] == -1 )
          {
            v7 = v110.m128i_i64[1];
LABEL_5:
            *(_QWORD *)&v113 = 0;
            v110.m128i_i64[0] = (__int64)aFetchRelayMode;
            v110.m128i_i64[1] = 24;
            *(_QWORD *)&v111 = aInput_2;
            *((_QWORD *)&v111 + 1) = 5;
            *(_QWORD *)&v112 = v183;
            *((_QWORD *)&v112 + 1) = v6;
            sub_141046D50(&v140, &v110);
            v8 = v140;
            v9 = ((unsigned __int64)((HIBYTE(v140) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v140 + 13)) << 32)
               | *(unsigned int *)((char *)&v140 + 9);
            v10 = BYTE8(v140);
            v11 = v141;
            v13 = *(_QWORD *)&v142[8];
            v12 = *(_QWORD *)v142;
            if ( (_QWORD)v140 != -1 )
            {
              v139 = *(_OWORD *)&v142[64];
              v138 = *(_OWORD *)&v142[48];
              v137 = *(_OWORD *)&v142[32];
              v136 = *(_OWORD *)&v142[16];
              v14 = v187;
              v15 = (const __m128i *)(v187 + 5792);
              *(_QWORD *)(v187 + 5896) = v7;
              v3 = v14;
              *(_QWORD *)(v14 + 5792) = v8;
              *(_BYTE *)(v14 + 5800) = v10;
              *(_BYTE *)(v14 + 5807) = BYTE6(v9);
              *(_WORD *)(v14 + 5805) = WORD2(v9);
              *(_DWORD *)(v14 + 5801) = v9;
              *(_QWORD *)(v14 + 5808) = v11;
              *(_QWORD *)(v14 + 5816) = v12;
              *(_QWORD *)(v14 + 5824) = v13;
              v16 = v137;
              v17 = v138;
              v18 = v139;
              *(_OWORD *)(v14 + 5832) = v136;
              *(_OWORD *)(v14 + 5848) = v16;
              *(_OWORD *)(v14 + 5864) = v17;
              *(_OWORD *)(v14 + 5880) = v18;
              *(_BYTE *)(v14 + 7216) = 0;
              v19 = (const __m128i *)(v14 + 7224);
              sub_1418F44E0((__m128i *)(v14 + 7224), v15, 0x598u);
              v20 = v19;
              v21 = (__int64 *)(v3 + 10088);
              *(_BYTE *)(v3 + 10088) = 0;
              v5 = v183;
LABEL_8:
              v22 = (__int128 *)(v3 + 8656);
              v172 = v20;
              sub_1418F44E0((__m128i *)(v3 + 8656), v20, 0x598u);
              switch ( *(_BYTE *)(v3 + 10080) )
              {
                case 0:
                  goto LABEL_10;
                case 1:
                  goto LABEL_127;
                case 2:
                  goto LABEL_126;
                case 3:
                  goto LABEL_11;
              }
            }
          }
          else
          {
            v9 = ((unsigned __int64)((v110.m128i_u8[7] << 16)
                                   | (unsigned int)*(unsigned __int16 *)((char *)&v110.m128i_u16[2] + 1)) << 32)
               | *(unsigned int *)((char *)v110.m128i_u32 + 1);
            v11 = v110.m128i_i64[1];
            v13 = *((_QWORD *)&v111 + 1);
            v12 = v111;
          }
          sub_140A3BBB0(v183);
          if ( *v181 == -1 )
          {
            v64 = 1;
            v65 = v187;
            goto LABEL_79;
          }
          v185 = (_QWORD *)(v187 + 5776);
          v53 = *(const __m128i **)(v187 + 5776);
          v186 = *(_BYTE **)(v187 + 5784);
          v184 = nullptr;
          v172 = v53;
          while ( v186 != v184 )
          {
            ++v184;
            v54 = v53 + 6;
            sub_14038BB80();
            v53 = v54;
          }
          v63 = *v181;
          v64 = 1;
          v65 = v187;
          if ( !*v181 )
            goto LABEL_79;
          goto LABEL_77;
        case 1:
LABEL_125:
          v183 = v5;
          sub_1419393E0(&off_141A29B80);
        case 2:
LABEL_124:
          v183 = v5;
          sub_141939400(&off_141A29B80);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v21 = (__int64 *)(v3 + 10088);
  v20 = (const __m128i *)(v3 + 7224);
  switch ( *(_BYTE *)(v3 + 10088) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v183 = v5;
      v167 = v3 + 7224;
      sub_1419393E0(&off_141A27F88);
    case 2:
      v183 = v5;
      v167 = v3 + 7224;
      sub_141939400(&off_141A27F88);
    case 3:
      v172 = (const __m128i *)(v3 + 7224);
      v22 = (__int128 *)(v3 + 8656);
      switch ( *(_BYTE *)(v3 + 10080) )
      {
        case 0:
LABEL_10:
          v181 = v21;
          v23 = *(_QWORD *)(v3 + 8760);
          *(_QWORD *)(v3 + 8768) = v23;
          v120 = *((_QWORD *)v22 + 12);
          v119 = v22[5];
          v118 = v22[4];
          v24 = *v22;
          v25 = v22[1];
          v26 = v22[2];
          v117 = v22[3];
          v116 = v26;
          v115 = v25;
          v114 = v24;
          *(_BYTE *)(v3 + 10081) = 0;
          v9 = v3 + 8776;
          v27 = v22[1];
          v28 = v22[2];
          v29 = v22[3];
          *(_OWORD *)(v3 + 8776) = *v22;
          *(_OWORD *)(v3 + 8792) = v27;
          *(_OWORD *)(v3 + 8808) = v28;
          *(_OWORD *)(v3 + 8824) = v29;
          *(_OWORD *)(v3 + 8840) = v22[4];
          *(_OWORD *)(v3 + 8856) = v22[5];
          *(_QWORD *)(v3 + 8872) = *((_QWORD *)v22 + 12);
          *(_QWORD *)(v3 + 8880) = v23;
          v184 = (_BYTE *)(v3 + 10072);
          *(_BYTE *)(v3 + 10072) = 0;
          break;
        case 1:
LABEL_127:
          v177 = v22;
          v181 = v21;
          v183 = v5;
          sub_1419393E0(&off_141A2B5F8);
        case 2:
LABEL_126:
          v177 = v22;
          v181 = v21;
          v183 = v5;
          sub_141939400(&off_141A2B5F8);
        case 3:
LABEL_11:
          v184 = (_BYTE *)(v3 + 10072);
          v30 = *(unsigned __int8 *)(v3 + 10072);
          v9 = v3 + 8776;
          v181 = v21;
          switch ( v30 )
          {
            case 0LL:
              v23 = *(_QWORD *)(v3 + 8880);
              break;
            case 1LL:
              v177 = v22;
              v183 = v5;
              v168 = v3 + 8776;
              sub_1419393E0(&off_141A2ADD8);
            case 2LL:
              v177 = v22;
              v183 = v5;
              v168 = v3 + 8776;
              sub_141939400(&off_141A2ADD8);
            case 3LL:
              v177 = v22;
              v183 = v5;
              v180 = (_BYTE *)(v3 + 10064);
              v52 = (_QWORD *)(v3 + 9040);
              switch ( *(_BYTE *)(v3 + 10064) )
              {
                case 0:
                  v166 = a2;
                  v50 = *(_QWORD *)(v3 + 9136);
                  v36 = *(_QWORD *)(v3 + 9144);
                  v44 = *(_QWORD *)(v3 + 9152);
                  v45 = *(_QWORD *)(v3 + 9160);
                  v48 = *(_BYTE *)(v3 + 10065);
                  v47 = *(_QWORD *)(v3 + 9168);
                  v43 = v3;
                  v46 = *(_QWORD *)(v3 + 9176);
                  v49 = *(unsigned __int8 *)(v43 + 10066);
                  v51 = v180;
                  goto LABEL_36;
                case 1:
                  v171 = v184;
                  v170 = v3 + 8776;
                  v169 = v3 + 9040;
                  sub_1419393E0(&off_141A2BDD0);
                case 2:
                  v171 = v184;
                  v170 = v3 + 8776;
                  v169 = v3 + 9040;
                  sub_141939400(&off_141A2BDD0);
                case 3:
                  v185 = (_QWORD *)(v3 + 9040);
                  v186 = (_BYTE *)(v3 + 8776);
                  goto LABEL_97;
              }
          }
          break;
      }
      v177 = v22;
      *(_QWORD *)(v3 + 8984) = *(_QWORD *)(v9 + 96);
      *(_OWORD *)(v3 + 8968) = *(_OWORD *)(v9 + 80);
      *(_OWORD *)(v3 + 8952) = *(_OWORD *)(v9 + 64);
      v31 = *(_OWORD *)v9;
      v32 = *(_OWORD *)(v9 + 16);
      v33 = *(_OWORD *)(v9 + 32);
      *(_OWORD *)(v3 + 8936) = *(_OWORD *)(v9 + 48);
      *(_OWORD *)(v3 + 8920) = v33;
      *(_OWORD *)(v3 + 8904) = v32;
      *(_OWORD *)(v3 + 8888) = v31;
      v34 = *(_QWORD *)(v3 + 8800);
      v35 = *(_QWORD *)(v3 + 8808);
      v36 = *(_QWORD *)(v3 + 8816);
      v183 = v5;
      v186 = (_BYTE *)v9;
      if ( v36 )
      {
        *((_QWORD *)&v140 + 1) = v34;
        v141 = v35;
        goto LABEL_15;
      }
      v185 = (_QWORD *)v35;
      if ( *(_QWORD *)(v3 + 8936) == -1 )
      {
        v141 = 1;
        *(_QWORD *)v142 = 0;
        v140 = 0xFFFFFFFFFFFFFFFFuLL;
        if ( !v34 )
        {
          v35 = 1;
          v36 = 0;
          v34 = 0;
          v3 = v187;
          goto LABEL_15;
        }
      }
      else
      {
        v180 = (_BYTE *)v34;
        sub_140D81600((__int64)&v140, v23);
        v34 = (__int64)v180;
        v9 = (unsigned __int64)v186;
        if ( !v180 )
          goto LABEL_85;
      }
      sub_140001660(v185, v34, 1);
LABEL_85:
      v34 = *((_QWORD *)&v140 + 1);
      v40 = v140;
      v35 = v141;
      v36 = *(_QWORD *)v142;
      if ( (_QWORD)v140 != -1 )
      {
        v131 = *(_OWORD *)&v142[56];
        v130 = *(_OWORD *)&v142[40];
        v129 = *(_OWORD *)&v142[24];
        v128 = *(_OWORD *)&v142[8];
        v38 = (_QWORD *)v187;
        v41 = (__int64 *)(v187 + 8888);
        v42 = *(_QWORD *)(v187 + 8936);
        if ( v42 == -1 )
          goto LABEL_89;
        goto LABEL_87;
      }
      v3 = v187;
LABEL_15:
      *(_QWORD *)(v3 + 8992) = v34;
      *(_QWORD *)(v3 + 9000) = v35;
      *(_QWORD *)(v3 + 9008) = v36;
      sub_140EF67C0(&v140, *(_QWORD *)(v3 + 8896), *(_QWORD *)(v3 + 8904));
      v34 = *((_QWORD *)&v140 + 1);
      v37 = v141;
      v36 = *(_QWORD *)v142;
      if ( (_BYTE)v140 )
      {
        v35 = v141;
        v38 = (_QWORD *)v187;
        v39 = *(_QWORD *)(v187 + 8992);
        v40 = 9;
        v9 = (unsigned __int64)v186;
        if ( v39 )
          sub_140001660(*(_QWORD *)(v187 + 9000), v39, 1);
        v41 = v38 + 1111;
        v42 = v38[1117];
        if ( v42 == -1 )
        {
LABEL_89:
          v70 = *v41;
          if ( !*v41 )
            goto LABEL_54;
LABEL_53:
          sub_140001660(v38[1112], v70, 1);
          goto LABEL_54;
        }
LABEL_87:
        if ( v42 )
          sub_140001660(v38[1118], v42, 1);
        goto LABEL_89;
      }
      v166 = a2;
      v43 = v187;
      *(_QWORD *)(v187 + 9016) = *((_QWORD *)&v140 + 1);
      *(_QWORD *)(v43 + 9024) = v37;
      *(_QWORD *)(v43 + 9032) = v36;
      v44 = *(_QWORD *)(v43 + 9000);
      v45 = *(_QWORD *)(v43 + 9008);
      v46 = 0;
      v47 = 1;
      if ( *(_QWORD *)(v43 + 8960) != -1 )
        v47 = *(_QWORD *)(v43 + 8968);
      v48 = *(_BYTE *)(v43 + 8985);
      if ( *(_QWORD *)(v43 + 8960) != -1 )
        v46 = *(_QWORD *)(v43 + 8976);
      v49 = *(unsigned __int8 *)(v43 + 8984);
      LODWORD(v50) = v37;
      *(_QWORD *)(v43 + 9136) = v37;
      *(_QWORD *)(v43 + 9144) = v36;
      *(_QWORD *)(v43 + 9152) = v44;
      *(_QWORD *)(v43 + 9160) = v45;
      *(_QWORD *)(v43 + 9168) = v47;
      *(_QWORD *)(v43 + 9176) = v46;
      v51 = (_BYTE *)(v43 + 10064);
      *(_BYTE *)(v43 + 10064) = 0;
      *(_BYTE *)(v43 + 10065) = v48;
      *(_BYTE *)(v43 + 10066) = v49;
      v52 = (_QWORD *)(v43 + 9040);
      v9 = (unsigned __int64)v186;
LABEL_36:
      v176 = v184;
      v186 = (_BYTE *)v9;
      v175 = v9;
      v180 = v51;
      v174 = v51;
      v185 = v52;
      v173 = v52;
      v178 = (_QWORD *)(v43 + 9184);
      sub_140DA5C80(v43 + 9184, v44, v45);
      sub_140DA5DE0(&v140, v47, v46);
      v55 = *((_QWORD *)&v140 + 1);
      v56 = v141;
      v57 = *(_QWORD *)v142;
      if ( (_QWORD)v140 == -1 )
      {
        v35 = v141;
        v36 = *(_QWORD *)v142;
        v34 = *((_QWORD *)&v140 + 1);
LABEL_43:
        v40 = 10;
        if ( *v178 )
          sub_140001660(*(_QWORD *)(v187 + 9192), *v178, 1);
        goto LABEL_45;
      }
      v113 = *(_OWORD *)&v142[56];
      v112 = *(_OWORD *)&v142[40];
      v111 = *(_OWORD *)&v142[24];
      v110 = *(__m128i *)&v142[8];
      v58 = v187;
      *(_QWORD *)(v187 + 9040) = v140;
      *(_QWORD *)(v58 + 9048) = v55;
      *(_QWORD *)(v58 + 9056) = v56;
      *(_QWORD *)(v58 + 9064) = v57;
      v59 = v111;
      v60 = v112;
      v61 = v113;
      *(__m128i *)(v58 + 9072) = v110;
      *(_OWORD *)(v58 + 9088) = v59;
      *(_OWORD *)(v58 + 9104) = v60;
      *(_OWORD *)(v58 + 9120) = v61;
      sub_140FED540(&v140, &unk_1421E05F0, 1000000000, v49);
      v62 = *((_QWORD *)&v140 + 1);
      if ( (_QWORD)v140 != -1 )
      {
        v36 = v141;
        v34 = v140;
LABEL_39:
        sub_1400331B0(v185);
        v35 = v62;
        goto LABEL_43;
      }
      v179 = (volatile signed __int64 **)(v187 + 9208);
      *(_QWORD *)(v187 + 9208) = *((_QWORD *)&v140 + 1);
      sub_140EF68B0((unsigned int)&v140, v50, v36, (unsigned int)aV1Models, 10, 0);
      v62 = v141;
      v36 = *(_QWORD *)v142;
      if ( (_BYTE)v140 )
      {
        v34 = *((_QWORD *)&v140 + 1);
        v87 = v179;
        if ( !_InterlockedDecrement64(*v179) )
          sub_141242F50(v87);
        goto LABEL_39;
      }
      v88 = v187;
      *(_QWORD *)(v187 + 9216) = *((_QWORD *)&v140 + 1);
      *(_QWORD *)(v88 + 9224) = v62;
      *(_QWORD *)(v88 + 9232) = v36;
      v89 = *(_OWORD *)(v88 + 9192);
      v106 = v179;
      v103 = v62;
      v104 = v36;
      v105 = v89;
      v109 = v48;
      v107 = v185;
      v108 = 0;
      sub_140D20A00((unsigned int)&v140, 30, 0, (unsigned int)&v100, (__int64)&off_141A2BDB8);
      sub_1418F44E0(&v110, (const __m128i *)&v140, 0x338u);
      v3 = v187;
      sub_1418F44E0((__m128i *)(v187 + 9240), &v110, 0x338u);
      a2 = v166;
LABEL_97:
      v178 = (_QWORD *)(v3 + 9240);
      sub_140DD9620(&v140, v3 + 9240, a2, v52);
      v90 = v140;
      if ( (_QWORD)v140 == -1 )
      {
        v79 = (_BYTE *)v187;
        *(_BYTE *)(v187 + 10064) = 3;
        v79[10072] = 3;
        v79[10080] = 3;
        goto LABEL_108;
      }
      v34 = *((_QWORD *)&v140 + 1);
      v35 = v141;
      v36 = *(_QWORD *)v142;
      sub_1409EDEF0(v178);
      if ( (_DWORD)v90 == 2 )
      {
        nullsub_1(v91);
        v92 = (void *)sub_140001650(51, 1);
        v93 = v187;
        if ( !v92 )
          sub_141938D2B(1, 51);
        v94 = (__int64)v92;
        qmemcpy(v92, "model discovery exceeded its 30 second total budget", 51);
        v95 = *(_QWORD *)(v93 + 9216);
        if ( v95 )
          sub_140001660(*(_QWORD *)(v93 + 9224), v95, 1);
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v93 + 9208)) )
          sub_141242F50(v187 + 9208);
        sub_1400331B0(v185);
        v35 = v94;
        v96 = *(_QWORD *)(v187 + 9184);
        v34 = 51;
        v40 = 10;
        if ( v96 )
          sub_140001660(*(_QWORD *)(v187 + 9192), v96, 1);
        v36 = 51;
      }
      else
      {
        v97 = v187;
        v98 = *(_QWORD *)(v187 + 9216);
        if ( v98 )
          sub_140001660(*(_QWORD *)(v187 + 9224), v98, 1);
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v97 + 9208)) )
          sub_141242F50(v187 + 9208);
        sub_1400331B0(v185);
        v99 = *(_QWORD *)(v187 + 9184);
        if ( v99 )
          sub_140001660(*(_QWORD *)(v187 + 9192), v99, 1);
        v40 = (v90 - 1) | 0xA;
      }
LABEL_45:
      v9 = (unsigned __int64)v186;
      v66 = v185;
      *v180 = 1;
      v165 = v184;
      v164 = v9;
      sub_140A3A100(v66);
      v38 = (_QWORD *)v187;
      v67 = *(_QWORD *)(v187 + 9016);
      if ( v67 )
        sub_140001660(*(_QWORD *)(v187 + 9024), v67, 1);
      v68 = v38[1124];
      if ( v68 )
        sub_140001660(v38[1125], v68, 1);
      v69 = v38[1117];
      if ( v69 != -1 && v69 )
        sub_140001660(v38[1118], v69, 1);
      v70 = v38[1111];
      if ( v70 )
        goto LABEL_53;
LABEL_54:
      v71 = v38[1120];
      if ( (unsigned __int64)(v71 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
        sub_140001660(v38[1121], v71, 1);
      v135 = v131;
      v134 = v130;
      v133 = v129;
      v132 = v128;
      *v184 = 1;
      sub_140A34320(v9);
      if ( v40 != -1 )
      {
        *(_QWORD *)&v140 = v40;
        *((_QWORD *)&v140 + 1) = v34;
        v141 = v35;
        *(_QWORD *)v142 = v36;
        *(_OWORD *)&v142[8] = v132;
        *(_OWORD *)&v142[24] = v133;
        *(_OWORD *)&v142[40] = v134;
        *(_OWORD *)&v142[56] = v135;
        v100 = 0;
        v101 = 1;
        v102 = 0;
        *(_QWORD *)&v111 = 1610612768;
        v110.m128i_i64[0] = (__int64)&v100;
        v110.m128i_i64[1] = (__int64)&off_141A353B8;
        if ( (unsigned __int8)sub_14104A7D0(&v140, &v110) )
          sub_141939040(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v182,
            (unsigned int)&unk_141A2C928,
            (__int64)&off_141A35470);
        v72 = v100;
        v73 = (const __m128i *)v101;
        v13 = v102;
        sub_140A3D8F0(&v140);
        v75 = v187;
        *(_BYTE *)(v187 + 10081) = 0;
        v160 = v144;
        v161 = v145;
        v162 = v146;
        v163 = v147;
        *(_BYTE *)(v75 + 10080) = 1;
        v148 = v160;
        v149 = v161;
        v150 = v162;
        v151 = v163;
        v76 = __PAIR128__(v72, v75);
        goto LABEL_59;
      }
      v143[0] = v34;
      v143[1] = v35;
      v143[2] = v36;
      sub_140FE66C0(&v140, v143);
      v76 = v140;
      v73 = (const __m128i *)v141;
      v78 = *(_OWORD *)v142;
      v13 = *(_QWORD *)v142;
      v144 = *(_OWORD *)&v142[16];
      v145 = *(_OWORD *)&v142[32];
      v146 = *(_OWORD *)&v142[48];
      v147 = *(_OWORD *)&v142[64];
      v79 = (_BYTE *)v187;
      *(_BYTE *)(v187 + 10081) = 0;
      v160 = v144;
      v161 = v145;
      v162 = v146;
      v163 = v147;
      v79[10080] = 1;
      if ( (_QWORD)v76 == -2 )
      {
LABEL_108:
        v79[10088] = 3;
        v79[10096] = 3;
        v85 = 3;
        result = 1;
        goto LABEL_109;
      }
      v151 = v163;
      v150 = v162;
      v149 = v161;
      v148 = v160;
      if ( (_QWORD)v76 != -1 )
      {
        v127 = v151;
        v126 = v150;
        v125 = v149;
        v124 = v148;
        v121 = v76;
        v122 = v73;
        v123 = v78;
        sub_14104B1D0(&v140, &v121);
        v9 = ((unsigned __int64)((HIBYTE(v140) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v140 + 13)) << 32)
           | *(unsigned int *)((char *)&v140 + 9);
        v10 = BYTE8(v140);
        v11 = v141;
        v13 = *(_QWORD *)&v142[8];
        v12 = *(_QWORD *)v142;
        if ( (_QWORD)v140 == -1 )
        {
          v64 = 0;
        }
        else
        {
          HIBYTE(v140) = (((unsigned __int64)((HIBYTE(v140) << 16)
                                            | (unsigned int)*(unsigned __int16 *)((char *)&v140 + 13)) << 32)
                        | *(unsigned int *)((char *)&v140 + 9)) >> 48;
          *(_WORD *)((char *)&v140 + 13) = WORD2(v9);
          *(_DWORD *)((char *)&v140 + 9) = v9;
          v100 = 0;
          v101 = 1;
          v102 = 0;
          *(_QWORD *)&v111 = 1610612768;
          v110.m128i_i64[0] = (__int64)&v100;
          v110.m128i_i64[1] = (__int64)&off_141A353B8;
          if ( (unsigned __int8)sub_14144FD90((__int64)&v140, &v110) )
            sub_141939040(
              (unsigned int)aADisplayImplem_6,
              55,
              (unsigned int)&v182,
              (unsigned int)&unk_141A2C928,
              (__int64)&off_141A35470);
          v11 = v100;
          v12 = v101;
          v13 = v102;
          sub_140A3BD30(&v140);
          v64 = 1;
          v10 = 3;
        }
        goto LABEL_72;
      }
LABEL_59:
      if ( v13 < 0 )
      {
        v77 = 0;
        goto LABEL_61;
      }
      if ( v13 )
      {
        nullsub_1(v74);
        v77 = 1;
        if ( !sub_140001650(v13, 1) )
        {
LABEL_61:
          v186 = v73;
          v184 = *((_BYTE **)&v76 + 1);
          sub_141938D2B(v77, v13);
        }
        v12 = v76;
        sub_1418F44E0((__m128i *)v76, v73, v13);
        if ( !*((_QWORD *)&v76 + 1) )
          goto LABEL_71;
      }
      else
      {
        v12 = 1;
        if ( !*((_QWORD *)&v76 + 1) )
          goto LABEL_71;
      }
      sub_140001660(v73, *((_QWORD *)&v76 + 1), 1);
LABEL_71:
      v64 = 1;
      v10 = 3;
      v11 = v13;
LABEL_72:
      *(_BYTE *)v181 = 1;
      sub_140A3BBB0(v183);
      v65 = v187;
      if ( *(_QWORD *)(v187 + 5768) != -1 )
      {
        v185 = (_QWORD *)(v187 + 5776);
        v81 = *(__int64 **)(v187 + 5776);
        v186 = *(_BYTE **)(v187 + 5784);
        v184 = nullptr;
        v181 = v81;
        while ( v186 != v184 )
        {
          ++v184;
          v82 = v81 + 12;
          sub_14038BB80();
          v81 = v82;
        }
        v65 = v187;
        v63 = *(_QWORD *)(v187 + 5768);
        if ( v63 )
LABEL_77:
          sub_140001660(*v185, 96 * v63, 8);
      }
LABEL_79:
      *(_BYTE *)(v65 + 10096) = 1;
      sub_140A32100(v183);
      v154 = v9;
      v156 = BYTE6(v9);
      v155 = WORD2(v9);
      v158 = v12;
      v159 = v13;
      v153 = v10;
      v157 = v11;
      v152 = v64;
      v83 = v187;
      *(_BYTE *)(v187 + 10115) = 0;
      sub_1418F44E0((__m128i *)&v140, (const __m128i *)v83, 0x168u);
      *(_BYTE *)(v83 + 10114) = 0;
      v84 = *(_QWORD *)(v83 + 384);
      *(_BYTE *)(v83 + 10113) = 0;
      *(_QWORD *)&v111 = *(_QWORD *)(v83 + 376);
      v110 = *(__m128i *)(v83 + 360);
      sub_14092BC70(
        (unsigned int)&v140,
        v84,
        (unsigned int)&v152,
        (unsigned int)&v110,
        *(_DWORD *)(v83 + 10104),
        *(_DWORD *)(v83 + 10108));
      v85 = 1;
      result = 0;
      v79 = (_BYTE *)v187;
LABEL_109:
      v79[10112] = v85;
      return result;
  }
}
