// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_direct_client node 0x100b2be60 depth=2
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$reqwest..proxy..Matcher$GT$::he79c42ba748c7da0(
        __int64 a1)
{
  volatile signed __int64 *result; // rax
  __int64 v2; // rsi
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12

  if ( __OFSUB__(0, *(_QWORD *)(a1 + 136)) ) /*0x100b2be7a*/
  {
    result = *(volatile signed __int64 **)(a1 + 168); /*0x100b2be83*/
    if ( !_InterlockedDecrement64(result) ) /*0x100b2be8a*/
      result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe6834b48e3dcc53((__int64 *)(a1 + 168)); /*0x100b2be97*/
    v2 = *(_QWORD *)(a1 + 144); /*0x100b2be9c*/
    if ( v2 != 0x8000000000000000LL && v2 ) /*0x100b2beaf*/
LABEL_35:
      result = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2c06f*/
  }
  else
  {
    if ( *(_QWORD *)(a1 + 184) != 0x8000000000000002LL ) /*0x100b2bed1*/
    {
      core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h2104926570ec9de1(a1 + 232); /*0x100b2bee5*/
      v3 = 2; /*0x100b2bef6*/
      if ( *(__int64 *)(a1 + 184) < 0 ) /*0x100b2befb*/
        v3 = *(_QWORD *)(a1 + 184) ^ 0x8000000000000000LL; /*0x100b2befb*/
      if ( v3 ) /*0x100b2bf02*/
      {
        if ( v3 == 1 ) /*0x100b2bf08*/
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 192) + 32LL))( /*0x100b2bf26*/
            a1 + 216,
            *(_QWORD *)(a1 + 200),
            *(_QWORD *)(a1 + 208));
        }
        else
        {
          if ( *(_QWORD *)(a1 + 184) ) /*0x100b2beea*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2bf3c*/
          if ( *(_QWORD *)(a1 + 208) ) /*0x100b2bf41*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2bf59*/
        }
      }
    }
    if ( *(_QWORD *)(a1 + 320) != 0x8000000000000002LL ) /*0x100b2bf65*/
    {
      core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h2104926570ec9de1(a1 + 368); /*0x100b2bf79*/
      v4 = *(_QWORD *)(a1 + 320); /*0x100b2bf7e*/
      v5 = 2; /*0x100b2bf87*/
      if ( v4 < 0 ) /*0x100b2bf8c*/
        v5 = v4 ^ 0x8000000000000000LL; /*0x100b2bf8c*/
      if ( v5 ) /*0x100b2bf93*/
      {
        if ( v5 == 1 ) /*0x100b2bf99*/
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 328) + 32LL))( /*0x100b2bfb7*/
            a1 + 352,
            *(_QWORD *)(a1 + 336),
            *(_QWORD *)(a1 + 344));
        }
        else
        {
          if ( v4 ) /*0x100b2bfbf*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2bfcd*/
          if ( *(_QWORD *)(a1 + 344) ) /*0x100b2bfd2*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2bfea*/
        }
      }
    }
    if ( *(_QWORD *)(a1 + 136) ) /*0x100b2bfef*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2c00e*/
    v6 = *(_QWORD *)(a1 + 176); /*0x100b2c01a*/
    if ( v6 ) /*0x100b2c024*/
    {
      v7 = *(_QWORD *)(a1 + 168) + 8LL; /*0x100b2c026*/
      do /*0x100b2c037*/
      {
        if ( *(_QWORD *)(v7 - 8) ) /*0x100b2c039*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2c04c*/
        v7 += 24; /*0x100b2c030*/
        --v6; /*0x100b2c034*/
      }
      while ( v6 ); /*0x100b2c037*/
    }
    result = *(volatile signed __int64 **)(a1 + 160); /*0x100b2c053*/
    if ( result ) /*0x100b2c05d*/
      goto LABEL_35; /*0x100b2c05d*/
  }
  if ( *(_BYTE *)(a1 + 128) != 2 ) /*0x100b2c07b*/
    result = (volatile signed __int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 96) + 32LL))( /*0x100b2c08d*/
                                          a1 + 120,
                                          *(_QWORD *)(a1 + 104),
                                          *(_QWORD *)(a1 + 112));
  if ( *(_DWORD *)a1 != 3 ) /*0x100b2c093*/
    return (volatile signed __int64 *)core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h7c85e54303b5a815((_QWORD *)a1); /*0x100b2c0a9*/
  return result; /*0x100b2c095*/
}