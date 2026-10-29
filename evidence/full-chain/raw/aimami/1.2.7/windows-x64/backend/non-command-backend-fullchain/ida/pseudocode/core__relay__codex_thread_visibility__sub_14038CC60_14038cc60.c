// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14038cc60 | name sub_14038CC60
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14038CC60(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( *a1 )
    sub_140001660(a1[1], *a1, 1);
  v2 = a1[44];
  if ( v2 == -2 )
  {
    v4 = a1[45];
    result = 8;
    if ( v4 )
LABEL_12:
      result = sub_140001660(*(_QWORD *)((char *)a1 + result + 360), v4, 1);
  }
  else
  {
    if ( v2 != -1 && v2 )
      sub_140001660(a1[45], v2, 1);
    v3 = a1[47];
    if ( v3 != -1 && v3 )
      sub_140001660(a1[48], v3, 1);
    v4 = a1[50];
    result = 48;
    if ( v4 != -1 && v4 )
      goto LABEL_12;
  }
  if ( a1[3] != -1 )
    result = sub_140196740(a1 + 3);
  v6 = a1[25];
  if ( v6 != -1 && v6 )
    result = sub_140001660(a1[26], v6, 1);
  v7 = a1[33];
  if ( v7 != -1 )
  {
    if ( v7 )
      result = sub_140001660(a1[34], v7, 1);
    v8 = a1[36];
    if ( v8 )
      return sub_140001660(a1[37], v8, 1);
  }
  return result;
}
