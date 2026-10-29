// win 1.2.7 | module src/core/analytics/parser.rs | ea 0x140f8b200 | name sub_140F8B200
// win 1.2.7 | module src/core/analytics/parser.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F8B200(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm0
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  __int128 v11; // [rsp+28h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+48h] [rbp-38h]
  _QWORD v15[2]; // [rsp+58h] [rbp-28h] BYREF
  _OWORD *v16; // [rsp+68h] [rbp-18h]
  __m256i v17; // [rsp+70h] [rbp-10h] BYREF
  __m256i v18; // [rsp+90h] [rbp+10h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+30h]

  v19 = -2;
  nullsub_1(a1);
  v6 = sub_140001650(64, 8);
  if ( !v6 )
    sub_141938D11(8, 64);
  v16 = (_OWORD *)v6;
  sub_140412420(&v17, a2);
  if ( v17.m256i_i8[0] == -1 )
  {
    v18.m256i_i64[0] = v17.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_18,
      43,
      (unsigned int)&v18,
      (unsigned int)&off_141A58C48,
      (__int64)&off_141A64AD8);
  }
  v18 = v17;
  sub_140412420(&v17, a3);
  if ( v17.m256i_i8[0] == -1 )
  {
    v15[0] = v17.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_18,
      43,
      (unsigned int)v15,
      (unsigned int)&off_141A58C48,
      (__int64)&off_141A64AD8);
  }
  v7 = *(_OWORD *)v17.m256i_i8;
  v8 = v16;
  v16[3] = *(_OWORD *)&v17.m256i_u64[2];
  v8[2] = v7;
  v9 = *(_OWORD *)v18.m256i_i8;
  v8[1] = *(_OWORD *)&v18.m256i_u64[2];
  *v8 = v9;
  v18.m256i_i64[1] = 2;
  v18.m256i_i64[2] = (__int64)v8;
  v18.m256i_i64[3] = 2;
  v18.m256i_i8[0] = 4;
  sub_140E99B40(&v17, &v18);
  if ( v17.m256i_i64[0] == -1 )
  {
    sub_14002F910(&v17.m256i_u64[1]);
    *a1 = -1;
  }
  else
  {
    v14 = *(_OWORD *)&v17.m256i_u64[1];
    v13 = v17.m256i_i64[0];
    sub_140EB55A0(&v17, &v13);
    v15[0] = &v17;
    v15[1] = sub_140364610;
    sub_1416ABFD0(&v11, &unk_141A59367, v15);
    a1[2] = v12;
    *(_OWORD *)a1 = v11;
  }
  return sub_14002F9D0(&v18);
}
