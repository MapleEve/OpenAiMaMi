// __ZN13codexmate_lib4core5relay6models26sanitize_error_for_display @ 0x100331520 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::models::sanitize_error_for_display::h90525d8d08e331fa(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 *v4; // r15
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  _QWORD *v7; // r15
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 (__fastcall *v14)(); // rdx
  __int64 v16; // rax
  __int64 *v17; // [rsp+0h] [rbp-70h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+8h] [rbp-68h]
  __int64 *v19; // [rsp+10h] [rbp-60h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+18h] [rbp-58h]
  __int64 v21; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall *v22)(); // [rsp+28h] [rbp-48h]
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h]
  __int64 v25; // [rsp+40h] [rbp-30h]

  v4 = (__int64 *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x10033153f*/
  v5 = v3; /*0x100331542*/
  v6 = v3; /*0x100331548*/
  if ( v3 >= 0x20 ) /*0x10033154f*/
  {
    if ( (unsigned __int64)core::str::count::do_count_chars::h4875767a8f682eeb(v4, v3) >= 0x101 ) /*0x1003315f9*/
    {
LABEL_3:
      v19 = v4; /*0x100331566*/
      v20 = (__int64 (__fastcall *)())((char *)v4 + v5); /*0x100331570*/
      v21 = 256; /*0x100331574*/
      _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hd906709289eb08f4( /*0x100331587*/
        &v23,
        &v19);
      v17 = &v23; /*0x10033158c*/
      v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100331597*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v19, &unk_1017BC699, &v17); /*0x1003315aa*/
      v7 = v19; /*0x1003315af*/
      v8 = (__int64)v20; /*0x1003315b3*/
      v5 = v21; /*0x1003315b7*/
      if ( v23 ) /*0x1003315c2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x1003315cd*/
      v9 = qword_1019FF218; /*0x1003315d9*/
      if ( !codexmate_lib::platform::debug_log::CODEX_HOME::hdbb870b9a1d083c7 ) /*0x1003315e3*/
        goto LABEL_6; /*0x1003315e3*/
      goto LABEL_16; /*0x1003315e3*/
    }
  }
  else if ( (unsigned __int64)core::str::count::char_count_general_case::h35f326d7c82e4f55(v4, v3) >= 0x101 ) /*0x100331560*/
  {
    goto LABEL_3; /*0x100331560*/
  }
  if ( v5 < 0 ) /*0x100331602*/
  {
    v11 = 0; /*0x100331604*/
    goto LABEL_10; /*0x100331604*/
  }
  if ( v5 ) /*0x100331612*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v6); /*0x100331614*/
    v11 = 1; /*0x100331619*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100331627*/
    if ( !v12 ) /*0x10033162f*/
LABEL_10:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v5); /*0x100331607*/
    v8 = v12; /*0x100331631*/
  }
  else
  {
    v8 = 1; /*0x100331636*/
  }
  memcpy((void *)v8, v4, v5); /*0x100331645*/
  v7 = (_QWORD *)v5; /*0x10033164a*/
  v9 = qword_1019FF218; /*0x100331654*/
  if ( !codexmate_lib::platform::debug_log::CODEX_HOME::hdbb870b9a1d083c7 ) /*0x10033165e*/
  {
LABEL_6:
    v10 = qword_1019FF210; /*0x1003315e5*/
    goto LABEL_17; /*0x1003315ec*/
  }
LABEL_16:
  v10 = 0; /*0x100331660*/
LABEL_17:
  codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b(&v23, v8, v5, v10, v9); /*0x100331662*/
  v13 = (__int64 *)codexmate_lib::core::relay::models::error_hint::h00c6a6a07ccdc6a6(v8, v5); /*0x10033167a*/
  if ( !v13 ) /*0x100331682*/
  {
    a1[2] = v25; /*0x100331703*/
    v16 = v23; /*0x100331707*/
    a1[1] = v24; /*0x10033170f*/
    *a1 = v16; /*0x100331713*/
    if ( !v7 ) /*0x100331719*/
      return a1; /*0x100331719*/
    goto LABEL_21; /*0x100331719*/
  }
  v17 = v13; /*0x100331684*/
  v18 = v14; /*0x100331688*/
  v19 = &v23; /*0x10033168c*/
  v20 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100331697*/
  v21 = (__int64)&v17; /*0x10033169f*/
  v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1003316aa*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017B9A3C, &v19); /*0x1003316bc*/
  if ( v23 ) /*0x1003316c8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x1003316d3*/
  if ( v7 ) /*0x1003316db*/
LABEL_21:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1003316dd*/
  return a1; /*0x1003316f0*/
}