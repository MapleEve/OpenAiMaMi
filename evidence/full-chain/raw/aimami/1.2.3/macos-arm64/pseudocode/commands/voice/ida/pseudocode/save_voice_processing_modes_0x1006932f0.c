// __ZN13codexmate_lib8commands5voice27save_voice_processing_modes @ 0x1006932f0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice::save_voice_processing_modes::h24790f7afeaa302e(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        double a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbx
  char v12; // r12
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  _QWORD *v19; // rsi
  __int64 v20; // rax
  _QWORD v22[12]; // [rsp+0h] [rbp-140h] BYREF
  _QWORD v23[12]; // [rsp+60h] [rbp-E0h] BYREF
  _QWORD v24[3]; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-60h]
  __int64 v27; // [rsp+E8h] [rbp-58h]
  __int64 v28; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-48h]
  __int64 v30; // [rsp+100h] [rbp-40h]
  __int64 *v31; // [rsp+108h] [rbp-38h]
  _QWORD *v32; // [rsp+110h] [rbp-30h]

  v31 = a3; /*0x100693304*/
  v32 = a2; /*0x10069330b*/
  v5 = *a2; /*0x10069330f*/
  if ( !*a2 ) /*0x10069330f*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v32); /*0x100693588*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x10069331b*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10069332a*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x100693595*/
    LOBYTE(v8) = v8 ^ 1; /*0x100693597*/
  }
  else
  {
    v8 = 0; /*0x100693336*/
  }
  if ( !*((_BYTE *)v32 + 8) ) /*0x10069334c*/
  {
    v14 = (__int64)(v32 + 2); /*0x100693431*/
    v22[3] = v31[3]; /*0x10069343d*/
    v22[2] = v31[2]; /*0x100693448*/
    v15 = *v31; /*0x10069344f*/
    v22[1] = v31[1]; /*0x100693456*/
    v22[0] = v15; /*0x10069345d*/
    codexmate_lib::core::voice::workspace::save_processing_modes::heced82663aa80ea0(v23, v32 + 2, v22); /*0x100693472*/
    if ( LODWORD(v23[0]) == 11 ) /*0x10069347e*/
    {
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf6edda7bcbeb3a54((__int64)v22, v14); /*0x100693487*/
      qmemcpy(a1, v22, 0x50u); /*0x10069349b*/
      v19 = &v22[10]; /*0x10069349b*/
      v18 = a1 + 10; /*0x10069349b*/
      v17 = 0; /*0x10069349b*/
      if ( (_BYTE)v8 ) /*0x1006934a0*/
      {
LABEL_16:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v32); /*0x10069355e*/
        return a1; /*0x100693565*/
      }
    }
    else
    {
      qmemcpy(v22, v23, sizeof(v22)); /*0x1006934c1*/
      v28 = 0; /*0x1006934c4*/
      v29 = 1; /*0x1006934cc*/
      v30 = 0; /*0x1006934d4*/
      v24[2] = 1610612768; /*0x1006934dc*/
      v24[0] = &v28; /*0x1006934e8*/
      v24[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006934f3*/
      v19 = v24; /*0x1006934f7*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006934fe*/
                              v22,
                              v24) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006935fc*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v25,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v25 = v28; /*0x100693513*/
      v26 = v29; /*0x100693517*/
      v27 = v30; /*0x10069351f*/
      v18 = v23; /*0x100693523*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v23); /*0x10069352a*/
      a1[3] = v27; /*0x100693533*/
      v20 = v25; /*0x100693537*/
      v17 = v26; /*0x10069353b*/
      a1[2] = v26; /*0x10069353f*/
      a1[1] = v20; /*0x100693543*/
      *a1 = 0x8000000000000000LL; /*0x10069354b*/
      if ( (_BYTE)v8 ) /*0x100693550*/
        goto LABEL_16; /*0x100693550*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100693603*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v18, v19, v16, v17) )
    {
      *((_BYTE *)v32 + 8) = 1; /*0x100693614*/
    }
    goto LABEL_16; /*0x100693618*/
  }
  v23[0] = 0; /*0x100693352*/
  v23[1] = 1; /*0x10069335d*/
  v23[2] = 0; /*0x100693368*/
  v22[2] = 1610612768; /*0x100693373*/
  v22[0] = v23; /*0x100693385*/
  v22[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100693393*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v22) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006935bd*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v25,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v9 = v23[0]; /*0x1006933bd*/
  v10 = v8; /*0x1006933c4*/
  v11 = v23[1]; /*0x1006933c6*/
  v12 = v23[2]; /*0x1006933cd*/
  LODWORD(v24[0]) = *(_DWORD *)((char *)&v23[2] + 1); /*0x1006933db*/
  *(_DWORD *)((char *)v24 + 3) = HIDWORD(v23[2]); /*0x1006933e4*/
  if ( !(_BYTE)v10
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v10) )
  {
    *((_BYTE *)v32 + 8) = 1; /*0x1006935d5*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v32); /*0x1006933fe*/
  v13 = v24[0]; /*0x100693403*/
  *((_DWORD *)a1 + 7) = *(_DWORD *)((char *)v24 + 3); /*0x100693409*/
  *(_DWORD *)((char *)a1 + 25) = v13; /*0x10069340d*/
  a1[1] = v9; /*0x100693411*/
  a1[2] = v11; /*0x100693415*/
  *((_BYTE *)a1 + 24) = v12; /*0x100693419*/
  *a1 = 0x8000000000000000LL; /*0x100693420*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v31, a4); /*0x100693427*/
  return a1; /*0x10069356d*/
}