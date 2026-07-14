// win 1.1.8 reorder_relay_providers node va=0x1412ad780 depth=2
// AD780
void __fastcall __noreturn sub_1412AD780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v5[4]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+50h] [rbp-10h] BYREF

  v7[0] = a1; /*0x1412ad78e*/
  v7[1] = a2; /*0x1412ad792*/
  v6[0] = a3; /*0x1412ad796*/
  v6[1] = a4; /*0x1412ad79a*/
  v5[0] = v7; /*0x1412ad7a2*/
  v5[1] = sub_14109C5D0; /*0x1412ad7ad*/
  v5[2] = v6; /*0x1412ad7b5*/
  v5[3] = sub_141082DB0; /*0x1412ad7c0*/
  sub_1412AD9E0(&unk_1415C2294, v5, a5); /*0x1412ad7d2*/
}