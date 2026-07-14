// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x100e20990 depth=2
// _::drop
void __fastcall _$LT$std..thread..lifecycle..Packet$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3aea69ad9d2d5d65(
        __int64 *a1)
{
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi

  v2 = a1[1]; /*0x100e209a4*/
  v3 = a1[2]; /*0x100e209a8*/
  if ( v2 && v3 ) /*0x100e209bb*/
  {
    v4 = a1[3]; /*0x100e209bd*/
    if ( *(_QWORD *)v4 ) /*0x100e209c1*/
      (*(void (__fastcall **)(__int64))v4)(a1[2]); /*0x100e209cc*/
    if ( *(_QWORD *)(v4 + 8) ) /*0x100e209ce*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e209de*/
  }
  a1[1] = 0; /*0x100e209e3*/
  v5 = *a1; /*0x100e209eb*/
  if ( *a1 ) /*0x100e209eb*/
    std::thread::scoped::ScopeData::decrement_num_running_threads::h26acfa15588e3138( /*0x100e20a0c*/
      v5 + 16,
      (v3 != 0) & (unsigned __int8)v2);
}