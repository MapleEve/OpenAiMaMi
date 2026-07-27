// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1414c6950
// name: sub_1414C6950
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void sub_1414C6950(unsigned int a1, const char *a2, ...)
{
  __int64 v3; // [rsp+20h] [rbp-2F8h] BYREF
  char *v4; // [rsp+28h] [rbp-2F0h]
  __int64 v5; // [rsp+30h] [rbp-2E8h]
  int v6; // [rsp+38h] [rbp-2E0h]
  __int16 v7; // [rsp+3Ch] [rbp-2DCh]
  char v8; // [rsp+40h] [rbp-2D8h] BYREF
  va_list va; // [rsp+330h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( qword_141EC28D8 )
  {
    v5 = 700;
    v4 = &v8;
    v3 = 0;
    v6 = 0;
    v7 = 0;
    sub_1414C1900(&v3, a2, (__int64 *)va);
    if ( v4 )
    {
      v4[v6] = 0;
      if ( HIDWORD(v5) )
      {
        if ( (v7 & 0x400) == 0 )
          sub_1415DC4A0(&v3);
      }
    }
    qword_141EC28D8(qword_141EC28E0, a1);
  }
}