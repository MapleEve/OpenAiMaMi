// __ZN13codexmate_lib8platform19voice_trigger_macos16capture_callback @ 0x1005e25f0 | 基线 same-set
CGEventRef __fastcall codexmate_lib::platform::voice_trigger_macos::capture_callback::he818bd59095654df(
        CGEventTapProxy a1,
        unsigned int a2,
        CGEventRef a3,
        _QWORD *a4)
{
  __CFMachPort *v6; // rdi
  int64_t IntegerValueField; // r15
  size_t *v9; // rbx
  __int64 v10; // rax
  CGEventFlags v11; // rax
  __int64 v12; // r12
  CGEventFlags Flags; // rax
  CGEventFlags v14; // r12
  __int64 v15; // rdx
  unsigned int v16; // r12d
  __CFMachPort *v17; // rdi
  __CFRunLoop *Current; // rax
  CGEventRef result; // rax
  size_t v20; // [rsp+8h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-E0h]
  __int64 v22; // [rsp+18h] [rbp-D8h]
  size_t v23; // [rsp+20h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+28h] [rbp-C8h]
  __int64 v25; // [rsp+30h] [rbp-C0h]
  size_t v26; // [rsp+38h] [rbp-B8h]
  __int64 v27; // [rsp+40h] [rbp-B0h]
  __int64 v28; // [rsp+48h] [rbp-A8h]
  size_t v29; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-98h] BYREF
  __int64 v31; // [rsp+60h] [rbp-90h]
  size_t v32; // [rsp+68h] [rbp-88h] BYREF
  __int64 v33; // [rsp+70h] [rbp-80h]
  __int64 v34; // [rsp+78h] [rbp-78h]
  size_t v35; // [rsp+90h] [rbp-60h] BYREF
  __int64 v36; // [rsp+98h] [rbp-58h]
  __int64 v37; // [rsp+A0h] [rbp-50h]
  __int64 v38; // [rsp+A8h] [rbp-48h]
  __int64 v39; // [rsp+B0h] [rbp-40h]
  __int64 v40; // [rsp+B8h] [rbp-38h]
  int64_t v41; // [rsp+C0h] [rbp-30h]
  CGEventFlags v42; // [rsp+C8h] [rbp-28h]

  if ( a2 >= 0xFFFFFFFE ) /*0x1005e260b*/
  {
    if ( a4 ) /*0x1005e2610*/
    {
      v6 = (__CFMachPort *)a4[5]; /*0x1005e2616*/
      if ( v6 ) /*0x1005e261d*/
        CGEventTapEnable(v6, 1); /*0x1005e2628*/
    }
    return a3; /*0x1005e262d*/
  }
  if ( !a4 ) /*0x1005e2635*/
    return a3; /*0x1005e2635*/
  if ( a2 - 10 >= 3 ) /*0x1005e2646*/
  {
    if ( a2 - 25 > 1 ) /*0x1005e2752*/
      return a3; /*0x1005e2752*/
    IntegerValueField = CGEventGetIntegerValueField(a3, kCGMouseEventButtonNumber) + 1000; /*0x1005e2768*/
    goto LABEL_8; /*0x1005e2773*/
  }
  IntegerValueField = CGEventGetIntegerValueField(a3, kCGKeyboardEventKeycode); /*0x1005e2659*/
  if ( a2 != 10 ) /*0x1005e2660*/
  {
LABEL_8:
    if ( a2 == 12 ) /*0x1005e266a*/
    {
      v11 = CGEventGetFlags(a3) & 0x9E0000; /*0x1005e2824*/
      v12 = a4[4]; /*0x1005e2829*/
      if ( (~*((_DWORD *)a4 + 8) & (unsigned int)v11) != 0 ) /*0x1005e2834*/
      {
        a4[4] = v11; /*0x1005e283a*/
        *a4 = 1; /*0x1005e283e*/
        a4[1] = IntegerValueField; /*0x1005e2845*/
        *((_BYTE *)a4 + 48) = 0; /*0x1005e2849*/
      }
      else if ( (~v11 & v12) != 0 ) /*0x1005e295d*/
      {
        if ( !*((_BYTE *)a4 + 48) /*0x1005e2991*/
          && *(_BYTE *)a4
          && (((unsigned __int64)(IntegerValueField - 54) < 0xA) & (unsigned __int8)(0x3F7u >> (IntegerValueField - 54))) == 1 )
        {
          v16 = dword_101601BE0[2 * IntegerValueField - 108] & v12 & 0x9E0000; /*0x1005e29a6*/
          codexmate_lib::platform::voice_trigger_macos::format_combo_label::h14e281cad1e42bc5( /*0x1005e29ba*/
            &v23,
            v16,
            IntegerValueField);
          codexmate_lib::platform::voice_trigger_macos::trigger_kind::h54f3afebbabc3835( /*0x1005e29c6*/
            (__int64 *)&v35,
            IntegerValueField);
          v31 = v25; /*0x1005e29d2*/
          v30 = v24; /*0x1005e29e7*/
          v29 = v23; /*0x1005e29ee*/
          v32 = v35; /*0x1005e29fd*/
          v33 = v36; /*0x1005e2a04*/
          v34 = v37; /*0x1005e2a0c*/
          v35 = v23; /*0x1005e2a10*/
          v36 = v24; /*0x1005e2a14*/
          v37 = v25; /*0x1005e2a18*/
          v38 = v32; /*0x1005e2a1c*/
          v39 = v33; /*0x1005e2a20*/
          v40 = v34; /*0x1005e2a24*/
          v41 = IntegerValueField; /*0x1005e2a28*/
          v42 = v16; /*0x1005e2a2c*/
          std::sync::mpmc::Sender$LT$T$GT$::send::ha197217bfe0f9e79(&v29, a4 + 2, &v35); /*0x1005e2a3f*/
LABEL_44:
          if ( v29 != 0x8000000000000001LL ) /*0x1005e2b80*/
            core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..platform..voice_trigger_macos..TriggerBinding$C$alloc..string..String$GT$$GT$::h0fac901a89446330(&v29); /*0x1005e2b89*/
          codexmate_lib::platform::voice_trigger_macos::disable_tap_then_stop_current_runloop::h2acb8d65b7dd0e61(a4[5]); /*0x1005e2b92*/
        }
        else
        {
          a4[4] = v11; /*0x1005e2aa0*/
          if ( !v11 ) /*0x1005e2aa7*/
          {
            *a4 = 0; /*0x1005e2aa9*/
            *((_BYTE *)a4 + 48) = 0; /*0x1005e2ab0*/
          }
        }
      }
      return nullptr; /*0x1005e284e*/
    }
    if ( a2 == 25 ) /*0x1005e2674*/
    {
      codexmate_lib::platform::voice_trigger_macos::trigger_label::hb826f923ee108692(&v20, IntegerValueField); /*0x1005e2684*/
      codexmate_lib::platform::voice_trigger_macos::trigger_kind::h54f3afebbabc3835((__int64 *)&v35, IntegerValueField); /*0x1005e2690*/
      v25 = v22; /*0x1005e269c*/
      v24 = v21; /*0x1005e26b1*/
      v23 = v20; /*0x1005e26b8*/
      v26 = v35; /*0x1005e26c7*/
      v27 = v36; /*0x1005e26ce*/
      v28 = v37; /*0x1005e26d9*/
      v35 = v20; /*0x1005e26e0*/
      v36 = v21; /*0x1005e26e4*/
      v37 = v22; /*0x1005e26e8*/
      v38 = v26; /*0x1005e26ec*/
      v39 = v27; /*0x1005e26f0*/
      v40 = v28; /*0x1005e26f4*/
      v41 = IntegerValueField; /*0x1005e26f8*/
      v42 = 0; /*0x1005e26fc*/
      std::sync::mpmc::Sender$LT$T$GT$::send::ha197217bfe0f9e79(&v29, a4 + 2, &v35); /*0x1005e2713*/
      if ( v29 != 0x8000000000000001LL ) /*0x1005e272c*/
      {
        if ( v29 == 0x8000000000000000LL ) /*0x1005e2738*/
        {
          v9 = (size_t *)&v30; /*0x1005e273e*/
        }
        else
        {
          v9 = &v32; /*0x1005e2a49*/
          if ( v29 ) /*0x1005e2a53*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v29, 1); /*0x1005e2a61*/
        }
        if ( *v9 ) /*0x1005e2a66*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9[1], *v9, 1); /*0x1005e2a77*/
      }
      goto LABEL_36; /*0x1005e2a77*/
    }
    return a3; /*0x1005e2c1e*/
  }
  if ( IntegerValueField == 53 ) /*0x1005e277d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, 9); /*0x1005e2783*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x1005e2792*/
    if ( !v10 ) /*0x1005e279a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x1005e2ba6*/
    *(_QWORD *)(v10 + 16) = 0xAE94E9918FE5A6A7LL; /*0x1005e27b4*/
    *(_QWORD *)(v10 + 8) = 0xE8A585E595BDE588LL; /*0x1005e27c2*/
    *(_QWORD *)v10 = 0xB6E6968FE5B2B7E5LL; /*0x1005e27d0*/
    *(_DWORD *)(v10 + 23) = -2105482322; /*0x1005e27d3*/
    v36 = 27; /*0x1005e27da*/
    v37 = v10; /*0x1005e27e2*/
    v38 = 27; /*0x1005e27e6*/
    v35 = 0x8000000000000000LL; /*0x1005e27f2*/
    std::sync::mpmc::Sender$LT$T$GT$::send::ha197217bfe0f9e79(&v29, a4 + 2, &v35); /*0x1005e2805*/
    if ( v29 == 0x8000000000000001LL ) /*0x1005e2811*/
      goto LABEL_36; /*0x1005e2811*/
    goto LABEL_26; /*0x1005e2811*/
  }
  Flags = CGEventGetFlags(a3); /*0x1005e2856*/
  v14 = Flags & 0x9E0000; /*0x1005e285e*/
  if ( (unsigned __int64)(IntegerValueField - 64) <= 0x3A ) /*0x1005e286d*/
  {
    v15 = 0x542AEBF04018001LL; /*0x1005e286f*/
    if ( _bittest64(&v15, IntegerValueField - 64) ) /*0x1005e2879*/
      v14 = Flags & 0x1E0000; /*0x1005e2884*/
  }
  if ( v14 ) /*0x1005e288a*/
  {
    *((_BYTE *)a4 + 48) = 1; /*0x1005e2890*/
    codexmate_lib::platform::voice_trigger_macos::format_combo_label::h14e281cad1e42bc5(&v23, v14, IntegerValueField); /*0x1005e28a2*/
    codexmate_lib::platform::voice_trigger_macos::trigger_kind::h54f3afebbabc3835((__int64 *)&v35, IntegerValueField); /*0x1005e28ae*/
    v31 = v25; /*0x1005e28ba*/
    v30 = v24; /*0x1005e28cf*/
    v29 = v23; /*0x1005e28d6*/
    v32 = v35; /*0x1005e28e5*/
    v33 = v36; /*0x1005e28ec*/
    v34 = v37; /*0x1005e28f4*/
    v35 = v23; /*0x1005e28f8*/
    v36 = v24; /*0x1005e28fc*/
    v37 = v25; /*0x1005e2900*/
    v38 = v32; /*0x1005e2904*/
    v39 = v33; /*0x1005e2908*/
    v40 = v34; /*0x1005e290c*/
    v41 = IntegerValueField; /*0x1005e2910*/
    v42 = v14; /*0x1005e2914*/
    std::sync::mpmc::Sender$LT$T$GT$::send::ha197217bfe0f9e79(&v29, a4 + 2, &v35); /*0x1005e2927*/
    if ( v29 == 0x8000000000000001LL ) /*0x1005e293d*/
    {
LABEL_36:
      v17 = (__CFMachPort *)a4[5]; /*0x1005e2a7c*/
      if ( v17 ) /*0x1005e2a83*/
        CGEventTapEnable(v17, 0); /*0x1005e2a87*/
      Current = CFRunLoopGetCurrent(); /*0x1005e2a8c*/
      CFRunLoopStop(Current); /*0x1005e2a94*/
      return nullptr; /*0x1005e2a9b*/
    }
LABEL_26:
    core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..platform..voice_trigger_macos..TriggerBinding$C$alloc..string..String$GT$$GT$::h0fac901a89446330(&v29); /*0x1005e2943*/
    goto LABEL_36; /*0x1005e294f*/
  }
  result = nullptr; /*0x1005e2ab7*/
  switch ( IntegerValueField ) /*0x1005e2ad5*/
  {
    case '6': /*0x1005e2ad5*/
    case '7': /*0x1005e2ad5*/
    case '8': /*0x1005e2ad5*/
    case ':': /*0x1005e2ad5*/
    case ';': /*0x1005e2ad5*/
    case '<': /*0x1005e2ad5*/
    case '=': /*0x1005e2ad5*/
    case '>': /*0x1005e2ad5*/
    case '?': /*0x1005e2ad5*/
    case '`': /*0x1005e2ad5*/
    case 'a': /*0x1005e2ad5*/
    case 'b': /*0x1005e2ad5*/
    case 'c': /*0x1005e2ad5*/
    case 'd': /*0x1005e2ad5*/
    case 'e': /*0x1005e2ad5*/
    case 'g': /*0x1005e2ad5*/
    case 'm': /*0x1005e2ad5*/
    case 'o': /*0x1005e2ad5*/
    case 'v': /*0x1005e2ad5*/
    case 'x': /*0x1005e2ad5*/
    case 'z': /*0x1005e2ad5*/
      codexmate_lib::platform::voice_trigger_macos::trigger_label::hb826f923ee108692(&v23, IntegerValueField); /*0x1005e2ae1*/
      codexmate_lib::platform::voice_trigger_macos::trigger_kind::h54f3afebbabc3835((__int64 *)&v35, IntegerValueField); /*0x1005e2aed*/
      v31 = v25; /*0x1005e2af9*/
      v30 = v24; /*0x1005e2b0e*/
      v29 = v23; /*0x1005e2b15*/
      v32 = v35; /*0x1005e2b24*/
      v33 = v36; /*0x1005e2b2b*/
      v34 = v37; /*0x1005e2b33*/
      v35 = v23; /*0x1005e2b37*/
      v36 = v24; /*0x1005e2b3b*/
      v37 = v25; /*0x1005e2b3f*/
      v38 = v32; /*0x1005e2b43*/
      v39 = v33; /*0x1005e2b47*/
      v40 = v34; /*0x1005e2b4b*/
      v41 = IntegerValueField; /*0x1005e2b4f*/
      v42 = 0; /*0x1005e2b53*/
      std::sync::mpmc::Sender$LT$T$GT$::send::ha197217bfe0f9e79(&v29, a4 + 2, &v35); /*0x1005e2b6a*/
      goto LABEL_44; /*0x1005e2b6a*/
    default:
      return result;
  }
  return result; /*0x1005e2c21*/
}