// mac 1.1.8 BEHAVIORAL-BACKEND activation_request_path node 0x1010a1dd0 depth=3
// std3sys3env4unix6getenv28_::b::b::d::d
size_t *__fastcall std::sys::env::unix::getenv::_$u7b$$u7b$closure$u7d$$u7d$::h4cf2ae9416167b02(
        size_t *a1,
        __int64 a2,
        const char *a3)
{
  volatile signed __int64 *v4; // rdx
  volatile signed __int64 *v5; // r14
  char *v6; // rax
  char *v7; // r12
  size_t v8; // r15
  __int64 v9; // r13
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  signed __int64 v12; // rtt
  signed __int64 v13; // rtt

  std::sys::env::unix::env_read_lock::hf14baef26d24c6e3(); /*0x1010a1de7*/
  v5 = v4; /*0x1010a1dec*/
  v6 = getenv(a3); /*0x1010a1dfa*/
  if ( v6 ) /*0x1010a1e02*/
  {
    v7 = v6; /*0x1010a1e04*/
    v8 = strlen(v6); /*0x1010a1e0f*/
    if ( v8 ) /*0x1010a1e15*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010a1e17*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1u); /*0x1010a1e29*/
      if ( !v9 ) /*0x1010a1e2f*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8); /*0x1010a1e39*/
    }
    else
    {
      v9 = 1; /*0x1010a1e4f*/
    }
    memcpy((void *)v9, v7, v8); /*0x1010a1e5e*/
    *a1 = v8; /*0x1010a1e63*/
    a1[1] = v9; /*0x1010a1e66*/
    a1[2] = v8; /*0x1010a1e6a*/
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x1010a1e4a*/
  }
  v10 = *v5; /*0x1010a1e6e*/
  while ( 1 ) /*0x1010a1e9b*/
  {
    while ( (v10 & 2) == 0 ) /*0x1010a1e9b*/
    {
      v11 = (v10 - 17) | 1; /*0x1010a1e87*/
      if ( v10 == 17 ) /*0x1010a1e8e*/
        v11 = 0; /*0x1010a1e8e*/
      v12 = v10; /*0x1010a1e92*/
      v10 = _InterlockedCompareExchange64(v5, v11, v10); /*0x1010a1e92*/
      if ( v12 == v10 ) /*0x1010a1e97*/
        return a1; /*0x1010a1e97*/
    }
    if ( (v10 & 8) == 0 ) /*0x1010a1e9f*/
      break; /*0x1010a1e9f*/
    v13 = v10; /*0x1010a1ea8*/
    v10 = _InterlockedCompareExchange64(v5, v10 & 0xFFFFFFFFFFFFFFF6LL, v10); /*0x1010a1ea8*/
    if ( v13 == v10 ) /*0x1010a1ead*/
      return a1; /*0x1010a1ead*/
  }
  std::sys::sync::rwlock::queue::RwLock::read_unlock_contended::hf5a509ae31aa9ac3(v5, v10); /*0x1010a1ec7*/
  return a1; /*0x1010a1eb2*/
}