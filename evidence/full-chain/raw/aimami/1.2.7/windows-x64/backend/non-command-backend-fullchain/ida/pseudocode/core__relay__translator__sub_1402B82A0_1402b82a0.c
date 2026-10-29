// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402b82a0 | name sub_1402B82A0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402B82A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rdi
  int v11; // eax
  char v12; // cl
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
    return 0;
  v14 = *(_QWORD *)(a1 + 40);
  while ( 2 )
  {
    v6 = v3 + 8;
    v15 = *(unsigned __int16 *)(v3 + 1066);
    v7 = -1;
    v8 = 0;
    do
    {
      if ( 9LL * (unsigned int)(8 * v15) == v8 )
      {
        v7 = v15;
        goto LABEL_11;
      }
      v9 = v6 + 24;
      v10 = a3 - *(_QWORD *)(v6 + 16);
      v11 = sub_1418F4B70(a2, *(_QWORD *)(v6 + 8));
      if ( v11 )
        v10 = v11;
      v12 = (v10 > 0) - (v10 < 0);
      v8 += 72;
      ++v7;
      v6 = v9;
    }
    while ( v12 == 1 );
    if ( !v12 )
      return *(_QWORD *)(v3 + v8 + 232);
LABEL_11:
    if ( v14 )
    {
      --v14;
      v3 = *(_QWORD *)(v3 + 8 * v7 + 1072);
      continue;
    }
    return 0;
  }
}
