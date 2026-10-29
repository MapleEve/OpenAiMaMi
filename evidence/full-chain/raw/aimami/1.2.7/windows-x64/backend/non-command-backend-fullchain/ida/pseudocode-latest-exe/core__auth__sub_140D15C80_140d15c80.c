// win 1.2.7 latest-exe | module src/core/auth.rs | ea 0x140d15c80 | successor of pre-update 0x1401e1fe0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
double __fastcall sub_140D15C80(__int64 a1, _QWORD *a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v6; // xmm0
  __int64 v11; // rax
  __int64 v12; // rbx
  __int128 *v13; // r14
  unsigned __int64 v14; // r12
  __int64 v15; // r12
  __int64 v16; // rax
  __int128 v17; // kr10_16
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // r12
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  signed __int64 v28; // rt0
  __int128 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rax
  unsigned __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rbx
  void *v37; // rsi
  __int128 v38; // kr20_16
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rbx
  _QWORD *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // r12
  __int64 v53; // rsi
  _QWORD *v54; // r13
  void *v55; // rdi
  __int64 v56; // rax
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int64 v59; // rdx
  __int64 v60; // rsi
  _QWORD *v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rax
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  void *v68; // rax
  __int128 v69; // xmm1
  __int128 v70; // xmm1
  __int128 v71; // xmm2
  __int64 v72; // rax
  __int128 v73; // xmm1
  __int128 v74; // xmm2
  __int64 v75; // rcx
  __int64 v76; // r9
  __int128 v77; // xmm1
  __int128 v78; // xmm2
  __int64 v79; // rax
  unsigned __int128 v80; // kr00_16
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int128 v83; // kr80_16
  __int64 v84; // rbx
  __int64 v85; // r15
  __int128 v86; // rdi
  __int64 v87; // rax
  void *v88; // rsi
  char v89; // cl
  __m128 v90; // xmm0
  __int64 v91; // rdx
  char v92; // r8
  __int64 v93; // r12
  __int64 v94; // rbx
  __int64 v95; // r15
  __int64 v96; // r15
  __int64 v97; // r13
  __int64 v98; // rdx
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // rax
  __int64 v101; // r15
  __int64 v102; // r14
  __int64 v103; // rsi
  __int64 v104; // r12
  __int64 v105; // rbx
  __int64 v106; // r13
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r12
  __int64 v110; // r8
  __int64 v111; // r15
  __int128 v112; // xmm6
  __int128 v113; // xmm7
  __int64 v114; // r14
  unsigned int v115; // r12d
  int v116; // r15d
  unsigned int v117; // eax
  __int64 v118; // rbx
  __int64 v119; // rsi
  char v120; // r12
  __int64 v121; // r14
  __int64 v122; // r15
  __int64 v123; // rbx
  __int64 v124; // rsi
  unsigned __int64 v125; // rbx
  __int64 v126; // rdi
  __int128 *v127; // rcx
  __int64 v128; // rbx
  int v129; // r13d
  __int64 v130; // rax
  __int64 v131; // rsi
  char v132; // bl
  __int128 v133; // xmm0
  int v134; // r9d
  __int64 v135; // rbx
  __int64 v136; // rsi
  int v137; // edi
  int v138; // eax
  __int64 v139; // rdi
  __int64 v140; // r15
  int v141; // edi
  __int128 v142; // xmm0
  __int64 v143; // rax
  __int128 v144; // xmm1
  __int128 v145; // xmm2
  __int128 v146; // xmm3
  __int64 v147; // rax
  __int64 v148; // rsi
  _QWORD *v149; // rdi
  __int64 v150; // rdx
  _OWORD *v151; // rax
  __int128 v152; // xmm1
  __int128 v153; // xmm2
  __int64 v154; // rbx
  __int128 v155; // xmm6
  __int128 v156; // xmm7
  __int64 v157; // rsi
  __int64 v158; // r14
  __int64 v159; // r15
  __int64 v160; // rax
  __int128 *v161; // rcx
  __int64 v162; // rax
  double result; // xmm0_8
  __int128 v164; // [rsp+50h] [rbp-30h] BYREF
  __int128 v165; // [rsp+60h] [rbp-20h]
  __int128 v166; // [rsp+70h] [rbp-10h]
  __int128 v167; // [rsp+80h] [rbp+0h]
  __int128 v168; // [rsp+90h] [rbp+10h]
  __int64 v169; // [rsp+A0h] [rbp+20h]
  __int128 v170; // [rsp+B0h] [rbp+30h]
  __int128 v171; // [rsp+C0h] [rbp+40h]
  __int128 v172; // [rsp+D0h] [rbp+50h]
  __int128 v173; // [rsp+E0h] [rbp+60h]
  _QWORD v174[3]; // [rsp+F0h] [rbp+70h] BYREF
  _QWORD v175[3]; // [rsp+108h] [rbp+88h] BYREF
  __int64 v176; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v177; // [rsp+128h] [rbp+A8h]
  __int128 v178; // [rsp+130h] [rbp+B0h]
  _QWORD v179[2]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v180; // [rsp+1E0h] [rbp+160h]
  __int128 v181; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v182; // [rsp+200h] [rbp+180h] BYREF
  __int128 v183; // [rsp+210h] [rbp+190h] BYREF
  __int128 v184; // [rsp+220h] [rbp+1A0h]
  void *v185; // [rsp+230h] [rbp+1B0h]
  __int64 v186; // [rsp+238h] [rbp+1B8h]
  __int64 v187; // [rsp+240h] [rbp+1C0h]
  __int64 v188; // [rsp+248h] [rbp+1C8h]
  __int64 v189; // [rsp+250h] [rbp+1D0h]
  __int128 v190; // [rsp+258h] [rbp+1D8h]
  __int64 v191; // [rsp+268h] [rbp+1E8h]
  __int128 v192; // [rsp+270h] [rbp+1F0h]
  __int64 v193; // [rsp+280h] [rbp+200h]
  __int64 v194; // [rsp+288h] [rbp+208h]
  __int64 v195; // [rsp+290h] [rbp+210h]
  char v196; // [rsp+298h] [rbp+218h] BYREF
  char v197; // [rsp+29Ah] [rbp+21Ah] BYREF
  __int64 v198; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v199; // [rsp+458h] [rbp+3D8h] BYREF
  __int128 v200; // [rsp+468h] [rbp+3E8h]
  __int128 v201; // [rsp+478h] [rbp+3F8h]
  __int128 v202; // [rsp+488h] [rbp+408h]
  __int128 v203; // [rsp+498h] [rbp+418h]
  __int128 v204; // [rsp+4A8h] [rbp+428h]
  __int128 v205; // [rsp+500h] [rbp+480h] BYREF
  __int128 v206; // [rsp+510h] [rbp+490h]
  __int128 v207; // [rsp+520h] [rbp+4A0h] BYREF
  __int128 v208; // [rsp+530h] [rbp+4B0h]
  _BYTE v209[40]; // [rsp+540h] [rbp+4C0h]
  __int128 v210; // [rsp+568h] [rbp+4E8h]
  __int128 v211; // [rsp+578h] [rbp+4F8h]
  __int128 v212; // [rsp+588h] [rbp+508h]
  __m256i v213; // [rsp+598h] [rbp+518h]
  __int128 v214; // [rsp+5B8h] [rbp+538h]
  __int64 v215; // [rsp+5C8h] [rbp+548h]
  __int128 v216; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v217; // [rsp+5E0h] [rbp+560h]
  __int128 v218; // [rsp+5F0h] [rbp+570h]
  __int128 v219; // [rsp+600h] [rbp+580h]
  __int128 v220; // [rsp+610h] [rbp+590h]
  __int64 v221; // [rsp+620h] [rbp+5A0h]
  _BYTE v222[104]; // [rsp+630h] [rbp+5B0h] BYREF
  __int128 v223; // [rsp+698h] [rbp+618h]
  __m256i v224; // [rsp+6A8h] [rbp+628h]
  __int128 v225; // [rsp+6C8h] [rbp+648h]
  _QWORD v226[57]; // [rsp+6D8h] [rbp+658h] BYREF
  __int128 v227; // [rsp+8A0h] [rbp+820h] BYREF
  __int128 v228; // [rsp+8B0h] [rbp+830h]
  __int128 v229; // [rsp+8C0h] [rbp+840h]
  __int128 v230; // [rsp+8D0h] [rbp+850h]
  __int128 v231; // [rsp+8E0h] [rbp+860h]
  __int128 v232; // [rsp+8F0h] [rbp+870h]
  __int64 v233; // [rsp+958h] [rbp+8D8h]
  __int128 v234; // [rsp+960h] [rbp+8E0h] BYREF
  __int64 v235; // [rsp+970h] [rbp+8F0h]
  __int64 v236; // [rsp+978h] [rbp+8F8h]
  __int64 v237; // [rsp+980h] [rbp+900h]
  __int64 v238; // [rsp+988h] [rbp+908h]
  _BYTE v239[104]; // [rsp+990h] [rbp+910h] BYREF
  __int128 v240; // [rsp+A40h] [rbp+9C0h] BYREF
  __int128 v241; // [rsp+A50h] [rbp+9D0h]
  __int128 v242; // [rsp+A60h] [rbp+9E0h]
  __int128 v243; // [rsp+A70h] [rbp+9F0h]
  __int128 v244; // [rsp+A80h] [rbp+A00h] BYREF
  __int64 v245; // [rsp+A90h] [rbp+A10h]
  __int64 v246; // [rsp+A98h] [rbp+A18h] BYREF
  __int64 v247; // [rsp+AA0h] [rbp+A20h]
  unsigned __int64 v248; // [rsp+AA8h] [rbp+A28h]
  __int128 v249; // [rsp+AB0h] [rbp+A30h]
  __int128 v250; // [rsp+AC0h] [rbp+A40h]
  __int128 v251; // [rsp+AD0h] [rbp+A50h] BYREF
  __int128 v252; // [rsp+AE0h] [rbp+A60h]
  __int64 v253; // [rsp+AF0h] [rbp+A70h]
  _DWORD v254[2]; // [rsp+AF8h] [rbp+A78h]
  _BYTE v255[120]; // [rsp+B00h] [rbp+A80h] BYREF
  __m256i v256; // [rsp+B78h] [rbp+AF8h]
  __int128 v257; // [rsp+B98h] [rbp+B18h]
  __int64 v258; // [rsp+BA8h] [rbp+B28h]
  __int128 v259; // [rsp+BC0h] [rbp+B40h]
  __int64 v260; // [rsp+BD0h] [rbp+B50h]
  __int128 v261; // [rsp+BD8h] [rbp+B58h]
  __int64 v262; // [rsp+BE8h] [rbp+B68h]
  HANDLE v263; // [rsp+BF0h] [rbp+B70h]
  __int64 v264; // [rsp+BF8h] [rbp+B78h]
  __int64 v265; // [rsp+C00h] [rbp+B80h]
  __int64 v266; // [rsp+C08h] [rbp+B88h]
  __int64 v267; // [rsp+C10h] [rbp+B90h]
  __int64 v268; // [rsp+C18h] [rbp+B98h]
  __int128 v269; // [rsp+C20h] [rbp+BA0h]
  __int64 v270; // [rsp+C30h] [rbp+BB0h]
  __int128 v271; // [rsp+C38h] [rbp+BB8h]
  __int64 v272; // [rsp+C48h] [rbp+BC8h]
  __int64 v273; // [rsp+C50h] [rbp+BD0h]
  __int64 v274; // [rsp+C58h] [rbp+BD8h]
  __int128 v275; // [rsp+C60h] [rbp+BE0h]
  __int64 v276; // [rsp+C70h] [rbp+BF0h]
  __int128 v277; // [rsp+C78h] [rbp+BF8h]
  __int64 v278; // [rsp+C88h] [rbp+C08h]
  __int64 v279; // [rsp+C90h] [rbp+C10h]
  __int64 v280; // [rsp+C98h] [rbp+C18h]
  int v281; // [rsp+CA0h] [rbp+C20h]
  HANDLE v282; // [rsp+D78h] [rbp+CF8h] BYREF
  __int64 v283; // [rsp+D80h] [rbp+D00h]
  __int64 v284; // [rsp+D88h] [rbp+D08h]
  int v285; // [rsp+D94h] [rbp+D14h]
  HANDLE v286; // [rsp+D98h] [rbp+D18h] BYREF
  unsigned __int64 v287; // [rsp+DA0h] [rbp+D20h]
  __int64 v288; // [rsp+DA8h] [rbp+D28h]
  __int64 v289; // [rsp+DB0h] [rbp+D30h]
  __int64 v290; // [rsp+DB8h] [rbp+D38h]
  __int64 v291; // [rsp+DC0h] [rbp+D40h] BYREF
  __int128 v292; // [rsp+DC8h] [rbp+D48h]
  __int64 v293; // [rsp+DD8h] [rbp+D58h]
  __int64 v294; // [rsp+DE0h] [rbp+D60h]
  __int64 v295; // [rsp+DE8h] [rbp+D68h]
  __int128 v296; // [rsp+DF0h] [rbp+D70h]
  __int128 v297; // [rsp+E00h] [rbp+D80h]
  __int128 v298; // [rsp+E10h] [rbp+D90h]
  __int128 v299; // [rsp+E20h] [rbp+DA0h]
  __int64 v300; // [rsp+E38h] [rbp+DB8h]
  __int64 v301; // [rsp+E40h] [rbp+DC0h]
  unsigned __int64 v302; // [rsp+E48h] [rbp+DC8h]
  __int64 v303; // [rsp+E50h] [rbp+DD0h]
  __int64 v304; // [rsp+E58h] [rbp+DD8h]
  __int64 v305; // [rsp+E60h] [rbp+DE0h]
  __int64 v306; // [rsp+E68h] [rbp+DE8h]
  __int64 v307; // [rsp+E70h] [rbp+DF0h]
  _QWORD *v308; // [rsp+E78h] [rbp+DF8h]
  __int64 v309; // [rsp+E80h] [rbp+E00h]
  void *v310; // [rsp+E88h] [rbp+E08h]
  __int64 v311; // [rsp+E90h] [rbp+E10h]
  __int64 v312; // [rsp+E98h] [rbp+E18h]
  __int64 v313; // [rsp+EA0h] [rbp+E20h]
  __int64 v314; // [rsp+EA8h] [rbp+E28h]
  char v315; // [rsp+EB4h] [rbp+E34h]
  char v316; // [rsp+EB5h] [rbp+E35h]
  char v317; // [rsp+EB6h] [rbp+E36h]
  char v318; // [rsp+EB7h] [rbp+E37h]
  HANDLE hObject; // [rsp+EB8h] [rbp+E38h]
  __int64 v320; // [rsp+EC0h] [rbp+E40h]
  char v321; // [rsp+ECFh] [rbp+E4Fh]
  __int64 v322; // [rsp+ED0h] [rbp+E50h]
  char v323; // [rsp+EDCh] [rbp+E5Ch]
  _BYTE v324[3]; // [rsp+EDDh] [rbp+E5Dh] BYREF
  char v325; // [rsp+EE0h] [rbp+E60h]
  char v326; // [rsp+EE1h] [rbp+E61h]
  char v327; // [rsp+EE2h] [rbp+E62h]
  char v328; // [rsp+EE3h] [rbp+E63h]
  char v329; // [rsp+EE4h] [rbp+E64h]
  char v330; // [rsp+EE5h] [rbp+E65h]
  char v331; // [rsp+EE6h] [rbp+E66h]
  unsigned __int8 v332; // [rsp+EE7h] [rbp+E67h]
  __int64 v333; // [rsp+EE8h] [rbp+E68h]

  v333 = -2;
  v11 = sub_140A2C1C0(a2);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v11;
LABEL_3:
    *(_QWORD *)a1 = -1;
    goto LABEL_369;
  }
  v332 = a3;
  v236 = a4;
  v12 = a2[41];
  v300 = a2[42];
  v13 = &v182;
  v287 = a2[33];
  v308 = a2;
  v322 = a2[34];
  v14 = 0;
  v307 = a1;
  v294 = v12;
  while ( 2 )
  {
    v302 = v14;
    v15 = v300;
    sub_1416C49D0(v255, v12, v300);
    if ( *(_DWORD *)v255 == 2 )
    {
      if ( (v255[8] & 3u) - 2 >= 2 && (v255[8] & 3) != 0 )
      {
        --*(_QWORD *)&v255[8];
        v255[0] = 3;
        sub_1416EBAD0(&v255[8]);
      }
      v16 = 0;
      v17 = 8u;
      goto LABEL_42;
    }
    v198 = 0;
    v199 = 8u;
    sub_1416C4AC0(v255, v12, v15);
    v18 = *(_QWORD *)&v255[8];
    v19 = *(_QWORD *)v255;
    if ( *(_QWORD *)v255 == 2 )
    {
      v24 = 2;
      v60 = *((_QWORD *)&v199 + 1);
      if ( *((_QWORD *)&v199 + 1) )
        goto LABEL_100;
      goto LABEL_116;
    }
    sub_1419234B0(&v222[16], &v255[16], 608);
    *(_OWORD *)v222 = __PAIR128__(v18, v19);
    a1 = v307;
    while ( 1 )
    {
      sub_1416D21A0(v255, v222);
      if ( *(_DWORD *)v255 != 1 )
        break;
      v20 = *(_QWORD *)&v255[8];
      v18 = *(_QWORD *)&v255[16];
      if ( !*(_QWORD *)&v255[8] )
      {
        v24 = 2;
        goto LABEL_95;
      }
      sub_1419234B0(&v182, &v255[24], 584);
      *(_QWORD *)&v181 = v20;
      *((_QWORD *)&v181 + 1) = v18;
      sub_1416B9630(&v176, &v181);
      v21 = v178;
      v326 = 1;
      v320 = v177;
      v22 = (_DWORD *)sub_1416B1B90(v177, v178);
      a1 = v307;
      if ( v22 == nullptr || v23 != 4 || *v22 != 1852797802 )
        goto LABEL_17;
      if ( (WORD4(v181) & 0x400) != 0 )
      {
        if ( !(BYTE8(v181) & 0x10 | HIDWORD(v183) & 0x20000000) )
          goto LABEL_23;
LABEL_27:
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v246 = v320;
          v247 = v21;
          *(_QWORD *)&v227 = &v246;
          *((_QWORD *)&v227 + 1) = sub_1416CE600;
          *(_QWORD *)&v239[48] = 2;
          *(_QWORD *)&v239[56] = aCodexmateLibCo_44;
          *(_QWORD *)&v239[64] = 31;
          *(_QWORD *)&v239[80] = &unk_141A9589B;
          *(_QWORD *)&v239[88] = &v227;
          *(_QWORD *)v239 = 0;
          *(_QWORD *)&v239[8] = aCodexmateLibCo_44;
          *(_OWORD *)&v239[16] = 0x1Fu;
          *(_QWORD *)&v239[32] = aSrcCoreReposit;
          *(_QWORD *)&v239[40] = 22;
          *(_QWORD *)&v239[72] = 0x49B00000001LL;
          v326 = 1;
          sub_141503E20(v324, v239);
        }
LABEL_17:
        if ( v176 )
          sub_140001660(v320, v176, 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v181) )
          goto LABEL_20;
      }
      else
      {
        if ( (BYTE8(v181) & 0x10) != 0 )
          goto LABEL_27;
LABEL_23:
        v326 = 1;
        sub_14071E1C0(v239, v320, v21, v294, v300);
        if ( *(_DWORD *)v239 == -1 )
        {
          v326 = 1;
          sub_1416C4520(v239, v320, v21);
          if ( *(_DWORD *)v239 == 2 )
          {
            *(_QWORD *)&v227 = 2;
            *((_QWORD *)&v227 + 1) = *(_QWORD *)&v239[8];
            v24 = 2;
            goto LABEL_135;
          }
          if ( (v239[76] & 0x10) != 0 || (*(_DWORD *)&v239[80] & 0x20000000) != 0 && (*(_WORD *)&v239[76] & 0x400) != 0 )
          {
            v246 = v320;
            v247 = v21;
            *(_QWORD *)v239 = &v246;
            *(_QWORD *)&v239[8] = sub_1416CE600;
            v326 = 1;
            sub_1416DAFA0((char *)&v227 + 8, &unk_141A3E0BE, v239);
            v24 = 9;
LABEL_135:
            v18 = *((_QWORD *)&v227 + 1);
            v295 = *((_QWORD *)&v228 + 1);
            v313 = v228;
            v207 = v229;
            v208 = v230;
            *(_OWORD *)v209 = v231;
            *(_OWORD *)&v209[16] = v232;
            if ( v176 )
              sub_140001660(v320, v176, 1);
            if ( !_InterlockedDecrement64((volatile signed __int64 *)v181) )
              sub_141141760(&v181);
LABEL_95:
            if ( *(_QWORD *)v222 )
              sub_1416CF740(&v222[8]);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v222[16]) )
              sub_141141760(&v222[16]);
            v60 = *((_QWORD *)&v199 + 1);
            if ( *((_QWORD *)&v199 + 1) )
            {
LABEL_100:
              v61 = (_QWORD *)(v199 + 8);
              do
              {
                v62 = *(v61 - 1);
                if ( v62 )
                  sub_140001660(*v61, v62, 1);
                v61 += 4;
                --v60;
              }
              while ( v60 );
            }
LABEL_116:
            if ( v198 )
              sub_140001660(v199, 32 * v198, 8);
            v6 = v207;
            v77 = v208;
            v78 = *(_OWORD *)v209;
            v79 = v307;
            *(_OWORD *)(v307 + 88) = *(_OWORD *)&v209[16];
            *(_OWORD *)(v79 + 72) = v78;
            *(_OWORD *)(v79 + 56) = v77;
            *(_OWORD *)(v79 + 40) = v6;
            *(_QWORD *)(v79 + 8) = v24;
            *(_QWORD *)(v79 + 16) = v18;
            *(_QWORD *)(v79 + 24) = v313;
            *(_QWORD *)(v79 + 32) = v295;
            *(_QWORD *)v79 = -1;
            goto LABEL_369;
          }
        }
        else
        {
          v232 = *(_OWORD *)&v239[80];
          v231 = *(_OWORD *)&v239[64];
          v230 = *(_OWORD *)&v239[48];
          v229 = *(_OWORD *)&v239[32];
          v228 = *(_OWORD *)&v239[16];
          v227 = *(_OWORD *)v239;
          v24 = *(_QWORD *)v239;
          if ( *(_QWORD *)v239 != -1 )
            goto LABEL_135;
        }
        v309 = v176;
        v25 = *((_QWORD *)&v199 + 1);
        if ( *((_QWORD *)&v199 + 1) == v198 )
          sub_1419397B0(&v198);
        v26 = v199;
        v27 = 32 * v25;
        *(_QWORD *)(v199 + v27) = v309;
        *(_QWORD *)(v26 + v27 + 8) = v320;
        *(_OWORD *)(v26 + v27 + 16) = v178;
        *((_QWORD *)&v199 + 1) = v25 + 1;
        v28 = _InterlockedDecrement64((volatile signed __int64 *)v181);
        a1 = v307;
        if ( !v28 )
LABEL_20:
          sub_141141760(&v181);
      }
    }
    if ( *(_QWORD *)v222 )
      sub_1416CF740(&v222[8]);
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v222[16]) )
      sub_141141760(&v222[16]);
    if ( *((_QWORD *)&v199 + 1) >= 2u )
    {
      if ( *((_QWORD *)&v199 + 1) >= 0x15u )
      {
        sub_1401B6A30(v199, *((_QWORD *)&v199 + 1), v324);
      }
      else
      {
        v51 = v199 + 32LL * *((_QWORD *)&v199 + 1);
        v320 = v199;
        v52 = v199 + 32;
        do
        {
          sub_140CBC880(v320, v52);
          v52 += 32;
        }
        while ( v52 != v51 );
      }
    }
    sub_14019C450(&v198);
    v16 = v198;
    v17 = v199;
LABEL_42:
    v291 = v16;
    __SET_PAIR__(v295, v313, v17);
    v292 = v17;
    sub_140D1C0D0(v255, v308, 0);
    v29 = *(_OWORD *)v255;
    v30 = *(_QWORD *)&v255[16];
    v180 = *(_OWORD *)&v255[24];
    if ( *(_QWORD *)v255 != -1 )
    {
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v255[88];
      v6 = *(_OWORD *)&v255[40];
      v69 = *(_OWORD *)&v255[56];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v255[72];
      *(_OWORD *)(a1 + 64) = v69;
      *(_OWORD *)(a1 + 48) = v6;
      *(_QWORD *)(a1 + 24) = v30;
      *(_QWORD *)&v6 = v180;
      *(_OWORD *)(a1 + 32) = v180;
      *(_OWORD *)(a1 + 8) = v29;
LABEL_112:
      *(_QWORD *)a1 = -1;
      goto LABEL_337;
    }
    if ( *(_QWORD *)&v255[8] != -1 )
    {
      v309 = *(_QWORD *)&v255[16];
      v320 = *(_QWORD *)&v255[8];
      v31 = *((_QWORD *)&v292 + 1);
      if ( *((_QWORD *)&v292 + 1) == v291 )
        sub_1419397B0(&v291);
      v32 = v292;
      v33 = 32 * v31;
      *(_QWORD *)(v292 + v33) = v320;
      *(_QWORD *)(v32 + v33 + 8) = v309;
      *(_OWORD *)(v32 + v33 + 16) = v180;
      v34 = v31 + 1;
      *((_QWORD *)&v292 + 1) = v34;
      if ( v34 >= 2 )
      {
        if ( v34 >= 0x15 )
        {
          sub_1401B6A30(v32, v34, v324);
        }
        else
        {
          v49 = v32 + 32 * v34;
          v50 = v32 + 32;
          do
          {
            v320 = v50;
            sub_140CBC880(v32, v50);
            v50 = v320 + 32;
          }
          while ( v320 + 32 != v49 );
        }
      }
      sub_14019C450(&v291);
    }
    sub_14022C250(v222, &v291, v30);
    sub_140C69CD0((__int64)v255, (__int64 *)v222);
    v35 = *(_QWORD *)v255;
    v181 = *(_OWORD *)&v255[8];
    *(_QWORD *)&v182 = *(_QWORD *)&v255[24];
    if ( *(_QWORD *)v255 != -1 )
    {
      v6 = *(_OWORD *)&v255[32];
      v70 = *(_OWORD *)&v255[48];
      v71 = *(_OWORD *)&v255[64];
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v255[80];
      *(_OWORD *)(a1 + 72) = v71;
      *(_OWORD *)(a1 + 56) = v70;
      *(_OWORD *)(a1 + 40) = v6;
      *(_QWORD *)(a1 + 32) = v182;
      *(_QWORD *)&v6 = v181;
      *(_OWORD *)(a1 + 16) = v181;
      *(_QWORD *)(a1 + 8) = v35;
      goto LABEL_112;
    }
    v244 = v181;
    v245 = v182;
    v324[2] = 1;
    sub_1416B18A0((unsigned int)&v181, v287, v322, (unsigned int)aLiveAuthLockli, 15);
    v320 = *((_QWORD *)&v181 + 1);
    sub_140C97180((unsigned int)v255, DWORD2(v181), v182, (unsigned int)&aLiveAuthLockli[15], 9);
    v36 = *(_QWORD *)v255;
    if ( *(_QWORD *)v255 != -1 )
    {
      *(_OWORD *)&v222[64] = *(_OWORD *)&v255[80];
      *(_OWORD *)&v222[48] = *(_OWORD *)&v255[64];
      *(_OWORD *)&v222[32] = *(_OWORD *)&v255[48];
      *(_OWORD *)&v222[16] = *(_OWORD *)&v255[32];
      *(_OWORD *)v222 = *(_OWORD *)&v255[16];
    }
    v37 = *(void **)&v255[8];
    if ( (_QWORD)v181 )
      sub_140001660(v320, v181, 1);
    if ( (_DWORD)v36 != -1 )
    {
      v72 = v307;
      *(_OWORD *)(v307 + 88) = *(_OWORD *)&v222[64];
      v6 = *(_OWORD *)v222;
      v73 = *(_OWORD *)&v222[16];
      v74 = *(_OWORD *)&v222[32];
      *(_OWORD *)(v72 + 72) = *(_OWORD *)&v222[48];
      *(_OWORD *)(v72 + 56) = v74;
      *(_OWORD *)(v72 + 40) = v73;
      *(_OWORD *)(v72 + 24) = v6;
      *(_QWORD *)(v72 + 8) = v36;
      *(_QWORD *)(v72 + 16) = v37;
      *(_QWORD *)v72 = -1;
      goto LABEL_335;
    }
    v286 = v37;
    v318 = 1;
    v317 = 1;
    sub_140D1C0D0(v255, v308, v332);
    v38 = *(_OWORD *)v255;
    v39 = *(_QWORD *)&v255[24];
    v320 = *(_QWORD *)&v255[16];
    if ( *(_QWORD *)v255 != -1 )
    {
      v75 = *(_QWORD *)&v255[32];
      v76 = v307;
      *(_QWORD *)(v307 + 96) = *(_QWORD *)&v255[88];
      *(_OWORD *)(v76 + 80) = *(_OWORD *)&v255[72];
      *(_OWORD *)(v76 + 64) = *(_OWORD *)&v255[56];
      *(_QWORD *)&v6 = *(_QWORD *)&v255[40];
      *(_OWORD *)(v76 + 48) = *(_OWORD *)&v255[40];
      *(_QWORD *)(v76 + 16) = *((_QWORD *)&v38 + 1);
      *(_QWORD *)(v76 + 24) = v320;
      *(_QWORD *)(v76 + 32) = v39;
      *(_QWORD *)(v76 + 40) = v75;
      *(_QWORD *)(v76 + 8) = v38;
      *(_QWORD *)v76 = -1;
      goto LABEL_330;
    }
    v309 = *(_QWORD *)&v255[8];
    if ( *(_QWORD *)&v255[8] != -1 )
    {
      ++v302;
      v36 = v292;
      v40 = v292 + 32LL * *((_QWORD *)&v292 + 1);
      while ( v36 != v40 )
      {
        v41 = *(_QWORD *)(v36 + 8);
        v42 = *(_QWORD *)(v36 + 16);
        v331 = 1;
        v330 = 1;
        v36 += 32;
        if ( (unsigned __int8)sub_140222930(v41, v42, v320, v39) )
          goto LABEL_87;
      }
      hObject = v286;
      *(_QWORD *)v222 = v286;
      v43 = sub_14143F370(v222);
      v14 = v302;
      if ( v43 && (unsigned int)(v43 & 3) - 2 >= 2 && (v43 & 3) != 0 )
      {
        *(_QWORD *)&v255[8] = v43 - 1;
        v255[0] = 3;
        sub_1416EBAD0(&v255[8]);
      }
      CloseHandle(hObject);
      v314 = *((_QWORD *)&v244 + 1);
      hObject = (HANDLE)v244;
      sub_1402350E0(&v244);
      if ( hObject )
        sub_140001660(v314, 8LL * (_QWORD)hObject, 8);
      if ( v309 )
        sub_140001660(v320, v309, 1);
      v45 = *((_QWORD *)&v292 + 1);
      if ( *((_QWORD *)&v292 + 1) )
      {
        v46 = (_QWORD *)(v292 + 8);
        do
        {
          v47 = *(v46 - 1);
          if ( v47 )
            sub_140001660(*v46, v47, 1);
          v46 += 4;
          --v45;
        }
        while ( v45 );
      }
      v48 = v291;
      if ( v291 )
        sub_140001660(v292, 32 * v291, 8);
      a1 = v307;
      v12 = v294;
      if ( v14 >= 3 )
      {
        nullsub_1(v44, v48);
        v68 = (void *)sub_140001650(71, 1);
        if ( !v68 )
          sub_14196B2DB(1, 71);
        *(_QWORD *)&v6 = 0x6F736A2E68747561LL;
        qmemcpy(v68, "auth.json ownership kept changing while rebuilding the account registry", 71);
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)(a1 + 16) = 71;
        *(_QWORD *)(a1 + 24) = v68;
        *(_QWORD *)(a1 + 32) = 71;
        goto LABEL_3;
      }
      continue;
    }
    break;
  }
LABEL_87:
  v331 = 1;
  v330 = 1;
  sub_1416B18A0((unsigned int)&v181, v287, v322, (unsigned int)aAccountDomainL, 20);
  v302 = *((_QWORD *)&v181 + 1);
  sub_140C97180((unsigned int)v255, DWORD2(v181), v182, (unsigned int)&aAccountDomainL[20], 13);
  v53 = *(_QWORD *)v255;
  v54 = v308;
  if ( *(_QWORD *)v255 != -1 )
  {
    *(_OWORD *)&v222[64] = *(_OWORD *)&v255[80];
    *(_OWORD *)&v222[48] = *(_OWORD *)&v255[64];
    *(_OWORD *)&v222[32] = *(_OWORD *)&v255[48];
    *(_OWORD *)&v222[16] = *(_OWORD *)&v255[32];
    *(_OWORD *)v222 = *(_OWORD *)&v255[16];
  }
  v55 = *(void **)&v255[8];
  if ( (_QWORD)v181 )
    sub_140001660(v302, v181, 1);
  if ( (_DWORD)v53 != -1 )
  {
    v56 = v307;
    *(_OWORD *)(v307 + 88) = *(_OWORD *)&v222[64];
    v6 = *(_OWORD *)v222;
    v57 = *(_OWORD *)&v222[16];
    v58 = *(_OWORD *)&v222[32];
    *(_OWORD *)(v56 + 72) = *(_OWORD *)&v222[48];
    *(_OWORD *)(v56 + 56) = v58;
    *(_OWORD *)(v56 + 40) = v57;
    *(_OWORD *)(v56 + 24) = v6;
    *(_QWORD *)(v56 + 8) = v53;
    *(_QWORD *)(v56 + 16) = v55;
    *(_QWORD *)v56 = -1;
    v59 = v309;
    if ( (unsigned __int64)(v309 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_329;
    goto LABEL_330;
  }
  v282 = v55;
  v63 = v307;
  if ( v332 )
  {
    v64 = v54[37];
    v36 = v54[38];
    sub_1416C49D0(v255, v64, v36);
    v13 = *(__int128 **)v255;
    sub_14019F370(*(_QWORD *)v255, *(_QWORD *)&v255[8]);
    if ( (_DWORD)v13 != 2 )
    {
      sub_140CFB3B0(v255, v64, v36);
      v65 = *(_QWORD *)v255;
      v164 = *(_OWORD *)&v255[8];
      v165 = *(_OWORD *)&v255[24];
      v166 = *(_OWORD *)&v255[40];
      v167 = *(_OWORD *)&v255[56];
      v168 = *(_OWORD *)&v255[72];
      v169 = *(_QWORD *)&v255[88];
      if ( *(_QWORD *)v255 != -1 )
      {
        *(_QWORD *)(v63 + 96) = v169;
        *(_OWORD *)(v63 + 80) = v168;
        v6 = v164;
        v66 = v165;
        v67 = v166;
        *(_OWORD *)(v63 + 64) = v167;
        *(_OWORD *)(v63 + 48) = v67;
        *(_OWORD *)(v63 + 32) = v66;
        *(_OWORD *)(v63 + 16) = v6;
        *(_QWORD *)(v63 + 8) = v65;
        *(_QWORD *)v63 = -1;
        goto LABEL_328;
      }
      sub_140037470(&v164);
    }
  }
  v80 = v292;
  v287 = v80 >> 64;
  v302 = v80;
  v81 = sub_140A2C1C0(v54);
  if ( v81 )
  {
    v82 = 2;
    goto LABEL_327;
  }
  sub_140CFB3B0(v255, v54[37], v54[38]);
  if ( *(_DWORD *)v255 == -1 )
  {
    v221 = *(_QWORD *)&v255[88];
    v220 = *(_OWORD *)&v255[72];
    v219 = *(_OWORD *)&v255[56];
    v218 = *(_OWORD *)&v255[40];
    v217 = *(_OWORD *)&v255[24];
    v216 = *(_OWORD *)&v255[8];
  }
  else
  {
    *(_QWORD *)&v216 = -1;
    sub_140CB96B0(v255);
  }
  if ( !a5 )
  {
    v81 = -1;
    goto LABEL_148;
  }
  sub_14071D6E0((unsigned int)v255, a5, a6, v294, v300);
  v82 = *(_QWORD *)v255;
  if ( *(_QWORD *)v255 != -1 )
  {
    v81 = *(_QWORD *)&v255[8];
    v13 = *(__int128 **)&v255[24];
    v36 = *(_QWORD *)&v255[16];
    *(_OWORD *)&v222[32] = *(_OWORD *)&v255[64];
    v181 = *(_OWORD *)&v255[32];
    v182 = *(_OWORD *)&v255[48];
    v183 = *(_OWORD *)&v255[64];
    v184 = *(_OWORD *)&v255[80];
LABEL_128:
    v299 = v184;
    v298 = v183;
    v297 = v182;
    v296 = v181;
    goto LABEL_324;
  }
  sub_140D321B0(v255, a5, a6);
  if ( *(_DWORD *)v255 != 2 )
  {
    v83 = *(_OWORD *)&v255[64];
    v84 = *(_QWORD *)&v255[88];
    v313 = *(_QWORD *)&v255[96];
    v85 = *(_QWORD *)&v255[112];
    v322 = v256.m256i_i64[0];
    v86 = *(_OWORD *)&v256.m256i_u64[2];
    if ( *(_QWORD *)&v255[16] )
      sub_140001660(*(_QWORD *)&v255[24], *(_QWORD *)&v255[16], 1);
    if ( (_QWORD)v83 )
      sub_140001660(*((_QWORD *)&v83 + 1), v83, 1);
    if ( (unsigned __int64)(v84 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v313, v84, 1);
      if ( (unsigned __int64)(v85 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_145:
        if ( (unsigned __int64)(v86 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_147:
          v81 = *(_QWORD *)&v255[40];
          v13 = *(__int128 **)&v255[56];
          v36 = *(_QWORD *)&v255[48];
          goto LABEL_148;
        }
LABEL_146:
        sub_140001660(*((_QWORD *)&v86 + 1), v86, 1);
        goto LABEL_147;
      }
    }
    else if ( (unsigned __int64)(v85 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      goto LABEL_145;
    }
    sub_140001660(v322, v85, 1);
    if ( (unsigned __int64)(v86 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_147;
    goto LABEL_146;
  }
  v82 = *(_QWORD *)&v255[8];
  v36 = *(_QWORD *)&v255[24];
  v81 = *(_QWORD *)&v255[16];
  v13 = *(__int128 **)&v255[32];
  v181 = *(_OWORD *)&v255[40];
  v182 = *(_OWORD *)&v255[56];
  v183 = *(_OWORD *)&v255[72];
  v184 = *(_OWORD *)&v255[88];
  if ( *(_QWORD *)&v255[8] != -1 )
    goto LABEL_128;
LABEL_148:
  v295 = v36;
  v313 = v81;
  v87 = sub_140719230();
  v88 = (void *)v216;
  if ( (_QWORD)v216 == -1 )
  {
    v90 = (__m128)0xA0000000FuLL;
    v92 = 1;
    v89 = 0;
    v91 = 0;
  }
  else
  {
    v89 = v220;
    if ( (_BYTE)v220 == 2 )
    {
      v90 = (__m128)0xA0000000FuLL;
      v91 = 0;
      v89 = 0;
    }
    else
    {
      v91 = v219;
      v90 = (__m128)*((unsigned __int64 *)&v219 + 1);
      v254[0] = *(_DWORD *)((char *)&v220 + 1);
      *(_DWORD *)((char *)v254 + 3) = DWORD1(v220);
    }
    v92 = 1;
    if ( BYTE4(v221) != 2 )
      v92 = BYTE4(v221);
  }
  DWORD2(v252) = 4;
  *(_QWORD *)&v252 = v87;
  *(_QWORD *)&v249 = -1;
  v246 = 0;
  v247 = 8;
  v248 = 0;
  *((_QWORD *)&v250 + 1) = v91;
  _mm_storel_ps((double *)&v251, v90);
  BYTE8(v251) = v89;
  *(_DWORD *)((char *)&v251 + 9) = v254[0];
  HIDWORD(v251) = *(_DWORD *)((char *)v254 + 3);
  BYTE12(v252) = v92;
  v93 = v54[5];
  v94 = v54[6];
  sub_140718ED0(&v198, v93, v94);
  v95 = v198;
  if ( v198 == -2 )
  {
    v293 = -2;
    v329 = 1;
    v328 = 1;
    sub_1416C49D0(v255, v93, v94);
    v96 = v313;
    if ( *(_DWORD *)v255 == 2 )
    {
      if ( (v255[8] & 3u) - 2 >= 2 && (v255[8] & 3) != 0 )
      {
        --*(_QWORD *)&v255[8];
        v255[0] = 3;
        v293 = -2;
        v329 = 1;
        v328 = 1;
        sub_1416EBAD0(&v255[8]);
      }
      v293 = -2;
      v329 = 1;
      v328 = 0;
      sub_140CB96B0(&v199);
    }
    else
    {
      if ( v332 )
      {
        v81 = *((_QWORD *)&v199 + 1);
        v82 = v199;
        v13 = *((__int128 **)&v200 + 1);
        v36 = v200;
        v296 = v201;
        v297 = v202;
        v298 = v203;
        v299 = v204;
        goto LABEL_322;
      }
      *(_OWORD *)&v255[80] = v204;
      *(_OWORD *)&v255[64] = v203;
      *(_OWORD *)&v255[48] = v202;
      *(_OWORD *)&v255[32] = v201;
      *(_OWORD *)&v255[16] = v200;
      *(_OWORD *)v255 = v199;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v181 = v255;
        *((_QWORD *)&v181 + 1) = sub_140D76130;
        *(_QWORD *)v222 = aCodexmateLibCo_44;
        *(_QWORD *)&v222[8] = 31;
        *(_QWORD *)&v222[16] = aCodexmateLibCo_44;
        *(_QWORD *)&v222[24] = 31;
        *(_QWORD *)&v222[32] = &off_141A94E40;
        sub_140AF72B0(&unk_141A94DF0, &v181, 2, v222);
      }
      v293 = -2;
      v329 = 1;
      v328 = 0;
      sub_140CB96B0(v255);
    }
    goto LABEL_170;
  }
  v293 = v198;
  v329 = 1;
  v328 = 1;
  if ( !(unsigned __int8)sub_14071C530(&v198) )
  {
    sub_1400378C0(&v198);
    goto LABEL_170;
  }
  hObject = v88;
  sub_1419234B0(&v176, &v198, 176);
  v233 = v95;
  v97 = v94;
  sub_140719C90(v255, &v176, v93, v94);
  v82 = *(_QWORD *)&v255[8];
  v36 = *(_QWORD *)&v255[24];
  v81 = *(_QWORD *)&v255[16];
  *(_OWORD *)v222 = *(_OWORD *)&v255[40];
  *(_OWORD *)&v222[16] = *(_OWORD *)&v255[56];
  *(_OWORD *)&v222[32] = *(_OWORD *)&v255[72];
  *(_OWORD *)&v222[48] = *(_OWORD *)&v255[88];
  v98 = v294;
  if ( *(_QWORD *)v255 == 2 )
  {
    v13 = *(__int128 **)&v255[32];
    v296 = *(_OWORD *)v222;
    v297 = *(_OWORD *)&v222[16];
    v298 = *(_OWORD *)&v222[32];
    v299 = *(_OWORD *)&v222[48];
    v96 = v313;
LABEL_321:
    sub_1400378C0(&v176);
    goto LABEL_322;
  }
  v215 = v258;
  v214 = v257;
  v213 = v256;
  v212 = *(_OWORD *)&v255[104];
  v208 = *(_OWORD *)&v255[16];
  *(_QWORD *)v209 = *(_QWORD *)&v255[32];
  *(_OWORD *)&v209[8] = *(_OWORD *)v222;
  *(_OWORD *)&v209[24] = *(_OWORD *)&v222[16];
  v210 = *(_OWORD *)&v222[32];
  v211 = *(_OWORD *)&v222[48];
  v207 = *(_OWORD *)v255;
  v134 = *(_DWORD *)&v222[8];
  v135 = *(_QWORD *)&v222[16];
  v312 = *(_QWORD *)&v222[8];
  v314 = *(_QWORD *)&v222[16];
  if ( a5
    && v313 != -1
    && v13 == *(__int128 **)&v222[16]
    && (v136 = v294,
        v137 = *(_DWORD *)&v222[8],
        v138 = sub_141923B40(v295, *(_QWORD *)&v222[8], v13),
        v134 = v137,
        v98 = v136,
        !v138) )
  {
    v253 = v95;
    sub_1416B0D00(v255, a5, a6);
    v139 = v300;
    v36 = v97;
    v206 = *(_OWORD *)&v255[16];
    v205 = *(_OWORD *)v255;
  }
  else
  {
    v253 = v95;
    v136 = v98;
    v139 = v300;
    sub_14071B420((unsigned int)&v205, v98, v300, v134, v135);
    v36 = v97;
  }
  v140 = v206;
  v322 = *((_QWORD *)&v205 + 1);
  sub_14071E1C0(v255, *((__int64 *)&v205 + 1), v206, v136, v139);
  v82 = *(_QWORD *)v255;
  if ( *(_QWORD *)v255 != -1 )
  {
    v81 = *(_QWORD *)&v255[8];
    v13 = *(__int128 **)&v255[24];
    v36 = *(_QWORD *)&v255[16];
    v296 = *(_OWORD *)&v255[32];
    v297 = *(_OWORD *)&v255[48];
    v298 = *(_OWORD *)&v255[64];
    v299 = *(_OWORD *)&v255[80];
LABEL_318:
    v96 = v313;
    if ( (_QWORD)v205 )
      sub_140001660(v322, v205, 1);
    sub_140037800(&v207);
    goto LABEL_321;
  }
  sub_140D82680(&v227, &v176);
  sub_1416C49D0(v255, v322, v140);
  v141 = *(_DWORD *)v255;
  sub_14019F370(*(_QWORD *)v255, *(_QWORD *)&v255[8]);
  if ( v141 != 2 )
  {
    sub_14071D6E0((unsigned int)v255, v322, v140, v294, v300);
    v82 = *(_QWORD *)v255;
    if ( *(_QWORD *)v255 != -1 )
    {
      v81 = *(_QWORD *)&v255[8];
      v13 = *(__int128 **)&v255[24];
      v36 = *(_QWORD *)&v255[16];
      v296 = *(_OWORD *)&v255[32];
      v297 = *(_OWORD *)&v255[48];
      v298 = *(_OWORD *)&v255[64];
      v142 = *(_OWORD *)&v255[80];
LABEL_284:
      v299 = v142;
      goto LABEL_317;
    }
    sub_140718ED0(v239, v322, v140);
    if ( *(_QWORD *)v239 == -2 )
    {
      if ( v332 )
      {
        v82 = *(_QWORD *)&v239[8];
        v36 = *(_QWORD *)&v239[24];
        v81 = *(_QWORD *)&v239[16];
        v13 = *(__int128 **)&v239[32];
        v296 = *(_OWORD *)&v239[40];
        v297 = *(_OWORD *)&v239[56];
        v298 = *(_OWORD *)&v239[72];
        v142 = *(_OWORD *)&v239[88];
        goto LABEL_284;
      }
      *(_OWORD *)&v255[80] = *(_OWORD *)&v239[88];
      *(_OWORD *)&v255[64] = *(_OWORD *)&v239[72];
      *(_OWORD *)&v255[48] = *(_OWORD *)&v239[56];
      *(_OWORD *)&v255[32] = *(_OWORD *)&v239[40];
      *(_OWORD *)&v255[16] = *(_OWORD *)&v239[24];
      *(_OWORD *)v255 = *(_OWORD *)&v239[8];
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v181 = v255;
        *((_QWORD *)&v181 + 1) = sub_140D76130;
        *(_QWORD *)v222 = aCodexmateLibCo_44;
        *(_QWORD *)&v222[8] = 31;
        *(_QWORD *)&v222[16] = aCodexmateLibCo_44;
        *(_QWORD *)&v222[24] = 31;
        *(_QWORD *)&v222[32] = &off_141A94DD8;
        sub_140AF72B0(&unk_141A94D7F, &v181, 2, v222);
      }
      v325 = 1;
      sub_140CB96B0(v255);
LABEL_365:
      v36 = v97;
      goto LABEL_280;
    }
    v325 = 1;
    if ( (unsigned __int8)sub_14071C530(v239) )
    {
      sub_1419234B0(&v181, v239, 176);
      sub_140719C90(v255, &v181, v322, v140);
      v82 = *(_QWORD *)&v255[8];
      v36 = *(_QWORD *)&v255[24];
      v81 = *(_QWORD *)&v255[16];
      v13 = *(__int128 **)&v255[32];
      v240 = *(_OWORD *)&v255[40];
      v241 = *(_OWORD *)&v255[56];
      v242 = *(_OWORD *)&v255[72];
      v243 = *(_OWORD *)&v255[88];
      if ( *(_QWORD *)v255 == 2 )
      {
        v296 = v240;
        v297 = v241;
        v298 = v242;
        v299 = v243;
LABEL_305:
        sub_1400378C0(v239);
        goto LABEL_317;
      }
      v226[0] = v258;
      v225 = v257;
      v224 = v256;
      v223 = *(_OWORD *)&v255[104];
      *(_OWORD *)&v222[16] = *(_OWORD *)&v255[16];
      *(_QWORD *)&v222[32] = *(_QWORD *)&v255[32];
      *(_OWORD *)&v222[40] = v240;
      *(_OWORD *)&v222[56] = v241;
      *(_OWORD *)&v222[72] = v242;
      *(_OWORD *)&v222[88] = v243;
      *(_OWORD *)v222 = *(_OWORD *)v255;
      if ( (_QWORD)v241 != v314 || (unsigned int)sub_141923B40(*(_QWORD *)&v222[48], v312, v314) )
      {
        *(_QWORD *)&v240 = v322;
        *((_QWORD *)&v240 + 1) = v140;
        *(_QWORD *)v255 = &v240;
        *(_QWORD *)&v255[8] = sub_1416CE600;
        sub_1416DAFA0(v175, &unk_141A94D51, v255);
        v81 = v175[0];
        v36 = v175[1];
        v13 = (__int128 *)v175[2];
        sub_140037800(v222);
        v82 = 9;
        goto LABEL_305;
      }
      if ( a5
        && (sub_1416B0AC0(&v240, a5, a6), sub_1416B0AC0(v255, v322, v140), (unsigned __int8)sub_140233FC0(&v240, v255))
        || (unsigned __int8)sub_140EBCBC0(&v181, &v176) )
      {
        sub_1400378C0(&v227);
        sub_1419234B0(&v227, v239, 176);
        sub_140037800(v222);
        goto LABEL_315;
      }
      sub_140037800(v222);
    }
    else
    {
      if ( v332 )
      {
        *(_QWORD *)v222 = v322;
        *(_QWORD *)&v222[8] = v140;
        *(_QWORD *)v255 = v222;
        *(_QWORD *)&v255[8] = sub_1416CE600;
        v325 = 1;
        sub_1416DAFA0(v174, &unk_141A94D10, v255);
        v81 = v174[0];
        v36 = v174[1];
        v13 = (__int128 *)v174[2];
        sub_1400378C0(v239);
        v82 = 9;
        goto LABEL_317;
      }
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v255 = aCodexmateLibCo_44;
        *(_QWORD *)&v255[8] = 31;
        *(_QWORD *)&v255[16] = aCodexmateLibCo_44;
        *(_QWORD *)&v255[24] = 31;
        *(_QWORD *)&v255[32] = &off_141A94CF8;
        v325 = 1;
        sub_140AF72B0(&unk_141A94CA4, 169, 2, v255);
        if ( *(_QWORD *)v239 == -2 )
          goto LABEL_365;
      }
    }
    sub_1400378C0(v239);
    goto LABEL_365;
  }
LABEL_280:
  v81 = sub_1407C87B0(v93, v36, v322, v140);
  if ( v81 )
  {
    v82 = 2;
LABEL_317:
    sub_1400378C0(&v227);
    goto LABEL_318;
  }
LABEL_315:
  sub_140719C90(v255, &v227, v322, v140);
  v82 = *(_QWORD *)&v255[8];
  v36 = *(_QWORD *)&v255[24];
  v81 = *(_QWORD *)&v255[16];
  v13 = *(__int128 **)&v255[32];
  v181 = *(_OWORD *)&v255[40];
  v182 = *(_OWORD *)&v255[56];
  v183 = *(_OWORD *)&v255[72];
  v184 = *(_OWORD *)&v255[88];
  if ( *(_QWORD *)v255 == 2 )
  {
    v296 = v181;
    v297 = v182;
    v298 = v183;
    v299 = v184;
    goto LABEL_317;
  }
  v226[0] = v258;
  v225 = v257;
  v224 = v256;
  v223 = *(_OWORD *)&v255[104];
  *(_OWORD *)&v222[16] = *(_OWORD *)&v255[16];
  *(_QWORD *)&v222[32] = *(_QWORD *)&v255[32];
  *(_OWORD *)&v222[40] = v181;
  *(_OWORD *)&v222[56] = v182;
  *(_OWORD *)&v222[72] = v183;
  *(_OWORD *)&v222[88] = v184;
  *(_OWORD *)v222 = *(_OWORD *)v255;
  v324[1] = 1;
  sub_1416DB410(&v234, &v222[40]);
  v179[0] = v322;
  v179[1] = v140;
  v316 = 1;
  sub_140D82310(&v240, v179);
  v303 = *(_QWORD *)&v222[72];
  v310 = *(void **)&v222[64];
  v311 = *(_QWORD *)&v222[88];
  v154 = *(_QWORD *)&v222[80];
  v304 = *(_QWORD *)&v222[96];
  v301 = *((_QWORD *)&v223 + 1);
  v155 = v223;
  v305 = v224.m256i_i64[0];
  v306 = v224.m256i_i64[2];
  v156 = *(_OWORD *)&v224.m256i_u64[1];
  v288 = v224.m256i_i64[3];
  v157 = v225;
  *(_QWORD *)&v181 = (char *)v226 + 2;
  *((_QWORD *)&v181 + 1) = sub_140D75D20;
  sub_1416DAFA0(v255, &unk_141A937E6, &v181);
  v283 = *(_QWORD *)&v255[8];
  v314 = *(_QWORD *)v255;
  sub_1416D94C0(v239, *(_QWORD *)&v255[8], *(_QWORD *)&v255[16]);
  v158 = sub_140D2D790();
  *(_QWORD *)&v181 = v226;
  *((_QWORD *)&v181 + 1) = sub_140D84C10;
  sub_1416DAFA0(v255, &unk_141A937E6, &v181);
  v284 = *(_QWORD *)&v255[8];
  v312 = *(_QWORD *)v255;
  sub_1416D94C0(&v181, *(_QWORD *)&v255[8], *(_QWORD *)&v255[16]);
  v159 = *((_QWORD *)&v225 + 1);
  v160 = sub_140719230();
  v260 = v235;
  v259 = v234;
  v261 = v240;
  v262 = v241;
  v263 = v310;
  v264 = v303;
  v265 = v154;
  v266 = 0;
  v267 = 1;
  v268 = 0;
  v273 = v311;
  v274 = v304;
  v275 = v155;
  v276 = v305;
  v277 = v156;
  v278 = v288;
  v279 = v157;
  v270 = *(_QWORD *)&v239[16];
  v269 = *(_OWORD *)v239;
  *(_QWORD *)v255 = 1;
  *(_QWORD *)&v255[8] = v158;
  v271 = v181;
  v272 = v182;
  *(_QWORD *)&v255[16] = 0;
  v281 = -16776702;
  *(_QWORD *)&v255[32] = 0;
  *(_QWORD *)&v255[48] = 0;
  *(_QWORD *)&v255[64] = 0;
  v280 = v159;
  *(_QWORD *)&v255[80] = 1;
  *(_QWORD *)&v255[88] = v160;
  *(_QWORD *)&v255[96] = 0;
  *(_QWORD *)&v255[112] = 2;
  *(_QWORD *)&v257 = 2;
  if ( v312 )
    sub_140001660(v284, v312, 1);
  if ( v314 )
    sub_140001660(v283, v314, 1);
  v161 = &v216;
  if ( hObject == (HANDLE)-1LL )
    v161 = nullptr;
  v162 = sub_140D36500(v161, *(_QWORD *)&v222[48], *(_QWORD *)&v222[56]);
  v321 = 1;
  sub_140D2C4E0(v255, v162);
  v321 = 1;
  sub_140D2AAB0(v255, v236);
  v321 = 0;
  sub_140D28660(&v246, v255);
  *(_QWORD *)&v182 = *(_QWORD *)&v222[56];
  v181 = *(_OWORD *)&v222[40];
  if ( (_QWORD)v249 != -1 && (_QWORD)v249 )
    sub_140001660(*((_QWORD *)&v249 + 1), v249, 1);
  *(_QWORD *)&v250 = v182;
  v249 = v181;
  if ( *(_QWORD *)&v222[16] )
    sub_140001660(*(_QWORD *)&v222[24], *(_QWORD *)&v222[16], 1);
  sub_1400378C0(&v227);
  if ( (_QWORD)v205 )
    sub_140001660(v322, v205, 1);
  sub_140037800(&v207);
  sub_1400378C0(&v176);
  v54 = v308;
LABEL_170:
  v287 = v302 + 32 * v287;
  v99 = (unsigned __int64)&v183 + 8;
  v100 = v302;
  if ( v302 == v287 )
  {
LABEL_260:
    *(_QWORD *)v255 = v324;
    if ( v248 >= 2 )
    {
      if ( v248 >= 0x15 )
        sub_1401B6BD0(v247, v248, v255);
      else
        sub_140CC2C10(v247);
      v54 = v308;
    }
    sub_140D02DF0(v255, v54, (__int64)&v246, 1);
    v82 = *(_QWORD *)v255;
    if ( *(_QWORD *)v255 != -1 )
    {
      v81 = *(_QWORD *)&v255[8];
      v13 = *(__int128 **)&v255[24];
      v36 = *(_QWORD *)&v255[16];
      v296 = *(_OWORD *)&v255[32];
      v297 = *(_OWORD *)&v255[48];
      v298 = *(_OWORD *)&v255[64];
      v133 = *(_OWORD *)&v255[80];
LABEL_264:
      v299 = v133;
      v96 = v313;
      goto LABEL_322;
    }
    v81 = v246;
    v36 = v247;
    v13 = (__int128 *)v248;
    v296 = v249;
    v297 = v250;
    v298 = v251;
    v299 = v252;
    if ( (unsigned __int64)(v313 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v295, v313, 1);
    if ( (_QWORD)v216 != -1 )
      sub_140037470(&v216);
    goto LABEL_344;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      v101 = *(_QWORD *)(v100 + 8);
      v102 = *(_QWORD *)(v100 + 16);
      sub_14071E1C0(v255, v101, v102, v294, v300);
      v302 += 32LL;
      if ( *(_DWORD *)v255 == -1 )
      {
        sub_1416C4520(v255, v101, v102);
        if ( *(_DWORD *)v255 == 2 )
        {
          *(_QWORD *)v222 = 2;
          *(_QWORD *)&v222[8] = *(_QWORD *)&v255[8];
          v82 = 2;
          goto LABEL_193;
        }
        if ( (v255[76] & 0x10) != 0 || (*(_DWORD *)&v255[80] & 0x20000000) != 0 && (*(_WORD *)&v255[76] & 0x400) != 0 )
        {
          *(_QWORD *)&v181 = v101;
          *((_QWORD *)&v181 + 1) = v102;
          *(_QWORD *)v255 = &v181;
          *(_QWORD *)&v255[8] = sub_1416CE600;
          sub_1416DAFA0(&v222[8], &unk_141A3E0BE, v255);
          *(_QWORD *)v222 = 9;
          v82 = 9;
LABEL_193:
          *(_OWORD *)&v255[80] = *(_OWORD *)&v222[80];
          *(_OWORD *)&v255[64] = *(_OWORD *)&v222[64];
          *(_OWORD *)&v255[48] = *(_OWORD *)&v222[48];
          *(_OWORD *)&v255[32] = *(_OWORD *)&v222[32];
          *(_OWORD *)&v255[16] = *(_OWORD *)&v222[16];
          *(_OWORD *)v255 = *(_OWORD *)v222;
          if ( v332 )
          {
            v81 = *(_QWORD *)&v222[8];
            v13 = *(__int128 **)&v222[24];
            v36 = *(_QWORD *)&v222[16];
            v296 = *(_OWORD *)&v222[32];
            v297 = *(_OWORD *)&v222[48];
            v298 = *(_OWORD *)&v222[64];
            v133 = *(_OWORD *)&v222[80];
            goto LABEL_264;
          }
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            *(_QWORD *)v239 = v255;
            *(_QWORD *)&v239[8] = sub_140D76130;
            *(_QWORD *)&v181 = aCodexmateLibCo_44;
            *((_QWORD *)&v181 + 1) = 31;
            *(_QWORD *)&v182 = aCodexmateLibCo_44;
            *((_QWORD *)&v182 + 1) = 31;
            *(_QWORD *)&v183 = &off_141A94EA8;
            sub_140AF72B0(&unk_141A94E58, v239, 2, &v181);
          }
          sub_140CB96B0(v255);
LABEL_173:
          v100 = v302;
          if ( v302 == v287 )
            goto LABEL_260;
          continue;
        }
      }
      else
      {
        *(_OWORD *)&v222[80] = *(_OWORD *)&v255[80];
        *(_OWORD *)&v222[64] = *(_OWORD *)&v255[64];
        *(_OWORD *)&v222[48] = *(_OWORD *)&v255[48];
        *(_OWORD *)&v222[32] = *(_OWORD *)&v255[32];
        *(_OWORD *)&v222[16] = *(_OWORD *)&v255[16];
        *(_OWORD *)v222 = *(_OWORD *)v255;
        v82 = *(_QWORD *)v255;
        if ( *(_QWORD *)v255 != -1 )
          goto LABEL_193;
      }
      break;
    }
    sub_140718ED0(v255, v101, v102);
    if ( *(_QWORD *)v255 == -2 )
    {
      if ( v332 )
      {
        v82 = *(_QWORD *)&v255[8];
        v36 = *(_QWORD *)&v255[24];
        v81 = *(_QWORD *)&v255[16];
        v13 = *(__int128 **)&v255[32];
        v296 = *(_OWORD *)&v255[40];
        v297 = *(_OWORD *)&v255[56];
        v298 = *(_OWORD *)&v255[72];
        v133 = *(_OWORD *)&v255[88];
        goto LABEL_264;
      }
      *(_OWORD *)&v222[80] = *(_OWORD *)&v255[88];
      *(_OWORD *)&v222[64] = *(_OWORD *)&v255[72];
      *(_OWORD *)&v222[48] = *(_OWORD *)&v255[56];
      *(_OWORD *)&v222[32] = *(_OWORD *)&v255[40];
      *(_OWORD *)&v222[16] = *(_OWORD *)&v255[24];
      *(_OWORD *)v222 = *(_OWORD *)&v255[8];
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v207 = v101;
        *((_QWORD *)&v207 + 1) = v102;
        *(_QWORD *)&v227 = &v207;
        *((_QWORD *)&v227 + 1) = sub_1416CE600;
        *(_QWORD *)&v228 = v222;
        *((_QWORD *)&v228 + 1) = sub_140D76130;
        *(_QWORD *)&v181 = aCodexmateLibCo_44;
        *((_QWORD *)&v181 + 1) = 31;
        *(_QWORD *)&v182 = aCodexmateLibCo_44;
        *((_QWORD *)&v182 + 1) = 31;
        *(_QWORD *)&v183 = &off_141A950A8;
        sub_140AF72B0(&unk_141A95048, &v227, 2, &v181);
      }
      sub_140CB96B0(v222);
      goto LABEL_173;
    }
    sub_1419234B0(v239, v255, 176);
    if ( !(unsigned __int8)sub_14071C530(v239) )
    {
LABEL_259:
      sub_1400378C0(v239);
      v100 = v302;
      if ( v302 == v287 )
        goto LABEL_260;
      continue;
    }
    break;
  }
  sub_140719C90(v255, v239, v101, v102);
  if ( *(_DWORD *)v255 == 2 )
  {
    if ( v332 )
    {
      v82 = *(_QWORD *)&v255[8];
      v36 = *(_QWORD *)&v255[24];
      v81 = *(_QWORD *)&v255[16];
      v13 = *(__int128 **)&v255[32];
      v296 = *(_OWORD *)&v255[40];
      v297 = *(_OWORD *)&v255[56];
      v298 = *(_OWORD *)&v255[72];
      v299 = *(_OWORD *)&v255[88];
      goto LABEL_287;
    }
    *(_OWORD *)&v222[80] = *(_OWORD *)&v255[88];
    *(_OWORD *)&v222[64] = *(_OWORD *)&v255[72];
    *(_OWORD *)&v222[48] = *(_OWORD *)&v255[56];
    *(_OWORD *)&v222[32] = *(_OWORD *)&v255[40];
    *(_OWORD *)&v222[16] = *(_OWORD *)&v255[24];
    *(_OWORD *)v222 = *(_OWORD *)&v255[8];
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v176 = v101;
      v177 = v102;
      *(_QWORD *)&v207 = &v176;
      *((_QWORD *)&v207 + 1) = sub_1416CE600;
      *(_QWORD *)&v208 = v222;
      *((_QWORD *)&v208 + 1) = sub_140D76130;
      *(_QWORD *)&v227 = aCodexmateLibCo_44;
      *((_QWORD *)&v227 + 1) = 31;
      *(_QWORD *)&v228 = aCodexmateLibCo_44;
      *((_QWORD *)&v228 + 1) = 31;
      *(_QWORD *)&v229 = &off_141A95030;
      sub_140AF72B0(&unk_141A94FD0, &v207, 2, &v227);
    }
    sub_140CB96B0(v222);
    goto LABEL_259;
  }
  sub_1419234B0(&v181, v255, 176);
  v315 = 1;
  sub_1416DB410(&v176, (char *)&v183 + 8);
  if ( !v248 )
  {
    LODWORD(v109) = 0;
LABEL_215:
    v327 = 1;
    sub_1416DB410(&v207, &v176);
    *(_QWORD *)&v240 = v101;
    *((_QWORD *)&v240 + 1) = v102;
    *(_QWORD *)&v227 = 0;
    *((_QWORD *)&v227 + 1) = 1;
    *(_QWORD *)&v228 = 0;
    *(_QWORD *)&v222[16] = 1610612768;
    *(_QWORD *)v222 = &v227;
    *(_QWORD *)&v222[8] = &off_141A997B8;
    if ( (unsigned __int8)sub_1416CE600(&v240, v222, v110) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_10,
        55,
        (unsigned int)v324,
        (unsigned int)&unk_141A93F80,
        (__int64)&off_141A99870);
    v310 = *((void **)&v227 + 1);
    v322 = v227;
    v111 = v228;
    hObject = v185;
    v311 = v186;
    v288 = v187;
    v314 = v188;
    v303 = v189;
    v289 = *((_QWORD *)&v190 + 1);
    v112 = v190;
    v304 = v191;
    v290 = *((_QWORD *)&v192 + 1);
    v113 = v192;
    v305 = v193;
    v114 = v194;
    *(_QWORD *)&v227 = &v197;
    *((_QWORD *)&v227 + 1) = sub_140D75D20;
    sub_1416DAFA0(v222, &unk_141A937E6, &v227);
    v301 = v111;
    v284 = v114;
    LODWORD(v283) = v109;
    v237 = *(_QWORD *)&v222[8];
    v312 = *(_QWORD *)v222;
    sub_1416D94C0(&v227, *(_QWORD *)&v222[8], *(_QWORD *)&v222[16]);
    sub_1414331D0(v222);
    v115 = *(_DWORD *)v222;
    v116 = (*(int *)v222 >> 13) - 1;
    if ( *(int *)v222 >> 13 <= 0 )
    {
      v117 = (1 - (*(int *)v222 >> 13)) / 0x190u + 1;
      v116 += 400 * v117;
      v285 = -146097 * v117;
    }
    else
    {
      v285 = 0;
    }
    v118 = *(unsigned int *)&v222[4];
    v119 = *(unsigned int *)&v222[8];
    v198 = (__int64)&v196;
    *(_QWORD *)&v199 = sub_140D84C10;
    sub_1416DAFA0(v222, &unk_141A937E6, &v198);
    v238 = *(_QWORD *)&v222[8];
    v306 = *(_QWORD *)v222;
    sub_1416D94C0(v222, *(_QWORD *)&v222[8], *(_QWORD *)&v222[16]);
    v260 = v208;
    v259 = v207;
    *(_QWORD *)&v261 = v322;
    *((_QWORD *)&v261 + 1) = v310;
    v262 = v301;
    v263 = hObject;
    v264 = v311;
    v265 = v288;
    v266 = 0;
    v267 = 1;
    v268 = 0;
    v273 = v314;
    v274 = v303;
    v275 = v112;
    v276 = v304;
    v277 = v113;
    v278 = v305;
    v279 = v284;
    v270 = v228;
    v269 = v227;
    *(_QWORD *)v255 = 1;
    *(_QWORD *)&v255[8] = 1000
                        * (v118
                         + 86400LL
                         * (int)(((1461 * v116) >> 2)
                               + v285
                               + ((v115 >> 4) & 0x1FF)
                               - v116 / 100
                               + ((v116 / 100) >> 2)
                               - 719163))
                        + ((unsigned __int64)(1125899907 * v119) >> 50);
    v272 = *(_QWORD *)&v222[16];
    v271 = *(_OWORD *)v222;
    *(_QWORD *)&v255[16] = 0;
    v281 = -16776702;
    *(_QWORD *)&v255[32] = 0;
    *(_QWORD *)&v255[48] = 0;
    *(_QWORD *)&v255[64] = 0;
    v280 = v195;
    *(_QWORD *)&v255[80] = 0;
    *(_QWORD *)&v255[96] = 0;
    *(_QWORD *)&v255[112] = 2;
    *(_QWORD *)&v257 = 2;
    if ( v306 )
      sub_140001660(v238, v306, 1);
    v120 = v283;
    if ( v312 )
      sub_140001660(v237, v312, 1);
    v121 = v177;
    if ( (_QWORD)v216 == -1 || !(_QWORD)v217 )
    {
LABEL_230:
      v123 = 0;
    }
    else
    {
      v122 = v178;
      v123 = *((_QWORD *)&v216 + 1);
      v124 = 424 * v217;
      while ( *(_QWORD *)(v123 + 208) != v122 || (unsigned int)sub_141923B40(*(_QWORD *)(v123 + 200), v121, v122) )
      {
        v123 += 424;
        v124 -= 424;
        if ( !v124 )
          goto LABEL_230;
      }
    }
    v323 = 1;
    sub_140D2C4E0(v255, v123);
    v323 = 1;
    sub_140D2AAB0(v255, v236);
    v125 = v248;
    if ( v120 )
    {
      if ( v99 >= v248 )
        sub_14196B673(v99, v248, &off_141A94FB8);
      v126 = v247 + 424 * v99;
      sub_140CB8120(v126);
      sub_1419234B0(v126, v255, 424);
    }
    else
    {
      if ( v248 == v246 )
        sub_141939AC0(&v246);
      sub_1419234B0(v247 + 424 * v125, v255, 424);
      v248 = v125 + 1;
    }
    v99 = (unsigned __int64)&v183 + 8;
    if ( v176 )
      sub_140001660(v121, v176, 1);
    if ( (_QWORD)v182 )
      sub_140001660(*((_QWORD *)&v182 + 1), v182, 1);
    if ( *((_QWORD *)&v183 + 1) )
      sub_140001660(v184, *((_QWORD *)&v183 + 1), 1);
    goto LABEL_259;
  }
  v103 = v247;
  v104 = 424 * v248;
  v322 = v177;
  v105 = v178;
  v106 = 0;
  v99 = 0;
  while ( *(_QWORD *)(v103 + v106 + 208) != v105
       || (unsigned int)sub_141923B40(*(_QWORD *)(v103 + v106 + 200), v322, v105) )
  {
    ++v99;
    v106 += 424;
    if ( v104 == v106 )
    {
      LODWORD(v109) = 0;
      v54 = v308;
      goto LABEL_215;
    }
  }
  if ( (_QWORD)v249 != -1 && (_QWORD)v250 == v105 && !(unsigned int)sub_141923B40(*((_QWORD *)&v249 + 1), v322, v105) )
  {
LABEL_256:
    if ( v176 )
      sub_140001660(v177, v176, 1);
    sub_140037800(&v181);
    v54 = v308;
    v99 = (unsigned __int64)&v183 + 8;
    goto LABEL_259;
  }
  v107 = *(_QWORD *)(v103 + v106 + 224);
  v108 = *(_QWORD *)(v103 + v106 + 232);
  v327 = 1;
  sub_1416DA980(v255, v107, v108);
  v54 = v308;
  hObject = *(HANDLE *)v255;
  v109 = *(_QWORD *)&v255[16];
  v322 = *(_QWORD *)&v255[8];
  if ( (unsigned __int8)sub_140222930(*(_QWORD *)&v255[8], *(_QWORD *)&v255[16], v101, v102) )
    goto LABEL_254;
  if ( !a5 )
    goto LABEL_208;
  sub_1416B0AC0(v222, a5, a6);
  sub_1416B0AC0(v255, v322, v109);
  if ( (unsigned __int8)sub_140233FC0(v222, v255) )
  {
LABEL_254:
    if ( hObject )
      sub_140001660(v322, hObject, 1);
    goto LABEL_256;
  }
  sub_1416B0AC0(v222, a5, a6);
  sub_1416B0AC0(v255, v101, v102);
  if ( (unsigned __int8)sub_140233FC0(v222, v255) )
    goto LABEL_250;
LABEL_208:
  sub_140718ED0(v222, v322, v109);
  if ( *(_QWORD *)v222 != -2 )
  {
    sub_1419234B0(v255, v222, 176);
    v127 = &v216;
    if ( (_QWORD)v216 == -1 )
      v127 = nullptr;
    v128 = v178;
    v129 = v177;
    v130 = sub_140D36500(v127, v177, v178);
    v131 = 0;
    if ( v130 )
    {
      v131 = *(_QWORD *)(v130 + 224);
      v314 = *(_QWORD *)(v130 + 232);
    }
    sub_14071B420((unsigned int)&v227, v294, v300, v129, v128);
    v312 = *((_QWORD *)&v227 + 1);
    v132 = sub_140D336A0(
             v101,
             v102,
             (unsigned int)v239,
             v322,
             v109,
             (__int64)v255,
             v131,
             v314,
             *((__int64 *)&v227 + 1),
             v228);
    if ( (_QWORD)v227 )
      sub_140001660(v312, v227, 1);
    sub_1400378C0(v255);
    v54 = v308;
    if ( v132 )
    {
LABEL_250:
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v255 = aCodexmateLibCo_44;
        *(_QWORD *)&v255[8] = 31;
        *(_QWORD *)&v255[16] = aCodexmateLibCo_44;
        *(_QWORD *)&v255[24] = 31;
        *(_QWORD *)&v255[32] = &off_141A94FA0;
        sub_140AF72B0(
          "[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity",
          215,
          2,
          v255);
      }
      LOBYTE(v109) = 1;
      if ( hObject )
        sub_140001660(v322, hObject, 1);
      goto LABEL_215;
    }
    goto LABEL_254;
  }
  if ( !v332 )
  {
    *(_OWORD *)&v255[80] = *(_OWORD *)&v222[88];
    *(_OWORD *)&v255[64] = *(_OWORD *)&v222[72];
    *(_OWORD *)&v255[48] = *(_OWORD *)&v222[56];
    *(_OWORD *)&v255[32] = *(_OWORD *)&v222[40];
    *(_OWORD *)&v255[16] = *(_OWORD *)&v222[24];
    *(_OWORD *)v255 = *(_OWORD *)&v222[8];
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v207 = v255;
      *((_QWORD *)&v207 + 1) = sub_140D76130;
      *(_QWORD *)&v227 = aCodexmateLibCo_44;
      *((_QWORD *)&v227 + 1) = 31;
      *(_QWORD *)&v228 = aCodexmateLibCo_44;
      *((_QWORD *)&v228 + 1) = 31;
      *(_QWORD *)&v229 = &off_141A94F18;
      sub_140AF72B0(&unk_141A94EC0, &v207, 2, &v227);
    }
    sub_140CB96B0(v255);
    v54 = v308;
    goto LABEL_250;
  }
  v82 = *(_QWORD *)&v222[8];
  v36 = *(_QWORD *)&v222[24];
  v81 = *(_QWORD *)&v222[16];
  v13 = *(__int128 **)&v222[32];
  v296 = *(_OWORD *)&v222[40];
  v297 = *(_OWORD *)&v222[56];
  v298 = *(_OWORD *)&v222[72];
  v299 = *(_OWORD *)&v222[88];
  if ( hObject )
    sub_140001660(v322, hObject, 1);
  if ( v176 )
    sub_140001660(v177, v176, 1);
  sub_140037800(&v181);
LABEL_287:
  sub_1400378C0(v239);
  v96 = v313;
LABEL_322:
  sub_140037470(&v246);
  if ( (unsigned __int64)(v96 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
    sub_140001660(v295, v96, 1);
LABEL_324:
  if ( (_QWORD)v216 != -1 )
    sub_140037470(&v216);
  if ( v82 != -1 )
  {
LABEL_327:
    v173 = v299;
    v172 = v298;
    v171 = v297;
    v170 = v296;
    v143 = v307;
    *(_QWORD *)(v307 + 24) = v36;
    *(_QWORD *)(v143 + 32) = v13;
    *(_QWORD *)&v6 = v170;
    v144 = v171;
    v145 = v172;
    v146 = v173;
    *(_OWORD *)(v143 + 40) = v170;
    *(_OWORD *)(v143 + 56) = v144;
    *(_OWORD *)(v143 + 72) = v145;
    *(_OWORD *)(v143 + 88) = v146;
    *(_QWORD *)(v143 + 8) = v82;
    *(_QWORD *)(v143 + 16) = v81;
    *(_QWORD *)v143 = -1;
    goto LABEL_328;
  }
LABEL_344:
  v173 = v299;
  v172 = v298;
  *(_QWORD *)&v222[8] = v36;
  *(_QWORD *)&v222[16] = v13;
  *(_OWORD *)&v222[24] = v296;
  *(_OWORD *)&v222[40] = v297;
  *(_OWORD *)&v222[56] = v298;
  *(_OWORD *)&v222[72] = v299;
  *(_QWORD *)v222 = v81;
  *(_QWORD *)&v182 = v297;
  v181 = v296;
  DWORD2(v182) = (_DWORD)v13;
  BYTE12(v182) = 1;
  sub_140CF7B50(v255, &v181);
  v151 = (_OWORD *)v307;
  *(_OWORD *)(v307 + 96) = *(_OWORD *)&v255[96];
  v151[5] = *(_OWORD *)&v255[80];
  v151[4] = *(_OWORD *)&v255[64];
  v6 = *(_OWORD *)v255;
  v152 = *(_OWORD *)&v255[16];
  v153 = *(_OWORD *)&v255[32];
  v151[3] = *(_OWORD *)&v255[48];
  v151[2] = v153;
  v151[1] = v152;
  *v151 = v6;
  *(double *)&v6 = sub_140CB3EE0(v222);
LABEL_328:
  sub_140CAF5C0(&v282);
  CloseHandle(v282);
  v59 = v309;
  if ( (unsigned __int64)(v309 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_329:
    *(double *)&v6 = sub_140001660(v320, v59, 1);
LABEL_330:
  v147 = sub_14143F370(&v286);
  if ( v147 && (unsigned int)(v147 & 3) - 2 >= 2 && (v147 & 3) != 0 )
  {
    *(_QWORD *)&v255[8] = v147 - 1;
    v255[0] = 3;
    sub_1416EBAD0(&v255[8]);
  }
  CloseHandle(v286);
LABEL_335:
  sub_1402350E0(&v244);
  if ( (_QWORD)v244 )
    *(double *)&v6 = sub_140001660(*((_QWORD *)&v244 + 1), 8 * v244, 8);
LABEL_337:
  v148 = *((_QWORD *)&v292 + 1);
  if ( *((_QWORD *)&v292 + 1) )
  {
    v149 = (_QWORD *)(v292 + 8);
    do
    {
      v150 = *(v149 - 1);
      if ( v150 )
        *(double *)&v6 = sub_140001660(*v149, v150, 1);
      v149 += 4;
      --v148;
    }
    while ( v148 );
  }
  if ( v291 )
    *(double *)&v6 = sub_140001660(v292, 32 * v291, 8);
LABEL_369:
  *(_QWORD *)&result = v6;
  return result;
}
