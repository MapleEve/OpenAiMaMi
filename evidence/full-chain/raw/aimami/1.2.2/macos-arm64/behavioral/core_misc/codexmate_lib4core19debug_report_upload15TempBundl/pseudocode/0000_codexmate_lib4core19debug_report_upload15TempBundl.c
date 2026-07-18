// mac 1.2.2 NEW codexmate_lib4core19debug_report_upload15TempBundl 0x1009d20b0 d=0
size_t *__fastcall codexmate_lib::core::debug_report_upload::TempBundleGuard::new::hac717b5649720c0b(size_t *a1)
{
  const void *v1; // rbx
  size_t v2; // r15
  size_t v3; // rax
  _QWORD v5[2]; // [rsp+8h] [rbp-78h] BYREF
  size_t v6[3]; // [rsp+18h] [rbp-68h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+50h] [rbp-30h]
  size_t v10; // [rsp+58h] [rbp-28h]

  std::env::temp_dir::h8078010294fc1613(v7); /*0x1009d20c6*/
  v1 = (const void *)v7[1]; /*0x1009d20cb*/
  v2 = v7[2]; /*0x1009d20cf*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v8); /*0x1009d20d7*/
  v5[1] = v9; /*0x1009d20e4*/
  v5[0] = v8; /*0x1009d20e8*/
  v8 = v5; /*0x1009d20f0*/
  v9 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1009d20fb*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1009d210e*/
    v6,
    anon_8b24e3f70b5df2fccdf26f545f136f0f_186,
    (unsigned __int64)&v8);
  std::path::Path::_join::hb1a495d4f06b13b8((size_t *)&v8, v1, v2, (_BYTE *)v6[1], v6[2]); /*0x1009d2128*/
  if ( v6[0] ) /*0x1009d2134*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d213e*/
  a1[2] = v10; /*0x1009d2147*/
  v3 = (size_t)v8; /*0x1009d214b*/
  a1[1] = (size_t)v9; /*0x1009d2153*/
  *a1 = v3; /*0x1009d2157*/
  if ( v7[0] ) /*0x1009d2161*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d216b*/
  return a1; /*0x1009d2173*/
}