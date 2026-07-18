// mac 1.2.2 NEW write_client_debug_log 0x1013a4930 d=3
signed __int64 __fastcall std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hebbf97d60bb488fa(
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

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1013a497e*/
  v1 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x40u, 8u); /*0x1013a498d*/
  if ( !v1 ) /*0x1013a4995*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64); /*0x1013a4a20*/
  v2 = v1; /*0x1013a4997*/
  *(_QWORD *)(v1 + 56) = 0; /*0x1013a499a*/
  *(_QWORD *)(v1 + 48) = 0; /*0x1013a49a2*/
  *(_QWORD *)(v1 + 40) = 0; /*0x1013a49aa*/
  *(_QWORD *)(v1 + 32) = 0; /*0x1013a49b2*/
  *(_QWORD *)(v1 + 24) = 0; /*0x1013a49ba*/
  *(_QWORD *)(v1 + 16) = 0; /*0x1013a49c2*/
  *(_QWORD *)(v1 + 8) = 0; /*0x1013a49ca*/
  *(_QWORD *)v1 = 850045863; /*0x1013a49d2*/
  std::sys::pal::unix::sync::mutex::Mutex::init::h597b73b703ecbc00((pthread_mutex_t *)v1); /*0x1013a49dc*/
  v7 = _InterlockedCompareExchange64(a1, v2, 0); /*0x1013a49e3*/
  if ( v7 ) /*0x1013a49e8*/
  {
    v8 = v7; /*0x1013a49ea*/
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28( /*0x1013a49f0*/
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
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013a4a02*/
    return v8; /*0x1013a4a07*/
  }
  return v2; /*0x1013a4a0d*/
}