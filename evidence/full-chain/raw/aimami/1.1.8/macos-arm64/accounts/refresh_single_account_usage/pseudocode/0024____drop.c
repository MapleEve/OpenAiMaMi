// mac 1.1.8 refresh_single_account_usage node va=0x101091200 depth=3
// _::drop
__int64 __fastcall _$LT$semver..identifier..Identifier$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6cbbb6751041c15a(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1; /*0x101091200*/
  if ( *a1 <= -2 ) /*0x101091207*/
  {
    if ( *(char *)(2 * result + 1) < 0 ) /*0x101091212*/
      semver::identifier::decode_len::decode_len_cold::ha2db368a10b4fa97(2 * result); /*0x101091248*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x101091239*/
  }
  return result; /*0x10109123e*/
}