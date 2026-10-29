// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::read_backup_bytes::hcc31af03538a90c5; addr: 0x100220fd0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
void __fastcall codexmate_lib::core::relay::config_takeover::read_backup_bytes::hcc31af03538a90c5(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rsi
  unsigned __int64 *v22; // rdx
  _QWORD v23[3]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v24; // [rsp+18h] [rbp-E8h] BYREF
  unsigned __int64 v25; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v26; // [rsp+28h] [rbp-D8h]
  __int64 (__fastcall *v27)(_QWORD, _QWORD); // [rsp+30h] [rbp-D0h]
  _QWORD v28[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v29[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+D8h] [rbp-28h] BYREF

  v28[0] = a4; /*0x100220feb*/
  v28[1] = a5; /*0x100220fef*/
  std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v24, a2, a3); /*0x100220ffa*/
  v6 = v25; /*0x100220fff*/
  if ( (_DWORD)v24 == 1 )
  {
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v25) )
    {
      v29[0] = v6; /*0x100221023*/
      v24 = (__int64)v28; /*0x10022102b*/
      v25 = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100221039*/
      v26 = v29; /*0x100221044*/
      v27 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100221052*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        v23,
        "\binspect \xC0\x0F for recovery: \xC0\x05read \xC0\x0F for recovery: \xC0\x05read \xC0\x09 failed: \xC0 remove r"
        "estored takeover backup \xC0\x02: \xC0\xC0\x2A is damaged and was preserved for recovery",
        &v24);
      a1[3] = v23[2]; /*0x10022107a*/
      v7 = v23[0]; /*0x10022107e*/
      a1[2] = v23[1]; /*0x10022108c*/
      a1[1] = v7; /*0x100221090*/
      *a1 = 10; /*0x100221094*/
      if ( (v29[0] & 3) == 1 ) /*0x1002210a7*/
      {
        v8 = v29[0] - 1LL; /*0x1002210ad*/
        v9 = *(_QWORD *)(v29[0] - 1LL); /*0x1002210b1*/
        v10 = *(_QWORD *)(v29[0] + 7LL); /*0x1002210b5*/
        if ( *(_QWORD *)v10 ) /*0x1002210b9*/
          (*(void (__fastcall **)(__int64))v10)(v9); /*0x1002210c5*/
        v11 = *(_QWORD *)(v10 + 8); /*0x1002210c7*/
        if ( v11 ) /*0x1002210cf*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16)); /*0x1002210d9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24, 8); /*0x1002210eb*/
      }
    }
    else
    {
      a1[1] = 0x8000000000000000LL; /*0x100221273*/
      *a1 = 11; /*0x100221277*/
      if ( (v6 & 3) == 1 ) /*0x100221287*/
      {
        v18 = v6 - 1; /*0x100221289*/
        v19 = *(_QWORD *)(v6 - 1); /*0x10022128d*/
        v20 = *(_QWORD *)(v6 + 7); /*0x100221291*/
        if ( *(_QWORD *)v20 ) /*0x100221295*/
          (*(void (__fastcall **)(__int64))v20)(v19); /*0x1002212a0*/
        v21 = *(_QWORD *)(v20 + 8); /*0x1002212a2*/
        if ( v21 ) /*0x1002212a9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v21, *(_QWORD *)(v20 + 16)); /*0x1002212b2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 24, 8); /*0x1002212d3*/
      }
    }
  }
  else if ( (v25 & 0xF00000000000LL) == 0x800000000000LL )
  {
    std::fs::read::inner::h6a30c15c40add28b(&v24, a2, a3); /*0x100221122*/
    v12 = v25; /*0x10022112e*/
    if ( __OFSUB__(-v24, 1) )
    {
      v30 = v25; /*0x100221141*/
      v24 = (__int64)v28; /*0x100221149*/
      v25 = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100221157*/
      v26 = &v30; /*0x100221162*/
      v27 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100221170*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        v29,
        "\x05read \xC0\x0F for recovery: \xC0\x05read \xC0\x09 failed: \xC0 remove restored takeover backup \xC0\x02: \xC0\xC0\x2A is damaged and was preserved for recovery",
        &v24);
      v24 = v29[0]; /*0x100221196*/
      v25 = v29[1]; /*0x10022119d*/
      v26 = (unsigned __int64 *)v29[2]; /*0x1002211a8*/
      if ( (v30 & 3) == 1 ) /*0x1002211bb*/
      {
        v13 = v30 - 1; /*0x1002211bd*/
        v14 = *(_QWORD *)(v30 - 1); /*0x1002211c1*/
        v15 = *(_QWORD *)(v30 + 7); /*0x1002211c5*/
        if ( *(_QWORD *)v15 ) /*0x1002211c9*/
          (*(void (__fastcall **)(__int64))v15)(v14); /*0x1002211d5*/
        v16 = *(_QWORD *)(v15 + 8); /*0x1002211d7*/
        if ( v16 ) /*0x1002211df*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x1002211e9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x1002211fb*/
      }
      *a1 = 10; /*0x100221200*/
      v17 = v25; /*0x10022120e*/
      a1[1] = v24; /*0x100221215*/
      a1[2] = v17; /*0x100221219*/
      a1[3] = v26; /*0x100221224*/
    }
    else
    {
      v22 = v26; /*0x1002212d8*/
      a1[1] = v24; /*0x1002212df*/
      a1[2] = v12; /*0x1002212e3*/
      a1[3] = v22; /*0x1002212e7*/
      *a1 = 11; /*0x1002212eb*/
    }
  }
  else
  {
    v24 = (__int64)v28; /*0x100221231*/
    v25 = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x10022123f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x100221258*/
      a1 + 1,
      "\xC0\x3A is not a regular recovery file; preserved without changes",
      &v24);
    *a1 = 9; /*0x10022125d*/
  }
}
