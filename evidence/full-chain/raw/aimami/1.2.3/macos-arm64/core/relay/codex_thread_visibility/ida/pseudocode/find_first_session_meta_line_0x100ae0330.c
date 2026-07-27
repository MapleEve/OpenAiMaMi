// __ZN13codexmate_lib4core5relay23codex_thread_visibility28find_first_session_meta_line @ 0x100ae0330 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hbef333d2a75f746a(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r12
  _QWORD *v5; // r15
  void *v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rdx
  _BOOL8 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r13
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  void *v17; // r12
  void *v18; // rsi
  __int64 v19; // rbx
  _QWORD *v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD v24[2]; // [rsp+8h] [rbp-128h] BYREF
  void *v25; // [rsp+18h] [rbp-118h]
  _QWORD *v26; // [rsp+20h] [rbp-110h] BYREF
  void *__src; // [rsp+28h] [rbp-108h]
  size_t __n; // [rsp+30h] [rbp-100h]
  __int64 v29; // [rsp+38h] [rbp-F8h]
  const char *v30; // [rsp+40h] [rbp-F0h]
  __int64 v31; // [rsp+48h] [rbp-E8h]
  __int64 v32; // [rsp+50h] [rbp-E0h]
  void *v33; // [rsp+58h] [rbp-D8h]
  __int64 v34; // [rsp+60h] [rbp-D0h]
  __int64 v35; // [rsp+68h] [rbp-C8h]
  void *v36; // [rsp+70h] [rbp-C0h]
  _QWORD **v37; // [rsp+78h] [rbp-B8h]
  __int128 v38; // [rsp+80h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+90h] [rbp-A0h]
  __int64 v40; // [rsp+98h] [rbp-98h]
  __int64 v41; // [rsp+A0h] [rbp-90h]
  unsigned int v42; // [rsp+A8h] [rbp-88h]
  __int64 v43; // [rsp+B0h] [rbp-80h]
  __int64 v44; // [rsp+B8h] [rbp-78h]
  __int64 v45; // [rsp+C0h] [rbp-70h]
  _QWORD *v46; // [rsp+C8h] [rbp-68h] BYREF
  void *v47; // [rsp+D0h] [rbp-60h]
  size_t v48; // [rsp+D8h] [rbp-58h]
  __int64 v49; // [rsp+E0h] [rbp-50h]
  __int64 v50; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-40h]
  unsigned __int64 v52; // [rsp+F8h] [rbp-38h]
  char v53; // [rsp+106h] [rbp-2Ah] BYREF
  bool v54; // [rsp+107h] [rbp-29h]

  v3 = a3; /*0x100ae0344*/
  v4 = a2; /*0x100ae0347*/
  v5 = a1; /*0x100ae034a*/
  LODWORD(v38) = 0; /*0x100ae034d*/
  WORD2(v38) = 438; /*0x100ae0357*/
  *(_DWORD *)((char *)&v38 + 6) = 1; /*0x100ae0360*/
  WORD5(v38) = 0; /*0x100ae036a*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v26, &v38, a2, a3); /*0x100ae038e*/
  if ( (_DWORD)v26 == 1 ) /*0x100ae039a*/
  {
    v6 = __src; /*0x100ae039c*/
    *a1 = 2; /*0x100ae03a3*/
    a1[1] = v6; /*0x100ae03aa*/
    return v5; /*0x100ae03aa*/
  }
  v8 = HIDWORD(v26); /*0x100ae03c3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v26, &v38); /*0x100ae03c9*/
  v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1); /*0x100ae03d8*/
  if ( !v9 ) /*0x100ae03e0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000); /*0x100ae0828*/
  *(_QWORD *)&v38 = v9; /*0x100ae03e6*/
  *((_QWORD *)&v38 + 1) = 0x2000; /*0x100ae03ed*/
  v39 = 0; /*0x100ae03f8*/
  v40 = 0; /*0x100ae0403*/
  v41 = 0; /*0x100ae040e*/
  v42 = v8; /*0x100ae0419*/
  v50 = 0; /*0x100ae041f*/
  v51 = 1; /*0x100ae0427*/
  v43 = 0; /*0x100ae042f*/
  v45 = a2; /*0x100ae0437*/
  while ( 1 ) /*0x100ae0448*/
  {
    v52 = 0; /*0x100ae0448*/
    v10 = std::io::read_until::hc830e3842e7d7825(&v38, 10, &v50); /*0x100ae0460*/
    v14 = v11; /*0x100ae0465*/
    if ( (v10 & 1) != 0 ) /*0x100ae046a*/
    {
      *v5 = 2; /*0x100ae0754*/
      v5[1] = v11; /*0x100ae075b*/
      goto LABEL_42; /*0x100ae075f*/
    }
    if ( !v11 ) /*0x100ae0473*/
    {
      v5[1] = 0x8000000000000000LL; /*0x100ae076b*/
      *v5 = 11; /*0x100ae076f*/
      goto LABEL_42; /*0x100ae076f*/
    }
    v54 = v52 != 0; /*0x100ae0484*/
    if ( !v52 ) /*0x100ae0488*/
    {
LABEL_14:
      v44 = 0; /*0x100ae04b0*/
      v15 = 0; /*0x100ae04b8*/
      goto LABEL_21; /*0x100ae04ba*/
    }
    v15 = v52 - 1; /*0x100ae048a*/
    LOBYTE(v12) = *(_BYTE *)(v51 + v52 - 1) == 10; /*0x100ae0493*/
    if ( *(_BYTE *)(v51 + v52 - 1) == 10 ) /*0x100ae0496*/
    {
      if ( v52 == 1 ) /*0x100ae049b*/
        goto LABEL_14; /*0x100ae049b*/
      v16 = v52 - 2; /*0x100ae049d*/
    }
    else
    {
      v16 = v52 - 1; /*0x100ae04c0*/
      v15 = v52; /*0x100ae04c3*/
    }
    if ( v16 >= v52 ) /*0x100ae04c9*/
      core::panicking::panic_bounds_check::h56740b1198b22635(v16, v52, &off_1019748C8, v12); /*0x100ae0817*/
    LOBYTE(v13) = *(_BYTE *)(v51 + v16) == 13; /*0x100ae04d3*/
    v44 = v13; /*0x100ae04d7*/
    if ( (_BYTE)v13 ) /*0x100ae04db*/
      v15 = v16; /*0x100ae04db*/
    if ( v15 > v52 ) /*0x100ae04e2*/
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v15, v52, &off_1019748E0); /*0x100ae07c9*/
    v54 = v12; /*0x100ae04e8*/
LABEL_21:
    core::str::converts::from_utf8::hb32deb9559450f6e(&v26, v51, v15); /*0x100ae04eb*/
    if ( (_BYTE)v26 ) /*0x100ae04fe*/
    {
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100ae0512*/
      {
        v24[0] = v4; /*0x100ae0518*/
        v24[1] = v3; /*0x100ae051f*/
        v46 = v24; /*0x100ae052d*/
        v47 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ae0538*/
        v32 = 2; /*0x100ae053c*/
        v33 = &unk_10167D5D6; /*0x100ae054e*/
        v34 = 51; /*0x100ae0555*/
        v36 = &unk_1017CADF1; /*0x100ae0567*/
        v37 = &v46; /*0x100ae0572*/
        v26 = nullptr; /*0x100ae0579*/
        __src = &unk_10167D5D6; /*0x100ae0584*/
        __n = 51; /*0x100ae058b*/
        v29 = 0; /*0x100ae0596*/
        v30 = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae05a8*/
        v31 = 41; /*0x100ae05af*/
        v35 = 0xC4D00000001LL; /*0x100ae05c4*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v53, &v26); /*0x100ae05d6*/
      }
      goto LABEL_7; /*0x100ae05db*/
    }
    v17 = (void *)__n; /*0x100ae05e0*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100ae05ea*/
    {
      v21 = 0; /*0x100ae0741*/
      goto LABEL_39; /*0x100ae0741*/
    }
    v18 = __src; /*0x100ae05f0*/
    if ( __n ) /*0x100ae05f7*/
    {
      v25 = __src; /*0x100ae05f9*/
      v19 = v3; /*0x100ae0600*/
      v20 = v5; /*0x100ae0603*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v26, __src); /*0x100ae0606*/
      v21 = 1; /*0x100ae060b*/
      v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1); /*0x100ae0619*/
      if ( !v22 ) /*0x100ae0621*/
      {
        v8 = (__int64)v17; /*0x100ae082f*/
LABEL_39:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, v8); /*0x100ae0744*/
      }
      v5 = v20; /*0x100ae0627*/
      v3 = v19; /*0x100ae062a*/
      v8 = v22; /*0x100ae062d*/
      v18 = v25; /*0x100ae0630*/
    }
    else
    {
      v8 = 1; /*0x100ae0639*/
    }
    memcpy((void *)v8, v18, (size_t)v17); /*0x100ae0644*/
    v26 = (_QWORD *)v8; /*0x100ae0649*/
    __src = v17; /*0x100ae0650*/
    v29 = 0; /*0x100ae065e*/
    __n = 0; /*0x100ae0666*/
    v30 = (const char *)v8; /*0x100ae066d*/
    v31 = (__int64)v17; /*0x100ae0674*/
    serde_json::de::from_trait::h51e180b4bb6af5e0(&v46, &v26); /*0x100ae0686*/
    if ( (_BYTE)v46 != 6 ) /*0x100ae068f*/
      break; /*0x100ae068f*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(&v46); /*0x100ae0695*/
LABEL_36:
    if ( v17 ) /*0x100ae0726*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v17, 1); /*0x100ae0737*/
    v4 = v45; /*0x100ae0440*/
LABEL_7:
    v43 += v14; /*0x100ae0444*/
  }
  v29 = v49; /*0x100ae06a3*/
  __n = v48; /*0x100ae06ae*/
  __src = v47; /*0x100ae06bd*/
  v26 = v46; /*0x100ae06c4*/
  v23 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ae06de*/
          "typefullargsopenwithkindsavetrueuuidemitshowhide",
          4,
          &v26);
  if ( !v23 /*0x100ae0711*/
    || *(_BYTE *)v23 != 3
    || *(_QWORD *)(v23 + 24) != 12
    || **(_QWORD **)(v23 + 16) ^ 0x5F6E6F6973736573LL | *(unsigned int *)(*(_QWORD *)(v23 + 16) + 8LL) ^ 0x6174656DLL )
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v46); /*0x100ae071e*/
    goto LABEL_36; /*0x100ae071e*/
  }
  v5[1] = v17; /*0x100ae07d0*/
  v5[2] = v8; /*0x100ae07d4*/
  v5[3] = v17; /*0x100ae07d8*/
  v5[4] = v43; /*0x100ae07e0*/
  v5[5] = v14; /*0x100ae07e4*/
  *((_BYTE *)v5 + 48) = v54; /*0x100ae07ec*/
  *((_BYTE *)v5 + 49) = v44; /*0x100ae07f4*/
  *v5 = 11; /*0x100ae07f8*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v46); /*0x100ae0803*/
LABEL_42:
  if ( v50 ) /*0x100ae077d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x100ae0788*/
  if ( *((_QWORD *)&v38 + 1) ) /*0x100ae0797*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, *((_QWORD *)&v38 + 1), 1); /*0x100ae07a5*/
  close_NOCANCEL(v42); /*0x100ae07b0*/
  return v5; /*0x100ae03b1*/
}