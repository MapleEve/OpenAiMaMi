// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x10054fc00 d=1
__int64 __fastcall _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf6e473e13a6bc9af(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *v2; // rax
  __int64 v5; // rax
  CFIndex v6; // r13
  volatile signed __int64 *v7; // rcx
  __CFRunLoop *Main; // r12
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rax
  bool v11; // of
  volatile signed __int64 *v12; // rcx
  bool v13; // cc
  __int64 v14; // rt0
  volatile signed __int64 *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rt0
  __int64 v18; // rt0
  __int64 v19; // rt0
  __int64 v20; // rt0
  __int64 v21; // rt0
  volatile signed __int64 *v22; // rdi
  __int64 v23; // rt0
  volatile signed __int64 *v24; // r8
  __int64 v25; // rt0
  volatile signed __int64 *v26; // r9
  __int64 v27; // rt0
  volatile signed __int64 *v28; // r10
  __int64 v29; // rt0
  volatile signed __int64 *v30; // r11
  __int64 v31; // rt0
  volatile signed __int64 *v32; // r15
  __int64 v33; // rt0
  volatile signed __int64 *v34; // r12
  __int64 v35; // rt0
  __int64 result; // rax
  CFRunLoopSourceContext context; // [rsp+0h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-58h]
  volatile signed __int64 *v39; // [rsp+60h] [rbp-50h]
  volatile signed __int64 *v40; // [rsp+68h] [rbp-48h]
  volatile signed __int64 *v41; // [rsp+70h] [rbp-40h]
  __int64 v42; // [rsp+78h] [rbp-38h]
  volatile signed __int64 *v43; // [rsp+80h] [rbp-30h]

  v2 = *(volatile signed __int64 **)(a2 + 72); /*0x10054fc14*/
  if ( _InterlockedIncrement64(v2) <= 0 ) /*0x10054fc1c*/
LABEL_33:
    BUG(); /*0x10054fe96*/
  v43 = v2; /*0x10054fc28*/
  v40 = v2; /*0x10054fc2c*/
  v5 = *(_QWORD *)(a2 + 80); /*0x10054fc30*/
  v6 = *(_QWORD *)a2; /*0x10054fc34*/
  if ( *(_QWORD *)a2 ) /*0x10054fc34*/
  {
    if ( (_DWORD)v6 == 1 ) /*0x10054fc44*/
    {
      v7 = *(volatile signed __int64 **)(a2 + 8); /*0x10054fc4a*/
      if ( _InterlockedIncrement64(v7 + 48) > 0 ) /*0x10054fc56*/
        goto LABEL_5; /*0x10054fc56*/
LABEL_9:
      std::process::abort::h38b4a24325fecca0(); /*0x10054fd1b*/
    }
    v7 = *(volatile signed __int64 **)(a2 + 8); /*0x10054fd25*/
    v14 = _InterlockedIncrement64(v7); /*0x10054fd29*/
    if ( (v14 < 0) ^ __OFSUB__((_DWORD)v6, 1) | (v14 == 0) ) /*0x10054fd2d*/
      goto LABEL_9; /*0x10054fd2d*/
  }
  else
  {
    v7 = *(volatile signed __int64 **)(a2 + 8); /*0x10054fd09*/
    if ( _InterlockedIncrement64(v7 + 64) <= 0 ) /*0x10054fd15*/
      goto LABEL_9; /*0x10054fd15*/
  }
LABEL_5:
  v41 = v7; /*0x10054fc5c*/
  v42 = v5; /*0x10054fc60*/
  Main = CFRunLoopGetMain(); /*0x10054fc69*/
  memset(&context, 0, 72); /*0x10054fc81*/
  context.perform = (void (__cdecl *)(void *))tao::platform_impl::platform::event_loop::Proxy$LT$T$GT$::new::event_loop_proxy_handler::hc18ebd48ddf2fd35; /*0x10054fc97*/
  v9 = (volatile signed __int64 *)CFRunLoopSourceCreate(nullptr, 0x7FFFFFFFFFFFFFFELL, &context); /*0x10054fcc3*/
  CFRunLoopAddSource(Main, (CFRunLoopSourceRef)v9, kCFRunLoopCommonModes); /*0x10054fcc6*/
  CFRunLoopWakeUp(Main); /*0x10054fcce*/
  context.version = v6; /*0x10054fcd3*/
  context.info = (void *)v41; /*0x10054fcde*/
  context.retain = (const void *(__cdecl *)(const void *))v9; /*0x10054fce5*/
  v10 = *(_QWORD *)(a2 + 24); /*0x10054fcec*/
  v11 = __OFSUB__(v10, 2); /*0x10054fcf0*/
  if ( v10 == 2 ) /*0x10054fcf4*/
  {
    v12 = *(volatile signed __int64 **)(a2 + 32); /*0x10054fd35*/
    v13 = _InterlockedIncrement64(v12) <= 0; /*0x10054fd39*/
  }
  else
  {
    v11 = __OFSUB__((_DWORD)v10, 1); /*0x10054fcf6*/
    if ( (_DWORD)v10 != 1 ) /*0x10054fcf9*/
    {
      v15 = v43; /*0x10054fd6e*/
      v12 = *(volatile signed __int64 **)(a2 + 32); /*0x10054fd72*/
      v18 = _InterlockedIncrement64(v12 + 64); /*0x10054fd76*/
      if ( !((v18 < 0) ^ __OFSUB__((_DWORD)v10, 1) | (v18 == 0)) ) /*0x10054fd7e*/
        goto LABEL_14; /*0x10054fd7e*/
LABEL_18:
      std::process::abort::h38b4a24325fecca0(); /*0x10054fd80*/
    }
    v12 = *(volatile signed __int64 **)(a2 + 32); /*0x10054fcfb*/
    v13 = _InterlockedIncrement64(v12 + 48) <= 0; /*0x10054fcff*/
  }
  v15 = v43; /*0x10054fd3d*/
  if ( v13 ) /*0x10054fd41*/
    goto LABEL_18; /*0x10054fd41*/
LABEL_14:
  v38 = v10; /*0x10054fd43*/
  v39 = v12; /*0x10054fd47*/
  v16 = *(_QWORD *)(a2 + 40); /*0x10054fd4b*/
  switch ( v16 ) /*0x10054fd5d*/
  {
    case 0LL: /*0x10054fd5d*/
      v9 = *(volatile signed __int64 **)(a2 + 48); /*0x10054fd97*/
      v20 = _InterlockedIncrement64(v9 + 65); /*0x10054fd9b*/
      if ( (v20 < 0) ^ v11 | (v20 == 0) ) /*0x10054fda3*/
        goto LABEL_24; /*0x10054fda3*/
      goto LABEL_25; /*0x10054fda3*/
    case 1LL: /*0x10054fd5d*/
      v9 = *(volatile signed __int64 **)(a2 + 48); /*0x10054fda7*/
      v21 = _InterlockedIncrement64(v9 + 49); /*0x10054fdab*/
      if ( (v21 < 0) ^ v11 | (v21 == 0) ) /*0x10054fdb3*/
        goto LABEL_24; /*0x10054fdb3*/
      goto LABEL_25; /*0x10054fdb3*/
    case 2LL: /*0x10054fd5d*/
      v9 = *(volatile signed __int64 **)(a2 + 48); /*0x10054fd8a*/
      v19 = _InterlockedIncrement64(v9 + 1); /*0x10054fd8e*/
      if ( (v19 < 0) ^ v11 | (v19 == 0) ) /*0x10054fd93*/
LABEL_24:
        std::process::abort::h38b4a24325fecca0(); /*0x10054fdb5*/
      goto LABEL_25; /*0x10054fd93*/
    case 3LL: /*0x10054fd5d*/
    case 4LL: /*0x10054fd5d*/
      v9 = *(volatile signed __int64 **)(a2 + 48); /*0x10054fd5f*/
      v17 = _InterlockedIncrement64(v9); /*0x10054fd63*/
      if ( (v17 < 0) ^ v11 | (v17 == 0) ) /*0x10054fd67*/
        goto LABEL_33; /*0x10054fd67*/
      goto LABEL_25; /*0x10054fd67*/
    case 5LL: /*0x10054fd5d*/
LABEL_25:
      v22 = *(volatile signed __int64 **)(a2 + 56); /*0x10054fdbf*/
      v23 = _InterlockedIncrement64(v22); /*0x10054fdc3*/
      if ( (v23 < 0) ^ v11 | (v23 == 0) ) /*0x10054fdc7*/
        goto LABEL_33; /*0x10054fdc7*/
      v24 = *(volatile signed __int64 **)(a2 + 64); /*0x10054fdcd*/
      v25 = _InterlockedIncrement64(v24); /*0x10054fdd1*/
      if ( (v25 < 0) ^ v11 | (v25 == 0) ) /*0x10054fdd5*/
        goto LABEL_33; /*0x10054fdd5*/
      v26 = *(volatile signed __int64 **)(a2 + 88); /*0x10054fddb*/
      v27 = _InterlockedIncrement64(v26); /*0x10054fddf*/
      if ( (v27 < 0) ^ v11 | (v27 == 0) ) /*0x10054fde3*/
        goto LABEL_33; /*0x10054fde3*/
      v28 = *(volatile signed __int64 **)(a2 + 96); /*0x10054fde9*/
      v29 = _InterlockedIncrement64(v28); /*0x10054fded*/
      if ( (v29 < 0) ^ v11 | (v29 == 0) ) /*0x10054fdf1*/
        goto LABEL_33; /*0x10054fdf1*/
      v30 = *(volatile signed __int64 **)(a2 + 104); /*0x10054fdf7*/
      v31 = _InterlockedIncrement64(v30); /*0x10054fdfb*/
      if ( (v31 < 0) ^ v11 | (v31 == 0) ) /*0x10054fdff*/
        goto LABEL_33; /*0x10054fdff*/
      v32 = *(volatile signed __int64 **)(a2 + 112); /*0x10054fe05*/
      v33 = _InterlockedIncrement64(v32); /*0x10054fe09*/
      if ( (v33 < 0) ^ v11 | (v33 == 0) ) /*0x10054fe0d*/
        goto LABEL_33; /*0x10054fe0d*/
      v34 = *(volatile signed __int64 **)(a2 + 120); /*0x10054fe13*/
      v35 = _InterlockedIncrement64(v34); /*0x10054fe17*/
      if ( (v35 < 0) ^ v11 | (v35 == 0) ) /*0x10054fe1c*/
        goto LABEL_33; /*0x10054fe1c*/
      *(_QWORD *)(a1 + 72) = v15; /*0x10054fe1e*/
      *(_QWORD *)(a1 + 80) = v42; /*0x10054fe26*/
      *(_QWORD *)a1 = context.version; /*0x10054fe31*/
      *(_QWORD *)(a1 + 8) = context.info; /*0x10054fe3b*/
      *(_QWORD *)(a1 + 16) = context.retain; /*0x10054fe46*/
      *(_QWORD *)(a1 + 24) = v10; /*0x10054fe4a*/
      *(_QWORD *)(a1 + 32) = v12; /*0x10054fe4e*/
      *(_QWORD *)(a1 + 40) = v16; /*0x10054fe52*/
      *(_QWORD *)(a1 + 48) = v9; /*0x10054fe56*/
      *(_QWORD *)(a1 + 56) = v22; /*0x10054fe5a*/
      *(_QWORD *)(a1 + 64) = v24; /*0x10054fe5e*/
      *(_QWORD *)(a1 + 88) = v26; /*0x10054fe62*/
      *(_QWORD *)(a1 + 96) = v28; /*0x10054fe66*/
      *(_QWORD *)(a1 + 104) = v30; /*0x10054fe6a*/
      *(_QWORD *)(a1 + 112) = v32; /*0x10054fe6e*/
      *(_QWORD *)(a1 + 120) = v34; /*0x10054fe72*/
      result = *(unsigned __int8 *)(a2 + 128); /*0x10054fe76*/
      *(_BYTE *)(a1 + 128) = result; /*0x10054fe7e*/
      return result;
  }
}