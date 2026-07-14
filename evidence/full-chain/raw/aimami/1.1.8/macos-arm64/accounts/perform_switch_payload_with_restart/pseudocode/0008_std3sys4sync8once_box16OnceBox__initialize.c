// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1010fb380 depth=1
// std3sys4sync8once_box16OnceBox::initialize
signed __int64 __fastcall std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(
        volatile signed __int64 *a1)
{
  __int64 v1; // rax
  signed __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  signed __int64 v7; // rax
  signed __int64 v8; // r14

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010fb3ce*/
  v1 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x40u, 8u); /*0x1010fb3dd*/
  if ( !v1 ) /*0x1010fb3e5*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64); /*0x1010fb470*/
  v2 = v1; /*0x1010fb3e7*/
  *(_QWORD *)(v1 + 56) = 0; /*0x1010fb3ea*/
  *(_QWORD *)(v1 + 48) = 0; /*0x1010fb3f2*/
  *(_QWORD *)(v1 + 40) = 0; /*0x1010fb3fa*/
  *(_QWORD *)(v1 + 32) = 0; /*0x1010fb402*/
  *(_QWORD *)(v1 + 24) = 0; /*0x1010fb40a*/
  *(_QWORD *)(v1 + 16) = 0; /*0x1010fb412*/
  *(_QWORD *)(v1 + 8) = 0; /*0x1010fb41a*/
  *(_QWORD *)v1 = 850045863; /*0x1010fb422*/
  std::sys::pal::unix::sync::mutex::Mutex::init::h597b73b703ecbc00((pthread_mutex_t *)v1); /*0x1010fb42c*/
  v7 = _InterlockedCompareExchange64(a1, v2, 0); /*0x1010fb433*/
  if ( v7 ) /*0x1010fb438*/
  {
    v8 = v7; /*0x1010fb43a*/
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28( /*0x1010fb440*/
      v2,
      8,
      v3,
      v4,
      v5,
      v6,
      850045863,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010fb452*/
    return v8; /*0x1010fb457*/
  }
  return v2; /*0x1010fb45d*/
}