// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x1006ddff0 d=1
unsigned __int64 *__fastcall codexmate_lib::core::auth::load_auth_file::hc0773b331a626706(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rcx
  signed __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  char v25; // r11
  _QWORD *v26; // r12
  unsigned __int64 *v27; // rbx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rsi
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  unsigned __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rsi
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rdi
  _QWORD *v71; // rsi
  unsigned __int64 v72; // rdx
  __int64 v73; // r8
  unsigned __int64 v74; // r9
  unsigned __int64 v75; // r10
  char v76; // r11
  __int64 v77; // rax
  _QWORD *v78; // rbx
  unsigned __int64 v79; // rcx
  __int64 v80; // rax
  unsigned __int64 v81; // r8
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rbx
  unsigned __int64 v85; // rbx
  signed __int64 v86; // rsi
  unsigned __int64 v87; // rcx
  __int64 v88; // rdi
  unsigned __int64 v89; // rsi
  __int64 v90; // rsi
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rcx
  __int64 v94; // rax
  void *v95; // rcx
  _BYTE v96[80]; // [rsp+0h] [rbp-4A0h] BYREF
  _BYTE v97[80]; // [rsp+50h] [rbp-450h] BYREF
  _BYTE v98[80]; // [rsp+A0h] [rbp-400h] BYREF
  __int64 v99; // [rsp+F0h] [rbp-3B0h]
  __int64 v100; // [rsp+F8h] [rbp-3A8h]
  __int64 v101; // [rsp+100h] [rbp-3A0h]
  __int64 v102; // [rsp+108h] [rbp-398h]
  __int64 v103; // [rsp+110h] [rbp-390h]
  __int64 v104; // [rsp+118h] [rbp-388h]
  __int64 v105; // [rsp+120h] [rbp-380h]
  __int64 v106; // [rsp+128h] [rbp-378h]
  unsigned __int64 v107; // [rsp+130h] [rbp-370h]
  unsigned __int64 v108; // [rsp+138h] [rbp-368h]
  unsigned __int64 v109; // [rsp+140h] [rbp-360h]
  unsigned __int64 v110; // [rsp+148h] [rbp-358h]
  unsigned __int64 v111; // [rsp+150h] [rbp-350h]
  unsigned __int64 v112; // [rsp+158h] [rbp-348h]
  unsigned __int64 v113; // [rsp+160h] [rbp-340h]
  _QWORD v114[12]; // [rsp+168h] [rbp-338h] BYREF
  unsigned __int64 v115; // [rsp+1C8h] [rbp-2D8h]
  unsigned __int64 v116; // [rsp+1D0h] [rbp-2D0h]
  unsigned __int64 v117; // [rsp+1D8h] [rbp-2C8h]
  unsigned __int64 v118; // [rsp+1E0h] [rbp-2C0h]
  unsigned __int64 v119; // [rsp+1E8h] [rbp-2B8h]
  unsigned __int64 v120; // [rsp+1F0h] [rbp-2B0h]
  unsigned __int64 v121; // [rsp+1F8h] [rbp-2A8h]
  unsigned __int64 v122; // [rsp+200h] [rbp-2A0h]
  unsigned __int64 v123; // [rsp+208h] [rbp-298h]
  unsigned __int64 v124; // [rsp+210h] [rbp-290h]
  unsigned __int64 v125; // [rsp+218h] [rbp-288h]
  unsigned __int64 v126; // [rsp+220h] [rbp-280h]
  unsigned __int64 v127; // [rsp+228h] [rbp-278h]
  unsigned __int64 v128; // [rsp+230h] [rbp-270h]
  unsigned __int64 v129; // [rsp+238h] [rbp-268h]
  _QWORD v130[3]; // [rsp+240h] [rbp-260h] BYREF
  __int64 v131; // [rsp+258h] [rbp-248h]
  unsigned __int64 v132; // [rsp+260h] [rbp-240h]
  unsigned __int64 v133; // [rsp+268h] [rbp-238h]
  __int64 v134; // [rsp+270h] [rbp-230h]
  __int64 v135; // [rsp+278h] [rbp-228h]
  __int64 v136; // [rsp+280h] [rbp-220h]
  char v137; // [rsp+288h] [rbp-218h]
  _QWORD *v138; // [rsp+290h] [rbp-210h]
  _QWORD __src[22]; // [rsp+298h] [rbp-208h] BYREF
  __int64 v140; // [rsp+348h] [rbp-158h]
  _QWORD __dst[22]; // [rsp+350h] [rbp-150h] BYREF
  _QWORD *v142; // [rsp+400h] [rbp-A0h]
  __int64 v143; // [rsp+408h] [rbp-98h]
  void *v144; // [rsp+410h] [rbp-90h]
  char v145; // [rsp+41Fh] [rbp-81h] BYREF
  _QWORD *v146; // [rsp+420h] [rbp-80h] BYREF
  char v147; // [rsp+428h] [rbp-78h]
  signed __int64 v148; // [rsp+430h] [rbp-70h]
  unsigned __int64 v149; // [rsp+438h] [rbp-68h]
  _QWORD *v150; // [rsp+440h] [rbp-60h]
  signed __int64 v151; // [rsp+448h] [rbp-58h]
  _QWORD *v152; // [rsp+450h] [rbp-50h]
  unsigned __int64 v153; // [rsp+458h] [rbp-48h]
  unsigned __int64 v154; // [rsp+460h] [rbp-40h]
  char v155; // [rsp+46Fh] [rbp-31h]
  unsigned __int64 v156; // [rsp+470h] [rbp-30h]

  v4 = 0x8000000000000001LL; /*0x1006de007*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__dst, a2, a3); /*0x1006de018*/
  v6 = __dst[1]; /*0x1006de024*/
  v7 = 0x8000000000000000LL; /*0x1006de02b*/
  if ( __dst[0] == 0x8000000000000000LL ) /*0x1006de032*/
  {
    a1[1] = 2; /*0x1006de034*/
    a1[2] = v6; /*0x1006de03c*/
    *a1 = 0x8000000000000001LL; /*0x1006de040*/
    return a1; /*0x1006de043*/
  }
  v140 = __dst[0]; /*0x1006de048*/
  v131 = __dst[1]; /*0x1006de056*/
  v132 = __dst[2]; /*0x1006de05d*/
  v133 = 0; /*0x1006de064*/
  v134 = 0; /*0x1006de06f*/
  v135 = __dst[1]; /*0x1006de07a*/
  v136 = __dst[2]; /*0x1006de081*/
  v130[0] = 0; /*0x1006de088*/
  v130[1] = 1; /*0x1006de093*/
  v130[2] = 0; /*0x1006de09e*/
  v137 = 0x80; /*0x1006de0a9*/
  if ( !__dst[2] ) /*0x1006de0b3*/
  {
LABEL_8:
    __dst[0] = 5; /*0x1006de0ff*/
    v11 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v130, __dst, v5); /*0x1006de11d*/
    v12 = 0x8000000000000001LL; /*0x1006de120*/
    goto LABEL_9; /*0x1006de120*/
  }
  v8 = 1; /*0x1006de0b8*/
  v9 = 0x100002600LL; /*0x1006de0bd*/
  while ( 1 ) /*0x1006de0d0*/
  {
    v10 = *(unsigned __int8 *)(__dst[1] + v8 - 1); /*0x1006de0d0*/
    if ( v10 > 0x20 || !_bittest64(&v9, v10) ) /*0x1006de0e0*/
      break; /*0x1006de0e0*/
    v133 = v8; /*0x1006de0ea*/
    v5 = v8 - __dst[2] + 1; /*0x1006de0f1*/
    ++v8; /*0x1006de0f6*/
    if ( v5 == 1 ) /*0x1006de0fd*/
      goto LABEL_8; /*0x1006de0fd*/
  }
  if ( (_DWORD)v10 == 91 ) /*0x1006de2ca*/
  {
    v137 = 127; /*0x1006de819*/
    v133 = v8; /*0x1006de820*/
    v146 = v130; /*0x1006de82e*/
    v147 = 1; /*0x1006de832*/
    v70 = (__int64)__dst; /*0x1006de836*/
    v71 = &v146; /*0x1006de83d*/
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h4a6b8355bdcc04b8( /*0x1006de841*/
      __dst,
      &v146);
    if ( LOBYTE(__dst[0]) == 1 ) /*0x1006de84d*/
    {
      v77 = __dst[1]; /*0x1006de84f*/
      goto LABEL_101; /*0x1006de856*/
    }
    if ( BYTE1(__dst[0]) != 1 ) /*0x1006de862*/
    {
      v71 = &off_101897A58; /*0x1006de8d8*/
      v70 = 0; /*0x1006de8e6*/
      v77 = serde_core::de::Error::invalid_length::h0271d6de10b203c5( /*0x1006de8e8*/
              0,
              &off_101897A58,
              &anon_69f6ba9ba0edfdbc8a57efa1de3594e0_475);
      goto LABEL_101; /*0x1006de8e8*/
    }
    v71 = v146; /*0x1006de864*/
    v70 = (__int64)__dst; /*0x1006de868*/
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h2faefcab0cd9bb66( /*0x1006de86f*/
      __dst,
      v146);
    v4 = __dst[0]; /*0x1006de877*/
    v7 = __dst[1]; /*0x1006de87e*/
    if ( __dst[0] == 0x8000000000000001LL ) /*0x1006de888*/
    {
      v77 = __dst[1]; /*0x1006de88e*/
      v4 = 0x8000000000000001LL; /*0x1006de894*/
      goto LABEL_101; /*0x1006de897*/
    }
    v156 = __dst[2]; /*0x1006de9ea*/
    v70 = (__int64)__dst; /*0x1006de9ee*/
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h4a6b8355bdcc04b8( /*0x1006de9f9*/
      __dst,
      &v146);
    if ( LOBYTE(__dst[0]) == 1 ) /*0x1006dea05*/
    {
      v71 = (_QWORD *)__dst[1]; /*0x1006dea0b*/
      goto LABEL_179; /*0x1006dea12*/
    }
    if ( BYTE1(__dst[0]) != 1 ) /*0x1006def9e*/
    {
      v70 = 1; /*0x1006df126*/
      v71 = (_QWORD *)serde_core::de::Error::invalid_length::h0271d6de10b203c5( /*0x1006df130*/
                        1,
                        &off_101897A58,
                        &anon_69f6ba9ba0edfdbc8a57efa1de3594e0_475);
      goto LABEL_179; /*0x1006df133*/
    }
    v70 = (__int64)__dst; /*0x1006defa8*/
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h2faefcab0cd9bb66( /*0x1006defaf*/
      __dst,
      v146);
    v71 = (_QWORD *)__dst[1]; /*0x1006defbb*/
    if ( __dst[0] == 0x8000000000000001LL ) /*0x1006defc5*/
    {
LABEL_179:
      if ( 2 * v4 ) /*0x1006df2e9*/
      {
        v70 = v7; /*0x1006df2fb*/
        v7 = (unsigned __int64)v71; /*0x1006df2fe*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006df304*/
      }
      v77 = (__int64)v71; /*0x1006df30c*/
      v4 = 0x8000000000000001LL; /*0x1006df30f*/
      goto LABEL_101; /*0x1006df312*/
    }
    v149 = __dst[0]; /*0x1006defcb*/
    v150 = (_QWORD *)__dst[1]; /*0x1006defcf*/
    v154 = __dst[2]; /*0x1006defda*/
    v152 = (_QWORD *)v7; /*0x1006defe9*/
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h4a6b8355bdcc04b8( /*0x1006defed*/
      __dst,
      &v146);
    if ( LOBYTE(__dst[0]) == 1 ) /*0x1006deff9*/
      goto LABEL_175; /*0x1006deff9*/
    if ( BYTE1(__dst[0]) == 1 ) /*0x1006df006*/
    {
      _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_bool::hdd1920e9f44e264b( /*0x1006df017*/
        __dst,
        v146);
      if ( LOBYTE(__dst[0]) == 1 ) /*0x1006df023*/
      {
LABEL_175:
        v7 = __dst[1]; /*0x1006df2bc*/
LABEL_176:
        v70 = (__int64)v150; /*0x1006df2c3*/
        if ( 2 * v149 ) /*0x1006df2cb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006df2dd*/
        v71 = (_QWORD *)v7; /*0x1006df2e2*/
        v7 = (unsigned __int64)v152; /*0x1006df2e5*/
        goto LABEL_179; /*0x1006df2e5*/
      }
      LODWORD(v143) = BYTE1(__dst[0]); /*0x1006df030*/
    }
    else
    {
      LODWORD(v143) = 0; /*0x1006df299*/
    }
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h4a6b8355bdcc04b8( /*0x1006df2ae*/
      __dst,
      &v146);
    if ( LOBYTE(__dst[0]) == 1 ) /*0x1006df2ba*/
      goto LABEL_175; /*0x1006df2ba*/
    if ( BYTE1(__dst[0]) == 1 ) /*0x1006df31e*/
    {
      _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h5b14f398dbb3db00( /*0x1006df32f*/
        __dst,
        v146);
      v92 = __dst[0]; /*0x1006df334*/
      v7 = __dst[1]; /*0x1006df33b*/
      if ( __dst[0] == 0x8000000000000001LL ) /*0x1006df345*/
        goto LABEL_176; /*0x1006df345*/
      qmemcpy(&__src[2], &__dst[2], 0x50u); /*0x1006df35e*/
      __src[1] = __dst[1]; /*0x1006df361*/
    }
    else
    {
      v92 = 0x8000000000000000LL; /*0x1006df3f1*/
      __src[3] = 0x8000000000000000LL; /*0x1006df3f6*/
      __src[6] = 0x8000000000000000LL; /*0x1006df3fd*/
      __src[9] = 0x8000000000000000LL; /*0x1006df404*/
    }
    __src[0] = v92; /*0x1006df40b*/
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h4a6b8355bdcc04b8( /*0x1006df41d*/
      __dst,
      &v146);
    if ( LOBYTE(__dst[0]) == 1 ) /*0x1006df429*/
    {
      v7 = __dst[1]; /*0x1006df42b*/
LABEL_193:
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthTokens$GT$::h3603f704f5c2636a(__src); /*0x1006df432*/
      goto LABEL_176; /*0x1006df43e*/
    }
    if ( BYTE1(__dst[0]) == 1 ) /*0x1006df489*/
    {
      codexmate_lib::core::auth::deserialize_optional_timestamp::hccd5a307f4f8cc01(__dst, v146); /*0x1006df496*/
      v93 = __dst[0]; /*0x1006df49b*/
      v7 = __dst[1]; /*0x1006df4a2*/
      if ( __dst[0] == 0x8000000000000001LL ) /*0x1006df4ac*/
        goto LABEL_193; /*0x1006df4ac*/
      v73 = __dst[2]; /*0x1006df4ae*/
    }
    else
    {
      v93 = 0x8000000000000001LL; /*0x1006df4b7*/
    }
    v72 = 0x8000000000000000LL; /*0x1006df4ba*/
    if ( v93 != 0x8000000000000001LL ) /*0x1006df4c2*/
      v72 = v93; /*0x1006df4c2*/
    qmemcpy(v114, __src, sizeof(v114)); /*0x1006df4d9*/
    v77 = (__int64)v152; /*0x1006df4dc*/
    v71 = v150; /*0x1006df4e0*/
    v70 = v149; /*0x1006df4e4*/
    v74 = v156; /*0x1006df4e8*/
    v75 = v154; /*0x1006df4ec*/
    v76 = v143; /*0x1006df4f0*/
LABEL_101:
    ++v137; /*0x1006de8f0*/
    __src[0] = v4; /*0x1006de8f6*/
    __src[1] = v77; /*0x1006de8fd*/
    __src[2] = v74; /*0x1006de904*/
    __src[3] = v70; /*0x1006de90b*/
    __src[4] = v71; /*0x1006de912*/
    __src[5] = v75; /*0x1006de919*/
    qmemcpy(&__src[6], v114, 0x60u); /*0x1006de933*/
    __src[18] = v72; /*0x1006de936*/
    __src[19] = v7; /*0x1006de93d*/
    __src[20] = v73; /*0x1006de944*/
    LOBYTE(__src[21]) = v76; /*0x1006de94b*/
    v78 = (_QWORD *)serde_json::de::Deserializer$LT$R$GT$::end_seq::h957d6912577fe47a(v130); /*0x1006de95e*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1006de974*/
    v142 = v78; /*0x1006de979*/
    v12 = __dst[0]; /*0x1006de980*/
    if ( __dst[0] == 0x8000000000000001LL ) /*0x1006de98a*/
    {
      v11 = __dst[1]; /*0x1006de993*/
      if ( !v78 ) /*0x1006de99d*/
      {
        v12 = 0x8000000000000001LL; /*0x1006de9bd*/
        goto LABEL_144; /*0x1006de9c0*/
      }
      v80 = *v78; /*0x1006de99f*/
      if ( *v78 != 1 ) /*0x1006de9a6*/
        goto LABEL_135; /*0x1006de9a6*/
      goto LABEL_142; /*0x1006de9a6*/
    }
LABEL_138:
    if ( v78 ) /*0x1006decd8*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h2d413a1c8462ab70(__dst); /*0x1006dece1*/
      v12 = 0x8000000000000001LL; /*0x1006dece6*/
      v11 = (__int64)v78; /*0x1006decf0*/
    }
    else
    {
      v11 = __dst[1]; /*0x1006decf8*/
      qmemcpy(v98, &__dst[2], sizeof(v98)); /*0x1006ded12*/
      v149 = __dst[12]; /*0x1006ded1c*/
      v79 = __dst[13]; /*0x1006ded20*/
      v152 = (_QWORD *)__dst[14]; /*0x1006ded2e*/
      v115 = __dst[15]; /*0x1006ded39*/
      v116 = __dst[16]; /*0x1006ded47*/
      v117 = __dst[17]; /*0x1006ded55*/
      v118 = __dst[18]; /*0x1006ded63*/
      v119 = __dst[19]; /*0x1006ded71*/
      v120 = __dst[20]; /*0x1006ded7f*/
      v121 = __dst[21]; /*0x1006ded8d*/
    }
    goto LABEL_144; /*0x1006decf3*/
  }
  if ( (_DWORD)v10 != 123 ) /*0x1006de2d3*/
  {
    v11 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::hf1fbdab87aeedfac(v130, &v145, &unk_101898860); /*0x1006df516*/
LABEL_203:
    v12 = 0x8000000000000001LL; /*0x1006df519*/
    v11 = serde_json::error::Error::fix_position::h264323bcbc674419(v11, v130); /*0x1006df532*/
    goto LABEL_9; /*0x1006df535*/
  }
  v137 = 127; /*0x1006de2d9*/
  v133 = v8; /*0x1006de2e0*/
  v146 = v130; /*0x1006de2ee*/
  v147 = 1; /*0x1006de2f2*/
  v155 = 2; /*0x1006de2f6*/
  v144 = &anon_69f6ba9ba0edfdbc8a57efa1de3594e0_190; /*0x1006de301*/
  v17 = 0x8000000000000001LL; /*0x1006de308*/
  v151 = 0x8000000000000001LL; /*0x1006de30b*/
  v148 = 0x8000000000000001LL; /*0x1006de30f*/
  v156 = 0x8000000000000001LL; /*0x1006de313*/
LABEL_24:
  v18 = (__int64)v152; /*0x1006de317*/
  v19 = v149; /*0x1006de31b*/
  v20 = v143; /*0x1006de31f*/
  while ( 2 ) /*0x1006de326*/
  {
    v154 = v17; /*0x1006de326*/
    v143 = v20; /*0x1006de32a*/
LABEL_26:
    v152 = (_QWORD *)v18; /*0x1006de331*/
    v149 = v19; /*0x1006de335*/
    while ( 1 ) /*0x1006de339*/
    {
LABEL_27:
      v21 = __dst; /*0x1006de339*/
      _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::h415c67a38ee1072c( /*0x1006de344*/
        __dst,
        &v146);
      if ( LOBYTE(__dst[0]) == 1 ) /*0x1006de350*/
      {
        __src[0] = v156; /*0x1006dea1b*/
        __src[1] = v153; /*0x1006dea26*/
        v18 = __dst[1]; /*0x1006dea2d*/
        goto LABEL_117; /*0x1006dea34*/
      }
      if ( BYTE1(__dst[0]) != 1 ) /*0x1006de35d*/
      {
        __src[0] = v156; /*0x1006dea3a*/
        __src[1] = v153; /*0x1006dea45*/
        v81 = v154; /*0x1006dea56*/
        if ( v154 == 0x8000000000000001LL ) /*0x1006dea5d*/
          v81 = 0x8000000000000000LL; /*0x1006dea5d*/
        v23 = v151; /*0x1006dea61*/
        if ( v151 == 0x8000000000000001LL ) /*0x1006dea68*/
          v23 = 0x8000000000000000LL; /*0x1006dea68*/
        if ( v156 == 0x8000000000000001LL ) /*0x1006dea6f*/
        {
          v156 = 0x8000000000000000LL; /*0x1006dea75*/
          v22 = 0x8000000000000000LL; /*0x1006dea79*/
          v82 = 0x8000000000000000LL; /*0x1006dea7c*/
          v151 = 0x8000000000000000LL; /*0x1006dea7f*/
        }
        else
        {
          v100 = __src[2]; /*0x1006df049*/
          v99 = __src[1]; /*0x1006df050*/
          v22 = __src[3]; /*0x1006df057*/
          v101 = __src[4]; /*0x1006df065*/
          v102 = __src[5]; /*0x1006df073*/
          v82 = __src[6]; /*0x1006df07a*/
          v103 = __src[7]; /*0x1006df088*/
          v104 = __src[8]; /*0x1006df096*/
          v151 = __src[9]; /*0x1006df0a4*/
          v105 = __src[10]; /*0x1006df0af*/
          v106 = __src[11]; /*0x1006df0bd*/
        }
        v85 = v129; /*0x1006df0c9*/
        v25 = v155 & 1; /*0x1006df0d0*/
        if ( v148 != 0x8000000000000001LL ) /*0x1006df0e5*/
          v7 = v148; /*0x1006df0e5*/
        v154 = (unsigned __int64)v150; /*0x1006df0ed*/
        v150 = v138; /*0x1006df0f8*/
        v21 = v152; /*0x1006df0fc*/
        v24 = v156; /*0x1006df100*/
        v17 = v149; /*0x1006df104*/
        v83 = v143; /*0x1006df108*/
        v86 = v151; /*0x1006df10f*/
        goto LABEL_132; /*0x1006df113*/
      }
      v26 = v146; /*0x1006de363*/
      v27 = v146 + 3; /*0x1006de367*/
      ++v146[5]; /*0x1006de36c*/
      v26[2] = 0; /*0x1006de371*/
      v21 = __dst; /*0x1006de37a*/
      _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18( /*0x1006de387*/
        __dst,
        v27,
        v26);
      v18 = __dst[1]; /*0x1006de393*/
      if ( LODWORD(__dst[0]) == 2 ) /*0x1006de39a*/
        goto LABEL_106; /*0x1006de39a*/
      v21 = v114; /*0x1006de3a7*/
      _$LT$codexmate_lib..core..auth.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..auth..AuthFile$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h1d9d49aadc6d2a91( /*0x1006de3b1*/
        v114,
        __dst[1],
        __dst[2]);
      if ( LOBYTE(v114[0]) == 1 ) /*0x1006de3bd*/
      {
LABEL_116:
        __src[0] = v156; /*0x1006dea88*/
        __src[1] = v153; /*0x1006dea97*/
        v18 = v114[1]; /*0x1006dea9e*/
        goto LABEL_117; /*0x1006dea9e*/
      }
      if ( BYTE1(v114[0]) != 5 ) /*0x1006de3cd*/
        break; /*0x1006de3cd*/
      v28 = v26[4]; /*0x1006de3cf*/
      v29 = v26[5]; /*0x1006de3d4*/
      if ( v29 >= v28 ) /*0x1006de3dc*/
        goto LABEL_99; /*0x1006de3dc*/
      v22 = *v27; /*0x1006de3e2*/
      v30 = v29 + 1; /*0x1006de3e5*/
      v31 = -(__int64)v28; /*0x1006de3e8*/
      while ( 1 ) /*0x1006de3eb*/
      {
        v32 = *(unsigned __int8 *)(v22 + v30 - 1); /*0x1006de3eb*/
        if ( v32 > 0x3A ) /*0x1006de3f4*/
          goto LABEL_194; /*0x1006de3f4*/
        v33 = 0x100002600LL; /*0x1006de3fa*/
        if ( !_bittest64(&v33, v32) ) /*0x1006de404*/
          break; /*0x1006de404*/
        v26[5] = v30; /*0x1006de40a*/
        v34 = v31 + v30++ + 1; /*0x1006de40f*/
        if ( v34 == 1 ) /*0x1006de41b*/
          goto LABEL_99; /*0x1006de41b*/
      }
      if ( v32 != 58 ) /*0x1006de426*/
      {
LABEL_194:
        __src[0] = v156; /*0x1006df443*/
        __src[1] = v153; /*0x1006df452*/
        __dst[0] = 6; /*0x1006df459*/
        v21 = v26; /*0x1006df46b*/
        v18 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v26, __dst, v22); /*0x1006df478*/
        goto LABEL_117; /*0x1006df47d*/
      }
      v26[5] = v30; /*0x1006de42c*/
      v21 = v26; /*0x1006de431*/
      v18 = serde_json::de::Deserializer$LT$R$GT$::ignore_value::h8b31c244611112c3(v26, 58, v22, v31); /*0x1006de434*/
      if ( v18 ) /*0x1006de43c*/
      {
LABEL_106:
        __src[0] = v156; /*0x1006de9c5*/
        __src[1] = v153; /*0x1006de9d4*/
        goto LABEL_117; /*0x1006de9db*/
      }
    }
    switch ( BYTE1(v114[0]) ) /*0x1006de457*/
    {
      case 0: /*0x1006de457*/
        if ( v154 == 0x8000000000000001LL ) /*0x1006de67d*/
        {
          v56 = v26[4]; /*0x1006de683*/
          v57 = v26[5]; /*0x1006de688*/
          if ( v57 >= v56 ) /*0x1006de690*/
          {
LABEL_163:
            __src[0] = v156; /*0x1006df138*/
            __src[1] = v153; /*0x1006df147*/
            __dst[0] = 3; /*0x1006df14e*/
            v154 = 0x8000000000000001LL; /*0x1006df16a*/
            v21 = v26; /*0x1006df16e*/
            v18 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v26, __dst, v22); /*0x1006df171*/
          }
          else
          {
            v22 = *v27; /*0x1006de696*/
            v58 = v57 + 1; /*0x1006de699*/
            v59 = -(__int64)v56; /*0x1006de69c*/
            while ( 1 ) /*0x1006de69f*/
            {
              v60 = *(unsigned __int8 *)(v22 + v58 - 1); /*0x1006de69f*/
              if ( v60 > 0x3A ) /*0x1006de6a8*/
                goto LABEL_213; /*0x1006de6a8*/
              v61 = 0x100002600LL; /*0x1006de6ae*/
              if ( !_bittest64(&v61, v60) ) /*0x1006de6b8*/
                break; /*0x1006de6b8*/
              v26[5] = v58; /*0x1006de6be*/
              v62 = v59 + v58++ + 1; /*0x1006de6c3*/
              if ( v62 == 1 ) /*0x1006de6cf*/
                goto LABEL_163; /*0x1006de6cf*/
            }
            if ( v60 == 58 ) /*0x1006de6da*/
            {
              v26[5] = v58; /*0x1006de6e0*/
              v21 = v114; /*0x1006de6e5*/
              _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h2faefcab0cd9bb66( /*0x1006de6ef*/
                v114,
                v26);
              v17 = v114[0]; /*0x1006de6f4*/
              v18 = v114[1]; /*0x1006de6fb*/
              if ( v114[0] != 0x8000000000000001LL ) /*0x1006de70f*/
              {
                v20 = v114[2]; /*0x1006de715*/
                v138 = (_QWORD *)v114[1]; /*0x1006de71c*/
                v18 = (__int64)v152; /*0x1006de723*/
                v19 = v149; /*0x1006de727*/
                continue; /*0x1006de72b*/
              }
              __src[0] = v156; /*0x1006df399*/
              __src[1] = v153; /*0x1006df3a4*/
              v17 = 0x8000000000000001LL; /*0x1006df3ab*/
              goto LABEL_118; /*0x1006df3ae*/
            }
LABEL_213:
            __src[0] = v156; /*0x1006df65f*/
            __src[1] = v153; /*0x1006df66e*/
            __dst[0] = 6; /*0x1006df675*/
            v154 = 0x8000000000000001LL; /*0x1006df691*/
            v21 = v26; /*0x1006df695*/
            v18 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v26, __dst, v22); /*0x1006df698*/
          }
          v17 = 0x8000000000000001LL; /*0x1006df176*/
          goto LABEL_118; /*0x1006df179*/
        }
        v94 = 9; /*0x1006df548*/
        goto LABEL_210; /*0x1006df54d*/
      case 1: /*0x1006de457*/
        if ( v151 != 0x8000000000000001LL ) /*0x1006de5c3*/
        {
          v94 = 14; /*0x1006df54f*/
          v95 = &anon_69f6ba9ba0edfdbc8a57efa1de3594e0_191; /*0x1006df554*/
          goto LABEL_209; /*0x1006df55b*/
        }
        v49 = v26[4]; /*0x1006de5c9*/
        v50 = v26[5]; /*0x1006de5ce*/
        if ( v50 >= v49 ) /*0x1006de5d6*/
        {
LABEL_171:
          __src[0] = v156; /*0x1006df252*/
          __src[1] = v153; /*0x1006df261*/
          __dst[0] = 3; /*0x1006df268*/
          v151 = 0x8000000000000001LL; /*0x1006df284*/
          v21 = v26; /*0x1006df288*/
          v18 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v26, __dst, v22); /*0x1006df28b*/
LABEL_172:
          v151 = 0x8000000000000001LL; /*0x1006df290*/
          goto LABEL_117; /*0x1006df294*/
        }
        v22 = *v27; /*0x1006de5dc*/
        v51 = v50 + 1; /*0x1006de5df*/
        v52 = -(__int64)v49; /*0x1006de5e2*/
        while ( 1 ) /*0x1006de5e5*/
        {
          v53 = *(unsigned __int8 *)(v22 + v51 - 1); /*0x1006de5e5*/
          if ( v53 > 0x3A ) /*0x1006de5ee*/
            goto LABEL_214; /*0x1006de5ee*/
          v54 = 0x100002600LL; /*0x1006de5f4*/
          if ( !_bittest64(&v54, v53) ) /*0x1006de5fe*/
            break; /*0x1006de5fe*/
          v26[5] = v51; /*0x1006de604*/
          v55 = v52 + v51++ + 1; /*0x1006de609*/
          if ( v55 == 1 ) /*0x1006de615*/
            goto LABEL_171; /*0x1006de615*/
        }
        if ( v53 != 58 ) /*0x1006de620*/
        {
LABEL_214:
          __src[0] = v156; /*0x1006df6a2*/
          __src[1] = v153; /*0x1006df6b1*/
          __dst[0] = 6; /*0x1006df6b8*/
          v151 = 0x8000000000000001LL; /*0x1006df6d4*/
          v21 = v26; /*0x1006df6d8*/
          v18 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v26, __dst, v22); /*0x1006df6db*/
          goto LABEL_172; /*0x1006df6e0*/
        }
        v26[5] = v51; /*0x1006de626*/
        v21 = v114; /*0x1006de62b*/
        _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h2faefcab0cd9bb66( /*0x1006de635*/
          v114,
          v26);
        v18 = v114[1]; /*0x1006de641*/
        v151 = v114[0]; /*0x1006de652*/
        v17 = v154; /*0x1006de659*/
        if ( v114[0] == 0x8000000000000001LL ) /*0x1006de65d*/
        {
          __src[0] = v156; /*0x1006df3d6*/
          __src[1] = v153; /*0x1006df3e1*/
          v151 = 0x8000000000000001LL; /*0x1006df3e8*/
          goto LABEL_118; /*0x1006df3ec*/
        }
        v19 = v114[2]; /*0x1006de663*/
        goto LABEL_26; /*0x1006de66a*/
      case 2: /*0x1006de457*/
        if ( v155 != 2 ) /*0x1006de45d*/
        {
          v94 = 25; /*0x1006df53a*/
          v95 = &anon_69f6ba9ba0edfdbc8a57efa1de3594e0_192; /*0x1006df53f*/
LABEL_209:
          v144 = v95; /*0x1006df577*/
LABEL_210:
          __src[0] = v156; /*0x1006df57e*/
          __src[1] = v153; /*0x1006df58d*/
          v114[0] = v144; /*0x1006df59b*/
          v114[1] = v94; /*0x1006df5a2*/
          __dst[0] = v114; /*0x1006df5b0*/
          __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x1006df5be*/
          v21 = &anon_89028fb7e9bc8caab153fb475db58618_36; /*0x1006df5c5*/
          v18 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hcfdf972e3e0efb2c(&anon_89028fb7e9bc8caab153fb475db58618_36); /*0x1006df5dd*/
LABEL_117:
          v17 = v154; /*0x1006deaaf*/
LABEL_118:
          v82 = 0x8000000000000002LL; /*0x1006deab3*/
          if ( v148 >= (__int64)0x8000000000000002LL && v148 ) /*0x1006deac9*/
          {
            v21 = v150; /*0x1006deadf*/
            v84 = v18; /*0x1006deae3*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006deae6*/
            v150 = (_QWORD *)v84; /*0x1006deaeb*/
            v83 = v156; /*0x1006deaf9*/
            if ( v156 != 0x8000000000000001LL ) /*0x1006deb00*/
              goto LABEL_123; /*0x1006deb00*/
          }
          else
          {
            v150 = (_QWORD *)v18; /*0x1006deacb*/
            v83 = v156; /*0x1006deacf*/
            if ( v156 != 0x8000000000000001LL ) /*0x1006dead6*/
              goto LABEL_123; /*0x1006dead6*/
          }
          goto LABEL_124; /*0x1006dead6*/
        }
        v35 = v26[4]; /*0x1006de463*/
        v36 = v26[5]; /*0x1006de468*/
        if ( v36 >= v35 ) /*0x1006de470*/
        {
LABEL_99:
          __src[0] = v156; /*0x1006de899*/
          __src[1] = v153; /*0x1006de8a8*/
          __dst[0] = 3; /*0x1006de8af*/
          v21 = v26; /*0x1006de8c1*/
          v18 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v26, __dst, v22); /*0x1006de8ce*/
          goto LABEL_117; /*0x1006de8d3*/
        }
        v22 = *v27; /*0x1006de476*/
        v37 = v36 + 1; /*0x1006de479*/
        v38 = -(__int64)v35; /*0x1006de47c*/
        while ( 1 ) /*0x1006de47f*/
        {
          v39 = *(unsigned __int8 *)(v22 + v37 - 1); /*0x1006de47f*/
          if ( v39 > 0x3A ) /*0x1006de488*/
            goto LABEL_194; /*0x1006de488*/
          v40 = 0x100002600LL; /*0x1006de48e*/
          if ( !_bittest64(&v40, v39) ) /*0x1006de498*/
            break; /*0x1006de498*/
          v26[5] = v37; /*0x1006de4a2*/
          v41 = v38 + v37++ + 1; /*0x1006de4a7*/
          if ( v41 == 1 ) /*0x1006de4b3*/
            goto LABEL_99; /*0x1006de4b3*/
        }
        if ( v39 != 58 ) /*0x1006de57f*/
          goto LABEL_194; /*0x1006de57f*/
        v26[5] = v37; /*0x1006de585*/
        v21 = v114; /*0x1006de58a*/
        _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_bool::hdd1920e9f44e264b( /*0x1006de594*/
          v114,
          v26);
        if ( LOBYTE(v114[0]) == 1 ) /*0x1006de5a0*/
          goto LABEL_116; /*0x1006de5a0*/
        v155 = BYTE1(v114[0]); /*0x1006de5ad*/
        goto LABEL_27; /*0x1006de5b0*/
      case 3: /*0x1006de457*/
        if ( v156 != 0x8000000000000001LL ) /*0x1006de73e*/
        {
          v94 = 6; /*0x1006df56b*/
          v95 = &anon_69f6ba9ba0edfdbc8a57efa1de3594e0_193; /*0x1006df570*/
          goto LABEL_209; /*0x1006df570*/
        }
        v63 = v26[4]; /*0x1006de744*/
        v64 = v26[5]; /*0x1006de749*/
        if ( v64 >= v63 ) /*0x1006de751*/
        {
LABEL_165:
          __src[0] = v156; /*0x1006df17e*/
          __src[1] = v153; /*0x1006df18d*/
          v114[0] = 3; /*0x1006df194*/
          v156 = 0x8000000000000001LL; /*0x1006df1b0*/
          v21 = v26; /*0x1006df1b4*/
          v18 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v26, v114, v22); /*0x1006df1b7*/
LABEL_166:
          v156 = 0x8000000000000001LL; /*0x1006df1bc*/
          goto LABEL_117; /*0x1006df1c0*/
        }
        v22 = *v27; /*0x1006de757*/
        v65 = v64 + 1; /*0x1006de75a*/
        v66 = -(__int64)v63; /*0x1006de75d*/
        while ( 1 ) /*0x1006de760*/
        {
          v67 = *(unsigned __int8 *)(v22 + v65 - 1); /*0x1006de760*/
          if ( v67 > 0x3A ) /*0x1006de769*/
            goto LABEL_211; /*0x1006de769*/
          v68 = 0x100002600LL; /*0x1006de76f*/
          if ( !_bittest64(&v68, v67) ) /*0x1006de779*/
            break; /*0x1006de779*/
          v26[5] = v65; /*0x1006de77f*/
          v69 = v66 + v65++ + 1; /*0x1006de784*/
          if ( v69 == 1 ) /*0x1006de790*/
            goto LABEL_165; /*0x1006de790*/
        }
        if ( v67 != 58 ) /*0x1006de79b*/
        {
LABEL_211:
          __src[0] = v156; /*0x1006df5e7*/
          __src[1] = v153; /*0x1006df5f6*/
          v114[0] = 6; /*0x1006df5fd*/
          v156 = 0x8000000000000001LL; /*0x1006df619*/
          v21 = v26; /*0x1006df61d*/
          v18 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v26, v114, v22); /*0x1006df620*/
          goto LABEL_166; /*0x1006df625*/
        }
        v26[5] = v65; /*0x1006de7a1*/
        v21 = __dst; /*0x1006de7a6*/
        _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h5b14f398dbb3db00( /*0x1006de7b0*/
          __dst,
          v26);
        v22 = __dst[0]; /*0x1006de7b5*/
        v18 = __dst[1]; /*0x1006de7bc*/
        v17 = v154; /*0x1006de7d0*/
        if ( __dst[0] == 0x8000000000000001LL ) /*0x1006de7d4*/
        {
          __src[0] = v156; /*0x1006df3b7*/
          __src[1] = v153; /*0x1006df3c2*/
          v156 = 0x8000000000000001LL; /*0x1006df3c9*/
          goto LABEL_118; /*0x1006df3cd*/
        }
        qmemcpy(&__src[2], &__dst[2], 0x50u); /*0x1006de7ed*/
        v153 = __dst[1]; /*0x1006de7f0*/
        v156 = __dst[0]; /*0x1006de7f4*/
        goto LABEL_24; /*0x1006de7f8*/
      case 4: /*0x1006de457*/
        if ( v148 != 0x8000000000000001LL ) /*0x1006de4c8*/
        {
          v94 = 12; /*0x1006df55d*/
          v95 = &anon_69f6ba9ba0edfdbc8a57efa1de3594e0_194; /*0x1006df562*/
          goto LABEL_209; /*0x1006df569*/
        }
        v42 = v26[4]; /*0x1006de4ce*/
        v43 = v26[5]; /*0x1006de4d3*/
        if ( v43 >= v42 ) /*0x1006de4db*/
        {
LABEL_168:
          __src[0] = v156; /*0x1006df1fa*/
          __src[1] = v153; /*0x1006df209*/
          __dst[0] = 3; /*0x1006df210*/
          v148 = 0x8000000000000001LL; /*0x1006df22c*/
          v21 = v26; /*0x1006df230*/
          v91 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v26, __dst, v22); /*0x1006df233*/
          goto LABEL_169; /*0x1006df233*/
        }
        v22 = *v27; /*0x1006de4e1*/
        v44 = v43 + 1; /*0x1006de4e4*/
        v45 = -(__int64)v42; /*0x1006de4e7*/
        while ( 1 ) /*0x1006de4ea*/
        {
          v46 = *(unsigned __int8 *)(v22 + v44 - 1); /*0x1006de4ea*/
          if ( v46 > 0x3A ) /*0x1006de4f3*/
            goto LABEL_215; /*0x1006de4f3*/
          v47 = 0x100002600LL; /*0x1006de4f9*/
          if ( !_bittest64(&v47, v46) ) /*0x1006de503*/
            break; /*0x1006de503*/
          v26[5] = v44; /*0x1006de509*/
          v48 = v45 + v44++ + 1; /*0x1006de50e*/
          if ( v48 == 1 ) /*0x1006de51a*/
            goto LABEL_168; /*0x1006de51a*/
        }
        if ( v46 == 58 ) /*0x1006de525*/
        {
          v26[5] = v44; /*0x1006de52b*/
          v21 = __dst; /*0x1006de530*/
          codexmate_lib::core::auth::deserialize_optional_timestamp::hccd5a307f4f8cc01(__dst, v26); /*0x1006de53a*/
          v150 = (_QWORD *)__dst[1]; /*0x1006de54d*/
          v148 = __dst[0]; /*0x1006de55b*/
          if ( __dst[0] == 0x8000000000000001LL ) /*0x1006de562*/
          {
            v83 = v156; /*0x1006df36d*/
            __src[0] = v156; /*0x1006df371*/
            v82 = v153; /*0x1006df378*/
            __src[1] = v153; /*0x1006df37c*/
            v17 = v154; /*0x1006df383*/
            if ( v156 != 0x8000000000000001LL ) /*0x1006df38a*/
              goto LABEL_123; /*0x1006df38a*/
            goto LABEL_124; /*0x1006df38a*/
          }
          v129 = __dst[2]; /*0x1006de56f*/
          goto LABEL_27; /*0x1006de576*/
        }
LABEL_215:
        __src[0] = v156; /*0x1006df6e5*/
        __src[1] = v153; /*0x1006df6f4*/
        __dst[0] = 6; /*0x1006df6fb*/
        v148 = 0x8000000000000001LL; /*0x1006df717*/
        v21 = v26; /*0x1006df71b*/
        v91 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v26, __dst, v22); /*0x1006df71e*/
LABEL_169:
        v150 = (_QWORD *)v91; /*0x1006df238*/
        v17 = v154; /*0x1006df23c*/
        v83 = v156; /*0x1006df240*/
        if ( v156 != 0x8000000000000001LL ) /*0x1006df247*/
        {
LABEL_123:
          v21 = __src; /*0x1006deb02*/
          v83 = core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthTokens$GT$::h3603f704f5c2636a(__src); /*0x1006deb09*/
        }
LABEL_124:
        v85 = 0x8000000000000002LL; /*0x1006deb0e*/
        v86 = v151; /*0x1006deb18*/
        if ( v151 >= (__int64)0x8000000000000002LL && v151 ) /*0x1006deb24*/
        {
          v21 = v152; /*0x1006deb2b*/
          v83 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006deb2f*/
        }
        if ( v17 >= (__int64)0x8000000000000002LL ) /*0x1006deb37*/
        {
          v85 = 0x8000000000000001LL; /*0x1006deb48*/
          if ( v17 ) /*0x1006deb52*/
          {
            v21 = v138; /*0x1006deb59*/
            v86 = v17; /*0x1006deb60*/
            v83 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006deb63*/
          }
          v81 = 0x8000000000000001LL; /*0x1006deb68*/
        }
        else
        {
          v81 = 0x8000000000000001LL; /*0x1006deb39*/
        }
LABEL_132:
        __src[0] = v81; /*0x1006deb6b*/
        __src[1] = v150; /*0x1006deb76*/
        __src[2] = v83; /*0x1006deb7d*/
        __src[3] = v23; /*0x1006deb84*/
        __src[4] = v21; /*0x1006deb8b*/
        __src[5] = v17; /*0x1006deb92*/
        __src[6] = v24; /*0x1006deb99*/
        __src[7] = v99; /*0x1006deba7*/
        __src[8] = v100; /*0x1006debb5*/
        __src[9] = v22; /*0x1006debbc*/
        __src[10] = v101; /*0x1006debca*/
        __src[11] = v102; /*0x1006debd8*/
        __src[12] = v82; /*0x1006debdf*/
        __src[13] = v103; /*0x1006debed*/
        __src[14] = v104; /*0x1006debfb*/
        __src[15] = v86; /*0x1006dec02*/
        __src[17] = v106; /*0x1006dec10*/
        __src[16] = v105; /*0x1006dec1e*/
        __src[18] = v7; /*0x1006dec25*/
        __src[19] = v154; /*0x1006dec30*/
        __src[20] = v85; /*0x1006dec37*/
        LOBYTE(__src[21]) = v25; /*0x1006dec3e*/
        ++v137; /*0x1006dec45*/
        v78 = (_QWORD *)serde_json::de::Deserializer$LT$R$GT$::end_map::hb69cbf0531a33a1d(v130); /*0x1006dec57*/
        memcpy(__dst, __src, sizeof(__dst)); /*0x1006dec6d*/
        v142 = v78; /*0x1006dec72*/
        v12 = __dst[0]; /*0x1006dec79*/
        if ( __dst[0] != 0x8000000000000001LL ) /*0x1006dec8d*/
          goto LABEL_138; /*0x1006dec8d*/
        v11 = __dst[1]; /*0x1006dec8f*/
        if ( !v78 ) /*0x1006dec99*/
        {
          v12 = 0x8000000000000001LL; /*0x1006ded96*/
          goto LABEL_144; /*0x1006ded99*/
        }
        v80 = *v78; /*0x1006dec9f*/
        if ( *v78 == 1 ) /*0x1006deca6*/
        {
LABEL_142:
          core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57c295f20edeb01a(v78 + 1); /*0x1006ded9b*/
          goto LABEL_143; /*0x1006deda2*/
        }
LABEL_135:
        if ( !v80 && v78[2] ) /*0x1006decb5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006deccb*/
LABEL_143:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006deda7*/
        v12 = 0x8000000000000001LL; /*0x1006dedb9*/
LABEL_144:
        v156 = v79; /*0x1006dedc3*/
        if ( v12 == 0x8000000000000001LL ) /*0x1006dedd4*/
          goto LABEL_203; /*0x1006dedd4*/
        qmemcpy(v96, v98, sizeof(v96)); /*0x1006dedf0*/
        v128 = v121; /*0x1006dedfa*/
        v127 = v120; /*0x1006dee08*/
        v126 = v119; /*0x1006dee16*/
        v125 = v118; /*0x1006dee24*/
        v124 = v117; /*0x1006dee32*/
        v123 = v116; /*0x1006dee47*/
        v122 = v115; /*0x1006dee4e*/
        __dst[0] = v12; /*0x1006dee55*/
        __dst[1] = v11; /*0x1006dee5c*/
        qmemcpy(&__dst[2], v96, 0x50u); /*0x1006dee72*/
        __dst[12] = v149; /*0x1006dee79*/
        __dst[13] = v156; /*0x1006dee84*/
        __dst[14] = v152; /*0x1006dee8f*/
        __dst[15] = v115; /*0x1006deea4*/
        __dst[16] = v116; /*0x1006deeab*/
        __dst[17] = v117; /*0x1006deeb9*/
        __dst[18] = v118; /*0x1006deec7*/
        __dst[19] = v119; /*0x1006deed5*/
        __dst[20] = v120; /*0x1006deee3*/
        __dst[21] = v121; /*0x1006deef1*/
        if ( v133 < v132 ) /*0x1006def09*/
        {
          v87 = v133 + 1; /*0x1006def19*/
          v88 = 0x100002600LL; /*0x1006def1c*/
          while ( 1 ) /*0x1006def30*/
          {
            v89 = *(unsigned __int8 *)(v131 + v87 - 1); /*0x1006def30*/
            if ( v89 > 0x20 || !_bittest64(&v88, v89) ) /*0x1006def3b*/
              break; /*0x1006def3b*/
            v133 = v87; /*0x1006def41*/
            v90 = v87 - v132 + 1; /*0x1006def48*/
            ++v87; /*0x1006def4d*/
            if ( v90 == 1 ) /*0x1006def54*/
              goto LABEL_9; /*0x1006def54*/
          }
          __src[0] = 22; /*0x1006def5b*/
          v11 = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v130, __src, v131); /*0x1006def79*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h2d413a1c8462ab70(__dst); /*0x1006def83*/
          v12 = 0x8000000000000001LL; /*0x1006def88*/
        }
LABEL_9:
        if ( v130[0] ) /*0x1006de12d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006de13b*/
        if ( v12 != 0x8000000000000001LL ) /*0x1006de14d*/
        {
          qmemcpy(v97, v96, sizeof(v97)); /*0x1006de186*/
          v113 = v128; /*0x1006de190*/
          v112 = v127; /*0x1006de19e*/
          v111 = v126; /*0x1006de1ac*/
          v110 = v125; /*0x1006de1ba*/
          v109 = v124; /*0x1006de1c8*/
          v108 = v123; /*0x1006de1dd*/
          v107 = v122; /*0x1006de1e4*/
          v13 = 0x8000000000000000LL; /*0x1006de1ee*/
          if ( v149 == 0x8000000000000000LL ) /*0x1006de1f8*/
          {
LABEL_15:
            v14 = v152; /*0x1006de1fa*/
            goto LABEL_18; /*0x1006de1fe*/
          }
          v14 = v152; /*0x1006de200*/
          if ( v152 ) /*0x1006de207*/
          {
            v13 = v149; /*0x1006de20d*/
          }
          else if ( v149 ) /*0x1006de800*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006de80f*/
            goto LABEL_15; /*0x1006de814*/
          }
LABEL_18:
          *a1 = v12; /*0x1006de210*/
          a1[1] = v11; /*0x1006de213*/
          qmemcpy(a1 + 2, v97, 0x50u); /*0x1006de227*/
          a1[12] = v13; /*0x1006de22a*/
          a1[13] = v156; /*0x1006de232*/
          a1[14] = (unsigned __int64)v14; /*0x1006de236*/
          v15 = v108; /*0x1006de241*/
          a1[15] = v107; /*0x1006de248*/
          a1[16] = v15; /*0x1006de24c*/
          a1[17] = v109; /*0x1006de25a*/
          a1[18] = v110; /*0x1006de268*/
          a1[19] = v111; /*0x1006de276*/
          a1[20] = v112; /*0x1006de284*/
          a1[21] = v113; /*0x1006de292*/
          if ( v140 ) /*0x1006de2a3*/
            goto LABEL_19; /*0x1006de2a3*/
          return a1; /*0x1006de2a3*/
        }
        a1[1] = 3; /*0x1006de14f*/
        a1[2] = v11; /*0x1006de157*/
        *a1 = 0x8000000000000001LL; /*0x1006de15b*/
        if ( !v140 ) /*0x1006de168*/
          return a1; /*0x1006de168*/
LABEL_19:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006de2a5*/
        return a1;
    }
  }
}