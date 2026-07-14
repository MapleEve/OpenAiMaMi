// mac 1.1.8 delete_sessions node va=0x1010a4aa0 depth=1
// std3sys6random19hashmap_random_keys
__int64 std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45()
{
  __int128 bytes; // [rsp+0h] [rbp-20h] BYREF
  CCRNGStatus v2; // [rsp+1Ch] [rbp-4h] BYREF

  bytes = 0; /*0x1010a4aab*/
  v2 = CCRandomGenerateBytes(&bytes, 0x10u); /*0x1010a4abd*/
  if ( v2 ) /*0x1010a4ac2*/
    core::panicking::assert_failed::hb70d0550edc83796( /*0x1010a4af3*/
      0,
      (__int64)&v2,
      (__int64)"",
      (int)"failed to generate random datathe number of hardware threads is not known for the target platforminvalid stack sizefile name contained an unexpected NUL byte",
      61,
      (__int64)&off_1015AE328);
  return bytes; /*0x1010a4acc*/
}