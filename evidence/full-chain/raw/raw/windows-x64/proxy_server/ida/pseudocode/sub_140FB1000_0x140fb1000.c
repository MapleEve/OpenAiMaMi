// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140fb1000
// name: sub_140FB1000
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_140FB1000(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  _OWORD *result; // rax
  __int128 v4; // [rsp+20h] [rbp-50h]
  __int128 v5; // [rsp+38h] [rbp-38h]

  if ( a1[2] )
  {
    v2 = *a1;
    v1 = a1[1];
    v4 = *((_OWORD *)a1 + 1);
  }
  else
  {
    v2 = 0;
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 32))(a1 + 3, a1[1], 0);
  }
  *(_QWORD *)&v5 = v2;
  *((_QWORD *)&v5 + 1) = v1;
  nullsub_1(a1);
  result = (_OWORD *)sub_140001650(32, 8);
  if ( !result )
    sub_1416C2D31(8, 32);
  result[1] = v4;
  *result = v5;
  return result;
}