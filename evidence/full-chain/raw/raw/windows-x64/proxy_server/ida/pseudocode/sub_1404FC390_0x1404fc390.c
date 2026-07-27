// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1404fc390
// name: sub_1404FC390
// 
// win 1.2.3 recheck | attributed via call-graph propagation (FANIN_CAP=12, decompile-verified real logic not generic glue, caller-module-purity cross-checked no conflicting non-relay module attribution) | target=/codexmate_lib/core/relay/proxy_server
__int64 __fastcall sub_1404FC390(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  if ( *(_DWORD *)a1 != -2 )
  {
    sub_140265D10();
    v1 = *(_QWORD *)(a1 + 96);
    if ( v1 )
      sub_140001660(*(_QWORD *)(a1 + 104), 32 * v1, 8);
    if ( *(_DWORD *)a1 != -1 )
      sub_140017140(a1);
  }
  v4 = *(_QWORD *)(a1 + 128);
  v6 = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)v6 )
    (*(void (__fastcall **)(__int64))v6)(v4);
  result = v6;
  v3 = *(_QWORD *)(v6 + 8);
  if ( v3 )
    return sub_140001660(v4, v3, *(_QWORD *)(v6 + 16));
  return result;
}