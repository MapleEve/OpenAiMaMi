// module: codexmate_lib/core/oauth_refresh
// addr: 0x14098f1f0
// name: deserialize
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::oauth_refresh::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..oauth_refresh..TokenEndpointErrorValue$GT$::deserialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall deserialize(__int64 a1)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __m256i v6; // [rsp+30h] [rbp-50h] BYREF
  __m256i v7; // [rsp+50h] [rbp-30h] BYREF
  __int128 v8; // [rsp+70h] [rbp-10h]
  __m256i v9; // [rsp+80h] [rbp+0h] BYREF
  __int128 v10; // [rsp+A0h] [rbp+20h]
  __int64 v11; // [rsp+B0h] [rbp+30h]

  v11 = -2;
  sub_14095FFF0(&v9);
  if ( v9.m256i_i8[0] != -1 )
  {
    v6 = v9;
    sub_1407EB160(&v7, &v6);
    if ( v7.m256i_i64[0] == -1 )
    {
      v9.m256i_i64[1] = v7.m256i_i64[1];
      v9.m256i_i64[0] = -3;
      sub_140980ED0(&v9);
      ((void (__fastcall *)(__m256i *, __m256i *, const char *, __int64, char **, __int64))sub_1407ED2B0)(
        &v9,
        &v6,
        aTokenendpointe,
        24,
        &off_1417A45D8,
        2);
      if ( v9.m256i_i64[0] == -2 )
      {
        v7.m256i_i64[1] = v9.m256i_i64[1];
        v7.m256i_i64[0] = -3;
      }
      else
      {
        v7 = v9;
        v8 = v10;
        if ( v9.m256i_i64[0] != -3 )
        {
          v3 = *(_OWORD *)v7.m256i_i8;
          v4 = *(_OWORD *)&v7.m256i_u64[2];
          *(_OWORD *)(a1 + 32) = v8;
          *(_OWORD *)(a1 + 16) = v4;
          *(_OWORD *)a1 = v3;
          goto LABEL_10;
        }
      }
      sub_140980ED0(&v7);
      *(_QWORD *)(a1 + 8) = sub_1416979B0(aDataDidNotMatc_6, 71);
      *(_QWORD *)a1 = -3;
    }
    else
    {
      v9.m256i_i64[3] = v7.m256i_i64[2];
      *(_OWORD *)&v9.m256i_u64[1] = *(_OWORD *)v7.m256i_i8;
      v9.m256i_i64[0] = -2;
      v2 = *(_OWORD *)&v9.m256i_u64[2];
      *(_OWORD *)(a1 + 32) = v10;
      *(_OWORD *)(a1 + 16) = v2;
      *(_OWORD *)a1 = *(_OWORD *)v9.m256i_i8;
    }
LABEL_10:
    sub_140984EE0(&v6);
    return a1;
  }
  *(_QWORD *)(a1 + 8) = v9.m256i_i64[1];
  *(_QWORD *)a1 = -3;
  return a1;
}
