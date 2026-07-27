// module: codexmate_lib/core/voice/runtime
// addr: 0x140f66b60
// name: sub_140F66B60
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F66B60(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  result = *a1;
  v2 = *a1;
  if ( *(_QWORD *)(*a1 + 24) )
    result = sub_140F83A30(v2 + 24);
  if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) )
    return sub_140001660(v2, 32, 8);
  return result;
}