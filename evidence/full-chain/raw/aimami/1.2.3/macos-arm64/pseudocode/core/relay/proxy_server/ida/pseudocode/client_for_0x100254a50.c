// __ZN13codexmate_lib4core5relay12proxy_server12ProxyContext10client_for @ 0x100254a50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::proxy_server::ProxyContext::client_for::ha60cf1864b88a927(
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

  if ( a3 ) /*0x100254a58*/
  {
    v3 = *(_QWORD *)(a2 + 16); /*0x100254a5e*/
    while ( v3 <= 0xFFFFFFFFFFFFFFEFLL && v3 != 1 && (v3 & 2) == 0 ) /*0x100254a89*/
    {
      v5 = v3; /*0x100254a9a*/
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), (v3 | 1) + 16, v3); /*0x100254a9a*/
      v4 = __OFSUB__(v5, v3); /*0x100254a9a*/
      if ( v5 == v3 ) /*0x100254aa0*/
      {
        v6 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 32)); /*0x100254aaa*/
        if ( !((v6 < 0) ^ v4 | (v6 == 0)) ) /*0x100254aae*/
        {
LABEL_8:
          v7 = *(_QWORD *)(a2 + 32); /*0x100254ab4*/
          v8 = *(_QWORD *)(a2 + 16); /*0x100254ab8*/
          while ( 1 ) /*0x100254ae0*/
          {
            while ( (v8 & 2) == 0 ) /*0x100254ae0*/
            {
              v9 = (v8 - 17) | 1; /*0x100254ac7*/
              if ( v8 == 17 ) /*0x100254ace*/
                v9 = 0; /*0x100254ace*/
              v10 = v8; /*0x100254ad2*/
              v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v9, v8); /*0x100254ad2*/
              if ( v10 == v8 ) /*0x100254ad8*/
                return v7; /*0x100254ad8*/
            }
            if ( (v8 & 8) == 0 ) /*0x100254ae4*/
              break; /*0x100254ae4*/
            v11 = v8; /*0x100254af1*/
            v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v8 & 0xFFFFFFFFFFFFFFF6LL, v8); /*0x100254af1*/
            if ( v11 == v8 ) /*0x100254af7*/
              return v7; /*0x100254af7*/
          }
          v22 = a2 + 16; /*0x100254bec*/
LABEL_36:
          std::sys::sync::rwlock::queue::RwLock::read_unlock_contended::hf5a509ae31aa9ac3(v22, v8); /*0x100254bf5*/
          return v7; /*0x100254bfd*/
        }
LABEL_33:
        BUG(); /*0x100254be6*/
      }
    }
    std::sys::sync::rwlock::queue::RwLock::lock_contended::h2e6bbd4ced889521(a2 + 16, 0); /*0x100254ba4*/
    v20 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 32)); /*0x100254bb4*/
    if ( !((v20 < 0) ^ v4 | (v20 == 0)) ) /*0x100254bb8*/
      goto LABEL_8; /*0x100254bb8*/
    goto LABEL_33; /*0x100254bb8*/
  }
  v12 = *(_QWORD *)(a1 + 16); /*0x100254afe*/
  while ( v12 <= 0xFFFFFFFFFFFFFFEFLL && v12 != 1 && (v12 & 2) == 0 ) /*0x100254b29*/
  {
    v14 = v12; /*0x100254b3a*/
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), (v12 | 1) + 16, v12); /*0x100254b3a*/
    v13 = __OFSUB__(v14, v12); /*0x100254b3a*/
    if ( v14 == v12 ) /*0x100254b40*/
    {
      v15 = _InterlockedIncrement64(*(volatile signed __int64 **)(a1 + 32)); /*0x100254b4a*/
      if ( (v15 < 0) ^ v13 | (v15 == 0) ) /*0x100254b4e*/
        goto LABEL_33; /*0x100254b4e*/
      goto LABEL_22; /*0x100254b4e*/
    }
  }
  std::sys::sync::rwlock::queue::RwLock::lock_contended::h2e6bbd4ced889521(a1 + 16, 0); /*0x100254bcc*/
  v21 = _InterlockedIncrement64(*(volatile signed __int64 **)(a1 + 32)); /*0x100254bdc*/
  if ( (v21 < 0) ^ v4 | (v21 == 0) ) /*0x100254be0*/
    goto LABEL_33; /*0x100254be0*/
LABEL_22:
  v7 = *(_QWORD *)(a1 + 32); /*0x100254b54*/
  v8 = *(_QWORD *)(a1 + 16); /*0x100254b58*/
  do /*0x100254b8f*/
  {
    while ( (v8 & 2) == 0 ) /*0x100254b7c*/
    {
      v16 = (v8 - 17) | 1; /*0x100254b67*/
      if ( v8 == 17 ) /*0x100254b6e*/
        v16 = 0; /*0x100254b6e*/
      v17 = v8; /*0x100254b72*/
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v16, v8); /*0x100254b72*/
      if ( v17 == v8 ) /*0x100254b78*/
        return v7; /*0x100254b78*/
    }
    if ( (v8 & 8) == 0 ) /*0x100254b80*/
    {
      v22 = a1 + 16; /*0x100254bf1*/
      goto LABEL_36; /*0x100254bf1*/
    }
    v18 = v8; /*0x100254b89*/
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v8 & 0xFFFFFFFFFFFFFFF6LL, v8); /*0x100254b89*/
  }
  while ( v18 != v8 ); /*0x100254b8f*/
  return v7; /*0x100254b98*/
}