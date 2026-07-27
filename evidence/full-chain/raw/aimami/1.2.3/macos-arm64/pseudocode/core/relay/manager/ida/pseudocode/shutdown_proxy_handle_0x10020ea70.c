// __ZN13codexmate_lib4core5relay7manager12RelayManager21shutdown_proxy_handle28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10020ea70 | 基线 same-set
bool __fastcall codexmate_lib::core::relay::manager::RelayManager::shutdown_proxy_handle::_$u7b$$u7b$closure$u7d$$u7d$::h3118cb4ee7a337f9(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD **v4; // rdx
  __int64 v5; // rax
  _BYTE *v6; // r12
  _BYTE *v7; // r13
  char v8; // r14
  char v9; // r12
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rdi
  bool result; // al
  __int64 v15; // [rsp+0h] [rbp-70h]
  _BYTE *v16; // [rsp+18h] [rbp-58h]

  switch ( *(_BYTE *)(a1 + 144) ) /*0x10020ea99*/
  {
    case 0: /*0x10020ea99*/
      v3 = *(_QWORD **)a1; /*0x10020ea9b*/
      v4 = (_QWORD **)(a1 + 8); /*0x10020ea9e*/
      *(_QWORD *)(a1 + 8) = *(_QWORD *)a1; /*0x10020eaa2*/
      *(_BYTE *)(a1 + 136) = 0; /*0x10020eaad*/
      break; /*0x10020eab4*/
    case 1: /*0x10020ea99*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195BF90); /*0x10020ed14*/
    case 2: /*0x10020ea99*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195BF90); /*0x10020ed08*/
    case 3: /*0x10020ea99*/
      v4 = (_QWORD **)(a1 + 8); /*0x10020eac4*/
      switch ( *(_BYTE *)(a1 + 136) ) /*0x10020ead6*/
      {
        case 0: /*0x10020ead6*/
          v3 = *v4; /*0x10020ead8*/
          break; /*0x10020ead8*/
        case 1: /*0x10020ead6*/
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195BE10); /*0x10020ed56*/
        case 2: /*0x10020ead6*/
          JUMPOUT(0x10020ED3ALL); /*0x10020ed3a*/
        case 3: /*0x10020ead6*/
          JUMPOUT(0x10020EC35LL); /*0x10020ec35*/
      }
      return result;
  }
  v5 = *v3 + 16LL; /*0x10020eade*/
  *(_QWORD *)(a1 + 16) = v5; /*0x10020eae6*/
  v6 = (_BYTE *)(a1 + 128); /*0x10020eaea*/
  *(_BYTE *)(a1 + 128) = 0; /*0x10020eaf1*/
  *(_QWORD *)(a1 + 24) = v5; /*0x10020eafc*/
  v7 = (_BYTE *)(a1 + 120); /*0x10020eb00*/
  *(_BYTE *)(a1 + 120) = 0; /*0x10020eb04*/
  *(_QWORD *)(a1 + 32) = v5; /*0x10020eb0c*/
  *(_BYTE *)(a1 + 48) = 0; /*0x10020eb14*/
  *(_QWORD *)(a1 + 40) = v5; /*0x10020eb18*/
  *(_BYTE *)(a1 + 56) = 0; /*0x10020eb1c*/
  v16 = (_BYTE *)(a1 + 48); /*0x10020eb20*/
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 40); /*0x10020eb4c*/
  *(_QWORD *)(a1 + 64) = 0; /*0x10020eb50*/
  *(_QWORD *)(a1 + 72) = v15; /*0x10020eb60*/
  *(_QWORD *)(a1 + 80) = 0; /*0x10020eb64*/
  *(_QWORD *)(a1 + 88) = 0; /*0x10020eb6c*/
  *(_QWORD *)(a1 + 96) = 1; /*0x10020eb70*/
  *(_QWORD *)(a1 + 104) = 1; /*0x10020eb78*/
  *(_BYTE *)(a1 + 112) = 0; /*0x10020eb80*/
  v8 = _$LT$tokio..sync..batch_semaphore..Acquire$u20$as$u20$core..future..future..Future$GT$::poll::h1a9144b74f0ce0c6( /*0x10020eb90*/
         a1 + 56,
         a2,
         v4,
         0,
         a1 + 16,
         a1 + 24);
  if ( v8 == 2 )
  {
    *v16 = 4; /*0x10020eb9b*/
    *v7 = 3; /*0x10020eb9e*/
    *v6 = 3; /*0x10020eba3*/
    v9 = 3; /*0x10020eba8*/
  }
  else
  {
    _$LT$tokio..sync..batch_semaphore..Acquire$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0f489ae87baf7ebc(a1 + 56); /*0x10020ebb0*/
    v10 = *(_QWORD *)(a1 + 64); /*0x10020ebb5*/
    if ( v10 ) /*0x10020ebbc*/
      (*(void (__fastcall **)(_QWORD))(v10 + 24))(*(_QWORD *)(a1 + 72)); /*0x10020ebc2*/
    if ( (v8 & 1) != 0 )
      core::panicking::panic::h286e2dd5eab048be("internal error: entered unreachable code", 40, &off_10195CCC0);
    *v16 = 1; /*0x10020ebd3*/
    v11 = *(_QWORD *)(a1 + 24); /*0x10020ebda*/
    *v7 = 1; /*0x10020ebdd*/
    *v6 = 1; /*0x10020ebe2*/
    v12 = *(_DWORD *)(v11 + 48); /*0x10020ebe7*/
    v13 = *(_QWORD *)(v11 + 56); /*0x10020ebeb*/
    *(_QWORD *)(v11 + 48) = 0; /*0x10020ebef*/
    if ( v12 == 1 ) /*0x10020ebfa*/
      tokio::sync::oneshot::Sender$LT$T$GT$::send::h863a89883b49368a(v13); /*0x10020ebfc*/
    v9 = 1; /*0x10020ec01*/
    tokio::sync::batch_semaphore::Semaphore::release::hb35d3470b278493a(v11, 1); /*0x10020ec0c*/
  }
  *(_BYTE *)(a1 + 136) = v9; /*0x10020ec18*/
  *(_BYTE *)(a1 + 144) = v9; /*0x10020ec1f*/
  return v8 == 2; /*0x10020ec26*/
}