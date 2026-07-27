// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1414b6740
// name: sub_1414B6740
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 sub_1414B6740(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        ...)
{
  char v10; // r11
  char v11; // r10

  v10 = a6;
  if ( (_BYTE)a6 != 1 )
  {
    a4 &= ~1u;
    v11 = 2;
    if ( (_BYTE)a6 != 4 )
      v11 = a6;
    v10 = v11;
  }
  LOBYTE(a6) = v10;
  return sub_1414E53B0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}