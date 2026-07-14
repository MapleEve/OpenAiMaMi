// mac 1.1.8 get_relay_provider_quota node va=0x1000d0d80 depth=4
// core3ptr64drop_in_place::h72160e542482e768E_0
__int64 (__fastcall *__fastcall core::ptr::drop_in_place$LT$reqwest..async_impl..client..ResponseFuture$GT$::h72160e542482e768(
        __int64 a1))(_QWORD)
{
  _QWORD *v1; // r15
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 v7; // rax
  __int64 v8; // rbx

  v1 = (_QWORD *)(a1 + 8); /*0x1000d0d8e*/
  if ( !*(_QWORD *)a1 ) /*0x1000d0d92*/
    goto LABEL_7; /*0x1000d0d92*/
  v2 = 1; /*0x1000d0da3*/
  if ( *v1 >= 2u ) /*0x1000d0da8*/
    v2 = *v1 - 2LL; /*0x1000d0da8*/
  if ( v2 == 1 ) /*0x1000d0db0*/
  {
LABEL_7:
    core::ptr::drop_in_place$LT$core..option..Option$LT$http..request..Request$LT$reqwest..async_impl..body..Body$GT$$GT$$GT$::h09952542b32440d3(a1 + 304); /*0x1000d0dd5*/
    core::ptr::drop_in_place$LT$tower..retry..Retry$LT$reqwest..retry..Policy$C$reqwest..async_impl..client..HyperService$GT$$GT$::hc4c89cbca36bb6e2(v1); /*0x1000d0ddd*/
    if ( !*(_BYTE *)(a1 + 560) ) /*0x1000d0de2*/
    {
      v3 = *(_QWORD *)(a1 + 576); /*0x1000d0df2*/
      if ( *(_QWORD *)v3 ) /*0x1000d0df9*/
        (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(a1 + 568)); /*0x1000d0e05*/
      if ( *(_QWORD *)(v3 + 8) ) /*0x1000d0e07*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d0e19*/
    }
  }
  else if ( !v2 ) /*0x1000d0db5*/
  {
    core::ptr::drop_in_place$LT$tower..retry..Retry$LT$reqwest..retry..Policy$C$reqwest..async_impl..client..HyperService$GT$$GT$::hc4c89cbca36bb6e2(a1 + 16); /*0x1000d0dbb*/
    core::ptr::drop_in_place$LT$core..option..Option$LT$http..request..Request$LT$reqwest..async_impl..body..Body$GT$$GT$$GT$::h09952542b32440d3(a1 + 312); /*0x1000d0dc7*/
  }
  core::ptr::drop_in_place$LT$tower..retry..Retry$LT$reqwest..retry..Policy$C$reqwest..async_impl..client..HyperService$GT$$GT$::hc4c89cbca36bb6e2(a1 + 584); /*0x1000d0e25*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 1040)) ) /*0x1000d0e31*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::had6be344b730d94d((__int64 *)(a1 + 1040)); /*0x1000d0e3e*/
  v4 = *(_QWORD *)(a1 + 1032); /*0x1000d0e43*/
  if ( v4 ) /*0x1000d0e4d*/
  {
    v5 = *(_QWORD *)(a1 + 1024) + 8LL; /*0x1000d0e56*/
    do /*0x1000d0e67*/
    {
      if ( *(_QWORD *)(v5 - 8) ) /*0x1000d0e69*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d0e7a*/
      v5 += 88; /*0x1000d0e60*/
      --v4; /*0x1000d0e64*/
    }
    while ( v4 ); /*0x1000d0e67*/
  }
  if ( *(_QWORD *)(a1 + 1016) ) /*0x1000d0e81*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d0e9d*/
  if ( *(_BYTE *)(a1 + 1144) >= 0xAu && *(_QWORD *)(a1 + 1160) ) /*0x1000d0eab*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d0ec3*/
  core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h957e5d46b18b1481(a1 + 1056); /*0x1000d0ecf*/
  result = (__int64 (__fastcall *)(_QWORD))core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h54ea0a9b41b92799((_QWORD *)(a1 + 880)); /*0x1000d0edb*/
  if ( !*(_QWORD *)(a1 + 976) ) /*0x1000d0ee8*/
  {
    v7 = *(_QWORD *)(a1 + 984); /*0x1000d0ef3*/
    if ( v7 ) /*0x1000d0efd*/
    {
      return (__int64 (__fastcall *)(_QWORD))(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 32))( /*0x1000d0f20*/
                                               a1 + 1008,
                                               *(_QWORD *)(a1 + 992),
                                               *(_QWORD *)(a1 + 1000));
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 1000); /*0x1000d0f29*/
      result = *(__int64 (__fastcall **)(_QWORD))v8; /*0x1000d0f30*/
      if ( *(_QWORD *)v8 ) /*0x1000d0f30*/
        result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 992)); /*0x1000d0f3b*/
      if ( *(_QWORD *)(v8 + 8) ) /*0x1000d0f3d*/
        return (__int64 (__fastcall *)(_QWORD))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d0f55*/
    }
  }
  return result; /*0x1000d0eea*/
}