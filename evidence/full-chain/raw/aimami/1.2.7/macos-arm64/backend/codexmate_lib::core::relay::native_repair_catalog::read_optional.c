// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_repair_catalog::read_optional::h76fbee7e324b28ba; addr: 0x10031f230; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::native_repair_catalog::read_optional::h76fbee7e324b28ba(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  void *v7; // rax
  void *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r12
  void (__fastcall *v12)(_QWORD); // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  double result; // xmm0_8
  __int64 v16; // [rsp+8h] [rbp-38h] BYREF
  __int64 v17; // [rsp+10h] [rbp-30h]
  __int64 v18; // [rsp+18h] [rbp-28h]

  std::fs::read::inner::h6a30c15c40add28b(&v16, a2, a3); /*0x10031f246*/
  if ( !__OFSUB__(0, v16) ) /*0x10031f251*/
  {
    a1[3] = v18; /*0x10031f2e5*/
    v13 = v16; /*0x10031f2e9*/
    a1[2] = v17; /*0x10031f2f1*/
    a1[1] = v13; /*0x10031f2f5*/
    *a1 = 11; /*0x10031f2f9*/
    return result; /*0x10031f300*/
  }
  v4 = v17; /*0x10031f257*/
  v5 = v17; /*0x10031f25b*/
  if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v17) ) /*0x10031f265*/
  {
    a1[1] = 0x8000000000000000LL; /*0x10031f30c*/
    *a1 = 11; /*0x10031f310*/
    if ( (v4 & 3) != 1 ) /*0x10031f320*/
      return result; /*0x10031f320*/
    v9 = v4 - 1; /*0x10031f32f*/
    v10 = *(_QWORD *)(v4 - 1); /*0x10031f333*/
    v11 = *(_QWORD *)(v4 + 7); /*0x10031f337*/
    v12 = *(void (__fastcall **)(_QWORD))v11; /*0x10031f33b*/
    if ( !*(_QWORD *)v11 ) /*0x10031f342*/
      goto LABEL_12; /*0x10031f342*/
    goto LABEL_11; /*0x10031f342*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, a2, v6); /*0x10031f26b*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(67, 1); /*0x10031f27a*/
  if ( !v7 ) /*0x10031f282*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 67); /*0x10031f38c*/
  v8 = v7; /*0x10031f288*/
  memcpy(v7, &unk_1016EF9B7, 0x43u); /*0x10031f29a*/
  *a1 = 10; /*0x10031f29f*/
  a1[1] = 67; /*0x10031f2a6*/
  a1[2] = v8; /*0x10031f2ae*/
  a1[3] = 67; /*0x10031f2b2*/
  if ( (v4 & 3) == 1 ) /*0x10031f2c3*/
  {
    v9 = v4 - 1; /*0x10031f2c5*/
    v10 = *(_QWORD *)(v4 - 1); /*0x10031f2c9*/
    v11 = *(_QWORD *)(v4 + 7); /*0x10031f2cd*/
    v12 = *(void (__fastcall **)(_QWORD))v11; /*0x10031f2d1*/
    if ( !*(_QWORD *)v11 ) /*0x10031f2d8*/
    {
LABEL_12:
      v14 = *(_QWORD *)(v11 + 8); /*0x10031f349*/
      if ( v14 ) /*0x10031f351*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v14, *(_QWORD *)(v11 + 16)); /*0x10031f35b*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24, 8); /*0x10031f379*/
    }
LABEL_11:
    v12(*(_QWORD *)(v4 - 1)); /*0x10031f344*/
    goto LABEL_12; /*0x10031f347*/
  }
  return result; /*0x10031f322*/
}
