// mac 1.1.8 get_relay_provider_quota node va=0x1000d3b10 depth=2
// core3ptr97drop_in_place::b::b::d::d
void __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$::h61887dfc3b210d40(
        __int64 a1)
{
  int v1; // eax

  if ( *(_BYTE *)(a1 + 840) == 3 ) /*0x1000d3b1e*/
  {
    v1 = *(unsigned __int8 *)(a1 + 120); /*0x1000d3b27*/
    if ( v1 == 4 ) /*0x1000d3b2e*/
    {
      if ( *(_BYTE *)(a1 + 832) == 3 ) /*0x1000d3b54*/
      {
        core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::hf228961939be7d6d(a1 + 408); /*0x1000d3b9e*/
      }
      else if ( !*(_BYTE *)(a1 + 832) ) /*0x1000d3b4a*/
      {
        core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::ha3ad3e2bb142417c(a1 + 272); /*0x1000d3b61*/
        if ( **(_QWORD **)(a1 + 400) ) /*0x1000d3b6d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d3b7e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d3b90*/
      }
    }
    else if ( v1 == 3 ) /*0x1000d3b33*/
    {
      core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h95e43b54ca5e420c( /*0x1000d3b43*/
        *(_QWORD *)(a1 + 128),
        *(_QWORD *)(a1 + 136));
    }
    if ( *(_QWORD *)(a1 + 48) ) /*0x1000d3ba3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d3bb9*/
  }
}