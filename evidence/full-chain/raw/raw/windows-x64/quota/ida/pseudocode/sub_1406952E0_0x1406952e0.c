// win 1.2.1 | module src/core/relay/quota.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1406952E0(_QWORD **a1)
{
  _QWORD *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rdx
  _BYTE v4[680]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v5; // [rsp+2D8h] [rbp+258h]
  int v6; // [rsp+2E0h] [rbp+260h]
  __int64 v7; // [rsp+328h] [rbp+2A8h]
  int v8; // [rsp+330h] [rbp+2B0h]
  __int64 v9; // [rsp+368h] [rbp+2E8h]
  _QWORD v10[4]; // [rsp+3C0h] [rbp+340h] BYREF

  v10[1] = -2; /*0x1406952f2*/
  v1 = (_QWORD *)**a1; /*0x140695300*/
  **a1 = 0; /*0x140695303*/
  if ( !v1 ) /*0x14069530d*/
    sub_1416C3040(&off_141781120); /*0x140695373*/
  sub_14104B490(v4); /*0x140695316*/
  v7 = 12; /*0x14069531b*/
  v8 = 0; /*0x140695326*/
  v5 = 12; /*0x140695330*/
  v6 = 0; /*0x14069533b*/
  v9 = 6; /*0x140695345*/
  result = sub_141042BD0(v4); /*0x140695353*/
  if ( result == 1 ) /*0x14069535c*/
  {
    v10[0] = v3; /*0x14069537a*/
    sub_1416C3060( /*0x1406953a7*/
      (unsigned int)aFailedToBuildA_3,
      40,
      (unsigned int)v10,
      (unsigned int)&off_1417826E0,
      (__int64)&off_1417825E0);
  }
  *v1 = v3; /*0x14069535e*/
  return result; /*0x140695361*/
}