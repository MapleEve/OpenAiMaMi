// mac 1.1.8 refresh_usage_snapshot node va=0x1004f16c0 depth=2
// core3ptr65drop_in_place::hd95344f83d5f5579E_0
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::hd95344f83d5f5579(
        __int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi

  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hb772a699ef9b33a6(a1 + 488); /*0x1004f16e5*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h7a65c6381a6c4fba(a1); /*0x1004f16ed*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(a1 + 664); /*0x1004f16f9*/
  v2 = *(_QWORD *)(a1 + 760); /*0x1004f1705*/
  if ( v2 ) /*0x1004f170f*/
  {
    v3 = *(_QWORD *)(a1 + 752) + 136LL; /*0x1004f1711*/
    do /*0x1004f172a*/
    {
      if ( *(_QWORD *)(v3 - 8) ) /*0x1004f172c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f173f*/
      if ( *(_DWORD *)(v3 - 56) != 2 ) /*0x1004f174a*/
      {
        v4 = *(_QWORD *)(v3 - 40); /*0x1004f174c*/
        if ( v4 != 0x8000000000000000LL ) /*0x1004f1754*/
        {
          if ( v4 ) /*0x1004f1759*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f1765*/
        }
      }
      v3 += 168; /*0x1004f1720*/
      --v2; /*0x1004f1727*/
    }
    while ( v2 ); /*0x1004f172a*/
  }
  if ( *(_QWORD *)(a1 + 744) ) /*0x1004f176c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f1787*/
  v5 = *(_QWORD *)(a1 + 800) + 1LL; /*0x1004f179a*/
  v6 = *(_QWORD *)(a1 + 792); /*0x1004f179d*/
  while ( v5 != 1 ) /*0x1004f17a4*/
  {
    --v5; /*0x1004f17ad*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(v6); /*0x1004f17b0*/
    v6 += 336; /*0x1004f17b5*/
  }
  if ( *(_QWORD *)(a1 + 784) ) /*0x1004f17ba*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f17d5*/
  if ( *(_DWORD *)(a1 + 152) != 2 ) /*0x1004f17e1*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(a1 + 152); /*0x1004f17ea*/
  v7 = *(_QWORD *)(a1 + 824); /*0x1004f17f6*/
  if ( v7 ) /*0x1004f1800*/
  {
    v8 = *(_QWORD *)(a1 + 816) + 32LL; /*0x1004f1802*/
    do /*0x1004f1817*/
    {
      if ( *(_QWORD *)(v8 - 32) ) /*0x1004f1819*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f182d*/
      if ( *(_QWORD *)(v8 - 8) ) /*0x1004f1832*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f1845*/
      v8 += 48; /*0x1004f1810*/
      --v7; /*0x1004f1814*/
    }
    while ( v7 ); /*0x1004f1817*/
  }
  result = *(_QWORD *)(a1 + 808); /*0x1004f184c*/
  if ( result ) /*0x1004f1856*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f1868*/
  v10 = *(_QWORD *)(a1 + 832); /*0x1004f186d*/
  if ( v10 != 0x8000000000000000LL && v10 ) /*0x1004f187c*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f188a*/
  v11 = *(_QWORD *)(a1 + 856); /*0x1004f188f*/
  if ( v11 != 0x8000000000000000LL && v11 ) /*0x1004f189e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f18ac*/
  v12 = *(_QWORD *)(a1 + 888); /*0x1004f18b1*/
  if ( v12 != 0x8000000000000000LL ) /*0x1004f18bb*/
  {
    if ( v12 ) /*0x1004f18c0*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f18dc*/
  }
  return result; /*0x1004f18ce*/
}