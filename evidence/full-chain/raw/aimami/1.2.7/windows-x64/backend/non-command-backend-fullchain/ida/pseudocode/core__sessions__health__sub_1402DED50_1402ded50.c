// win 1.2.7 | module src/core/sessions/health.rs | ea 0x1402ded50 | name sub_1402DED50
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_1402DED50(__m128i *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // r8
  __m128i *v14; // r15
  char *v15; // rdi
  __m128i si128; // xmm6
  __m128i v17; // xmm7
  __m128i v18; // xmm8
  __m128i v19; // xmm9
  __m128i *v20; // r12
  __int64 v21; // rcx
  unsigned __int64 v22; // r14
  const __m128i *v23; // rsi
  __m128i *v24; // rax
  __m128i *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rbx
  unsigned __int128 v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rcx
  __m128i *v31; // r13
  char *v32; // r15
  unsigned __int64 v33; // rdi
  signed __int64 v34; // r14
  __m128i *v35; // rax
  __m128i *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int32 v40; // ecx
  __int64 v41; // r13
  __int64 v42; // rdx
  char v43; // si
  char *v44; // r15
  __int64 v45; // r14
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 *v49; // rax
  double v50; // xmm10_8
  __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r14
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // r11
  char v62; // bl
  __int64 v63; // r14
  __int64 v64; // r12
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // rdx
  __int64 v69; // r12
  __int64 v70; // rdx
  __int64 v71; // rax
  char *v72; // r14
  __m128i *v73; // rdi
  __int64 v74; // r12
  __int64 v75; // rdx
  __int64 v76; // r15
  __int64 v77; // r12
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rcx
  __m128i v84; // xmm0
  __m128i v85; // xmm1
  __m128i v86; // xmm2
  __m128i v87; // xmm3
  __int64 v88; // rcx
  __m128i v89; // xmm0
  __m128i v90; // xmm1
  __int64 v91; // rcx
  __int64 v92; // rdx
  char v93; // r8
  char v94; // dl
  char v95; // dl
  char v96; // dl
  char v97; // dl
  __int64 v98; // rcx
  __int64 v99; // rcx
  _QWORD *v100; // rcx
  _QWORD *v101; // rsi
  __m128i v102; // xmm0
  __m128i v103; // xmm1
  __m128i *result; // rax
  __int64 v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // [rsp+20h] [rbp-60h]
  __m128i v108[21]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v109; // [rsp+180h] [rbp+100h] BYREF
  __m128i v110; // [rsp+190h] [rbp+110h] BYREF
  unsigned __int128 v111; // [rsp+310h] [rbp+290h] BYREF
  __int64 v112; // [rsp+320h] [rbp+2A0h]
  __int64 v113; // [rsp+328h] [rbp+2A8h]
  __int64 v114; // [rsp+330h] [rbp+2B0h]
  __int64 v115; // [rsp+338h] [rbp+2B8h]
  __int64 v116; // [rsp+340h] [rbp+2C0h]
  unsigned __int64 v117; // [rsp+348h] [rbp+2C8h]
  __int64 v118; // [rsp+350h] [rbp+2D0h]
  __int64 v119; // [rsp+358h] [rbp+2D8h]
  __int64 v120; // [rsp+360h] [rbp+2E0h]
  __int64 v121; // [rsp+368h] [rbp+2E8h]
  __int64 v122; // [rsp+370h] [rbp+2F0h]
  __int64 v123; // [rsp+378h] [rbp+2F8h]
  __int64 v124; // [rsp+380h] [rbp+300h]
  __int64 v125; // [rsp+388h] [rbp+308h]
  __int64 v126; // [rsp+390h] [rbp+310h]
  __int64 v127; // [rsp+398h] [rbp+318h]
  __int64 v128; // [rsp+3A0h] [rbp+320h]
  __int64 v129; // [rsp+3A8h] [rbp+328h]
  __int64 v130; // [rsp+3B0h] [rbp+330h]
  __int64 v131; // [rsp+3B8h] [rbp+338h]
  __int64 v132; // [rsp+3C0h] [rbp+340h]
  __int64 v133; // [rsp+3C8h] [rbp+348h]
  __int64 v134; // [rsp+3D0h] [rbp+350h]
  __int64 v135; // [rsp+3D8h] [rbp+358h]
  const __m128i *v136; // [rsp+3E0h] [rbp+360h]
  __int64 v137; // [rsp+3E8h] [rbp+368h]
  __int64 v138; // [rsp+3F0h] [rbp+370h]
  __int64 v139; // [rsp+3F8h] [rbp+378h]
  __int64 v140; // [rsp+410h] [rbp+390h]
  __int64 v141; // [rsp+428h] [rbp+3A8h]
  __int64 v142; // [rsp+440h] [rbp+3C0h]
  __int64 v143; // [rsp+448h] [rbp+3C8h]
  __int64 v144; // [rsp+450h] [rbp+3D0h]
  __int64 v145; // [rsp+458h] [rbp+3D8h]
  __int64 v146; // [rsp+460h] [rbp+3E0h]
  __int64 v147; // [rsp+468h] [rbp+3E8h]
  __int64 v148; // [rsp+470h] [rbp+3F0h]
  __m128i v149; // [rsp+478h] [rbp+3F8h]
  double v150; // [rsp+488h] [rbp+408h]
  __int32 v151; // [rsp+490h] [rbp+410h]
  char v152; // [rsp+494h] [rbp+414h]
  _QWORD *v153; // [rsp+4A0h] [rbp+420h]
  _QWORD *v154; // [rsp+4A8h] [rbp+428h]
  __int64 v155; // [rsp+4B0h] [rbp+430h]
  _QWORD *v156; // [rsp+4B8h] [rbp+438h]
  __m128i v157; // [rsp+4C0h] [rbp+440h] BYREF
  __m128i v158; // [rsp+4D0h] [rbp+450h]
  __m128i v159; // [rsp+4E0h] [rbp+460h]
  __m128i *v160; // [rsp+4F8h] [rbp+478h]
  char v161; // [rsp+500h] [rbp+480h] BYREF
  __int64 v162; // [rsp+520h] [rbp+4A0h]
  __int64 v163; // [rsp+528h] [rbp+4A8h]
  __int64 v164; // [rsp+530h] [rbp+4B0h]
  _QWORD v165[3]; // [rsp+538h] [rbp+4B8h] BYREF
  __int64 v166; // [rsp+550h] [rbp+4D0h]
  __int64 v167; // [rsp+558h] [rbp+4D8h]
  __int64 v168; // [rsp+560h] [rbp+4E0h]
  __int64 v169; // [rsp+568h] [rbp+4E8h]
  __int64 v170; // [rsp+570h] [rbp+4F0h]
  __int64 v171; // [rsp+578h] [rbp+4F8h]
  __int64 v172; // [rsp+580h] [rbp+500h]
  __int64 v173; // [rsp+588h] [rbp+508h]
  __int64 v174; // [rsp+590h] [rbp+510h]
  _QWORD v175[3]; // [rsp+598h] [rbp+518h] BYREF
  __int64 v176; // [rsp+5B0h] [rbp+530h]
  __int64 v177; // [rsp+5B8h] [rbp+538h]
  __int64 v178; // [rsp+5C0h] [rbp+540h]
  __int64 v179; // [rsp+5C8h] [rbp+548h]
  __int64 v180; // [rsp+5D0h] [rbp+550h]
  __int64 v181; // [rsp+5D8h] [rbp+558h]
  __int64 v182; // [rsp+5E0h] [rbp+560h]
  __int64 v183; // [rsp+5E8h] [rbp+568h]
  __int64 v184; // [rsp+5F0h] [rbp+570h]
  __int64 v185; // [rsp+5F8h] [rbp+578h]
  __int64 v186; // [rsp+600h] [rbp+580h]
  __int64 v187; // [rsp+608h] [rbp+588h]
  __int64 v188; // [rsp+610h] [rbp+590h]
  __int64 v189; // [rsp+618h] [rbp+598h]
  __int64 v190; // [rsp+620h] [rbp+5A0h]
  char v191; // [rsp+628h] [rbp+5A8h] BYREF
  const __m128i *v192; // [rsp+638h] [rbp+5B8h]
  __int64 v193; // [rsp+640h] [rbp+5C0h]
  _BYTE v194[16]; // [rsp+648h] [rbp+5C8h] BYREF
  _QWORD v195[3]; // [rsp+658h] [rbp+5D8h] BYREF
  __m128i v196; // [rsp+670h] [rbp+5F0h] BYREF
  __int64 v197; // [rsp+680h] [rbp+600h]
  unsigned __int64 v198; // [rsp+690h] [rbp+610h]
  __int64 v199; // [rsp+698h] [rbp+618h]
  __int64 v200; // [rsp+6A0h] [rbp+620h]
  __int64 v201; // [rsp+6A8h] [rbp+628h]
  __int64 v202; // [rsp+6B0h] [rbp+630h]
  __int64 v203; // [rsp+6B8h] [rbp+638h]
  __int64 v204; // [rsp+6C0h] [rbp+640h]
  __int64 v205; // [rsp+6C8h] [rbp+648h]
  __m128i *v206; // [rsp+6D0h] [rbp+650h]
  __int64 v207; // [rsp+6D8h] [rbp+658h]
  __int64 *v208; // [rsp+6E0h] [rbp+660h]
  _QWORD *v209; // [rsp+6E8h] [rbp+668h]
  __int64 v210; // [rsp+6F0h] [rbp+670h]
  __int64 v211; // [rsp+6F8h] [rbp+678h]
  __int64 v212; // [rsp+700h] [rbp+680h]
  __int64 v213; // [rsp+708h] [rbp+688h]
  __int64 v214; // [rsp+710h] [rbp+690h]
  __int64 v215; // [rsp+718h] [rbp+698h]
  __int64 v216; // [rsp+720h] [rbp+6A0h]
  _QWORD *v217; // [rsp+728h] [rbp+6A8h]
  __int64 v218; // [rsp+730h] [rbp+6B0h]
  const __m128i *v219; // [rsp+738h] [rbp+6B8h]
  __int64 v220; // [rsp+740h] [rbp+6C0h]
  __int64 v221; // [rsp+748h] [rbp+6C8h]
  __int64 v222; // [rsp+750h] [rbp+6D0h]
  __int64 v223; // [rsp+758h] [rbp+6D8h]
  __int64 v224; // [rsp+760h] [rbp+6E0h]
  __int64 v225; // [rsp+768h] [rbp+6E8h]
  __int64 v226; // [rsp+770h] [rbp+6F0h]
  __int64 v227; // [rsp+778h] [rbp+6F8h]
  _QWORD *v228; // [rsp+780h] [rbp+700h]
  __int64 v229; // [rsp+788h] [rbp+708h]
  __int64 v230; // [rsp+790h] [rbp+710h]
  __int64 v231; // [rsp+798h] [rbp+718h]
  __int64 v232; // [rsp+7A0h] [rbp+720h]
  __int32 v233; // [rsp+7ACh] [rbp+72Ch]
  __int64 v234; // [rsp+7B0h] [rbp+730h]
  __int64 v235; // [rsp+7B8h] [rbp+738h]
  __int64 v236; // [rsp+7C0h] [rbp+740h]
  __int64 v237; // [rsp+7C8h] [rbp+748h]
  __int64 v238; // [rsp+7D0h] [rbp+750h]
  __int64 v239; // [rsp+7D8h] [rbp+758h]
  const __m128i *v240; // [rsp+7F8h] [rbp+778h]
  __int64 v241; // [rsp+800h] [rbp+780h]
  char v242; // [rsp+813h] [rbp+793h]
  char v243; // [rsp+814h] [rbp+794h]
  char v244; // [rsp+815h] [rbp+795h]
  char v245; // [rsp+816h] [rbp+796h]
  char v246; // [rsp+817h] [rbp+797h]
  char v247; // [rsp+818h] [rbp+798h]
  char v248; // [rsp+819h] [rbp+799h]
  char v249; // [rsp+81Ah] [rbp+79Ah]
  char v250; // [rsp+81Bh] [rbp+79Bh]
  char v251; // [rsp+81Ch] [rbp+79Ch]
  char v252; // [rsp+81Dh] [rbp+79Dh]
  char v253; // [rsp+81Eh] [rbp+79Eh]
  char v254; // [rsp+81Fh] [rbp+79Fh]
  char v255; // [rsp+820h] [rbp+7A0h]
  char v256; // [rsp+821h] [rbp+7A1h]
  char v257; // [rsp+822h] [rbp+7A2h]
  char v258; // [rsp+823h] [rbp+7A3h]
  char v259; // [rsp+824h] [rbp+7A4h]
  char v260; // [rsp+825h] [rbp+7A5h]
  char v261; // [rsp+826h] [rbp+7A6h]
  char v262; // [rsp+827h] [rbp+7A7h]
  char v263; // [rsp+828h] [rbp+7A8h]
  char v264; // [rsp+829h] [rbp+7A9h]
  char v265; // [rsp+82Ah] [rbp+7AAh]
  char v266; // [rsp+82Bh] [rbp+7ABh]
  char v267; // [rsp+82Ch] [rbp+7ACh]
  char v268; // [rsp+82Dh] [rbp+7ADh]
  char v269; // [rsp+82Eh] [rbp+7AEh]
  char v270; // [rsp+82Fh] [rbp+7AFh]
  char v271; // [rsp+830h] [rbp+7B0h]
  char v272; // [rsp+831h] [rbp+7B1h]
  char v273; // [rsp+832h] [rbp+7B2h]
  char v274; // [rsp+833h] [rbp+7B3h]
  char v275; // [rsp+834h] [rbp+7B4h]
  char v276; // [rsp+835h] [rbp+7B5h]
  char v277; // [rsp+836h] [rbp+7B6h]
  char v278; // [rsp+837h] [rbp+7B7h]
  __int64 v279; // [rsp+838h] [rbp+7B8h]

  v279 = -2;
  v206 = a1;
  v208 = a2;
  v2 = a2[2];
  v251 = 1;
  v3 = sub_14167F170(a1);
  if ( *(_BYTE *)(v3 + 16) == 1 )
  {
    v8 = *(_QWORD *)v3;
    v9 = *(_QWORD *)(v3 + 8);
  }
  else
  {
    v251 = 1;
    v105 = v3;
    v8 = sub_141696260(v5, v4, v6, v7);
    v3 = v105;
    v9 = v106;
    *(_QWORD *)v3 = v8;
    *(_QWORD *)(v3 + 8) = v106;
    *(_BYTE *)(v3 + 16) = 1;
  }
  *(_QWORD *)v3 = v8 + 1;
  v251 = 1;
  LOBYTE(v7) = 1;
  sub_1402957F0(&v109, 416, v2, v7);
  v10 = _mm_loadu_si128(&v109);
  v158 = _mm_loadu_si128(&v110);
  v157 = v10;
  v159.m128i_i64[0] = v8;
  v159.m128i_i64[1] = v9;
  v11 = *v208;
  v12 = (_QWORD *)v208[1];
  v13 = &v12[44 * v2];
  v153 = v12;
  v154 = v12;
  v225 = v11;
  v155 = v11;
  v156 = v13;
  v14 = (__m128i *)&v161;
  v15 = &v191;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419E4510);
  v17 = _mm_load_si128((const __m128i *)&xmmword_1419E4520);
  v18 = _mm_load_si128((const __m128i *)&xmmword_1419E44F0);
  v19 = _mm_load_si128((const __m128i *)&xmmword_1419E4500);
  v217 = v12;
  v209 = v13;
  if ( v12 != v13 )
  {
    do
    {
      v228 = v12 + 44;
      v154 = v12 + 44;
      v20 = (__m128i *)*v12;
      sub_1418F44E0(v108, (const __m128i *)(v12 + 1), 0x158u);
      if ( v20 == (__m128i *)2 )
      {
        v100 = v228;
        v13 = v209;
        goto LABEL_149;
      }
      v160 = v20;
      sub_1418F44E0(v14, v108, 0x158u);
      if ( v191 == 3 )
      {
        v22 = v193;
        if ( v193 < 0 )
        {
          v98 = 0;
          goto LABEL_142;
        }
        if ( v193 )
        {
          v23 = v192;
          nullsub_1(v21);
          v24 = (__m128i *)sub_140001650(v22, 1);
          if ( !v24 )
          {
            v226 = v22;
            v98 = 1;
LABEL_142:
            v260 = 1;
            v259 = 1;
            v258 = 1;
            v257 = 1;
            v256 = 1;
            v255 = 1;
            v254 = 1;
            v253 = 1;
            v252 = 1;
            sub_141938D2B(v98, v226);
          }
          v25 = v24;
          sub_1418F44E0(v24, v23, v22);
          v232 = v22;
          v226 = (__int64)v25;
          v26 = (__int64)v25;
        }
        else
        {
          v226 = 1;
          v232 = 0;
          v22 = 0;
          v26 = 1;
        }
        v27 = v235;
      }
      else
      {
        v260 = 1;
        v259 = 1;
        v258 = 1;
        v257 = 1;
        v256 = 1;
        v255 = 1;
        v254 = 1;
        v253 = 1;
        v252 = 1;
        sub_14029FA00(&v109, v15);
        v27 = v235;
        if ( v109.m128i_i64[0] == -1 )
        {
          v111 = __PAIR128__(v109.m128i_u64[1], -1);
LABEL_14:
          v260 = 1;
          v259 = 1;
          v258 = 1;
          v257 = 1;
          v256 = 1;
          v255 = 1;
          v254 = 1;
          v253 = 1;
          v252 = 1;
          sub_14002F910((char *)&v111 + 8);
          v26 = 1;
          v22 = 0;
          v232 = 0;
          goto LABEL_17;
        }
        v112 = v110.m128i_i64[0];
        v28 = (unsigned __int128)_mm_loadu_si128(&v109);
        v111 = v28;
        if ( (_QWORD)v28 == -1 )
          goto LABEL_14;
        v26 = *((_QWORD *)&v111 + 1);
        v22 = v112;
        v232 = v28;
      }
LABEL_17:
      v278 = 1;
      v277 = 1;
      v276 = 1;
      v275 = 1;
      v274 = 1;
      v273 = 1;
      v272 = 1;
      v271 = 1;
      v270 = 1;
      v221 = v26;
      sub_1402D2D40(&v109, v26, v22);
      v233 = v110.m128i_i32[2];
      if ( v109.m128i_i64[0] != -1 && v109.m128i_i64[0] )
        sub_140001660(v109.m128i_i64[1], v109.m128i_i64[0], 1);
      if ( v175[0] == -1 )
        goto LABEL_23;
      v278 = 1;
      v277 = 1;
      v276 = 1;
      v275 = 1;
      v274 = 1;
      v273 = 1;
      v272 = 1;
      v271 = 1;
      v270 = 1;
      sub_1416AC440(&v109, v175);
      if ( v109.m128i_i64[0] == -1 )
      {
LABEL_23:
        v278 = 1;
        v277 = 1;
        v276 = 1;
        v275 = 1;
        v274 = 1;
        v273 = 1;
        v272 = 1;
        v271 = 1;
        v270 = 1;
        v29 = sub_141642800(v15, "/subAgent/thread_spawn/parent_thread_id", 39);
        if ( !v29 )
        {
          v278 = 1;
          v277 = 1;
          v276 = 1;
          v275 = 1;
          v274 = 1;
          v273 = 1;
          v272 = 1;
          v271 = 1;
          v270 = 1;
          v29 = sub_141642800(v15, aSubagentThread, 39);
          if ( !v29 )
            goto LABEL_30;
        }
        if ( *(_BYTE *)v29 == 3 )
        {
          v31 = v14;
          v32 = v15;
          v33 = v22;
          v34 = *(_QWORD *)(v29 + 24);
          if ( v34 < 0 )
          {
            v99 = 0;
            goto LABEL_146;
          }
          if ( v34 )
          {
            v240 = *(const __m128i **)(v29 + 16);
            nullsub_1(v30);
            v35 = (__m128i *)sub_140001650(v34, 1);
            if ( !v35 )
            {
              v227 = v34;
              v99 = 1;
LABEL_146:
              v278 = 1;
              v277 = 1;
              v276 = 1;
              v275 = 1;
              v274 = 1;
              v273 = 1;
              v272 = 1;
              v271 = 1;
              v270 = 1;
              sub_141938D2B(v99, v227);
            }
            v36 = v35;
            sub_1418F44E0(v35, v240, v34);
            v227 = (__int64)v36;
            v231 = (__int64)v36;
            v234 = v34;
            v27 = v34;
          }
          else
          {
            v227 = 1;
            v27 = 0;
            v231 = 1;
            v234 = 0;
          }
          v22 = v33;
          v15 = v32;
          v14 = v31;
        }
        else
        {
LABEL_30:
          v234 = -1;
        }
      }
      else
      {
        v231 = v109.m128i_i64[1];
        v234 = v109.m128i_i64[0];
        v27 = v110.m128i_i64[0];
      }
      v269 = 1;
      v268 = 1;
      v267 = 1;
      v266 = 1;
      v265 = 1;
      v264 = 1;
      v263 = 1;
      v262 = 1;
      v261 = 1;
      v37 = sub_141642800(v15, aSubagentThread_2, 28);
      if ( v37 )
        goto LABEL_35;
      v269 = 1;
      v268 = 1;
      v267 = 1;
      v266 = 1;
      v265 = 1;
      v264 = 1;
      v263 = 1;
      v262 = 1;
      v261 = 1;
      v37 = sub_141642800(v15, "/subagent/thread_spawn/depth/subAgent/thread_spawn/parent_thread_id", 28);
      if ( v37 )
      {
LABEL_35:
        if ( *(_BYTE *)v37 == 2 )
        {
          v38 = *(_QWORD *)(v37 + 8);
          if ( v38 )
          {
            if ( (_DWORD)v38 != 1 )
              goto LABEL_43;
            v39 = *(_QWORD *)(v37 + 16);
          }
          else
          {
            v39 = *(_QWORD *)(v37 + 16);
            if ( v39 < 0 )
              goto LABEL_43;
          }
          v40 = v39;
          if ( (int)v39 != v39 )
            v40 = v233;
          v233 = v40;
        }
      }
LABEL_43:
      v269 = 1;
      v268 = 1;
      v267 = 1;
      v266 = 1;
      v265 = 1;
      v264 = 1;
      v263 = 1;
      v262 = 1;
      v261 = 1;
      sub_1416AC440(&v109, v165);
      v198 = v22;
      if ( v109.m128i_i64[0] != -1 )
      {
        v240 = (const __m128i *)v109.m128i_i64[0];
        v41 = v110.m128i_i64[0];
        v238 = v109.m128i_i64[1];
        sub_140E91160(v109.m128i_i64[1], v110.m128i_i64[0]);
        if ( v42 )
        {
          v43 = (char)v20;
          v20 = v14;
          v44 = v15;
          v45 = (__int64)v240;
          v195[0] = v240;
          v46 = v238;
          v195[1] = v238;
          v195[2] = v41;
          v220 = v238;
          v219 = v240;
          v250 = 1;
          v249 = 1;
          v248 = 1;
          v247 = 1;
          v246 = 1;
          v245 = 1;
          v244 = 1;
          v243 = 1;
          v242 = 1;
          sub_1416AC440(&v109, v195);
          v222 = v109.m128i_i64[1];
          v47 = v109.m128i_i64[0];
          v200 = v41;
          v224 = v46;
          v15 = v44;
          v14 = v20;
          LOBYTE(v20) = v43;
          v48 = v110.m128i_i64[0];
          goto LABEL_49;
        }
        if ( v240 )
          sub_140001660(v238, v240, 1);
      }
      v195[0] = -1;
      v45 = -1;
      v222 = 1;
      v48 = 0;
      v47 = 0;
LABEL_49:
      v207 = v47;
      v240 = (const __m128i *)v45;
      v49 = (__int64 *)v194;
      if ( ((unsigned __int8)v20 & 1) != 0 )
        v49 = (__int64 *)v14;
      v50 = (double)(int)*v49;
      if ( v162 != -1 )
      {
        v238 = v162;
        v51 = v164;
        v235 = v163;
        sub_140E91160(v163, v164);
        if ( v52 )
        {
          v199 = v51;
          v210 = v235;
          v53 = v169;
          if ( v169 == -1 )
            goto LABEL_54;
          goto LABEL_58;
        }
        if ( v238 )
          sub_140001660(v235, v238, 1);
      }
      v238 = -1;
      v53 = v169;
      if ( v169 == -1 )
      {
LABEL_54:
        v229 = -1;
        v235 = v27;
        v54 = v237;
        goto LABEL_66;
      }
LABEL_58:
      v241 = v53;
      v54 = v171;
      v239 = v170;
      sub_140E91160(v170, v171);
      if ( !v56 )
      {
        v235 = v27;
        v229 = -1;
        v54 = v237;
        v61 = v241;
        v57 = v239;
        if ( !v241 )
          goto LABEL_66;
LABEL_65:
        sub_140001660(v57, v61, 1);
        goto LABEL_66;
      }
      v57 = v239;
      if ( v54 < 0 )
      {
        v58 = 0;
LABEL_144:
        sub_141938D2B(v58, v54);
      }
      if ( !v54 )
      {
        v59 = 1;
        v61 = v241;
        goto LABEL_139;
      }
      nullsub_1(v55);
      v58 = 1;
      v59 = sub_140001650(v54, 1);
      if ( !v59 )
        goto LABEL_144;
      if ( (unsigned __int64)v54 < 8 || (unsigned __int64)(v59 - v57) < 0x20 )
      {
        v60 = 0;
        v61 = v241;
      }
      else
      {
        v61 = v241;
        if ( (unsigned __int64)v54 < 0x20 )
        {
          v60 = 0;
LABEL_121:
          v88 = v60;
          v60 = v54 & 0x7FFFFFFFFFFFFFF8LL;
          do
          {
            v89 = _mm_loadl_epi64((const __m128i *)(v57 + v88));
            v90 = _mm_cmpeq_epi8(v89, si128);
            *(_QWORD *)(v59 + v88) = _mm_or_si128(_mm_and_si128(v90, v17), _mm_andnot_si128(v90, v89)).m128i_u64[0];
            v88 += 8;
          }
          while ( v60 != v88 );
          if ( v54 == v60 )
            goto LABEL_139;
          goto LABEL_124;
        }
        v60 = v54 & 0x7FFFFFFFFFFFFFE0LL;
        v83 = 0;
        do
        {
          v84 = _mm_loadu_si128((const __m128i *)(v57 + v83));
          v85 = _mm_loadu_si128((const __m128i *)(v57 + v83 + 16));
          v86 = _mm_cmpeq_epi8(v84, v18);
          v87 = _mm_cmpeq_epi8(v85, v18);
          *(__m128i *)(v59 + v83) = _mm_or_si128(_mm_and_si128(v86, v19), _mm_andnot_si128(v86, v84));
          *(__m128i *)(v59 + v83 + 16) = _mm_or_si128(_mm_and_si128(v87, v19), _mm_andnot_si128(v87, v85));
          v83 += 32;
        }
        while ( v60 != v83 );
        if ( v54 == v60 )
          goto LABEL_139;
        if ( (v54 & 0x18) != 0 )
          goto LABEL_121;
      }
LABEL_124:
      v91 = v60;
      v92 = v54 & 3;
      if ( (v54 & 3) != 0 )
      {
        v91 = v60;
        do
        {
          v93 = *(_BYTE *)(v57 + v91);
          if ( v93 == 92 )
            v93 = 47;
          *(_BYTE *)(v59 + v91++) = v93;
          --v92;
        }
        while ( v92 );
      }
      if ( (unsigned __int64)(v60 - v54) <= 0xFFFFFFFFFFFFFFFCuLL )
      {
        do
        {
          v94 = *(_BYTE *)(v57 + v91);
          if ( v94 == 92 )
            v94 = 47;
          *(_BYTE *)(v59 + v91) = v94;
          v95 = *(_BYTE *)(v57 + v91 + 1);
          if ( v95 == 92 )
            v95 = 47;
          *(_BYTE *)(v59 + v91 + 1) = v95;
          v96 = *(_BYTE *)(v57 + v91 + 2);
          if ( v96 == 92 )
            v96 = 47;
          *(_BYTE *)(v59 + v91 + 2) = v96;
          v97 = *(_BYTE *)(v57 + v91 + 3);
          if ( v97 == 92 )
            v97 = 47;
          *(_BYTE *)(v59 + v91 + 3) = v97;
          v91 += 4;
        }
        while ( v54 != v91 );
      }
LABEL_139:
      v235 = v27;
      v216 = v59;
      v229 = v54;
      if ( v61 )
        goto LABEL_65;
LABEL_66:
      v62 = v194[8];
      v63 = -1;
      if ( v176 != -1 )
      {
        v237 = v176;
        v64 = v178;
        v239 = v177;
        sub_140E91160(v177, v178);
        if ( v65 )
        {
          v201 = v64;
          v211 = v239;
          v66 = v237;
          goto LABEL_72;
        }
        if ( v237 )
          sub_140001660(v239, v237, 1);
      }
      v66 = -1;
LABEL_72:
      v237 = v66;
      v239 = v179;
      if ( v179 != -1 )
      {
        v67 = v181;
        v241 = v180;
        sub_140E91160(v180, v181);
        if ( v68 )
        {
          v202 = v67;
          v212 = v241;
          v63 = v239;
        }
        else if ( v239 )
        {
          sub_140001660(v241, v239, 1);
        }
      }
      v223 = v63;
      if ( v172 != -1 )
      {
        v239 = v172;
        v69 = v174;
        v241 = v173;
        sub_140E91160(v173, v174);
        if ( v70 )
        {
          v203 = v69;
          v213 = v241;
          v71 = v185;
          if ( v185 == -1 )
            goto LABEL_80;
          goto LABEL_84;
        }
        if ( v239 )
          sub_140001660(v241, v239, 1);
      }
      v239 = -1;
      v71 = v185;
      if ( v185 == -1 )
      {
LABEL_80:
        v230 = -1;
        v72 = v15;
        v73 = v14;
        goto LABEL_88;
      }
LABEL_84:
      v241 = v71;
      v74 = v187;
      v236 = v186;
      sub_140E91160(v186, v187);
      if ( v75 )
      {
        v72 = v15;
        v73 = v14;
        v230 = v241;
        v214 = v236;
        v204 = v74;
      }
      else
      {
        v230 = -1;
        v72 = v15;
        v73 = v14;
        if ( v241 )
          sub_140001660(v236, v241, 1);
      }
LABEL_88:
      v76 = -1;
      v241 = v182;
      if ( v182 != -1 )
      {
        v77 = v184;
        v236 = v183;
        sub_140E91160(v183, v184);
        if ( v78 )
        {
          v215 = v236;
          v205 = v77;
          v79 = v188;
          if ( v188 != -2 )
            goto LABEL_95;
          goto LABEL_100;
        }
        if ( v241 )
          sub_140001660(v236, v241, 1);
      }
      v241 = -1;
      v79 = v188;
      if ( v188 != -2 )
      {
LABEL_95:
        v109 = _mm_loadu_si128((__m128i *)((char *)v73 + 280));
        if ( v79 != -1 )
        {
          v236 = v79;
          v218 = v189;
          sub_140E91160(v189, v190);
          if ( v80 )
          {
            v196 = _mm_load_si128(&v109);
            v76 = v236;
          }
          else if ( v236 )
          {
            sub_140001660(v218, v236, 1);
          }
        }
      }
LABEL_100:
      v112 = v207;
      v113 = v222;
      v114 = v48;
      v150 = v50;
      v118 = v238;
      v119 = v210;
      v120 = v199;
      v121 = v229;
      v122 = v216;
      v123 = v54;
      v115 = v232;
      v116 = v221;
      v117 = v198;
      v152 = v62;
      v124 = v237;
      v125 = v211;
      v126 = v201;
      v127 = v223;
      v128 = v212;
      v129 = v202;
      v130 = v234;
      v131 = v231;
      v132 = v235;
      v151 = v233;
      v133 = v239;
      v134 = v213;
      v135 = v203;
      v136 = v240;
      v137 = v224;
      v138 = v200;
      *(_QWORD *)&v111 = 0;
      v139 = -1;
      v140 = -1;
      v141 = -1;
      v142 = v230;
      v143 = v214;
      v144 = v204;
      v145 = v241;
      v146 = v215;
      v147 = v205;
      v148 = v76;
      v197 = v73[1].m128i_i64[1];
      v219 = v240;
      v149 = v196;
      v14 = v73;
      v196 = _mm_loadu_si128((const __m128i *)&v73->m128i_u64[1]);
      v220 = v224;
      v250 = 0;
      v249 = 0;
      v248 = 0;
      v247 = 0;
      v246 = 0;
      v245 = 0;
      v244 = 0;
      v243 = 0;
      v242 = 0;
      sub_1403A9A10(&v109, &v157, &v196, &v111, v107);
      v15 = v72;
      if ( v109.m128i_i32[0] != 2 )
        sub_14029DBD0(&v109);
      if ( v165[0] )
        sub_140001660(v165[1], v165[0], 1);
      sub_14002F9D0(v72);
      if ( v175[0] != -1 && v175[0] )
        sub_140001660(v175[1], v175[0], 1);
      v81 = v167;
      v238 = v168;
      v237 = v167;
      v240 = nullptr;
      while ( (const __m128i *)v238 != v240 )
      {
        v240 = (const __m128i *)((char *)v240 + 1);
        v82 = v81 + 32;
        sub_1403880E0(v81);
        v81 = v82;
      }
      if ( v166 )
        sub_140001660(v167, 32 * v166, 8);
      v237 = v54;
      v12 = v228;
      v13 = v209;
    }
    while ( v228 != v209 );
  }
  v100 = v13;
LABEL_149:
  v238 = 0x2E8BA2E8BA2E8BA3LL * ((unsigned __int64)((char *)v13 - (char *)v100) >> 5);
  v240 = nullptr;
  v228 = v100;
  while ( (const __m128i *)v238 != v240 )
  {
    v240 = (const __m128i *)((char *)v240 + 1);
    v101 = v100 + 44;
    sub_14038AB90(v100);
    v100 = v101;
  }
  if ( v225 )
    sub_140001660(v217, 352 * v225, 8);
  v102 = v157;
  v103 = v158;
  result = v206;
  v206[2] = v159;
  result[1] = v103;
  *result = v102;
  result[3].m128i_i8[0] = 1;
  return result;
}
