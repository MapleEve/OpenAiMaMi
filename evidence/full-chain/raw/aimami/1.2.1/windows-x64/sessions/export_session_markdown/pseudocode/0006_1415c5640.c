// win 1.2.1 NEW export_session_markdown 0x1415c5640 d=1
__int64 __fastcall sub_1415C5640(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // kr00_16
  _BYTE v6[24]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v7; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+48h] [rbp-38h]
  __m256i v9; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v10[4]; // [rsp+70h] [rbp-10h] BYREF

  v10[1] = -2; /*0x1415c5652*/
  v9.m256i_i64[0] = a3; /*0x1415c565d*/
  v9.m256i_i64[1] = (__int64)sub_1401F8E10; /*0x1415c5668*/
  v9.m256i_i64[2] = a2; /*0x1415c566c*/
  v9.m256i_i64[3] = (__int64)sub_1401F8E10; /*0x1415c5670*/
  sub_1413CAFD0(v6, &unk_141683508, &v9); /*0x1415c5686*/
  v10[0] = sub_1415C4D00(v6); /*0x1415c5693*/
  v9.m256i_i64[0] = (__int64)v10; /*0x1415c569b*/
  v9.m256i_i64[1] = (__int64)sub_141395C30; /*0x1415c56a6*/
  sub_1413CAFD0(&v7, &unk_141684448, &v9); /*0x1415c56b9*/
  *(_OWORD *)((char *)&v9.m256i_u32[1] + 3) = v7; /*0x1415c56c3*/
  *(__int64 *)((char *)&v9.m256i_i64[2] + 7) = v8; /*0x1415c56cb*/
  *(_BYTE *)a1 = 3; /*0x1415c56cf*/
  v4 = *(_OWORD *)((char *)&v9.m256i_u64[1] + 7); /*0x1415c56da*/
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v9.m256i_i8; /*0x1415c56de*/
  *(_OWORD *)(a1 + 16) = v4; /*0x1415c56e2*/
  return sub_141395C50(v10); /*0x1415c56f4*/
}