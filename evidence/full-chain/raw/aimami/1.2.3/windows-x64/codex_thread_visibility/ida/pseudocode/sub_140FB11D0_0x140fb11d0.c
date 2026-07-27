// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140fb11d0
// name: sub_140FB11D0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140FB11D0(__int64 *a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = *a1;
  v2 = (_QWORD *)(*(_QWORD *)(*a1 + 128) & 0xFFFFFFFFFFFFFFF8uLL);
  v3 = v2[1];
  if ( v3 )
    sub_140001660(*v2, 16 * v3, 8);
  result = sub_140001660(v2, 16, 8);
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) )
    return sub_140001660(v1, 384, 128);
  return result;
}