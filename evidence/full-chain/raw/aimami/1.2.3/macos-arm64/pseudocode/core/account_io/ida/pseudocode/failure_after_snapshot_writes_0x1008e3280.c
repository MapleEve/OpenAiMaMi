// __ZN13codexmate_lib4core10account_io29failure_after_snapshot_writes @ 0x1008e3280
// 1.2.3 NEW-delta | codexmate_lib::core::account_io::failure_after_snapshot_writes | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void __fastcall codexmate_lib::core::account_io::failure_after_snapshot_writes::he75f109669290c4e(
        void *a1,
        size_t a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  __int64 v7; // r13
  __int64 v8; // r12
  void (__fastcall **v9)(__int64); // rbx
  __int64 v10; // r14
  void *v11; // r15
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // r15
  unsigned int *v15; // r15
  int v16; // r13d
  void (__fastcall **v17)(__int64); // r15
  unsigned int *v18; // r14
  const void *v19; // rbx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r12
  size_t v28; // r14
  __int64 v29; // r12
  __int64 v30; // r14
  size_t v31; // r14
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // r14
  void (__fastcall *v35)(__int64); // rax
  __int64 v36; // rax
  __int64 v37; // r12
  const void *v38; // rsi
  bool v39; // zf
  void (__fastcall *v40)(__int64); // rsi
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r14
  void (__fastcall *v46)(__int64); // rsi
  __int64 v47; // rsi
  __int64 v48; // r14
  __int64 v49; // rsi
  unsigned int *v50; // r14
  _QWORD *v51; // r14
  __int64 v52; // rax
  __int64 v53; // r12
  __int64 v54; // rdi
  __int64 v55; // r15
  __int64 v56; // r15
  _BYTE v57[96]; // [rsp+0h] [rbp-430h] BYREF
  _QWORD v58[12]; // [rsp+60h] [rbp-3D0h] BYREF
  _QWORD v59[3]; // [rsp+C0h] [rbp-370h] BYREF
  _QWORD v60[3]; // [rsp+D8h] [rbp-358h] BYREF
  _QWORD v61[3]; // [rsp+F0h] [rbp-340h] BYREF
  _DWORD v62[2]; // [rsp+108h] [rbp-328h] BYREF
  __int64 v63; // [rsp+110h] [rbp-320h]
  void (__fastcall **v64)(__int64); // [rsp+118h] [rbp-318h]
  _QWORD v65[12]; // [rsp+120h] [rbp-310h] BYREF
  _QWORD v66[2]; // [rsp+180h] [rbp-2B0h] BYREF
  _QWORD __src[22]; // [rsp+190h] [rbp-2A0h] BYREF
  __int64 v68; // [rsp+240h] [rbp-1F0h]
  __int64 v69; // [rsp+248h] [rbp-1E8h]
  __int64 v70; // [rsp+250h] [rbp-1E0h]
  _QWORD *v71; // [rsp+258h] [rbp-1D8h]
  __int64 v72; // [rsp+260h] [rbp-1D0h]
  __int64 v73; // [rsp+268h] [rbp-1C8h] BYREF
  __int64 v74[18]; // [rsp+270h] [rbp-1C0h] BYREF
  _QWORD __dst[22]; // [rsp+300h] [rbp-130h] BYREF
  __int64 v76; // [rsp+3B0h] [rbp-80h]
  __int64 v77; // [rsp+3B8h] [rbp-78h]
  void *__s1; // [rsp+3C0h] [rbp-70h]
  __int64 v79; // [rsp+3C8h] [rbp-68h]
  size_t __n; // [rsp+3D0h] [rbp-60h]
  unsigned int *v81; // [rsp+3D8h] [rbp-58h]
  __int64 v82; // [rsp+3E0h] [rbp-50h]
  void *v83; // [rsp+3E8h] [rbp-48h]
  __int64 v84; // [rsp+3F0h] [rbp-40h]
  __int64 v85; // [rsp+3F8h] [rbp-38h]
  unsigned int v86; // [rsp+400h] [rbp-30h] BYREF
  _DWORD v87[11]; // [rsp+404h] [rbp-2Ch] BYREF

  v66[0] = a5; /*0x1008e329e*/
  v66[1] = a6; /*0x1008e32a5*/
  if ( !a4 ) /*0x1008e32af*/
  {
    qmemcpy(a1, a7, 0x60u); /*0x1008e33aa*/
    return; /*0x1008e33aa*/
  }
  v72 = a4; /*0x1008e32b5*/
  v7 = 96 * a4; /*0x1008e32c3*/
  v77 = a3; /*0x1008e32d4*/
  codexmate_lib::core::account_coordination::acquire_snapshot_locks::hb37ff38d1b6d0a13((__int64)__dst); /*0x1008e32d8*/
  v8 = __dst[0]; /*0x1008e32dd*/
  v9 = (void (__fastcall **)(__int64))__dst[3]; /*0x1008e32f7*/
  v71 = a1; /*0x1008e3302*/
  if ( __dst[0] != 11 ) /*0x1008e3309*/
  {
    LODWORD(v82) = HIDWORD(__dst[1]); /*0x1008e33b5*/
    LODWORD(v85) = __dst[1]; /*0x1008e33b5*/
    v74[6] = __dst[11]; /*0x1008e33bf*/
    v74[5] = __dst[10]; /*0x1008e33cd*/
    v74[4] = __dst[9]; /*0x1008e33db*/
    v74[3] = __dst[8]; /*0x1008e33e9*/
    v74[2] = __dst[7]; /*0x1008e33f7*/
    v74[1] = __dst[6]; /*0x1008e3405*/
    v74[0] = __dst[5]; /*0x1008e341a*/
    v73 = __dst[4]; /*0x1008e3421*/
    v7 = __dst[2]; /*0x1008e3428*/
LABEL_29:
    v17 = v9; /*0x1008e37c2*/
LABEL_30:
    __dst[0] = v8; /*0x1008e37c5*/
    __dst[1] = __PAIR64__(v82, v85); /*0x1008e37cf*/
    __dst[2] = v7; /*0x1008e37de*/
    __dst[3] = v17; /*0x1008e37e5*/
    __dst[4] = v73; /*0x1008e37fa*/
    __dst[5] = v74[0]; /*0x1008e3801*/
    __dst[6] = v74[1]; /*0x1008e380f*/
    __dst[7] = v74[2]; /*0x1008e381d*/
    __dst[8] = v74[3]; /*0x1008e382b*/
    __dst[9] = v74[4]; /*0x1008e3839*/
    __dst[10] = v74[5]; /*0x1008e3847*/
    __dst[11] = v74[6]; /*0x1008e3855*/
    __src[0] = v66; /*0x1008e3863*/
    __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e3871*/
    v19 = a7; /*0x1008e3878*/
    __src[2] = a7; /*0x1008e387c*/
    __src[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1008e388a*/
    __src[4] = __dst; /*0x1008e3898*/
    __src[5] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1008e389f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, &unk_1017C6F13, __src); /*0x1008e38bb*/
    v20 = v71; /*0x1008e38c7*/
    v71[3] = v60[2]; /*0x1008e38ce*/
    v21 = v60[0]; /*0x1008e38d2*/
    v20[2] = v60[1]; /*0x1008e38e0*/
    v20[1] = v21; /*0x1008e38e4*/
    *v20 = 10; /*0x1008e38e8*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst); /*0x1008e38f6*/
    goto LABEL_31; /*0x1008e38f6*/
  }
  v68 = __dst[1]; /*0x1008e330f*/
  v81 = (unsigned int *)__dst[2]; /*0x1008e331b*/
  v69 = __dst[2]; /*0x1008e331f*/
  v70 = __dst[3]; /*0x1008e3326*/
  v10 = *(_QWORD *)(a2 + 200); /*0x1008e332d*/
  __n = a2; /*0x1008e3334*/
  v11 = *(void **)(a2 + 208); /*0x1008e3338*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v73, v10, v11, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15); /*0x1008e3359*/
  __s1 = v11; /*0x1008e335e*/
  v12 = v74[0]; /*0x1008e3362*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x1008e3387*/
    (__int64)__dst,
    v74[0],
    v74[1],
    (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
    9);
  v8 = __dst[0]; /*0x1008e338c*/
  if ( __dst[0] != 11 ) /*0x1008e3397*/
  {
    LODWORD(v82) = HIDWORD(__dst[1]); /*0x1008e3436*/
    v83 = (void *)__dst[2]; /*0x1008e3440*/
    v84 = __dst[3]; /*0x1008e344b*/
    __src[0] = __dst[4]; /*0x1008e3456*/
    __src[1] = __dst[5]; /*0x1008e3464*/
    __src[2] = __dst[6]; /*0x1008e3472*/
    __src[3] = __dst[7]; /*0x1008e3480*/
    __src[4] = __dst[8]; /*0x1008e348e*/
    __src[5] = __dst[9]; /*0x1008e349c*/
    __src[6] = __dst[10]; /*0x1008e34aa*/
    __src[7] = __dst[11]; /*0x1008e34b8*/
  }
  LODWORD(v85) = __dst[1]; /*0x1008e34c5*/
  if ( v73 ) /*0x1008e34d2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v73, 1); /*0x1008e34dc*/
  if ( (_DWORD)v8 != 11 ) /*0x1008e34e5*/
  {
    v74[6] = __src[7]; /*0x1008e3558*/
    v74[5] = __src[6]; /*0x1008e3566*/
    v74[4] = __src[5]; /*0x1008e3574*/
    v74[3] = __src[4]; /*0x1008e3582*/
    v74[2] = __src[3]; /*0x1008e3590*/
    v74[1] = __src[2]; /*0x1008e359e*/
    v74[0] = __src[1]; /*0x1008e35b3*/
    v73 = __src[0]; /*0x1008e35ba*/
    v15 = v81; /*0x1008e35c1*/
    v16 = v82; /*0x1008e35c5*/
    if ( v9 ) /*0x1008e35cc*/
      goto LABEL_24; /*0x1008e35cc*/
    goto LABEL_26; /*0x1008e35cc*/
  }
  v87[0] = v85; /*0x1008e34ea*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v73, v10, __s1, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51, 20); /*0x1008e3508*/
  v13 = v74[0]; /*0x1008e350d*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x1008e3532*/
    (__int64)__dst,
    v74[0],
    v74[1],
    (__int64)"account state.oauth-refresh.lock",
    13);
  v14 = (_QWORD *)__n; /*0x1008e3537*/
  v8 = __dst[0]; /*0x1008e353b*/
  if ( __dst[0] != 11 ) /*0x1008e3546*/
  {
    LODWORD(v82) = HIDWORD(__dst[1]); /*0x1008e35dd*/
    v83 = (void *)__dst[2]; /*0x1008e35e7*/
    v84 = __dst[3]; /*0x1008e35f2*/
    __src[0] = __dst[4]; /*0x1008e35fd*/
    __src[1] = __dst[5]; /*0x1008e360b*/
    __src[2] = __dst[6]; /*0x1008e3619*/
    __src[3] = __dst[7]; /*0x1008e3627*/
    __src[4] = __dst[8]; /*0x1008e3635*/
    __src[5] = __dst[9]; /*0x1008e3643*/
    __src[6] = __dst[10]; /*0x1008e3651*/
    __src[7] = __dst[11]; /*0x1008e365f*/
  }
  LODWORD(v85) = __dst[1]; /*0x1008e366c*/
  if ( v73 ) /*0x1008e3679*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v73, 1); /*0x1008e3683*/
  if ( (_DWORD)v8 != 11 ) /*0x1008e368c*/
  {
    v74[6] = __src[7]; /*0x1008e36e8*/
    v74[5] = __src[6]; /*0x1008e36f6*/
    v74[4] = __src[5]; /*0x1008e3704*/
    v74[3] = __src[4]; /*0x1008e3712*/
    v74[2] = __src[3]; /*0x1008e3720*/
    v74[1] = __src[2]; /*0x1008e372e*/
    v74[0] = __src[1]; /*0x1008e3743*/
    v73 = __src[0]; /*0x1008e374a*/
    v15 = v81; /*0x1008e3751*/
    v16 = v82; /*0x1008e3755*/
    goto LABEL_23; /*0x1008e3755*/
  }
  v86 = v85; /*0x1008e3691*/
  codexmate_lib::core::account_io::read_registry_for_mutation::h61c2c695512ac956(v58, v14[28], v14[29]); /*0x1008e36a9*/
  if ( LODWORD(v58[0]) == 11 ) /*0x1008e36bf*/
  {
    v17 = (void (__fastcall **)(__int64))v58[1]; /*0x1008e36c5*/
    if ( v58[1] == 0x8000000000000000LL ) /*0x1008e36cf*/
    {
      __dst[0] = 0x8000000000000000LL; /*0x1008e36d5*/
    }
    else
    {
      v85 = v58[2]; /*0x1008e39b6*/
      v26 = v58[3]; /*0x1008e39ba*/
      __dst[0] = v58[4]; /*0x1008e39c8*/
      __dst[1] = v58[5]; /*0x1008e39d6*/
      __dst[2] = v58[6]; /*0x1008e39e4*/
      if ( v58[3] ) /*0x1008e39ee*/
      {
        v27 = v85; /*0x1008e39f0*/
        do /*0x1008e3a12*/
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v27); /*0x1008e3a03*/
          v27 += 424; /*0x1008e3a08*/
          --v26; /*0x1008e3a0f*/
        }
        while ( v26 ); /*0x1008e3a12*/
      }
      if ( v17 ) /*0x1008e3a17*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, 424LL * (_QWORD)v17, 8); /*0x1008e3a29*/
    }
    v28 = __n; /*0x1008e3a2e*/
    codexmate_lib::core::account_io::read_effective_active_account_key::h56ef408fb1c13e98( /*0x1008e3a48*/
      &v65[1],
      *(_QWORD *)(__n + 32),
      *(_QWORD *)(__n + 40),
      __dst);
    goto LABEL_51; /*0x1008e3a4d*/
  }
  qmemcpy(v57, v58, sizeof(v57)); /*0x1008e3928*/
  v22 = v14; /*0x1008e392b*/
  v17 = (void (__fastcall **)(__int64))v14[4]; /*0x1008e392e*/
  v23 = v22[5]; /*0x1008e3932*/
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, v17, v23); /*0x1008e3943*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x1008e395d*/
  {
    std::sys::fs::metadata::h32fa16d3052ea535(__dst, v17, v23); /*0x1008e3970*/
    v24 = __dst[0]; /*0x1008e3975*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1008e3986*/
      __dst[0],
      __dst[1]);
    if ( v24 ) /*0x1008e398e*/
    {
      v65[1] = 0x8000000000000000LL; /*0x1008e399e*/
      v25 = 11; /*0x1008e39a5*/
      goto LABEL_47; /*0x1008e39aa*/
    }
LABEL_46:
    __dst[0] = v57; /*0x1008e3aec*/
    __dst[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1008e3b01*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v59, &unk_1017C6F87, __dst); /*0x1008e3b1d*/
    v65[1] = v59[0]; /*0x1008e3b30*/
    v65[2] = v59[1]; /*0x1008e3b37*/
    v65[3] = v59[2]; /*0x1008e3b45*/
    v25 = 10; /*0x1008e3b4c*/
LABEL_47:
    v65[0] = v25; /*0x1008e3b51*/
    if ( __src[0] == 0x8000000000000001LL ) /*0x1008e3b5f*/
    {
LABEL_48:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x1008e3b61*/
      goto LABEL_50; /*0x1008e3b6d*/
    }
    goto LABEL_49; /*0x1008e3b5f*/
  }
  if ( (unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(__src) ) /*0x1008e3a59*/
  {
    v65[1] = 0x8000000000000000LL; /*0x1008e3a6c*/
    v65[0] = 11; /*0x1008e3a73*/
LABEL_49:
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(__src); /*0x1008e3b6f*/
    goto LABEL_50; /*0x1008e3b76*/
  }
  if ( !(unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(__src) ) /*0x1008e3a91*/
    goto LABEL_46; /*0x1008e3a91*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1008e3aa6*/
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(&v73, __dst, v17, v23); /*0x1008e3abf*/
  if ( (_DWORD)v73 == 2 ) /*0x1008e3acb*/
  {
    qmemcpy(v65, v74, sizeof(v65)); /*0x1008e3ae4*/
    goto LABEL_49; /*0x1008e3ae4*/
  }
  v53 = v74[7]; /*0x1008e422b*/
  v54 = v74[8]; /*0x1008e4232*/
  v55 = v74[10]; /*0x1008e4239*/
  v83 = (void *)v74[11]; /*0x1008e4247*/
  v85 = v74[13]; /*0x1008e4252*/
  v82 = v74[14]; /*0x1008e425d*/
  if ( v74[4] ) /*0x1008e4264*/
  {
    v84 = v74[10]; /*0x1008e4266*/
    v56 = v74[8]; /*0x1008e426a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74[5], v74[4], 1); /*0x1008e4279*/
    v54 = v56; /*0x1008e427e*/
    v55 = v84; /*0x1008e4281*/
  }
  if ( 2 * v53 ) /*0x1008e4285*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v53, 1); /*0x1008e429a*/
  if ( 2 * v55 ) /*0x1008e429f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v55, 1); /*0x1008e42b8*/
  if ( 2 * v85 ) /*0x1008e42c8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v85, 1); /*0x1008e42de*/
  v65[3] = v74[3]; /*0x1008e42e7*/
  v65[2] = v74[2]; /*0x1008e42f5*/
  v65[1] = v74[1]; /*0x1008e42fc*/
  v65[0] = 11; /*0x1008e4303*/
  v17 = (void (__fastcall **)(__int64))__src[0]; /*0x1008e430e*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(__dst); /*0x1008e431c*/
  if ( v17 == (void (__fastcall **)(__int64))0x8000000000000001LL ) /*0x1008e4324*/
    goto LABEL_48; /*0x1008e4324*/
LABEL_50:
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v57); /*0x1008e3b7b*/
  v28 = __n; /*0x1008e3b87*/
  v8 = v65[0]; /*0x1008e3b8b*/
  if ( v65[0] != 11 ) /*0x1008e3b96*/
  {
    LODWORD(v85) = v65[1]; /*0x1008e417a*/
    v16 = HIDWORD(v65[1]); /*0x1008e417d*/
    v83 = (void *)v65[2]; /*0x1008e418b*/
    v84 = v65[3]; /*0x1008e4196*/
    v73 = v65[4]; /*0x1008e41a1*/
    v74[0] = v65[5]; /*0x1008e41af*/
    v74[1] = v65[6]; /*0x1008e41bd*/
    v74[2] = v65[7]; /*0x1008e41cb*/
    v74[3] = v65[8]; /*0x1008e41d9*/
    v74[4] = v65[9]; /*0x1008e41e7*/
    v74[5] = v65[10]; /*0x1008e41f5*/
    v74[6] = v65[11]; /*0x1008e4203*/
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v86); /*0x1008e420e*/
    close_NOCANCEL(v86); /*0x1008e4216*/
    v15 = v81; /*0x1008e421b*/
LABEL_23:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v87); /*0x1008e3759*/
    close_NOCANCEL(v87[0]); /*0x1008e3765*/
    if ( v9 ) /*0x1008e376d*/
    {
LABEL_24:
      v18 = v15; /*0x1008e376f*/
      do /*0x1008e3797*/
      {
        _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v18); /*0x1008e3783*/
        close_NOCANCEL(*v18++); /*0x1008e378b*/
        v9 = (void (__fastcall **)(__int64))((char *)v9 - 1); /*0x1008e3794*/
      }
      while ( v9 ); /*0x1008e3797*/
    }
LABEL_26:
    LODWORD(v82) = v16; /*0x1008e3799*/
    if ( v68 ) /*0x1008e37a7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 4 * v68, 4); /*0x1008e37b5*/
    v7 = (__int64)v83; /*0x1008e37ba*/
    v9 = (void (__fastcall **)(__int64))v84; /*0x1008e37be*/
    goto LABEL_29; /*0x1008e37be*/
  }
LABEL_51:
  v29 = v65[1]; /*0x1008e3b9c*/
  __s1 = (void *)v65[2]; /*0x1008e3baa*/
  __n = v65[3]; /*0x1008e3bb5*/
  v73 = 0; /*0x1008e3bb9*/
  v85 = *(_QWORD *)(v28 + 248); /*0x1008e3bcb*/
  v82 = *(_QWORD *)(v28 + 256); /*0x1008e3bd6*/
  v84 = v65[1]; /*0x1008e3bda*/
  do /*0x1008e3bf7*/
  {
    v30 = v77; /*0x1008e3c0a*/
    if ( v29 != 0x8000000000000000LL /*0x1008e3c2f*/
      && __n == *(_QWORD *)(v77 + v7 - 80)
      && !memcmp(__s1, *(const void **)(v77 + v7 - 88), __n) )
    {
      goto LABEL_53; /*0x1008e3c2f*/
    }
    v17 = *(void (__fastcall ***)(__int64))(v30 + v7 - 64); /*0x1008e3c40*/
    v31 = *(_QWORD *)(v30 + v7 - 56); /*0x1008e3c45*/
    codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(__dst, v17, v31, v85, v82); /*0x1008e3c5f*/
    if ( LODWORD(__dst[0]) != 11 ) /*0x1008e3c6b*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst); /*0x1008e3be7*/
LABEL_53:
      ++v73; /*0x1008e3bec*/
      goto LABEL_54; /*0x1008e3bec*/
    }
    std::fs::read::inner::h6a30c15c40add28b(__dst, v17, v31); /*0x1008e3c7e*/
    v32 = __dst[1]; /*0x1008e3c8a*/
    if ( __dst[0] == 0x8000000000000000LL ) /*0x1008e3c9e*/
    {
      if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(__dst[1]) /*0x1008e3cc3*/
        || *(_QWORD *)(v77 + v7 - 24) != 0x8000000000000000LL )
      {
        ++v73; /*0x1008e3d61*/
        if ( (v32 & 3) != 1 ) /*0x1008e3d71*/
          goto LABEL_54; /*0x1008e3d71*/
        v33 = v32 - 1; /*0x1008e3d7a*/
        v34 = *(_QWORD *)(v32 - 1); /*0x1008e3d7e*/
        v17 = *(void (__fastcall ***)(__int64))(v32 + 7); /*0x1008e3d82*/
        v35 = *v17; /*0x1008e3d86*/
        if ( !*v17 ) /*0x1008e3d8c*/
          goto LABEL_72; /*0x1008e3d8c*/
      }
      else
      {
        if ( (v32 & 3) != 1 ) /*0x1008e3cd2*/
          goto LABEL_54; /*0x1008e3cd2*/
        v33 = v32 - 1; /*0x1008e3cdb*/
        v34 = *(_QWORD *)(v32 - 1); /*0x1008e3cdf*/
        v17 = *(void (__fastcall ***)(__int64))(v32 + 7); /*0x1008e3ce3*/
        v35 = *v17; /*0x1008e3ce7*/
        if ( !*v17 ) /*0x1008e3ced*/
          goto LABEL_72; /*0x1008e3ced*/
      }
      v35(v34); /*0x1008e3d91*/
LABEL_72:
      v40 = v17[1]; /*0x1008e3d93*/
      if ( v40 ) /*0x1008e3d9a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v40, v17[2]); /*0x1008e3da3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 24, 8); /*0x1008e3db5*/
      v29 = v84; /*0x1008e3dba*/
      goto LABEL_54; /*0x1008e3dbe*/
    }
    v36 = __dst[0]; /*0x1008e3d00*/
    v83 = (void *)__dst[1]; /*0x1008e3d03*/
    v37 = v77; /*0x1008e3d0e*/
    if ( __dst[2] != *(_QWORD *)(v77 + v7 - 32) /*0x1008e3d31*/
      || (v38 = *(const void **)(v77 + v7 - 40), v76 = __dst[0], v39 = memcmp(v83, v38, __dst[2]) == 0, v36 = v76, !v39) )
    {
      ++v73; /*0x1008e3d37*/
      v29 = v84; /*0x1008e3d41*/
      if ( v36 ) /*0x1008e3d45*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v36, 1); /*0x1008e3d57*/
      goto LABEL_54; /*0x1008e3d5c*/
    }
    if ( *(_QWORD *)(v37 + v7 - 24) == 0x8000000000000000LL ) /*0x1008e3dd2*/
    {
      v41 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v17, v31); /*0x1008e3dda*/
      v29 = v84; /*0x1008e3de2*/
      if ( !v41 ) /*0x1008e3de6*/
        goto LABEL_87; /*0x1008e3de6*/
      v42 = v41; /*0x1008e3dec*/
      if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v41) ) /*0x1008e3df9*/
      {
        v44 = v42; /*0x1008e3e2d*/
        if ( (v42 & 3) == 1 ) /*0x1008e3e38*/
        {
          v79 = v42 - 1; /*0x1008e3e40*/
          v45 = *(_QWORD *)(v42 - 1); /*0x1008e3e44*/
          v17 = *(void (__fastcall ***)(__int64))(v44 + 7); /*0x1008e3e48*/
          if ( *v17 ) /*0x1008e3e4c*/
            (*v17)(v45); /*0x1008e3e57*/
          v46 = v17[1]; /*0x1008e3e59*/
          if ( v46 ) /*0x1008e3e60*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v46, v17[2]); /*0x1008e3e69*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, 24, 8); /*0x1008e3e7c*/
        }
LABEL_87:
        v43 = 0; /*0x1008e3e81*/
        goto LABEL_88; /*0x1008e3e81*/
      }
      v43 = v42; /*0x1008e3dfb*/
    }
    else
    {
      v43 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v17, v31); /*0x1008e3e16*/
      v29 = v84; /*0x1008e3e1e*/
      if ( !v43 ) /*0x1008e3e22*/
        goto LABEL_87; /*0x1008e3e22*/
    }
    ++v73; /*0x1008e3e24*/
LABEL_88:
    if ( (v43 & 3) != 1 ) /*0x1008e3e8b*/
    {
      v47 = v76; /*0x1008e3e8d*/
      if ( !v76 ) /*0x1008e3e94*/
        goto LABEL_54; /*0x1008e3e94*/
LABEL_90:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v47, 1); /*0x1008e3e9a*/
      goto LABEL_54; /*0x1008e3ea8*/
    }
    v79 = v43 - 1; /*0x1008e3eb1*/
    v17 = *(void (__fastcall ***)(__int64))(v43 - 1); /*0x1008e3eb5*/
    v48 = *(_QWORD *)(v43 + 7); /*0x1008e3eb9*/
    if ( *(_QWORD *)v48 ) /*0x1008e3ebd*/
      (*(void (__fastcall **)(_QWORD *))v48)(v17); /*0x1008e3ec8*/
    v49 = *(_QWORD *)(v48 + 8); /*0x1008e3eca*/
    if ( v49 ) /*0x1008e3ed1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v49, *(_QWORD *)(v48 + 16)); /*0x1008e3eda*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, 24, 8); /*0x1008e3eed*/
    v47 = v76; /*0x1008e3ef2*/
    if ( v76 ) /*0x1008e3ef9*/
      goto LABEL_90; /*0x1008e3ef9*/
LABEL_54:
    v7 -= 96; /*0x1008e3bf3*/
  }
  while ( v7 ); /*0x1008e3bf7*/
  v77 = v73; /*0x1008e3f0a*/
  if ( v73 ) /*0x1008e3f0e*/
  {
    __src[0] = v72; /*0x1008e3f1b*/
    __dst[0] = &v73; /*0x1008e3f29*/
    __dst[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e3f37*/
    __dst[2] = __src; /*0x1008e3f45*/
    __dst[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e3f4c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v62, &unk_1017C6E1C, __dst); /*0x1008e3f68*/
    LODWORD(v85) = v62[0]; /*0x1008e3f73*/
    LODWORD(v82) = v62[1]; /*0x1008e3f7c*/
    v7 = v63; /*0x1008e3f7f*/
    v17 = v64; /*0x1008e3f86*/
    if ( !(2 * v29) ) /*0x1008e3f8d*/
      goto LABEL_99; /*0x1008e3f98*/
LABEL_109:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v29, 1); /*0x1008e415e*/
  }
  else if ( 2 * v29 ) /*0x1008e414d*/
  {
    goto LABEL_109; /*0x1008e4158*/
  }
LABEL_99:
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v86); /*0x1008e3f9e*/
  close_NOCANCEL(v86); /*0x1008e3faa*/
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v87); /*0x1008e3fb3*/
  close_NOCANCEL(v87[0]); /*0x1008e3fbb*/
  if ( v9 ) /*0x1008e3fc3*/
  {
    v50 = v81; /*0x1008e3fc5*/
    do /*0x1008e3fe7*/
    {
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v50); /*0x1008e3fd3*/
      close_NOCANCEL(*v50++); /*0x1008e3fdb*/
      v9 = (void (__fastcall **)(__int64))((char *)v9 - 1); /*0x1008e3fe4*/
    }
    while ( v9 ); /*0x1008e3fe7*/
  }
  if ( v68 ) /*0x1008e3ff3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, 4 * v68, 4); /*0x1008e4002*/
  v8 = 10; /*0x1008e4007*/
  if ( v77 ) /*0x1008e4012*/
    goto LABEL_30; /*0x1008e4012*/
  v19 = a7; /*0x1008e4026*/
  v51 = v71; /*0x1008e402a*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008e4031*/
  {
    v73 = v72; /*0x1008e403e*/
    __src[0] = &v73; /*0x1008e404c*/
    __src[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e405a*/
    __src[2] = v66; /*0x1008e4068*/
    __src[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e4076*/
    __dst[0] = "codexmate_lib::core::account_ioaccessTokenrefreshTokenidTokenapiKeyaccountIdlastRefreshExisting account s" /*0x1008e4084*/
               "napshot is not a switchable ChatGPT OAuth credential";
    __dst[1] = 31; /*0x1008e408b*/
    __dst[2] = "codexmate_lib::core::account_ioaccessTokenrefreshTokenidTokenapiKeyaccountIdlastRefreshExisting account s" /*0x1008e4096*/
               "napshot is not a switchable ChatGPT OAuth credential";
    __dst[3] = 31; /*0x1008e409d*/
    __dst[4] = &off_10196D938; /*0x1008e40af*/
    log::__private_api::log::h719f4907c7336ae9(&unk_1017C6E91, __src, 2, __dst); /*0x1008e40d0*/
  }
  __dst[0] = v66; /*0x1008e40dc*/
  __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e40ea*/
  __dst[2] = a7; /*0x1008e40f1*/
  __dst[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1008e40ff*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v61, &unk_1017C6EEB, __dst); /*0x1008e411b*/
  v51[3] = v61[2]; /*0x1008e4127*/
  v52 = v61[0]; /*0x1008e412b*/
  v51[2] = v61[1]; /*0x1008e4139*/
  v51[1] = v52; /*0x1008e413d*/
  *v51 = 10; /*0x1008e4141*/
LABEL_31:
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v19); /*0x1008e38fb*/
}