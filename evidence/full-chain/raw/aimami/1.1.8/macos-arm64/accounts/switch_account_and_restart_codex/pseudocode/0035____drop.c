// mac 1.1.8 switch_account_and_restart_codex node va=0x100e5b920 depth=4
// _::drop
__int64 (__fastcall *__fastcall _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8df4a778672d5a0(
        __int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // r13

  v2 = *(_QWORD *)(a1 + 16); /*0x100e5b92e*/
  if ( v2 ) /*0x100e5b935*/
  {
    v3 = *(_QWORD *)(a1 + 8) + 24LL; /*0x100e5b93b*/
    do /*0x100e5b957*/
    {
      v4 = *(_QWORD *)(v3 - 16); /*0x100e5b95e*/
      result = *(__int64 (__fastcall **)(_QWORD))v4; /*0x100e5b963*/
      if ( *(_QWORD *)v4 ) /*0x100e5b963*/
        result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(v3 - 24)); /*0x100e5b96f*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x100e5b971*/
        result = (__int64 (__fastcall *)(_QWORD))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e5b981*/
      v3 += 16; /*0x100e5b950*/
      --v2; /*0x100e5b954*/
    }
    while ( v2 ); /*0x100e5b957*/
  }
  return result; /*0x100e5b98c*/
}