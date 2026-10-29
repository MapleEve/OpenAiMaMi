// win 1.2.7 | module src/core/repository.rs | ea 0x140190810 | name sub_140190810
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140190810(_QWORD *a1)
{
  __int64 result; // rax

  sub_1403FB7C0(a1);
  result = (__int64)a1;
  if ( *a1 )
    return sub_140001660(a1[1], 8LL * *a1, 8);
  return result;
}
