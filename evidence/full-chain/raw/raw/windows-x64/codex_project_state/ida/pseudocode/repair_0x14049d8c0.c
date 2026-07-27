/*
 * owner-map: module=core::relay::codex_project_state tier=B evidence=panic-location-2hop
 * addr=0x14049d8c0 size=0x2e49 name=repair
 * source: AiMaMi 1.2.3 windows-x64 stripped binary, IDA Hex-Rays decompile via idacall.py MCP
 * truncated_chunked=True
 */

/* refs (callees/data used):
 *  0x141473fa0  sub_141473FA0
 *  0x14175a8cd  unk_14175A8CD
 *  0x14148d130  sub_14148D130
 *  0x140018650  sub_140018650
 *  0x1408a6200  sub_1408A6200
 *  0x140348cf0  sub_140348CF0
 *  0x140001660  sub_140001660
 *  0x1400104f0  sub_1400104F0
 *  0x1416847b0  sub_1416847B0
 *  0x14175ac67  aProjectlessThr  string="projectless-thread-ids"
 */

// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_project_state::repair | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall repair(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int8 v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  int v14; // eax
  char v15; // cl
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 j; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 i; // rax
  __int64 v42; // rdx
  __int64 *v43; // rax
  __int64 *v44; // rsi
  __int64 v45; // r15
  __int64 *v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rbx
  __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r14
  __int64 v55; // rbx
  __int64 v56; // r15
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rcx
  __int32 v60; // r13d
  __int64 v61; // rbx
  _QWORD *v62; // rax
  __int64 v63; // rdi
  _QWORD *v64; // rbx
  __int64 v65; // rdx
  _OWORD *v66; // rax
  __int128 v67; // xmm0
  __int64 v68; // rcx
  char v69; // si
  __int64 v70; // rbx
  __int64 v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __m128 *v75; // rdi
  __int64 v76; // r14
  __int64 v77; // r12
  __int64 v78; // rbx
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // r15
  __int64 v81; // r15
  int v82; // eax
  char v83; // cl
  unsigned __int64 v84; // rax
  __m128 v85; // xmm0
  __int64 v86; // rcx
  __int64 v87; // r14
  int v88; // edi
  __m128 v89; // xmm6
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 k; // rdi
  __int64 v95; // r15
  __int64 v96; // rdx
  __int64 v97; // rdx
  void *v98; // rax
  __int64 v99; // rcx
  void *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  void *v104; // rax
  __int64 v105; // r9
  unsigned __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rcx
  unsigned __int64 v111; // r14
  __int64 v112; // r12
  __int64 v113; // rbx
  __int64 v114; // rax
  _QWORD *v115; // rcx
  __int64 v116; // rdx
  _QWORD *v117; // rax
  _QWORD *v118; // rdi
  __int64 v119; // rdx
  _QWORD *v120; // r14
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 m; // rax
  __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v129; // rcx
  __int64 v130; // rdi
  _QWORD *v131; // rax
  __int64 v132; // rax
  _QWORD *v133; // rcx
  __int64 v134; // rdi
  __int64 v135; // rcx
  __int128 v136; // xmm1
  _QWORD *v137; // rdi
  __int64 v138; // rdx
  __int128 v139; // rdi
  _QWORD *v140; // rbx
  __int64 v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 n; // rax
  __int64 v145; // rdx
  __int128 v146; // [rsp+30h] [rbp-50h]
  __int128 v147; // [rsp+40h] [rbp-40h] BYREF
  __int64 v148; // [rsp+50h] [rbp-30h]
  __int64 v149; // [rsp+58h] [rbp-28h] BYREF
  _OWORD *v150; // [rsp+60h] [rbp-20h]
  __int64 v151; // [rsp+68h] [rbp-18h]
  __int64 v152; // [rsp+70h] [rbp-10h] BYREF
  __int64 v153; // [rsp+78h] [rbp-8h]
  __int64 v154; // [rsp+80h] [rbp+0h]
  __int64 v155; // [rsp+90h] [rbp+10h] BYREF
  __int64 v156; // [rsp+98h] [rbp+18h]
  __int128 v157; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v158; // [rsp+B0h] [rbp+30h]
  __int64 *v159; // [rsp+B8h] [rbp+38h]
  __int64 v160; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v161; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v162; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v163; // [rsp+E8h] [rbp+68h]
  __m256i v164; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v165; // [rsp+110h] [rbp+90h]
  __m256i v166; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v167; // [rsp+150h] [rbp+D0h]
  __int64 v168; // [rsp+160h] [rbp+E0h]
  __int64 v169; // [rsp+168h] [rbp+E8h] BYREF
  __int128 v170; // [rsp+170h] [rbp+F0h]
  __int64 v171; // [rsp+180h] [rbp+100h]
  __int64 v172; // [rsp+188h] [rbp+108h]
  __int128 v173; // [rsp+190h] [rbp+110h] BYREF
  __int64 v174; // [rsp+1A0h] [rbp+120h]
  char v175; // [rsp+1B7h] [rbp+137h] BYREF
  __int64 v176; // [rsp+1B8h] [rbp+138h]
  __m256i v177; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v178; // [rsp+1E0h] [rbp+160h]
  __int128 v179; // [rsp+1F0h] [rbp+170h]
  _BYTE v180[24]; // [rsp+200h] [rbp+180h] BYREF
  __int128 v181; // [rsp+218h] [rbp+198h] BYREF
  __int64 v182; // [rsp+228h] [rbp+1A8h]
  __int128 v183; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v184; // [rsp+240h] [rbp+1C0h]
  __int64 v185; // [rsp+250h] [rbp+1D0h]
  __m256i v186; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v187; // [rsp+280h] [rbp+200h]
  __int128 v188; // [rsp+290h] [rbp+210h]
  __int128 v189; // [rsp+2A0h] [rbp+220h]
  __int128 v190; // [rsp+2B0h] [rbp+230h]
  __int64 v191; // [rsp+2C0h] [rbp+240h]
  unsigned __int8 v192; // [rsp+2C8h] [rbp+248h]
  _BYTE v193[7]; // [rsp+2C9h] [rbp+249h]
  __int128 v194; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v195; // [rsp+2E0h] [rbp+260h]
  __int64 (__fastcall **v196)(); // [rsp+2E8h] [rbp+268h]
  __int64 v197; // [rsp+2F0h] [rbp+270h]
  __int64 v198; // [rsp+2F8h] [rbp+278h]
  __int64 v199; // [rsp+300h] [rbp+280h]
  __int64 v200; // [rsp+308h] [rbp+288h]
  __int64 v201; // [rsp+310h] [rbp+290h]
  __int64 v202; // [rsp+318h] [rbp+298h]
  __int128 v203; // [rsp+320h] [rbp+2A0h] BYREF
  _BYTE v204[48]; // [rsp+330h] [rbp+2B0h]
  _BYTE v205[96]; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v206; // [rsp+3C0h] [rbp+340h]
  unsigned __int8 v207; // [rsp+3C8h] [rbp+348h]
  _DWORD v208[4]; // [rsp+3C9h] [rbp+349h]
  char v209; // [rsp+3DBh] [rbp+35Bh]
  char v210; // [rsp+3DCh] [rbp+35Ch]
  char v211; // [rsp+3DDh] [rbp+35Dh]
  char v212; // [rsp+3DEh] [rbp+35Eh]
  char v213; // [rsp+3DFh] [rbp+35Fh]
  __int64 v214; // [rsp+3E0h] [rbp+360h]
  char v215; // [rsp+3EDh] [rbp+36Dh]
  char v216; // [rsp+3EEh] [rbp+36Eh]
  char v217; // [rsp+3EFh] [rbp+36Fh]
  char v218; // [rsp+3F0h] [rbp+370h]
  char v219; // [rsp+3F1h] [rbp+371h]
  char v220; // [rsp+3F2h] [rbp+372h]
  char v221; // [rsp+3F3h] [rbp+373h]
  char v222; // [rsp+3F4h] [rbp+374h]
  char v223; // [rsp+3F5h] [rbp+375h]
  char v224; // [rsp+3F6h] [rbp+376h]
  char v225; // [rsp+3F7h] [rbp+377h]
  char v226; // [rsp+3F8h] [rbp+378h]
  char v227; // [rsp+3F9h] [rbp+379h]
  char v228; // [rsp+3FAh] [rbp+37Ah]
  char v229; // [rsp+3FBh] [rbp+37Bh]
  char v230; // [rsp+3FCh] [rbp+37Ch]
  char v231; // [rsp+3FDh] [rbp+37Dh]
  char v232; // [rsp+3FEh] [rbp+37Eh]
  char v233; // [rsp+3FFh] [rbp+37Fh]
  char v234; // [rsp+400h] [rbp+380h]
  char v235; // [rsp+401h] [rbp+381h]
  char v236; // [rsp+402h] [rbp+382h]
  char v237; // [rsp+403h] [rbp+383h]
  char v238; // [rsp+404h] [rbp+384h]
  char v239; // [rsp+405h] [rbp+385h]
  char v240; // [rsp+406h] [rbp+386h]
  char v241; // [rsp+407h] [rbp+387h]
  __int64 v242; // [rsp+408h] [rbp+388h]

  v242 = -2;
  v2 = a2;
  v201 = a1;
  sub_141473FA0((unsigned int)&v152, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), (unsigned int)&unk_14175A8CD, 24);
  v199 = v153;
  v197 = v154;
  sub_14148D130(v205, v153, v154);
  if ( *(_QWORD *)v205 == -1 )
  {
    sub_140018650(&v205[8]);
LABEL_26:
    *(_QWORD *)&v173 = 0;
    v174 = 0;
LABEL_27:
    *(_QWORD *)&v167 = 0;
    v168 = 0;
    goto LABEL_28;
  }
  v202 = *(_QWORD *)v205;
  *(_OWORD *)v205 = *(_OWORD *)&v205[8];
  *(_OWORD *)&v205[16] = 0;
  v214 = *(_QWORD *)v205;
  *(_OWORD *)&v205[32] = *(_OWORD *)v205;
  sub_1408A6200(&v186, v205);
  v3 = v186.m256i_i8[0];
  if ( v186.m256i_i8[0] == -1 )
  {
    sub_140348CF0(&v186);
    if ( v202 )
      sub_140001660(v214, v202, 1);
    goto LABEL_26;
  }
  v164 = v186;
  if ( v186.m256i_i8[0] == 5 )
  {
    *(_QWORD *)v204 = v164.m256i_i64[3];
    v203 = *(_OWORD *)&v164.m256i_u64[1];
  }
  if ( v202 )
    sub_140001660(v214, v202, 1);
  if ( v3 != 5 )
  {
    sub_1400104F0(&v164);
    goto LABEL_26;
  }
  v173 = v203;
  v174 = *(_QWORD *)v204;
  v4 = v203;
  if ( !(_QWORD)v203 )
    goto LABEL_27;
  v198 = v2;
  v214 = *((_QWORD *)&v173 + 1);
LABEL_10:
  v5 = v4 + 360;
  v6 = *(unsigned __int16 *)(v4 + 626);
  v202 = v4;
  v7 = (_QWORD *)(v4 - 8);
  v200 = v6;
  v8 = 3LL * (unsigned int)(8 * v6);
  v9 = -1;
  do
  {
    if ( !v8 )
    {
      v9 = v200;
      v2 = v198;
LABEL_20:
      if ( !v214 )
        goto LABEL_27;
      --v214;
      v4 = *(_QWORD *)(v202 + 8 * v9 + 632);
      goto LABEL_10;
    }
    v10 = v5 + 24;
    v11 = *(_QWORD *)(v5 + 16);
    v12 = v11 - 22;
    if ( v11 >= 0x16 )
      v11 = 22;
    v13 = -(__int64)v12;
    v14 = sub_1416847B0(aProjectlessThr, *(_QWORD *)(v5 + 8), v11);
    if ( v14 )
      v13 = v14;
    v15 = (v13 > 0) - (v13 < 0);
    v7 += 4;
    ++v9;
    v8 -= 24;
    v5 = v10;
  }
  while ( v15 == 1 );
  v2 = v198;
  if ( v15 )
    goto LABEL_20;
  if ( *((_BYTE *)v7 - 24) != 4 )
    goto LABEL_27;
  v31 = *(v7 - 1);
  v32 = v31 + 32LL * *v7;
  v236 = 1;
  sub_14099A8F0(v205, v31, v32);
  v168 = *(_QWORD *)&v205[16];
  v167 = *(_OWORD *)v205;
LABEL_28:
  v232 = 1;
  sub_140499030(v205);
  if ( *(_QWORD *)v205 == -1 )
  {
    v21 = v167;
    v17 = 0;
    goto LABEL_88;
  }
  v202 = *(_QWORD *)v205;
  v16 = *(_QWORD *)&v205[16];
  v214 = *(_QWORD *)&v205[8];
  sub_140429C50(v205, *(_QWORD *)&v205[8], *(_QWORD *)&v205[16], 32770);
  if ( v207 == 0xFF )
  {
    *(_OWORD *)&v204[32] = *(_OWORD *)&v205[48];
    *(_OWORD *)&v204[16] = *(_OWORD *)&v205[32];
    *(_OWORD *)v204 = *(_OWORD *)&v205[16];
    v203 = *(_OWORD *)v205;
    *(_QWORD *)v180 = &v203;
    *(_QWORD *)&v180[8] = sub_140FB8910;
    sub_14149C0F0(&v177, &unk_141757A98, v180);
    v17 = v177.m256i_i64[0];
    LOBYTE(v18) = v177.m256i_i8[8];
    *(_QWORD *)v180 = *(__int64 *)((char *)&v177.m256i_i64[1] + 1);
    *(_QWORD *)&v180[7] = v177.m256i_i64[2];
    sub_14043D020(&v203);
    *(_QWORD *)&v183 = *(_QWORD *)v180;
    *(_QWORD *)((char *)&v183 + 7) = *(_QWORD *)&v180[7];
    *(_QWORD *)&v194 = v183;
    *(_QWORD *)((char *)&v194 + 7) = *(_QWORD *)&v180[7];
    v164.m256i_i64[0] = v194;
    *(__int64 *)((char *)v164.m256i_i64 + 7) = *(_QWORD *)&v180[7];
    v22 = 10;
    goto LABEL_38;
  }
  *(_QWORD *)&v183 = *(_QWORD *)&v205[17];
  *(_QWORD *)((char *)&v183 + 7) = *(_QWORD *)&v205[24];
  v187 = *(_OWORD *)&v205[32];
  v188 = *(_OWORD *)&v205[48];
  v189 = *(_OWORD *)&v205[64];
  v190 = *(_OWORD *)&v205[80];
  *(_DWORD *)v193 = v208[0];
  *(_DWORD *)&v193[3] = *(_DWORD *)((char *)v208 + 3);
  *(_QWORD *)((char *)&v194 + 7) = *(_QWORD *)&v205[24];
  *(_QWORD *)&v194 = v183;
  v186.m256i_i8[16] = v205[16];
  v186.m256i_i64[3] = *(_QWORD *)((char *)&v194 + 7);
  *(__int64 *)((char *)&v186.m256i_i64[2] + 1) = v183;
  *(_OWORD *)v186.m256i_i8 = *(_OWORD *)v205;
  v191 = v206;
  v192 = v207;
  sub_140FB95D0(&v203, &v186, 0, 500000000);
  if ( (_QWORD)v203 == -1 )
  {
    sub_140499D50(&v203, &v186);
    if ( (_QWORD)v203 == -1 )
    {
      v33 = *((_QWORD *)&v203 + 1);
      *(_QWORD *)&v183 = *(_QWORD *)&v204[1];
      *(_QWORD *)((char *)&v183 + 7) = *(_QWORD *)&v204[8];
      *(_QWORD *)&v194 = v183;
      *(_QWORD *)((char *)&v194 + 7) = *(_QWORD *)&v204[8];
      v161 = *((_QWORD *)&v203 + 1);
      LOBYTE(v162) = v204[0];
      *(_QWORD *)((char *)&v162 + 1) = v194;
      *((_QWORD *)&v162 + 1) = *(_QWORD *)&v204[8];
      v34 = v162;
      v163 = v167;
      sub_14049A2F0((unsigned int)&v203, (unsigned int)&v186, DWORD2(v203), v162, v167, *((__int64 *)&v167 + 1));
      if ( (_QWORD)v203 == -1 )
      {
        v35 = *((_QWORD *)&v203 + 1);
        *(_QWORD *)&v183 = *(_QWORD *)&v204[1];
        *(_QWORD *)((char *)&v183 + 7) = *(_QWORD *)&v204[8];
        *(_QWORD *)&v194 = v183;
        *(_QWORD *)((char *)&v194 + 7) = *(_QWORD *)&v204[8];
        v169 = *((_QWORD *)&v203 + 1);
        LOBYTE(v170) = v204[0];
        *(_QWORD *)((char *)&v170 + 1) = v194;
        *((_QWORD *)&v170 + 1) = *(_QWORD *)&v204[8];
        v18 = *(_QWORD *)&v204[8];
        if ( *(_QWORD *)&v204[8] )
        {
          v36 = 8 * (unsigned int)v192;
          v37 = *(__int64 *)((char *)&off_14175ED60 + v36);
          v38 = *(_QWORD *)((char *)&unk_14175ED78 + v36);
          v233 = 1;
          sub_140FB96B0(v205, &v186, v37, v38);
          if ( *(_QWORD *)v205 == -1 )
          {
            v200 = v34;
            v198 = v33;
            v160 = 0;
            v43 = (__int64 *)v170;
            v44 = (__int64 *)(v170 + 48 * v18);
            *(_QWORD *)&v157 = v170;
            *((_QWORD *)&v157 + 1) = v170;
            v158 = v35;
            v159 = v44;
            v45 = 0;
            while ( v43 != v44 )
            {
              v46 = v43 + 6;
              *((_QWORD *)&v157 + 1) = v43 + 6;
              v47 = *v43;
              v185 = v43[5];
              v184 = *(_OWORD *)(v43 + 3);
              v183 = *(_OWORD *)(v43 + 1);
              if ( v47 == -1 )
                break;
              *(_QWORD *)v180 = v47;
              v182 = v185;
              v181 = v184;
              *(_OWORD *)&v180[8] = v183;
              *(_QWORD *)&v194 = &v181;
              *((_QWORD *)&v194 + 1) = &off_14175AD88;
              v195 = (__int64)v180;
              v196 = &off_14175AD88;
              sub_140429E20(
                (unsigned int)&v177,
                (unsigned int)&v186,
                (unsigned int)aUpdateThreadsS_0,
                68,
                (__int64)&v194,
                2);
              if ( v177.m256i_i64[0] != -1 )
              {
                *(_OWORD *)&v204[32] = v179;
                *(_OWORD *)&v204[16] = v178;
                *(_OWORD *)v204 = *(_OWORD *)&v177.m256i_u64[2];
                v203 = *(_OWORD *)v177.m256i_i8;
                sub_14046B820(v205, &v203);
                v17 = *(_QWORD *)&v205[8];
                v22 = *(_QWORD *)v205;
                LOBYTE(v18) = v205[16];
                v164 = *(__m256i *)&v205[17];
                v165 = *(_OWORD *)&v205[49];
                *(_OWORD *)v166.m256i_i8 = *(_OWORD *)&v205[65];
                *(_OWORD *)((char *)&v166.m256i_u64[1] + 7) = *(_OWORD *)&v205[80];
                sub_1402C34C0(v180);
                v237 = 1;
                sub_140332E50(&v157);
                v33 = v198;
                v34 = v200;
                v233 = 0;
                sub_14043CC20(&v186);
                goto LABEL_58;
              }
              v45 += v177.m256i_i64[1];
              v160 = v45;
              if ( *(_QWORD *)v180 )
                sub_140001660(*(_QWORD *)&v180[8], *(_QWORD *)v180, 1);
              if ( (_QWORD)v181 )
                sub_140001660(*((_QWORD *)&v181 + 1), v181, 1);
              v43 = v46;
            }
            v237 = 1;
            sub_140332E50(&v157);
            v17 = v45;
            v33 = v198;
            v34 = v200;
            v237 = 0;
            sub_14046C5E0(&v177, &v186);
            if ( v177.m256i_i64[0] != -1 )
            {
              *(_OWORD *)&v204[32] = v179;
              *(_OWORD *)&v204[16] = v178;
              *(_OWORD *)v204 = *(_OWORD *)&v177.m256i_u64[2];
              v203 = *(_OWORD *)v177.m256i_i8;
              v237 = 0;
              sub_14046B8B0(v205, &v203);
              v17 = *(_QWORD *)&v205[8];
              v22 = *(_QWORD *)v205;
              LOBYTE(v18) = v205[16];
              v164 = *(__m256i *)&v205[17];
              v165 = *(_OWORD *)&v205[49];
              *(_OWORD *)v166.m256i_i8 = *(_OWORD *)&v205[65];
              *(_OWORD *)((char *)&v166.m256i_u64[1] + 7) = *(_OWORD *)&v205[80];
              goto LABEL_58;
            }
            if ( v17 )
            {
              v237 = 0;
              sub_140FB96B0(&v203, &v186, aPragmaWalCheck, 28);
              if ( (_QWORD)v203 != -1 )
              {
                *(_OWORD *)&v205[48] = *(_OWORD *)&v204[32];
                *(_OWORD *)&v205[32] = *(_OWORD *)&v204[16];
                *(_OWORD *)&v205[16] = *(_OWORD *)v204;
                *(_OWORD *)v205 = v203;
                if ( *(_QWORD *)off_141EC8D80 >= 2u )
                {
                  *(_QWORD *)v180 = v205;
                  *(_QWORD *)&v180[8] = sub_140FB8910;
                  v177.m256i_i64[0] = (__int64)aCodexmateLibCo_21;
                  v177.m256i_i64[1] = 47;
                  v177.m256i_i64[2] = (__int64)aCodexmateLibCo_21;
                  v177.m256i_i64[3] = 47;
                  *(_QWORD *)&v178 = &off_14175ACF8;
                  sub_140985BA0(&unk_14175ACA9, v180, 2, &v177);
                }
                v237 = 0;
                sub_14043D020(v205);
              }
              if ( *(_QWORD *)off_141EC8D80 >= 2u )
              {
                v177.m256i_i64[0] = v214;
                v177.m256i_i64[1] = v16;
                *(_QWORD *)&v203 = &v160;
                *((_QWORD *)&v203 + 1) = sub_1414AC520;
                *(_QWORD *)v204 = &v177;
                *(_QWORD *)&v204[8] = sub_14148F3A0;
                *(_QWORD *)v205 = aCodexmateLibCo_21;
                *(_QWORD *)&v205[8] = 47;
                *(_QWORD *)&v205[16] = aCodexmateLibCo_21;
                *(_QWORD *)&v205[24] = 47;
                *(_QWORD *)&v205[32] = &off_14175AD70;
                v237 = 0;
                sub_140985BA0(&unk_14175AD10, &v203, 2, v205);
                v17 = v160;
              }
            }
            else
            {
              v17 = 0;
            }
            sub_1403210C0(&v161);
            sub_14043C900(&v186);
            v21 = v163;
            if ( v202 )
              sub_140001660(v214, v202, 1);
            goto LABEL_88;
          }
          *(_OWORD *)&v204[32] = *(_OWORD *)&v205[48];
          *(_OWORD *)&v204[17] = *(_OWORD *)&v205[33];
          *(_OWORD *)&v204[1] = *(_OWORD *)&v205[17];
          v203 = *(_OWORD *)v205;
          v204[0] = v205[16];
          v233 = 1;
          sub_14046B790(v205, &v203);
          v17 = *(_QWORD *)&v205[8];
          v22 = *(_QWORD *)v205;
          LOBYTE(v18) = v205[16];
          v164 = *(__m256i *)&v205[17];
          v165 = *(_OWORD *)&v205[49];
          *(_OWORD *)v166.m256i_i8 = *(_OWORD *)&v205[65];
          *(_OWORD *)((char *)&v166.m256i_u64[1] + 7) = *(_OWORD *)&v205[80];
        }
        else
        {
          v22 = -1;
          v17 = 0;
        }
        sub_140009EF0(&v169);
      }
      else
      {
        *(_OWORD *)&v205[48] = *(_OWORD *)&v204[32];
        *(_OWORD *)&v205[32] = *(_OWORD *)&v204[16];
        *(_OWORD *)&v205[16] = *(_OWORD *)v204;
        *(_OWORD *)v205 = v203;
        *(_QWORD *)v180 = v205;
        *(_QWORD *)&v180[8] = sub_140FB8910;
        sub_14149C0F0(&v177, &unk_141757ACA, v180);
        v17 = v177.m256i_i64[0];
        LOBYTE(v18) = v177.m256i_i8[8];
        *(_QWORD *)v180 = *(__int64 *)((char *)&v177.m256i_i64[1] + 1);
        *(_QWORD *)&v180[7] = v177.m256i_i64[2];
        sub_14043D020(v205);
        *(_QWORD *)&v183 = *(_QWORD *)v180;
        *(_QWORD *)((char *)&v183 + 7) = *(_QWORD *)&v180[7];
        *(_QWORD *)&v194 = v183;
        *(_QWORD *)((char *)&v194 + 7) = *(_QWORD *)&v180[7];
        v164.m256i_i64[0] = v194;
        *(__int64 *)((char *)v164.m256i_i64 + 7) = *(_QWORD *)&v180[7];
        v22 = 10;
      }
LABEL_58:
      if ( v33 )
      {
        v39 = *((_QWORD *)&v162 + 1);
        *(_QWORD *)&v205[8] = 0;
        *(_QWORD *)&v205[16] = v33;
        *(_QWORD *)&v205[24] = v34;
        *(_QWORD *)&v205[40] = 0;
        *(_QWORD *)&v205[48] = v33;
        *(_QWORD *)&v205[56] = v34;
        v40 = 1;
      }
      else
      {
        v40 = 0;
        v39 = 0;
      }
      *(_QWORD *)v205 = v40;
      *(_QWORD *)&v205[32] = v40;
      *(_QWORD *)&v205[64] = v39;
      sub_140308850(&v203, v205);
      for ( i = v203; (_QWORD)v203; i = v203 )
      {
        v42 = *(_QWORD *)(i + 24LL * *(_QWORD *)v204 + 8);
        if ( v42 )
          sub_140001660(*(_QWORD *)(i + 24LL * *(_QWORD *)v204 + 16), v42, 1);
        sub_140308850(&v203, v205);
      }
      goto LABEL_37;
    }
    *(_OWORD *)&v205[48] = *(_OWORD *)&v204[32];
    *(_OWORD *)&v205[32] = *(_OWORD *)&v204[16];
    *(_OWORD *)&v205[16] = *(_OWORD *)v204;
    *(_OWORD *)v205 = v203;
    *(_QWORD *)v180 = v205;
    *(_QWORD *)&v180[8] = sub_140FB8910;
    sub_14149C0F0(&v177, &unk_141757AB2, v180);
    v17 = v177.m256i_i64[0];
    LOBYTE(v18) = v177.m256i_i8[8];
    *(_QWORD *)v180 = *(__int64 *)((char *)&v177.m256i_i64[1] + 1);
    *(_QWORD *)&v180[7] = v177.m256i_i64[2];
    sub_14043D020(v205);
    *(_QWORD *)&v183 = *(_QWORD *)v180;
    *(_QWORD *)((char *)&v183 + 7) = *(_QWORD *)&v180[7];
    *(_QWORD *)&v194 = v183;
    *(_QWORD *)((char *)&v194 + 7) = *(_QWORD *)&v180[7];
    v19 = v194;
    v20 = *(_QWORD *)&v180[7];
  }
  else
  {
    *(_OWORD *)&v205[48] = *(_OWORD *)&v204[32];
    *(_OWORD *)&v205[32] = *(_OWORD *)&v204[16];
    *(_OWORD *)&v205[16] = *(_OWORD *)v204;
    *(_OWORD *)v205 = v203;
    *(_QWORD *)v180 = v205;
    *(_QWORD *)&v180[8] = sub_140FB8910;
    sub_14149C0F0(&v177, &unk_141757B41, v180);
    v17 = v177.m256i_i64[0];
    LOBYTE(v18) = v177.m256i_i8[8];
    *(_QWORD *)v180 = *(__int64 *)((char *)&v177.m256i_i64[1] + 1);
    *(_QWORD *)&v180[7] = v177.m256i_i64[2];
    sub_14043D020(v205);
    v19 = *(_QWORD *)v180;
    v20 = *(_QWORD *)&v180[7];
  }
  v164.m256i_i64[0] = v19;
  *(__int64 *)((char *)v164.m256i_i64 + 7) = v20;
  v22 = 10;
LABEL_37:
  sub_14043C900(&v186);
LABEL_38:
  if ( v202 )
    sub_140001660(v214, v202, 1);
  v21 = v167;
  if ( v22 != -1 )
  {
    v23 = v201;
    *(_OWORD *)(v201 + 88) = *(_OWORD *)((char *)&v166.m256i_u64[1] + 7);
    v24 = *(_OWORD *)v164.m256i_i8;
    v25 = *(_OWORD *)&v164.m256i_u64[2];
    v26 = v165;
    *(_OWORD *)(v23 + 73) = *(_OWORD *)v166.m256i_i8;
    *(_OWORD *)(v23 + 57) = v26;
    *(_OWORD *)(v23 + 41) = v25;
    *(_OWORD *)(v23 + 25) = v24;
    *(_QWORD *)(v23 + 8) = v22;
    *(_QWORD *)(v23 + 16) = v17;
    *(_BYTE *)(v23 + 24) = v18;
    *(_QWORD *)v23 = -1;
    if ( v21 )
    {
      v27 = v168;
      *(_QWORD *)&v205[8] = 0;
      *(_QWORD *)&v205[16] = v21;
      *(_QWORD *)&v205[24] = *((_QWORD *)&v167 + 1);
      *(_QWORD *)&v205[40] = 0;
      *(_QWORD *)&v205[48] = v21;
      *(_QWORD *)&v205[56] = *((_QWORD *)&v167 + 1);
      v28 = 1;
    }
    else
    {
      v28 = 0;
      v27 = 0;
    }
    *(_QWORD *)v205 = v28;
    *(_QWORD *)&v205[32] = v28;
    *(_QWORD *)&v205[64] = v27;
    v236 = 1;
    sub_140308850(&v186, v205);
    for ( j = v186.m256i_i64[0]; v186.m256i_i64[0]; j = v186.m256i_i64[0] )
    {
      v30 = *(_QWORD *)(j + 24 * v186.m256i_i64[2] + 8);
      if ( v30 )
        sub_140001660(*(_QWORD *)(j + 24 * v186.m256i_i64[2] + 16), v30, 1);
      v236 = 1;
      sub_140308850(&v186, v205);
    }
    goto LABEL_206;
  }
LABEL_88:
  v155 = v17;
  v232 = 1;
  v202 = *((_QWORD *)&v167 + 1);
  collect_project_state_from_active_db((__int64)&v164, v2, v21, *((__int64 *)&v167 + 1));
  v217 = 1;
  v216 = 1;
  v215 = 1;
  sub_140499F40(v205, v173, *((__int64 *)&v173 + 1), (__int64)&xmmword_14175AE08, 0x1Eu);
  v217 = 1;
  v216 = 1;
  v215 = 0;
  sub_140498AE0(&v169, v205, &v164);
  v48 = *((_QWORD *)&v170 + 1);
  if ( !*((_QWORD *)&v170 + 1) )
  {
    v51 = v166.m256i_i64[3];
    v235 = 1;
    v234 = 1;
    sub_140499030(v205);
    if ( v17 )
    {
      v186.m256i_i64[0] = (__int64)&v155;
      v186.m256i_i64[1] = (__int64)sub_1414AC520;
      sub_14149C0F0(&v149, &unk_14175AE7F, &v186);
    }
    else
    {
      nullsub_1(v52);
      v66 = (_OWORD *)sub_140001650(89, 1);
      if ( !v66 )
        sub_1416C2D4B(1, 89);
      *(_OWORD *)((char *)v66 + 73) = *(__int128 *)((char *)&xmmword_14175AE66 + 9);
      v66[4] = xmmword_14175AE66;
      v66[3] = xmmword_14175AE56;
      v66[2] = xmmword_14175AE46;
      v66[1] = xmmword_14175AE36;
      *v66 = xmmword_14175AE26;
      v149 = 89;
      v150 = v66;
      v151 = 89;
    }
    v67 = *(_OWORD *)v205;
    v68 = v201;
    *(_OWORD *)(v201 + 72) = *(_OWORD *)&v205[16];
    *(_OWORD *)(v68 + 56) = v67;
    *(_QWORD *)v68 = v149;
    *(_QWORD *)(v68 + 8) = v150;
    *(_QWORD *)(v68 + 16) = v151;
    *(_QWORD *)(v68 + 24) = -1;
    *(_QWORD *)(v68 + 88) = 0;
    *(_QWORD *)(v68 + 96) = v51;
    *(_QWORD *)(v68 + 104) = v17;
    *(_BYTE *)(v68 + 112) = 0;
    v63 = v170;
    goto LABEL_110;
  }
  v163 = v21;
  v49 = *(_QWORD *)(v2 + 776);
  v50 = *(_QWORD *)(v2 + 784);
  v235 = 1;
  v234 = 1;
  sub_141486710(v205, v199, v197);
  if ( *(_DWORD *)v205 != 2 )
  {
    v186 = *(__m256i *)v205;
    *(_QWORD *)&v190 = *(_QWORD *)&v205[80];
    v189 = *(_OWORD *)&v205[64];
    v188 = *(_OWORD *)&v205[48];
    v187 = *(_OWORD *)&v205[32];
    if ( *(_QWORD *)v205 == 2 )
      goto LABEL_94;
    v235 = 1;
    v234 = 1;
    sub_141473FA0((unsigned int)&v177, v49, v50, (unsigned int)&unk_14175A907, 21);
    v205[0] = 1;
    v60 = v177.m256i_i32[4];
    v214 = v177.m256i_i64[1];
    v61 = sub_14147B9A0(v205, v177.m256i_i64[1], v177.m256i_i64[2]);
    if ( !v61 )
    {
      sub_140FFA6E0(&v161);
      v186.m256i_i32[2] = v162;
      v186.m256i_i64[0] = v161;
      sub_140FFB250(&v183, &v186, 0);
      v87 = v17;
      v88 = v183;
      v89 = (__m128)*(unsigned __int64 *)((char *)&v183 + 4);
      *(_QWORD *)&v203 = 0;
      *((_QWORD *)&v203 + 1) = 1;
      *(_QWORD *)v204 = 0;
      v186.m256i_i64[2] = 1610612768;
      v186.m256i_i64[0] = (__int64)&v203;
      v186.m256i_i64[1] = (__int64)&off_1417A9B00;
      if ( (unsigned __int8)sub_140FFA7F0((char *)&v162 + 4, &v186) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_3,
          55,
          (unsigned int)&v175,
          (unsigned int)&unk_1417A5580,
          (__int64)&off_1417A9BB8);
      *(_QWORD *)&v205[16] = *(_QWORD *)v204;
      *(_OWORD *)v205 = v203;
      *(_DWORD *)&v205[84] = v88;
      *(_DWORD *)&v205[72] = 1;
      _mm_storel_ps((double *)&v205[76], v89);
      *(_DWORD *)&v205[24] = 0;
      *(_QWORD *)&v205[32] = aYMDHMS;
      *(_QWORD *)&v205[40] = 13;
      *(_OWORD *)&v205[48] = 8u;
      v205[64] = 0;
      sub_141356270(&v186);
      v183 = *(_OWORD *)v186.m256i_i8;
      v186.m256i_i64[0] = (__int64)v205;
      v186.m256i_i64[1] = (__int64)sub_140A68C70;
      v186.m256i_i64[2] = (__int64)&v183;
      v186.m256i_i64[3] = (__int64)sub_140421AE0;
      sub_14149C0F0(v180, &unk_14175A929, &v186);
      v198 = *(_QWORD *)&v180[8];
      sub_141473FA0((unsigned int)&v203, v214, v60, *(_DWORD *)&v180[8], *(__int64 *)&v180[16]);
      v17 = v87;
      if ( *(_QWORD *)v180 )
        sub_140001660(v198, *(_QWORD *)v180, 1);
      v172 = *((_QWORD *)&v203 + 1);
      if ( sub_141486360(v199, v197, *((_QWORD *)&v203 + 1), *(_QWORD *)v204) != 1 )
      {
        v176 = v203;
        v194 = *(_OWORD *)v204;
        if ( *(_QWORD *)v205 != -1 && *(_QWORD *)v205 )
          sub_140001660(*(_QWORD *)&v205[8], *(_QWORD *)v205, 1);
        if ( v177.m256i_i64[0] )
          sub_140001660(v214, v177.m256i_i64[0], 1);
        goto LABEL_95;
      }
      v61 = v90;
      if ( (_QWORD)v203 )
        sub_140001660(v172, v203, 1);
      if ( *(_QWORD *)v205 != -1 && *(_QWORD *)v205 )
        sub_140001660(*(_QWORD *)&v205[8], *(_QWORD *)v205, 1);
    }
    if ( v177.m256i_i64[0] )
      sub_140001660(v214, v177.m256i_i64[0], 1);
    v157 = v194;
    v62 = (_QWORD *)v201;
    *(_OWORD *)(v201 + 32) = v194;
    v62[1] = 2;
    v62[2] = v61;
    *v62 = -1;
    v63 = v170;
    v64 = (_QWORD *)(v170 + 8);
    do
    {
      v65 = *(v64 - 1);
      if ( v65 )
        sub_140001660(*v64, v65, 1);
      v64 += 3;
      --v48;
    }
    while ( v48 );
LABEL_110:
    if ( v169 )
      sub_140001660(v63, 24 * v169, 8);
    v69 = 1;
    sub_140320DA0(&v166.m256i_u64[1]);
    v70 = *((_QWORD *)&v165 + 1);
    v71 = v165;
    if ( *((_QWORD *)&v165 + 1) )
      goto LABEL_192;
    goto LABEL_196;
  }
  v186.m256i_i64[1] = *(_QWORD *)&v205[8];
  v186.m256i_i64[0] = 2;
LABEL_94:
  v235 = 1;
  v234 = 1;
  sub_140018650(&v186.m256i_u64[1]);
  v176 = -1;
LABEL_95:
  v146 = v194;
  v231 = 1;
  v230 = 1;
  v229 = 1;
  sub_140499F40(&v186, v173, *((__int64 *)&v173 + 1), (__int64)aProjectOrder, 0xDu);
  v213 = 1;
  sub_14032C050(v205, &v169);
  v213 = 0;
  sub_140498AE0(&v157, &v186, v205);
  v227 = 1;
  v226 = 1;
  v225 = 1;
  v224 = 1;
  sub_140499F40(&v177, v173, *((__int64 *)&v173 + 1), (__int64)aActiveWorkspac, 0x16u);
  v223 = 1;
  v199 = v170;
  v171 = v170 + 24 * v48;
  sub_14099AC50(&v203);
  *(_QWORD *)v205 = v177.m256i_i64[1];
  *(_QWORD *)&v205[8] = v177.m256i_i64[1];
  *(_QWORD *)&v205[16] = v177.m256i_i64[0];
  *(_QWORD *)&v205[24] = v177.m256i_i64[1] + 24 * v177.m256i_i64[2];
  *(_QWORD *)&v205[32] = &v203;
  sub_1402CB930(&v186, v205);
  if ( v186.m256i_i64[2] )
  {
    v195 = v186.m256i_i64[2];
    v194 = *(_OWORD *)v186.m256i_i8;
    v223 = 0;
    sub_140321C90(&v203);
  }
  else
  {
    sub_14149C500(v205, v199);
    v54 = *(_QWORD *)v205;
    if ( *(_QWORD *)v205 == -1 )
    {
      v58 = 8;
      v59 = 0;
    }
    else
    {
      v55 = v17;
      v56 = *(_QWORD *)&v205[8];
      v57 = *(_QWORD *)&v205[16];
      nullsub_1(v53);
      v58 = sub_140001650(24, 8);
      if ( !v58 )
      {
        v199 = v56;
        v201 = v54;
        sub_1416C2D4B(8, 24);
      }
      *(_QWORD *)v58 = v54;
      *(_QWORD *)(v58 + 8) = v56;
      *(_QWORD *)(v58 + 16) = v57;
      v59 = 1;
      v17 = v55;
    }
    *(_QWORD *)&v194 = v59;
    *((_QWORD *)&v194 + 1) = v58;
    v195 = v59;
    if ( v186.m256i_i64[0] )
      sub_140001660(v186.m256i_i64[1], 24 * v186.m256i_i64[0], 8);
    v223 = 0;
    sub_140321C90(&v203);
  }
  v156 = v17;
  v198 = v2;
  v72 = v173;
  if ( !(_QWORD)v173 )
    goto LABEL_135;
  v197 = *((_QWORD *)&v173 + 1);
LABEL_120:
  v73 = v72 + 360;
  v74 = *(unsigned __int16 *)(v72 + 626);
  v214 = v72;
  v75 = (__m128 *)(v72 - 16);
  v200 = v74;
  v76 = 3LL * (unsigned int)(8 * v74);
  v77 = -1;
  do
  {
    if ( !v76 )
    {
      v77 = v200;
LABEL_130:
      if ( !v197 )
        goto LABEL_135;
      --v197;
      v72 = *(_QWORD *)(v214 + 8 * v77 + 632);
      goto LABEL_120;
    }
    v78 = v73 + 24;
    v79 = *(_QWORD *)(v73 + 16);
    v80 = v79 - 27;
    if ( v79 >= 0x1B )
      v79 = 27;
    v81 = -(__int64)v80;
    v82 = sub_1416847B0(&xmmword_14175AF2C, *(_QWORD *)(v73 + 8), v79);
    if ( v82 )
      v81 = v82;
    v83 = (v81 > 0) - (v81 < 0);
    v75 += 2;
    ++v77;
    v76 -= 24;
    v73 = v78;
  }
  while ( v83 == 1 );
  if ( v83 )
    goto LABEL_130;
  if ( v75[-1].m128_i8[0] == 5 )
  {
    v84 = v75[-1].m128_u64[1];
    if ( v84 )
    {
      v85 = *v75;
      v86 = 1;
    }
    else
    {
      v85 = 0;
      v86 = 0;
    }
    *(_OWORD *)v205 = (unsigned __int64)v86;
    *(_QWORD *)&v205[16] = v84;
    _mm_storel_ps((double *)&v205[24], v85);
    *(_OWORD *)&v205[32] = (unsigned __int64)v86;
    *(_QWORD *)&v205[48] = v84;
    *(__m128 *)&v205[56] = v85;
    v222 = 1;
    v221 = 1;
    v220 = 1;
    v219 = 1;
    v218 = 1;
    sub_1402D56C0(&v186, v205);
    v183 = *(_OWORD *)v186.m256i_i8;
    *(_QWORD *)&v184 = v186.m256i_i64[2];
  }
  else
  {
LABEL_135:
    *(_QWORD *)&v183 = 0;
    *(_QWORD *)&v184 = 0;
  }
  v91 = v166.m256i_i64[1];
  if ( v166.m256i_i64[1] )
    v91 = v166.m256i_i64[3];
  *(_OWORD *)v205 = v166.m256i_i64[1] != 0;
  *(_OWORD *)&v205[16] = *(_OWORD *)&v166.m256i_u64[1];
  *(_OWORD *)&v205[32] = *(_OWORD *)v205;
  *(_OWORD *)&v205[48] = *(_OWORD *)&v166.m256i_u64[1];
  *(_QWORD *)&v205[64] = v91;
  while ( 1 )
  {
    sub_140308470(&v177, v205);
    if ( !v177.m256i_i64[0] )
      break;
    v92 = *(_QWORD *)(v177.m256i_i64[0] + 24 * v177.m256i_i64[2] + 8);
    *(_OWORD *)v186.m256i_i8 = *(_OWORD *)(v177.m256i_i64[0] + 24 * v177.m256i_i64[2] + 16);
    *(_QWORD *)&v187 = *(_QWORD *)(v177.m256i_i64[0] + 24 * v177.m256i_i64[2] + 288);
    *(_OWORD *)&v186.m256i_u64[2] = *(_OWORD *)(v177.m256i_i64[0] + 24 * v177.m256i_i64[2] + 272);
    *(_QWORD *)&v204[16] = v187;
    *(_OWORD *)v204 = *(_OWORD *)&v186.m256i_u64[2];
    v203 = *(_OWORD *)v186.m256i_i8;
    if ( v92 == -1 )
      break;
    *(_QWORD *)v180 = v92;
    *(_OWORD *)&v180[8] = v203;
    v177.m256i_i64[2] = *(_QWORD *)&v204[16];
    *(_OWORD *)v177.m256i_i8 = *(_OWORD *)v204;
    sub_140306F50(&v186, &v183, v180, &v177);
    if ( v186.m256i_i64[0] != -1 && v186.m256i_i64[0] )
      sub_140001660(v186.m256i_i64[1], v186.m256i_i64[0], 1);
  }
  v241 = 1;
  v240 = 1;
  v239 = 1;
  v238 = 1;
  sub_140308470(&v186, v205);
  for ( k = v186.m256i_i64[0]; v186.m256i_i64[0]; k = v186.m256i_i64[0] )
  {
    v95 = 3 * v186.m256i_i64[2];
    v96 = *(_QWORD *)(k + 24 * v186.m256i_i64[2] + 8);
    if ( v96 )
      sub_140001660(*(_QWORD *)(k + 24 * v186.m256i_i64[2] + 16), v96, 1);
    v97 = *(_QWORD *)(k + 8 * v95 + 272);
    if ( v97 )
      sub_140001660(*(_QWORD *)(k + 8 * v95 + 280), v97, 1);
    v241 = 1;
    v240 = 1;
    v239 = 1;
    v238 = 1;
    sub_140308470(&v186, v205);
  }
  nullsub_1(v93);
  v98 = (void *)sub_140001650(30, 1);
  if ( !v98 )
  {
    v241 = 1;
    v240 = 1;
    v239 = 1;
    v238 = 1;
    sub_1416C2D4B(1, 30);
  }
  qmemcpy(v98, "electron-saved-workspace-roots", 30);
  *(_QWORD *)&v203 = 30;
  *((_QWORD *)&v203 + 1) = v98;
  *(_QWORD *)v204 = 30;
  v212 = 1;
  sub_140329330(&v186, v199, v171);
  *(_QWORD *)&v205[24] = v186.m256i_i64[2];
  *(_OWORD *)&v205[8] = *(_OWORD *)v186.m256i_i8;
  v205[0] = 4;
  v212 = 0;
  sub_140307860(&v186, &v173, &v203, v205);
  if ( v186.m256i_i8[0] != -1 )
  {
    v241 = 1;
    v240 = 1;
    v239 = 1;
    v238 = 1;
    sub_1400104F0(&v186);
  }
  nullsub_1(v99);
  v100 = (void *)sub_140001650(13, 1);
  if ( !v100 )
  {
    v241 = 1;
    v240 = 1;
    v239 = 1;
    v238 = 1;
    sub_1416C2D4B(1, 13);
  }
  qmemcpy(v100, "project-order", 13);
  *(_QWORD *)&v203 = 13;
  *((_QWORD *)&v203 + 1) = v100;
  *(_QWORD *)v204 = 13;
  *(_QWORD *)v205 = *((_QWORD *)&v157 + 1);
  *(_QWORD *)&v205[8] = *((_QWORD *)&v157 + 1);
  *(_QWORD *)&v205[16] = v157;
  *(_QWORD *)&v205[24] = *((_QWORD *)&v157 + 1) + 24 * v158;
  v211 = 1;
  sub_1403294D0(&v186, v205);
  *(_OWORD *)&v205[8] = *(_OWORD *)v186.m256i_i8;
  *(_QWORD *)&v205[24] = v186.m256i_i64[2];
  v205[0] = 4;
  v211 = 0;
  sub_140307860(&v186, &v173, &v203, v205);
  if ( v186.m256i_i8[0] != -1 )
  {
    v241 = 1;
    v240 = 1;
    v239 = 0;
    v238 = 1;
    sub_1400104F0(&v186);
  }
  nullsub_1(v101);
  v102 = sub_140001650(22, 1);
  if ( !v102 )
  {
    v241 = 1;
    v240 = 1;
    v239 = 0;
    v238 = 1;
    sub_1416C2D4B(1, 22);
  }
  *(_OWORD *)v102 = *(_OWORD *)aActiveWorkspac;
  *(_QWORD *)(v102 + 14) = 0x73746F6F722D6563LL;
  *(_QWORD *)&v203 = 22;
  *((_QWORD *)&v203 + 1) = v102;
  *(_QWORD *)v204 = 22;
  *(_QWORD *)v205 = *((_QWORD *)&v194 + 1);
  *(_QWORD *)&v205[8] = *((_QWORD *)&v194 + 1);
  *(_QWORD *)&v205[16] = v194;
  *(_QWORD *)&v205[24] = *((_QWORD *)&v194 + 1) + 24 * v195;
  v210 = 1;
  sub_1403294D0(&v186, v205);
  *(_OWORD *)&v205[8] = *(_OWORD *)v186.m256i_i8;
  *(_QWORD *)&v205[24] = v186.m256i_i64[2];
  v205[0] = 4;
  v210 = 0;
  sub_140307860(&v186, &v173, &v203, v205);
  if ( v186.m256i_i8[0] != -1 )
  {
    v241 = 1;
    v240 = 0;
    v239 = 0;
    v238 = 1;
    sub_1400104F0(&v186);
  }
  nullsub_1(v103);
  v104 = (void *)sub_140001650(27, 1);
  if ( !v104 )
  {
    v241 = 1;
    v240 = 0;
    v239 = 0;
    v238 = 1;
    sub_1416C2D4B(1, 27);
  }
  qmemcpy(v104, "thread-workspace-root-hints", 27);
  v177.m256i_i64[0] = 27;
  v177.m256i_i64[1] = (__int64)v104;
  v177.m256i_i64[2] = 27;
  v106 = 0;
  v107 = v183;
  if ( (_QWORD)v183 )
    v107 = v184;
  LOBYTE(v106) = (_QWORD)v183 != 0;
  *(_OWORD *)v205 = v106;
  *(_OWORD *)&v205[16] = v183;
  *(_OWORD *)&v205[32] = v106;
  *(_OWORD *)&v205[48] = v183;
  *(_QWORD *)&v205[64] = v107;
  v209 = 1;
  LOBYTE(v105) = (_QWORD)v183 != 0;
  sub_1402D6B40(&v203, v205, v107, v105);
  v186.m256i_i64[3] = *(_QWORD *)v204;
  *(_OWORD *)&v186.m256i_u64[1] = v203;
  v186.m256i_i8[0] = 5;
  v209 = 0;
  sub_140307860(v205, &v173, &v177, &v186);
  if ( v205[0] != 0xFF )
  {
    v241 = 1;
    v240 = 0;
    v239 = 0;
    v238 = 1;
    sub_1400104F0(v205);
  }
  v186.m256i_i64[3] = v174;
  *(_OWORD *)&v186.m256i_u64[1] = v173;
  v186.m256i_i8[0] = 5;
  nullsub_1(v108);
  v109 = sub_140001650(128, 1);
  if ( !v109 )
    sub_1416C2D4B(1, 128);
  *(_QWORD *)&v203 = 128;
  *((_QWORD *)&v203 + 1) = v109;
  *(_QWORD *)v204 = 0;
  *(_QWORD *)v205 = &v203;
  *(_QWORD *)&v205[8] = asc_141756910;
  *(_OWORD *)&v205[16] = 2u;
  v205[32] = 0;
  sub_140444720(&v186, v205);
  v110 = *((_QWORD *)&v203 + 1);
  if ( (_QWORD)v203 == -1 )
  {
    v117 = (_QWORD *)v201;
    *(_QWORD *)(v201 + 8) = 3;
    v117[2] = v110;
    *v117 = -1;
    v241 = 0;
    v240 = 0;
    v239 = 0;
    v238 = 1;
    sub_1400104F0(&v186);
    goto LABEL_183;
  }
  v197 = *((_QWORD *)&v203 + 1);
  v214 = v203;
  v111 = *(_QWORD *)v204;
  v228 = 1;
  sub_1400104F0(&v186);
  v112 = v153;
  v113 = v154;
  v228 = 1;
  v114 = sub_1408726C0(v153, v154, v197, v111);
  if ( v114 )
  {
    v115 = (_QWORD *)v201;
    *(_QWORD *)(v201 + 8) = 2;
    v115[2] = v114;
    *v115 = -1;
LABEL_179:
    v116 = v214;
LABEL_180:
    if ( v116 )
      sub_140001660(v197, v116, 1);
LABEL_183:
    v222 = 0;
    v221 = 0;
    v220 = 0;
    v219 = 0;
    v218 = 1;
    sub_140320DA0(&v183);
    if ( (unsigned __int64)(v176 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v172, v176, 1);
    v118 = (_QWORD *)(v199 + 8);
    do
    {
      v119 = *(v118 - 1);
      if ( v119 )
        sub_140001660(*v118, v119, 1);
      v118 += 3;
      --v48;
    }
    while ( v48 );
    if ( v169 )
      sub_140001660(v199, 24 * v169, 8);
    v69 = 0;
    v70 = *((_QWORD *)&v165 + 1);
    v71 = v165;
    if ( *((_QWORD *)&v165 + 1) )
    {
LABEL_192:
      v120 = (_QWORD *)(v71 + 8);
      do
      {
        v121 = *(v120 - 1);
        if ( v121 )
          sub_140001660(*v120, v121, 1);
        v120 += 3;
        --v70;
      }
      while ( v70 );
    }
LABEL_196:
    if ( v164.m256i_i64[3] )
      sub_140001660(v71, 24 * v164.m256i_i64[3], 8);
    if ( (_QWORD)v167 )
    {
      v122 = v168;
      *(_QWORD *)&v205[8] = 0;
      *(_QWORD *)&v205[16] = v167;
      *(_QWORD *)&v205[24] = v202;
      *(_QWORD *)&v205[40] = 0;
      *(_QWORD *)&v205[48] = v167;
      *(_QWORD *)&v205[56] = v202;
      v123 = 1;
    }
    else
    {
      v123 = 0;
      v122 = 0;
    }
    *(_QWORD *)v205 = v123;
    *(_QWORD *)&v205[32] = v123;
    *(_QWORD *)&v205[64] = v122;
    v236 = v69;
    sub_140308850(&v186, v205);
    for ( m = v186.m256i_i64[0]; v186.m256i_i64[0]; m = v186.m256i_i64[0] )
    {
      v125 = *(_QWORD *)(m + 24 * v186.m256i_i64[2] + 8);
      if ( v125 )
        sub_140001660(*(_QWORD *)(m + 24 * v186.m256i_i64[2] + 16), v125, 1);
      v236 = v69;
      sub_140308850(&v186, v205);
    }
    if ( !v69 )
    {
LABEL_207:
      v126 = v152;
      if ( v152 )
      {
        v127 = v153;
LABEL_209:
        sub_140001660(v127, v126, 1);
        return v201;
      }
      return v201;
    }
LABEL_206:
    sub_1403212D0(&v173);
    goto LABEL_207;
  }
  v228 = 1;
  sub_14148D3C0(v205, v112, v113);
  v129 = *(_QWORD *)&v205[8];
  if ( *(_QWORD *)v205 == -1 )
  {
    v131 = (_QWORD *)v201;
    *(_QWORD *)(v201 + 8) = 2;
    v131[2] = v129;
    *v131 = -1;
    goto LABEL_179;
  }
  v171 = *(_QWORD *)&v205[8];
  v200 = *(_QWORD *)v205;
  *(_OWORD *)v205 = *(_OWORD *)&v205[8];
  *(_OWORD *)&v205[16] = 0;
  sub_1408A8DF0(&v186, v205);
  if ( v186.m256i_i8[0] == -1 )
  {
    v132 = v186.m256i_i64[1];
    v133 = (_QWORD *)v201;
    *(_QWORD *)(v201 + 8) = 3;
    v133[2] = v132;
    *v133 = -1;
    v116 = v214;
    if ( v200 )
    {
      v134 = v214;
      sub_140001660(v171, v200, 1);
      v116 = v134;
    }
    goto LABEL_180;
  }
  v203 = *(_OWORD *)v186.m256i_i8;
  *(_OWORD *)v204 = *(_OWORD *)&v186.m256i_u64[2];
  sub_1400104F0(&v203);
  if ( v200 )
    sub_140001660(v171, v200, 1);
  v130 = v184;
  sub_140499030(&v186);
  v177.m256i_i64[0] = v48;
  *(_QWORD *)&v203 = v184;
  if ( v156 )
  {
    *(_QWORD *)v205 = &v155;
    *(_QWORD *)&v205[8] = sub_1414AC520;
    *(_QWORD *)&v205[16] = &v177;
    *(_QWORD *)&v205[24] = sub_1414AC520;
    *(_QWORD *)&v205[32] = &v203;
    *(_QWORD *)&v205[40] = sub_1414AC520;
    sub_14149C0F0(&v147, &unk_14175AF7F, v205);
  }
  else
  {
    *(_QWORD *)v205 = &v177;
    *(_QWORD *)&v205[8] = sub_1414AC520;
    *(_QWORD *)&v205[16] = &v203;
    *(_QWORD *)&v205[24] = sub_1414AC520;
    sub_14149C0F0(&v147, &unk_14175AF47, v205);
  }
  v135 = v201;
  *(_OWORD *)(v201 + 40) = v146;
  v136 = *(_OWORD *)&v186.m256i_u64[2];
  *(_OWORD *)(v135 + 56) = *(_OWORD *)v186.m256i_i8;
  *(_OWORD *)(v135 + 72) = v136;
  *(_OWORD *)v135 = v147;
  *(_QWORD *)(v135 + 16) = v148;
  *(_QWORD *)(v135 + 24) = v176;
  *(_QWORD *)(v135 + 32) = v172;
  *(_QWORD *)(v135 + 88) = v48;
  *(_QWORD *)(v135 + 96) = v130;
  *(_QWORD *)(v135 + 104) = v156;
  *(_BYTE *)(v135 + 112) = 1;
  if ( v214 )
    sub_140001660(v197, v214, 1);
  v222 = 0;
  v221 = 0;
  v220 = 0;
  v219 = 0;
  v218 = 0;
  sub_140320DA0(&v183);
  v137 = (_QWORD *)(v199 + 8);
  do
  {
    v138 = *(v137 - 1);
    if ( v138 )
      sub_140001660(*v137, v138, 1);
    v137 += 3;
    --v48;
  }
  while ( v48 );
  if ( v169 )
    sub_140001660(v199, 24 * v169, 8);
  v139 = v165;
  if ( *((_QWORD *)&v165 + 1) )
  {
    v140 = (_QWORD *)(v165 + 8);
    do
    {
      v141 = *(v140 - 1);
      if ( v141 )
        sub_140001660(*v140, v141, 1);
      v140 += 3;
      --*((_QWORD *)&v139 + 1);
    }
    while ( *((_QWORD *)&v139 + 1) );
  }
  if ( v164.m256i_i64[3] )
    sub_140001660(v139, 24 * v164.m256i_i64[3], 8);
  if ( v163 )
  {
    v142 = v168;
    *(_QWORD *)&v205[8] = 0;
    *(_QWORD *)&v205[16] = v163;
    *(_QWORD *)&v205[24] = v202;
    *(_QWORD *)&v205[40] = 0;
    *(_QWORD *)&v205[48] = v163;
    *(_QWORD *)&v205[56] = v202;
    v143 = 1;
  }
  else
  {
    v143 = 0;
    v142 = 0;
  }
  *(_QWORD *)v205 = v143;
  *(_QWORD *)&v205[32] = v143;
  *(_QWORD *)&v205[64] = v142;
  v236 = 0;
  sub_140308850(&v186, v205);
  for ( n = v186.m256i_i64[0]; v186.m256i_i64[0]; n = v186.m256i_i64[0] )
  {
    v145 = *(_QWORD *)(n + 24 * v186.m256i_i64[2] + 8);
    if ( v145 )
      sub_140001660(*(_QWORD *)(n + 24 * v186.m256i_i64[2] + 16), v145, 1);
    v236 = 0;
    sub_140308850(&v186, v205);
  }
  v126 = v152;
  if ( v152 )
  {
    v127 = v112;
    goto LABEL_209;
  }
  return v201;
}

