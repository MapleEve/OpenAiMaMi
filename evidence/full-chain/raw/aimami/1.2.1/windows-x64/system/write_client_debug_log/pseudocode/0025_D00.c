// win 1.2.1 NEW write_client_debug_log 0x141275d00 d=2
__int64 __fastcall sub_141275D00(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  v2 = *a1; /*0x141275d15*/
  result = sub_1412733F0(*a1 + 16); /*0x141275d1d*/
  if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) ) /*0x141275d2d*/
    return sub_140001360(v2, 1552, 8); /*0x141275d44*/
  return result; /*0x141275d3f*/
}