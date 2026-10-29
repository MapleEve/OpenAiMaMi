// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402fbe50 | name sub_1402FBE50
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402FBE50(_QWORD *a1, const __m128i *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __m128i *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v18; // xmm0
  _OWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int128 v22; // xmm0
  _BYTE *v24; // rax
  _QWORD v25[4]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v26; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h]
  __int64 v28; // [rsp+60h] [rbp-20h] BYREF
  _DWORD *v29; // [rsp+68h] [rbp-18h]
  __int64 v30; // [rsp+70h] [rbp-10h]
  __int64 v31; // [rsp+78h] [rbp-8h]
  _OWORD *v32; // [rsp+80h] [rbp+0h]
  __m256i v33; // [rsp+88h] [rbp+8h] BYREF
  char v34; // [rsp+AEh] [rbp+2Eh]
  char v35; // [rsp+AFh] [rbp+2Fh]
  __int64 v36; // [rsp+B0h] [rbp+30h]

  v36 = -2;
  v31 = a4;
  v7 = a1[2];
  if ( v7
    && (v8 = a1[1] + 32 * v7 - 32,
        v35 = 1,
        (v9 = sub_1416419F0(
                "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperatu"
                "remax_tokensstreamdoubaoreasoning_effortnone",
                4,
                v8)) != 0)
    && *(_BYTE *)v9 == 3
    && *(_QWORD *)(v9 + 24) == a3
    && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v9 + 16), a2)
    && (v35 = 1,
        (v24 = (_BYTE *)sub_1416419F0(
                          "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperatu"
                          "remax_tokensstreamdoubaoreasoning_effortnone",
                          7,
                          v8)) != nullptr)
    && *v24 == 4 )
  {
    v35 = 0;
    return sub_1401F46A0(v24 + 8, v31);
  }
  else
  {
    *(_QWORD *)&v26 = 0;
    v27 = 0;
    nullsub_1(a1);
    v10 = (_DWORD *)sub_140001650(4, 1);
    if ( !v10 )
      sub_141938D2B(1, 4);
    *v10 = 1701605234;
    v28 = 4;
    v29 = v10;
    v30 = 4;
    nullsub_1(v11);
    v12 = (__m128i *)sub_140001650(a3, 1);
    v32 = v12;
    if ( !v12 )
      sub_141938D2B(1, a3);
    v13 = (__int64)v12;
    sub_1418F44E0(v12, a2, a3);
    v33.m256i_i8[0] = 3;
    v33.m256i_i64[1] = a3;
    v33.m256i_i64[2] = v13;
    v33.m256i_i64[3] = a3;
    sub_140E72AA0(v25, &v26, &v28, &v33);
    if ( LOBYTE(v25[0]) != 0xFF )
      sub_14002F9D0(v25);
    nullsub_1(v14);
    v15 = (_DWORD *)sub_140001650(7, 1);
    if ( !v15 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v15 + 3) = 1953391988;
    *v15 = 1953394531;
    v28 = 7;
    v29 = v15;
    v30 = 7;
    nullsub_1(v16);
    v17 = sub_140001650(32, 8);
    if ( !v17 )
    {
      v34 = 1;
      sub_141938D11(8, 32);
    }
    v32 = (_OWORD *)v17;
    sub_140412420(&v33, v31);
    if ( v33.m256i_i8[0] == -1 )
    {
      v25[0] = v33.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_2,
        43,
        (unsigned int)v25,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419E8858);
    }
    v18 = *(_OWORD *)v33.m256i_i8;
    v19 = v32;
    v32[1] = *(_OWORD *)&v33.m256i_u64[2];
    *v19 = v18;
    v33.m256i_i64[1] = 1;
    v33.m256i_i64[2] = (__int64)v19;
    v33.m256i_i64[3] = 1;
    v33.m256i_i8[0] = 4;
    v34 = 0;
    sub_140E72AA0(v25, &v26, &v28, &v33);
    if ( LOBYTE(v25[0]) != 0xFF )
      sub_14002F9D0(v25);
    *(_OWORD *)&v33.m256i_u64[1] = v26;
    v33.m256i_i64[3] = v27;
    v33.m256i_i8[0] = 5;
    if ( v7 == *a1 )
      sub_14190F570(a1);
    v20 = a1[1];
    v21 = 32 * v7;
    v22 = *(_OWORD *)v33.m256i_i8;
    *(_OWORD *)(v20 + v21 + 16) = *(_OWORD *)&v33.m256i_u64[2];
    *(_OWORD *)(v20 + v21) = v22;
    a1[2] = v7 + 1;
    return sub_14002F9D0(v31);
  }
}
