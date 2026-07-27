// __ZN13codexmate_lib4core5relay23codex_thread_visibility21session_meta_provider @ 0x100ad2790 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c(
        _QWORD *a1,
        _QWORD *a2,
        __int64 (__fastcall *a3)(),
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // rax
  __int64 v10; // rax
  signed __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rax
  double result; // xmm0_8
  const void *v15; // r14
  void *v16; // rax
  void *v17; // r12
  _QWORD v18[3]; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v19[2]; // [rsp+18h] [rbp-A8h] BYREF
  _QWORD *v20; // [rsp+28h] [rbp-98h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+30h] [rbp-90h]
  __int64 *v22; // [rsp+38h] [rbp-88h]
  __int64 (__fastcall *v23)(_QWORD, _QWORD); // [rsp+40h] [rbp-80h]
  _QWORD *v24; // [rsp+48h] [rbp-78h]
  __int64 (__fastcall *v25)(); // [rsp+50h] [rbp-70h]
  __int64 v26; // [rsp+58h] [rbp-68h] BYREF
  __int64 v27; // [rsp+60h] [rbp-60h]
  __int64 v28; // [rsp+68h] [rbp-58h]
  __int64 v29; // [rsp+70h] [rbp-50h]
  _QWORD v30[9]; // [rsp+78h] [rbp-48h] BYREF

  v19[0] = a6; /*0x100ad27b1*/
  v19[1] = a7; /*0x100ad27b8*/
  v20 = a2; /*0x100ad27bf*/
  v21 = a3; /*0x100ad27c6*/
  v22 = nullptr; /*0x100ad27cd*/
  v23 = nullptr; /*0x100ad27d8*/
  v24 = a2; /*0x100ad27e0*/
  v25 = a3; /*0x100ad27e4*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v26, &v20); /*0x100ad27f6*/
  if ( (_BYTE)v26 == 6 ) /*0x100ad2801*/
  {
    v9 = v27; /*0x100ad2803*/
    *a1 = 3; /*0x100ad2807*/
    a1[1] = v9; /*0x100ad280e*/
    return result; /*0x100ad2812*/
  }
  v30[0] = v26; /*0x100ad281d*/
  v30[2] = v28; /*0x100ad282b*/
  v30[3] = v29; /*0x100ad2833*/
  v30[1] = v27; /*0x100ad283a*/
  v10 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v30, "/payload/model_provider", 23); /*0x100ad284e*/
  if ( v10 && *(_BYTE *)v10 == 3 && (v11 = *(_QWORD *)(v10 + 24)) != 0 ) /*0x100ad2864*/
  {
    if ( v11 < 0 ) /*0x100ad2866*/
    {
      v12 = 0; /*0x100ad286c*/
      goto LABEL_8; /*0x100ad286c*/
    }
    v15 = *(const void **)(v10 + 16); /*0x100ad290f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, "/payload/model_provider"); /*0x100ad2913*/
    v12 = 1; /*0x100ad2918*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x100ad2926*/
    if ( !v16 ) /*0x100ad292e*/
LABEL_8:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v11); /*0x100ad286f*/
    v17 = v16; /*0x100ad2934*/
    memcpy(v16, v15, v11); /*0x100ad2940*/
    a1[1] = v11; /*0x100ad2945*/
    a1[2] = v17; /*0x100ad2949*/
    a1[3] = v11; /*0x100ad294d*/
    *a1 = 11; /*0x100ad2951*/
  }
  else
  {
    v26 = a4; /*0x100ad287c*/
    v27 = a5; /*0x100ad2880*/
    v20 = v19; /*0x100ad288b*/
    v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ad2899*/
    v22 = &v26; /*0x100ad28a0*/
    v23 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad28ae*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v18, &unk_1017CA80A, &v20); /*0x100ad28c7*/
    a1[3] = v18[2]; /*0x100ad28d3*/
    v13 = v18[0]; /*0x100ad28d7*/
    a1[2] = v18[1]; /*0x100ad28e5*/
    a1[1] = v13; /*0x100ad28e9*/
    *a1 = 9; /*0x100ad28ed*/
  }
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v30); /*0x100ad28fd*/
}