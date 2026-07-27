// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dd460
// name: sub_1405DD460
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DD460(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  result = *(unsigned __int8 *)(a1 + 131);
  if ( !*(_BYTE *)(a1 + 131) )
    return sub_1400104F0(a1 + 32);
  if ( (_DWORD)result == 3 )
  {
    v2 = a1;
    sub_1405E6830(a1 + 136);
  }
  else
  {
    if ( (_DWORD)result != 4 )
      return result;
    v2 = a1;
    sub_1405DA6C0(a1 + 280);
  }
  *(_BYTE *)(v2 + 129) = 0;
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v2 + 96)) )
    sub_141018B80(v2 + 96);
  *(_BYTE *)(v2 + 130) = 0;
  return sub_1400104F0(v2);
}