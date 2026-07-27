// __ZN13codexmate_lib8platform7process32kill_codex_processes_until_clear @ 0x1003678a0
__int64 __fastcall codexmate_lib::platform::process::kill_codex_processes_until_clear::h68cdb9b9f156eb27(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r15
  unsigned int v8; // edx
  unsigned __int64 ***i; // r14
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r12
  unsigned __int64 ***v16; // r13
  _QWORD *v17; // r14
  __int64 v18; // rsi
  __int64 *v19; // rsi
  const char *v20; // rcx
  unsigned __int64 **v21; // rcx
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 *v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // r15
  __int64 v28; // rsi
  unsigned __int64 ***v29; // r15
  __int64 v30; // r14
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 *v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // r15
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // r15
  __int64 v39; // rsi
  __int64 result; // rax
  _QWORD v41[3]; // [rsp+8h] [rbp-1E8h] BYREF
  _QWORD v42[3]; // [rsp+20h] [rbp-1D0h] BYREF
  _QWORD v43[12]; // [rsp+38h] [rbp-1B8h] BYREF
  unsigned __int64 **v44; // [rsp+98h] [rbp-158h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-150h]
  __int64 v46; // [rsp+A8h] [rbp-148h]
  unsigned __int64 **v47; // [rsp+F8h] [rbp-F8h]
  __int64 v48; // [rsp+100h] [rbp-F0h]
  __int64 v49; // [rsp+108h] [rbp-E8h]
  unsigned __int64 *v50; // [rsp+110h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+118h] [rbp-D8h]
  __int64 v52; // [rsp+120h] [rbp-D0h]
  unsigned int v53; // [rsp+12Ch] [rbp-C4h]
  unsigned __int64 **v54; // [rsp+130h] [rbp-C0h] BYREF
  char *v55; // [rsp+138h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+140h] [rbp-B0h]
  __int64 (__fastcall *v57)(); // [rsp+148h] [rbp-A8h]
  const char *v58; // [rsp+150h] [rbp-A0h]
  __int64 v59; // [rsp+158h] [rbp-98h]
  __int64 v60; // [rsp+160h] [rbp-90h]
  char *v61; // [rsp+168h] [rbp-88h]
  __int64 v62; // [rsp+170h] [rbp-80h]
  __int64 v63; // [rsp+178h] [rbp-78h]
  void *v64; // [rsp+180h] [rbp-70h]
  unsigned __int64 **v65; // [rsp+188h] [rbp-68h]
  unsigned __int64 v66; // [rsp+190h] [rbp-60h] BYREF
  __int64 v67; // [rsp+198h] [rbp-58h]
  __int64 v68; // [rsp+1A0h] [rbp-50h]
  __int64 *v69; // [rsp+1A8h] [rbp-48h]
  unsigned __int64 *v70; // [rsp+1B0h] [rbp-40h] BYREF
  __int64 v71; // [rsp+1B8h] [rbp-38h]
  __int64 v72; // [rsp+1C0h] [rbp-30h]

  v69 = a1; /*0x1003678b4*/
  v5 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5); /*0x1003678c2*/
  v7 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x1003678d8*/
         v5,
         v6,
         3,
         0);
  v53 = v8; /*0x1003678db*/
  v66 = 0x8000000000000000LL; /*0x1003678e1*/
  for ( i = &v44; ; i = v16 ) /*0x1003678e5*/
  {
    codexmate_lib::platform::process::collect_codex_kill_targets::hff13fe245335b237((__int64 *)&v54); /*0x1003678fa*/
    v11 = (__int64)v54; /*0x1003678ff*/
    v44 = (unsigned __int64 **)v55; /*0x100367914*/
    v45 = v56; /*0x10036791b*/
    v46 = (__int64)v57; /*0x100367926*/
    if ( v54 != (unsigned __int64 **)11 ) /*0x100367931*/
    {
      v19 = v69; /*0x100367c0a*/
      v69[11] = (__int64)v65; /*0x100367c0e*/
      v19[10] = (__int64)v64; /*0x100367c16*/
      v19[9] = v63; /*0x100367c1e*/
      v19[8] = v62; /*0x100367c26*/
      v19[7] = (__int64)v61; /*0x100367c31*/
      v19[6] = v60; /*0x100367c3c*/
      v20 = v58; /*0x100367c40*/
      v19[5] = v59; /*0x100367c4e*/
      v19[4] = (__int64)v20; /*0x100367c52*/
      v19[3] = v46; /*0x100367c5d*/
      v21 = v44; /*0x100367c61*/
      v19[2] = v45; /*0x100367c6f*/
      v19[1] = (__int64)v21; /*0x100367c73*/
      *v19 = v11; /*0x100367c77*/
      goto LABEL_60; /*0x100367c7a*/
    }
    v47 = v44; /*0x100367945*/
    v48 = v45; /*0x10036794c*/
    v12 = v46; /*0x100367953*/
    v49 = v46; /*0x10036795a*/
    if ( !v46 ) /*0x100367964*/
      break; /*0x100367964*/
    v13 = std::time::Instant::now::hda76af2c3a449055(&v54, &v55, v56, v45, v10); /*0x10036796a*/
    if ( v13 == v7 ) /*0x100367972*/
    {
      if ( v14 >= v53 ) /*0x10036797a*/
        goto LABEL_35; /*0x10036797a*/
    }
    else if ( v13 >= v7 ) /*0x100367993*/
    {
LABEL_35:
      v29 = i; /*0x100367d95*/
      v30 = v48; /*0x100367d98*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc22e68783ab88be2( /*0x100367db0*/
        &v70,
        v48,
        v48 + 32 * v12);
      v31 = v71; /*0x100367db5*/
      v32 = v72; /*0x100367db9*/
      alloc::str::join_generic_copy::heca7a5e86402c6b6(&v54, v71, v72, " | ps-ocodexmate_lib::platform::process", 3); /*0x100367dd7*/
      v43[2] = v56; /*0x100367de3*/
      v43[1] = v55; /*0x100367df8*/
      v43[0] = v54; /*0x100367dff*/
      if ( v66 == 0x8000000000000000LL ) /*0x100367e14*/
      {
        v44 = nullptr; /*0x100367e16*/
        v45 = 1; /*0x100367e21*/
        v46 = 0; /*0x100367e2c*/
      }
      else
      {
        v50 = &v66; /*0x100367e3d*/
        v44 = &v50; /*0x100367e4b*/
        v45 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x100367e59*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v54, &unk_1017BD380, &v44); /*0x100367e75*/
        v44 = v54; /*0x100367e88*/
        v45 = (__int64)v55; /*0x100367e8f*/
        v46 = v56; /*0x100367e9d*/
      }
      v54 = (unsigned __int64 **)v43; /*0x100367eab*/
      v55 = (char *)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100367eb9*/
      v56 = (__int64)v29; /*0x100367ec0*/
      v57 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100367ec7*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v41, &unk_1017BD320, &v54); /*0x100367ee3*/
      if ( v44 ) /*0x100367ef2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x100367f00*/
      if ( v43[0] ) /*0x100367f0f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43[1], v43[0], 1); /*0x100367f1d*/
      v33 = v69; /*0x100367f29*/
      v69[3] = v41[2]; /*0x100367f2d*/
      v34 = v41[0]; /*0x100367f31*/
      v33[2] = v41[1]; /*0x100367f3f*/
      v33[1] = v34; /*0x100367f43*/
      *v33 = 10; /*0x100367f47*/
      if ( v32 ) /*0x100367f51*/
      {
        v35 = (_QWORD *)(v31 + 8); /*0x100367f53*/
        do /*0x100367f67*/
        {
          v36 = *(v35 - 1); /*0x100367f69*/
          if ( v36 ) /*0x100367f70*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v35, v36, 1); /*0x100367f7a*/
          v35 += 3; /*0x100367f60*/
          --v32; /*0x100367f64*/
        }
        while ( v32 ); /*0x100367f67*/
      }
      if ( v70 ) /*0x100367f88*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24LL * (_QWORD)v70, 8); /*0x100367f9a*/
      goto LABEL_53; /*0x100367f9f*/
    }
    v15 = v48; /*0x100367999*/
    codexmate_lib::platform::process::force_kill_targets::hd831432c308f755c(v43, v48, v12); /*0x1003679ad*/
    if ( LODWORD(v43[0]) == 11 ) /*0x1003679b9*/
    {
      if ( v66 != 0x8000000000000000LL && v66 ) /*0x1003679d1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x1003679dc*/
      v66 = 0x8000000000000000LL; /*0x1003679eb*/
    }
    else
    {
      qmemcpy(i, v43, 0x60u); /*0x100367a0f*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100367a20*/
      {
        v70 = (unsigned __int64 *)i; /*0x100367a26*/
        v71 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100367a31*/
        v60 = 2; /*0x100367a35*/
        v61 = "codexmate_lib::platform::process"; /*0x100367a47*/
        v62 = 32; /*0x100367a4e*/
        v64 = &unk_1017BD2EA; /*0x100367a5d*/
        v65 = &v70; /*0x100367a65*/
        v54 = nullptr; /*0x100367a69*/
        v55 = "codexmate_lib::platform::process"; /*0x100367a74*/
        v56 = 32; /*0x100367a7b*/
        v57 = nullptr; /*0x100367a86*/
        v58 = "src/platform/process.rs"; /*0x100367a98*/
        v59 = 23; /*0x100367a9f*/
        v63 = 0x58800000001LL; /*0x100367ab4*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v50, &v54); /*0x100367ac6*/
      }
      v70 = nullptr; /*0x100367acb*/
      v71 = 1; /*0x100367ad3*/
      v72 = 0; /*0x100367adb*/
      v56 = 1610612768; /*0x100367ae3*/
      v54 = &v70; /*0x100367af2*/
      v55 = (char *)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100367b00*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100367b11*/
                              i,
                              &v54) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10036808a*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          &v50,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      v50 = v70; /*0x100367b26*/
      v51 = v71; /*0x100367b2d*/
      v52 = v72; /*0x100367b38*/
      if ( v66 != 0x8000000000000000LL && v66 ) /*0x100367b55*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x100367b60*/
      v68 = v52; /*0x100367b6c*/
      v67 = v51; /*0x100367b7e*/
      v66 = (unsigned __int64)v50; /*0x100367b82*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(i); /*0x100367b89*/
    }
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 300000000); /*0x100367b95*/
    v16 = i; /*0x100367b9a*/
    v17 = (_QWORD *)(v15 + 16); /*0x100367b9d*/
    do /*0x100367bb7*/
    {
      v18 = *(v17 - 1); /*0x100367bb9*/
      if ( v18 ) /*0x100367bc0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v18, 1); /*0x100367bca*/
      v17 += 4; /*0x100367bb0*/
      --v12; /*0x100367bb4*/
    }
    while ( v12 ); /*0x100367bb7*/
    if ( v47 ) /*0x100367bea*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 32LL * (_QWORD)v47, 8); /*0x100367bfc*/
  }
  v22 = (__int64)i; /*0x100367c7f*/
  codexmate_lib::platform::process::protected_codex_db_holders::he3dae47a4922cb14((__int64)v43); /*0x100367c89*/
  v23 = v43[2]; /*0x100367c8e*/
  if ( v43[2] ) /*0x100367c98*/
  {
    v24 = v43[1]; /*0x100367c9e*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(&v54, v43[1], v43[2], " | ps-ocodexmate_lib::platform::process", 3); /*0x100367cbf*/
    v46 = v56; /*0x100367ccb*/
    v45 = (__int64)v55; /*0x100367ce0*/
    v44 = v54; /*0x100367ce7*/
    v54 = (unsigned __int64 **)v22; /*0x100367cee*/
    v55 = (char *)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100367cfc*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v42, &unk_1015F8049, &v54); /*0x100367d18*/
    if ( v44 ) /*0x100367d27*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x100367d35*/
    v25 = v69; /*0x100367d41*/
    v69[3] = v42[2]; /*0x100367d45*/
    v26 = v42[0]; /*0x100367d49*/
    v25[2] = v42[1]; /*0x100367d57*/
    v25[1] = v26; /*0x100367d5b*/
    *v25 = 10; /*0x100367d5f*/
    v27 = (_QWORD *)(v24 + 8); /*0x100367d66*/
    do /*0x100367d77*/
    {
      v28 = *(v27 - 1); /*0x100367d7d*/
      if ( v28 ) /*0x100367d84*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v27, v28, 1); /*0x100367d8e*/
      v27 += 3; /*0x100367d70*/
      --v23; /*0x100367d74*/
    }
    while ( v23 ); /*0x100367d77*/
  }
  else
  {
    *v69 = 11; /*0x100367fa5*/
    v24 = v43[1]; /*0x100367fac*/
  }
  if ( v43[0] ) /*0x100367fbd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, 24LL * v43[0], 8); /*0x100367fcf*/
  v30 = v48; /*0x100367fd4*/
LABEL_53:
  if ( v12 ) /*0x100367fde*/
  {
    v37 = 32 * v12; /*0x100367fe0*/
    v38 = 0; /*0x100367fe4*/
    do /*0x100367ff7*/
    {
      v39 = *(_QWORD *)(v30 + v38 + 8); /*0x100367ff9*/
      if ( v39 ) /*0x100368001*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v30 + v38 + 16), v39, 1); /*0x10036800d*/
      v38 += 32; /*0x100367ff0*/
    }
    while ( v37 != v38 ); /*0x100367ff7*/
  }
  if ( v47 ) /*0x10036801e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 32LL * (_QWORD)v47, 8); /*0x10036802c*/
LABEL_60:
  result = 0x8000000000000000LL; /*0x100368031*/
  if ( v66 != 0x8000000000000000LL ) /*0x100368042*/
  {
    if ( v66 ) /*0x100368047*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x100368052*/
  }
  return result; /*0x100368057*/
}