// win 1.1.8 detect_api_proxy_config node va=0x140e0acc0 depth=2
// E0ACC0
__int64 __fastcall sub_140E0ACC0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  v2 = *a1; /*0x140e0acd5*/
  result = sub_140E283B0(*a1 + 24); /*0x140e0acdd*/
  if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) ) /*0x140e0aced*/
    return sub_140001370(v2, 48, 8); /*0x140e0ad04*/
  return result; /*0x140e0acff*/
}