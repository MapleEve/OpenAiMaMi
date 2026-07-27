// __ZN13codexmate_lib8platform13system_volume20start_sound_delay_ms @ 0x1006a9520 | 基线 same-set
__int64 codexmate_lib::platform::system_volume::start_sound_delay_ms::h82bb5f0623048731()
{
  __int64 v0; // rbx
  OSStatus PropertyData; // eax
  AudioObjectID v2; // r14d
  OSStatus v4; // eax
  AudioObjectID v5; // r15d
  __int64 v6; // r14
  size_t v7; // rdx
  __int64 v8; // r12
  __int64 v9; // r14
  size_t v10; // rdx
  __int64 v11; // r15
  size_t v12; // r15
  size_t v13; // rbx
  void *v14; // r12
  void *v15; // r14
  __int64 v16; // rsi
  const void *v17; // rdi
  UInt32 ioDataSize[2]; // [rsp+8h] [rbp-58h] BYREF
  void *__s1; // [rsp+10h] [rbp-50h]
  size_t __n; // [rsp+18h] [rbp-48h]
  __int64 inAddress; // [rsp+20h] [rbp-40h] BYREF
  const void *inAddress_8; // [rsp+28h] [rbp-38h]
  size_t v23; // [rsp+30h] [rbp-30h]
  _DWORD outData[9]; // [rsp+3Ch] [rbp-24h] BYREF

  inAddress = 0x676C6F62644F7574LL; /*0x1006a9539*/
  LODWORD(inAddress_8) = 0; /*0x1006a953d*/
  outData[0] = 0; /*0x1006a9544*/
  ioDataSize[0] = 4; /*0x1006a954b*/
  v0 = 0; /*0x1006a9552*/
  PropertyData = AudioObjectGetPropertyData( /*0x1006a9569*/
                   1u,
                   (const AudioObjectPropertyAddress *)&inAddress,
                   0,
                   nullptr,
                   ioDataSize,
                   outData);
  v2 = outData[0]; /*0x1006a9573*/
  if ( PropertyData == 0 && outData[0] != 0 ) /*0x1006a957a*/
  {
    inAddress = 0x676C6F627472616ELL; /*0x1006a958e*/
    LODWORD(inAddress_8) = 0; /*0x1006a9592*/
    outData[0] = 0; /*0x1006a9599*/
    ioDataSize[0] = 4; /*0x1006a95a0*/
    v0 = 0; /*0x1006a95a7*/
    if ( !AudioObjectGetPropertyData( /*0x1006a95bc*/
            v2,
            (const AudioObjectPropertyAddress *)&inAddress,
            0,
            nullptr,
            ioDataSize,
            outData) )
    {
      if ( outData[0] != 1651275109 && outData[0] != 1651271009 ) /*0x1006a95e4*/
        return 0; /*0x1006a9759*/
      inAddress = 0x676C6F6264496E20LL; /*0x1006a95f4*/
      LODWORD(inAddress_8) = 0; /*0x1006a95f8*/
      outData[0] = 0; /*0x1006a95ff*/
      ioDataSize[0] = 4; /*0x1006a9606*/
      v4 = AudioObjectGetPropertyData( /*0x1006a9622*/
             1u,
             (const AudioObjectPropertyAddress *)&inAddress,
             0,
             nullptr,
             ioDataSize,
             outData);
      v5 = outData[0]; /*0x1006a962c*/
      v0 = 100; /*0x1006a9638*/
      if ( v4 == 0 && outData[0] != 0 ) /*0x1006a9633*/
      {
        codexmate_lib::platform::system_volume::device_name::hb85065e695927a9b((size_t *)&inAddress, v2); /*0x1006a9649*/
        v6 = inAddress; /*0x1006a964e*/
        v7 = 0; /*0x1006a9652*/
        v8 = 1; /*0x1006a965a*/
        if ( __OFSUB__(-inAddress, 1) ) /*0x1006a9660*/
          v6 = 0; /*0x1006a9665*/
        else
          v8 = (__int64)inAddress_8; /*0x1006a9660*/
        if ( !__OFSUB__(-inAddress, 1) ) /*0x1006a9669*/
          v7 = v23; /*0x1006a9669*/
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(ioDataSize, v8, v7); /*0x1006a9675*/
        if ( v6 ) /*0x1006a967d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v6, 1); /*0x1006a968a*/
        codexmate_lib::platform::system_volume::device_name::hb85065e695927a9b((size_t *)&inAddress, v5); /*0x1006a9696*/
        v9 = inAddress; /*0x1006a96a5*/
        v10 = 0; /*0x1006a96a9*/
        v11 = 1; /*0x1006a96ae*/
        if ( inAddress == 0x8000000000000000LL ) /*0x1006a96b4*/
          v9 = 0; /*0x1006a96b9*/
        else
          v11 = (__int64)inAddress_8; /*0x1006a96b4*/
        if ( inAddress != 0x8000000000000000LL ) /*0x1006a96bd*/
          v10 = v23; /*0x1006a96bd*/
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&inAddress, v11, v10); /*0x1006a96c9*/
        if ( v9 ) /*0x1006a96d1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v9, 1); /*0x1006a96de*/
        v12 = __n; /*0x1006a96e3*/
        if ( __n /*0x1006a9735*/
          && (v13 = v23) != 0
          && ((v14 = __s1, v15 = (void *)inAddress_8, __n == v23) && !memcmp(__s1, inAddress_8, __n)
           || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                 v15,
                                 v13,
                                 v14)
           || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                 v14,
                                 v12,
                                 v15)) )
        {
          v0 = 1200; /*0x1006a977f*/
          if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1006a9773*/
                                  &unk_101604BD6,
                                  7u,
                                  v15) )
            v0 = 300; /*0x1006a9784*/
          v16 = inAddress; /*0x1006a9788*/
          if ( !inAddress ) /*0x1006a978f*/
            goto LABEL_35; /*0x1006a978f*/
          v17 = v15; /*0x1006a9796*/
        }
        else
        {
          v16 = inAddress; /*0x1006a973e*/
          v0 = 200; /*0x1006a9742*/
          if ( !inAddress ) /*0x1006a974a*/
            goto LABEL_35; /*0x1006a974a*/
          v17 = inAddress_8; /*0x1006a974c*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x1006a9799*/
LABEL_35:
        if ( *(_QWORD *)ioDataSize ) /*0x1006a97a5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, *(_QWORD *)ioDataSize, 1); /*0x1006a97b4*/
      }
    }
  }
  return v0; /*0x1006a95c8*/
}