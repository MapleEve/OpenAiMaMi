// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405ddf50
// name: sub_1405DDF50
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DDF50(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // [rsp+28h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 235);
  if ( !*(_BYTE *)(a1 + 235) )
    return sub_1400104F0(a1 + 64);
  if ( (_DWORD)result == 3 )
  {
    v3 = a1;
    sub_1405E6830(a1 + 240);
  }
  else
  {
    if ( (_DWORD)result != 4 )
      return result;
    v3 = a1;
    sub_1405DA6C0(a1 + 384);
    sub_140017140(v3 + 808);
  }
  *(_BYTE *)(v3 + 232) = 0;
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v3 + 200)) )
    sub_141018B80(v3 + 200);
  *(_BYTE *)(v3 + 233) = 0;
  result = sub_1400104F0(v3 + 32);
  v2 = *(_QWORD *)(v3 + 176);
  if ( v2 )
    result = sub_140001660(*(_QWORD *)(v3 + 184), v2, 1);
  *(_BYTE *)(v3 + 234) = 0;
  return result;
}