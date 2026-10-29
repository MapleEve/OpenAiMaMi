// win 1.2.7 | module src/core/codex_config.rs | ea 0x140e95ff0 | name sub_140E95FF0
// win 1.2.7 | module src/core/codex_config.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140E95FF0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx

  v1 = *a1;
  if ( *a1 != -1 )
  {
    if ( v1 )
      sub_140001660(a1[1], v1, 1);
    v3 = a1[3];
    if ( v3 )
      sub_140001660(a1[4], v3, 1);
    v4 = a1[9];
    if ( v4 != -1 && v4 )
      sub_140001660(a1[10], v4, 1);
    v5 = a1[7];
    v6 = a1[8];
    if ( v6 )
    {
      v7 = (_QWORD *)(v5 + 8);
      do
      {
        v8 = *(v7 - 1);
        if ( v8 )
          sub_140001660(*v7, v8, 1);
        v7 += 3;
        --v6;
      }
      while ( v6 );
    }
    v9 = a1[6];
    if ( v9 )
      sub_140001660(v5, 24 * v9, 8);
    v10 = a1[12];
    if ( v10 != -1 )
    {
      if ( v10 )
        sub_140001660(a1[13], v10, 1);
    }
    sub_14036FB80(a1 + 15);
    sub_14036FB80(a1 + 21);
  }
}
