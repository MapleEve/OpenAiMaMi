// win 1.1.8 reorder_relay_providers node va=0x141279770 depth=2
// sub_141279770
__int64 __fastcall sub_141279770(__int64 *a1)
{
  _OWORD v3[3]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v4[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v5; // [rsp+88h] [rbp+8h]
  __int64 v6; // [rsp+90h] [rbp+10h]
  char v7; // [rsp+9Fh] [rbp+1Fh]
  __int64 v8; // [rsp+A0h] [rbp+20h]

  v8 = -2; /*0x141279781*/
  v6 = *a1; /*0x14127978f*/
  v5 = a1[1]; /*0x141279797*/
  v7 = 0; /*0x14127979b*/
  sub_1410685B0(v3); /*0x1412797a3*/
  v4[2] = v3[2]; /*0x1412797b5*/
  v4[1] = v3[1]; /*0x1412797b9*/
  v4[0] = v3[0]; /*0x1412797bd*/
  v7 = 1; /*0x1412797c1*/
  return sub_1412799C0(a1, v4); /*0x1412797d2*/
}