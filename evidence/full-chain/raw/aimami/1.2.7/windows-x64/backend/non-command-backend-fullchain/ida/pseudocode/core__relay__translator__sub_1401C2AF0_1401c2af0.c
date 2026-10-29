// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1401c2af0 | name sub_1401C2AF0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_1401C2AF0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rcx

  v4 = sub_1416419F0(aInputTokens, 12, a2);
  if ( v4 && *(_BYTE *)v4 == 2 && !*(_QWORD *)(v4 + 8) )
  {
    v5 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = v5;
  }
  v6 = sub_1416419F0(aCacheReadInput, 23, a2);
  if ( v6 && *(_BYTE *)v6 == 2 && !*(_QWORD *)(v6 + 8) )
  {
    v7 = *(_QWORD *)(v6 + 16);
    *(_QWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 24) = v7;
  }
  v8 = sub_1416419F0(aCacheCreationI, 27, a2);
  if ( v8 && *(_BYTE *)v8 == 2 && !*(_QWORD *)(v8 + 8) )
  {
    v9 = *(_QWORD *)(v8 + 16);
    *(_QWORD *)(a1 + 32) = 1;
    *(_QWORD *)(a1 + 40) = v9;
  }
  result = sub_1416419F0(aOutputTokens, 13, a2);
  if ( result && *(_BYTE *)result == 2 && !*(_QWORD *)(result + 8) )
  {
    result = *(_QWORD *)(result + 16);
    v11 = *(_QWORD *)(a1 + 56);
    if ( result > v11 )
      v11 = result;
    if ( !*(_BYTE *)(a1 + 48) )
      v11 = result;
    *(_QWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 56) = v11;
  }
  return result;
}
