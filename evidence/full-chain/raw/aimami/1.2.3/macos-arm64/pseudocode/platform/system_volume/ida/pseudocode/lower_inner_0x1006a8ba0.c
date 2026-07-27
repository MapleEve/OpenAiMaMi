// __ZN13codexmate_lib8platform13system_volume11lower_inner @ 0x1006a8ba0 | 基线 same-set
char __fastcall codexmate_lib::platform::system_volume::lower_inner::hea2cef8d33aa61c7(float a1)
{
  OSStatus PropertyData; // eax
  AudioObjectID v2; // r12d
  OSStatus v3; // eax
  __int64 v4; // rbx
  OSStatus v5; // r14d
  int v6; // ecx
  float v7; // xmm0_4
  float v8; // xmm1_4
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // al
  int v13; // ebx
  int v14; // xmm0_4
  AudioObjectID v15; // ebx
  double v16; // xmm0_8
  void *v17; // r14
  size_t v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r14
  void *v22; // r13
  __int64 v23; // r12
  void *v24; // r12
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // r12
  __int64 v33; // rsi
  char v34; // al
  __int64 inAddress; // [rsp+0h] [rbp-350h] BYREF
  void *inAddress_8; // [rsp+8h] [rbp-348h]
  size_t __nbyte; // [rsp+10h] [rbp-340h]
  __int64 v39; // [rsp+158h] [rbp-1F8h]
  __int64 v40; // [rsp+160h] [rbp-1F0h]
  float v41; // [rsp+2E8h] [rbp-68h] BYREF
  float v42; // [rsp+2ECh] [rbp-64h]
  UInt32 ioDataSize[2]; // [rsp+2F0h] [rbp-60h] BYREF
  void *__src; // [rsp+2F8h] [rbp-58h]
  size_t __n; // [rsp+300h] [rbp-50h]
  void *v46; // [rsp+308h] [rbp-48h]
  _QWORD outData[2]; // [rsp+310h] [rbp-40h] BYREF
  float v48; // [rsp+324h] [rbp-2Ch]

  v42 = a1; /*0x1006a8bb4*/
  inAddress = 0x676C6F62644F7574LL; /*0x1006a8bc3*/
  LODWORD(inAddress_8) = 0; /*0x1006a8bca*/
  LODWORD(outData[0]) = 0; /*0x1006a8bd4*/
  ioDataSize[0] = 4; /*0x1006a8bdb*/
  LOBYTE(PropertyData) = AudioObjectGetPropertyData( /*0x1006a8c01*/
                           1u,
                           (const AudioObjectPropertyAddress *)&inAddress,
                           0,
                           nullptr,
                           ioDataSize,
                           outData) == 0;
  v2 = outData[0]; /*0x1006a8c04*/
  if ( ((unsigned __int8)PropertyData & (LODWORD(outData[0]) != 0)) != 1 ) /*0x1006a8c13*/
    return PropertyData; /*0x1006a8c13*/
  inAddress = 0x6F757470766D7663LL; /*0x1006a8c23*/
  LODWORD(inAddress_8) = 0; /*0x1006a8c2a*/
  LODWORD(outData[0]) = 0; /*0x1006a8c34*/
  ioDataSize[0] = 4; /*0x1006a8c3b*/
  PropertyData = AudioObjectGetPropertyData( /*0x1006a8c58*/
                   v2,
                   (const AudioObjectPropertyAddress *)&inAddress,
                   0,
                   nullptr,
                   ioDataSize,
                   outData);
  if ( !PropertyData ) /*0x1006a8c5f*/
  {
    v8 = *(float *)outData; /*0x1006a8db6*/
    if ( *(float *)outData <= 0.050000001 ) /*0x1006a8dc6*/
      return PropertyData; /*0x1006a8dc6*/
LABEL_17:
    v48 = v8; /*0x1006a8dcc*/
    v9 = codexmate_lib::platform::system_volume::SAVED_VOLUME::h0fa5a1fc4df65609; /*0x1006a8dd1*/
    if ( !codexmate_lib::platform::system_volume::SAVED_VOLUME::h0fa5a1fc4df65609 ) /*0x1006a8ddb*/
      v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::platform::system_volume::SAVED_VOLUME::h0fa5a1fc4df65609); /*0x1006a90b9*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v9); /*0x1006a8deb*/
    if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006a8dfa*/
    {
      v34 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, &inAddress, v10, v11); /*0x1006a90c1*/
      v11 = (unsigned __int8)byte_101A06058; /*0x1006a90c6*/
      if ( byte_101A06058 ) /*0x1006a90cf*/
      {
        if ( !v34 ) /*0x1006a90d3*/
        {
LABEL_22:
          LOBYTE(PropertyData) = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::system_volume::SAVED_VOLUME::h0fa5a1fc4df65609); /*0x1006a8e1d*/
          return PropertyData; /*0x1006a8e29*/
        }
LABEL_21:
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006a90de*/
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v9,
                                 &inAddress,
                                 v10,
                                 v11) )
        {
          byte_101A06058 = 1; /*0x1006a90eb*/
        }
        goto LABEL_22; /*0x1006a90f2*/
      }
      v12 = v34 ^ 1; /*0x1006a90f7*/
      v13 = dword_101A0605C; /*0x1006a90f9*/
      v14 = LODWORD(v48); /*0x1006a9101*/
      if ( !dword_101A0605C ) /*0x1006a9106*/
        goto LABEL_24; /*0x1006a9106*/
    }
    else
    {
      if ( byte_101A06058 ) /*0x1006a8e0f*/
        goto LABEL_21; /*0x1006a8e0f*/
      v12 = 0; /*0x1006a8e2e*/
      v13 = dword_101A0605C; /*0x1006a8e30*/
      v14 = LODWORD(v48); /*0x1006a8e38*/
      if ( !dword_101A0605C ) /*0x1006a8e3d*/
      {
LABEL_24:
        dword_101A0605C = 1; /*0x1006a8e3f*/
        dword_101A06060 = v14; /*0x1006a8e49*/
      }
    }
    if ( !v12 /*0x1006a9111*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, &inAddress, v10, v11) )
    {
      byte_101A06058 = 1; /*0x1006a911e*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::system_volume::SAVED_VOLUME::h0fa5a1fc4df65609); /*0x1006a8e68*/
    if ( v13 ) /*0x1006a8e6f*/
      goto LABEL_37; /*0x1006a8e6f*/
    v15 = v2; /*0x1006a8e75*/
    v41 = v48; /*0x1006a8e7d*/
    v16 = codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b( /*0x1006a8e89*/
            (__int64 *)ioDataSize,
            COERCE_DOUBLE((unsigned __int64)LODWORD(v48)));
    codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(&inAddress, ioDataSize); /*0x1006a8e98*/
    std::path::Path::_join::hb1a495d4f06b13b8(ioDataSize, v39, v40, &anon_4776471024d1e9bb78f2861cb2b51e1e_750, 24); /*0x1006a8ebc*/
    core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&inAddress); /*0x1006a8ec8*/
    v17 = __src; /*0x1006a8ecd*/
    v18 = __n; /*0x1006a8ed1*/
    v19 = std::path::Path::parent::h4c3ac26770731fbb(__src, __n); /*0x1006a8edb*/
    if ( v19 ) /*0x1006a8ee3*/
    {
      std::path::Path::to_path_buf::h73855ce4b54f7174(&inAddress, v19, v20); /*0x1006a8eef*/
      v46 = v17; /*0x1006a8ef4*/
      v21 = inAddress; /*0x1006a8ef8*/
      v22 = inAddress_8; /*0x1006a8eff*/
      LOWORD(inAddress) = 511; /*0x1006a8f0d*/
      BYTE2(inAddress) = 1; /*0x1006a8f16*/
      v23 = std::fs::DirBuilder::_create::h099c6e2853c95452(&inAddress, inAddress_8, __nbyte); /*0x1006a8f2c*/
      if ( v21 ) /*0x1006a8f32*/
        v16 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v21, 1); /*0x1006a8f3f*/
      v17 = v46; /*0x1006a8f4d*/
      if ( (v23 & 3) == 1 ) /*0x1006a8f51*/
      {
        v30 = v23 - 1; /*0x1006a9060*/
        v31 = *(_QWORD *)(v23 - 1); /*0x1006a9063*/
        v32 = *(_QWORD *)(v23 + 7); /*0x1006a9068*/
        if ( *(_QWORD *)v32 ) /*0x1006a906d*/
          (*(void (__fastcall **)(__int64, double))v32)(v31, v16); /*0x1006a9079*/
        v33 = *(_QWORD *)(v32 + 8); /*0x1006a907b*/
        if ( v33 ) /*0x1006a9083*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v33, *(_QWORD *)(v32 + 16)); /*0x1006a908d*/
        v16 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 24, 8); /*0x1006a909f*/
        v17 = v46; /*0x1006a90a4*/
      }
    }
    outData[0] = &v41; /*0x1006a8f5b*/
    outData[1] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::h4b39351c31fa74c3; /*0x1006a8f66*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&inAddress, &unk_101604BC2, outData); /*0x1006a8f7c*/
    v24 = inAddress_8; /*0x1006a8f81*/
    v25 = std::fs::write::inner::had0c1bee0a2c1e21(v17, v18, inAddress_8, __nbyte); /*0x1006a8f9d*/
    if ( inAddress ) /*0x1006a8faa*/
      v16 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, inAddress, 1); /*0x1006a8fb4*/
    if ( (v25 & 3) == 1 ) /*0x1006a8fc2*/
    {
      v46 = v17; /*0x1006a9001*/
      v27 = *(_QWORD *)(v25 - 1); /*0x1006a900b*/
      v28 = *(_QWORD *)(v25 + 7); /*0x1006a900f*/
      if ( *(_QWORD *)v28 ) /*0x1006a9013*/
        (*(void (__fastcall **)(_QWORD, double))v28)(*(_QWORD *)(v25 - 1), v16); /*0x1006a901e*/
      v29 = *(_QWORD *)(v28 + 8); /*0x1006a9020*/
      if ( v29 ) /*0x1006a9027*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16)); /*0x1006a9030*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25 - 1, 24, 8); /*0x1006a9042*/
      v17 = v46; /*0x1006a9047*/
      v26 = *(_QWORD *)ioDataSize; /*0x1006a904b*/
      v2 = v15; /*0x1006a9052*/
      if ( !*(_QWORD *)ioDataSize ) /*0x1006a9055*/
        goto LABEL_37; /*0x1006a9055*/
    }
    else
    {
      v26 = *(_QWORD *)ioDataSize; /*0x1006a8fc4*/
      v2 = v15; /*0x1006a8fcb*/
      if ( !*(_QWORD *)ioDataSize ) /*0x1006a8fce*/
      {
LABEL_37:
        LOBYTE(PropertyData) = codexmate_lib::platform::system_volume::set_volume::ha0dfc7f035d0b8e5(v2, v42 * v48); /*0x1006a8fdd*/
        return PropertyData; /*0x1006a8fea*/
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v26, 1); /*0x1006a8fd8*/
    goto LABEL_37; /*0x1006a8fd8*/
  }
  inAddress = 0x6F75747064636832LL; /*0x1006a8c6f*/
  LODWORD(inAddress_8) = 0; /*0x1006a8c76*/
  *(_QWORD *)ioDataSize = 0; /*0x1006a8c80*/
  LODWORD(outData[0]) = 8; /*0x1006a8c88*/
  v3 = AudioObjectGetPropertyData( /*0x1006a8ca5*/
         v2,
         (const AudioObjectPropertyAddress *)&inAddress,
         0,
         nullptr,
         (UInt32 *)outData,
         ioDataSize);
  v4 = *(_QWORD *)ioDataSize; /*0x1006a8cb7*/
  if ( !ioDataSize[1] ) /*0x1006a8cc6*/
    v4 = 0x200000001LL; /*0x1006a8cc6*/
  if ( !ioDataSize[0] ) /*0x1006a8ccd*/
    v4 = 0x200000001LL; /*0x1006a8ccd*/
  if ( v3 ) /*0x1006a8cd3*/
    v4 = 0x200000001LL; /*0x1006a8cd3*/
  inAddress = 0x6F757470766F6C6DLL; /*0x1006a8ce1*/
  LODWORD(inAddress_8) = v4; /*0x1006a8ce8*/
  LODWORD(outData[0]) = 0; /*0x1006a8cee*/
  ioDataSize[0] = 4; /*0x1006a8cf5*/
  v5 = AudioObjectGetPropertyData(v2, (const AudioObjectPropertyAddress *)&inAddress, 0, nullptr, ioDataSize, outData); /*0x1006a8d1a*/
  v48 = *(float *)outData; /*0x1006a8d2b*/
  inAddress = 0x6F757470766F6C6DLL; /*0x1006a8d3e*/
  LODWORD(inAddress_8) = HIDWORD(v4); /*0x1006a8d45*/
  LODWORD(outData[0]) = 0; /*0x1006a8d4b*/
  ioDataSize[0] = 4; /*0x1006a8d52*/
  PropertyData = AudioObjectGetPropertyData( /*0x1006a8d6b*/
                   v2,
                   (const AudioObjectPropertyAddress *)&inAddress,
                   0,
                   nullptr,
                   ioDataSize,
                   outData);
  v6 = (v5 == 0) + (PropertyData == 0); /*0x1006a8d77*/
  if ( v6 ) /*0x1006a8d7a*/
  {
    v7 = 0.0; /*0x1006a8d80*/
    if ( !v5 ) /*0x1006a8d86*/
      v7 = v48 + 0.0; /*0x1006a8d88*/
    if ( !PropertyData ) /*0x1006a8d8f*/
      v7 = v7 + *(float *)outData; /*0x1006a8d91*/
    v8 = v7 / (float)v6; /*0x1006a8da0*/
    if ( v8 > 0.050000001 ) /*0x1006a8daf*/
      goto LABEL_17; /*0x1006a8daf*/
  }
  return PropertyData; /*0x1006a8fef*/
}