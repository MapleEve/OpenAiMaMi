// win 1.2.1 NEW migrate_session_worktree 0x140284d50 d=1
__int64 __fastcall sub_140284D50(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _BYTE *v6; // rax
  int v7; // ecx
  char v8; // r14
  char v9; // r15
  _BYTE *v10; // r14
  char v11; // cl
  char v12; // r12
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  _OWORD v17[8]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v18; // [rsp+A0h] [rbp+20h] BYREF
  char v19; // [rsp+A2h] [rbp+22h]
  _BYTE v20[2]; // [rsp+A5h] [rbp+25h] BYREF
  char v21; // [rsp+A7h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+28h]

  v22 = -2; /*0x140284d69*/
  *(_QWORD *)&v17[0] = -3; /*0x140284d7a*/
  v21 = 1; /*0x140284d82*/
  v6 = (_BYTE *)sub_1412174D0(); /*0x140284d86*/
  v7 = (unsigned __int8)v6[72]; /*0x140284d8c*/
  if ( v7 != 1 ) /*0x140284d93*/
  {
    if ( v7 == 2 ) /*0x140284d98*/
    {
      v8 = 0; /*0x140284d9a*/
      v9 = 0; /*0x140284d9d*/
      goto LABEL_11; /*0x140284da0*/
    }
    v21 = 1; /*0x140284da2*/
    v10 = v6; /*0x140284db0*/
    sub_1413BAAC0(v6, sub_140AB41B0); /*0x140284db3*/
    v6 = v10; /*0x140284db9*/
    v10[72] = 1; /*0x140284dbc*/
  }
  v8 = v6[68]; /*0x140284dc1*/
  v9 = v6[69]; /*0x140284dc6*/
  v11 = v9; /*0x140284dcb*/
  if ( v8 != 1 ) /*0x140284dd2*/
    goto LABEL_8; /*0x140284dd2*/
  if ( v9 ) /*0x140284dd7*/
  {
    v11 = v9 - 1; /*0x140284ddd*/
LABEL_8:
    v6[69] = v11; /*0x140284de1*/
    v12 = 0; /*0x140284de4*/
    goto LABEL_9; /*0x140284de4*/
  }
  v21 = 1; /*0x140284e9d*/
  sub_141217F10(a3); /*0x140284ea4*/
  v12 = 1; /*0x140284eaa*/
  v9 = 0; /*0x140284ead*/
LABEL_9:
  v19 = 0; /*0x140284de7*/
  v18 = 0; /*0x140284deb*/
  v21 = 1; /*0x140284df5*/
  sub_1412187B0((char *)&v18 + 1); /*0x140284df9*/
  if ( v12 ) /*0x140284e02*/
  {
    *(_QWORD *)a1 = -3; /*0x140284e04*/
    sub_140200990(v17); /*0x140284e0f*/
    return a1; /*0x140284e14*/
  }
LABEL_11:
  v20[0] = v8; /*0x140284e16*/
  v20[1] = v9; /*0x140284e1a*/
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(*(_QWORD *)(*a2 + 16LL) + 24LL))(*a2, v17, *a3); /*0x140284e2c*/
  if ( *(_QWORD *)&v17[0] != -3 ) /*0x140284e35*/
    v20[0] = 0; /*0x140284e37*/
  *(_OWORD *)(a1 + 112) = v17[7]; /*0x140284e3f*/
  *(_OWORD *)(a1 + 96) = v17[6]; /*0x140284e47*/
  *(_OWORD *)(a1 + 80) = v17[5]; /*0x140284e4f*/
  *(_OWORD *)(a1 + 64) = v17[4]; /*0x140284e57*/
  v13 = v17[0]; /*0x140284e5b*/
  v14 = v17[1]; /*0x140284e5f*/
  v15 = v17[2]; /*0x140284e63*/
  *(_OWORD *)(a1 + 48) = v17[3]; /*0x140284e6b*/
  *(_OWORD *)(a1 + 32) = v15; /*0x140284e6f*/
  *(_OWORD *)(a1 + 16) = v14; /*0x140284e73*/
  *(_OWORD *)a1 = v13; /*0x140284e77*/
  v21 = 0; /*0x140284e7a*/
  sub_1412187B0(v20); /*0x140284e82*/
  return a1; /*0x140284e8b*/
}