// __ZN13codexmate_lib8platform14text_injection15capture_context @ 0x1005ddc20 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::text_injection::capture_context::h2b395969184e0cdc(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r13
  __CGEventSource *v7; // rax
  __CGEventSource *v8; // rbx
  __CGEvent *KeyboardEvent; // r13
  CGEventRef v10; // rax
  CGEventRef v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v20; // [rsp+0h] [rbp-A0h]
  __int64 v21; // [rsp+8h] [rbp-98h] BYREF
  __int64 v22; // [rsp+10h] [rbp-90h]
  __int128 v23; // [rsp+18h] [rbp-88h]
  __int64 v24; // [rsp+28h] [rbp-78h]
  __int64 v25; // [rsp+30h] [rbp-70h]
  __int64 v26; // [rsp+38h] [rbp-68h] BYREF
  __int64 v27; // [rsp+40h] [rbp-60h]
  __int64 v28; // [rsp+48h] [rbp-58h]
  __int64 v29; // [rsp+50h] [rbp-50h]
  __int64 v30; // [rsp+58h] [rbp-48h]
  __int64 v31; // [rsp+60h] [rbp-40h]
  __int64 v32; // [rsp+68h] [rbp-38h]
  bool v33; // [rsp+77h] [rbp-29h]

  codexmate_lib::platform::text_injection::pasteboard_current_string::hc44da7c7bd12897e(&v21); /*0x1005ddc3b*/
  v1 = v21; /*0x1005ddc40*/
  v2 = 0; /*0x1005ddc47*/
  v3 = 1; /*0x1005ddc4f*/
  v4 = v22; /*0x1005ddc55*/
  if ( __OFSUB__(-v21, 1) ) /*0x1005ddc4c*/
    v4 = 1; /*0x1005ddc5c*/
  v29 = v4; /*0x1005ddc60*/
  v20 = v23; /*0x1005ddc6b*/
  v5 = v21; /*0x1005ddc72*/
  if ( __OFSUB__(-v21, 1) ) /*0x1005ddc4c*/
    v5 = 0; /*0x1005ddc75*/
  v31 = v5; /*0x1005ddc79*/
  v6 = 0; /*0x1005ddc82*/
  if ( !AXIsProcessTrusted() ) /*0x1005ddc8a*/
    goto LABEL_29; /*0x1005ddc8a*/
  codexmate_lib::platform::text_injection::pasteboard_current_string::hc44da7c7bd12897e(&v26); /*0x1005ddc94*/
  v7 = CGEventSourceCreate(kCGEventSourceStateHIDSystemState); /*0x1005ddc9e*/
  if ( !v7 ) /*0x1005ddca6*/
  {
LABEL_24:
    v3 = 1; /*0x1005dddfe*/
    if ( v26 != 0x8000000000000000LL && v26 ) /*0x1005dde1a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v26, 1); /*0x1005dde25*/
    goto LABEL_27; /*0x1005dde25*/
  }
  v8 = v7; /*0x1005ddcac*/
  KeyboardEvent = CGEventCreateKeyboardEvent(v7, 8u, 1); /*0x1005ddcc1*/
  v10 = CGEventCreateKeyboardEvent(v8, 8u, 0); /*0x1005ddcce*/
  v11 = v10; /*0x1005ddcd3*/
  if ( !KeyboardEvent ) /*0x1005ddcd9*/
  {
    if ( !v10 ) /*0x1005ddde7*/
      goto LABEL_23; /*0x1005ddde7*/
    goto LABEL_22; /*0x1005ddde7*/
  }
  if ( !v10 ) /*0x1005ddce2*/
  {
    v11 = KeyboardEvent; /*0x1005dddeb*/
LABEL_22:
    CFRelease(v11); /*0x1005dddee*/
LABEL_23:
    CFRelease(v8); /*0x1005dddf6*/
    goto LABEL_24; /*0x1005dddf9*/
  }
  CGEventSetFlags(KeyboardEvent, 0x100000u); /*0x1005ddcf0*/
  CGEventSetFlags(v11, 0x100000u); /*0x1005ddcfd*/
  CGEventPost(kCGHIDEventTap, KeyboardEvent); /*0x1005ddd07*/
  CGEventPost(kCGHIDEventTap, v11); /*0x1005ddd11*/
  CFRelease(KeyboardEvent); /*0x1005ddd19*/
  CFRelease(v11); /*0x1005ddd21*/
  CFRelease(v8); /*0x1005ddd29*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 80000000); /*0x1005ddd35*/
  codexmate_lib::platform::text_injection::pasteboard_current_string::hc44da7c7bd12897e(&v21); /*0x1005ddd41*/
  v6 = v21; /*0x1005ddd46*/
  v2 = 0; /*0x1005ddd4d*/
  if ( v21 == 0x8000000000000000LL ) /*0x1005ddd5c*/
    v6 = 0; /*0x1005ddd5c*/
  v3 = 1; /*0x1005ddd60*/
  if ( v21 != 0x8000000000000000LL ) /*0x1005ddd66*/
  {
    v3 = v22; /*0x1005ddd66*/
    v2 = v23; /*0x1005ddd6e*/
  }
  v32 = v26; /*0x1005ddd7a*/
  v33 = v26 == 0x8000000000000000LL; /*0x1005ddd81*/
  if ( v26 != 0x8000000000000000LL ) /*0x1005ddd85*/
  {
    v30 = v27; /*0x1005ddd8f*/
    codexmate_lib::platform::text_injection::pasteboard_write_string::hf48d08df45e15295(v27, v28); /*0x1005ddd93*/
    if ( v32 ) /*0x1005ddd9d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, 1); /*0x1005dddac*/
  }
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v3, v2); /*0x1005dddb7*/
  if ( !v12 ) /*0x1005dddbf*/
  {
    if ( v6 ) /*0x1005dddc4*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v6, 1); /*0x1005dddd5*/
      v2 = 0; /*0x1005dddda*/
      v3 = 1; /*0x1005ddddc*/
LABEL_28:
      v6 = 0; /*0x1005dde2c*/
      goto LABEL_29; /*0x1005dde2c*/
    }
    v3 = 1; /*0x1005ddeda*/
LABEL_27:
    v2 = 0; /*0x1005dde2a*/
    goto LABEL_28; /*0x1005dde2a*/
  }
LABEL_29:
  codexmate_lib::platform::text_injection::frontmost_application_info::h2160df8b181acf9f(&v21); /*0x1005dde2f*/
  v13 = v21; /*0x1005dde3b*/
  if ( v21 == 0x8000000000000000LL ) /*0x1005dde4f*/
  {
    v14 = 0; /*0x1005dde51*/
    v15 = 1; /*0x1005dde54*/
    v16 = 0; /*0x1005dde59*/
    v17 = 1; /*0x1005dde5b*/
    v13 = 0; /*0x1005dde60*/
  }
  else
  {
    v17 = v22; /*0x1005dde64*/
    v14 = v23; /*0x1005dde6b*/
    v15 = v24; /*0x1005dde72*/
    v16 = v25; /*0x1005dde76*/
  }
  v18 = v20; /*0x1005dde89*/
  if ( v1 == 0x8000000000000000LL ) /*0x1005dde90*/
    v18 = 0; /*0x1005dde90*/
  *(_QWORD *)a1 = v6; /*0x1005dde94*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1005dde97*/
  *(_QWORD *)(a1 + 16) = v2; /*0x1005dde9b*/
  *(_QWORD *)(a1 + 24) = v31; /*0x1005ddea3*/
  *(_QWORD *)(a1 + 32) = v29; /*0x1005ddeab*/
  *(_QWORD *)(a1 + 40) = v18; /*0x1005ddeaf*/
  *(_QWORD *)(a1 + 48) = v13; /*0x1005ddeb3*/
  *(_QWORD *)(a1 + 56) = v17; /*0x1005ddeb7*/
  *(_OWORD *)(a1 + 64) = v14; /*0x1005ddebb*/
  *(_QWORD *)(a1 + 80) = v15; /*0x1005ddec0*/
  *(_QWORD *)(a1 + 88) = v16; /*0x1005ddec4*/
  return a1; /*0x1005ddecb*/
}