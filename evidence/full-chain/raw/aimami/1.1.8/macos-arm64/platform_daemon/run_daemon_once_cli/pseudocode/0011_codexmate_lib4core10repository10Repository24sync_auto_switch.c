// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x10052bc10 depth=1
// codexmate_lib4core10repository10Repository24sync_auto_switch_request
__int64 *__fastcall codexmate_lib::core::repository::Repository::sync_auto_switch_request::he35da4947b9a407d(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        size_t a4,
        _BYTE **a5,
        __m128i a6,
        __m128i a7,
        double a8)
{
  __int64 *v9; // rbx
  size_t v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rcx
  void *v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  size_t v21; // r13
  int v22; // r12d
  bool v23; // zf
  size_t v24; // r13
  _BYTE **v25; // rsi
  __int64 v26; // r14
  int v27; // edx
  size_t v28; // r15
  size_t v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _UNKNOWN **v34; // rax
  __int64 v35; // r12
  __int64 v36; // rax
  _UNKNOWN **v37; // rbx
  size_t v38; // r13
  _BYTE *v40; // rdi
  _BYTE *v41; // rsi
  char **v42; // rbx
  size_t *v43; // rdi
  size_t *v44; // rdx
  size_t *v45; // r13
  __int64 *v46; // rsi
  size_t v47; // rcx
  size_t v48; // rax
  __int64 v49; // rdx
  size_t v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rsi
  void *v53; // rdi
  __int64 v54; // rsi
  size_t v55; // rcx
  size_t v56; // rax
  __int64 v57; // rdx
  size_t v58; // rax
  __int64 v59; // rcx
  unsigned __int64 v60; // rsi
  void *v61; // rdi
  __int64 v62; // rsi
  _QWORD *v63; // rax
  size_t v64; // rcx
  size_t v65; // rax
  __int64 v66; // rdx
  size_t v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rsi
  void *v70; // rdi
  __int64 v71; // rsi
  char v72; // al
  size_t v73; // rcx
  size_t v74; // rax
  __int64 v75; // rdx
  size_t v76; // rax
  __int64 v77; // rcx
  unsigned __int64 v78; // rsi
  void *v79; // rdi
  __int64 v80; // rsi
  size_t v81; // rax
  size_t v82; // rdi
  size_t *v83; // rsi
  size_t v84; // rdx
  void *v85; // rcx
  size_t v86; // rax
  size_t v87; // r13
  _QWORD *v88; // rax
  __int64 v89; // rdx
  size_t v90; // rcx
  void *v91; // rcx
  __int64 v92; // rcx
  char v93; // cl
  char v94; // r13
  __int64 v95; // rax
  void *v96; // rcx
  void *v97; // r13
  __int64 v98; // rcx
  void *v99; // rdi
  unsigned __int64 v100; // rsi
  __int64 v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rcx
  char v104; // al
  _QWORD *v105; // rax
  size_t v106; // rax
  _QWORD __dst[86]; // [rsp+8h] [rbp-7A8h] BYREF
  size_t __src[86]; // [rsp+2B8h] [rbp-4F8h] BYREF
  _QWORD *v109; // [rsp+568h] [rbp-248h] BYREF
  char v110; // [rsp+570h] [rbp-240h]
  __int64 v111; // [rsp+578h] [rbp-238h]
  size_t v112; // [rsp+580h] [rbp-230h]
  size_t v113[42]; // [rsp+588h] [rbp-228h] BYREF
  size_t __n; // [rsp+6D8h] [rbp-D8h]
  void *__s2; // [rsp+6E0h] [rbp-D0h]
  void *v116; // [rsp+6E8h] [rbp-C8h]
  size_t *v117; // [rsp+6F0h] [rbp-C0h]
  size_t v118; // [rsp+6F8h] [rbp-B8h] BYREF
  size_t v119; // [rsp+700h] [rbp-B0h]
  size_t v120; // [rsp+708h] [rbp-A8h]
  size_t v121; // [rsp+710h] [rbp-A0h]
  size_t v122; // [rsp+718h] [rbp-98h]
  __int64 v123; // [rsp+720h] [rbp-90h]
  char *v124; // [rsp+728h] [rbp-88h]
  size_t v125; // [rsp+730h] [rbp-80h]
  size_t v126; // [rsp+738h] [rbp-78h]
  _BYTE **v127; // [rsp+740h] [rbp-70h]
  size_t v128; // [rsp+748h] [rbp-68h]
  char v129; // [rsp+757h] [rbp-59h] BYREF
  size_t v130; // [rsp+758h] [rbp-58h]
  size_t v131; // [rsp+760h] [rbp-50h]
  size_t v132; // [rsp+768h] [rbp-48h]
  void *v133; // [rsp+770h] [rbp-40h]
  __int64 *v134; // [rsp+778h] [rbp-38h]
  void *__s1; // [rsp+780h] [rbp-30h]

  v9 = a1; /*0x10052bc27*/
  if ( a4 == 0 || a3 == 0 ) /*0x10052bc2d*/
  {
    codexmate_lib::core::repository::Repository::clear_auto_switch_snooze::h26b55fa4377a60a8( /*0x10052bc51*/
      __dst,
      *(void **)(a2 + 488),
      *(_QWORD *)(a2 + 496));
    if ( LODWORD(__dst[0]) != 10 ) /*0x10052bc5d*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x10052bc66*/
    codexmate_lib::core::repository::Repository::clear_auto_switch_snooze::h26b55fa4377a60a8( /*0x10052bc80*/
      __dst,
      *(void **)(a2 + 512),
      *(_QWORD *)(a2 + 520));
    if ( LODWORD(__dst[0]) != 10 ) /*0x10052bc8c*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x10052bc95*/
    goto LABEL_6; /*0x10052bc95*/
  }
  v134 = a1; /*0x10052bcb7*/
  v11 = 0x8000000000000000LL; /*0x10052bcbb*/
  __s2 = *(void **)(a3 + 184); /*0x10052bccc*/
  v111 = a3; /*0x10052bcd3*/
  __n = *(_QWORD *)(a3 + 192); /*0x10052bce1*/
  v116 = *(void **)(a4 + 184); /*0x10052bcef*/
  v125 = a4; /*0x10052bcf6*/
  v126 = *(_QWORD *)(a4 + 192); /*0x10052bd01*/
  v12 = __dst; /*0x10052bd13*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__dst, *(const void **)(a2 + 512), *(_QWORD *)(a2 + 520)); /*0x10052bd1d*/
  if ( __OFSUB__(-__dst[0], 1) ) /*0x10052bd2c*/
  {
    if ( (__dst[1] & 3) != 1 ) /*0x10052bd40*/
      goto LABEL_44; /*0x10052bd40*/
    v13 = *(_QWORD *)(__dst[1] + 7LL); /*0x10052bd51*/
    if ( *(_QWORD *)v13 ) /*0x10052bd55*/
      (*(void (__fastcall **)(_QWORD))v13)(*(_QWORD *)(__dst[1] - 1LL)); /*0x10052bd60*/
    if ( *(_QWORD *)(v13 + 8) ) /*0x10052bd62*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052bd72*/
    goto LABEL_43; /*0x10052bd72*/
  }
  v127 = a5; /*0x10052bd91*/
  v123 = __dst[0]; /*0x10052bd95*/
  v14 = __dst[1]; /*0x10052bd9c*/
  v15 = __dst[2]; /*0x10052bda3*/
  __dst[3] = __dst[1]; /*0x10052bdaa*/
  __dst[4] = __dst[2]; /*0x10052bdb1*/
  __dst[5] = 0; /*0x10052bdb8*/
  __dst[6] = 0; /*0x10052bdc3*/
  __dst[7] = __dst[1]; /*0x10052bdce*/
  __dst[8] = __dst[2]; /*0x10052bdd5*/
  __dst[0] = 0; /*0x10052bddc*/
  __dst[1] = 1; /*0x10052bde7*/
  __dst[2] = 0; /*0x10052bdf2*/
  LOBYTE(__dst[9]) = 0x80; /*0x10052bdfd*/
  if ( !__dst[4] ) /*0x10052be07*/
  {
LABEL_19:
    __src[0] = 5; /*0x10052be4f*/
    __s1 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)__dst, (__int64 *)__src); /*0x10052be6d*/
    v113[1] = (size_t)__s1; /*0x10052be71*/
    v113[0] = 0x8000000000000000LL; /*0x10052be78*/
    goto LABEL_20; /*0x10052be78*/
  }
  v16 = -v15; /*0x10052be09*/
  v17 = 1; /*0x10052be0c*/
  v18 = &loc_100002600; /*0x10052be11*/
  while ( 1 ) /*0x10052be20*/
  {
    v19 = *(unsigned __int8 *)(v14 + v17 - 1); /*0x10052be20*/
    if ( v19 > 0x20 || !_bittest64((const __int64 *)&v18, v19) ) /*0x10052be30*/
      break; /*0x10052be30*/
    __dst[5] = v17; /*0x10052be3a*/
    v20 = v16 + v17++ + 1; /*0x10052be41*/
    if ( v20 == 1 ) /*0x10052be4d*/
      goto LABEL_19; /*0x10052be4d*/
  }
  if ( (_DWORD)v19 == 91 ) /*0x10052c2c8*/
  {
    LOBYTE(__dst[9]) = 127; /*0x10052c702*/
    __dst[5] = v17; /*0x10052c709*/
    v113[0] = (size_t)__dst; /*0x10052c710*/
    LOBYTE(v113[1]) = 1; /*0x10052c717*/
    v82 = (size_t)__src; /*0x10052c71e*/
    v83 = v113; /*0x10052c725*/
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h33c672ea6fac05e1( /*0x10052c72c*/
      (char *)__src,
      v113);
    if ( LOBYTE(__src[0]) == 1 ) /*0x10052c738*/
    {
      v86 = __src[1]; /*0x10052c73a*/
    }
    else if ( BYTE1(__src[0]) == 1 ) /*0x10052c7a4*/
    {
      v83 = (size_t *)v113[0]; /*0x10052c7a6*/
      v82 = (size_t)__src; /*0x10052c7ad*/
      _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::h3f41ba97bdf698e6( /*0x10052c7b4*/
        __src,
        (_QWORD *)v113[0],
        *(double *)a6.i64,
        *(double *)a7.i64,
        a8);
      v87 = __src[0]; /*0x10052c7b9*/
      v86 = __src[1]; /*0x10052c7c0*/
      if ( __src[0] != 0x8000000000000000LL ) /*0x10052c7ca*/
      {
        __s1 = (void *)__src[1]; /*0x10052c7cc*/
        v132 = __src[2]; /*0x10052c7d7*/
        v82 = (size_t)__src; /*0x10052c7db*/
        v83 = v113; /*0x10052c7e2*/
        _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h33c672ea6fac05e1( /*0x10052c7e9*/
          (char *)__src,
          v113);
        if ( LOBYTE(__src[0]) == 1 ) /*0x10052c7f5*/
        {
          v85 = (void *)__src[1]; /*0x10052c7fb*/
        }
        else if ( BYTE1(__src[0]) == 1 ) /*0x10052cd09*/
        {
          v83 = (size_t *)v113[0]; /*0x10052cd0f*/
          v82 = (size_t)__src; /*0x10052cd16*/
          _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::h3f41ba97bdf698e6( /*0x10052cd1d*/
            __src,
            (_QWORD *)v113[0],
            *(double *)a6.i64,
            *(double *)a7.i64,
            a8);
          v12 = (_QWORD *)__src[0]; /*0x10052cd22*/
          v85 = (void *)__src[1]; /*0x10052cd29*/
          if ( __src[0] != 0x8000000000000000LL ) /*0x10052cd33*/
          {
            v133 = (void *)__src[1]; /*0x10052cd39*/
            v131 = __src[2]; /*0x10052cd44*/
            v83 = v113; /*0x10052cd4f*/
            _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h33c672ea6fac05e1( /*0x10052cd56*/
              (char *)__src,
              v113);
            if ( LOBYTE(__src[0]) == 1 ) /*0x10052cd62*/
            {
              v82 = __src[1]; /*0x10052cd68*/
            }
            else if ( BYTE1(__src[0]) == 1 ) /*0x10052ce5a*/
            {
              v104 = _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_i64::h93b72eaa3968ad8a(v113[0]); /*0x10052ce67*/
              v82 = v84; /*0x10052ce6c*/
              if ( (v104 & 1) == 0 ) /*0x10052ce71*/
              {
                v86 = (size_t)__s1; /*0x10052ce77*/
                v85 = v133; /*0x10052ce7b*/
                v84 = v132; /*0x10052ce7f*/
                v83 = (size_t *)v131; /*0x10052ce83*/
LABEL_133:
                ++LOBYTE(__dst[9]); /*0x10052c81f*/
                v113[0] = v87; /*0x10052c825*/
                v113[1] = v86; /*0x10052c82c*/
                v113[2] = v84; /*0x10052c833*/
                v113[3] = (size_t)v12; /*0x10052c83a*/
                v113[4] = (size_t)v85; /*0x10052c841*/
                v113[5] = (size_t)v83; /*0x10052c848*/
                v113[6] = v82; /*0x10052c84f*/
                v88 = serde_json::de::Deserializer$LT$R$GT$::end_seq::h8a430273f2e00f21(__dst); /*0x10052c85d*/
                __src[6] = v113[6]; /*0x10052c869*/
                __src[5] = v113[5]; /*0x10052c877*/
                __src[4] = v113[4]; /*0x10052c885*/
                __src[3] = v113[3]; /*0x10052c893*/
                __src[2] = v113[2]; /*0x10052c8a1*/
                v21 = v113[0]; /*0x10052c8a8*/
                v90 = v113[1]; /*0x10052c8af*/
                __src[1] = v113[1]; /*0x10052c8b6*/
                __src[0] = v113[0]; /*0x10052c8bd*/
                __src[7] = (size_t)v88; /*0x10052c8c4*/
                if ( v113[0] == 0x8000000000000000LL ) /*0x10052c8ce*/
                {
                  v91 = (void *)__src[1]; /*0x10052c8d4*/
                  if ( v88 ) /*0x10052c8de*/
                  {
                    __s1 = (void *)__src[1]; /*0x10052c8e4*/
                    v92 = *v88; /*0x10052c8e8*/
                    if ( *v88 != 1 ) /*0x10052c8ef*/
                      goto LABEL_152; /*0x10052c8ef*/
                    goto LABEL_159; /*0x10052c8ef*/
                  }
LABEL_157:
                  v21 = 0x8000000000000000LL; /*0x10052cae7*/
                  goto LABEL_161; /*0x10052caea*/
                }
LABEL_155:
                if ( v88 ) /*0x10052cace*/
                {
                  v12 = v88; /*0x10052cad0*/
                  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AutoSwitchSnoozeRecord$GT$::hf18f12a7c95c9be2( /*0x10052cada*/
                    __src,
                    v83,
                    v89,
                    v90);
                  v21 = 0x8000000000000000LL; /*0x10052cadf*/
                  v91 = v12; /*0x10052cae2*/
                }
                else
                {
                  v91 = (void *)__src[1]; /*0x10052caec*/
                  v118 = __src[2]; /*0x10052cafa*/
                  v119 = __src[3]; /*0x10052cb08*/
                  v120 = __src[4]; /*0x10052cb16*/
                  v121 = __src[5]; /*0x10052cb24*/
                  v122 = __src[6]; /*0x10052cb32*/
                }
                goto LABEL_161; /*0x10052cae5*/
              }
            }
            else
            {
              v83 = (size_t *)&off_101532A80; /*0x10052cee8*/
              v82 = serde_core::de::Error::invalid_length::hcacc1da483e1fd21( /*0x10052cf00*/
                      2,
                      (__int64)&off_101532A80,
                      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_67);
            }
            if ( v12 ) /*0x10052cf06*/
            {
              v132 = v82; /*0x10052cf0d*/
              v82 = (size_t)v133; /*0x10052cf11*/
              v83 = v12; /*0x10052cf15*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052cf18*/
              v85 = (void *)v132; /*0x10052cf1d*/
            }
            else
            {
              v85 = (void *)v82; /*0x10052cf23*/
            }
          }
        }
        else
        {
          v83 = (size_t *)&off_101532A80; /*0x10052cda1*/
          v82 = 1; /*0x10052cdaf*/
          v85 = (void *)serde_core::de::Error::invalid_length::hcacc1da483e1fd21( /*0x10052cdb9*/
                          1,
                          (__int64)&off_101532A80,
                          (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_67);
        }
        if ( v87 ) /*0x10052cf29*/
        {
          v133 = v85; /*0x10052cf2b*/
          v82 = (size_t)__s1; /*0x10052cf34*/
          v83 = (size_t *)v87; /*0x10052cf38*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052cf3b*/
          v85 = v133; /*0x10052cf40*/
        }
        v86 = (size_t)v85; /*0x10052cf44*/
      }
    }
    else
    {
      v83 = (size_t *)&off_101532A80; /*0x10052c807*/
      v82 = 0; /*0x10052c815*/
      v86 = serde_core::de::Error::invalid_length::hcacc1da483e1fd21( /*0x10052c817*/
              0,
              (__int64)&off_101532A80,
              (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_67);
    }
    v87 = 0x8000000000000000LL; /*0x10052c81c*/
    goto LABEL_133; /*0x10052c81c*/
  }
  if ( (_DWORD)v19 != 123 ) /*0x10052c2d1*/
  {
    __s1 = (void *)serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::h3c574fc43dc8363f( /*0x10052cfa8*/
                     __dst,
                     (__int64)&v129,
                     (__int64)&unk_1015337F0,
                     *(double *)a6.i64,
                     *(double *)a7.i64,
                     a8);
LABEL_202:
    v21 = 0x8000000000000000LL; /*0x10052cfac*/
    __s1 = (void *)serde_json::error::Error::fix_position::hcddea6c8e528a7ec((__int64)__s1, (__int64)__dst); /*0x10052cfc6*/
    v113[1] = (size_t)__s1; /*0x10052cfca*/
    v113[0] = 0x8000000000000000LL; /*0x10052cfd1*/
    LOBYTE(v12) = 1; /*0x10052cfd8*/
    goto LABEL_21; /*0x10052cfda*/
  }
  LOBYTE(__dst[9]) = 127; /*0x10052c2d7*/
  __dst[5] = v17; /*0x10052c2de*/
  v109 = __dst; /*0x10052c2e5*/
  v110 = 1; /*0x10052c2ec*/
  v132 = 0; /*0x10052c2f3*/
  v124 = "currentAccountKeycandidateAccountKeydismissedAt"; /*0x10052c302*/
  v133 = (void *)0x8000000000000000LL; /*0x10052c309*/
  __s1 = (void *)0x8000000000000000LL; /*0x10052c30d*/
LABEL_69:
  v131 = v17; /*0x10052c311*/
  while ( 1 ) /*0x10052c391*/
  {
    while ( 1 ) /*0x10052c315*/
    {
LABEL_70:
      v43 = __src; /*0x10052c315*/
      _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::h2382fe6e42f05cc2( /*0x10052c323*/
        (char *)__src,
        &v109);
      if ( LOBYTE(__src[0]) == 1 ) /*0x10052c32f*/
      {
        v63 = (_QWORD *)__src[1]; /*0x10052c909*/
        goto LABEL_138; /*0x10052c909*/
      }
      if ( BYTE1(__src[0]) != 1 ) /*0x10052c33c*/
      {
        if ( v133 != (void *)0x8000000000000000LL ) /*0x10052c91a*/
        {
          v97 = __s1; /*0x10052cc9e*/
          if ( __s1 == (void *)0x8000000000000000LL ) /*0x10052cca8*/
          {
            LOBYTE(v131) = 1; /*0x10052ccae*/
            v113[0] = (size_t)"candidateAccountKeydismissedAt"; /*0x10052ccb8*/
            v113[1] = 19; /*0x10052ccbf*/
            __src[0] = (size_t)v113; /*0x10052ccd1*/
            __src[1] = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10052ccdf*/
            v43 = (size_t *)&anon_3e4c14ac1826b92abbb84b981a88c995_1; /*0x10052cce6*/
            v132 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x10052ccf9*/
                     &anon_3e4c14ac1826b92abbb84b981a88c995_1,
                     (unsigned __int64)__src);
          }
          else
          {
            if ( (v132 & 1) != 0 ) /*0x10052cd78*/
            {
              v132 = v128; /*0x10052cd7e*/
              v95 = v130; /*0x10052cd82*/
              v96 = v133; /*0x10052cd86*/
              v44 = (size_t *)v112; /*0x10052cd8a*/
              v83 = (size_t *)v131; /*0x10052cd91*/
              v43 = v117; /*0x10052cd95*/
              goto LABEL_149; /*0x10052cd9c*/
            }
            LOBYTE(v131) = __s1 == (void *)0x8000000000000000LL; /*0x10052cdc1*/
            v113[0] = (size_t)"dismissedAt"; /*0x10052cdcb*/
            v113[1] = 11; /*0x10052cdd2*/
            __src[0] = (size_t)v113; /*0x10052cde4*/
            __src[1] = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10052cdf2*/
            v43 = (size_t *)&anon_3e4c14ac1826b92abbb84b981a88c995_1; /*0x10052cdf9*/
            v132 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x10052ce0c*/
                     &anon_3e4c14ac1826b92abbb84b981a88c995_1,
                     (unsigned __int64)__src);
            if ( v97 ) /*0x10052ce13*/
            {
              v43 = (size_t *)v130; /*0x10052ce1a*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052ce21*/
            }
          }
          v94 = 1; /*0x10052ce26*/
          if ( v133 ) /*0x10052ce30*/
          {
            v43 = (size_t *)v128; /*0x10052ce37*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052ce3b*/
          }
          else
          {
            v133 = nullptr; /*0x10052ce42*/
          }
          v93 = v131; /*0x10052ce4a*/
          goto LABEL_144; /*0x10052ce4e*/
        }
        v113[0] = (size_t)"currentAccountKeycandidateAccountKeydismissedAt"; /*0x10052c927*/
        v113[1] = 17; /*0x10052c92e*/
        __src[0] = (size_t)v113; /*0x10052c940*/
        __src[1] = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10052c94e*/
        v43 = (size_t *)&anon_3e4c14ac1826b92abbb84b981a88c995_1; /*0x10052c955*/
        v133 = (void *)0x8000000000000000LL; /*0x10052c963*/
        v12 = __s1; /*0x10052c967*/
        v132 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x10052c970*/
                 &anon_3e4c14ac1826b92abbb84b981a88c995_1,
                 (unsigned __int64)__src);
        goto LABEL_141; /*0x10052c970*/
      }
      v45 = v109; /*0x10052c342*/
      v46 = v109 + 3; /*0x10052c349*/
      ++v109[5]; /*0x10052c34d*/
      v45[2] = 0; /*0x10052c351*/
      v43 = __src; /*0x10052c359*/
      v12 = v46; /*0x10052c360*/
      _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18( /*0x10052c366*/
        __src,
        v46,
        v45,
        *(double *)a6.i64,
        *(double *)a7.i64,
        a8);
      v44 = (size_t *)__src[1]; /*0x10052c372*/
      if ( __src[0] == 2 ) /*0x10052c37d*/
      {
        v132 = __src[1]; /*0x10052c97f*/
        goto LABEL_143; /*0x10052c97f*/
      }
      if ( __src[2] != 11 ) /*0x10052c391*/
        break; /*0x10052c391*/
      if ( *(_QWORD *)__src[1] ^ 0x657373696D736964LL | *(_QWORD *)(__src[1] + 3) ^ 0x744164657373696DLL ) /*0x10052c47e*/
        goto LABEL_87; /*0x10052c481*/
      if ( v132 ) /*0x10052c4fc*/
      {
        v106 = 11; /*0x10052cff4*/
        v124 = "dismissedAt"; /*0x10052d000*/
        goto LABEL_206; /*0x10052d007*/
      }
      v64 = v45[4]; /*0x10052c502*/
      v65 = v45[5]; /*0x10052c506*/
      if ( v65 >= v64 ) /*0x10052c50d*/
      {
LABEL_102:
        __src[0] = 3; /*0x10052c54d*/
        v43 = v45; /*0x10052c558*/
        v44 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)v45, (__int64 *)__src); /*0x10052c567*/
      }
      else
      {
        v66 = *v46; /*0x10052c50f*/
        v67 = v65 + 1; /*0x10052c512*/
        v68 = -(__int64)v64; /*0x10052c515*/
        while ( 1 ) /*0x10052c518*/
        {
          v69 = *(unsigned __int8 *)(v66 + v67 - 1); /*0x10052c518*/
          if ( v69 > 0x3A ) /*0x10052c521*/
            break; /*0x10052c521*/
          v70 = &loc_100002600; /*0x10052c527*/
          if ( !_bittest64((const __int64 *)&v70, v69) ) /*0x10052c535*/
          {
            if ( v69 == 58 ) /*0x10052c5c4*/
            {
              v45[5] = v67; /*0x10052c5c6*/
              v43 = v45; /*0x10052c5ca*/
              v72 = _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_i64::h93b72eaa3968ad8a(v45); /*0x10052c5cd*/
              goto LABEL_109; /*0x10052c5cd*/
            }
            break; /*0x10052c5c4*/
          }
          v45[5] = v67; /*0x10052c53b*/
          v71 = v68 + v67++ + 1; /*0x10052c53f*/
          if ( v71 == 1 ) /*0x10052c54b*/
            goto LABEL_102; /*0x10052c54b*/
        }
        __src[0] = 6; /*0x10052c5ef*/
        v43 = v45; /*0x10052c5fa*/
        v44 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)v45, (__int64 *)__src); /*0x10052c609*/
      }
      v72 = 1; /*0x10052c56a*/
LABEL_109:
      v117 = v44; /*0x10052c5d2*/
      if ( (v72 & 1) != 0 ) /*0x10052c5db*/
      {
        v93 = 1; /*0x10052cf73*/
        v94 = 0; /*0x10052cf75*/
        v132 = (size_t)v117; /*0x10052cf7f*/
        goto LABEL_144; /*0x10052cf83*/
      }
      v132 = 1; /*0x10052c5e6*/
    }
    if ( __src[2] != 19 ) /*0x10052c39b*/
    {
      if ( __src[2] == 17 ) /*0x10052c3a1*/
      {
        a6 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)__src[1]), (__m128i)xmmword_1012C85A0); /*0x10052c3b3*/
        a7 = _mm_or_si128( /*0x10052c3c3*/
               _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(__src[1] + 16)), (__m128i)xmmword_1012C1B80),
               a6);
        if ( _mm_testz_si128(a7, a7) ) /*0x10052c3c7*/
        {
          if ( v133 == (void *)0x8000000000000000LL ) /*0x10052c615*/
          {
            v73 = v45[4]; /*0x10052c61b*/
            v74 = v45[5]; /*0x10052c61f*/
            if ( v74 >= v73 ) /*0x10052c626*/
            {
LABEL_187:
              __src[0] = 3; /*0x10052ce8c*/
              v133 = (void *)0x8000000000000000LL; /*0x10052ce9e*/
              v12 = __s1; /*0x10052cea2*/
              v43 = v45; /*0x10052cea6*/
              v132 = (size_t)serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8( /*0x10052ceae*/
                               (__int64)v45,
                               (__int64 *)__src);
            }
            else
            {
              v75 = *v46; /*0x10052c62c*/
              v76 = v74 + 1; /*0x10052c62f*/
              v77 = -(__int64)v73; /*0x10052c632*/
              while ( 1 ) /*0x10052c635*/
              {
                v78 = *(unsigned __int8 *)(v75 + v76 - 1); /*0x10052c635*/
                if ( v78 > 0x3A ) /*0x10052c63e*/
                  goto LABEL_207; /*0x10052c63e*/
                v79 = &loc_100002600; /*0x10052c644*/
                if ( !_bittest64((const __int64 *)&v79, v78) ) /*0x10052c64e*/
                  break; /*0x10052c64e*/
                v45[5] = v76; /*0x10052c654*/
                v80 = v77 + v76++ + 1; /*0x10052c658*/
                if ( v80 == 1 ) /*0x10052c664*/
                  goto LABEL_187; /*0x10052c664*/
              }
              if ( v78 != 58 ) /*0x10052c66f*/
              {
LABEL_207:
                __src[0] = 6; /*0x10052d069*/
                v133 = (void *)0x8000000000000000LL; /*0x10052d07b*/
                v12 = __s1; /*0x10052d07f*/
                v43 = v45; /*0x10052d083*/
                v132 = (size_t)serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8( /*0x10052d08b*/
                                 (__int64)v45,
                                 (__int64 *)__src);
                goto LABEL_141; /*0x10052d08f*/
              }
              v45[5] = v76; /*0x10052c675*/
              v43 = v113; /*0x10052c679*/
              _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::h3f41ba97bdf698e6( /*0x10052c683*/
                v113,
                v45,
                *(double *)a6.i64,
                *(double *)a7.i64,
                a8);
              v44 = (size_t *)v113[1]; /*0x10052c68f*/
              v133 = (void *)v113[0]; /*0x10052c696*/
              if ( v113[0] != 0x8000000000000000LL ) /*0x10052c69d*/
              {
                v17 = v113[2]; /*0x10052c6a3*/
                v128 = v113[1]; /*0x10052c6aa*/
                goto LABEL_69; /*0x10052c6ae*/
              }
              v132 = v113[1]; /*0x10052cf88*/
            }
LABEL_141:
            v93 = 1; /*0x10052c974*/
            v94 = 0; /*0x10052c976*/
            v133 = (void *)0x8000000000000000LL; /*0x10052c979*/
            goto LABEL_144; /*0x10052c97d*/
          }
          v106 = 17; /*0x10052d009*/
LABEL_206:
          v113[0] = (size_t)v124; /*0x10052d00e*/
          v113[1] = v106; /*0x10052d01c*/
          __src[0] = (size_t)v113; /*0x10052d02a*/
          __src[1] = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10052d038*/
          v43 = (size_t *)&anon_3e4c14ac1826b92abbb84b981a88c995_5; /*0x10052d03f*/
          v12 = __s1; /*0x10052d04d*/
          v11 = 0x8000000000000000LL; /*0x10052d051*/
          v132 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x10052d060*/
                   &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                   (unsigned __int64)__src);
LABEL_143:
          v93 = 1; /*0x10052c983*/
          v94 = 0; /*0x10052c985*/
LABEL_144:
          if ( ((unsigned __int8)v93 & (((unsigned __int64)__s1 & 0x7FFFFFFFFFFFFFFFLL) != 0)) != 0 ) /*0x10052c998*/
          {
            v43 = (size_t *)v130; /*0x10052c99f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052c9a3*/
          }
          goto LABEL_146; /*0x10052c9a3*/
        }
      }
LABEL_87:
      v55 = v45[4]; /*0x10052c483*/
      v56 = v45[5]; /*0x10052c487*/
      if ( v56 >= v55 ) /*0x10052c48e*/
      {
LABEL_126:
        __src[0] = 3; /*0x10052c776*/
        v12 = __s1; /*0x10052c788*/
        v43 = v45; /*0x10052c78c*/
        v132 = (size_t)serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8( /*0x10052c794*/
                         (__int64)v45,
                         (__int64 *)__src);
        goto LABEL_143; /*0x10052c798*/
      }
      v57 = *v46; /*0x10052c494*/
      v58 = v56 + 1; /*0x10052c497*/
      v59 = -(__int64)v55; /*0x10052c49a*/
      while ( 1 ) /*0x10052c49d*/
      {
        v60 = *(unsigned __int8 *)(v57 + v58 - 1); /*0x10052c49d*/
        if ( v60 > 0x3A ) /*0x10052c4a6*/
          goto LABEL_198; /*0x10052c4a6*/
        v61 = &loc_100002600; /*0x10052c4ac*/
        if ( !_bittest64((const __int64 *)&v61, v60) ) /*0x10052c4b6*/
          break; /*0x10052c4b6*/
        v45[5] = v58; /*0x10052c4bc*/
        v62 = v59 + v58++ + 1; /*0x10052c4c0*/
        if ( v62 == 1 ) /*0x10052c4cc*/
          goto LABEL_126; /*0x10052c4cc*/
      }
      if ( v60 != 58 ) /*0x10052c4d7*/
      {
LABEL_198:
        __src[0] = 6; /*0x10052cf4c*/
        v12 = __s1; /*0x10052cf5e*/
        v43 = v45; /*0x10052cf62*/
        v132 = (size_t)serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8( /*0x10052cf6a*/
                         (__int64)v45,
                         (__int64 *)__src);
        goto LABEL_143; /*0x10052cf6e*/
      }
      v45[5] = v58; /*0x10052c4dd*/
      v43 = v45; /*0x10052c4e1*/
      v63 = serde_json::de::Deserializer$LT$R$GT$::ignore_value::h7eada599325cfc5e(v45); /*0x10052c4e4*/
      if ( !v63 ) /*0x10052c4ec*/
        goto LABEL_70; /*0x10052c4ec*/
LABEL_138:
      v132 = (size_t)v63; /*0x10052c910*/
      goto LABEL_143; /*0x10052c914*/
    }
    a7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(__src[1] + 3)), (__m128i)xmmword_1012C8590); /*0x10052c3e0*/
    a6 = _mm_or_si128(_mm_xor_si128(_mm_loadu_si128((const __m128i *)__src[1]), (__m128i)xmmword_1012C55E0), a7); /*0x10052c3f0*/
    if ( !_mm_testz_si128(a6, a6) ) /*0x10052c3f9*/
      goto LABEL_87; /*0x10052c3f9*/
    if ( __s1 != (void *)0x8000000000000000LL ) /*0x10052c403*/
    {
      v106 = 19; /*0x10052cfdf*/
      v124 = "candidateAccountKeydismissedAt"; /*0x10052cfeb*/
      goto LABEL_206; /*0x10052cff2*/
    }
    v47 = v45[4]; /*0x10052c409*/
    v48 = v45[5]; /*0x10052c40d*/
    if ( v48 >= v47 ) /*0x10052c414*/
      break; /*0x10052c414*/
    v49 = *v46; /*0x10052c41a*/
    v50 = v48 + 1; /*0x10052c41d*/
    v51 = -(__int64)v47; /*0x10052c420*/
    while ( 1 ) /*0x10052c423*/
    {
      v52 = *(unsigned __int8 *)(v49 + v50 - 1); /*0x10052c423*/
      if ( v52 > 0x3A ) /*0x10052c42c*/
        goto LABEL_208; /*0x10052c42c*/
      v53 = &loc_100002600; /*0x10052c432*/
      if ( !_bittest64((const __int64 *)&v53, v52) ) /*0x10052c43c*/
        break; /*0x10052c43c*/
      v45[5] = v50; /*0x10052c446*/
      v54 = v51 + v50++ + 1; /*0x10052c44a*/
      if ( v54 == 1 ) /*0x10052c456*/
        goto LABEL_188; /*0x10052c456*/
    }
    if ( v52 != 58 ) /*0x10052c575*/
    {
LABEL_208:
      __src[0] = 6; /*0x10052d094*/
      v12 = (_QWORD *)0x8000000000000000LL; /*0x10052d0a6*/
      v43 = v45; /*0x10052d0a9*/
      v105 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)v45, (__int64 *)__src); /*0x10052d0ac*/
      goto LABEL_189; /*0x10052d0b1*/
    }
    v45[5] = v50; /*0x10052c57b*/
    v43 = v113; /*0x10052c57f*/
    _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::h3f41ba97bdf698e6( /*0x10052c589*/
      v113,
      v45,
      *(double *)a6.i64,
      *(double *)a7.i64,
      a8);
    v130 = v113[1]; /*0x10052c59c*/
    if ( v113[0] == 0x8000000000000000LL ) /*0x10052c5a3*/
      goto LABEL_190; /*0x10052c5a3*/
    v112 = v113[2]; /*0x10052c5b0*/
    __s1 = (void *)v113[0]; /*0x10052c5b7*/
  }
LABEL_188:
  __src[0] = 3; /*0x10052ceb7*/
  v12 = (_QWORD *)0x8000000000000000LL; /*0x10052cec9*/
  v43 = v45; /*0x10052cecc*/
  v105 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)v45, (__int64 *)__src); /*0x10052cecf*/
LABEL_189:
  v130 = (size_t)v105; /*0x10052ced4*/
LABEL_190:
  v94 = 0; /*0x10052ced8*/
  v132 = v130; /*0x10052cedf*/
LABEL_146:
  v95 = 0x7FFFFFFFFFFFFFFFLL; /*0x10052c9a8*/
  v83 = (size_t *)v133; /*0x10052c9ac*/
  LOBYTE(v95) = v94 | (((unsigned __int64)v133 & 0x7FFFFFFFFFFFFFFFLL) == 0); /*0x10052c9b6*/
  if ( !(_BYTE)v95 ) /*0x10052c9b9*/
  {
    v43 = (size_t *)v128; /*0x10052c9c0*/
    v95 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052c9c4*/
  }
  v96 = (void *)0x8000000000000000LL; /*0x10052c9c9*/
  v97 = __s1; /*0x10052c9cc*/
LABEL_149:
  ++LOBYTE(__dst[9]); /*0x10052c9d0*/
  v113[0] = (size_t)v96; /*0x10052c9d6*/
  v113[1] = v132; /*0x10052c9e1*/
  v113[2] = (size_t)v83; /*0x10052c9e8*/
  v113[3] = (size_t)v97; /*0x10052c9ef*/
  v113[4] = v95; /*0x10052c9f6*/
  v113[5] = (size_t)v44; /*0x10052c9fd*/
  v113[6] = (size_t)v43; /*0x10052ca04*/
  v88 = serde_json::de::Deserializer$LT$R$GT$::end_map::hbe0dd76bfbe93b26(__dst); /*0x10052ca12*/
  __src[6] = v113[6]; /*0x10052ca1e*/
  __src[5] = v113[5]; /*0x10052ca2c*/
  __src[4] = v113[4]; /*0x10052ca3a*/
  __src[3] = v113[3]; /*0x10052ca48*/
  __src[2] = v113[2]; /*0x10052ca56*/
  v21 = v113[0]; /*0x10052ca5d*/
  v90 = v113[1]; /*0x10052ca64*/
  __src[1] = v113[1]; /*0x10052ca6b*/
  __src[0] = v113[0]; /*0x10052ca72*/
  __src[7] = (size_t)v88; /*0x10052ca79*/
  if ( v113[0] != 0x8000000000000000LL ) /*0x10052ca83*/
    goto LABEL_155; /*0x10052ca83*/
  v91 = (void *)__src[1]; /*0x10052ca85*/
  if ( !v88 ) /*0x10052ca8f*/
    goto LABEL_157; /*0x10052ca8f*/
  __s1 = (void *)__src[1]; /*0x10052ca91*/
  v92 = *v88; /*0x10052ca95*/
  if ( *v88 == 1 ) /*0x10052ca9c*/
  {
LABEL_159:
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v88 + 1); /*0x10052cb3b*/
    goto LABEL_160; /*0x10052cb45*/
  }
LABEL_152:
  if ( !v92 && v88[2] ) /*0x10052caae*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052cac4*/
LABEL_160:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052cb4a*/
  v21 = 0x8000000000000000LL; /*0x10052cb5c*/
  v91 = __s1; /*0x10052cb5f*/
LABEL_161:
  __s1 = v91; /*0x10052cb63*/
  if ( v21 == 0x8000000000000000LL ) /*0x10052cb6a*/
    goto LABEL_202; /*0x10052cb6a*/
  v113[6] = v122; /*0x10052cb77*/
  v113[5] = v121; /*0x10052cb85*/
  v113[4] = v120; /*0x10052cb93*/
  v113[3] = v119; /*0x10052cba8*/
  v113[2] = v118; /*0x10052cbaf*/
  v113[0] = v21; /*0x10052cbb6*/
  v113[1] = (size_t)__s1; /*0x10052cbc1*/
  __src[0] = v21; /*0x10052cbc8*/
  __src[1] = (size_t)__s1; /*0x10052cbcf*/
  __src[2] = v118; /*0x10052cbd6*/
  __src[3] = v119; /*0x10052cbdd*/
  __src[4] = v120; /*0x10052cbe4*/
  __src[5] = v121; /*0x10052cbeb*/
  __src[6] = v122; /*0x10052cbf2*/
  if ( __dst[5] >= __dst[4] ) /*0x10052cc0a*/
  {
LABEL_167:
    v12 = nullptr; /*0x10052cc56*/
  }
  else
  {
    v98 = __dst[5] + 1LL; /*0x10052cc16*/
    v99 = &loc_100002600; /*0x10052cc19*/
    while ( 1 ) /*0x10052cc30*/
    {
      v100 = *(unsigned __int8 *)(__dst[3] + v98 - 1); /*0x10052cc30*/
      if ( v100 > 0x20 || !_bittest64((const __int64 *)&v99, v100) ) /*0x10052cc3b*/
        break; /*0x10052cc3b*/
      __dst[5] = v98; /*0x10052cc41*/
      v101 = v98 - __dst[4] + 1; /*0x10052cc48*/
      ++v98; /*0x10052cc4d*/
      if ( v101 == 1 ) /*0x10052cc54*/
        goto LABEL_167; /*0x10052cc54*/
    }
    v118 = 22; /*0x10052cc5d*/
    __s1 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)__dst, (__int64 *)&v118); /*0x10052cc7b*/
    v113[1] = (size_t)__s1; /*0x10052cc7f*/
    v113[0] = 0x8000000000000000LL; /*0x10052cc86*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AutoSwitchSnoozeRecord$GT$::hf18f12a7c95c9be2( /*0x10052cc94*/
      __src,
      &v118,
      v102,
      v103);
LABEL_20:
    LOBYTE(v12) = 1; /*0x10052be7f*/
    v21 = 0x8000000000000000LL; /*0x10052be81*/
  }
LABEL_21:
  if ( __dst[0] ) /*0x10052be8e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052be9c*/
  if ( !(_BYTE)v12 ) /*0x10052bea3*/
  {
    v11 = v113[2]; /*0x10052bec9*/
    v12 = (_QWORD *)v113[3]; /*0x10052bed0*/
    v133 = (void *)v113[4]; /*0x10052bede*/
    v132 = v113[5]; /*0x10052bee9*/
    if ( !v123 ) /*0x10052bef7*/
      goto LABEL_28; /*0x10052bef7*/
    goto LABEL_27; /*0x10052bef7*/
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..repository..AutoSwitchSnoozeRecord$C$serde_json..error..Error$GT$$GT$::hfdbb6a8494e69fd6(v113); /*0x10052beac*/
  v21 = 0x8000000000000000LL; /*0x10052beb1*/
  if ( v123 ) /*0x10052bec5*/
LABEL_27:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052bef9*/
LABEL_28:
  a5 = v127; /*0x10052bf06*/
  if ( v21 == 0x8000000000000000LL ) /*0x10052bf17*/
    goto LABEL_44; /*0x10052bf17*/
  if ( v11 != __n || memcmp(__s1, __s2, __n) || v132 != v126 ) /*0x10052bf4d*/
  {
    if ( v21 ) /*0x10052bfdc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052bfea*/
    if ( v12 ) /*0x10052bff2*/
LABEL_43:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052bff4*/
LABEL_44:
    v24 = v125; /*0x10052c005*/
    v25 = (_BYTE **)a2; /*0x10052c009*/
    v26 = v125 + 176; /*0x10052c00c*/
    v127 = v25; /*0x10052c01a*/
    codexmate_lib::core::repository::Repository::load_pending_auto_switch::he8817545a8701b54(__src, (__int64)v25); /*0x10052c01e*/
    if ( LODWORD(__src[0]) != 2 ) /*0x10052c02a*/
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x10052c043*/
      v9 = v134; /*0x10052c056*/
      if ( __dst[24] == __n /*0x10052c099*/
        && !memcmp((const void *)__dst[23], __s2, __n)
        && __dst[66] == v126
        && !memcmp((const void *)__dst[65], v116, v126) )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v113, v26); /*0x10052c6bd*/
        v9[3] = v113[2]; /*0x10052c6c9*/
        v81 = v113[0]; /*0x10052c6cd*/
        v9[2] = v113[1]; /*0x10052c6db*/
        v9[1] = v81; /*0x10052c6df*/
        *v9 = 10; /*0x10052c6e3*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(__src); /*0x10052c6f1*/
        goto LABEL_60; /*0x10052c6fd*/
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(__src); /*0x10052c0a6*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(&__dst[42]); /*0x10052c0b2*/
    }
    v113[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10052c0bc*/
    LODWORD(v113[1]) = v27; /*0x10052c0c3*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)__src, (__int64)v113, 0, 0); /*0x10052c0db*/
    v28 = __src[0]; /*0x10052c0e0*/
    v29 = __src[1]; /*0x10052c0e7*/
    _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::hf7194f57f3e2a274( /*0x10052c0fc*/
      v113,
      v111,
      v30,
      v31);
    _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::hf7194f57f3e2a274( /*0x10052c10b*/
      __src,
      v24,
      v32,
      v33);
    if ( v28 ) /*0x10052c115*/
      v29 = 0; /*0x10052c115*/
    __dst[84] = v29; /*0x10052c119*/
    memcpy(__dst, v113, 0x150u); /*0x10052c136*/
    memcpy(&__dst[42], __src, 0x150u); /*0x10052c151*/
    __dst[85] = *a5; /*0x10052c15a*/
    v34 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557(v127); /*0x10052c165*/
    v35 = 2; /*0x10052c16a*/
    if ( !v34 ) /*0x10052c173*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10052c179*/
      v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x80u, 1u); /*0x10052c188*/
      if ( !v36 ) /*0x10052c190*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x10052d0c0*/
      v113[0] = 128; /*0x10052c196*/
      v113[1] = v36; /*0x10052c1a1*/
      v113[2] = 0; /*0x10052c1a8*/
      __src[0] = (size_t)v113; /*0x10052c1b3*/
      __src[1] = (size_t)&unk_1012C87C3; /*0x10052c1c1*/
      __src[2] = 2; /*0x10052c1c8*/
      __src[3] = 0; /*0x10052c1d3*/
      LOBYTE(__src[4]) = 0; /*0x10052c1de*/
      v34 = (_UNKNOWN **)codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PendingAutoSwitchPayload$GT$::serialize::hced878242988e65f( /*0x10052c1f3*/
                           __dst,
                           __src);
      if ( v34 ) /*0x10052c1fb*/
      {
        if ( v113[0] ) /*0x10052c207*/
        {
          v37 = v34; /*0x10052c215*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052c218*/
          v34 = v37; /*0x10052c21d*/
        }
      }
      else
      {
        v38 = v113[0]; /*0x10052c222*/
        v34 = (_UNKNOWN **)v113[1]; /*0x10052c229*/
        if ( v113[0] != 0x8000000000000000LL ) /*0x10052c23d*/
        {
          v40 = v127[61]; /*0x10052c284*/
          v41 = v127[62]; /*0x10052c28b*/
          v125 = v113[1]; /*0x10052c292*/
          v42 = std::fs::write::inner::had0c1bee0a2c1e21( /*0x10052c29e*/
                  v40,
                  (size_t)v41,
                  (char *)v113[1],
                  v113[2],
                  *(double *)a6.i64,
                  *(double *)a7.i64,
                  a8);
          if ( v38 ) /*0x10052c2a4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052c2b2*/
          if ( !v42 ) /*0x10052c2ba*/
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(__dst); /*0x10052c74d*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(&__dst[42]); /*0x10052c755*/
            v9 = v134; /*0x10052c75a*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10052c765*/
              (size_t *)v134 + 1,
              v26);
            *v9 = 10; /*0x10052c76a*/
            return v9; /*0x10052c771*/
          }
          v34 = (_UNKNOWN **)v42; /*0x10052c2c0*/
          goto LABEL_59; /*0x10052c2c3*/
        }
      }
      v35 = 3; /*0x10052c23f*/
    }
LABEL_59:
    v9 = v134; /*0x10052c245*/
    *v134 = v35; /*0x10052c249*/
    v9[1] = (__int64)v34; /*0x10052c24c*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(__dst); /*0x10052c257*/
LABEL_60:
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(&__dst[42]); /*0x10052c25f*/
    return v9; /*0x10052c25f*/
  }
  v22 = memcmp(v133, v116, v126); /*0x10052bf6a*/
  if ( v21 ) /*0x10052bf70*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052bf7e*/
  if ( v12 ) /*0x10052bf86*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052bf93*/
  v23 = v22 == 0; /*0x10052bf98*/
  a5 = v127; /*0x10052bf9b*/
  if ( !v23 ) /*0x10052bf9f*/
    goto LABEL_44; /*0x10052bf9f*/
  codexmate_lib::core::repository::Repository::clear_auto_switch_snooze::h26b55fa4377a60a8( /*0x10052bfb6*/
    __dst,
    *(void **)(a2 + 488),
    *(_QWORD *)(a2 + 496));
  if ( LODWORD(__dst[0]) != 10 ) /*0x10052bfc2*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x10052bfcb*/
  v9 = v134; /*0x10052bfd0*/
LABEL_6:
  v9[1] = 0x8000000000000000LL; /*0x10052bc9a*/
  *v9 = 10; /*0x10052bca8*/
  return v9; /*0x10052c267*/
}