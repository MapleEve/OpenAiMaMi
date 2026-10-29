// win 1.2.7 | module src/core/relay/anthropic_history.rs | ea 0x140346250 | name sub_140346250
// win 1.2.7 | module src/core/relay/anthropic_history.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_140346250(_QWORD *a1, __int128 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm0
  _OWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  _QWORD v23[4]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h] BYREF
  _DWORD *v27; // [rsp+68h] [rbp-18h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  __int128 *v29; // [rsp+78h] [rbp-8h]
  _OWORD *v30; // [rsp+80h] [rbp+0h]
  __m256i v31; // [rsp+88h] [rbp+8h] BYREF
  char v32; // [rsp+AEh] [rbp+2Eh]
  char v33; // [rsp+AFh] [rbp+2Fh]
  __int64 v34; // [rsp+B0h] [rbp+30h]

  v34 = -2;
  v29 = a2;
  v3 = a1[2];
  if ( v3
    && (v4 = a1[1] + 32 * v3 - 32,
        v33 = 1,
        (v5 = sub_1416419F0(
                "rolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperatu"
                "remax_tokensstreamdoubaoreasoning_effortnone",
                4,
                v4)) != 0)
    && *(_BYTE *)v5 == 3
    && *(_QWORD *)(v5 + 24) == 4
    && **(_DWORD **)(v5 + 16) == 1919251317
    && (v33 = 1,
        (v19 = sub_1416419F0(
                 "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tok"
                 "ensstreamdoubaoreasoning_effortnone",
                 7,
                 v4)) != 0)
    && *(_BYTE *)v19 == 4 )
  {
    v20 = *(_QWORD *)(v19 + 16) + 32LL * *(_QWORD *)(v19 + 24);
    v31.m256i_i64[0] = *(_QWORD *)(v19 + 16);
    v31.m256i_i64[1] = v20;
    v33 = 1;
    v21 = v19;
    if ( (sub_1402B2E40(&v31) & 1) == 0 )
      v22 = *(_QWORD *)(v21 + 24);
    v33 = 0;
    return sub_1402BD620((_QWORD *)(v21 + 8), v22, v29);
  }
  else
  {
    *(_QWORD *)&v24 = 0;
    v25 = 0;
    nullsub_1(a1);
    v6 = (_DWORD *)sub_140001650(4, 1);
    if ( !v6 )
      sub_141938D2B(1, 4);
    *v6 = 1701605234;
    v26 = 4;
    v27 = v6;
    v28 = 4;
    nullsub_1(v7);
    v8 = (_DWORD *)sub_140001650(4, 1);
    v30 = v8;
    if ( !v8 )
      sub_141938D2B(1, 4);
    *v8 = 1919251317;
    v31.m256i_i8[0] = 3;
    v31.m256i_i64[1] = 4;
    v31.m256i_i64[2] = (__int64)v8;
    v31.m256i_i64[3] = 4;
    sub_140E72AA0(v23, &v24, &v26, &v31);
    if ( LOBYTE(v23[0]) != 0xFF )
      sub_14002F9D0(v23);
    nullsub_1(v9);
    v10 = (_DWORD *)sub_140001650(7, 1);
    if ( !v10 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v10 + 3) = 1953391988;
    *v10 = 1953394531;
    v26 = 7;
    v27 = v10;
    v28 = 7;
    nullsub_1(v11);
    v12 = sub_140001650(32, 8);
    if ( !v12 )
    {
      v32 = 1;
      sub_141938D11(8, 32);
    }
    v30 = (_OWORD *)v12;
    sub_140412420(&v31, v29);
    if ( v31.m256i_i8[0] == -1 )
    {
      v23[0] = v31.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_2,
        43,
        (unsigned int)v23,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419E9968);
    }
    v13 = *(_OWORD *)v31.m256i_i8;
    v14 = v30;
    v30[1] = *(_OWORD *)&v31.m256i_u64[2];
    *v14 = v13;
    v31.m256i_i64[1] = 1;
    v31.m256i_i64[2] = (__int64)v14;
    v31.m256i_i64[3] = 1;
    v31.m256i_i8[0] = 4;
    v32 = 0;
    sub_140E72AA0(v23, &v24, &v26, &v31);
    if ( LOBYTE(v23[0]) != 0xFF )
      sub_14002F9D0(v23);
    *(_OWORD *)&v31.m256i_u64[1] = v24;
    v31.m256i_i64[3] = v25;
    v31.m256i_i8[0] = 5;
    if ( v3 == *a1 )
      sub_14190F570(a1);
    v15 = a1[1];
    v16 = 32 * v3;
    v17 = *(_OWORD *)v31.m256i_i8;
    *(_OWORD *)(v15 + v16 + 16) = *(_OWORD *)&v31.m256i_u64[2];
    *(_OWORD *)(v15 + v16) = v17;
    a1[2] = v3 + 1;
    return (__int128 *)sub_14002F9D0(v29);
  }
}
