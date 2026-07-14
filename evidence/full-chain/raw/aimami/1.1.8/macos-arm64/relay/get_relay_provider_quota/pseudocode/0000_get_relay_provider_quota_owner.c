// mac 1.1.8 get_relay_provider_quota node va=0x1000a8c30 depth=0
// get_relay_provider_quota_owner
void __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..relay..get_relay_provider_quota..$u7b$$u7b$closure$u7d$$u7d$$GT$::h479ac38e60aeb3ac(
        __int64 *a1)
{
  __int64 v1; // rsi

  if ( *((_BYTE *)a1 + 1576) == 3 ) /*0x1000a8c41*/
  {
    if ( *((_BYTE *)a1 + 1568) == 3 ) /*0x1000a8c68*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_async..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc0c977eabc812478(a1 + 42); /*0x1000a8c74*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(a1 + 13); /*0x1000a8c7d*/
    }
    a1 += 5; /*0x1000a8c85*/
    v1 = *a1; /*0x1000a8c89*/
    if ( *a1 ) /*0x1000a8c89*/
      goto LABEL_4; /*0x1000a8c8f*/
  }
  else if ( !*((_BYTE *)a1 + 1576) ) /*0x1000a8c37*/
  {
    v1 = *a1; /*0x1000a8c47*/
    if ( *a1 ) /*0x1000a8c47*/
LABEL_4:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], v1, 1); /*0x1000a8c4f*/
  }
}