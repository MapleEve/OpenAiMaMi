// win 1.2.1 | module src/core/relay/fetch_models.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140694E00(_QWORD **a1)
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

  v12[1] = -2; /*0x140694e12*/
  v1 = (_QWORD *)**a1; /*0x140694e20*/
  **a1 = 0; /*0x140694e23*/
  if ( !v1 ) /*0x140694e2d*/
    sub_1416C3040(&off_141781120); /*0x140694ea8*/
  sub_14104B490(v4); /*0x140694e36*/
  v9 = 30; /*0x140694e3b*/
  v10 = 0; /*0x140694e46*/
  v5 = 30; /*0x140694e50*/
  v6 = 0; /*0x140694e5b*/
  v11 = 10; /*0x140694e65*/
  v7 = 60; /*0x140694e70*/
  v8 = 0; /*0x140694e7b*/
  result = sub_141042BD0(v4); /*0x140694e88*/
  if ( result == 1 ) /*0x140694e91*/
  {
    v12[0] = v3; /*0x140694eaf*/
    sub_1416C3060( /*0x140694edc*/
      (unsigned int)"failed to build async fetch_models client",
      41,
      (unsigned int)v12,
      (unsigned int)&off_1417826E0,
      (__int64)&off_1417821F0);
  }
  *v1 = v3; /*0x140694e93*/
  return result; /*0x140694e96*/
}