// win 1.2.1 | module src/core/relay/health_check.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140695190(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  _BYTE v4[912]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v5[114]; // [rsp+3C0h] [rbp+340h] BYREF
  _BYTE v6[680]; // [rsp+750h] [rbp+6D0h] BYREF
  __int64 v7; // [rsp+9F8h] [rbp+978h]
  int v8; // [rsp+A00h] [rbp+980h]
  __int64 v9; // [rsp+A18h] [rbp+998h]
  int v10; // [rsp+A20h] [rbp+9A0h]
  __int64 v11; // [rsp+A48h] [rbp+9C8h]
  int v12; // [rsp+A50h] [rbp+9D0h]
  __int64 v13; // [rsp+A88h] [rbp+A08h]
  __int64 v14; // [rsp+AE0h] [rbp+A60h]

  v14 = -2; /*0x1406951a3*/
  v1 = (_QWORD *)**a1; /*0x1406951b1*/
  **a1 = 0; /*0x1406951b4*/
  if ( !v1 ) /*0x1406951be*/
    sub_1416C3040(&off_141781120); /*0x140695268*/
  sub_14104B490(v6); /*0x1406951ce*/
  v11 = 30; /*0x1406951d3*/
  v12 = 0; /*0x1406951de*/
  v7 = 30; /*0x1406951e8*/
  v8 = 0; /*0x1406951f3*/
  v13 = 10; /*0x1406951fd*/
  v9 = 60; /*0x140695208*/
  v10 = 0; /*0x140695213*/
  sub_141684120(v4, v6, 912); /*0x14069522d*/
  sub_1410484B0(v5, v4); /*0x14069523f*/
  result = sub_141042BD0(v5); /*0x140695247*/
  if ( result == 1 ) /*0x140695250*/
  {
    v5[0] = v3; /*0x14069526f*/
    sub_1416C3060( /*0x14069529c*/
      (unsigned int)"failed to build async direct health check client",
      48,
      (unsigned int)v5,
      (unsigned int)&off_1417826E0,
      (__int64)&off_1417822E0);
  }
  *v1 = v3; /*0x140695252*/
  return result; /*0x140695255*/
}