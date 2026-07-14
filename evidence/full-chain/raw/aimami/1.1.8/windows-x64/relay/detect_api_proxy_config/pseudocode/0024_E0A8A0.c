// win 1.1.8 detect_api_proxy_config node va=0x140e0a8a0 depth=2
// E0A8A0
volatile signed __int64 *__fastcall sub_140E0A8A0(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  volatile signed __int64 *result; // rax

  v1 = *a1; /*0x140e0a8b4*/
  v2 = *a1 + 24; /*0x140e0a8b7*/
  v3 = *(_QWORD *)(*a1 + 352); /*0x140e0a8bb*/
  if ( v3 ) /*0x140e0a8c5*/
    sub_140001370(*(_QWORD *)(v1 + 360), v3, 1); /*0x140e0a8d4*/
  sub_140E09160(v2); /*0x140e0a8e1*/
  if ( *(_DWORD *)(v1 + 168) != 3 ) /*0x140e0a8f2*/
  {
    v4 = *(_QWORD *)(v1 + 320); /*0x140e0a8f8*/
    if ( v4 ) /*0x140e0a902*/
      sub_140001370(*(_QWORD *)(v1 + 328), v4, 1); /*0x140e0a911*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 304)) ) /*0x140e0a924*/
      sub_1404E9190(v1 + 304); /*0x140e0a931*/
    sub_140E09160(v1 + 168); /*0x140e0a93a*/
  }
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 536)) ) /*0x140e0a94b*/
    sub_140E0B010(v1 + 536); /*0x140e0a95c*/
  sub_140E065C0(v1 + 384); /*0x140e0a96d*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 544)) ) /*0x140e0a97e*/
    sub_140E0A630(v1 + 544); /*0x140e0a98f*/
  result = *(volatile signed __int64 **)(v1 + 552); /*0x140e0a999*/
  if ( !_InterlockedDecrement64(result) ) /*0x140e0a9a0*/
    result = (volatile signed __int64 *)sub_140E0ACC0(v1 + 552); /*0x140e0a9b1*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x140e0a9c1*/
    return (volatile signed __int64 *)sub_140001370(v1, 560, 8); /*0x140e0a9da*/
  return result; /*0x140e0a9d3*/
}