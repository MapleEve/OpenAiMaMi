// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x100331a10 depth=1
// core3ptr65drop_in_place
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

  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hb772a699ef9b33a6(a1 + 488); /*0x100331a28*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h7a65c6381a6c4fba(a1); /*0x100331a30*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(a1 + 664); /*0x100331a3c*/
  v2 = *(_QWORD *)(a1 + 760); /*0x100331a52*/
  if ( v2 ) /*0x100331a5c*/
  {
    v3 = *(_QWORD *)(a1 + 752) + 136LL; /*0x100331a5e*/
    do /*0x100331a7a*/
    {
      if ( *(_QWORD *)(v3 - 8) ) /*0x100331a7c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100331a8f*/
      if ( *(_DWORD *)(v3 - 56) != 2 ) /*0x100331a9a*/
      {
        v4 = *(_QWORD *)(v3 - 40); /*0x100331a9c*/
        if ( v4 != 0x8000000000000000LL ) /*0x100331aa4*/
        {
          if ( v4 ) /*0x100331aa9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100331ab5*/
        }
      }
      v3 += 168; /*0x100331a70*/
      --v2; /*0x100331a77*/
    }
    while ( v2 ); /*0x100331a7a*/
  }
  if ( *(_QWORD *)(a1 + 744) ) /*0x100331abc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100331ad7*/
  v5 = *(_QWORD *)(a1 + 800) + 1LL; /*0x100331aea*/
  v6 = *(_QWORD *)(a1 + 792); /*0x100331aed*/
  while ( v5 != 1 ) /*0x100331af4*/
  {
    --v5; /*0x100331afd*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(v6); /*0x100331b00*/
    v6 += 336; /*0x100331b05*/
  }
  if ( *(_QWORD *)(a1 + 784) ) /*0x100331b0a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100331b25*/
  if ( *(_DWORD *)(a1 + 152) != 2 ) /*0x100331b31*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(a1 + 152); /*0x100331b3a*/
  v7 = *(_QWORD *)(a1 + 824); /*0x100331b46*/
  if ( v7 ) /*0x100331b50*/
  {
    v8 = *(_QWORD *)(a1 + 816) + 32LL; /*0x100331b52*/
    do /*0x100331b67*/
    {
      if ( *(_QWORD *)(v8 - 32) ) /*0x100331b69*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100331b7d*/
      if ( *(_QWORD *)(v8 - 8) ) /*0x100331b82*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100331b95*/
      v8 += 48; /*0x100331b60*/
      --v7; /*0x100331b64*/
    }
    while ( v7 ); /*0x100331b67*/
  }
  result = *(_QWORD *)(a1 + 808); /*0x100331b9c*/
  if ( result ) /*0x100331ba6*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100331bb8*/
  v10 = *(_QWORD *)(a1 + 832); /*0x100331bbd*/
  if ( v10 != 0x8000000000000000LL && v10 ) /*0x100331bcc*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100331bda*/
  v11 = *(_QWORD *)(a1 + 856); /*0x100331bdf*/
  if ( v11 != 0x8000000000000000LL && v11 ) /*0x100331bee*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100331bfc*/
  v12 = *(_QWORD *)(a1 + 888); /*0x100331c01*/
  if ( v12 != 0x8000000000000000LL ) /*0x100331c0b*/
  {
    if ( v12 ) /*0x100331c10*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100331c2c*/
  }
  return result; /*0x100331c22*/
}