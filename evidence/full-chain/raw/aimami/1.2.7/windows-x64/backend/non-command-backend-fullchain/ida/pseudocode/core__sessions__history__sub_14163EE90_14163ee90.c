// win 1.2.7 | module src/core/sessions/history.rs | ea 0x14163ee90 | name sub_14163EE90
// win 1.2.7 | module src/core/sessions/history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14163EE90(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rsi
  __int64 v5; // rcx

  v1 = *a1;
  if ( *a1 == 1 )
  {
    v2 = a1[1];
    sub_140001660(a1, 40, 8);
    return v2;
  }
  else
  {
    v5 = 33554369;
    if ( _bittest64(&v5, v1) )
      LOBYTE(v5) = 21;
    else
      LOBYTE(v5) = 37;
    return sub_14163D190(v5, a1);
  }
}
