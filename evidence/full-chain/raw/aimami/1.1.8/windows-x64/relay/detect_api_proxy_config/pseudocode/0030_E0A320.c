// win 1.1.8 detect_api_proxy_config node va=0x140e0a320 depth=2
// E0A320
__int64 __fastcall sub_140E0A320(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  v2 = *a1; /*0x140e0a335*/
  result = sub_140872EA0(*a1 + 24); /*0x140e0a33d*/
  if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) ) /*0x140e0a34d*/
    return sub_140001370(v2, 56, 8); /*0x140e0a364*/
  return result; /*0x140e0a35f*/
}