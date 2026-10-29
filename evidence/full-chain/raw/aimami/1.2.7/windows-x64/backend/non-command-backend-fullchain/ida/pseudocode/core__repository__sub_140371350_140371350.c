// win 1.2.7 | module src/core/repository.rs | ea 0x140371350 | name sub_140371350
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140371350(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // rdx

  v1 = a1[1];
  if ( v1 )
  {
    v2 = (8 * v1 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
    v3 = v2 + v1 + 17;
    if ( v3 )
      sub_140001660(*a1 - v2, v3, 16);
  }
}
