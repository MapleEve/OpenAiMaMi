// module: codexmate_lib/core/repository
// addr: 0x1403c1ed0
// name: canonical_managed_child_directory
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::repository::canonical_managed_child_directory | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall canonical_managed_child_directory(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int128 v15; // xmm6
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-50h]
  unsigned __int8 v21; // [rsp+38h] [rbp-48h]
  char v22; // [rsp+60h] [rbp-20h]
  char v23; // [rsp+61h] [rbp-1Fh]
  __m128i v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+78h] [rbp-8h]
  __m128i v26; // [rsp+80h] [rbp+0h] BYREF
  __int128 v27; // [rsp+90h] [rbp+10h]
  __int128 v28; // [rsp+A0h] [rbp+20h]
  __int128 v29; // [rsp+B0h] [rbp+30h]
  __m128i v30; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v31; // [rsp+D0h] [rbp+50h]
  __int128 v32; // [rsp+E0h] [rbp+60h]
  __int128 v33; // [rsp+F0h] [rbp+70h]
  unsigned int v34; // [rsp+10Ch] [rbp+8Ch]
  unsigned int v35; // [rsp+110h] [rbp+90h]
  __int64 v36; // [rsp+118h] [rbp+98h]
  __int64 v37; // [rsp+120h] [rbp+A0h]
  __int64 v38; // [rsp+128h] [rbp+A8h]
  __int64 v39; // [rsp+130h] [rbp+B0h]
  __int64 v40; // [rsp+138h] [rbp+B8h]

  v40 = -2;
  if ( a6
    && ((v30.m128i_i8[0] = 1, (result = sub_14147B9A0(&v30, a2, a3)) != 0)
     || (v30.m128i_i8[0] = 1, (result = sub_14147B9A0(&v30, a4, a5)) != 0)) )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = result;
  }
  else
  {
    sub_141486270(&v30, a4, a5);
    if ( v30.m128i_i32[0] == 2 )
    {
      v11 = v30.m128i_i64[1];
      result = sub_1403887F0(v30.m128i_i64[1]);
      if ( (_BYTE)result )
      {
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v11;
      }
      else
      {
        v30.m128i_i64[0] = v11;
        *(_OWORD *)a1 = -1;
        return sub_140018650(&v30);
      }
    }
    else if ( (v34 & 0x10) == 0 || ((unsigned __int8)(v34 >> 10) & (v35 >> 29) & 1) != 0 )
    {
      v26.m128i_i64[0] = a4;
      v26.m128i_i64[1] = a5;
      v30.m128i_i64[0] = (__int64)&v26;
      v30.m128i_i64[1] = (__int64)sub_14148F3A0;
      result = sub_14149C0F0(a1 + 8, &unk_141750806, &v30);
      *(_QWORD *)a1 = 9;
    }
    else
    {
      sub_141485FE0(&v30, a2, a3);
      v12 = v30.m128i_i64[1];
      result = v30.m128i_i64[0];
      if ( v30.m128i_i64[0] == -1 )
      {
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v12;
      }
      else
      {
        v37 = v30.m128i_i64[1];
        v38 = v30.m128i_i64[0];
        v13 = v31;
        sub_141485FE0(&v30, a4, a5);
        v14 = v30.m128i_i64[1];
        result = v30.m128i_i64[0];
        if ( v30.m128i_i64[0] == -1 )
        {
          *(_QWORD *)a1 = 2;
          *(_QWORD *)(a1 + 8) = v14;
        }
        else
        {
          v39 = v30.m128i_i64[0];
          v15 = v31;
          v36 = v30.m128i_i64[1];
          v16 = sub_1414740B0(v30.m128i_i64[1], v31);
          if ( v16
            && ((sub_141473290(&v19, v16, v17), sub_141473290(&v26, v37, v13), v20 == v26.m128i_i64[1])
             && v22 == BYTE8(v29)
             && v23 == 2
             && BYTE9(v29) == 2
             && v21 < 3u == (unsigned __int8)v27 < 3u
             && !(unsigned int)sub_1416847B0(v19, v26.m128i_i64[0], v20)
             || (v18 = _mm_loadu_si128(&v26),
                 v33 = v29,
                 v32 = v28,
                 v31 = v27,
                 v30 = v18,
                 (unsigned __int8)sub_140467AB0(&v19, &v30))) )
          {
            *(_QWORD *)(a1 + 8) = v39;
            result = v36;
            *(_QWORD *)(a1 + 16) = v36;
            *(_OWORD *)(a1 + 24) = v15;
            *(_QWORD *)a1 = -1;
          }
          else
          {
            v26.m128i_i64[0] = a4;
            v26.m128i_i64[1] = a5;
            v30.m128i_i64[0] = (__int64)&v26;
            v30.m128i_i64[1] = (__int64)sub_14148F3A0;
            sub_14149C0F0(&v24, &unk_1417507DD, &v30);
            result = v25;
            *(_QWORD *)(a1 + 24) = v25;
            *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v24);
            *(_QWORD *)a1 = 9;
            if ( v39 )
              result = sub_140001660(v36, v39, 1);
          }
        }
        if ( v38 )
          return sub_140001660(v37, v38, 1);
      }
    }
  }
  return result;
}
