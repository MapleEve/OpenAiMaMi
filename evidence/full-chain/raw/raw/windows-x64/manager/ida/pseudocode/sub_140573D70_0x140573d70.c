// module: codexmate_lib/core/relay/manager
// addr: 0x140573d70
// name: sub_140573D70
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_140573D70(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax
  __int64 v2; // rsi
  volatile signed __int64 **v3; // [rsp+20h] [rbp-10h]
  volatile signed __int64 *v4; // [rsp+28h] [rbp-8h]

  result = *a1;
  v4 = *a1;
  if ( *((_QWORD *)*a1 + 7) )
  {
    result = *a1;
    v2 = *((_QWORD *)v4 + 8);
    if ( v2 )
    {
      v3 = (volatile signed __int64 **)(v4 + 8);
      if ( (sub_1412F1370(v2 + 48) & 5) == 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v2 + 32) + 16LL))(*(_QWORD *)(v2 + 40));
      result = *v3;
      if ( *v3 && !_InterlockedDecrement64(result) )
        result = (volatile signed __int64 *)sub_1412E8E40(v3);
    }
  }
  if ( v4 != (volatile signed __int64 *)-1LL && !_InterlockedDecrement64(v4 + 1) )
    return (volatile signed __int64 *)sub_140001660(v4, 72, 8);
  return result;
}