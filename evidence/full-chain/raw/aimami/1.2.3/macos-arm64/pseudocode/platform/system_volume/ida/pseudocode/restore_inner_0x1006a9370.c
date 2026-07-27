// __ZN13codexmate_lib8platform13system_volume13restore_inner @ 0x1006a9370 | 基线 same-set
double __fastcall codexmate_lib::platform::system_volume::restore_inner::h396f069c11f13411(
        double result,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r14d
  double v7; // xmm0_8
  OSStatus PropertyData; // eax
  char v9; // al
  AudioObjectPropertyAddress inAddress; // [rsp+0h] [rbp-30h] BYREF
  UInt32 ioDataSize; // [rsp+Ch] [rbp-24h] BYREF
  AudioObjectID outData; // [rsp+10h] [rbp-20h] BYREF
  float v13; // [rsp+14h] [rbp-1Ch]

  v3 = codexmate_lib::platform::system_volume::SAVED_VOLUME::h0fa5a1fc4df65609; /*0x1006a937d*/
  if ( !codexmate_lib::platform::system_volume::SAVED_VOLUME::h0fa5a1fc4df65609 ) /*0x1006a9387*/
    v3 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::platform::system_volume::SAVED_VOLUME::h0fa5a1fc4df65609); /*0x1006a949d*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x1006a9397*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1006a93a6*/
  {
    if ( byte_101A06058 ) /*0x1006a93bb*/
      goto LABEL_5; /*0x1006a93bb*/
    v6 = dword_101A0605C; /*0x1006a93df*/
    *(_QWORD *)&v7 = (unsigned int)dword_101A06060; /*0x1006a93e6*/
    v13 = *(float *)&dword_101A06060; /*0x1006a93ee*/
    dword_101A0605C = 0; /*0x1006a93f3*/
LABEL_8:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006a9506*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a3, v4, v5) )
    {
      byte_101A06058 = 1; /*0x1006a9513*/
    }
    goto LABEL_9; /*0x1006a951a*/
  }
  v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a3, v4, v5); /*0x1006a94a5*/
  v5 = (unsigned __int8)byte_101A06058; /*0x1006a94aa*/
  if ( byte_101A06058 ) /*0x1006a94b3*/
  {
    if ( !v9 ) /*0x1006a94b7*/
    {
LABEL_6:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::system_volume::SAVED_VOLUME::h0fa5a1fc4df65609); /*0x1006a93c9*/
      return result; /*0x1006a93da*/
    }
LABEL_5:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006a94c2*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a3, v4, v5) )
    {
      byte_101A06058 = 1; /*0x1006a94cf*/
    }
    goto LABEL_6; /*0x1006a94d6*/
  }
  v6 = dword_101A0605C; /*0x1006a94db*/
  *(_QWORD *)&v7 = (unsigned int)dword_101A06060; /*0x1006a94e2*/
  v13 = *(float *)&dword_101A06060; /*0x1006a94ea*/
  dword_101A0605C = 0; /*0x1006a94ef*/
  if ( v9 ) /*0x1006a94fb*/
    goto LABEL_8; /*0x1006a94fb*/
LABEL_9:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::system_volume::SAVED_VOLUME::h0fa5a1fc4df65609); /*0x1006a9409*/
  if ( !v6 ) /*0x1006a9418*/
    return codexmate_lib::platform::system_volume::clear_marker::ha27159d58c68f744(v7); /*0x1006a948c*/
  *(_QWORD *)&inAddress.mSelector = 0x676C6F62644F7574LL; /*0x1006a9424*/
  inAddress.mElement = 0; /*0x1006a9428*/
  outData = 0; /*0x1006a942f*/
  ioDataSize = 4; /*0x1006a9436*/
  PropertyData = AudioObjectGetPropertyData(1u, &inAddress, 0, nullptr, &ioDataSize, &outData); /*0x1006a9452*/
  if ( outData != 0 && PropertyData == 0 ) /*0x1006a9459*/
  {
    *(_QWORD *)&v7 = LODWORD(v13); /*0x1006a9468*/
    codexmate_lib::platform::system_volume::set_volume::ha0dfc7f035d0b8e5(outData, v13); /*0x1006a946d*/
  }
  return codexmate_lib::platform::system_volume::clear_marker::ha27159d58c68f744(v7); /*0x1006a93d0*/
}