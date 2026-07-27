// __ZN13codexmate_lib8commands12debug_report19upload_debug_report28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000e33a0 | 基线 same-set
// [FULL decompile]

char __fastcall codexmate_lib::commands::debug_report::upload_debug_report::_$u7b$$u7b$closure$u7d$$u7d$::h6a209fee615dbc94(
        unsigned __int64 *a1,
        _QWORD *a2,
        char *a3)
{
  unsigned __int64 *v4; // r13
  char **v5; // rsi
  __int64 v6; // rcx
  char *v7; // r15
  __int64 v8; // r14
  char *v9; // r13
  __int64 *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rax
  volatile signed __int64 ***v22; // rdx
  _BYTE *v23; // r15
  volatile signed __int64 ***v24; // r14
  __int64 v25; // rax
  volatile signed __int64 *v26; // rdi
  __int64 v27; // rax
  _BYTE *v28; // r12
  __int64 v29; // rax
  _BYTE *v30; // r13
  __int64 *v31; // r14
  char v32; // r13
  __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // r12
  int v36; // ecx
  int v37; // ecx
  char v38; // of
  volatile signed __int64 **v39; // rcx
  volatile signed __int64 *v40; // rax
  __int64 v41; // rt0
  volatile signed __int64 *v42; // rdx
  __int64 v43; // rt0
  volatile signed __int64 *v44; // rsi
  __int64 v45; // rt0
  volatile signed __int64 *v46; // rdi
  __int64 v47; // rt0
  volatile signed __int64 *v48; // r8
  __int64 v49; // rt0
  volatile signed __int64 *v50; // r9
  __int64 v51; // rt0
  volatile signed __int64 *v52; // r10
  volatile signed __int64 *v53; // rcx
  __int64 v54; // r12
  unsigned __int64 v55; // r14
  char result; // al
  __int64 v57; // r15
  __int64 v58; // rdx
  _QWORD *v59; // r14
  int v60; // edx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // r8
  __int64 v65; // r15
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rsi
  size_t v69; // rax
  const void *v70; // r15
  size_t v71; // r12
  __int64 v72; // rdi
  __int64 v73; // r14
  _QWORD *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  _BYTE *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 v90; // r12
  void (__fastcall **v91)(__int64); // r15
  void (__fastcall *v92)(__int64); // rsi
  void (__fastcall **v93)(__int64); // r15
  __int64 v94; // r12
  volatile signed __int64 ***v95; // rax
  volatile signed __int64 **v96; // rsi
  int v97; // eax
  __int64 v98; // rsi
  volatile signed __int64 **v99; // r14
  char v100; // al
  _QWORD *v101; // rsi
  __int64 v102; // r15
  char v103; // al
  unsigned __int64 *v104; // r14
  __int64 v105; // rdx
  __int64 v106; // r12
  __int64 v107; // r15
  __int64 v108; // r13
  __int64 v109; // rsi
  __int64 v110; // r14
  __int64 v111; // r15
  __int64 v112; // r12
  __int64 v113; // rsi
  bool v114; // zf
  __int64 v115; // rcx
  __int64 v116; // r15
  __int64 v117; // r12
  __int64 v118; // rsi
  __int64 v119; // r15
  char *v120; // r14
  __int64 v121; // r12
  __int64 v122; // r13
  __int64 v123; // rax
  __int64 v124; // r12
  size_t v125; // r14
  __int64 v126; // r15
  char *v127; // rsi
  __int64 v128; // r12
  __int64 v129; // rax
  __int64 v130; // rdi
  const void *v131; // r15
  size_t v132; // rdx
  size_t v133; // r14
  char *v134; // r12
  __int64 v135; // r13
  char v136; // al
  char *v137; // rdx
  __int64 v138; // rdx
  char *v139; // rsi
  char *v140; // r12
  char *v141; // rsi
  __int64 v142; // rax
  unsigned __int64 v143; // r15
  __int64 v144; // rsi
  __int64 v145; // rsi
  __int64 v146; // rsi
  __int64 v147; // rsi
  __int64 v148; // rsi
  __int64 v149; // rsi
  __int64 v150; // rsi
  __int64 v151; // rsi
  unsigned __int64 *v152; // rdi
  int v153; // ecx
  _BYTE v154[152]; // [rsp+0h] [rbp-13D0h] BYREF
  _BYTE v155[152]; // [rsp+98h] [rbp-1338h] BYREF
  _BYTE v156[120]; // [rsp+130h] [rbp-12A0h] BYREF
  _BYTE v157[96]; // [rsp+1A8h] [rbp-1228h] BYREF
  _BYTE v158[80]; // [rsp+208h] [rbp-11C8h] BYREF
  _BYTE v159[96]; // [rsp+258h] [rbp-1178h] BYREF
  _BYTE v160[152]; // [rsp+2B8h] [rbp-1118h] BYREF
  _QWORD v161[11]; // [rsp+350h] [rbp-1080h] BYREF
  __int64 v162; // [rsp+3A8h] [rbp-1028h]
  __int64 v163; // [rsp+3B0h] [rbp-1020h]
  _BYTE v164[152]; // [rsp+3B8h] [rbp-1018h] BYREF
  _BYTE v165[80]; // [rsp+450h] [rbp-F80h] BYREF
  _QWORD v166[99]; // [rsp+4A0h] [rbp-F30h] BYREF
  int v167; // [rsp+7B8h] [rbp-C18h]
  _BYTE v168[140]; // [rsp+7BCh] [rbp-C14h] BYREF
  __int64 v169; // [rsp+848h] [rbp-B88h] BYREF
  char *v170; // [rsp+850h] [rbp-B80h]
  __int64 v171; // [rsp+858h] [rbp-B78h]
  _QWORD *v172; // [rsp+860h] [rbp-B70h]
  __int64 v173; // [rsp+868h] [rbp-B68h]
  __int64 v174; // [rsp+870h] [rbp-B60h]
  __int64 v175; // [rsp+878h] [rbp-B58h]
  __int64 v176; // [rsp+880h] [rbp-B50h]
  __int64 v177; // [rsp+888h] [rbp-B48h]
  __int64 v178; // [rsp+890h] [rbp-B40h]
  __int64 v179; // [rsp+898h] [rbp-B38h]
  __int64 v180; // [rsp+8A0h] [rbp-B30h]
  __int64 v181; // [rsp+8A8h] [rbp-B28h]
  _BYTE v182[152]; // [rsp+8B0h] [rbp-B20h] BYREF
  int v183; // [rsp+948h] [rbp-A88h] BYREF
  __int64 v184; // [rsp+950h] [rbp-A80h]
  __int64 v185; // [rsp+958h] [rbp-A78h]
  void (__fastcall **v186)(__int64); // [rsp+960h] [rbp-A70h]
  _QWORD v187[3]; // [rsp+968h] [rbp-A68h] BYREF
  _QWORD v188[9]; // [rsp+980h] [rbp-A50h] BYREF
  _QWORD __dst[19]; // [rsp+9C8h] [rbp-A08h] BYREF
  char *v190; // [rsp+A60h] [rbp-970h] BYREF
  __int64 v191; // [rsp+A68h] [rbp-968h]
  __int64 v192; // [rsp+A70h] [rbp-960h]
  _QWORD v193[99]; // [rsp+B70h] [rbp-860h] BYREF
  _BYTE v194[140]; // [rsp+E8Ch] [rbp-544h] BYREF
  _QWORD v195[3]; // [rsp+F18h] [rbp-4B8h] BYREF
  __int64 v196; // [rsp+F30h] [rbp-4A0h]
  __int64 v197; // [rsp+F38h] [rbp-498h]
  __int64 v198; // [rsp+F40h] [rbp-490h] BYREF
  volatile signed __int64 ***v199; // [rsp+F48h] [rbp-488h]
  __int64 v200; // [rsp+F50h] [rbp-480h]
  __int64 v201; // [rsp+F58h] [rbp-478h]
  __int64 v202; // [rsp+F60h] [rbp-470h]
  __int64 v203; // [rsp+F68h] [rbp-468h]
  __int64 v204; // [rsp+F70h] [rbp-460h]
  __int64 v205; // [rsp+F78h] [rbp-458h]
  __int64 v206; // [rsp+F80h] [rbp-450h]
  __int64 v207; // [rsp+F88h] [rbp-448h]
  __int64 v208; // [rsp+F90h] [rbp-440h]
  __int64 v209; // [rsp+F98h] [rbp-438h]
  __int64 v210; // [rsp+FA0h] [rbp-430h]
  __int64 v211; // [rsp+FA8h] [rbp-428h]
  __int64 v212; // [rsp+FB0h] [rbp-420h]
  __int64 v213; // [rsp+FB8h] [rbp-418h]
  __int64 v214; // [rsp+FC0h] [rbp-410h]
  __int64 v215; // [rsp+FC8h] [rbp-408h]
  __int64 v216; // [rsp+FD0h] [rbp-400h]
  __int64 v217; // [rsp+FD8h] [rbp-3F8h]
  __int64 v218; // [rsp+FE0h] [rbp-3F0h]
  __int64 v219; // [rsp+FE8h] [rbp-3E8h]
  __int64 v220; // [rsp+FF0h] [rbp-3E0h]
  __int64 v221; // [rsp+FF8h] [rbp-3D8h]
  __int64 v222; // [rsp+1000h] [rbp-3D0h]
  __int64 v223; // [rsp+1008h] [rbp-3C8h]
  __int64 v224; // [rsp+1010h] [rbp-3C0h]
  __int64 v225; // [rsp+1018h] [rbp-3B8h]
  __int64 v226; // [rsp+1020h] [rbp-3B0h]
  __int64 v227; // [rsp+1028h] [rbp-3A8h]
  __int64 v228; // [rsp+1030h] [rbp-3A0h]
  __int64 v229; // [rsp+1038h] [rbp-398h]
  __int64 v230; // [rsp+1040h] [rbp-390h]
  __int64 v231; // [rsp+1048h] [rbp-388h]
  __int64 v232; // [rsp+1050h] [rbp-380h]
  __int64 v233; // [rsp+1058h] [rbp-378h]
  __int64 v234; // [rsp+1060h] [rbp-370h]
  __int64 v235; // [rsp+1068h] [rbp-368h]
  __int64 v236; // [rsp+1070h] [rbp-360h]
  char *v237; // [rsp+1078h] [rbp-358h]
  __int64 v238; // [rsp+1080h] [rbp-350h]
  __int64 v239; // [rsp+1088h] [rbp-348h]
  __int64 v240; // [rsp+1090h] [rbp-340h]
  __int64 v241; // [rsp+1098h] [rbp-338h]
  __int64 v242; // [rsp+10A0h] [rbp-330h]
  __int64 v243; // [rsp+10A8h] [rbp-328h]
  __int64 v244; // [rsp+10B0h] [rbp-320h]
  __int64 v245; // [rsp+10B8h] [rbp-318h]
  _QWORD v246[3]; // [rsp+10C0h] [rbp-310h] BYREF
  volatile signed __int64 *v247; // [rsp+10D8h] [rbp-2F8h]
  volatile signed __int64 *v248; // [rsp+10E0h] [rbp-2F0h]
  volatile signed __int64 *v249; // [rsp+10E8h] [rbp-2E8h]
  volatile signed __int64 *v250; // [rsp+10F0h] [rbp-2E0h]
  volatile signed __int64 *v251; // [rsp+10F8h] [rbp-2D8h]
  volatile signed __int64 *v252; // [rsp+1100h] [rbp-2D0h]
  volatile signed __int64 *v253; // [rsp+1108h] [rbp-2C8h]
  volatile signed __int64 *v254; // [rsp+1110h] [rbp-2C0h]
  __int64 v255; // [rsp+1118h] [rbp-2B8h]
  __int64 v256; // [rsp+1120h] [rbp-2B0h]
  __int64 v257; // [rsp+1128h] [rbp-2A8h]
  __int64 v258; // [rsp+1130h] [rbp-2A0h]
  __int64 v259; // [rsp+1138h] [rbp-298h]
  __int64 v260; // [rsp+1140h] [rbp-290h]
  __int64 v261; // [rsp+1148h] [rbp-288h]
  __int64 v262; // [rsp+1150h] [rbp-280h]
  __int64 v263; // [rsp+1158h] [rbp-278h]
  __int64 v264; // [rsp+1160h] [rbp-270h]
  __int64 v265; // [rsp+1168h] [rbp-268h]
  __int64 v266; // [rsp+1170h] [rbp-260h]
  __int64 v267; // [rsp+1178h] [rbp-258h]
  __int64 v268; // [rsp+1180h] [rbp-250h]
  __int64 v269; // [rsp+1188h] [rbp-248h]
  __int64 v270; // [rsp+1190h] [rbp-240h]
  unsigned __int64 v271; // [rsp+1198h] [rbp-238h]
  _QWORD *v272; // [rsp+11A0h] [rbp-230h]
  char *v273; // [rsp+11A8h] [rbp-228h] BYREF
  __int64 v274; // [rsp+11B0h] [rbp-220h]
  __int64 v275; // [rsp+11B8h] [rbp-218h]
  _QWORD v276[10]; // [rsp+11C0h] [rbp-210h] BYREF
  _BYTE v277[152]; // [rsp+1210h] [rbp-1C0h] BYREF
  __int64 v278; // [rsp+12B8h] [rbp-118h]
  __int64 v279; // [rsp+12C0h] [rbp-110h]
  void (__fastcall **v280)(__int64); // [rsp+12C8h] [rbp-108h]
  _QWORD *v281; // [rsp+12D0h] [rbp-100h]
  __int64 v282; // [rsp+12D8h] [rbp-F8h]
  _QWORD *v283; // [rsp+12E0h] [rbp-F0h]
  __int64 v284; // [rsp+12E8h] [rbp-E8h]
  __int64 v285; // [rsp+12F0h] [rbp-E0h]
  __int64 v286; // [rsp+12F8h] [rbp-D8h]
  __int64 v287; // [rsp+1300h] [rbp-D0h]
  __int64 v288; // [rsp+1308h] [rbp-C8h]
  __int64 v289; // [rsp+1310h] [rbp-C0h]
  __int64 v290; // [rsp+1318h] [rbp-B8h]
  __int64 v291; // [rsp+1320h] [rbp-B0h]
  _DWORD v292[2]; // [rsp+1328h] [rbp-A8h]
  _QWORD *v293; // [rsp+1330h] [rbp-A0h]
  char *v294; // [rsp+1338h] [rbp-98h]
  __int64 v295; // [rsp+1340h] [rbp-90h]
  _DWORD v296[2]; // [rsp+1348h] [rbp-88h]
  _DWORD v297[2]; // [rsp+1350h] [rbp-80h]
  __int64 v298; // [rsp+1358h] [rbp-78h]
  void *v299; // [rsp+1360h] [rbp-70h]
  _BYTE *v300; // [rsp+1368h] [rbp-68h]
  _BYTE *v301; // [rsp+1370h] [rbp-60h]
  _BYTE *v302; // [rsp+1378h] [rbp-58h]
  unsigned __int64 *v303; // [rsp+1380h] [rbp-50h]
  char *v304; // [rsp+1388h] [rbp-48h]
  volatile signed __int64 ***v305; // [rsp+1390h] [rbp-40h]
  _BYTE v306[7]; // [rsp+1398h] [rbp-38h]
  char *v307; // [rsp+13A0h] [rbp-30h]

  v162 = 0;
  v307 = a3;
  v4 = a1;
  v271 = 0x8000000000000000LL;
  switch ( *((_BYTE *)a2 + 232) )
  {
    case 0:
      v303 = a1;
      *((_BYTE *)a2 + 234) = 0;
      *((_BYTE *)a2 + 233) = 0;
      *((_OWORD *)a2 + 5) = *((_OWORD *)a2 + 4);
      v5 = (char **)(a2 + 12);
      v6 = a2[1];
      a2[12] = *a2;
      a2[13] = v6;
      a2[14] = a2[2];
      a2[15] = a2[3];
      a2[16] = a2[4];
      a2[17] = a2[5];
      a2[18] = a2[6];
      a2[19] = a2[7];
      codexmate_lib::core::debug_report_upload::validate_input::h165d03ca0e6c1202(v166, v5);
      if ( LODWORD(v166[0]) != 11 )
      {
        qmemcpy(v193, v166, 0x60u);
        v190 = nullptr;
        v191 = 1;
        v192 = 0;
        v275 = 1610612768;
        v273 = (char *)&v190;
        v274 = (__int64)&off_101952F18;
        v5 = &v273;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v193,
                                &v273) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v160, &unk_101952FE0, &off_101952F48);
        v7 = v190;
        v8 = v191;
        LOBYTE(v9) = v192;
        LODWORD(v169) = *(_DWORD *)((char *)&v192 + 1);
        *(_DWORD *)((char *)&v169 + 3) = HIDWORD(v192);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v166);
        if ( v7 != (char *)0x8000000000000000LL )
        {
          *(_DWORD *)&v306[3] = *(_DWORD *)((char *)&v169 + 3);
          *(_DWORD *)v306 = v169;
          v15 = (__int64 *)v8;
          goto LABEL_238;
        }
      }
      v10 = (__int64 *)a2[11];
      v11 = *v10;
      if ( !*v10 )
        v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2[11]);
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v11);
      v298 = 0x7FFFFFFFFFFFFFFFLL;
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
      {
        v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v5, v12, 0x7FFFFFFFFFFFFFFFLL);
        LOBYTE(v13) = v13 ^ 1;
        if ( *((_BYTE *)v10 + 8) )
          goto LABEL_9;
LABEL_33:
        LODWORD(v304) = v13;
        goto LABEL_34;
      }
      v13 = 0;
      if ( !*((_BYTE *)v10 + 8) )
        goto LABEL_33;
LABEL_9:
      v166[0] = 0;
      v166[1] = 1;
      v166[2] = 0;
      v193[2] = 1610612768;
      v193[0] = v166;
      v193[1] = &off_101952F18;
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v193) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v160, &unk_101952FE0, &off_101952F48);
      v7 = (char *)v166[0];
      v15 = (__int64 *)v166[1];
      v16 = v13;
      LODWORD(v9) = LOBYTE(v166[2]);
      LODWORD(v273) = *(_DWORD *)((char *)&v166[2] + 1);
      *(_DWORD *)((char *)&v273 + 3) = HIDWORD(v166[2]);
      if ( !(_BYTE)v16
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v298) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v14,
                               v16) )
      {
        *((_BYTE *)v10 + 8) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10);
      *(_DWORD *)((char *)&v190 + 3) = *(_DWORD *)((char *)&v273 + 3);
      LODWORD(v190) = (_DWORD)v273;
      if ( v7 != (char *)0x8000000000000000LL )
      {
        *(_DWORD *)&v306[3] = *(_DWORD *)((char *)&v190 + 3);
        *(_DWORD *)v306 = (_DWORD)v190;
        goto LABEL_238;
      }
      v10 = v15;
      LODWORD(v304) = (_DWORD)v9;
LABEL_34:
      codexmate_lib::core::repository::Repository::get_or_create_device_id::h9c8ab60e55847caa(v166, v10 + 2);
      if ( LODWORD(v166[0]) == 11 )
      {
        v301 = (_BYTE *)v166[1];
        v299 = (void *)v166[2];
        v32 = v166[3];
        LODWORD(v169) = *(_DWORD *)((char *)&v166[3] + 1);
        *(_DWORD *)((char *)&v169 + 3) = HIDWORD(v166[3]);
        v297[0] = v169;
        *(_DWORD *)((char *)v297 + 3) = HIDWORD(v166[3]);
        codexmate_lib::core::repository::Repository::get_or_create_remote_device_secret::h41ee1436abafe872(
          v166,
          v10 + 2);
        if ( LODWORD(v166[0]) == 11 )
        {
          v34 = v166[1];
          v35 = v166[2];
          LOBYTE(v302) = v166[3];
          LODWORD(v169) = *(_DWORD *)((char *)&v166[3] + 1);
          *(_DWORD *)((char *)&v169 + 3) = HIDWORD(v166[3]);
          LODWORD(v161[0]) = v169;
          *(_DWORD *)((char *)v161 + 3) = HIDWORD(v166[3]);
          v292[0] = v161[0];
          *(_DWORD *)((char *)v292 + 3) = HIDWORD(v166[3]);
          *(_DWORD *)((char *)__dst + 3) = *(_DWORD *)((char *)v297 + 3);
          LODWORD(__dst[0]) = v297[0];
          if ( ((unsigned __int8)v304 & 1) == 0
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v298) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   v166,
                                   v10 + 2,
                                   v33,
                                   *(_DWORD *)((char *)v297 + 3)) )
          {
            *((_BYTE *)v10 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10);
          a2[20] = v301;
          a2[21] = v299;
          *((_BYTE *)a2 + 176) = v32;
          v36 = *(_DWORD *)((char *)__dst + 3);
          *(_DWORD *)((char *)a2 + 177) = __dst[0];
          *((_DWORD *)a2 + 45) = v36;
          a2[23] = v34;
          a2[24] = v35;
          *((_BYTE *)a2 + 200) = (_BYTE)v302;
          v37 = *(_DWORD *)((char *)v292 + 3);
          *(_DWORD *)((char *)a2 + 201) = v292[0];
          *((_DWORD *)a2 + 51) = v37;
          codexmate_lib::core::debug_report_upload::TempBundleGuard::new::h97547f8173cc27bd(a2 + 26);
          std::path::Path::to_path_buf::h73855ce4b54f7174(v246, a2[27], a2[28]);
          v4 = v303;
          *((_BYTE *)a2 + 234) = 1;
          v39 = (volatile signed __int64 **)a2[10];
          v40 = *v39;
          v41 = _InterlockedIncrement64(*v39);
          if ( (v41 < 0) ^ v38 | (v41 == 0) )
            goto LABEL_280;
          v42 = v39[1];
          v43 = _InterlockedIncrement64(v42);
          if ( (v43 < 0) ^ v38 | (v43 == 0) )
            goto LABEL_280;
          v44 = v39[2];
          v45 = _InterlockedIncrement64(v44);
          if ( (v45 < 0) ^ v38 | (v45 == 0) )
            goto LABEL_280;
          v46 = v39[3];
          v47 = _InterlockedIncrement64(v46);
          if ( (v47 < 0) ^ v38 | (v47 == 0) )
            goto LABEL_280;
          v48 = v39[4];
          v49 = _InterlockedIncrement64(v48);
          if ( (v49 < 0) ^ v38 | (v49 == 0) )
            goto LABEL_280;
          v50 = v39[5];
          v51 = _InterlockedIncrement64(v50);
          if ( (v51 < 0) ^ v38 | (v51 == 0) )
            goto LABEL_280;
          v52 = v39[7];
          if ( v52 )
          {
            if ( _InterlockedIncrement64(v52) <= 0 )
              goto LABEL_280;
          }
          v53 = v39[6];
          if ( _InterlockedIncrement64(v53) <= 0 )
            goto LABEL_280;
          v247 = v40;
          v248 = v42;
          v249 = v44;
          v250 = v46;
          v251 = v48;
          v252 = v50;
          v254 = v52;
          v253 = v53;
          *((_BYTE *)a2 + 233) = 1;
          v273 = (char *)(a2 + 17);
          v274 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(
            v193,
            "\tcategory=\xC0src/commands/debug_report.rs",
            &v273);
          v166[0] = v193[0];
          v166[1] = v193[1];
          v166[2] = v193[2];
          codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_1015DB024, 12, &unk_1015DB030, 14, v166);
          *(_WORD *)((char *)a2 + 233) = 0;
          v193[2] = v246[2];
          v193[1] = v246[1];
          v193[0] = v246[0];
          v193[3] = v247;
          v193[4] = v248;
          v193[5] = v249;
          v193[6] = v250;
          v193[7] = v251;
          v193[8] = v252;
          v193[9] = v253;
          v193[10] = v254;
          a2[30] = tauri::async_runtime::spawn_blocking::hf611e5846c1830b1(v193);
LABEL_48:
          v298 = (__int64)(a2 + 30);
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h582905f82172e1ca(
            v193,
            a2 + 30,
            v307);
          v54 = v193[0];
          if ( v193[0] == 0x8000000000000002LL )
          {
            result = 3;
            *v4 = 0x8000000000000001LL;
            goto LABEL_243;
          }
          v303 = v4;
          if ( v193[0] == 0x8000000000000001LL )
          {
            v9 = (char *)v193[1];
            LOBYTE(v301) = v193[2];
            LODWORD(v273) = *(_DWORD *)((char *)&v193[2] + 1);
            *(_DWORD *)((char *)&v273 + 3) = HIDWORD(v193[2]);
            v304 = (char *)v193[3];
            v55 = 0x800000000000000CLL;
          }
          else
          {
            v55 = v193[1];
            v9 = (char *)v193[2];
            LOBYTE(v301) = v193[3];
            LODWORD(v273) = *(_DWORD *)((char *)&v193[3] + 1);
            *(_DWORD *)((char *)&v273 + 3) = HIDWORD(v193[3]);
            v304 = (char *)v193[4];
            qmemcpy(v166, &v193[5], 0x48u);
          }
          v296[0] = (_DWORD)v273;
          *(_DWORD *)((char *)v296 + 3) = *(_DWORD *)((char *)&v273 + 3);
          qmemcpy(v188, v166, sizeof(v188));
          v57 = *(_QWORD *)v298;
          if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(*(_QWORD *)v298) )
            tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v57);
          if ( __OFSUB__(-v54, 1) )
          {
            v193[0] = v55;
            v193[1] = v9;
            LOBYTE(v193[2]) = (_BYTE)v301;
            *(_DWORD *)((char *)&v193[2] + 1) = v296[0];
            HIDWORD(v193[2]) = *(_DWORD *)((char *)v296 + 3);
            v193[3] = v304;
            v193[4] = v188[0];
            v193[5] = v188[1];
            v193[6] = v188[2];
            v193[7] = v188[3];
            v193[8] = v188[4];
            v193[9] = v188[5];
            v193[10] = v188[6];
            v193[11] = v188[7];
            v273 = nullptr;
            v274 = 1;
            v275 = 0;
            v166[2] = 1610612768;
            v166[0] = &v273;
            v166[1] = &off_101952F18;
            if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                    v193,
                                    v166) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v160, &unk_101952FE0, &off_101952F48);
            v7 = v273;
            v15 = (__int64 *)v274;
            LOBYTE(v9) = v275;
            LODWORD(v190) = *(_DWORD *)((char *)&v275 + 1);
            *(_DWORD *)((char *)&v190 + 3) = HIDWORD(v275);
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v193);
            *(_DWORD *)v306 = (_DWORD)v190;
            *(_DWORD *)&v306[3] = *(_DWORD *)((char *)&v190 + 3);
            goto LABEL_64;
          }
          if ( v54 == 0x8000000000000001LL )
          {
            v193[0] = v55;
            v193[1] = v9;
            LOBYTE(v193[2]) = (_BYTE)v301;
            *(_DWORD *)((char *)&v193[2] + 1) = v296[0];
            HIDWORD(v193[2]) = *(_DWORD *)((char *)v296 + 3);
            v193[3] = v304;
            v193[4] = v188[0];
            v193[5] = v188[1];
            v273 = (char *)v193;
            v274 = (__int64)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(
              v166,
              "!diagnostic bundle worker failed: \xC0src/commands/account_oauth.rs",
              &v273);
            core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(v193);
            v7 = (char *)v166[0];
            v15 = (__int64 *)v166[1];
            LOBYTE(v9) = v166[2];
            *(_DWORD *)v306 = *(_DWORD *)((char *)&v166[2] + 1);
            *(_DWORD *)&v306[3] = HIDWORD(v166[2]);
LABEL_64:
            *((_BYTE *)a2 + 233) = 0;
            *((_BYTE *)a2 + 234) = 0;
            v59 = a2 + 26;
            _$LT$codexmate_lib..core..debug_report_upload..TempBundleGuard$u20$as$u20$core..ops..drop..Drop$GT$::drop::he9a4536675e95efc(a2 + 26);
LABEL_232:
            if ( *v59 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[27], *v59, 1);
            v148 = a2[23];
            if ( v148 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[24], v148, 1);
            v149 = a2[20];
            if ( v149 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[21], v149, 1);
            goto LABEL_238;
          }
          a2[135] = v54;
          a2[136] = v55;
          a2[137] = v9;
          *((_BYTE *)a2 + 1104) = (_BYTE)v301;
          v60 = *(_DWORD *)((char *)v296 + 3);
          *(_DWORD *)((char *)a2 + 1105) = v296[0];
          *((_DWORD *)a2 + 277) = v60;
          a2[139] = v304;
          qmemcpy(a2 + 140, v188, 0x48u);
          v19 = a2[27];
          v20 = a2[28];
          v61 = a2[21];
          v62 = a2[22];
          v63 = a2[24];
          v64 = a2[25];
          a2[34] = v19;
          a2[35] = v20;
          a2[36] = v61;
          a2[37] = v62;
          a2[38] = v63;
          a2[39] = v64;
          a2[43] = a2 + 135;
          a2[44] = a2 + 12;
          v304 = (char *)a2 + 363;
          *((_BYTE *)a2 + 363) = 0;
          *((_BYTE *)a2 + 362) = 0;
          *((_WORD *)a2 + 180) = 0;
          a2[40] = a2 + 135;
          a2[30] = v61;
          a2[31] = v62;
          a2[32] = v63;
          a2[33] = v64;
          a2[41] = a2 + 12;
          codexmate_lib::core::debug_report_upload::validate_input::h165d03ca0e6c1202(v193, a2 + 12);
          v65 = v193[0];
          if ( v193[0] != 11 )
          {
            v9 = (char *)v193[1];
            v294 = (char *)v193[2];
            v295 = v193[3];
            v73 = v193[4];
            v255 = v193[5];
            v256 = v193[6];
            v257 = v193[7];
            v258 = v193[8];
            v259 = v193[9];
            v260 = v193[10];
            v261 = v193[11];
LABEL_219:
            v238 = v295;
            v237 = v294;
            v239 = v255;
            v240 = v256;
            v241 = v257;
            v242 = v258;
            v243 = v259;
            v244 = v260;
            v245 = v261;
            *v304 = 1;
            v269 = (__int64)v237;
            v270 = v238;
            v230 = v239;
            v231 = v240;
            v232 = v241;
            v233 = v242;
            v234 = v243;
            v235 = v244;
            v236 = v245;
            core::ptr::drop_in_place$LT$codexmate_lib..core..debug_report_upload..upload..$u7b$$u7b$closure$u7d$$u7d$$GT$::h353ef8c639c82c0d(v298);
            if ( (_DWORD)v65 == 11 )
            {
              v273 = v9;
              v274 = v269;
              v275 = v270;
              v276[0] = v73;
              v193[0] = &v273;
              v193[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
              v193[2] = v276;
              v193[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(
                v166,
                "\nreport_id=\xC0\x08; bytes=\xC0!diagnostic bundle worker failed: \xC0src/commands/account_oauth.rs",
                v193);
              v190 = (char *)v166[0];
              v191 = v166[1];
              v192 = v166[2];
              codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
                &unk_1015DB024,
                12,
                &unk_1015DA190,
                16,
                &v190);
              v166[3] = v276[0];
              v166[2] = v275;
              v166[1] = v274;
              v166[0] = v273;
              codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hfcccfab8d11ab999(v193, v166);
              v271 = v193[0];
              v7 = (char *)v193[1];
              v15 = (__int64 *)v193[2];
              LOBYTE(v9) = v193[3];
              *(_DWORD *)v306 = *(_DWORD *)((char *)&v193[3] + 1);
              *(_DWORD *)&v306[3] = HIDWORD(v193[3]);
              qmemcpy(v158, &v193[4], sizeof(v158));
            }
            else
            {
              v193[0] = v65;
              v193[1] = v9;
              v193[2] = v269;
              v193[3] = v270;
              v193[4] = v73;
              v193[5] = v230;
              v193[6] = v231;
              v193[7] = v232;
              v193[8] = v233;
              v193[9] = v234;
              v193[10] = v235;
              v193[11] = v236;
              v190 = (char *)v193;
              v191 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(
                v166,
                "\x06error=\xC0\x1Cdebug bundle worker failed: \xC0\tcategory=\xC0src/commands/debug_report.rs",
                &v190);
              v273 = (char *)v166[0];
              v274 = v166[1];
              v275 = v166[2];
              codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
                &unk_1015DB024,
                12,
                &unk_1015DB03E,
                13,
                &v273);
              v273 = nullptr;
              v274 = 1;
              v275 = 0;
              v166[2] = 1610612768;
              v166[0] = &v273;
              v166[1] = &off_101952F18;
              if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                      v193,
                                      v166) )
                core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v160, &unk_101952FE0, &off_101952F48);
              v7 = v273;
              v15 = (__int64 *)v274;
              LOBYTE(v9) = v275;
              *(_DWORD *)v306 = *(_DWORD *)((char *)&v275 + 1);
              *(_DWORD *)&v306[3] = HIDWORD(v275);
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v193);
            }
            v144 = a2[135];
            if ( v144 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[136], v144, 1);
            v145 = a2[138];
            if ( v145 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[139], v145, 1);
            v146 = a2[141];
            if ( v146 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[142], v146, 1);
            v147 = a2[144];
            if ( v147 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[145], v147, 1);
            *((_BYTE *)a2 + 233) = 0;
            *((_BYTE *)a2 + 234) = 0;
            v59 = a2 + 26;
            _$LT$codexmate_lib..core..debug_report_upload..TempBundleGuard$u20$as$u20$core..ops..drop..Drop$GT$::drop::he9a4536675e95efc(a2 + 26);
            goto LABEL_232;
          }
          a2[48] = v19;
          a2[49] = v20;
          v301 = (char *)a2 + 515;
          *((_BYTE *)a2 + 515) = 0;
          v299 = a2 + 46;
LABEL_67:
          *((_WORD *)a2 + 256) = 0;
          *((_BYTE *)a2 + 514) = 0;
          a2[46] = v19;
          a2[47] = v20;
          v66 = std::path::Path::file_name::hf6c2daad91e50ebf(v19, v20);
          if ( v66 )
          {
            v68 = v66;
            alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v193, v66, v67);
            v69 = v193[0];
            v70 = (const void *)v193[1];
            v71 = v193[2];
            if ( v193[0] == 0x8000000000000000LL )
            {
              if ( v193[2] < 0LL )
              {
                v72 = 0;
                goto LABEL_71;
              }
              if ( v193[2] )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v193, v68);
                v78 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v71, 1);
                v72 = 1;
                if ( !v78 )
LABEL_71:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v72, v71);
              }
              else
              {
                v78 = 1;
              }
              v302 = (_BYTE *)v78;
              memcpy((void *)v78, v70, v71);
              v70 = v302;
              v69 = v71;
            }
            a2[50] = v69;
            a2[51] = v70;
            a2[52] = v71;
          }
          else
          {
            a2[50] = 0x8000000000000000LL;
          }
          *((_BYTE *)a2 + 514) = 1;
          v79 = std::path::Path::extension::hbb56a39ecf8d3771(v19, v20);
          if ( v79 )
          {
            core::str::converts::from_utf8::hb32deb9559450f6e(v193, v79, v80);
            if ( LOBYTE(v193[0]) )
              v81 = 0;
            else
              v81 = v193[1];
          }
          else
          {
            v81 = 0;
          }
          v82 = 1;
          if ( v81 )
            v82 = v81;
          v193[0] = mime_guess::from_ext::hfdf511fc3ffecbaf(v82);
          v193[1] = v83;
          mime_guess::MimeGuess::first_or_octet_stream::h3527a9039884ec32(a2 + 53, v193);
          *((_BYTE *)a2 + 513) = 1;
          v22 = (volatile signed __int64 ***)(a2 + 65);
          a2[65] = v19;
          a2[66] = v20;
          v300 = (char *)a2 + 685;
          *((_BYTE *)a2 + 685) = 0;
LABEL_94:
          v305 = v22;
          *((_DWORD *)a2 + 168) = 0;
          *((_WORD *)a2 + 338) = 438;
          *(_DWORD *)((char *)a2 + 678) = 0;
          *((_WORD *)a2 + 341) = 0;
          *((_BYTE *)a2 + 678) = 1;
          *((_BYTE *)a2 + 684) = 0;
          v293 = a2 + 67;
          a2[67] = a2 + 84;
          a2[68] = v19;
          a2[69] = v20;
          v302 = a2 + 83;
          *((_BYTE *)a2 + 664) = 0;
          a2[72] = v19;
          a2[73] = v20;
          a2[81] = a2 + 84;
          v28 = (char *)a2 + 657;
          *((_BYTE *)a2 + 657) = 0;
          v272 = a2 + 70;
          *((_BYTE *)a2 + 656) = 0;
          a2[70] = v19;
          a2[71] = v20;
          std::path::Path::to_path_buf::h73855ce4b54f7174(&v198, v19, v20);
          *((_BYTE *)a2 + 656) = 1;
          LODWORD(v197) = *((_DWORD *)a2 + 170);
          v196 = a2[84];
          *((_BYTE *)a2 + 656) = 0;
          v84 = v200;
          v85 = v198;
          v22 = v199;
          v193[0] = v198;
          v193[1] = v199;
          v193[2] = v200;
          v86 = v196;
          v87 = v197;
          v193[3] = v196;
          v193[4] = v197;
          v31 = a2 + 74;
          a2[79] = v193[5];
          a2[78] = v87;
          a2[77] = v86;
          a2[76] = v84;
          a2[75] = v22;
          a2[74] = v85;
          v30 = a2 + 80;
          *((_BYTE *)a2 + 640) = 0;
LABEL_95:
          v197 = v31[4];
          v196 = v31[3];
          v195[2] = v31[2];
          v88 = *v31;
          v195[1] = v31[1];
          v195[0] = v88;
          a2[79] = tokio::runtime::blocking::pool::spawn_blocking::hcacdcedb427f3e7d(v195, &off_101953B40, v22);
LABEL_96:
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h2ec36b8caeaaabf5(
            &v183,
            a2 + 79,
            v307);
          if ( v183 == 1 )
          {
            *v30 = 3;
LABEL_98:
            *v28 = 3;
            *v302 = 3;
            *v300 = 3;
            *v301 = 3;
LABEL_156:
            v4 = v303;
            v100 = 3;
            goto LABEL_182;
          }
          v280 = v186;
          v279 = v185;
          v278 = v184;
          v89 = a2[79];
          if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v89) )
            tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v89);
          if ( v278 )
          {
            v300 = (_BYTE *)std::io::error::Error::new::h2838dbd593bc6ec9(40, &unk_1015DB8FB, 22);
            v90 = v279;
            if ( v279 )
            {
              v91 = v280;
              if ( *v280 )
                (*v280)(v279);
              v92 = v91[1];
              if ( v92 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v92, v91[2]);
            }
            *v30 = 1;
            v4 = v303;
            v93 = (void (__fastcall **)(__int64))v300;
          }
          else
          {
            v97 = v279;
            v98 = HIDWORD(v279);
            v93 = v280;
            *v30 = 1;
            if ( v97 == 2 )
              goto LABEL_98;
            v4 = v303;
            if ( (v97 & 1) == 0 )
            {
              tokio::fs::file::File::from_std::h84c07372db5d15c5(v193, v98);
              v94 = v193[0];
              v93 = (void (__fastcall **)(__int64))v193[1];
              qmemcpy(__dst, &v193[2], 0x60u);
LABEL_109:
              *((_BYTE *)a2 + 656) = 0;
              qmemcpy(v159, __dst, sizeof(v159));
              *((_BYTE *)a2 + 657) = 1;
              *((_BYTE *)a2 + 664) = 1;
              *((_WORD *)a2 + 342) = 256;
              qmemcpy(v157, v159, sizeof(v157));
              v95 = v305;
              if ( *((_BYTE *)v305 + 165) == 3 )
              {
                if ( *((_BYTE *)v305 + 144) == 3 && *((_BYTE *)v305 + 137) == 3 )
                {
                  if ( *((_BYTE *)v305 + 120) == 3 )
                  {
                    v99 = v305[14];
                    if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v99) )
                      tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v99);
                  }
                  else if ( !*((_BYTE *)v305 + 120) )
                  {
                    v96 = v305[9];
                    if ( v96 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v305[10], v96, 1);
                  }
                  v95 = v305;
                  *((_BYTE *)v305 + 136) = 0;
                }
                *((_BYTE *)v95 + 164) = 0;
              }
              if ( !v94 )
              {
                *((_BYTE *)a2 + 512) = 0;
                core::ptr::drop_in_place$LT$mime..Mime$GT$::h307539d9e4b6bcfa(a2 + 53);
                *((_BYTE *)a2 + 513) = 0;
                v109 = a2[50];
                v73 = 2;
                v303 = v4;
                if ( v109 != 0x8000000000000000LL && v109 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[51], v109, 1);
LABEL_155:
                *((_BYTE *)a2 + 514) = 0;
                v220 = v202;
                v219 = v201;
                v221 = v203;
                v222 = v204;
                v223 = v205;
                v224 = v206;
                v225 = v207;
                v226 = v208;
                v227 = v209;
                memcpy(v155, v160, sizeof(v155));
                *((_BYTE *)a2 + 515) = 1;
                if ( v73 == 3 )
                  goto LABEL_156;
                v211 = v220;
                v210 = v219;
                v212 = v221;
                v213 = v222;
                v214 = v223;
                v215 = v224;
                v216 = v225;
                v217 = v226;
                v218 = v227;
                memcpy(v154, v155, sizeof(v154));
                core::ptr::drop_in_place$LT$reqwest..async_impl..multipart..Part..file$LT$$RF$std..path..Path$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h84ae011859330494(v299);
                if ( v73 == 2 )
                {
                  __dst[0] = v93;
                  v166[0] = __dst;
                  v166[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(
                    v193,
                    "*open diagnostic bundle for upload failed: \xC0)parse diagnostic upload response failed: \xC0src/core/relay/fetch_models.rs",
                    v166);
                  v9 = (char *)v193[0];
                  v166[0] = v193[1];
                  v166[1] = v193[2];
                  if ( (__dst[0] & 3) == 1 )
                  {
                    v73 = __dst[0] - 1LL;
                    v116 = *(_QWORD *)(__dst[0] - 1LL);
                    v117 = *(_QWORD *)(__dst[0] + 7LL);
                    if ( *(_QWORD *)v117 )
                      (*(void (__fastcall **)(_QWORD))v117)(*(_QWORD *)(__dst[0] - 1LL));
                    v118 = *(_QWORD *)(v117 + 8);
                    if ( v118 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v118, *(_QWORD *)(v117 + 16));
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, 24, 8);
                  }
                  v228 = v166[0];
                  v229 = v166[1];
                  v294 = (char *)v166[0];
                  v295 = v166[1];
                  goto LABEL_167;
                }
                memcpy(v277, v154, sizeof(v277));
                v228 = v210;
                v229 = v211;
                v276[0] = v210;
                v276[1] = v211;
                v276[3] = v212;
                v276[4] = v213;
                v276[5] = v214;
                v276[6] = v215;
                v276[7] = v216;
                v276[8] = v217;
                v276[9] = v218;
                v273 = (char *)v73;
                v274 = (__int64)v93;
                v275 = v94;
                v276[2] = v4;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  v193,
                  a2[40] + 24LL);
                v73 = (__int64)&v273;
                reqwest::async_impl::multipart::Part::file_name::h9580fa0dfdd40735(&v190, &v273, v193);
                reqwest::async_impl::multipart::Part::mime_str::hc40c2840d359efa0(
                  &v169,
                  &v190,
                  "application/zipsummarytargetModehasIssuesfeedbackIdbundlehttps://aionsale.iiiwp.com/api/client/debug-r"
                  "eportsX-Device-IdX-Device-Secreterror",
                  15);
                v119 = v169;
                if ( v169 == 2 )
                {
                  v273 = v170;
                  v166[0] = &v273;
                  v166[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(
                    v193,
                    "\"prepare diagnostic upload failed: \xC0*open diagnostic bundle for upload failed: \xC0)parse diagnostic upload response failed: \xC0src/core/relay/fetch_models.rs",
                    v166);
                  v9 = (char *)v193[0];
                  v281 = (_QWORD *)v193[1];
                  v282 = v193[2];
                  core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h7a23a1e4edc590cd(v273);
                  v283 = v281;
                  v284 = v282;
                  v285 = v262;
                  v286 = v263;
                  v287 = v264;
                  v288 = v265;
                  v289 = v266;
                  v290 = v267;
                  v291 = v268;
                  v295 = v282;
                  v294 = (char *)v281;
                  v261 = v268;
                  v260 = v267;
                  v259 = v266;
                  v258 = v265;
                  v257 = v264;
                  v256 = v263;
                  v255 = v262;
LABEL_167:
                  v65 = 10;
LABEL_218:
                  *((_BYTE *)a2 + 362) = 0;
                  goto LABEL_219;
                }
                v120 = v170;
                v121 = v171;
                v281 = v172;
                v282 = v173;
                v122 = v174;
                v262 = v175;
                v263 = v176;
                v264 = v177;
                v265 = v178;
                v266 = v179;
                v267 = v180;
                v268 = v181;
                memcpy(v164, v182, sizeof(v164));
                v283 = v172;
                v284 = v173;
                v285 = v175;
                v286 = v176;
                v287 = v177;
                v288 = v178;
                v289 = v179;
                v290 = v180;
                v291 = v181;
                v161[4] = v173;
                v161[3] = v172;
                v163 = v181;
                v162 = v180;
                v161[10] = v179;
                v161[9] = v178;
                v161[8] = v177;
                v161[7] = v176;
                v161[6] = v175;
                *((_BYTE *)a2 + 362) = 1;
                v161[0] = v119;
                v161[1] = v120;
                v161[2] = v121;
                v161[5] = v122;
                reqwest::async_impl::multipart::Form::new::h424f570b47e008bf(v193);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  __dst,
                  a2[41] + 40LL);
                reqwest::async_impl::multipart::Form::text::h3b649868586daadb(
                  v166,
                  v193,
                  "categoryuserNotecurrencysentencemutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch",
                  8,
                  __dst);
                v123 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                         *(_QWORD *)(a2[41] + 24LL),
                         *(_QWORD *)(a2[41] + 32LL));
                codexmate_lib::platform::debug_log::redact_text::h6747aac2d01298e4(v193, v123);
                reqwest::async_impl::multipart::Form::text::h3b649868586daadb(
                  &v273,
                  v166,
                  "userNotecurrencysentencemutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch",
                  8,
                  v193);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  v193,
                  a2[40] + 48LL);
                reqwest::async_impl::multipart::Form::text::h3b649868586daadb(
                  &v190,
                  &v273,
                  "summarytargetModehasIssuesfeedbackIdbundlehttps://aionsale.iiiwp.com/api/client/debug-reportsX-Device-IdX-Device-Secreterror",
                  7,
                  v193);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  v193,
                  a2[40] + 72LL);
                reqwest::async_impl::multipart::Form::text::h3b649868586daadb(
                  &v169,
                  &v190,
                  "targetModehasIssuesfeedbackIdbundlehttps://aionsale.iiiwp.com/api/client/debug-reportsX-Device-IdX-Device-Secreterror",
                  10,
                  v193);
                v124 = *(unsigned __int8 *)(a2[40] + 104LL);
                v125 = v124 ^ 5;
                alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v193, v124 ^ 5, 0, 1, 1);
                v126 = v193[1];
                if ( LODWORD(v193[0]) == 1 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v193[1], v193[2]);
                v127 = (char *)&unk_1015DB3F6;
                if ( (_BYTE)v124 )
                  v127 = "trueuuidemitshowhide";
                v128 = v193[2];
                memcpy((void *)v193[2], v127, v125);
                v166[0] = v126;
                v166[1] = v128;
                v166[2] = v125;
                reqwest::async_impl::multipart::Form::text::h3b649868586daadb(
                  v165,
                  &v169,
                  "hasIssuesfeedbackIdbundlehttps://aionsale.iiiwp.com/api/client/debug-reportsX-Device-IdX-Device-Secreterror",
                  9,
                  v166);
                *((_BYTE *)a2 + 360) = 1;
                v129 = a2[41];
                if ( *(_DWORD *)v129 == 1 )
                {
                  v130 = *(_QWORD *)(v129 + 8);
                  *((_BYTE *)a2 + 360) = 0;
                  v131 = (const void *)core::fmt::num::imp::_$LT$impl$u20$usize$GT$::_fmt::h89bedbdc03eea440(
                                         v130,
                                         &v190,
                                         20);
                  v133 = v132;
                  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v166, v132, 0, 1, 1);
                  v134 = (char *)v166[1];
                  if ( LODWORD(v166[0]) == 1 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v166[1], v166[2]);
                  v135 = v166[2];
                  memcpy((void *)v166[2], v131, v133);
                  v273 = v134;
                  v274 = v135;
                  v275 = v133;
                  reqwest::async_impl::multipart::Form::text::h3b649868586daadb(
                    v193,
                    v165,
                    "feedbackIdbundlehttps://aionsale.iiiwp.com/api/client/debug-reportsX-Device-IdX-Device-Secreterror",
                    10,
                    &v273);
                  *((_BYTE *)a2 + 360) = 1;
                  qmemcpy(v165, v193, sizeof(v165));
                }
                *((_BYTE *)a2 + 360) = 0;
                *((_BYTE *)a2 + 362) = 0;
                reqwest::async_impl::multipart::Form::part::heffb410168451f94(
                  v193,
                  v165,
                  "bundlehttps://aionsale.iiiwp.com/api/client/debug-reportsX-Device-IdX-Device-Secreterror",
                  6,
                  v161);
                *((_BYTE *)a2 + 360) = 1;
                qmemcpy(v165, v193, sizeof(v165));
                _$LT$reqwest..async_impl..client..ClientBuilder$u20$as$u20$core..default..Default$GT$::default::hc97e1db035699fe7(v193);
                v193[88] = 15;
                LODWORD(v193[89]) = 0;
                v73 = (__int64)v166;
                memcpy(v166, v193, 0x310u);
                memcpy(v168, v194, sizeof(v168));
                v166[98] = 90;
                v167 = 0;
                v136 = reqwest::async_impl::client::ClientBuilder::build::h525c65897507bdcc(v166);
                v9 = v137;
                v65 = 6;
                if ( (v136 & 1) != 0 )
                {
LABEL_215:
                  if ( *((_BYTE *)a2 + 360) )
                    core::ptr::drop_in_place$LT$reqwest..async_impl..multipart..Form$GT$::h25e13b7c633bfebd(v165);
                  *((_BYTE *)a2 + 360) = 0;
                  goto LABEL_218;
                }
                a2[42] = v137;
                reqwest::async_impl::client::Client::request::h7c49bfd56329fb46(
                  v193,
                  v137,
                  &anon_39a6e93098609d65551b0fc4eadbbbd9_845,
                  "https://aionsale.iiiwp.com/api/client/debug-reportsX-Device-IdX-Device-Secreterror",
                  51);
                reqwest::async_impl::request::RequestBuilder::header::h036250330cf2947c(v166, v193);
                v4 = v303;
                reqwest::async_impl::request::RequestBuilder::header::h036250330cf2947c(&v273, v166);
                *((_BYTE *)a2 + 360) = 0;
                qmemcpy(v193, v165, 0x50u);
                reqwest::async_impl::request::RequestBuilder::multipart::h2b72abf0dd651054(&v190);
                a2[46] = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(&v190);
                a2[47] = v138;
LABEL_176:
                _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d(
                  v193,
                  a2 + 46,
                  v307);
                v73 = v193[0];
                if ( v193[0] == 4 )
                {
                  v100 = 4;
                  goto LABEL_182;
                }
                v303 = v4;
                v9 = (char *)v193[1];
                qmemcpy(v156, &v193[2], sizeof(v156));
                v139 = (char *)a2[47];
                core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a2[46], v139);
                v65 = 6;
                if ( (_DWORD)v73 == 3 )
                {
LABEL_213:
                  *((_BYTE *)a2 + 361) = 0;
                  if ( !_InterlockedDecrement64((volatile signed __int64 *)a2[42]) )
                    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 42, v139);
                  goto LABEL_215;
                }
                a2[47] = v73;
                a2[48] = v9;
                qmemcpy(a2 + 49, v156, 0x78u);
                *((_WORD *)a2 + 184) = *((_WORD *)a2 + 240);
                *((_BYTE *)a2 + 361) = 0;
                memcpy(a2 + 64, a2 + 47, 0x88u);
                *((_BYTE *)a2 + 1072) = 0;
                v4 = v303;
LABEL_180:
                v139 = (char *)(a2 + 64);
                reqwest::async_impl::response::Response::text::_$u7b$$u7b$closure$u7d$$u7d$::h394317739f8c1cdc(
                  v193,
                  a2 + 64,
                  v307);
                v140 = (char *)v193[0];
                if ( v193[0] == 0x8000000000000001LL )
                {
                  v100 = 5;
                  goto LABEL_182;
                }
                v307 = (char *)v193[1];
                v73 = v193[2];
                if ( *((_BYTE *)a2 + 1072) == 3 )
                {
                  core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a2 + 81);
                }
                else if ( !*((_BYTE *)a2 + 1072) )
                {
                  core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(a2 + 64);
                }
                v65 = 6;
                v303 = v4;
                if ( v140 == (char *)0x8000000000000000LL )
                {
                  v9 = v307;
                  goto LABEL_213;
                }
                if ( (unsigned __int16)(*((_WORD *)a2 + 184) - 200) < 0x64u )
                {
                  v141 = v307;
                  serde_json::de::from_str::h1b2ba495be01f5e2(v166, v307, v73);
                  v9 = (char *)v166[0];
                  if ( v166[0] != 0x8000000000000000LL )
                  {
                    v294 = (char *)v166[1];
                    v295 = v166[2];
                    v73 = *(_QWORD *)(a2[40] + 96LL);
                    if ( v140 )
                    {
                      v141 = v140;
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v307, v140, 1);
                    }
                    *((_BYTE *)a2 + 361) = 0;
                    if ( !_InterlockedDecrement64((volatile signed __int64 *)a2[42]) )
                      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 42, v141);
                    *((_BYTE *)a2 + 360) = 0;
                    *((_BYTE *)a2 + 362) = 0;
                    v65 = 11;
                    goto LABEL_219;
                  }
                  __dst[0] = v166[1];
                  v273 = (char *)__dst;
                  v274 = (__int64)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
                  v139 = ")parse diagnostic upload response failed: \xC0src/core/relay/fetch_models.rs";
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(
                    v193,
                    ")parse diagnostic upload response failed: \xC0src/core/relay/fetch_models.rs",
                    &v273);
                  v9 = (char *)v193[0];
                  v190 = (char *)v193[1];
                  v191 = v193[2];
                  core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(__dst);
                  v294 = v190;
                  v295 = v191;
                  goto LABEL_211;
                }
                v193[0] = v307;
                v193[1] = v73;
                v193[2] = 0;
                v193[3] = 0;
                v193[4] = v307;
                v193[5] = v73;
                serde_json::de::from_trait::h51e180b4bb6af5e0(v166, v193);
                if ( LOBYTE(v166[0]) == 6 )
                {
                  core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v166[1]);
                }
                else
                {
                  v193[3] = v166[3];
                  *(_OWORD *)((char *)&v193[1] + 1) = *(_OWORD *)((char *)&v166[1] + 1);
                  *(_QWORD *)((char *)v193 + 1) = *(_QWORD *)((char *)v166 + 1);
                  LOBYTE(v193[0]) = v166[0];
                  v142 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                           "error",
                           5,
                           v193);
                  if ( v142 && *(_BYTE *)v142 == 3 )
                  {
                    v299 = *(void **)(v142 + 16);
                    v4 = *(unsigned __int64 **)(v142 + 24);
                    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v166, v4, 0, 1, 1);
                    v143 = v166[1];
                    if ( LODWORD(v166[0]) == 1 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v166[1], v166[2]);
                    v301 = (_BYTE *)v166[2];
                    memcpy((void *)v166[2], v299, (size_t)v4);
                  }
                  else
                  {
                    v143 = 0x8000000000000000LL;
                  }
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v193);
                  if ( v143 != 0x8000000000000000LL )
                  {
                    v273 = (char *)v143;
                    v73 = (__int64)v301;
                    v274 = (__int64)v301;
                    v275 = (__int64)v4;
                    goto LABEL_207;
                  }
                }
                LOWORD(v166[0]) = *((_WORD *)a2 + 184);
                v193[0] = v166;
                v193[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(
                  &v273,
                  "\x05HTTP \xC0\"prepare diagnostic upload failed: \xC0*open diagnostic bundle for upload failed: \xC0)parse diagnostic upload response failed: \xC0src/core/relay/fetch_models.rs",
                  v193);
                v73 = v274;
LABEL_207:
                codexmate_lib::platform::debug_log::redact_text::h6747aac2d01298e4(v193, v73);
                v190 = (char *)v193;
                v191 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(
                  v166,
                  "\x1Adiagnostic upload failed: \xC0\x05HTTP \xC0\"prepare diagnostic upload failed: \xC0*open diagnosti"
                  "c bundle for upload failed: \xC0)parse diagnostic upload response failed: \xC0src/core/relay/fetch_models.rs",
                  &v190);
                if ( v193[0] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v193[1], v193[0], 1);
                v9 = (char *)v166[0];
                v294 = (char *)v166[1];
                v295 = v166[2];
                v139 = v273;
                if ( v273 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v273, 1);
LABEL_211:
                v65 = 10;
                if ( v140 )
                {
                  v139 = v140;
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v307, v140, 1);
                }
                goto LABEL_213;
              }
              *((_BYTE *)a2 + 512) = 1;
              a2[70] = v94;
              a2[71] = v93;
              qmemcpy(a2 + 72, v157, 0x60u);
              v24 = (volatile signed __int64 ***)(a2 + 65);
              a2[65] = a2 + 70;
              v23 = a2 + 69;
              *((_BYTE *)a2 + 552) = 0;
LABEL_125:
              v26 = **v24;
              if ( _InterlockedIncrement64(v26) > 0 )
              {
                v293 = a2 + 66;
                a2[66] = v26;
                v300 = a2 + 68;
                *((_BYTE *)a2 + 544) = 0;
LABEL_127:
                v305 = v24;
                v302 = v23;
                a2[67] = tokio::runtime::blocking::pool::spawn_blocking::h26040cc38bc9d58a(v26, &off_101953B40);
                _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hda8c14e59588a3fc(v193);
                if ( LODWORD(v193[0]) == 3 )
                {
                  *v300 = 3;
                  *v302 = 3;
                  *v301 = 4;
                  v100 = 3;
LABEL_182:
                  *v304 = v100;
                  result = 4;
                  *v4 = 0x8000000000000001LL;
                  goto LABEL_243;
                }
                v101 = v193;
                memcpy(__dst, v193, sizeof(__dst));
                v102 = a2[67];
                if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v102) )
                  tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v102);
                v103 = __dst[0];
                if ( __dst[0] == 2 )
                {
                  v104 = v4;
                  v101 = &unk_1015DB8FB;
                  v106 = std::io::error::Error::new::h2838dbd593bc6ec9(40, &unk_1015DB8FB, 22);
                  v107 = __dst[2];
                  if ( __dst[2] )
                  {
                    v108 = __dst[3];
                    if ( *(_QWORD *)__dst[3] )
                      (*(void (__fastcall **)(_QWORD))__dst[3])(__dst[2]);
                    v101 = *(_QWORD **)(v108 + 8);
                    if ( v101 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v101, *(_QWORD *)(v108 + 16));
                  }
                  *v300 = 1;
                  *v302 = 1;
                  v4 = v104;
                }
                else
                {
                  v106 = __dst[1];
                  v105 = __dst[13];
                  *v300 = 1;
                  *v302 = 1;
                  if ( (v103 & 1) == 0 )
                  {
                    *((_BYTE *)a2 + 512) = 0;
                    qmemcpy(__dst, a2 + 70, 0x70u);
                    reqwest::async_impl::multipart::Part::stream_with_length::hbd8f2e59d1cc3e4d(v193, __dst, v105);
LABEL_151:
                    *((_BYTE *)a2 + 513) = 0;
                    qmemcpy(__dst, a2 + 53, 0x58u);
                    reqwest::async_impl::multipart::Part::mime::hbaa449e8b41740e2(v166, v193, __dst);
                    v114 = a2[50] == 0x8000000000000000LL;
                    v303 = v4;
                    if ( v114 )
                    {
                      memcpy(v193, v166, 0x100u);
                    }
                    else
                    {
                      *((_BYTE *)a2 + 514) = 0;
                      v187[2] = a2[52];
                      v115 = a2[50];
                      v187[1] = a2[51];
                      v187[0] = v115;
                      reqwest::async_impl::multipart::Part::file_name::h9580fa0dfdd40735(v193, v166, v187);
                    }
                    v73 = v193[0];
                    v93 = (void (__fastcall **)(__int64))v193[1];
                    v94 = v193[2];
                    v201 = v193[3];
                    v202 = v193[4];
                    v4 = (unsigned __int64 *)v193[5];
                    v203 = v193[6];
                    v204 = v193[7];
                    v205 = v193[8];
                    v206 = v193[9];
                    v207 = v193[10];
                    v208 = v193[11];
                    v209 = v193[12];
                    memcpy(v160, &v193[13], sizeof(v160));
                    *((_WORD *)a2 + 256) = 0;
                    goto LABEL_155;
                  }
                }
                if ( (v106 & 3) == 1 )
                {
                  v110 = v106 - 1;
                  v111 = *(_QWORD *)(v106 - 1);
                  v112 = *(_QWORD *)(v106 + 7);
                  if ( *(_QWORD *)v112 )
                    (*(void (__fastcall **)(__int64, _QWORD *, __int64))v112)(v111, v101, v105);
                  v113 = *(_QWORD *)(v112 + 8);
                  if ( v113 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v113, *(_QWORD *)(v112 + 16));
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, 24, 8);
                }
                *((_BYTE *)a2 + 512) = 0;
                qmemcpy(__dst, a2 + 70, 0x70u);
                _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::hdafa5691069ba6d1(v159, __dst, v105);
                reqwest::async_impl::multipart::Part::new::h2e2767774da8cb58(v193, v159, 0);
                goto LABEL_151;
              }
LABEL_280:
              BUG();
            }
          }
          v94 = 0;
          goto LABEL_109;
        }
        qmemcpy(v193, v166, 0x60u);
        v190 = nullptr;
        v191 = 1;
        v192 = 0;
        v275 = 1610612768;
        v273 = (char *)&v190;
        v274 = (__int64)&off_101952F18;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v193,
                                &v273) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v160, &unk_101952FE0, &off_101952F48);
        v7 = v190;
        v15 = (__int64 *)v191;
        LOBYTE(v9) = v192;
        LODWORD(v169) = *(_DWORD *)((char *)&v192 + 1);
        *(_DWORD *)((char *)&v169 + 3) = HIDWORD(v192);
        v74 = v166;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v166);
        LODWORD(v161[0]) = v169;
        *(_DWORD *)((char *)v161 + 3) = *(_DWORD *)((char *)&v169 + 3);
        v76 = *(unsigned int *)((char *)&v169 + 3);
        *(_DWORD *)v306 = v161[0];
        *(_DWORD *)&v306[3] = *(_DWORD *)((char *)&v169 + 3);
        v77 = v301;
        if ( v301 )
        {
          v74 = v299;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v299, v301, 1);
        }
        if ( ((unsigned __int8)v304 & 1) == 0
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v298) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v74, v77, v75, v76) )
        {
          *((_BYTE *)v10 + 8) = 1;
        }
      }
      else
      {
        qmemcpy(v193, v166, 0x60u);
        v190 = nullptr;
        v191 = 1;
        v192 = 0;
        v275 = 1610612768;
        v273 = (char *)&v190;
        v274 = (__int64)&off_101952F18;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                v193,
                                &v273) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v160, &unk_101952FE0, &off_101952F48);
        v7 = v190;
        v15 = (__int64 *)v191;
        LOBYTE(v9) = v192;
        LODWORD(v169) = *(_DWORD *)((char *)&v192 + 1);
        *(_DWORD *)((char *)&v169 + 3) = HIDWORD(v192);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v166);
        v297[0] = v169;
        *(_DWORD *)((char *)v297 + 3) = *(_DWORD *)((char *)&v169 + 3);
        *(_DWORD *)v306 = v297[0];
        *(_DWORD *)&v306[3] = *(_DWORD *)((char *)&v169 + 3);
        if ( ((unsigned __int8)v304 & 1) == 0
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v298) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v166,
                                 &v273,
                                 v58,
                                 *(unsigned int *)((char *)&v169 + 3)) )
        {
          *((_BYTE *)v10 + 8) = 1;
        }
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10);
LABEL_238:
      v150 = a2[14];
      if ( v150 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[15], v150, 1);
      v151 = a2[17];
      if ( v151 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[18], v151, 1);
      v152 = v303;
      *v303 = v271;
      v152[1] = (unsigned __int64)v7;
      v152[2] = (unsigned __int64)v15;
      *((_BYTE *)v152 + 24) = (_BYTE)v9;
      v153 = *(_DWORD *)&v306[3];
      *(_DWORD *)((char *)v152 + 25) = *(_DWORD *)v306;
      *((_DWORD *)v152 + 7) = v153;
      qmemcpy(v152 + 4, v158, 0x50u);
      result = 1;
LABEL_243:
      *((_BYTE *)a2 + 232) = result;
      return result;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952720);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952720);
    case 3:
      goto LABEL_48;
    case 4:
      v304 = (char *)a2 + 363;
      v17 = *((unsigned __int8 *)a2 + 363);
      v298 = (__int64)(a2 + 30);
      switch ( v17 )
      {
        case 0LL:
          v303 = a1;
          JUMPOUT(0x1000E36C7LL);
        case 1LL:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019523D8);
        case 2LL:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019523D8);
        case 3LL:
          v301 = (char *)a2 + 515;
          v18 = *((unsigned __int8 *)a2 + 515);
          v299 = a2 + 46;
          switch ( v18 )
          {
            case 0LL:
              v303 = a1;
              v19 = a2[48];
              v20 = a2[49];
              goto LABEL_67;
            case 1LL:
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195BB58);
            case 2LL:
              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195BB58);
            case 3LL:
              v21 = *((unsigned __int8 *)a2 + 685);
              v22 = (volatile signed __int64 ***)(a2 + 65);
              v303 = a1;
              v300 = (char *)a2 + 685;
              switch ( v21 )
              {
                case 0LL:
                  v19 = a2[65];
                  v20 = a2[66];
                  break;
                case 1LL:
                  v305 = (volatile signed __int64 ***)(a2 + 65);
                  core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953B10);
                case 2LL:
                  v305 = (volatile signed __int64 ***)(a2 + 65);
                  core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953B10);
                case 3LL:
                  v27 = *((unsigned __int8 *)a2 + 664);
                  v305 = (volatile signed __int64 ***)(a2 + 65);
                  v293 = a2 + 67;
                  v302 = a2 + 83;
                  switch ( v27 )
                  {
                    case 0LL:
                      JUMPOUT(0x1000E382ELL);
                    case 1LL:
                      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953AE0);
                    case 2LL:
                      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953AE0);
                    case 3LL:
                      v28 = (char *)a2 + 657;
                      v29 = *((unsigned __int8 *)a2 + 657);
                      v272 = a2 + 70;
                      switch ( v29 )
                      {
                        case 0LL:
                          JUMPOUT(0x1000E3874LL);
                        case 1LL:
                          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953AF8);
                        case 2LL:
                          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953AF8);
                        case 3LL:
                          v30 = a2 + 80;
                          v31 = a2 + 74;
                          switch ( *((_BYTE *)a2 + 640) )
                          {
                            case 0:
                              goto LABEL_95;
                            case 1:
                              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953B58);
                            case 2:
                              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953B58);
                            case 3:
                              goto LABEL_96;
                          }
                      }
                  }
              }
              goto LABEL_94;
            case 4LL:
              v23 = a2 + 69;
              v24 = (volatile signed __int64 ***)(a2 + 65);
              switch ( *((_BYTE *)a2 + 552) )
              {
                case 0:
                  goto LABEL_125;
                case 1:
                  v305 = (volatile signed __int64 ***)(a2 + 65);
                  core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953B28);
                case 2:
                  v305 = (volatile signed __int64 ***)(a2 + 65);
                  core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953B28);
                case 3:
                  v300 = a2 + 68;
                  v25 = *((unsigned __int8 *)a2 + 544);
                  v293 = a2 + 66;
                  switch ( v25 )
                  {
                    case 0LL:
                      v26 = (volatile signed __int64 *)a2[66];
                      break;
                    case 1LL:
                      v302 = a2 + 69;
                      JUMPOUT(0x1000E6641LL);
                    case 2LL:
                      v302 = a2 + 69;
                      JUMPOUT(0x1000E661DLL);
                  }
                  goto LABEL_127;
              }
          }
        case 4LL:
          goto LABEL_176;
        case 5LL:
          goto LABEL_180;
      }
  }
}
