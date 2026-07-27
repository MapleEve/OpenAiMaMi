// win 1.2.1 | module src/core/relay/health_check.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140695070(_QWORD **a1)
{
  _QWORD *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rdx
  _BYTE v4[680]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v5; // [rsp+2D8h] [rbp+258h]
  int v6; // [rsp+2E0h] [rbp+260h]
  __int64 v7; // [rsp+2F8h] [rbp+278h]
  int v8; // [rsp+300h] [rbp+280h]
  __int64 v9; // [rsp+328h] [rbp+2A8h]
  int v10; // [rsp+330h] [rbp+2B0h]
  __int64 v11; // [rsp+368h] [rbp+2E8h]
  _QWORD v12[4]; // [rsp+3C0h] [rbp+340h] BYREF

  v12[1] = -2; /*0x140695082*/
  v1 = (_QWORD *)**a1; /*0x140695090*/
  **a1 = 0; /*0x140695093*/
  if ( !v1 ) /*0x14069509d*/
    sub_1416C3040(&off_141781120); /*0x140695118*/
  sub_14104B490(v4); /*0x1406950a6*/
  v9 = 30; /*0x1406950ab*/
  v10 = 0; /*0x1406950b6*/
  v5 = 30; /*0x1406950c0*/
  v6 = 0; /*0x1406950cb*/
  v11 = 10; /*0x1406950d5*/
  v7 = 60; /*0x1406950e0*/
  v8 = 0; /*0x1406950eb*/
  result = sub_141042BD0(v4); /*0x1406950f8*/
  if ( result == 1 ) /*0x140695101*/
  {
    v12[0] = v3; /*0x14069511f*/
    sub_1416C3060( /*0x14069514c*/
      (unsigned int)aFailedToBuildA,
      41,
      (unsigned int)v12,
      (unsigned int)&off_1417826E0,
      (__int64)&off_141782298);
  }
  *v1 = v3; /*0x140695103*/
  return result; /*0x140695106*/
}