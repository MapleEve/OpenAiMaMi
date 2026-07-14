// va=0x100690a80
// symbol=codexmate_lib::core::relay::router_unlock_auth::readiness::habfee8ab9ec6894c
// call depth 2 (direct callee of owner 0x1004c7050)
// KEY FINDING: hardcoded literal "niuniu@woyao.pro" (16 bytes) copied verbatim into a fresh
// heap allocation and returned as part of the readiness struct -- this is the "virtual auth"
// fallback identity surfaced to the frontend as `virtualEmail` (see interface/*.md).

__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::readiness::habfee8ab9ec6894c(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r14
  void *v3; // rax
  void *v4; // r15
  char v5; // r13
  unsigned __int8 v6; // al

  v2 = codexmate_lib::core::relay::router_unlock_auth::has_usable_real_oauth_login::h18ba4ce1682b3641(a2); /*0x100690a9c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2); /*0x100690a9f*/
  v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x100690aae*/
  if ( !v3 ) /*0x100690ab6*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x100690b4f*/
  v4 = v3; /*0x100690abc*/
  qmemcpy(v3, "niuniu@woyao.pro", 16); /*0x100690ad7*/   // <-- hardcoded fallback/virtual identity
  v5 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d(a2); /*0x100690ae2*/
  v6 = codexmate_lib::core::relay::router_unlock_auth::can_restore_previous_auth::h379a0efdb14b7384(a2); /*0x100690ae8*/
  *(_QWORD *)a1 = 16; /*0x100690afe*/
  *(_QWORD *)(a1 + 8) = v4; /*0x100690b05*/
  *(_QWORD *)(a1 + 16) = 16; /*0x100690b17*/
  *(_DWORD *)(a1 + 24) = _mm_cvtsi128_si32( /*0x100690b2e*/
                           _mm_insert_epi8(
                             _mm_insert_epi8(_mm_insert_epi8(_mm_cvtsi32_si128(v2), v2 ^ 1u, 1), v5 == 1, 2),
                             v6,
                             3));
  // packed 4-byte flag word: [0]=has_usable_real_oauth_login, [1]=!has_usable_real_oauth_login
  // (willUseVirtualAuth candidate), [2]=(live_auth_state==1 i.e. marker says "ok"),
  // [3]=can_restore_previous_auth
  return a1; /*0x100690b3a*/
}

/* refs (direct callees):
   0x10068ea70 has_usable_real_oauth_login::h18ba4ce1682b3641
   0x100689c00 live_auth_state::h2cf0fc5daf7e3c4d
   0x10068e910 can_restore_previous_auth::h379a0efdb14b7384
   0x100001470 __rust_no_alloc_shim_is_unstable_v2
   0x100001430 __rust_alloc
   0x10112fd51 alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f
*/
