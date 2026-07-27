// __ZN13codexmate_lib4core5relay8keychain11get_api_key @ 0x100527160 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::keychain::get_api_key::hc52a6eafd9a74e53(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        size_t a4)
{
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rsi
  const char *v10; // rdi
  __int64 v11; // rax
  const char *v12; // rax
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // r12
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-D0h]
  __int64 v22; // [rsp+18h] [rbp-C8h]
  unsigned __int8 **v23; // [rsp+20h] [rbp-C0h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+28h] [rbp-B8h]
  __int64 *v25; // [rsp+30h] [rbp-B0h]
  __int64 (__fastcall *v26)(); // [rsp+38h] [rbp-A8h]
  __int64 v27; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-98h]
  __int64 v29; // [rsp+50h] [rbp-90h]
  __int64 v30; // [rsp+58h] [rbp-88h]
  __int64 v31; // [rsp+60h] [rbp-80h] BYREF
  __int64 v32; // [rsp+68h] [rbp-78h]
  __int64 v33; // [rsp+70h] [rbp-70h]
  __int64 v34; // [rsp+78h] [rbp-68h]
  const char *v35; // [rsp+80h] [rbp-60h] BYREF
  __int64 v36; // [rsp+88h] [rbp-58h]
  const char *v37; // [rsp+90h] [rbp-50h]
  __int64 v38; // [rsp+98h] [rbp-48h]
  char **v39; // [rsp+A0h] [rbp-40h]
  unsigned __int8 *v40; // [rsp+A8h] [rbp-38h] BYREF
  size_t v41; // [rsp+B0h] [rbp-30h]

  v40 = a3; /*0x100527180*/
  v41 = a4; /*0x100527184*/
  codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997((unsigned __int8 *)&v35, a3, a4); /*0x100527192*/
  if ( !__OFSUB__(0, v35) ) /*0x10052719d*/
  {
    a1[3] = v37; /*0x1005271e8*/
    v12 = v35; /*0x1005271ec*/
    a1[2] = v36; /*0x1005271f4*/
    a1[1] = v12; /*0x1005271f8*/
    goto LABEL_5; /*0x1005271f8*/
  }
  v7 = *(_QWORD *)(a2 + 584); /*0x10052719f*/
  v8 = *(_QWORD *)(a2 + 592); /*0x1005271a7*/
  codexmate_lib::core::relay::keychain::read_key_file::h980bceabd704e07f(&v35, v7, v8, a3, a4); /*0x1005271bf*/
  v9 = v36; /*0x1005271c4*/
  v10 = v37; /*0x1005271c8*/
  v11 = v38; /*0x1005271cc*/
  if ( (_DWORD)v35 == 1 ) /*0x1005271d4*/
  {
    a1[2] = v37; /*0x1005271d6*/
    a1[3] = v11; /*0x1005271da*/
    a1[1] = v9; /*0x1005271de*/
LABEL_5:
    *a1 = 1; /*0x1005271fc*/
    return a1; /*0x1005271fc*/
  }
  if ( v36 != 0x8000000000000000LL ) /*0x100527225*/
  {
    if ( v38 ) /*0x1005272b2*/
    {
      a1[1] = v36; /*0x1005272b8*/
      a1[2] = v10; /*0x1005272bc*/
LABEL_40:
      a1[3] = v11; /*0x10052765a*/
      *a1 = 0; /*0x10052765e*/
      return a1; /*0x100527665*/
    }
    if ( v36 ) /*0x1005273a2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x1005273ad*/
  }
  codexmate_lib::core::relay::keychain::read_legacy_secret::hcbd56474a2086818(&v20, v7, v8, v40, v41); /*0x100527240*/
  v14 = v20; /*0x100527245*/
  if ( v20 != 0x8000000000000000LL ) /*0x10052724f*/
  {
    if ( v22 ) /*0x1005272d6*/
    {
      v34 = v22; /*0x1005272e4*/
      v15 = v8; /*0x1005272f3*/
      v16 = v21; /*0x1005272f6*/
      codexmate_lib::core::relay::keychain::write_key_file::h73e6c3aba7b96586( /*0x1005272fc*/
        (unsigned int)&v31,
        v7,
        v15,
        (_DWORD)v40,
        v41,
        v21,
        v22);
      if ( v31 == 0x8000000000000000LL ) /*0x100527305*/
      {
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x100527319*/
        {
          v23 = &v40; /*0x100527323*/
          v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100527331*/
          v35 = "codexmate_lib::core::relay::keychain"; /*0x10052733f*/
          v36 = 36; /*0x100527343*/
          v37 = "codexmate_lib::core::relay::keychain"; /*0x10052734b*/
          v38 = 36; /*0x10052734f*/
          v39 = &off_101964520; /*0x10052735e*/
          log::__private_api::log::h719f4907c7336ae9(&unk_1017C16BD, &v23, 3, &v35); /*0x100527379*/
        }
        goto LABEL_39; /*0x10052737e*/
      }
      v29 = v33; /*0x10052749d*/
      v28 = v32; /*0x1005274ac*/
      v27 = v31; /*0x1005274b3*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005274c8*/
      {
        v23 = &v40; /*0x1005274ce*/
        v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1005274dc*/
        v25 = &v27; /*0x1005274ea*/
        v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005274f8*/
        v35 = "codexmate_lib::core::relay::keychain"; /*0x100527506*/
        v36 = 36; /*0x10052750a*/
        v37 = "codexmate_lib::core::relay::keychain"; /*0x100527512*/
        v38 = 36; /*0x100527516*/
        v39 = &off_101964538; /*0x100527525*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017C171B, &v23, 2, &v35); /*0x100527540*/
      }
      v18 = v27; /*0x100527545*/
      if ( !v27 ) /*0x10052754f*/
        goto LABEL_39; /*0x10052754f*/
      v19 = v28; /*0x100527555*/
      goto LABEL_38; /*0x10052755c*/
    }
    if ( v20 ) /*0x1005273ba*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x1005273cb*/
  }
  codexmate_lib::core::relay::keychain::mac_keychain::get::hfed926cbdea4b3f6( /*0x10052726c*/
    &v27,
    &anon_92869709a5e99ce1936aa4e326b6c562_997,
    16,
    v40,
    v41);
  if ( (_BYTE)v27 ) /*0x100527278*/
  {
    a1[1] = 0x8000000000000000LL; /*0x10052727e*/
    *a1 = 0; /*0x100527282*/
    if ( v28 ) /*0x100527293*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x1005272a5*/
    return a1; /*0x1005272aa*/
  }
  v14 = v28; /*0x100527383*/
  if ( v28 == 0x8000000000000000LL ) /*0x10052738d*/
  {
    a1[1] = 0x8000000000000000LL; /*0x10052738f*/
    *a1 = 0; /*0x100527393*/
    return a1; /*0x10052739a*/
  }
  if ( v30 ) /*0x1005273df*/
  {
    v34 = v30; /*0x1005273f4*/
    v17 = v8; /*0x100527406*/
    v16 = v29; /*0x100527409*/
    codexmate_lib::core::relay::keychain::write_key_file::h73e6c3aba7b96586( /*0x10052740f*/
      (unsigned int)&v20,
      v7,
      v17,
      (_DWORD)v40,
      v41,
      v29,
      v30);
    if ( v20 == 0x8000000000000000LL ) /*0x10052741b*/
    {
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x10052742f*/
      {
        v23 = &v40; /*0x100527439*/
        v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100527447*/
        v35 = "codexmate_lib::core::relay::keychain"; /*0x100527455*/
        v36 = 36; /*0x100527459*/
        v37 = "codexmate_lib::core::relay::keychain"; /*0x100527461*/
        v38 = 36; /*0x100527465*/
        v39 = &off_101964550; /*0x100527474*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017C1763, &v23, 3, &v35); /*0x10052748f*/
      }
      goto LABEL_39; /*0x100527494*/
    }
    v33 = v22; /*0x100527595*/
    v32 = v21; /*0x1005275a7*/
    v31 = v20; /*0x1005275ab*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005275bd*/
    {
      v23 = &v40; /*0x1005275c3*/
      v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1005275d1*/
      v25 = &v31; /*0x1005275dc*/
      v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005275ea*/
      v35 = "codexmate_lib::core::relay::keychain"; /*0x1005275f8*/
      v36 = 36; /*0x1005275fc*/
      v37 = "codexmate_lib::core::relay::keychain"; /*0x100527604*/
      v38 = 36; /*0x100527608*/
      v39 = &off_101964568; /*0x100527617*/
      log::__private_api::log::h719f4907c7336ae9(&unk_1017C17A2, &v23, 2, &v35); /*0x100527632*/
    }
    v18 = v31; /*0x100527637*/
    if ( !v31 ) /*0x10052763e*/
      goto LABEL_39; /*0x10052763e*/
    v19 = v32; /*0x100527640*/
LABEL_38:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x100527644*/
LABEL_39:
    a1[1] = v14; /*0x10052764e*/
    a1[2] = v16; /*0x100527652*/
    v11 = v34; /*0x100527656*/
    goto LABEL_40; /*0x100527656*/
  }
  a1[1] = 0x8000000000000000LL; /*0x100527561*/
  *a1 = 0; /*0x100527565*/
  if ( v14 ) /*0x10052756f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v14, 1); /*0x100527584*/
  return a1; /*0x100527206*/
}