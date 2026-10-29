// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_catalog::response_identity::ha6700a1f5995616c; addr: 0x1005d2b50; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// B-level evidence identity verified; module codexmate_lib/core/relay/native_catalog; range 0x1005d2b50-0x1005d2d0f; sha f019dbc8e267; session <审计会话>; method exact-normalized-body; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
_QWORD *__fastcall codexmate_lib::core::relay::native_catalog::response_identity::ha6700a1f5995616c(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  _BYTE *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 i; // rax
  _BYTE *v15; // rax
  _BYTE v17[32]; // [rsp+0h] [rbp-A0h] BYREF
  _QWORD v18[2]; // [rsp+20h] [rbp-80h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-70h] BYREF
  _BYTE *v20; // [rsp+40h] [rbp-60h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+48h] [rbp-58h]
  _QWORD *v22; // [rsp+50h] [rbp-50h]
  __int64 (__fastcall *v23)(); // [rsp+58h] [rbp-48h]
  __int64 v24; // [rsp+60h] [rbp-40h]
  __int64 v25; // [rsp+68h] [rbp-38h] BYREF
  __int64 v26; // [rsp+70h] [rbp-30h]
  __int64 v27; // [rsp+78h] [rbp-28h]
  _BYTE v28[25]; // [rsp+87h] [rbp-19h] BYREF

  v19[0] = a3; /*0x1005d2b63*/
  v19[1] = a4; /*0x1005d2b67*/
  v5 = 1; /*0x1005d2b6b*/
  if ( !a2 ) /*0x1005d2b7a*/
  {
LABEL_7:
    v6 = &unk_1016FD5C1; /*0x1005d2bbb*/
    goto LABEL_9; /*0x1005d2bbe*/
  }
  v6 = *(_BYTE **)(a2 + 8); /*0x1005d2b7c*/
  v7 = *(_QWORD *)(a2 + 16); /*0x1005d2b80*/
  if ( v7 ) /*0x1005d2b87*/
  {
    v8 = 0; /*0x1005d2b89*/
    while ( (unsigned __int8)(v6[v8] - 32) < 0x5Fu || v6[v8] == 9 ) /*0x1005d2bac*/
    {
      if ( v7 == ++v8 ) /*0x1005d2bb4*/
      {
        v5 = v7; /*0x1005d2bb6*/
        goto LABEL_9; /*0x1005d2bb9*/
      }
    }
    goto LABEL_7; /*0x1005d2bac*/
  }
  v5 = 0; /*0x1005d2bc0*/
LABEL_9:
  v18[0] = v6; /*0x1005d2bc2*/
  v18[1] = v5; /*0x1005d2bc6*/
  v20 = v18; /*0x1005d2bce*/
  v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1005d2bd9*/
  v22 = v19; /*0x1005d2be1*/
  v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1005d2be5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v25, &unk_1016FD5C2, &v20); /*0x1005d2bf8*/
  v9 = v26; /*0x1005d2bfd*/
  _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::h648f3d1979174620(v17, v26, v27); /*0x1005d2c12*/
  if ( v25 ) /*0x1005d2c1e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v25, 1); /*0x1005d2c28*/
  v20 = v17; /*0x1005d2c2d*/
  v21 = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::h7c96d4390bb614f5; /*0x1005d2c38*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v25, &unk_1018FC476, &v20); /*0x1005d2c4b*/
  v13 = v26; /*0x1005d2c50*/
  if ( v27 ) /*0x1005d2c5b*/
  {
    for ( i = 0; i != v27; ++i ) /*0x1005d2c5d*/
    {
      v10 = *(unsigned __int8 *)(v26 + i); /*0x1005d2c7d*/
      if ( (unsigned __int8)v10 > 0x1Fu ) /*0x1005d2c85*/
      {
        if ( (_BYTE)v10 == 127 ) /*0x1005d2c73*/
          goto LABEL_17; /*0x1005d2c73*/
      }
      else if ( (_BYTE)v10 != 9 ) /*0x1005d2c8a*/
      {
LABEL_17:
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016FD5C7, 34, v28, &unk_101AACF98, &off_101AAC538); /*0x1005d2c8c*/
      }
    }
  }
  bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v20, v26, v27, v10, v11, v12); /*0x1005d2cb8*/
  LOBYTE(v24) = 0; /*0x1005d2cbd*/
  a1[4] = v24; /*0x1005d2cc5*/
  a1[3] = v23; /*0x1005d2ccd*/
  a1[2] = v22; /*0x1005d2cd5*/
  v15 = v20; /*0x1005d2cd9*/
  a1[1] = v21; /*0x1005d2ce1*/
  *a1 = v15; /*0x1005d2ce5*/
  if ( v25 ) /*0x1005d2cef*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v25, 1); /*0x1005d2cf9*/
  return a1; /*0x1005d2d01*/
}
