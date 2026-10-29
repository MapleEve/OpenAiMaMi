// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140f8e6d0 | name sub_140F8E6D0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
signed __int64 *__fastcall sub_140F8E6D0(signed __int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  signed __int64 v6; // rbx
  const __m128i *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  const __m128i **v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __m128i *v14; // rax
  __m128i *v15; // r15

  v4 = sub_1416419F0(aReasoningConte_0, 17, a2);
  if ( v4 && *(_BYTE *)v4 == 3 && (v6 = *(_QWORD *)(v4 + 24)) != 0
    || (v4 = sub_1416419F0(aReasoning_5, 9, a2)) != 0 && *(_BYTE *)v4 == 3 && (v6 = *(_QWORD *)(v4 + 24)) != 0 )
  {
    if ( v6 >= 0 )
    {
      v7 = *(const __m128i **)(v4 + 16);
      goto LABEL_26;
    }
    goto LABEL_20;
  }
  v8 = sub_1416419F0(aReasoning_5, 9, a2);
  if ( v8 )
  {
    if ( (v9 = v8, (v10 = sub_1416419F0(aContent_10, 7, v8)) != 0)
      && *(_BYTE *)v10 == 3
      && (v6 = *(_QWORD *)(v10 + 24)) != 0
      || (v10 = sub_1416419F0(aText_13, 4, v9)) != 0 && *(_BYTE *)v10 == 3 && (v6 = *(_QWORD *)(v10 + 24)) != 0
      || (v10 = sub_1416419F0(aSummary_5, 7, v9)) != 0 && *(_BYTE *)v10 == 3 && (v6 = *(_QWORD *)(v10 + 24)) != 0 )
    {
      v11 = (const __m128i **)(v10 + 16);
      if ( v6 >= 0 )
      {
        v7 = *v11;
LABEL_26:
        nullsub_1(v5);
        v12 = 1;
        v14 = (__m128i *)sub_140001650(v6, 1);
        if ( v14 )
        {
          v15 = v14;
          sub_1418F44E0(v14, v7, v6);
          *a1 = v6;
          a1[1] = (signed __int64)v15;
          a1[2] = v6;
          return a1;
        }
LABEL_21:
        sub_141938D2B(v12, v6);
      }
LABEL_20:
      v12 = 0;
      goto LABEL_21;
    }
  }
  v13 = sub_1416419F0(aReasoningDetai, 17, a2);
  if ( !v13 || (sub_140F8E870(a1, v13), *a1 == -1) )
    *a1 = -1;
  return a1;
}
