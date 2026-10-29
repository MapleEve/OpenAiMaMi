// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140c18620 | name sub_140C18620
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C18620(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 result; // rax

  v4 = sub_1416419F0(aPromptTokens_0, 13, a2);
  if ( v4 && *(_BYTE *)v4 == 2 && !*(_QWORD *)(v4 + 8)
    || (v5 = sub_1416419F0(aInputTokens_0, 12, a2)) != 0 && *(_BYTE *)v5 == 2 && !*(_QWORD *)(v5 + 8)
    || (v6 = sub_1416419F0(aCompletionToke_0, 17, a2)) != 0 && *(_BYTE *)v6 == 2 && !*(_QWORD *)(v6 + 8)
    || (v7 = sub_1416419F0(aOutputTokens_0, 13, a2)) != 0 && *(_BYTE *)v7 == 2 && !*(_QWORD *)(v7 + 8) )
  {
    a1[4] = 0;
  }
  v8 = sub_141642800(a2, aPromptTokens_1, 14);
  if ( v8 && *(_BYTE *)v8 == 2 && !*(_QWORD *)(v8 + 8)
    || (v8 = sub_141642800(a2, aInputTokens_1, 13)) != 0 && *(_BYTE *)v8 == 2 && !*(_QWORD *)(v8 + 8) )
  {
    v9 = *(_QWORD *)(v8 + 16);
    *a1 = 1;
    a1[1] = v9;
  }
  v10 = sub_141642800(a2, aCompletionToke_1, 18);
  if ( v10 && *(_BYTE *)v10 == 2 && !*(_QWORD *)(v10 + 8)
    || (v10 = sub_141642800(a2, aOutputTokens_1, 14)) != 0 && *(_BYTE *)v10 == 2 && !*(_QWORD *)(v10 + 8) )
  {
    v11 = *(_QWORD *)(v10 + 16);
    a1[2] = 1;
    a1[3] = v11;
  }
  v12 = sub_141642800(a2, aTotalTokens_0, 13);
  if ( v12 && *(_BYTE *)v12 == 2 && !*(_QWORD *)(v12 + 8)
    || (v12 = sub_141642800(a2, aTotalTokens_0, 13)) != 0 && *(_BYTE *)v12 == 2 && !*(_QWORD *)(v12 + 8) )
  {
    v13 = *(_QWORD *)(v12 + 16);
    a1[4] = 1;
    a1[5] = v13;
  }
  v14 = sub_141642800(a2, aPromptTokensDe_0, 36);
  if ( v14 && *(_BYTE *)v14 == 2 && !*(_QWORD *)(v14 + 8)
    || (v14 = sub_141642800(a2, aInputTokensDet_1, 35)) != 0 && *(_BYTE *)v14 == 2 && !*(_QWORD *)(v14 + 8) )
  {
    v15 = *(_QWORD *)(v14 + 16);
    a1[6] = 1;
    a1[7] = v15;
  }
  result = sub_141642800(a2, aCompletionToke_2, 43);
  if ( result && *(_BYTE *)result == 2 && !*(_QWORD *)(result + 8)
    || (result = sub_141642800(a2, aOutputTokensDe_0, 39)) != 0 && *(_BYTE *)result == 2 && !*(_QWORD *)(result + 8) )
  {
    result = *(_QWORD *)(result + 16);
    a1[8] = 1;
    a1[9] = result;
  }
  return result;
}
