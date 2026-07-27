// module: codexmate_lib/core/repository
// addr: 0x140334ca0
// name: sub_140334CA0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140334CA0(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
    do
    {
      v3 = *(v2 - 1);
      if ( v3 )
        result = sub_140001660(*v2, v3, 1);
      v2 += 20;
      --v1;
    }
    while ( v1 );
  }
  return result;
}