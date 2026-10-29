// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x1401f9780 | name sub_1401F9780
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401F9780(__int64 *a1, __int64 a2, char a3)
{
  __int64 v5; // rsi
  __int64 *v6; // r15
  _BYTE *v7; // r12
  unsigned int v8; // r14d
  char v9; // al
  _DWORD *v10; // rax
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  char v17; // al
  _QWORD v18[4]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  _OWORD v21[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v22; // [rsp+80h] [rbp+0h] BYREF
  __int128 v23; // [rsp+90h] [rbp+10h]
  _BYTE v24[8]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v25; // [rsp+A8h] [rbp+28h]
  __int64 v26; // [rsp+B8h] [rbp+38h]
  char v27; // [rsp+C7h] [rbp+47h]
  __int64 v28; // [rsp+C8h] [rbp+48h]

  v28 = -2;
  v5 = *a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v5 + 56), 1, 0) )
    sub_141937480((volatile void *)(v5 + 56));
  v6 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v17 = sub_141938160(a1);
    a1 = (__int64 *)*(unsigned __int8 *)(v5 + 57);
    v8 = *(_DWORD *)(v5 + 344) + 1;
    *(_DWORD *)(v5 + 344) = v8;
    if ( !v17 )
      goto LABEL_5;
    v7 = (_BYTE *)(v5 + 57);
    if ( !(2 * *v6) )
      goto LABEL_5;
  }
  else
  {
    v7 = (_BYTE *)(v5 + 57);
    v8 = *(_DWORD *)(v5 + 344) + 1;
    *(_DWORD *)(v5 + 344) = v8;
    if ( !(2 * *v6) )
      goto LABEL_5;
  }
  if ( !(unsigned __int8)sub_141938160(a1) )
    *v7 = 1;
LABEL_5:
  v9 = *(_BYTE *)(v5 + 56);
  *(_BYTE *)(v5 + 56) = 0;
  if ( v9 == 2 )
    WakeByAddressSingle((PVOID)(v5 + 56));
  *(_QWORD *)&v19 = 0;
  v20 = 0;
  nullsub_1(a1);
  v10 = (_DWORD *)sub_140001650(7, 1);
  if ( !v10 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v10 + 3) = 1953525093;
  *v10 = 1702130785;
  *(_QWORD *)&v22 = 7;
  *((_QWORD *)&v22 + 1) = v10;
  *(_QWORD *)&v23 = 7;
  v24[0] = 2;
  *(_QWORD *)&v25 = 0;
  *((_QWORD *)&v25 + 1) = v8;
  sub_140E72AA0(v21, &v19, &v22, v24);
  if ( LOBYTE(v21[0]) != 0xFF )
    sub_14002F9D0(v21);
  nullsub_1(v11);
  v12 = (void *)sub_140001650(12, 1);
  if ( !v12 )
    sub_141938D2B(1, 12);
  qmemcpy(v12, "continuation", 12);
  *(_QWORD *)&v22 = 12;
  *((_QWORD *)&v22 + 1) = v12;
  *(_QWORD *)&v23 = 12;
  v24[0] = 1;
  v24[1] = a3;
  sub_140E72AA0(v21, &v19, &v22, v24);
  if ( LOBYTE(v21[0]) != 0xFF )
    sub_14002F9D0(v21);
  nullsub_1(v13);
  v14 = sub_140001650(5, 1);
  if ( !v14 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v14 + 4) = 101;
  *(_DWORD *)v14 = 1885431923;
  v18[0] = 5;
  v18[3] = v14;
  v18[1] = v14;
  v18[2] = 5;
  LOBYTE(v15) = 1;
  sub_1402256C0(v24, a2, v15);
  v27 = 1;
  sub_140412420(v21, v24);
  if ( LOBYTE(v21[0]) == 0xFF )
  {
    *(_QWORD *)&v22 = *((_QWORD *)&v21[0] + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_0,
      43,
      (unsigned int)&v22,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419DB4B0);
  }
  v23 = v21[1];
  v22 = v21[0];
  v27 = 0;
  sub_140E72AA0(v21, &v19, v18, &v22);
  if ( LOBYTE(v21[0]) != 0xFF )
    sub_14002F9D0(v21);
  sub_14002F9D0(v24);
  v25 = v19;
  v26 = v20;
  v24[0] = 5;
  return sub_1401C5C50(v5 + 16, (int)aSend, 4, (__int64)v24);
}
