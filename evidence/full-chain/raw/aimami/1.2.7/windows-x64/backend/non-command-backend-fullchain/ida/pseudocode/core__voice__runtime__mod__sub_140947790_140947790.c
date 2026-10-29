// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140947790 | name sub_140947790
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_140947790(__int64 *a1)
{
  __int64 v1; // rsi
  volatile void *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // [rsp+38h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h]
  unsigned __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp-8h]

  v9 = -2;
  v1 = *a1;
  if ( !*(_BYTE *)(*a1 + 440) )
    *(_BYTE *)(v1 + 440) = 1;
  v2 = (volatile void *)(v1 + 448);
  sub_141501160((volatile void *)(v1 + 448));
  sub_1414FE8C0(v1 + 384);
  v3 = v1 + 416;
  v4 = v1 + 128;
  while ( 1 )
  {
    sub_1404788D0(&v6, v3, v4);
    if ( v6 > 0xFFFFFFFFFFFFFFFDuLL )
      break;
    v8 = v6;
    sub_141501100(v2);
    if ( v8 )
      sub_140001660(v7, 2 * v8, 2);
  }
  sub_1404788D0(&v6, v3, v4);
  result = v6;
  if ( v6 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    do
    {
      v8 = result;
      sub_141501100(v2);
      if ( v8 )
        sub_140001660(v7, 2 * v8, 2);
      sub_1404788D0(&v6, v3, v4);
      result = v6;
    }
    while ( v6 < 0xFFFFFFFFFFFFFFFEuLL );
  }
  return result;
}
