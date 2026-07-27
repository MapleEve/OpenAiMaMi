// module: codexmate_lib/core/debug_bundle
// addr: 0x14071fdd0
// name: sub_14071FDD0
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14071FDD0(__int64 a1, __int64 a2)
{
  void *v4; // rax
  int v5; // eax
  bool v6; // cl
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  _OWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v11; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  _OWORD v13[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+8h] BYREF
  __int64 v15; // [rsp+90h] [rbp+10h]
  __int64 v16; // [rsp+98h] [rbp+18h]
  char v17; // [rsp+A6h] [rbp+26h]
  char v18; // [rsp+A7h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+28h]

  v19 = -2;
  *(_QWORD *)&v11 = 0;
  v12 = 0;
  nullsub_1(a1);
  v4 = (void *)sub_140001650(12, 1);
  if ( !v4 )
    sub_1416C2D4B(1, 12);
  qmemcpy(v4, "codexRunning", 12);
  v14 = 12;
  v15 = (__int64)v4;
  v16 = 12;
  v17 = 1;
  v5 = sub_140AECEB0(aChatgpt, 7);
  v6 = 1;
  if ( v5 != 1 )
  {
    v17 = 1;
    v6 = (unsigned int)sub_140AECEB0(aCodex_0, 5) == 1;
  }
  LOBYTE(v13[0]) = 1;
  BYTE1(v13[0]) = v6;
  v17 = 0;
  sub_140307860(v10, &v11, &v14, v13);
  if ( LOBYTE(v10[0]) != 0xFF )
    sub_1400104F0(v10);
  nullsub_1(v7);
  v8 = sub_140001650(9, 1);
  if ( !v8 )
    sub_1416C2D4B(1, 9);
  *(_QWORD *)v8 = 0x7265646C6F486264LL;
  *(_BYTE *)(v8 + 8) = 115;
  v14 = 9;
  v15 = v8;
  v16 = 9;
  v18 = 1;
  sub_140467F40(v13, a2 + 1368);
  if ( LOBYTE(v13[0]) == 0xFF )
  {
    *(_QWORD *)&v10[0] = *((_QWORD *)&v13[0] + 1);
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)v10,
      (unsigned int)&off_141789020,
      (__int64)&off_141789AA0);
  }
  v10[1] = v13[1];
  v10[0] = v13[0];
  v18 = 0;
  sub_140307860(v13, &v11, &v14, v10);
  if ( LOBYTE(v13[0]) != 0xFF )
    sub_1400104F0(v13);
  result = v12;
  *(_QWORD *)(a1 + 24) = v12;
  *(_OWORD *)(a1 + 8) = v11;
  *(_BYTE *)a1 = 5;
  return result;
}