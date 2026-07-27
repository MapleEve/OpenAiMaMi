// __ZN13codexmate_lib4core5relay16codex_diagnostic30fix_router_unlock_auth_residue @ 0x10050bfe0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_router_unlock_auth_residue::h71fd42faed4546d1(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3)
{
  char v5; // r12
  char v6; // al
  __int64 v7; // r12
  char v8; // r14
  __int64 result; // rax
  __int64 v10; // rax
  _QWORD *v11; // r14
  void *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // r14
  void *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdi
  _QWORD v38[3]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v39; // [rsp+18h] [rbp-E8h] BYREF
  _QWORD __src[12]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]

  if ( (a3 & 1) == 0 ) /*0x10050bfff*/
  {
    codexmate_lib::core::relay::router_unlock_auth::cleanup_for_native_off::hf6c64171c633b030(&v39, a2); /*0x10050c073*/
    v7 = v39; /*0x10050c078*/
    if ( v39 != 11 ) /*0x10050c083*/
      goto LABEL_4; /*0x10050c083*/
    goto LABEL_6; /*0x10050c083*/
  }
  v5 = codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::h09278a33efdd7fab(a2); /*0x10050c009*/
  v6 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(a2); /*0x10050c00f*/
  if ( v5 ) /*0x10050c017*/
  {
    codexmate_lib::core::relay::router_unlock_auth::prepare_auth_for_router::h5194b92ecafd8ccf(&v39, a2, v6 == 1); /*0x10050c02e*/
    v7 = v39; /*0x10050c033*/
    if ( v39 != 11 ) /*0x10050c03e*/
    {
LABEL_4:
      v8 = __src[0]; /*0x10050c040*/
      result = (__int64)memcpy((void *)(a1 + 9), (char *)__src + 1, 0x57u); /*0x10050c058*/
      *(_QWORD *)a1 = v7; /*0x10050c05d*/
      *(_BYTE *)(a1 + 8) = v8; /*0x10050c060*/
      return result; /*0x10050c064*/
    }
    goto LABEL_6; /*0x10050c03e*/
  }
  if ( v6 != 1 ) /*0x10050c2b7*/
  {
    codexmate_lib::core::relay::router_unlock_auth::cleanup::hb4afc95ddd21e582(&v39, a2); /*0x10050c431*/
    v7 = v39; /*0x10050c436*/
    if ( v39 != 11 ) /*0x10050c441*/
      goto LABEL_4; /*0x10050c441*/
LABEL_6:
    codexmate_lib::core::relay::codex_diagnostic::check_router_unlock_auth_residue::he3db2ed88eec02b5(&v39, a2, a3); /*0x10050c085*/
    if ( __src[4] == 2 && *(_WORD *)__src[3] == 27503 ) /*0x10050c0ae*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v39, a2); /*0x10050c44c*/
      v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050c45b*/
      if ( !v28 ) /*0x10050c463*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050c619*/
      v29 = (_QWORD *)v28; /*0x10050c469*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050c46c*/
      v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x10050c47b*/
      if ( !v30 ) /*0x10050c483*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x10050c65d*/
      qmemcpy(v30, "router_unlock_auth_residue", 26); /*0x10050c4af*/
      *v29 = 26; /*0x10050c4b8*/
      v29[1] = v30; /*0x10050c4bf*/
      v29[2] = 26; /*0x10050c4c3*/
      v47 = 1; /*0x10050c4cb*/
      v48 = (__int64)v29; /*0x10050c4d3*/
      v49 = 1; /*0x10050c4d7*/
      v50 = 0; /*0x10050c4df*/
      v51 = 8; /*0x10050c4e7*/
      v52 = 0; /*0x10050c4ef*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(26, 1); /*0x10050c4f7*/
      v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050c506*/
      if ( !v31 ) /*0x10050c50e*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050c62a*/
      v14 = (_QWORD *)v31; /*0x10050c514*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050c517*/
      v32 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x10050c526*/
      if ( !v32 ) /*0x10050c52e*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x10050c66e*/
      v32[4] = 0x9995E78BAEE62072LL; /*0x10050c53e*/
      v32[3] = 0x656B72616D2F6874LL; /*0x10050c54c*/
      v32[2] = 0x756120B78FE5A6B4LL; /*0x10050c55a*/
      v32[1] = 0xE89F8BE69A99E886LL; /*0x10050c568*/
      *v32 = 0x90E785B8E6B2B7E5LL; /*0x10050c576*/
      *v14 = 40; /*0x10050c579*/
      v14[1] = v32; /*0x10050c580*/
      v14[2] = 40; /*0x10050c584*/
      v33 = v49; /*0x10050c58c*/
      v43 = v49; /*0x10050c590*/
      v34 = v47; /*0x10050c594*/
      v35 = v48; /*0x10050c598*/
      v42 = v48; /*0x10050c59c*/
      v41 = (_QWORD *)v47; /*0x10050c5a0*/
      v36 = v50; /*0x10050c5a4*/
      v37 = v51; /*0x10050c5a8*/
      v44 = v50; /*0x10050c5ac*/
      v45 = v51; /*0x10050c5b0*/
      v46 = v52; /*0x10050c5b8*/
      *(_QWORD *)(a1 + 48) = v52; /*0x10050c5bc*/
      *(_QWORD *)(a1 + 40) = v37; /*0x10050c5c0*/
      *(_QWORD *)(a1 + 32) = v36; /*0x10050c5c4*/
      *(_QWORD *)(a1 + 24) = v33; /*0x10050c5c8*/
      *(_QWORD *)(a1 + 16) = v35; /*0x10050c5cc*/
      *(_QWORD *)(a1 + 8) = v34; /*0x10050c5d0*/
    }
    else
    {
      v47 = 0; /*0x10050c0b4*/
      v48 = 8; /*0x10050c0bc*/
      v49 = 0; /*0x10050c0c4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v39, a2); /*0x10050c0cc*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050c0db*/
      if ( !v10 ) /*0x10050c0e3*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050c5e3*/
      v11 = (_QWORD *)v10; /*0x10050c0e9*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050c0ec*/
      v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x10050c0fb*/
      if ( !v12 ) /*0x10050c103*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x10050c63b*/
      qmemcpy(v12, "router_unlock_auth_residue", 26); /*0x10050c12f*/
      *v11 = 26; /*0x10050c138*/
      v11[1] = v12; /*0x10050c13f*/
      v11[2] = 26; /*0x10050c143*/
      v50 = 1; /*0x10050c14b*/
      v51 = (__int64)v11; /*0x10050c153*/
      v52 = 1; /*0x10050c157*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(26, 1); /*0x10050c15f*/
      v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050c16e*/
      if ( !v13 ) /*0x10050c176*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050c5f7*/
      v14 = (_QWORD *)v13; /*0x10050c17c*/
      v41 = &__src[5]; /*0x10050c186*/
      v42 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10050c191*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v38, &unk_1017C0830, &v41); /*0x10050c1a7*/
      v14[2] = v38[2]; /*0x10050c1b3*/
      v15 = v38[0]; /*0x10050c1b7*/
      v14[1] = v38[1]; /*0x10050c1c5*/
      *v14 = v15; /*0x10050c1c9*/
      v16 = v47; /*0x10050c1cc*/
      v17 = v48; /*0x10050c1d0*/
      v41 = (_QWORD *)v47; /*0x10050c1d4*/
      v42 = v48; /*0x10050c1d8*/
      v18 = v49; /*0x10050c1dc*/
      v43 = v49; /*0x10050c1e0*/
      v19 = v50; /*0x10050c1e4*/
      v20 = v51; /*0x10050c1e8*/
      v44 = v50; /*0x10050c1ec*/
      v45 = v51; /*0x10050c1f0*/
      v46 = v52; /*0x10050c1f8*/
      *(_QWORD *)(a1 + 48) = v52; /*0x10050c1fc*/
      *(_QWORD *)(a1 + 40) = v20; /*0x10050c200*/
      *(_QWORD *)(a1 + 32) = v19; /*0x10050c204*/
      *(_QWORD *)(a1 + 24) = v18; /*0x10050c208*/
      *(_QWORD *)(a1 + 16) = v17; /*0x10050c20c*/
      *(_QWORD *)(a1 + 8) = v16; /*0x10050c210*/
    }
    *(_QWORD *)(a1 + 56) = 1; /*0x10050c214*/
    *(_QWORD *)(a1 + 64) = v14; /*0x10050c21c*/
    *(_QWORD *)(a1 + 72) = 1; /*0x10050c220*/
    *(_QWORD *)a1 = 11; /*0x10050c228*/
    if ( v39 ) /*0x10050c239*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0], v39, 1); /*0x10050c247*/
    if ( __src[2] ) /*0x10050c256*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[3], __src[2], 1); /*0x10050c264*/
    if ( __src[5] ) /*0x10050c273*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[6], __src[5], 1); /*0x10050c281*/
    result = -__src[8]; /*0x10050c290*/
    if ( !__OFSUB__(-__src[8], 1) ) /*0x10050c293*/
    {
      if ( __src[8] ) /*0x10050c299*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[9], __src[8], 1); /*0x10050c2ab*/
    }
    return result; /*0x10050c2b0*/
  }
  v50 = 0; /*0x10050c2bd*/
  v51 = 8; /*0x10050c2c5*/
  v52 = 0; /*0x10050c2cd*/
  v41 = nullptr; /*0x10050c2d5*/
  v42 = 8; /*0x10050c2dd*/
  v43 = 0; /*0x10050c2e5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x10050c2ed*/
  v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050c2fc*/
  if ( !v21 ) /*0x10050c304*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050c608*/
  v22 = (_QWORD *)v21; /*0x10050c30a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050c30d*/
  v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(57, 1); /*0x10050c31c*/
  if ( !v23 ) /*0x10050c324*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 57); /*0x10050c64c*/
  *(_QWORD *)(v23 + 48) = 0x80E38690E785B8E6LL; /*0x10050c334*/
  *(_QWORD *)(v23 + 40) = 0x809CE9A097E68CBCLL; /*0x10050c342*/
  *(_QWORD *)(v23 + 32) = 0xEFADB8E4A894E7BFLL; /*0x10050c350*/
  *(_QWORD *)(v23 + 24) = 0xBDE4A89CE5A3ADE6LL; /*0x10050c35e*/
  *(_QWORD *)(v23 + 16) = 0x8FBCE5A1A8E695BDLL; /*0x10050c36c*/
  *(_QWORD *)(v23 + 8) = 0xE5BB99E7B78FE5A6LL; /*0x10050c37a*/
  *(_QWORD *)v23 = 0xB4E89F8BE69A99E8LL; /*0x10050c388*/
  *(_BYTE *)(v23 + 56) = -126; /*0x10050c38b*/
  *v22 = 57; /*0x10050c38f*/
  v22[1] = v23; /*0x10050c396*/
  v22[2] = 57; /*0x10050c39a*/
  result = v52; /*0x10050c3a2*/
  __src[1] = v52; /*0x10050c3a6*/
  v24 = v50; /*0x10050c3ad*/
  v25 = v51; /*0x10050c3b1*/
  __src[0] = v51; /*0x10050c3b5*/
  v39 = v50; /*0x10050c3bc*/
  v26 = v41; /*0x10050c3c3*/
  v27 = v42; /*0x10050c3c7*/
  __src[2] = v41; /*0x10050c3cb*/
  __src[3] = v42; /*0x10050c3d2*/
  __src[4] = v43; /*0x10050c3dd*/
  *(_QWORD *)(a1 + 48) = v43; /*0x10050c3e4*/
  *(_QWORD *)(a1 + 40) = v27; /*0x10050c3e8*/
  *(_QWORD *)(a1 + 32) = v26; /*0x10050c3ec*/
  *(_QWORD *)(a1 + 24) = result; /*0x10050c3f0*/
  *(_QWORD *)(a1 + 16) = v25; /*0x10050c3f4*/
  *(_QWORD *)(a1 + 8) = v24; /*0x10050c3f8*/
  *(_QWORD *)(a1 + 56) = 1; /*0x10050c3fc*/
  *(_QWORD *)(a1 + 64) = v22; /*0x10050c404*/
  *(_QWORD *)(a1 + 72) = 1; /*0x10050c408*/
  *(_QWORD *)a1 = 11; /*0x10050c410*/
  return result; /*0x10050c417*/
}