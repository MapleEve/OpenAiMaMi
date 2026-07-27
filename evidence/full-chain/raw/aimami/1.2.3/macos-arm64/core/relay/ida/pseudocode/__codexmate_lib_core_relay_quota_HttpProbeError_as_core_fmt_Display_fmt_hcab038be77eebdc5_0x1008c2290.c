// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::quota::HttpProbeError as core::fmt::Display>::fmt::hcab038be77eebdc5 @ 0x1008c2290 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..relay..quota..HttpProbeError$u20$as$u20$core..fmt..Display$GT$::fmt::hcab038be77eebdc5(
        _WORD *a1,
        __int64 *a2)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rsi
  void *v5; // rdx
  _QWORD *v7; // [rsp+8h] [rbp-18h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+10h] [rbp-10h]
  _WORD *v9; // [rsp+18h] [rbp-8h] BYREF

  v2 = (unsigned __int16)*a1;
  if ( *a1 )
  {
    v9 = a1 + 4;
    v7 = &v9;
    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b;
    v3 = *a2;
    v4 = a2[1];
    if ( v2 == 1 )
      v5 = &anon_10420c9971c21f44d230d15b39fb3fec_1035;
    else
      v5 = &anon_10420c9971c21f44d230d15b39fb3fec_1036;
  }
  else
  {
    v9 = a1 + 1;
    v7 = &v9;
    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd492899dc40ca8b8;
    v3 = *a2;
    v4 = a2[1];
    v5 = &anon_10420c9971c21f44d230d15b39fb3fec_652;
  }
  return core::fmt::write::h2e5a8157a38fb62d(v3, v4, v5, &v7);
}
