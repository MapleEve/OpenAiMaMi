// __ZN13codexmate_lib4core19debug_report_upload15TempBundleGuard3new @ 0x100323470 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::debug_report_upload::TempBundleGuard::new::h97547f8173cc27bd(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  __int64 v3; // r12
  _QWORD *v4; // rax
  _QWORD v6[2]; // [rsp+8h] [rbp-78h] BYREF
  __int64 v7; // [rsp+18h] [rbp-68h] BYREF
  __int64 v8; // [rsp+20h] [rbp-60h]
  __int64 v9; // [rsp+28h] [rbp-58h]
  _QWORD v10[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v11; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]

  std::env::temp_dir::h8078010294fc1613(v10); /*0x100323486*/
  v1 = v10[1]; /*0x10032348b*/
  v2 = v10[2]; /*0x10032348f*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v11); /*0x100323497*/
  v6[1] = v12; /*0x1003234a4*/
  v6[0] = v11; /*0x1003234a8*/
  v11 = v6; /*0x1003234b0*/
  v12 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1003234bb*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v7, &anon_b0ee9adff4519c22b647af231a5a39fa_127, &v11); /*0x1003234ce*/
  v3 = v8; /*0x1003234d3*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v11, v1, v2, v8, v9); /*0x1003234e8*/
  if ( v7 ) /*0x1003234f4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v7, 1); /*0x1003234fe*/
  a1[2] = v13; /*0x100323507*/
  v4 = v11; /*0x10032350b*/
  a1[1] = v12; /*0x100323513*/
  *a1 = v4; /*0x100323517*/
  if ( v10[0] ) /*0x100323521*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v10[0], 1); /*0x10032352b*/
  return a1; /*0x100323533*/
}