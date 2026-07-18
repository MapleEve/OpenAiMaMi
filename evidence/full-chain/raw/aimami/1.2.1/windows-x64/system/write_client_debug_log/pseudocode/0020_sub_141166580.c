// win 1.2.1 NEW write_client_debug_log 0x141166580 d=2
__int64 __fastcall sub_141166580(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+30h] [rbp-10h]

  v1 = *a1; /*0x141166593*/
  result = *(_QWORD *)(*a1 + 24); /*0x141166596*/
  v4 = result; /*0x14116659a*/
  if ( result ) /*0x1411665a1*/
  {
    v5 = *(_QWORD *)(v1 + 32); /*0x1411665ab*/
    if ( *(_QWORD *)v5 ) /*0x1411665af*/
      (*(void (__fastcall **)(__int64))v5)(result); /*0x1411665bb*/
    result = v5; /*0x1411665be*/
    v3 = *(_QWORD *)(v5 + 8); /*0x1411665c2*/
    if ( v3 ) /*0x1411665cd*/
      result = sub_140001360(v4, v3, *(_QWORD *)(v5 + 16)); /*0x1411665d7*/
  }
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x1411665e2*/
    return sub_140001360(v1, 40, 8); /*0x1411665fd*/
  return result; /*0x1411665f7*/
}