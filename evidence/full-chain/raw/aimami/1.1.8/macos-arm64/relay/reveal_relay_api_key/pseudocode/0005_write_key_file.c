// owner_va=0x100417190
// owner_symbol=codexmate_lib::core::relay::keychain::write_key_file::h5b927cde006c7475
// depth=3 from command owner (write-through cache-fill callee of get_api_key's keychain-hit branch)
// size=0x316(790B) instructions=204 basic_blocks=34 caller_count=4 (shared cache-writer helper) callee_count=7
// terminated_reason=persistence_write -- std::fs::DirBuilder::create (dir, mode 0o777 pre-umask) + std::sys::fs::set_permissions + std::fs::write::inner (raw `write` syscall boundary), all local filesystem writes under the caller-supplied base dir + providerId-derived filename; no network call anywhere in this function

double __fastcall codexmate_lib::core::relay::keychain::write_key_file::h5b927cde006c7475(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        size_t __nbyte)
{
  size_t v10; // rbx
  _UNKNOWN **v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rsi
  double result; // xmm0_8
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // r15
  size_t v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34; // [rsp+8h] [rbp-A8h] BYREF
  _BYTE *v35; // [rsp+10h] [rbp-A0h]
  size_t v36; // [rsp+18h] [rbp-98h]
  _QWORD *v37; // [rsp+20h] [rbp-90h] BYREF
  void *__src; // [rsp+28h] [rbp-88h]
  size_t __n; // [rsp+30h] [rbp-80h]
  __int64 v40; // [rsp+38h] [rbp-78h]
  _QWORD v41[2]; // [rsp+40h] [rbp-70h] BYREF
  __int64 v42; // [rsp+50h] [rbp-60h] BYREF
  __int64 v43; // [rsp+58h] [rbp-58h]
  __int64 v44; // [rsp+60h] [rbp-50h]
  __int64 v45; // [rsp+68h] [rbp-48h] BYREF
  __int64 v46; // [rsp+70h] [rbp-40h]
  __int64 v47; // [rsp+78h] [rbp-38h]
  void *v48; // [rsp+80h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v34, a2, a3, &anon_0eedd02070250de7472aa97ee6b1a8ea_795, 4); /*0x1004171c4*/
  LOWORD(v42) = 511; /*0x1004171c9*/
  BYTE2(v42) = 1; /*0x1004171cf*/
  v10 = v36; /*0x1004171da*/
  v48 = v35; /*0x1004171e5*/
  v11 = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v42, v35, (char *)v36); /*0x1004171ec*/
  if ( v11 ) /*0x1004171f4*/
  {
    v41[0] = v11; /*0x1004171fa*/
    v37 = v41; /*0x100417202*/
    __src = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100417210*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v42, &unk_101229139, &v37); /*0x100417229*/
    if ( (v41[0] & 3) == 1 ) /*0x10041723a*/
    {
      v12 = v41[0] - 1LL; /*0x10041723c*/
      v13 = *(_QWORD *)(v41[0] - 1LL); /*0x100417240*/
      v14 = *(_QWORD *)(v41[0] + 7LL); /*0x100417244*/
      if ( *(_QWORD *)v14 ) /*0x100417248*/
        (*(void (__fastcall **)(_QWORD))v14)(*(_QWORD *)(v41[0] - 1LL)); /*0x100417254*/
      v15 = *(_QWORD *)(v14 + 8); /*0x100417256*/
      if ( v15 ) /*0x10041725e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x100417268*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 24, 8); /*0x10041727a*/
    }
    a1[2] = v44; /*0x100417283*/
    v17 = v42; /*0x100417287*/
    a1[1] = v43; /*0x10041728f*/
    *a1 = v17; /*0x100417293*/
    goto LABEL_19; /*0x100417296*/
  }
  v18 = std::sys::fs::set_permissions::hfb7e5143e400282f(v48, v10); /*0x1004172a7*/
  if ( (v18 & 3) == 1 ) /*0x1004172b4*/
  {
    v40 = v18 - 1; /*0x10041740a*/
    v46 = *(_QWORD *)(v18 - 1); /*0x100417412*/
    v47 = *(_QWORD *)(v18 + 7); /*0x10041741a*/
    if ( *(_QWORD *)v47 ) /*0x10041741e*/
      (*(void (__fastcall **)(__int64))v47)(v46); /*0x10041742a*/
    v29 = *(_QWORD *)(v47 + 8); /*0x100417434*/
    if ( v29 ) /*0x10041743b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v29, *(_QWORD *)(v47 + 16)); /*0x100417441*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 24, 8); /*0x100417454*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v37, v48, v10, a4, a5); /*0x1004172ce*/
  v19 = __src; /*0x1004172d7*/
  v20 = __n; /*0x1004172de*/
  v21 = std::fs::write::inner::had0c1bee0a2c1e21(__src, __n, a6, __nbyte); /*0x1004172eb*/
  if ( v21 ) /*0x1004172f3*/
  {
    v45 = v21; /*0x1004172f9*/
    v41[0] = &v45; /*0x100417301*/
    v41[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10041730c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v42, &unk_10122914D, v41); /*0x10041731f*/
    if ( (v45 & 3) == 1 ) /*0x100417330*/
    {
      v22 = v45 - 1; /*0x100417332*/
      v23 = *(_QWORD *)(v45 - 1); /*0x100417336*/
      v24 = *(_QWORD *)(v45 + 7); /*0x10041733a*/
      if ( *(_QWORD *)v24 ) /*0x10041733e*/
        (*(void (__fastcall **)(_QWORD))v24)(*(_QWORD *)(v45 - 1)); /*0x10041734a*/
      v25 = *(_QWORD *)(v24 + 8); /*0x10041734c*/
      if ( v25 ) /*0x100417353*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v25, *(_QWORD *)(v24 + 16)); /*0x10041735c*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24, 8); /*0x10041736e*/
    }
    a1[2] = v44; /*0x100417377*/
    v26 = v42; /*0x10041737b*/
    a1[1] = v43; /*0x100417383*/
    *a1 = v26; /*0x100417387*/
    v27 = v37; /*0x10041738a*/
    if ( v37 ) /*0x100417394*/
LABEL_18:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v27, 1); /*0x100417396*/
  }
  else
  {
    v28 = std::sys::fs::set_permissions::hfb7e5143e400282f(v19, v20); /*0x1004173da*/
    if ( (v28 & 3) == 1 ) /*0x1004173e7*/
    {
      v30 = v28 - 1; /*0x100417461*/
      v31 = *(_QWORD *)(v28 - 1); /*0x100417464*/
      v32 = *(_QWORD *)(v28 + 7); /*0x100417468*/
      if ( *(_QWORD *)v32 ) /*0x10041746c*/
        (*(void (__fastcall **)(__int64))v32)(v31); /*0x100417478*/
      v33 = *(_QWORD *)(v32 + 8); /*0x10041747a*/
      if ( v33 ) /*0x100417481*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v33, *(_QWORD *)(v32 + 16)); /*0x10041748a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 24, 8); /*0x10041749c*/
    }
    *a1 = 0x8000000000000000LL; /*0x1004173f3*/
    v27 = v37; /*0x1004173f6*/
    if ( v37 ) /*0x100417400*/
      goto LABEL_18; /*0x100417400*/
  }
LABEL_19:
  if ( v34 ) /*0x1004173ad*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v34, 1); /*0x1004173b8*/
  return result; /*0x1004173bd*/
}
