// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x10036bca0 depth=2
// _::clone17h87ba61d57448fd51E_0
__int64 __fastcall _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51(
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
  volatile signed __int64 *v11; // rcx
  bool v12; // of
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

  v2 = *(volatile signed __int64 **)(a2 + 72); /*0x10036bcb4*/
  if ( _InterlockedIncrement64(v2) <= 0 ) /*0x10036bcbc*/
LABEL_33:
    BUG(); /*0x10036bf26*/
  v43 = v2; /*0x10036bcc8*/
  v40 = v2; /*0x10036bccc*/
  v5 = *(_QWORD *)(a2 + 80); /*0x10036bcd0*/
  v6 = *(_QWORD *)a2; /*0x10036bcd4*/
  v7 = *(volatile signed __int64 **)(a2 + 8); /*0x10036bcd7*/
  if ( *(_QWORD *)a2 ) /*0x10036bcd4*/
  {
    if ( (_DWORD)v6 == 1 ) /*0x10036bce8*/
    {
      if ( _InterlockedIncrement64(v7 + 48) > 0 ) /*0x10036bcf6*/
        goto LABEL_5; /*0x10036bcf6*/
LABEL_9:
      std::process::abort::h38b4a24325fecca0(); /*0x10036bdb7*/
    }
    v14 = _InterlockedIncrement64(v7); /*0x10036bdc1*/
    if ( (v14 < 0) ^ __OFSUB__((_DWORD)v6, 1) | (v14 == 0) ) /*0x10036bdc5*/
      goto LABEL_9; /*0x10036bdc5*/
  }
  else if ( _InterlockedIncrement64(v7 + 64) <= 0 ) /*0x10036bdb1*/
  {
    goto LABEL_9; /*0x10036bdb1*/
  }
LABEL_5:
  v42 = v5; /*0x10036bcfc*/
  v41 = v7; /*0x10036bd00*/
  Main = CFRunLoopGetMain(); /*0x10036bd09*/
  memset(&context, 0, 72); /*0x10036bd21*/
  context.perform = (void (__cdecl *)(void *))tao::platform_impl::platform::event_loop::Proxy$LT$T$GT$::new::event_loop_proxy_handler::hc18ebd48ddf2fd35; /*0x10036bd37*/
  v9 = (volatile signed __int64 *)CFRunLoopSourceCreate(nullptr, 0x7FFFFFFFFFFFFFFELL, &context); /*0x10036bd63*/
  CFRunLoopAddSource(Main, (CFRunLoopSourceRef)v9, kCFRunLoopCommonModes); /*0x10036bd66*/
  CFRunLoopWakeUp(Main); /*0x10036bd6e*/
  context.version = v6; /*0x10036bd73*/
  context.info = (void *)v41; /*0x10036bd7e*/
  context.retain = (const void *(__cdecl *)(const void *))v9; /*0x10036bd85*/
  v10 = *(_QWORD *)(a2 + 24); /*0x10036bd8c*/
  v11 = *(volatile signed __int64 **)(a2 + 32); /*0x10036bd90*/
  v12 = __OFSUB__(v10, 2); /*0x10036bd94*/
  if ( v10 == 2 ) /*0x10036bd98*/
  {
    v13 = _InterlockedIncrement64(v11) <= 0; /*0x10036bdcd*/
  }
  else
  {
    v12 = __OFSUB__((_DWORD)v10, 1); /*0x10036bd9a*/
    if ( (_DWORD)v10 != 1 ) /*0x10036bd9d*/
    {
      v15 = v43; /*0x10036be02*/
      v18 = _InterlockedIncrement64(v11 + 64); /*0x10036be06*/
      if ( !((v18 < 0) ^ __OFSUB__((_DWORD)v10, 1) | (v18 == 0)) ) /*0x10036be0e*/
        goto LABEL_14; /*0x10036be0e*/
LABEL_18:
      std::process::abort::h38b4a24325fecca0(); /*0x10036be10*/
    }
    v13 = _InterlockedIncrement64(v11 + 48) <= 0; /*0x10036bd9f*/
  }
  v15 = v43; /*0x10036bdd1*/
  if ( v13 ) /*0x10036bdd5*/
    goto LABEL_18; /*0x10036bdd5*/
LABEL_14:
  v38 = v10; /*0x10036bdd7*/
  v39 = v11; /*0x10036bddb*/
  v16 = *(_QWORD *)(a2 + 40); /*0x10036bddf*/
  switch ( v16 ) /*0x10036bdf1*/
  {
    case 0LL: /*0x10036bdf1*/
      v9 = *(volatile signed __int64 **)(a2 + 48); /*0x10036be27*/
      v20 = _InterlockedIncrement64(v9 + 65); /*0x10036be2b*/
      if ( (v20 < 0) ^ v12 | (v20 == 0) ) /*0x10036be33*/
        goto LABEL_24; /*0x10036be33*/
      goto LABEL_25; /*0x10036be33*/
    case 1LL: /*0x10036bdf1*/
      v9 = *(volatile signed __int64 **)(a2 + 48); /*0x10036be37*/
      v21 = _InterlockedIncrement64(v9 + 49); /*0x10036be3b*/
      if ( (v21 < 0) ^ v12 | (v21 == 0) ) /*0x10036be43*/
        goto LABEL_24; /*0x10036be43*/
      goto LABEL_25; /*0x10036be43*/
    case 2LL: /*0x10036bdf1*/
      v9 = *(volatile signed __int64 **)(a2 + 48); /*0x10036be1a*/
      v19 = _InterlockedIncrement64(v9 + 1); /*0x10036be1e*/
      if ( (v19 < 0) ^ v12 | (v19 == 0) ) /*0x10036be23*/
LABEL_24:
        std::process::abort::h38b4a24325fecca0(); /*0x10036be45*/
      goto LABEL_25; /*0x10036be23*/
    case 3LL: /*0x10036bdf1*/
    case 4LL: /*0x10036bdf1*/
      v9 = *(volatile signed __int64 **)(a2 + 48); /*0x10036bdf3*/
      v17 = _InterlockedIncrement64(v9); /*0x10036bdf7*/
      if ( (v17 < 0) ^ v12 | (v17 == 0) ) /*0x10036bdfb*/
        goto LABEL_33; /*0x10036bdfb*/
      goto LABEL_25; /*0x10036bdfb*/
    case 5LL: /*0x10036bdf1*/
LABEL_25:
      v22 = *(volatile signed __int64 **)(a2 + 56); /*0x10036be4f*/
      v23 = _InterlockedIncrement64(v22); /*0x10036be53*/
      if ( (v23 < 0) ^ v12 | (v23 == 0) ) /*0x10036be57*/
        goto LABEL_33; /*0x10036be57*/
      v24 = *(volatile signed __int64 **)(a2 + 64); /*0x10036be5d*/
      v25 = _InterlockedIncrement64(v24); /*0x10036be61*/
      if ( (v25 < 0) ^ v12 | (v25 == 0) ) /*0x10036be65*/
        goto LABEL_33; /*0x10036be65*/
      v26 = *(volatile signed __int64 **)(a2 + 88); /*0x10036be6b*/
      v27 = _InterlockedIncrement64(v26); /*0x10036be6f*/
      if ( (v27 < 0) ^ v12 | (v27 == 0) ) /*0x10036be73*/
        goto LABEL_33; /*0x10036be73*/
      v28 = *(volatile signed __int64 **)(a2 + 96); /*0x10036be79*/
      v29 = _InterlockedIncrement64(v28); /*0x10036be7d*/
      if ( (v29 < 0) ^ v12 | (v29 == 0) ) /*0x10036be81*/
        goto LABEL_33; /*0x10036be81*/
      v30 = *(volatile signed __int64 **)(a2 + 104); /*0x10036be87*/
      v31 = _InterlockedIncrement64(v30); /*0x10036be8b*/
      if ( (v31 < 0) ^ v12 | (v31 == 0) ) /*0x10036be8f*/
        goto LABEL_33; /*0x10036be8f*/
      v32 = *(volatile signed __int64 **)(a2 + 112); /*0x10036be95*/
      v33 = _InterlockedIncrement64(v32); /*0x10036be99*/
      if ( (v33 < 0) ^ v12 | (v33 == 0) ) /*0x10036be9d*/
        goto LABEL_33; /*0x10036be9d*/
      v34 = *(volatile signed __int64 **)(a2 + 120); /*0x10036bea3*/
      v35 = _InterlockedIncrement64(v34); /*0x10036bea7*/
      if ( (v35 < 0) ^ v12 | (v35 == 0) ) /*0x10036beac*/
        goto LABEL_33; /*0x10036beac*/
      *(_QWORD *)(a1 + 72) = v15; /*0x10036beae*/
      *(_QWORD *)(a1 + 80) = v42; /*0x10036beb6*/
      *(_QWORD *)a1 = context.version; /*0x10036bec1*/
      *(_QWORD *)(a1 + 8) = context.info; /*0x10036becb*/
      *(_QWORD *)(a1 + 16) = context.retain; /*0x10036bed6*/
      *(_QWORD *)(a1 + 24) = v10; /*0x10036beda*/
      *(_QWORD *)(a1 + 32) = v11; /*0x10036bede*/
      *(_QWORD *)(a1 + 40) = v16; /*0x10036bee2*/
      *(_QWORD *)(a1 + 48) = v9; /*0x10036bee6*/
      *(_QWORD *)(a1 + 56) = v22; /*0x10036beea*/
      *(_QWORD *)(a1 + 64) = v24; /*0x10036beee*/
      *(_QWORD *)(a1 + 88) = v26; /*0x10036bef2*/
      *(_QWORD *)(a1 + 96) = v28; /*0x10036bef6*/
      *(_QWORD *)(a1 + 104) = v30; /*0x10036befa*/
      *(_QWORD *)(a1 + 112) = v32; /*0x10036befe*/
      *(_QWORD *)(a1 + 120) = v34; /*0x10036bf02*/
      result = *(unsigned __int8 *)(a2 + 128); /*0x10036bf06*/
      *(_BYTE *)(a1 + 128) = result; /*0x10036bf0e*/
      return result;
  }
}