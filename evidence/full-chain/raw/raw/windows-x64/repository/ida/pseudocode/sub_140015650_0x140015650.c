// module: codexmate_lib/core/repository
// addr: 0x140015650
// name: sub_140015650
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140015650(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = a1[1];
  v3 = a1[2];
  if ( v3 )
  {
    v4 = (_QWORD *)(v2 + 128);
    do
    {
      v5 = *(v4 - 1);
      if ( v5 )
        sub_140001660(*v4, v5, 1);
      v4 += 20;
      --v3;
    }
    while ( v3 );
  }
  result = *a1;
  if ( *a1 )
    return sub_140001660(v2, 160 * result, 8);
  return result;
}