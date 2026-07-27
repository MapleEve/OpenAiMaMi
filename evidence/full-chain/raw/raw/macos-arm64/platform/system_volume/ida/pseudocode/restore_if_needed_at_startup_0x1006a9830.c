// __ZN13codexmate_lib8platform13system_volume28restore_if_needed_at_startup @ 0x1006a9830 | 基线 same-set
double __fastcall codexmate_lib::platform::system_volume::restore_if_needed_at_startup::h409842f23d89fe49(double a1)
{
  double result; // xmm0_8
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rsi
  unsigned __int8 *v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdx
  char **v11; // r8
  unsigned __int8 *v12; // rdi
  unsigned __int8 *v13; // rcx
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // r9
  unsigned __int8 *v17; // rsi
  unsigned __int8 *v18; // r8
  int v19; // edi
  int v20; // r9d
  int v21; // r11d
  int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  OSStatus PropertyData; // eax
  AudioObjectPropertyAddress inAddress; // [rsp+8h] [rbp-338h] BYREF
  __int64 v28; // [rsp+160h] [rbp-1E0h]
  __int64 v29; // [rsp+168h] [rbp-1D8h]
  __int64 outData; // [rsp+2F0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+2F8h] [rbp-48h]
  unsigned __int64 v32; // [rsp+300h] [rbp-40h]
  UInt32 ioDataSize[2]; // [rsp+308h] [rbp-38h] BYREF
  __int64 v34; // [rsp+310h] [rbp-30h]
  __int64 v35; // [rsp+318h] [rbp-28h]

  result = codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b((__int64 *)ioDataSize, a1); /*0x1006a9849*/
  codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(&inAddress, ioDataSize); /*0x1006a9858*/
  std::path::Path::_join::hb1a495d4f06b13b8(ioDataSize, v28, v29, &anon_4776471024d1e9bb78f2861cb2b51e1e_750, 24); /*0x1006a987c*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&inAddress); /*0x1006a9888*/
  v2 = v34; /*0x1006a988d*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&outData, v34, v35); /*0x1006a989c*/
  if ( *(_QWORD *)ioDataSize ) /*0x1006a98a8*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, *(_QWORD *)ioDataSize, 1); /*0x1006a98b2*/
  v3 = outData; /*0x1006a98b7*/
  if ( __OFSUB__(-outData, 1) ) /*0x1006a98be*/
  {
    if ( (v31 & 3) == 1 ) /*0x1006a98cf*/
    {
      v4 = v31 - 1; /*0x1006a98d5*/
      v5 = *(_QWORD *)(v31 - 1); /*0x1006a98d9*/
      v6 = *(_QWORD *)(v31 + 7); /*0x1006a98dd*/
      if ( *(_QWORD *)v6 ) /*0x1006a98e1*/
        (*(void (__fastcall **)(__int64, double))v6)(v5, result); /*0x1006a98ed*/
      v7 = *(_QWORD *)(v6 + 8); /*0x1006a98ef*/
      if ( v7 ) /*0x1006a98f7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x1006a9901*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x1006a9913*/
    }
    return result; /*0x1006a9918*/
  }
  v8 = (unsigned __int8 *)v31; /*0x1006a991d*/
  v9 = v32; /*0x1006a9921*/
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(&inAddress, v31, v32, &unk_1016021D0, 8); /*0x1006a993f*/
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x1006a994f*/
    ioDataSize,
    &inAddress);
  if ( ioDataSize[0] == 1 ) /*0x1006a9958*/
  {
    v10 = v34 + 8; /*0x1006a995e*/
    if ( v34 != -8 ) /*0x1006a9962*/
    {
      if ( v9 <= v10 ) /*0x1006a9967*/
      {
        if ( v9 != v10 ) /*0x1006a99a0*/
          goto LABEL_14; /*0x1006a99a0*/
      }
      else if ( (char)v8[v10] <= -65 ) /*0x1006a996e*/
      {
LABEL_14:
        v11 = &off_101967C50; /*0x1006a9970*/
        v12 = v8; /*0x1006a9977*/
        v13 = (unsigned __int8 *)v9; /*0x1006a997a*/
        goto LABEL_33; /*0x1006a997d*/
      }
    }
    v14 = &v8[v9]; /*0x1006a99a2*/
    v9 -= v10; /*0x1006a99a6*/
    v15 = &v8[v10]; /*0x1006a99a9*/
    v16 = nullptr; /*0x1006a99ac*/
    v17 = v15; /*0x1006a99af*/
    while ( v17 != v14 ) /*0x1006a99f0*/
    {
      v13 = v16; /*0x1006a99f2*/
      v19 = *v17; /*0x1006a99f5*/
      if ( (v19 & 0x80u) == 0 ) /*0x1006a99fb*/
      {
        v18 = v17 + 1; /*0x1006a99c0*/
      }
      else
      {
        v20 = v19 & 0x1F; /*0x1006a9a00*/
        v21 = v17[1] & 0x3F; /*0x1006a9a09*/
        if ( (unsigned __int8)v19 <= 0xDFu ) /*0x1006a9a11*/
        {
          v18 = v17 + 2; /*0x1006a9a4b*/
          v19 = v21 | (v20 << 6); /*0x1006a9a56*/
        }
        else
        {
          v22 = (v21 << 6) | v17[2] & 0x3F; /*0x1006a9a20*/
          if ( (unsigned __int8)v19 < 0xF0u ) /*0x1006a9a27*/
          {
            v18 = v17 + 3; /*0x1006a9a5e*/
            v19 = (v20 << 12) | v22; /*0x1006a9a69*/
          }
          else
          {
            v18 = v17 + 4; /*0x1006a9a29*/
            v19 = ((v19 & 7) << 18) | (v22 << 6) | v17[3] & 0x3F; /*0x1006a9a43*/
          }
        }
      }
      v16 = &v18[v13 - v17]; /*0x1006a99ca*/
      v17 = v18; /*0x1006a99e4*/
      if ( (unsigned int)(v19 - 48) >= 0xA && (unsigned int)(v19 - 45) >= 2 ) /*0x1006a99dd*/
        goto LABEL_29; /*0x1006a99e7*/
    }
    v13 = (unsigned __int8 *)v9; /*0x1006a9a71*/
LABEL_29:
    if ( v13 ) /*0x1006a9a77*/
    {
      if ( (unsigned __int64)v13 >= v9 ) /*0x1006a9a7c*/
      {
        if ( v13 != (unsigned __int8 *)v9 ) /*0x1006a9a9a*/
          goto LABEL_32; /*0x1006a9a9a*/
      }
      else if ( (char)v13[(_QWORD)v15] < -64 ) /*0x1006a9a82*/
      {
LABEL_32:
        v11 = &off_101967C68; /*0x1006a9a84*/
        v12 = v15; /*0x1006a9a8b*/
        v10 = 0; /*0x1006a9a8e*/
LABEL_33:
        core::str::slice_error_fail::h480e51fbd8b15eba(v12, v9, v10, v13, v11); /*0x1006a9a90*/
      }
    }
    v23 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v15, v13); /*0x1006a9aa2*/
    v25 = core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f32$GT$::from_str::h705976c9e3537792( /*0x1006a9ab2*/
            v23,
            v24,
            result);
    if ( v3 ) /*0x1006a9ab8*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v3, 1); /*0x1006a9ac5*/
    if ( (v25 & 1) == 0 ) /*0x1006a9ace*/
    {
      *(_QWORD *)&inAddress.mSelector = 0x676C6F62644F7574LL; /*0x1006a9ada*/
      inAddress.mElement = 0; /*0x1006a9ae1*/
      LODWORD(outData) = 0; /*0x1006a9aeb*/
      ioDataSize[0] = 4; /*0x1006a9af2*/
      PropertyData = AudioObjectGetPropertyData(1u, &inAddress, 0, nullptr, ioDataSize, &outData); /*0x1006a9b11*/
      if ( PropertyData == 0 && (_DWORD)outData != 0 ) /*0x1006a9b20*/
      {
        *(_QWORD *)&result = _mm_cvtsi32_si128(HIDWORD(v25)).u64[0]; /*0x1006a9b2e*/
        codexmate_lib::platform::system_volume::set_volume::ha0dfc7f035d0b8e5(outData, *(float *)&result); /*0x1006a9b33*/
      }
      return codexmate_lib::platform::system_volume::clear_marker::ha27159d58c68f744(result); /*0x1006a9b38*/
    }
  }
  else if ( v3 ) /*0x1006a9985*/
  {
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v3, 1); /*0x1006a9996*/
  }
  return result; /*0x1006a9b3d*/
}