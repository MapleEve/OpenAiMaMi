// mac 1.1.8 test_relay_provider_stream node va=0x100e64290 depth=2
// _::drop
__int64 __fastcall _$LT$tauri..ipc..channel..ChannelInner$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9cf2a93530e6c6d0(
        __int64 a1)
{
  __int64 result; // rax

  result = a1; /*0x100e64294*/
  if ( *(_QWORD *)(a1 + 16) ) /*0x100e64297*/
    return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 24) + 40LL))(); /*0x100e642a5*/
  return result; /*0x100e642a8*/
}