// __ZN13codexmate_lib4core5voice3asr13keyring_entry @ 0x1003384f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::asr::keyring_entry::hdb923e0ef25b9aca(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(); // rcx
  _QWORD v7[3]; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD *v8; // [rsp+18h] [rbp-B8h] BYREF
  __int128 v9; // [rsp+20h] [rbp-B0h]
  __int64 v10; // [rsp+30h] [rbp-A0h]
  __int64 v11; // [rsp+38h] [rbp-98h]
  __int64 v12; // [rsp+40h] [rbp-90h]
  _QWORD v13[2]; // [rsp+48h] [rbp-88h] BYREF
  __int64 v14; // [rsp+58h] [rbp-78h] BYREF
  __int64 v15; // [rsp+60h] [rbp-70h]
  __int64 v16; // [rsp+68h] [rbp-68h]
  _QWORD *v17; // [rsp+70h] [rbp-60h] BYREF
  __int128 v18; // [rsp+78h] [rbp-58h]
  __int64 v19; // [rsp+88h] [rbp-48h]
  __int64 v20; // [rsp+90h] [rbp-40h]
  __int64 v21; // [rsp+98h] [rbp-38h]
  _QWORD *v22; // [rsp+A0h] [rbp-30h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+A8h] [rbp-28h]
  __int64 v24; // [rsp+B0h] [rbp-20h]

  v13[0] = a2; /*0x100338503*/
  v13[1] = a3; /*0x10033850a*/
  v17 = v13; /*0x100338515*/
  *(_QWORD *)&v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100338520*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v14, &unk_1017BC71B, &v17); /*0x100338536*/
  v3 = v15; /*0x10033853b*/
  keyring::Entry::new::h7dcc9030fccf001b(&v8, &unk_1015E5395, 28, v15, v16); /*0x100338559*/
  result = 0x8000000000000007LL; /*0x10033855e*/
  if ( v8 == (_QWORD *)0x8000000000000007LL ) /*0x10033856f*/
  {
    *(_OWORD *)(a1 + 8) = v9; /*0x100338578*/
    *(_QWORD *)a1 = 11; /*0x10033857d*/
    v5 = v14; /*0x100338584*/
    if ( !v14 ) /*0x10033858b*/
      return result; /*0x10033858b*/
  }
  else
  {
    v21 = v12; /*0x1003385af*/
    v20 = v11; /*0x1003385ba*/
    v19 = v10; /*0x1003385c5*/
    v18 = v9; /*0x1003385e2*/
    v17 = v8; /*0x1003385e6*/
    v22 = &v17; /*0x1003385ea*/
    v23 = _$LT$keyring..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h70402bfb44a0dc57; /*0x1003385f5*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v7, &unk_1017BC727, &v22); /*0x10033860b*/
    v22 = (_QWORD *)v7[0]; /*0x10033861e*/
    v23 = (__int64 (__fastcall *)())v7[1]; /*0x100338622*/
    v24 = v7[2]; /*0x10033862d*/
    core::ptr::drop_in_place$LT$keyring..error..Error$GT$::hc4c378876bea7ebc(&v17); /*0x100338635*/
    *(_QWORD *)a1 = 10; /*0x10033863a*/
    v6 = v23; /*0x100338645*/
    *(_QWORD *)(a1 + 8) = v22; /*0x100338649*/
    *(_QWORD *)(a1 + 16) = v6; /*0x10033864d*/
    result = v24; /*0x100338651*/
    *(_QWORD *)(a1 + 24) = v24; /*0x100338655*/
    v5 = v14; /*0x100338659*/
    if ( !v14 ) /*0x100338660*/
      return result; /*0x100338660*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, 1); /*0x10033859a*/
}