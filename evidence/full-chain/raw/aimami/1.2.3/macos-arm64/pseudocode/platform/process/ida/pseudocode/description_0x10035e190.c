// __ZN13codexmate_lib8platform7process19ExternalCodexWriter11description @ 0x10035e190
__int64 __fastcall codexmate_lib::platform::process::ExternalCodexWriter::description::h63e5f3570bb042c9(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  void *v7; // rax
  __int64 v8; // rdx
  size_t v9; // r15
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r12
  _QWORD v14[4]; // [rsp+8h] [rbp-68h] BYREF
  void *__src; // [rsp+28h] [rbp-48h]
  size_t v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h]
  size_t v18; // [rsp+40h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8); /*0x10035e1a7*/
  v4 = *(_QWORD *)(a2 + 16); /*0x10035e1ab*/
  if ( v4 <= 0xF ) /*0x10035e1b3*/
  {
    if ( v4 ) /*0x10035e1b8*/
    {
      v5 = 0; /*0x10035e1ba*/
      while ( *(_BYTE *)(v3 + v5) != 92 ) /*0x10035e1c5*/
      {
        if ( v4 == ++v5 ) /*0x10035e1cd*/
          goto LABEL_11; /*0x10035e1cd*/
      }
      goto LABEL_8; /*0x10035e1c5*/
    }
LABEL_11:
    codexmate_lib::platform::process::extract_process_name::h50a7d2a16f8e5f38(&v16, v3, v4); /*0x10035e208*/
    goto LABEL_17; /*0x10035e217*/
  }
  if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(92, *(_QWORD *)(a2 + 8), v4) != 1 ) /*0x10035e1e5*/
    goto LABEL_11; /*0x10035e1e5*/
LABEL_8:
  v6 = v4; /*0x10035e1e7*/
  v7 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v3, v4); /*0x10035e1ed*/
  v9 = v8; /*0x10035e1f2*/
  if ( v8 < 0 ) /*0x10035e1f8*/
  {
    v10 = 0; /*0x10035e1fa*/
    goto LABEL_10; /*0x10035e1fa*/
  }
  if ( v8 ) /*0x10035e219*/
  {
    __src = v7; /*0x10035e21b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, v6); /*0x10035e21f*/
    v10 = 1; /*0x10035e224*/
    v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x10035e232*/
    if ( !v11 ) /*0x10035e23a*/
LABEL_10:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x10035e1fd*/
    v12 = v11; /*0x10035e23c*/
    v7 = __src; /*0x10035e23f*/
  }
  else
  {
    v12 = 1; /*0x10035e245*/
  }
  memcpy((void *)v12, v7, v9); /*0x10035e254*/
  v16 = v9; /*0x10035e259*/
  v17 = v12; /*0x10035e25d*/
  v18 = v9; /*0x10035e261*/
LABEL_17:
  v14[0] = a2 + 24; /*0x10035e265*/
  v14[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10035e274*/
  v14[2] = &v16; /*0x10035e27c*/
  v14[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035e287*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_b0ee9adff4519c22b647af231a5a39fa_552, v14); /*0x10035e299*/
  if ( v16 ) /*0x10035e2a5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x10035e2b0*/
  return a1; /*0x10035e2b8*/
}