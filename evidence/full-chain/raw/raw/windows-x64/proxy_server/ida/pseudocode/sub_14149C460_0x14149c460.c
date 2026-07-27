// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14149c460
// name: sub_14149C460
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14149C460(_QWORD *a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi

  v1 = a1[3];
  v2 = a1[4];
  if ( v1 <= v2 )
  {
    v3 = a1[2];
    v4 = *(_QWORD *)(v3 + 16);
    v5 = v4 - v2;
    if ( v4 >= v2 )
    {
      *(_QWORD *)(v3 + 16) = v1;
      if ( v2 == v1 )
      {
        if ( v4 == v2 )
          return;
      }
      else
      {
        if ( v4 == v2 )
          return;
        sub_141684120(*(_QWORD *)(v3 + 8) + v1, *(_QWORD *)(v3 + 8) + v2, v5);
      }
      *(_QWORD *)(v3 + 16) = v1 + v5;
    }
  }
}