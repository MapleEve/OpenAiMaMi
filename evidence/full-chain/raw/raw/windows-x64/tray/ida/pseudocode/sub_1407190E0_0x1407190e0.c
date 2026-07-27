// module: codexmate_lib/core/voice/runtime/tray
// addr: 0x1407190e0
// name: sub_1407190E0
// win 1.2.1 | module src/core/voice/runtime/tray.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407190E0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v5; // [rsp+28h] [rbp-18h]
  __int64 v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+38h] [rbp-8h]

  v7 = *a1;
  sub_1412CA570(*a1 + 24);
  v1 = v7;
  result = *(_QWORD *)(v7 + 24);
  v5 = result;
  if ( result )
  {
    v6 = *(_QWORD *)(v7 + 32);
    if ( *(_QWORD *)v6 )
      (*(void (__fastcall **)(__int64))v6)(result);
    result = v6;
    v3 = *(_QWORD *)(v6 + 8);
    v1 = v7;
    if ( v3 )
      result = sub_140001660(v5, v3, *(_QWORD *)(v6 + 16));
  }
  if ( v1 != -1 && (*(_QWORD *)(v1 + 8))-- == 1 )
    return sub_140001660(v1, 56, 8);
  return result;
}