// __ZN13codexmate_lib4core5relay12proxy_server12ProxyContext8upstream @ 0x100255000 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::proxy_server::ProxyContext::upstream::h3ecec722c869e74b(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  bool v3; // of
  unsigned __int64 v4; // rtt
  __int64 v5; // rt0
  __int64 v6; // r14
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  signed __int64 v9; // rtt
  signed __int64 v10; // rtt
  __int64 v12; // rt0

  v1 = *(_QWORD *)(a1 + 24); /*0x100255007*/
  v2 = *(_QWORD *)(v1 + 16); /*0x10025500b*/
  do /*0x100255034*/
  {
    if ( v2 > 0xFFFFFFFFFFFFFFEFLL || v2 == 1 || (v2 & 2) != 0 ) /*0x100255021*/
    {
      std::sys::sync::rwlock::queue::RwLock::lock_contended::h2e6bbd4ced889521(v1 + 16, 0); /*0x10025508f*/
      v12 = _InterlockedIncrement64(*(volatile signed __int64 **)(v1 + 32)); /*0x10025509c*/
      if ( !((v12 < 0) ^ v3 | (v12 == 0)) ) /*0x1002550a0*/
        goto LABEL_7; /*0x1002550a0*/
LABEL_16:
      BUG(); /*0x1002550a2*/
    }
    v4 = v2; /*0x10025502e*/
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 16), (v2 | 1) + 16, v2); /*0x10025502e*/
    v3 = __OFSUB__(v4, v2); /*0x10025502e*/
  }
  while ( v4 != v2 ); /*0x100255034*/
  v5 = _InterlockedIncrement64(*(volatile signed __int64 **)(v1 + 32)); /*0x10025503e*/
  if ( (v5 < 0) ^ v3 | (v5 == 0) ) /*0x100255042*/
    goto LABEL_16; /*0x100255042*/
LABEL_7:
  v6 = *(_QWORD *)(v1 + 32); /*0x100255044*/
  v7 = *(_QWORD *)(v1 + 16); /*0x100255048*/
  while ( 1 ) /*0x10025506c*/
  {
    while ( (v7 & 2) == 0 ) /*0x10025506c*/
    {
      v8 = (v7 - 17) | 1; /*0x100255057*/
      if ( v7 == 17 ) /*0x10025505e*/
        v8 = 0; /*0x10025505e*/
      v9 = v7; /*0x100255062*/
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 16), v8, v7); /*0x100255062*/
      if ( v9 == v7 ) /*0x100255068*/
        return v6; /*0x100255068*/
    }
    if ( (v7 & 8) == 0 ) /*0x100255070*/
      break; /*0x100255070*/
    v10 = v7; /*0x100255079*/
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 16), v7 & 0xFFFFFFFFFFFFFFF6LL, v7); /*0x100255079*/
    if ( v10 == v7 ) /*0x10025507f*/
      return v6; /*0x10025507f*/
  }
  std::sys::sync::rwlock::queue::RwLock::read_unlock_contended::hf5a509ae31aa9ac3(v1 + 16, v7); /*0x1002550ae*/
  return v6; /*0x100255084*/
}