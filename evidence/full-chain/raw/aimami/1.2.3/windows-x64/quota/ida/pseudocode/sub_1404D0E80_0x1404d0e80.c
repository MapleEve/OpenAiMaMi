// win 1.2.1 | module src/core/relay/quota.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404D0E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  int v12; // r9d
  char v13; // r10
  char v14; // r11
  unsigned __int64 v15; // rcx
  int v16; // r11d
  int v17; // r10d
  unsigned __int64 v18; // r9
  __int64 *v19; // rax
  __int64 v21; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-68h]
  _QWORD v23[4]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v24[2]; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v25[6]; // [rsp+68h] [rbp-30h] BYREF

  v24[0] = a4; /*0x1404d0e96*/
  v24[1] = a5; /*0x1404d0e9b*/
  v7 = sub_14033BC10(a2, a3); /*0x1404d0ea6*/
  v9 = v8; /*0x1404d0eab*/
  do /*0x1404d0f38*/
  {
    while ( 1 ) /*0x1404d0ebd*/
    {
      if ( !v9 ) /*0x1404d0ec0*/
      {
        v21 = v7; /*0x1404d0faf*/
        v22 = 0; /*0x1404d0fb4*/
LABEL_19:
        v19 = &v21; /*0x1404d0fbd*/
        goto LABEL_20; /*0x1404d0fbd*/
      }
      v10 = v9; /*0x1404d0ec6*/
      v11 = v7 + v9; /*0x1404d0ec9*/
      v12 = *(char *)(v7 + v9 - 1); /*0x1404d0ecd*/
      if ( v12 < 0 ) /*0x1404d0ed5*/
        break; /*0x1404d0ed5*/
      --v9; /*0x1404d0eb4*/
      if ( v12 != 47 ) /*0x1404d0ebb*/
        goto LABEL_12; /*0x1404d0ebb*/
    }
    v13 = *(_BYTE *)(v11 - 2); /*0x1404d0ed7*/
    if ( v13 >= -64 ) /*0x1404d0ee0*/
    {
      v15 = v11 - 2; /*0x1404d0f05*/
      v17 = v13 & 0x1F; /*0x1404d0f09*/
    }
    else
    {
      v14 = *(_BYTE *)(v11 - 3); /*0x1404d0ee2*/
      if ( v14 >= -64 ) /*0x1404d0eeb*/
      {
        v15 = v11 - 3; /*0x1404d0f0f*/
        v16 = v14 & 0xF; /*0x1404d0f13*/
      }
      else
      {
        v15 = v11 - 4; /*0x1404d0eed*/
        v16 = ((*(_BYTE *)(v11 - 4) & 7) << 6) | v14 & 0x3F; /*0x1404d0f00*/
      }
      v17 = (v16 << 6) | v13 & 0x3F; /*0x1404d0f1f*/
    }
    v9 = v15 - v7; /*0x1404d0f31*/
  }
  while ( ((v17 << 6) | v12 & 0x3F) == 0x2F ); /*0x1404d0f38*/
LABEL_12:
  v21 = v7; /*0x1404d0f3a*/
  v22 = v10; /*0x1404d0f3f*/
  if ( v10 < 3 /*0x1404d0f88*/
    || (*(_WORD *)(v11 - 3) ^ 0x762F | *(unsigned __int8 *)(v11 - 1) ^ 0x31) != 0
    || a5 < 3
    || *(_WORD *)a4 ^ 0x762F | *(unsigned __int8 *)(a4 + 2) ^ 0x31 )
  {
    goto LABEL_19; /*0x1404d0f8c*/
  }
  v18 = v10 - 3; /*0x1404d0f91*/
  if ( v10 != 3 && *(char *)(v7 + v18) <= -65 ) /*0x1404d0f9c*/
    sub_1416C2F60(v7, v10, 0, v18, (__int64)&off_14175D480); /*0x1404d1014*/
  v25[0] = v7; /*0x1404d0f9e*/
  v25[1] = v10 - 3; /*0x1404d0fa3*/
  v19 = v25; /*0x1404d0fa8*/
LABEL_20:
  v23[0] = v19; /*0x1404d0fc2*/
  v23[1] = sub_14041F680; /*0x1404d0fce*/
  v23[2] = v24; /*0x1404d0fd8*/
  v23[3] = sub_14041F680; /*0x1404d0fdd*/
  sub_14149C0F0(a1, &unk_14175D465, v23); /*0x1404d0ff1*/
  return a1; /*0x1404d0ff9*/
}