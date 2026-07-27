// module: codexmate_lib/core/voice/asr
// addr: 0x140a55230
// name: keyring_entry
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::voice::asr::keyring_entry | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall keyring_entry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int128 v6; // [rsp+28h] [rbp-58h] BYREF
  __int64 v7; // [rsp+38h] [rbp-48h]
  __m256i v8; // [rsp+40h] [rbp-40h] BYREF
  __int128 v9; // [rsp+60h] [rbp-20h]
  __m256i v10; // [rsp+70h] [rbp-10h] BYREF
  __int128 v11; // [rsp+90h] [rbp+10h]
  _QWORD v12[2]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+40h]
  __int64 v15; // [rsp+C8h] [rbp+48h]
  __int128 v16; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v17; // [rsp+E0h] [rbp+60h]
  __int64 v18; // [rsp+F0h] [rbp+70h]
  __int64 v19; // [rsp+F8h] [rbp+78h]

  v19 = -2;
  v12[0] = a2;
  v12[1] = a3;
  v10.m256i_i64[0] = (__int64)v12;
  v10.m256i_i64[1] = (__int64)sub_14041F680;
  sub_14149C0F0(&v13, &unk_1417A90CC, &v10);
  v18 = v14;
  result = sub_140F84960((unsigned int)&v8, (unsigned int)aDevAimamiDeskt, 28, v14, v15);
  if ( v8.m256i_i64[0] == -1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v8.m256i_u64[1];
    *(_QWORD *)a1 = -1;
    v5 = v13;
    if ( !v13 )
      return result;
  }
  else
  {
    v11 = v9;
    v10 = v8;
    *(_QWORD *)&v16 = &v10;
    *((_QWORD *)&v16 + 1) = sub_140F85190;
    sub_14149C0F0(&v6, &unk_1417A53D8, &v16);
    v16 = v6;
    v17 = v7;
    sub_1409833A0(&v10);
    *(_QWORD *)a1 = 10;
    *(_OWORD *)(a1 + 8) = v16;
    result = v17;
    *(_QWORD *)(a1 + 24) = v17;
    v5 = v13;
    if ( !v13 )
      return result;
  }
  return sub_140001660(v18, v5, 1);
}
