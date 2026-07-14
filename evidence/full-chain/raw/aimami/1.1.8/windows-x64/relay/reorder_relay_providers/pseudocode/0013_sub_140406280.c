// win 1.1.8 reorder_relay_providers node va=0x140406280 depth=1
// sub_140406280
__int64 __fastcall sub_140406280(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  sub_140140CB0(a1); /*0x140406297*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 512)) ) /*0x1404062a8*/
    sub_140E0A320(a1 + 512); /*0x1404062b9*/
  v1 = *(_QWORD *)(a1 + 456); /*0x1404062c3*/
  if ( v1 ) /*0x1404062cd*/
    sub_140001370(*(_QWORD *)(a1 + 464), v1, 1); /*0x1404062dc*/
  if ( *(_BYTE *)(a1 + 480) == 6 ) /*0x1404062e8*/
  {
    v2 = *(_QWORD *)(a1 + 488); /*0x1404062ea*/
    if ( v2 ) /*0x1404062f4*/
      sub_140001370(*(_QWORD *)(a1 + 496), v2, 1); /*0x140406307*/
  }
  else
  {
    sub_1400D5C50(a1 + 480); /*0x140406315*/
  }
  return sub_140141110(a1 + 360); /*0x140406326*/
}