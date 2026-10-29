// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::voice::aliyun_asr::task_id::h3140b287a5edf443; addr: 0x100b1b9e0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:54Z
_QWORD *__fastcall codexmate_lib::core::voice::aliyun_asr::task_id::h3140b287a5edf443(_QWORD *a1)
{
  __int64 v1; // r15
  size_t v2; // r13
  __int64 (__fastcall **i)(); // rbx
  __int64 (__fastcall **v4)(); // r14
  size_t v5; // r12
  size_t v6; // r12
  __int64 v7; // r14
  size_t v8; // r13
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  _BYTE v12[16]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 *v13; // [rsp+18h] [rbp-A8h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-A0h]
  __int64 v15; // [rsp+28h] [rbp-98h]
  __int64 (__fastcall **v16)(); // [rsp+30h] [rbp-90h]
  __int64 v17; // [rsp+38h] [rbp-88h]
  char v18; // [rsp+40h] [rbp-80h]
  _QWORD *v19; // [rsp+48h] [rbp-78h]
  __int64 (__fastcall **v20)(); // [rsp+50h] [rbp-70h]
  __int64 v21; // [rsp+58h] [rbp-68h]
  __int64 v22; // [rsp+60h] [rbp-60h]
  __int64 v23; // [rsp+68h] [rbp-58h] BYREF
  __int64 v24; // [rsp+70h] [rbp-50h]
  __int64 (__fastcall **v25)(); // [rsp+78h] [rbp-48h]
  __int64 v26; // [rsp+80h] [rbp-40h] BYREF
  __int64 v27; // [rsp+88h] [rbp-38h]
  size_t v28; // [rsp+90h] [rbp-30h]

  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v12); /*0x100b1ba01*/
  v23 = 0; /*0x100b1ba06*/
  v24 = 1; /*0x100b1ba0e*/
  v25 = nullptr; /*0x100b1ba16*/
  v15 = 1610612768; /*0x100b1ba1e*/
  v13 = &v23; /*0x100b1ba2d*/
  v14 = &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1057; /*0x100b1ba3b*/
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x100b1ba4c*/
                          v12,
                          &v13) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100b1bbd9*/
      &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1666,
      55,
      &v26,
      &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1683,
      &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1668);
  v19 = a1; /*0x100b1ba59*/
  v22 = v23; /*0x100b1ba61*/
  v26 = 0; /*0x100b1ba6d*/
  v27 = 1; /*0x100b1ba75*/
  v28 = 0; /*0x100b1ba7d*/
  v21 = v24; /*0x100b1ba85*/
  v13 = (__int64 *)v24; /*0x100b1ba89*/
  v14 = v25; /*0x100b1ba90*/
  v15 = 0; /*0x100b1ba97*/
  v20 = v25; /*0x100b1baa2*/
  v16 = v25; /*0x100b1baa6*/
  v17 = 0x2D0000002DLL; /*0x100b1bab7*/
  v18 = 1; /*0x100b1babe*/
  v1 = 1; /*0x100b1bac2*/
  v2 = 0; /*0x100b1bac8*/
  for ( i = nullptr; ; i = v4 ) /*0x100b1bacb*/
  {
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100b1badb*/
      &v23,
      &v13);
    if ( !(_BYTE)v23 ) /*0x100b1bae4*/
      break; /*0x100b1bae4*/
    v4 = v25; /*0x100b1baea*/
    v5 = v24 - (_QWORD)i; /*0x100b1baee*/
    if ( v24 - (__int64)i > v26 - v2 ) /*0x100b1bafb*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59( /*0x100b1bb31*/
        &v26,
        v2,
        v24 - (_QWORD)i,
        1,
        1);
      v1 = v27; /*0x100b1bb36*/
      v2 = v28; /*0x100b1bb3a*/
    }
    memcpy((void *)(v1 + v2), (char *)i + v21, v5); /*0x100b1bb0b*/
    v2 += v5; /*0x100b1bb10*/
    v28 = v2; /*0x100b1bb13*/
  }
  v6 = (char *)v20 - (char *)i; /*0x100b1bb4e*/
  if ( (char *)v20 - (char *)i > v26 - v2 ) /*0x100b1bb54*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59( /*0x100b1bbf5*/
      &v26,
      v2,
      (char *)v20 - (char *)i,
      1,
      1);
    v1 = v27; /*0x100b1bbfa*/
    v2 = v28; /*0x100b1bbfe*/
  }
  v7 = v21; /*0x100b1bb5a*/
  memcpy((void *)(v2 + v1), (char *)i + v21, v6); /*0x100b1bb6d*/
  v8 = v6 + v2; /*0x100b1bb72*/
  v28 = v8; /*0x100b1bb75*/
  v9 = v27; /*0x100b1bb7d*/
  v10 = v19; /*0x100b1bb81*/
  *v19 = v26; /*0x100b1bb85*/
  v10[1] = v9; /*0x100b1bb88*/
  v10[2] = v8; /*0x100b1bb8c*/
  if ( v22 ) /*0x100b1bb97*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v22, 1); /*0x100b1bba1*/
  return v10; /*0x100b1bba9*/
}