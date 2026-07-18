// win 1.2.1 NEW export_debug_bundle 0x1407e5340 d=1
__int64 *__fastcall sub_1407E5340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rsi
  __int64 *result; // rax
  _QWORD v9[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v12[3]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v13; // [rsp+98h] [rbp+18h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+20h]
  __int64 v15; // [rsp+A8h] [rbp+28h]
  __int64 v16; // [rsp+B0h] [rbp+30h]
  __int64 v17; // [rsp+B8h] [rbp+38h]

  v17 = -2; /*0x1407e5355*/
  sub_14083C520(v12, a1, a2); /*0x1407e536f*/
  sub_14083C520(v11, a3, a4); /*0x1407e5382*/
  v7 = a5[1]; /*0x1407e538f*/
  sub_14083D0A0(v10, v7, a5[2], 2000); /*0x1407e53a7*/
  v9[0] = v12; /*0x1407e53ad*/
  v9[1] = sub_1400012F0; /*0x1407e53b8*/
  v9[2] = v11; /*0x1407e53bc*/
  v9[3] = sub_1400012F0; /*0x1407e53c0*/
  v9[4] = v10; /*0x1407e53c4*/
  v9[5] = sub_1400012F0; /*0x1407e53c8*/
  sub_1413CAFD0((__int64)&v13, byte_1416A53CF, (unsigned __int64)v9); /*0x1407e53db*/
  if ( !dword_141DBB510 ) /*0x1407e53e9*/
  {
    v16 = v14; /*0x1407e53fa*/
    sub_140839890(&unk_141DBB4F0, v14, v15); /*0x1407e53fe*/
  }
  if ( v13 ) /*0x1407e540b*/
    sub_140001360(v14, v13, 1); /*0x1407e5417*/
  if ( v10[0] ) /*0x1407e5423*/
    sub_140001360(v10[1], v10[0], 1); /*0x1407e542f*/
  if ( v11[0] ) /*0x1407e543b*/
    sub_140001360(v11[1], v11[0], 1); /*0x1407e5447*/
  if ( v12[0] ) /*0x1407e5453*/
    sub_140001360(v12[1], v12[0], 1); /*0x1407e545f*/
  result = a5; /*0x1407e5464*/
  if ( *a5 ) /*0x1407e546b*/
    return (__int64 *)sub_140001360(v7, *a5, 1); /*0x1407e547c*/
  return result; /*0x1407e5482*/
}