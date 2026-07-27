// module: codexmate_lib/core/relay/config_takeover
// addr: 0x140349650
// name: sub_140349650
// win 1.2.1 | module src/core/relay/config_takeover.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140349650(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // [rsp+20h] [rbp-10h]

  v1 = *a1;
  if ( *a1 == -1 )
  {
    v6 = (_QWORD *)a1[1];
    v8 = v6;
    if ( *v6 == 1 )
    {
      sub_140018650(v6 + 1);
    }
    else if ( !*v6 )
    {
      v7 = v6[2];
      if ( v7 )
        sub_140001660(v6[1], v7, 1);
    }
    sub_140001660(v8, 40, 8);
  }
  else
  {
    v2 = a1[1];
    v3 = a1[2];
    if ( v3 )
    {
      v4 = (_QWORD *)(v2 + 8);
      do
      {
        v5 = *(v4 - 1);
        if ( v5 )
          sub_140001660(*v4, v5, 1);
        v4 += 3;
        --v3;
      }
      while ( v3 );
    }
    if ( v1 )
      sub_140001660(v2, 24 * v1, 8);
  }
}