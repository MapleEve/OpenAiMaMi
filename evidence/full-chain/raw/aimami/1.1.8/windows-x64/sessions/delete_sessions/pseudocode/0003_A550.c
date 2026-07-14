// win 1.1.8 delete_sessions node va=0x14127a550 depth=1
// A550
__int64 __fastcall sub_14127A550(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // kr00_16
  _BYTE v6[24]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v7; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+48h] [rbp-38h]
  __m256i v9; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v10[4]; // [rsp+70h] [rbp-10h] BYREF

  v10[1] = -2; /*0x14127a562*/
  v9.m256i_i64[0] = a3; /*0x14127a56d*/
  v9.m256i_i64[1] = (__int64)sub_1405906F0; /*0x14127a578*/
  v9.m256i_i64[2] = a2; /*0x14127a57c*/
  v9.m256i_i64[3] = (__int64)sub_1405906F0; /*0x14127a580*/
  sub_14108F360(v6, &unk_14133EA0D, &v9); /*0x14127a596*/
  v10[0] = sub_141279770(v6); /*0x14127a5a3*/
  v9.m256i_i64[0] = (__int64)v10; /*0x14127a5ab*/
  v9.m256i_i64[1] = (__int64)sub_14105AC30; /*0x14127a5b6*/
  sub_14108F360(&v7, &unk_14133E158, &v9); /*0x14127a5c9*/
  *(_OWORD *)((char *)&v9.m256i_u32[1] + 3) = v7; /*0x14127a5d3*/
  *(__int64 *)((char *)&v9.m256i_i64[2] + 7) = v8; /*0x14127a5db*/
  *(_BYTE *)a1 = 3; /*0x14127a5df*/
  v4 = *(_OWORD *)((char *)&v9.m256i_u64[1] + 7); /*0x14127a5ea*/
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v9.m256i_i8; /*0x14127a5ee*/
  *(_OWORD *)(a1 + 16) = v4; /*0x14127a5f2*/
  return sub_14105AC40(v10); /*0x14127a604*/
}