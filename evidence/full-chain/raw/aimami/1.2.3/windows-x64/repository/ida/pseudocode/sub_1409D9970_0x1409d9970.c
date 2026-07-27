// module: codexmate_lib/core/repository
// addr: 0x1409d9970
// name: sub_1409D9970
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_1409D9970(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // r15

  if ( !a2 )
    return 0;
  v7 = 24 * a2;
  v8 = 0;
  while ( *(_QWORD *)(a1 + v8 + 16) != a4 || (unsigned int)sub_1416847B0(*(_QWORD *)(a1 + v8 + 8), a3, a4) )
  {
    v8 += 24;
    if ( v7 == v8 )
      return 0;
  }
  return 1;
}