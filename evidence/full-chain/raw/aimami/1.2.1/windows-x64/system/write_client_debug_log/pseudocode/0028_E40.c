// win 1.2.1 NEW write_client_debug_log 0x141166e40 d=2
__int64 __fastcall sub_141166E40(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  v2 = *a1; /*0x141166e55*/
  result = sub_1400E9E30(*a1 + 24); /*0x141166e5d*/
  if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) ) /*0x141166e6d*/
    return sub_140001360(v2, 56, 8); /*0x141166e84*/
  return result; /*0x141166e7f*/
}