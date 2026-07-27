// __ZN13codexmate_lib4core10repository10Repository14switch_account @ 0x100a56ab0 | 基线 same-set
void *__fastcall codexmate_lib::core::repository::Repository::switch_account::h8da8a6a163d67813(
        _QWORD *a1,
        _QWORD *a2,
        void *a3,
        size_t a4)
{
  void *v5; // rbx
  double v6; // xmm0_8
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  const void *v12; // rdi
  void *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  __int64 v20; // rbx
  const void *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r15
  unsigned int v27; // ebx
  _DWORD *v28; // rsi
  _DWORD *v29; // rdi
  __int64 i; // rcx
  __int64 v31; // r15
  __int64 v32; // r8
  unsigned int v33; // edx
  _DWORD *v34; // rsi
  _DWORD *v35; // rdi
  __int64 k; // rcx
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _DWORD *v45; // rdi
  _DWORD *v46; // rsi
  __int64 j; // rcx
  _QWORD *v48; // rax
  _DWORD *v49; // rdi
  _DWORD *v50; // rsi
  __int64 m; // rcx
  _DWORD *v52; // rsi
  _QWORD *v53; // r8
  _DWORD *v54; // rdi
  __int64 n; // rcx
  __int64 v56; // rcx
  unsigned __int64 v57; // rdi
  void *v58; // rbx
  __int64 v59; // rdi
  __int64 v60; // rax
  _QWORD *v61; // rcx
  void *v62; // rax
  void *v63; // rbx
  _QWORD *v64; // rax
  __int64 v65; // rbx
  void *v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rax
  void *v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rdi
  void *v74; // rsi
  __int64 v75; // rax
  _QWORD *v76; // rcx
  __int64 v77; // rsi
  size_t v78; // rdi
  __int64 v79; // rbx
  _QWORD *v80; // rsi
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // r15
  __int64 v86; // rax
  _QWORD *v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // r15
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  _QWORD *v93; // rsi
  __int64 v94; // rax
  _QWORD *v95; // r14
  void *v96; // rax
  void *v97; // r12
  void *v98; // rax
  void *v99; // rax
  void *v100; // r12
  __int64 v101; // rcx
  __int64 v102; // r14
  __int64 v103; // rax
  __int64 v104; // r14
  __int64 v105; // r12
  __int64 v106; // r15
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // r15
  __int64 v110; // rbx
  _QWORD *v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rcx
  _QWORD *v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // [rsp+8h] [rbp-7E8h] BYREF
  _BYTE __dst[144]; // [rsp+10h] [rbp-7E0h] BYREF
  _QWORD v118[11]; // [rsp+A0h] [rbp-750h] BYREF
  _QWORD v119[44]; // [rsp+F8h] [rbp-6F8h] BYREF
  _QWORD v120[44]; // [rsp+258h] [rbp-598h] BYREF
  __int64 v121; // [rsp+3B8h] [rbp-438h]
  __int64 v122; // [rsp+3C0h] [rbp-430h]
  size_t v123; // [rsp+3C8h] [rbp-428h]
  __int64 v124; // [rsp+3D0h] [rbp-420h]
  void *v125; // [rsp+3D8h] [rbp-418h]
  size_t v126; // [rsp+3E0h] [rbp-410h]
  __int16 v127; // [rsp+3E8h] [rbp-408h]
  _QWORD v128[3]; // [rsp+3F0h] [rbp-400h] BYREF
  _QWORD v129[3]; // [rsp+408h] [rbp-3E8h] BYREF
  _QWORD v130[12]; // [rsp+420h] [rbp-3D0h] BYREF
  _QWORD v131[2]; // [rsp+480h] [rbp-370h] BYREF
  _QWORD v132[61]; // [rsp+490h] [rbp-360h] BYREF
  _QWORD v133[6]; // [rsp+678h] [rbp-178h] BYREF
  _QWORD v134[11]; // [rsp+6A8h] [rbp-148h] BYREF
  _QWORD *v135; // [rsp+700h] [rbp-F0h] BYREF
  __int64 (__fastcall *v136)(_QWORD, _QWORD); // [rsp+708h] [rbp-E8h]
  _QWORD *v137; // [rsp+710h] [rbp-E0h]
  __int64 (__fastcall *v138)(_QWORD, _QWORD); // [rsp+718h] [rbp-D8h]
  __int64 v139; // [rsp+720h] [rbp-D0h] BYREF
  _QWORD *v140; // [rsp+728h] [rbp-C8h]
  __int64 v141; // [rsp+730h] [rbp-C0h]
  size_t v142; // [rsp+738h] [rbp-B8h]
  __int64 v143; // [rsp+740h] [rbp-B0h]
  __int64 v144; // [rsp+748h] [rbp-A8h]
  __int64 v145; // [rsp+750h] [rbp-A0h]
  size_t v146; // [rsp+758h] [rbp-98h]
  void *v147; // [rsp+760h] [rbp-90h]
  __int64 v148; // [rsp+768h] [rbp-88h]
  int v149; // [rsp+774h] [rbp-7Ch] BYREF
  void *__s1; // [rsp+778h] [rbp-78h]
  void *__s2; // [rsp+780h] [rbp-70h]
  unsigned __int64 v152; // [rsp+788h] [rbp-68h]
  __int64 v153; // [rsp+790h] [rbp-60h]
  unsigned int v154; // [rsp+798h] [rbp-58h] BYREF
  unsigned int v155; // [rsp+79Ch] [rbp-54h] BYREF
  _QWORD *v156; // [rsp+7A0h] [rbp-50h]
  void *v157; // [rsp+7A8h] [rbp-48h]
  __int64 v158; // [rsp+7B0h] [rbp-40h]
  __int64 v159; // [rsp+7B8h] [rbp-38h]
  void *v160; // [rsp+7C0h] [rbp-30h]

  v5 = a1; /*0x100a56aca*/
  __s2 = a3; /*0x100a56acd*/
  v131[0] = a3; /*0x100a56ad1*/
  v131[1] = a4; /*0x100a56ad8*/
  v6 = codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(v132, a2[28], a2[29]); /*0x100a56af4*/
  v7 = v132[0]; /*0x100a56af9*/
  qmemcpy(v120, &v132[1], 0x58u); /*0x100a56b13*/
  if ( v132[0] != 11 ) /*0x100a56b1a*/
  {
    qmemcpy(a1 + 2, v120, 0x58u); /*0x100a56bc1*/
    a1[1] = v7; /*0x100a56bc4*/
    *a1 = 2; /*0x100a56bc8*/
    return v5; /*0x100a56bcf*/
  }
  v156 = a2; /*0x100a56b20*/
  v160 = a1; /*0x100a56b24*/
  qmemcpy(v118, v120, sizeof(v118)); /*0x100a56b3b*/
  v8 = v118[1]; /*0x100a56b3e*/
  v9 = v118[2]; /*0x100a56b45*/
  if ( !v118[2] ) /*0x100a56b4f*/
  {
LABEL_11:
    v120[0] = v131; /*0x100a56bd4*/
    v120[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a56be9*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v132[1], &unk_1017C8D71, v120); /*0x100a56c05*/
    v16 = v132[1]; /*0x100a56c0a*/
    v17 = v132[2]; /*0x100a56c11*/
    v18 = v132[3]; /*0x100a56c18*/
    v19 = v160; /*0x100a56c26*/
    *((_QWORD *)v160 + 12) = v132[11]; /*0x100a56c2a*/
    v19[11] = v132[10]; /*0x100a56c35*/
    v19[10] = v132[9]; /*0x100a56c40*/
    v19[9] = v132[8]; /*0x100a56c4b*/
    v19[8] = v132[7]; /*0x100a56c56*/
    v19[7] = v132[6]; /*0x100a56c61*/
    v19[6] = v132[5]; /*0x100a56c6c*/
    v19[5] = v132[4]; /*0x100a56c77*/
    v19[1] = 8; /*0x100a56c7b*/
    v19[2] = v16; /*0x100a56c83*/
    v19[3] = v17; /*0x100a56c87*/
    v19[4] = v18; /*0x100a56c8b*/
    *v19 = 2; /*0x100a56c8f*/
LABEL_12:
    if ( !__OFSUB__(-v118[3], 1) && v118[3] ) /*0x100a56ca5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118[4], v118[3], 1); /*0x100a56cb3*/
    if ( v9 ) /*0x100a56cbb*/
    {
      v20 = v8; /*0x100a56cbd*/
      do /*0x100a56cd2*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v20); /*0x100a56cc3*/
        v20 += 424; /*0x100a56cc8*/
        --v9; /*0x100a56ccf*/
      }
      while ( v9 ); /*0x100a56cd2*/
    }
    v5 = v160; /*0x100a56cde*/
    if ( v118[0] ) /*0x100a56ce2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 424LL * v118[0], 8); /*0x100a56cf3*/
    return v5; /*0x100a56cf3*/
  }
  v10 = 424LL * v118[2]; /*0x100a56b55*/
  v11 = 0; /*0x100a56b5c*/
  while ( 1 ) /*0x100a56b6c*/
  {
    if ( *(_QWORD *)(v8 + v11 + 208) == a4 ) /*0x100a56b74*/
    {
      v12 = *(const void **)(v8 + v11 + 200); /*0x100a56b76*/
      v13 = __s2; /*0x100a56b7e*/
      if ( !memcmp(v12, __s2, a4) ) /*0x100a56b85*/
        break; /*0x100a56b85*/
    }
    v11 += 424; /*0x100a56b60*/
    if ( v10 == v11 ) /*0x100a56b6a*/
      goto LABEL_11; /*0x100a56b6a*/
  }
  v14 = *(_QWORD *)(v8 + v11 + 232); /*0x100a56b8e*/
  if ( v14 < 0 ) /*0x100a56b99*/
  {
    v15 = 0; /*0x100a56b9f*/
    goto LABEL_9; /*0x100a56b9f*/
  }
  v22 = *(const void **)(v8 + v11 + 224); /*0x100a56d0d*/
  if ( v14 ) /*0x100a56d15*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v13); /*0x100a56d17*/
    v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1); /*0x100a56d29*/
    v15 = 1; /*0x100a56d2c*/
    if ( !v23 ) /*0x100a56d34*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15, v14); /*0x100a56ba1*/
  }
  else
  {
    v23 = 1; /*0x100a56d3b*/
  }
  memcpy((void *)v23, v22, v14); /*0x100a56d49*/
  v24 = v156[31]; /*0x100a56d52*/
  v25 = v156[32]; /*0x100a56d59*/
  v145 = v23; /*0x100a56d67*/
  codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048( /*0x100a56d74*/
    v132,
    (void *)v23,
    v14,
    v24,
    v25);
  if ( LODWORD(v132[0]) != 11 ) /*0x100a56d80*/
  {
    v43 = v160; /*0x100a56f6f*/
    qmemcpy((char *)v160 + 8, v132, 0x60u); /*0x100a56f83*/
    *v43 = 2; /*0x100a56f86*/
    goto LABEL_77; /*0x100a56f8d*/
  }
  codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed((__int64)v119, v145, v14); /*0x100a56d97*/
  v157 = (void *)v119[1]; /*0x100a56dbe*/
  v158 = v14; /*0x100a56dc2*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x100a56dc6*/
    (__int64)v132,
    v119[1],
    v119[2],
    (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_56,
    18);
  v26 = v132[0]; /*0x100a56dcb*/
  v27 = v132[1]; /*0x100a56dd2*/
  if ( v132[0] != 11 ) /*0x100a56ddc*/
  {
    v28 = (_DWORD *)&v132[1] + 1; /*0x100a56dde*/
    v29 = v120; /*0x100a56de5*/
    for ( i = 21; i; --i ) /*0x100a56dec*/
      *v29++ = *v28++; /*0x100a56df1*/
  }
  if ( v119[0] ) /*0x100a56dfd*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v119[0], 1); /*0x100a56e08*/
  if ( (_DWORD)v26 != 11 ) /*0x100a56e11*/
  {
    v44 = v160; /*0x100a56f92*/
    v45 = (char *)v160 + 20; /*0x100a56f96*/
    v46 = v120; /*0x100a56f9a*/
    for ( j = 21; j; --j ) /*0x100a56fa1*/
      *v45++ = *v46++; /*0x100a56fa6*/
    v44[1] = v26; /*0x100a56fa8*/
    *((_DWORD *)v44 + 4) = v27; /*0x100a56fac*/
    *v44 = 2; /*0x100a56faf*/
    v14 = v158; /*0x100a56fb6*/
LABEL_77:
    if ( v14 ) /*0x100a57290*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v14, 1); /*0x100a572a5*/
    goto LABEL_12; /*0x100a572aa*/
  }
  v155 = v27; /*0x100a56e17*/
  v31 = v156[25]; /*0x100a56e1e*/
  v159 = v156[26]; /*0x100a56e43*/
  std::path::Path::_join::hb1a495d4f06b13b8(v119, v31, v159, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15); /*0x100a56e47*/
  v157 = (void *)v119[1]; /*0x100a56e6e*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x100a56e72*/
    (__int64)v132,
    v119[1],
    v119[2],
    (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
    9);
  v32 = v132[0]; /*0x100a56e77*/
  v33 = v132[1]; /*0x100a56e7e*/
  if ( v132[0] != 11 ) /*0x100a56e88*/
  {
    v34 = (_DWORD *)&v132[1] + 1; /*0x100a56e8a*/
    v35 = v120; /*0x100a56e91*/
    for ( k = 21; k; --k ) /*0x100a56e98*/
      *v35++ = *v34++; /*0x100a56e9d*/
  }
  if ( v119[0] ) /*0x100a56ea9*/
  {
    LODWORD(v152) = v33; /*0x100a56eab*/
    v37 = v32; /*0x100a56eb7*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v119[0], 1); /*0x100a56eba*/
    v32 = v37; /*0x100a56ebf*/
    v33 = v152; /*0x100a56ec2*/
  }
  if ( (_DWORD)v32 != 11 ) /*0x100a56ec9*/
  {
    v48 = v160; /*0x100a56fbf*/
    v49 = (char *)v160 + 20; /*0x100a56fc3*/
    v50 = v120; /*0x100a56fc7*/
    for ( m = 21; m; --m ) /*0x100a56fce*/
      *v49++ = *v50++; /*0x100a56fd3*/
    v48[1] = v32; /*0x100a56fd5*/
    *((_DWORD *)v48 + 4) = v33; /*0x100a56fd9*/
    *v48 = 2; /*0x100a56fdc*/
    v14 = v158; /*0x100a56fe3*/
    goto LABEL_76; /*0x100a56fe7*/
  }
  v154 = v33; /*0x100a56ecf*/
  v38 = v31; /*0x100a56ed9*/
  v14 = v158; /*0x100a56ee0*/
  codexmate_lib::core::account_coordination::AccountDomainLock::acquire::h3ce1b7e61ad69c28((__int64)v132, v38, v159); /*0x100a56ee4*/
  v39 = v132[0]; /*0x100a56ee9*/
  v40 = v132[1]; /*0x100a56ef0*/
  if ( v132[0] != 11 ) /*0x100a56efa*/
  {
    v52 = (_DWORD *)&v132[1] + 1; /*0x100a56fec*/
    v53 = v160; /*0x100a56ff3*/
    v54 = (char *)v160 + 20; /*0x100a56ff7*/
    for ( n = 21; n; --n ) /*0x100a56ffb*/
      *v54++ = *v52++; /*0x100a57000*/
    v53[1] = v39; /*0x100a57002*/
    *((_DWORD *)v53 + 4) = v40; /*0x100a57006*/
    *v53 = 2; /*0x100a5700a*/
    goto LABEL_75; /*0x100a57011*/
  }
  v149 = v132[1]; /*0x100a56f00*/
  codexmate_lib::core::repository::Repository::load_account_switch_target::h4d1e127205729df9(v132, v156, __s2, a4, v6); /*0x100a56f15*/
  qmemcpy(v120, v132, 0x58u); /*0x100a56f34*/
  v41 = v132[11]; /*0x100a56f37*/
  if ( v132[12] == 2 ) /*0x100a56f42*/
  {
    v42 = v160; /*0x100a56f48*/
    qmemcpy((char *)v160 + 8, v120, 0x58u); /*0x100a56f5c*/
    v42[12] = v41; /*0x100a56f5f*/
    *v42 = 2; /*0x100a56f63*/
LABEL_74:
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7( /*0x100a57262*/
      &v149,
      v6);
LABEL_75:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v154); /*0x100a5726b*/
    close_NOCANCEL(v154); /*0x100a57277*/
LABEL_76:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v155); /*0x100a5727c*/
    close_NOCANCEL(v155); /*0x100a57288*/
    goto LABEL_77; /*0x100a57288*/
  }
  v152 = v132[11]; /*0x100a57016*/
  memcpy(__dst, &v132[13], sizeof(__dst)); /*0x100a5702d*/
  qmemcpy(v134, v120, sizeof(v134)); /*0x100a57045*/
  v56 = 0; /*0x100a57045*/
  v116 = v132[12]; /*0x100a57048*/
  if ( __OFSUB__(0, v134[3]) ) /*0x100a57051*/
  {
    v159 = 0x8000000000000000LL; /*0x100a57064*/
    v57 = v152; /*0x100a57068*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v132, &v134[3]); /*0x100a5707c*/
    v57 = v152; /*0x100a57081*/
    v159 = v132[0]; /*0x100a5708c*/
    __s1 = (void *)v132[1]; /*0x100a57097*/
    v142 = v132[2]; /*0x100a570a2*/
  }
  if ( v57 >= v134[2] ) /*0x100a570b3*/
    core::panicking::panic_bounds_check::h56740b1198b22635(v57, v134[2], &off_101973D58, v56); /*0x100a57f9f*/
  v147 = *(void **)(v134[1] + 424 * v57 + 224); /*0x100a570cf*/
  v143 = 424 * v57; /*0x100a570d6*/
  v58 = *(void **)(v134[1] + 424 * v57 + 232); /*0x100a570f7*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v132, v58, 0, 1, 1); /*0x100a570fc*/
  v153 = v132[1]; /*0x100a57108*/
  if ( LOBYTE(v132[0]) ) /*0x100a57113*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v153, v132[2]); /*0x100a57f3a*/
  v157 = (void *)v132[2]; /*0x100a57120*/
  memcpy((void *)v132[2], v147, (size_t)v58); /*0x100a5712e*/
  v59 = (__int64)v157; /*0x100a57133*/
  v147 = v58; /*0x100a57137*/
  if ( !(unsigned __int8)_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff( /*0x100a5715c*/
                           v157,
                           v58,
                           v145,
                           v14) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59, v58); /*0x100a571b6*/
    v62 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(74, 1); /*0x100a571c5*/
    if ( !v62 ) /*0x100a571cd*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 74); /*0x100a57fb0*/
    v63 = v62; /*0x100a571d3*/
    memcpy( /*0x100a571e5*/
      v62,
      "Account snapshot location changed while the switch was acquiring ownership, codexmate_lib::core::repositoryAccount"
      " removal completed; private cleanup will retry on next startup.",
      0x4Au);
    v64 = v160; /*0x100a571ea*/
    *((_QWORD *)v160 + 1) = 10; /*0x100a571ee*/
    v64[2] = 74; /*0x100a571f6*/
    v64[3] = v63; /*0x100a571fe*/
    v64[4] = 74; /*0x100a57202*/
    *v64 = 2; /*0x100a5720a*/
    goto LABEL_68; /*0x100a5720a*/
  }
  if ( v142 == a4 && v159 != 0x8000000000000000LL && !memcmp(__s1, __s2, a4) ) /*0x100a57185*/
  {
    codexmate_lib::core::repository::Repository::live_account_identity::h503e6c01c902a0b6(v132, v156[4], v156[5]); /*0x100a5745f*/
    v77 = v132[0]; /*0x100a57464*/
    v78 = v132[1]; /*0x100a5746b*/
    if ( v132[0] == 0x8000000000000000LL || v132[2] != a4 ) /*0x100a57482*/
    {
      if ( !(2LL * v132[0]) ) /*0x100a57556*/
        goto LABEL_64; /*0x100a57556*/
    }
    else
    {
      v79 = v132[0]; /*0x100a57488*/
      v146 = v132[1]; /*0x100a5748b*/
      if ( !memcmp((const void *)v132[1], __s2, a4) ) /*0x100a574a0*/
      {
        if ( v79 ) /*0x100a57bf0*/
          v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, v79, 1); /*0x100a57c01*/
        codexmate_lib::core::quota_store::load_or_default::h211ac6fdb1941574(v130); /*0x100a57c1f*/
        v107 = codexmate_lib::core::quota_store::find_item::h07979f80f47473f9((__int64)v130, __s2, a4); /*0x100a57c32*/
        if ( v152 >= v134[2] ) /*0x100a57c42*/
          core::panicking::panic_bounds_check::h56740b1198b22635(v152, v134[2], &off_101973DA0, v108); /*0x100a57fd4*/
        codexmate_lib::core::repository::Repository::make_account_summary_from_item::hf4d00394602808d2( /*0x100a57c6c*/
          v119,
          v134[1] + v143,
          &v116,
          1,
          v107,
          v6);
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v132, a4, 0, 1, 1); /*0x100a57c88*/
        v109 = v132[1]; /*0x100a57c8d*/
        if ( LOBYTE(v132[0]) ) /*0x100a57c9b*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v132[1], v132[2]); /*0x100a57f66*/
        v110 = v132[2]; /*0x100a57ca1*/
        memcpy((void *)v132[2], __s2, a4); /*0x100a57cb2*/
        memcpy(v120, v119, sizeof(v120)); /*0x100a57cca*/
        v124 = v159; /*0x100a57cd3*/
        v125 = __s1; /*0x100a57cde*/
        v126 = a4; /*0x100a57ce5*/
        v121 = v109; /*0x100a57cec*/
        v122 = v110; /*0x100a57cf3*/
        v123 = a4; /*0x100a57cfa*/
        v127 = 0; /*0x100a57d01*/
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h6ed80eeb2754cda9(v132, v120); /*0x100a57d18*/
        memcpy(v160, v132, 0x1E8u); /*0x100a57d2d*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..quota_store..QuotaStoreFile$GT$::h104b0de372c409ca(v130); /*0x100a57d39*/
        v14 = v158; /*0x100a57d43*/
        if ( !v153 ) /*0x100a57d47*/
          goto LABEL_73; /*0x100a57d47*/
        v66 = v157; /*0x100a57d52*/
        v67 = v153; /*0x100a57d56*/
        goto LABEL_72; /*0x100a57d5a*/
      }
      v77 = v79; /*0x100a574a6*/
      v78 = v146; /*0x100a574ac*/
      if ( !v79 ) /*0x100a574b3*/
        goto LABEL_64; /*0x100a574b3*/
    }
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v77, 1); /*0x100a57561*/
  }
LABEL_64:
  v60 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(v156); /*0x100a5718b*/
  if ( v60 ) /*0x100a57197*/
  {
    v61 = v160; /*0x100a5719d*/
    *((_QWORD *)v160 + 1) = 2; /*0x100a571a1*/
    v61[2] = v60; /*0x100a571a9*/
    *v61 = 2; /*0x100a571ad*/
LABEL_68:
    v65 = v159; /*0x100a57211*/
    if ( v153 ) /*0x100a5721c*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v153, 1); /*0x100a57227*/
    if ( !(2 * v65) ) /*0x100a57237*/
      goto LABEL_73; /*0x100a57237*/
    v66 = __s1; /*0x100a5723e*/
    v67 = v65; /*0x100a57242*/
LABEL_72:
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v67, 1); /*0x100a57245*/
LABEL_73:
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v116); /*0x100a5724a*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v134); /*0x100a5725d*/
    goto LABEL_74; /*0x100a5725d*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4ccd5ea377d1fd44(v119, v156 + 3); /*0x100a572be*/
  v130[2] = v119[2]; /*0x100a572ca*/
  v130[1] = v119[1]; /*0x100a572df*/
  v130[0] = v119[0]; /*0x100a572e6*/
  codexmate_lib::core::repository::ExactFileState::capture::haab4ba4b40674644(v132, v130); /*0x100a572fb*/
  v68 = v132[0]; /*0x100a57300*/
  v120[0] = v132[1]; /*0x100a5730e*/
  v120[1] = v132[2]; /*0x100a5731c*/
  v120[2] = v132[3]; /*0x100a5732a*/
  v120[3] = v132[4]; /*0x100a57338*/
  v120[4] = v132[5]; /*0x100a57346*/
  v120[5] = v132[6]; /*0x100a57354*/
  if ( v132[0] != 11 ) /*0x100a5735f*/
  {
    v80 = v160; /*0x100a574c5*/
    *((_QWORD *)v160 + 12) = v132[11]; /*0x100a574c9*/
    v80[11] = v132[10]; /*0x100a574d4*/
    v80[10] = v132[9]; /*0x100a574df*/
    v81 = v132[7]; /*0x100a574e3*/
    v80[9] = v132[8]; /*0x100a574f1*/
    v80[8] = v81; /*0x100a574f5*/
    v80[7] = v120[5]; /*0x100a57500*/
    v80[6] = v120[4]; /*0x100a5750b*/
    v80[5] = v120[3]; /*0x100a57516*/
    v80[4] = v120[2]; /*0x100a57521*/
    v82 = v120[0]; /*0x100a57525*/
    v80[3] = v120[1]; /*0x100a57533*/
    v80[2] = v82; /*0x100a57537*/
    v80[1] = v68; /*0x100a5753b*/
    *v80 = 2; /*0x100a5753f*/
    goto LABEL_68; /*0x100a57546*/
  }
  v133[0] = v120[0]; /*0x100a57373*/
  v133[1] = v120[1]; /*0x100a5737a*/
  v133[2] = v120[2]; /*0x100a57388*/
  v133[3] = v120[3]; /*0x100a57396*/
  v133[4] = v120[4]; /*0x100a573a4*/
  v133[5] = v120[5]; /*0x100a573b2*/
  v69 = (void *)v156[4]; /*0x100a573bd*/
  v146 = v156[5]; /*0x100a573cf*/
  std::sys::fs::metadata::h32fa16d3052ea535(v132, v69, v146); /*0x100a573d6*/
  if ( LOBYTE(v132[0]) ) /*0x100a573e2*/
  {
    v120[1] = v132[1]; /*0x100a573f6*/
    v120[0] = 1; /*0x100a573fd*/
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v120[1], v69, v70, v71, v72); /*0x100a57408*/
  }
  else
  {
    v119[0] = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)v132, (__int64)v69); /*0x100a57570*/
    v120[0] = v119; /*0x100a5757e*/
    v120[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x100a5758c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v132, &unk_1017C8CD1, v120); /*0x100a575a8*/
    v148 = v132[0]; /*0x100a575b4*/
    v83 = v156[34]; /*0x100a575cd*/
    v84 = v156[35]; /*0x100a575d4*/
    v144 = v132[1]; /*0x100a575e2*/
    std::path::Path::_join::hb1a495d4f06b13b8(v132, v83, v84, v132[1], v132[2]); /*0x100a575e9*/
    v85 = v132[1]; /*0x100a575ee*/
    v86 = codexmate_lib::core::relay::atomic_write::copy_atomic_private::hbdb45d0e44575629( /*0x100a57609*/
            (__int64)v69,
            v146,
            (void *)v132[1],
            v132[2]);
    if ( v86 ) /*0x100a57611*/
    {
      v87 = v160; /*0x100a57617*/
      *((_QWORD *)v160 + 1) = 2; /*0x100a5761b*/
      v87[2] = v86; /*0x100a57623*/
      *v87 = 2; /*0x100a57627*/
      if ( v132[0] ) /*0x100a57638*/
        v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v132[0], 1); /*0x100a57642*/
      v14 = v158; /*0x100a5764f*/
      if ( v148 ) /*0x100a57653*/
        v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144, v148, 1); /*0x100a5766c*/
      goto LABEL_129; /*0x100a57671*/
    }
    if ( v132[0] ) /*0x100a57d69*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v132[0], 1); /*0x100a57d73*/
    v14 = v158; /*0x100a57d80*/
    if ( v148 ) /*0x100a57d84*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144, v148, 1); /*0x100a57d9d*/
  }
  v73 = (__int64)v157; /*0x100a5740d*/
  v74 = v147; /*0x100a57411*/
  v75 = codexmate_lib::core::relay::atomic_write::copy_atomic_private::hbdb45d0e44575629( /*0x100a57422*/
          (__int64)v157,
          (__int64)v147,
          v69,
          v146);
  if ( v75 ) /*0x100a5742a*/
  {
    v76 = v160; /*0x100a57430*/
    *((_QWORD *)v160 + 1) = 2; /*0x100a57434*/
    v76[2] = v75; /*0x100a5743c*/
    *v76 = 2; /*0x100a57440*/
LABEL_129:
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..ExactFileState$GT$::h739e9242b33bba52(v133); /*0x100a57f1e*/
    goto LABEL_68; /*0x100a57f2a*/
  }
  v88 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6(v73, (__int64)v74); /*0x100a5767b*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v132, a4, 0, 1, 1); /*0x100a57695*/
  v147 = (void *)v132[1]; /*0x100a576a1*/
  if ( LODWORD(v132[0]) == 1 ) /*0x100a576af*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v147, v132[2]); /*0x100a57f52*/
  v89 = v132[2]; /*0x100a576bc*/
  memcpy((void *)v132[2], __s2, a4); /*0x100a576c6*/
  if ( v134[3] != 0x8000000000000000LL && v134[3] ) /*0x100a576e4*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134[4], v134[3], 1); /*0x100a576f2*/
  v134[3] = v147; /*0x100a576fe*/
  v134[4] = v89; /*0x100a57705*/
  v134[5] = a4; /*0x100a5770c*/
  v134[9] = v88; /*0x100a57713*/
  if ( v152 >= v134[2] ) /*0x100a57725*/
    core::panicking::panic_bounds_check::h56740b1198b22635(v152, v134[2], &off_101973D70, v90); /*0x100a57fc2*/
  v91 = v134[1]; /*0x100a5772b*/
  v92 = v143; /*0x100a57732*/
  *(_QWORD *)(v134[1] + v143 + 80) = 1; /*0x100a57739*/
  *(_QWORD *)(v91 + v92 + 88) = v88; /*0x100a57742*/
  v93 = v156; /*0x100a57755*/
  codexmate_lib::core::repository::Repository::persist_registry::he46753ae51d51c8f(v130, v156, v134, 1); /*0x100a5775e*/
  if ( LODWORD(v130[0]) != 11 ) /*0x100a5776a*/
  {
    qmemcpy(v119, v130, 0x60u); /*0x100a57dbd*/
    codexmate_lib::core::repository::ExactFileState::restore::ha530469f23048e2f(v120, (__int64)v133); /*0x100a57dce*/
    if ( LODWORD(v120[0]) == 11 ) /*0x100a57dda*/
    {
      v111 = v160; /*0x100a57de7*/
      *((_QWORD *)v160 + 1) = v119[0]; /*0x100a57deb*/
      v112 = v119[2]; /*0x100a57df6*/
      v111[2] = v119[1]; /*0x100a57dfd*/
      v111[3] = v112; /*0x100a57e01*/
      v111[4] = v119[3]; /*0x100a57e0c*/
      v113 = v119[5]; /*0x100a57e17*/
      v111[5] = v119[4]; /*0x100a57e1e*/
      v111[6] = v113; /*0x100a57e22*/
      v111[7] = v119[6]; /*0x100a57e2d*/
      v111[8] = v119[7]; /*0x100a57e38*/
      v111[9] = v119[8]; /*0x100a57e43*/
      v111[10] = v119[9]; /*0x100a57e4e*/
      v111[11] = v119[10]; /*0x100a57e59*/
      v111[12] = v119[11]; /*0x100a57e64*/
      *v111 = 2; /*0x100a57e68*/
      v14 = v158; /*0x100a57e6f*/
    }
    else
    {
      qmemcpy(v132, v120, 0x60u); /*0x100a57e8e*/
      v135 = v119; /*0x100a57e91*/
      v136 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a57e9f*/
      v137 = v132; /*0x100a57ea6*/
      v138 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a57ead*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v129, &unk_1017C8CDF, &v135); /*0x100a57ec9*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v132); /*0x100a57ed5*/
      v114 = v160; /*0x100a57eda*/
      *((_QWORD *)v160 + 1) = 10; /*0x100a57ede*/
      v115 = v129[1]; /*0x100a57eed*/
      v114[2] = v129[0]; /*0x100a57ef4*/
      v114[3] = v115; /*0x100a57ef8*/
      v114[4] = v129[2]; /*0x100a57f03*/
      *v114 = 2; /*0x100a57f07*/
      v14 = v158; /*0x100a57f15*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v119); /*0x100a57f19*/
    }
    goto LABEL_129; /*0x100a57e73*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v130, v93); /*0x100a57770*/
  v94 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8); /*0x100a5777f*/
  if ( !v94 ) /*0x100a57787*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x100a57f7a*/
  v95 = (_QWORD *)v94; /*0x100a5778d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(48, 8); /*0x100a57790*/
  v96 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x100a5779f*/
  if ( !v96 ) /*0x100a577a7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x100a57fe5*/
  v97 = v96; /*0x100a577ad*/
  qmemcpy(v96, "CLIENT_RESTART_RECOMMENDED", 26); /*0x100a577d8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(26, 1); /*0x100a577e4*/
  v98 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(63, 1); /*0x100a577f3*/
  if ( !v98 ) /*0x100a577fb*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 63); /*0x100a57ff6*/
  qmemcpy(v98, "Restart Codex clients for the new auth snapshot to take effect.", 63); /*0x100a5786d*/
  *v95 = 26; /*0x100a57870*/
  v95[1] = v97; /*0x100a57877*/
  v95[2] = 26; /*0x100a5787b*/
  v95[3] = 63; /*0x100a57883*/
  v95[4] = v98; /*0x100a5788b*/
  v95[5] = 63; /*0x100a5788f*/
  v139 = 1; /*0x100a57897*/
  v140 = v95; /*0x100a578a2*/
  v141 = 1; /*0x100a578a9*/
  codexmate_lib::core::repository::Repository::clear_auto_switch_transient_state::h6b182342bc1d4f08(v120, v156); /*0x100a578bf*/
  if ( LODWORD(v120[0]) != 11 ) /*0x100a578cb*/
  {
    qmemcpy(v132, v120, 0x60u); /*0x100a578e7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v132[12], &v120[12]); /*0x100a578ea*/
    v99 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x100a578f9*/
    if ( !v99 ) /*0x100a57901*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x100a58019*/
    v100 = v99; /*0x100a57907*/
    qmemcpy(v99, "AUTO_SWITCH_TRANSIENT_CLEANUP_FAILED", 36); /*0x100a57941*/
    v119[0] = v132; /*0x100a5794e*/
    v119[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a5795c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v128, &unk_1017C8D2A, v119); /*0x100a57978*/
    v119[0] = 36; /*0x100a5797d*/
    v119[1] = v100; /*0x100a57988*/
    v119[2] = 36; /*0x100a5798f*/
    v119[3] = v128[0]; /*0x100a579a8*/
    v119[4] = v128[1]; /*0x100a579af*/
    v119[5] = v128[2]; /*0x100a579bd*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hbc0858bc68482e3a(&v139, v119); /*0x100a579d2*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v132); /*0x100a579de*/
  }
  codexmate_lib::core::quota_store::load_or_default::h211ac6fdb1941574(v130); /*0x100a579fc*/
  if ( v152 >= v134[2] ) /*0x100a57a0c*/
    core::panicking::panic_bounds_check::h56740b1198b22635(v152, v134[2], &off_101973D88, v101); /*0x100a58008*/
  v102 = v134[1] + v143; /*0x100a57a20*/
  v103 = codexmate_lib::core::quota_store::find_item::h07979f80f47473f9( /*0x100a57a3b*/
           (__int64)v130,
           *(const void **)(v134[1] + v143 + 200),
           *(_QWORD *)(v134[1] + v143 + 208));
  codexmate_lib::core::repository::Repository::make_account_summary_from_item::hf4d00394602808d2( /*0x100a57a59*/
    v119,
    v102,
    &v116,
    1,
    v103,
    v6);
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v132, a4, 0, 1, 1); /*0x100a57a75*/
  v104 = v132[1]; /*0x100a57a7a*/
  if ( LOBYTE(v132[0]) ) /*0x100a57a88*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v132[1], v132[2]); /*0x100a57f8e*/
  v105 = v132[2]; /*0x100a57a8e*/
  memcpy((void *)v132[2], __s2, a4); /*0x100a57a9f*/
  memcpy(v120, v119, sizeof(v120)); /*0x100a57aba*/
  v124 = v159; /*0x100a57ac3*/
  v125 = __s1; /*0x100a57ace*/
  v126 = v142; /*0x100a57adc*/
  v121 = v104; /*0x100a57ae3*/
  v122 = v105; /*0x100a57aea*/
  v123 = a4; /*0x100a57af1*/
  v127 = 257; /*0x100a57af8*/
  v137 = (_QWORD *)v141; /*0x100a57b08*/
  v136 = (__int64 (__fastcall *)(_QWORD, _QWORD))v140; /*0x100a57b1d*/
  v135 = (_QWORD *)v139; /*0x100a57b24*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h509b2971c0829fba(v132, v120, (__int64 *)&v135); /*0x100a57b3c*/
  memcpy(v160, v132, 0x1E8u); /*0x100a57b51*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..quota_store..QuotaStoreFile$GT$::h104b0de372c409ca(v130); /*0x100a57b5d*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..ExactFileState$GT$::h739e9242b33bba52(v133); /*0x100a57b69*/
  if ( v153 ) /*0x100a57b73*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v153, 1); /*0x100a57b82*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v116); /*0x100a57b8e*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v134); /*0x100a57b9a*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v149, v6); /*0x100a57ba3*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v154, v6); /*0x100a57bac*/
  v106 = v158; /*0x100a57bb5*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v155, v6); /*0x100a57bb9*/
  if ( v106 ) /*0x100a57bc1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v158, 1); /*0x100a57bd3*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v118); /*0x100a57bdf*/
  return v160; /*0x100a56cfb*/
}