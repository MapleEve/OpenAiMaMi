// win 1.2.7 latest-exe | module src/core/analytics/parser.rs | ea 0x14082f760 | successor of pre-update 0x140f8b200 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
__int64 __fastcall sub_14082F760(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // xmm0
  _OWORD *v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h]
  __int128 *v18; // [rsp+60h] [rbp-20h] BYREF
  _OWORD *v19; // [rsp+68h] [rbp-18h]
  _BYTE v20[24]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v21; // [rsp+90h] [rbp+10h] BYREF
  __int128 v22; // [rsp+A0h] [rbp+20h]
  __int128 v23; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v24; // [rsp+C0h] [rbp+40h]
  __int64 v25; // [rsp+D0h] [rbp+50h]

  v25 = -2;
  nullsub_1(a1, a2);
  v6 = sub_140001650(64, 8);
  if ( !v6 )
    sub_14196B2C1(8, 64);
  v19 = (_OWORD *)v6;
  sub_140B73E90(&v23, a2);
  if ( (_BYTE)v23 == 0xFF )
  {
    *(_QWORD *)&v21 = *((_QWORD *)&v23 + 1);
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_8,
      43,
      (unsigned int)&v21,
      (unsigned int)&off_141A48108,
      (__int64)&off_141A4D978);
  }
  v22 = v24;
  v21 = v23;
  sub_140B73E90(&v23, a3);
  if ( (_BYTE)v23 == 0xFF )
  {
    *(_QWORD *)v20 = *((_QWORD *)&v23 + 1);
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_8,
      43,
      (unsigned int)v20,
      (unsigned int)&off_141A48108,
      (__int64)&off_141A4D978);
  }
  v9 = v23;
  v10 = v19;
  v19[3] = v24;
  v10[2] = v9;
  v11 = v21;
  v10[1] = v22;
  *v10 = v11;
  *((_QWORD *)&v21 + 1) = 2;
  *(_QWORD *)&v22 = v10;
  *((_QWORD *)&v22 + 1) = 2;
  LOBYTE(v21) = 4;
  nullsub_1(v8, v7);
  v12 = sub_140001650(128, 1);
  if ( !v12 )
    sub_14196B2DB(1, 128);
  *(_QWORD *)&v23 = 128;
  *((_QWORD *)&v23 + 1) = v12;
  *(_QWORD *)&v24 = 0;
  v18 = &v23;
  sub_140785060(&v21, &v18);
  *(_OWORD *)v20 = v23;
  *(_QWORD *)&v20[16] = v24;
  if ( (_QWORD)v23 == -1 )
  {
    sub_140032F30(&v20[8]);
    *a1 = -1;
  }
  else
  {
    v17 = *(_OWORD *)&v20[8];
    v16 = v23;
    sub_1407841A0(&v23, &v16);
    *(_QWORD *)v20 = &v23;
    *(_QWORD *)&v20[8] = sub_140759D50;
    sub_1416DAFA0(&v14, &unk_141A48A7D, v20);
    a1[2] = v15;
    *(_OWORD *)a1 = v14;
  }
  return sub_140032FF0(&v21);
}
