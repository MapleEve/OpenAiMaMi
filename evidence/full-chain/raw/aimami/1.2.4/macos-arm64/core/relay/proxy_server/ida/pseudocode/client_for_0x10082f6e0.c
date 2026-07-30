// __ZN13codexmate_lib4core5relay12proxy_server12ProxyContext10client_for @ 0x10082f6e0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::proxy_server::ProxyContext::client_for::h8d03bff07fbdf6a5(
        __int64 a1,
        __int64 a2,
        int a3)
{
  unsigned __int64 v3; // rax
  bool v4; // of
  unsigned __int64 v5; // rtt
  __int64 v6; // rt0
  __int64 v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt
  signed __int64 v11; // rtt
  unsigned __int64 v12; // rax
  bool v13; // of
  unsigned __int64 v14; // rtt
  __int64 v15; // rt0
  signed __int64 v16; // rcx
  signed __int64 v17; // rtt
  signed __int64 v18; // rtt
  __int64 v20; // rt0
  __int64 v21; // rt0
  __int64 v22; // rdi

  if ( a3 ) /*0x10082f6e8*/
  {
    v3 = *(_QWORD *)(a2 + 16); /*0x10082f6ee*/
    while ( v3 <= 0xFFFFFFFFFFFFFFEFLL && v3 != 1 && (v3 & 2) == 0 ) /*0x10082f719*/
    {
      v5 = v3; /*0x10082f72a*/
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), (v3 | 1) + 16, v3); /*0x10082f72a*/
      v4 = __OFSUB__(v5, v3); /*0x10082f72a*/
      if ( v5 == v3 ) /*0x10082f730*/
      {
        v6 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 32)); /*0x10082f73a*/
        if ( !((v6 < 0) ^ v4 | (v6 == 0)) ) /*0x10082f73e*/
        {
LABEL_8:
          v7 = *(_QWORD *)(a2 + 32); /*0x10082f744*/
          v8 = *(_QWORD *)(a2 + 16); /*0x10082f748*/
          while ( 1 ) /*0x10082f770*/
          {
            while ( (v8 & 2) == 0 ) /*0x10082f770*/
            {
              v9 = (v8 - 17) | 1; /*0x10082f757*/
              if ( v8 == 17 ) /*0x10082f75e*/
                v9 = 0; /*0x10082f75e*/
              v10 = v8; /*0x10082f762*/
              v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v9, v8); /*0x10082f762*/
              if ( v10 == v8 ) /*0x10082f768*/
                return v7; /*0x10082f768*/
            }
            if ( (v8 & 8) == 0 ) /*0x10082f774*/
              break; /*0x10082f774*/
            v11 = v8; /*0x10082f781*/
            v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v8 & 0xFFFFFFFFFFFFFFF6LL, v8); /*0x10082f781*/
            if ( v11 == v8 ) /*0x10082f787*/
              return v7; /*0x10082f787*/
          }
          v22 = a2 + 16; /*0x10082f87c*/
LABEL_36:
          std::sys::sync::rwlock::queue::RwLock::read_unlock_contended::hf5a509ae31aa9ac3(v22, v8); /*0x10082f885*/
          return v7; /*0x10082f88d*/
        }
LABEL_33:
        BUG(); /*0x10082f876*/
      }
    }
    std::sys::sync::rwlock::queue::RwLock::lock_contended::h2e6bbd4ced889521(a2 + 16, 0); /*0x10082f834*/
    v20 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 32)); /*0x10082f844*/
    if ( !((v20 < 0) ^ v4 | (v20 == 0)) ) /*0x10082f848*/
      goto LABEL_8; /*0x10082f848*/
    goto LABEL_33; /*0x10082f848*/
  }
  v12 = *(_QWORD *)(a1 + 16); /*0x10082f78e*/
  while ( v12 <= 0xFFFFFFFFFFFFFFEFLL && v12 != 1 && (v12 & 2) == 0 ) /*0x10082f7b9*/
  {
    v14 = v12; /*0x10082f7ca*/
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), (v12 | 1) + 16, v12); /*0x10082f7ca*/
    v13 = __OFSUB__(v14, v12); /*0x10082f7ca*/
    if ( v14 == v12 ) /*0x10082f7d0*/
    {
      v15 = _InterlockedIncrement64(*(volatile signed __int64 **)(a1 + 32)); /*0x10082f7da*/
      if ( (v15 < 0) ^ v13 | (v15 == 0) ) /*0x10082f7de*/
        goto LABEL_33; /*0x10082f7de*/
      goto LABEL_22; /*0x10082f7de*/
    }
  }
  std::sys::sync::rwlock::queue::RwLock::lock_contended::h2e6bbd4ced889521(a1 + 16, 0); /*0x10082f85c*/
  v21 = _InterlockedIncrement64(*(volatile signed __int64 **)(a1 + 32)); /*0x10082f86c*/
  if ( (v21 < 0) ^ v4 | (v21 == 0) ) /*0x10082f870*/
    goto LABEL_33; /*0x10082f870*/
LABEL_22:
  v7 = *(_QWORD *)(a1 + 32); /*0x10082f7e4*/
  v8 = *(_QWORD *)(a1 + 16); /*0x10082f7e8*/
  do /*0x10082f81f*/
  {
    while ( (v8 & 2) == 0 ) /*0x10082f80c*/
    {
      v16 = (v8 - 17) | 1; /*0x10082f7f7*/
      if ( v8 == 17 ) /*0x10082f7fe*/
        v16 = 0; /*0x10082f7fe*/
      v17 = v8; /*0x10082f802*/
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v16, v8); /*0x10082f802*/
      if ( v17 == v8 ) /*0x10082f808*/
        return v7; /*0x10082f808*/
    }
    if ( (v8 & 8) == 0 ) /*0x10082f810*/
    {
      v22 = a1 + 16; /*0x10082f881*/
      goto LABEL_36; /*0x10082f881*/
    }
    v18 = v8; /*0x10082f819*/
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v8 & 0xFFFFFFFFFFFFFFF6LL, v8); /*0x10082f819*/
  }
  while ( v18 != v8 ); /*0x10082f81f*/
  return v7; /*0x10082f828*/
}