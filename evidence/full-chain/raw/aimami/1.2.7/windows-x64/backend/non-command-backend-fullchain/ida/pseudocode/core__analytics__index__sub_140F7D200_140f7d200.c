// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140f7d200 | name sub_140F7D200
// win 1.2.7 | module src/core/analytics/index.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_140F7D200(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  __int128 v6; // rax
  __m512i v8; // [rsp+20h] [rbp-60h] BYREF
  __int64 v9; // [rsp+68h] [rbp-18h] BYREF
  __m512i v10; // [rsp+70h] [rbp-10h]
  __m512i v11; // [rsp+B0h] [rbp+30h] BYREF
  __m512i v12; // [rsp+F0h] [rbp+70h] BYREF
  __m512i *v13; // [rsp+138h] [rbp+B8h] BYREF
  _QWORD v14[4]; // [rsp+140h] [rbp+C0h] BYREF

  v14[1] = -2;
  sub_140EC0780(&v9, a2, aSelectValueFro_0, 45);
  v12 = v10;
  if ( (_DWORD)v9 == 1 )
  {
    v11 = v12;
    v3 = v12.m512i_i64[0];
    if ( v12.m512i_i64[0] != -1 )
      goto LABEL_3;
LABEL_15:
    v4 = v11.m512i_i64[1];
    goto LABEL_16;
  }
  v8 = v12;
  v5 = sub_1417A9630(v12.m512i_i64[7]);
  if ( v5 )
  {
    *(_OWORD *)v11.m512i_i8 = 0x8000000000000013uLL;
    v11.m512i_i64[2] = v5;
    goto LABEL_14;
  }
  v13 = &v8;
  v14[0] = 0;
  sub_140F9AB20(&v9, &v13);
  *(_QWORD *)&v6 = v9;
  if ( v9 == -1 )
  {
    *((_QWORD *)&v6 + 1) = v14;
    if ( v14[0] )
    {
      sub_14018EA70(&v11, v14, 0, &off_141A58998);
      goto LABEL_13;
    }
    *(_QWORD *)&v6 = 0x8000000000000009uLL;
  }
  else
  {
    *((_QWORD *)&v6 + 1) = v10.m512i_i64[0];
    *(_OWORD *)v12.m512i_i8 = *(_OWORD *)&v10.m512i_u64[1];
    *(_OWORD *)&v12.m512i_u64[2] = *(_OWORD *)&v10.m512i_u64[3];
    *(_OWORD *)&v12.m512i_u64[4] = *(_OWORD *)&v10.m512i_u64[5];
  }
  *(_OWORD *)v11.m512i_i8 = v6;
  *(_OWORD *)&v11.m512i_u64[2] = *(_OWORD *)v12.m512i_i8;
  *(_OWORD *)&v11.m512i_u64[4] = *(_OWORD *)&v12.m512i_u64[2];
  *(_OWORD *)&v11.m512i_u64[6] = *(_OWORD *)&v12.m512i_u64[4];
LABEL_13:
  sub_140E96D30(&v13);
LABEL_14:
  sub_140E970D0(&v8);
  v3 = v11.m512i_i64[0];
  if ( v11.m512i_i64[0] == -1 )
    goto LABEL_15;
LABEL_3:
  if ( v3 == 0x8000000000000009uLL )
  {
    sub_1408EC870(&v11);
    v4 = 0;
LABEL_16:
    a1[1] = v4;
    *a1 = -1;
    return a1;
  }
  v10.m512i_i64[6] = v11.m512i_i64[7];
  *(_OWORD *)&v10.m512i_u64[4] = *(_OWORD *)&v11.m512i_u64[5];
  *(_OWORD *)&v10.m512i_u64[2] = *(_OWORD *)&v11.m512i_u64[3];
  v9 = v3;
  *(_OWORD *)v10.m512i_i8 = *(_OWORD *)&v11.m512i_u64[1];
  v8.m512i_i64[0] = (__int64)&v9;
  v8.m512i_i64[1] = (__int64)sub_141404740;
  sub_1416ABFD0(&v12, &unk_141A6499F, &v8);
  a1[3] = v12.m512i_i64[2];
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v12.m512i_i8;
  sub_140E96F40(&v9);
  *a1 = 10;
  return a1;
}
