// win 1.1.8 delete_sessions node va=0x140e0abd0 depth=2
// E0ABD0
__int64 __fastcall sub_140E0ABD0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+30h] [rbp-10h]

  v1 = *a1; /*0x140e0abe3*/
  result = *(_QWORD *)(*a1 + 24); /*0x140e0abe6*/
  v4 = result; /*0x140e0abea*/
  if ( result ) /*0x140e0abf1*/
  {
    v5 = *(_QWORD *)(v1 + 32); /*0x140e0abfb*/
    if ( *(_QWORD *)v5 ) /*0x140e0abff*/
      (*(void (__fastcall **)(__int64))v5)(result); /*0x140e0ac0b*/
    result = v5; /*0x140e0ac0e*/
    v3 = *(_QWORD *)(v5 + 8); /*0x140e0ac12*/
    if ( v3 ) /*0x140e0ac1d*/
      result = sub_140001370(v4, v3, *(_QWORD *)(v5 + 16)); /*0x140e0ac27*/
  }
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x140e0ac32*/
    return sub_140001370(v1, 40, 8); /*0x140e0ac4d*/
  return result; /*0x140e0ac47*/
}