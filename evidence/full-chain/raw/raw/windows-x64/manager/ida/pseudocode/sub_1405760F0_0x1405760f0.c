// module: codexmate_lib/core/relay/manager
// addr: 0x1405760f0
// name: sub_1405760F0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405760F0(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rsi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // [rsp+28h] [rbp-18h]
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]
  __int64 v8; // [rsp+30h] [rbp-10h]
  _QWORD *v9; // [rsp+38h] [rbp-8h]

  v9 = (_QWORD *)*a1;
  sub_141245B30(*a1 + 16LL);
  v5 = v9[2];
  v7 = v9[3];
  if ( *(_QWORD *)v7 )
    (*(void (__fastcall **)(__int64))v7)(v5);
  v1 = *(_QWORD *)(v7 + 8);
  if ( v1 )
    sub_140001660(v5, v1, *(_QWORD *)(v7 + 16));
  v2 = v9;
  result = v9[4];
  v6 = result;
  if ( result )
  {
    v8 = v9[5];
    if ( *(_QWORD *)v8 )
      (*(void (__fastcall **)(__int64))v8)(result);
    result = v8;
    v4 = *(_QWORD *)(v8 + 8);
    v2 = v9;
    if ( v4 )
      result = sub_140001660(v6, v4, *(_QWORD *)(v8 + 16));
  }
  if ( v2 != (_QWORD *)-1LL && !_InterlockedDecrement64(v2 + 1) )
    return sub_140001660(v2, 56, 8);
  return result;
}