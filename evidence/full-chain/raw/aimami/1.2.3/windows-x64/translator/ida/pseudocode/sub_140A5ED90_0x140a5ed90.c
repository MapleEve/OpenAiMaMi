// module: codexmate_lib/core/relay/translator
// addr: 0x140a5ed90
// name: sub_140A5ED90
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 *__fastcall sub_140A5ED90(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15

  v4 = sub_141433D50(aReasoningConte, 17, a2);
  if ( v4 && *(_BYTE *)v4 == 3 && (v6 = *(_QWORD *)(v4 + 24)) != 0
    || (v4 = sub_141433D50(aReasoning_0, 9, a2)) != 0 && *(_BYTE *)v4 == 3 && (v6 = *(_QWORD *)(v4 + 24)) != 0 )
  {
    if ( v6 >= 0 )
    {
      v7 = *(_QWORD *)(v4 + 16);
      goto LABEL_26;
    }
    goto LABEL_20;
  }
  v8 = sub_141433D50(aReasoning_0, 9, a2);
  if ( v8 )
  {
    if ( (v9 = v8, (v10 = sub_141433D50(aContent_6, 7, v8)) != 0)
      && *(_BYTE *)v10 == 3
      && (v6 = *(_QWORD *)(v10 + 24)) != 0
      || (v10 = sub_141433D50(aText_10, 4, v9)) != 0 && *(_BYTE *)v10 == 3 && (v6 = *(_QWORD *)(v10 + 24)) != 0
      || (v10 = sub_141433D50(aSummary_3, 7, v9)) != 0 && *(_BYTE *)v10 == 3 && (v6 = *(_QWORD *)(v10 + 24)) != 0 )
    {
      v11 = (__int64 *)(v10 + 16);
      if ( v6 >= 0 )
      {
        v7 = *v11;
LABEL_26:
        nullsub_1(v5);
        v12 = 1;
        v14 = sub_140001650(v6, 1);
        if ( v14 )
        {
          v15 = v14;
          sub_141684120(v14, v7, v6);
          *a1 = v6;
          a1[1] = v15;
          a1[2] = v6;
          return a1;
        }
LABEL_21:
        sub_1416C2D4B(v12, v6);
      }
LABEL_20:
      v12 = 0;
      goto LABEL_21;
    }
  }
  v13 = sub_141433D50(aReasoningDetai, 17, a2);
  if ( !v13 || (sub_140A5EF30(a1, v13), *a1 == -1) )
    *a1 = -1;
  return a1;
}