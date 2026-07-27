// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x141689c00
// name: sub_141689C00
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141689C00(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rax

  v7 = a4 * a6;
  v8 = 0x8000000000000000uLL - a5;
  LOBYTE(v8) = (a4 * (unsigned __int128)a6) >> 64 != 0 || a4 * a6 > 0x8000000000000000uLL - a5;
  v9 = 1;
  if ( !(_BYTE)v8 )
  {
    if ( a2 )
    {
      v11 = sub_140001670(a3, a2 * a6, a5, a4 * a6);
      if ( !v11 )
        goto LABEL_8;
    }
    else if ( v7 )
    {
      nullsub_1(v8);
      v11 = sub_140001650(v7, a5);
      if ( !v11 )
      {
LABEL_8:
        a1[1] = a5;
        result = 2;
        goto LABEL_11;
      }
    }
    else
    {
      v11 = a5;
    }
    a1[1] = v11;
    result = 2;
    v9 = 0;
    goto LABEL_11;
  }
  result = 1;
  v7 = 0;
LABEL_11:
  a1[result] = v7;
  *a1 = v9;
  return result * 8;
}