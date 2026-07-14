// win 1.1.8 detect_api_proxy_config node va=0x1404e9190 depth=2
// E9190
__int64 __fastcall sub_1404E9190(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1; /*0x1404e9190*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x1404e9199*/
    return sub_140001370(v1, 24, 8); /*0x1404e91ab*/
  return result; /*0x1404e91b0*/
}