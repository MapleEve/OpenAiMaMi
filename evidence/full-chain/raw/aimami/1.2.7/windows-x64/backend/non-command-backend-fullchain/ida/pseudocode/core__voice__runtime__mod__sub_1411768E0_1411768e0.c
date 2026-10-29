// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x1411768e0 | name sub_1411768E0
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1411768E0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  result = *a1;
  v2 = *a1;
  if ( *(_QWORD *)(*a1 + 24) )
    result = sub_141192490(v2 + 24);
  if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) )
    return sub_140001660(v2, 32, 8);
  return result;
}
