// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140fb0f00
// name: sub_140FB0F00
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_140FB0F00(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rsi
  _OWORD *result; // rax
  __int128 v5; // xmm0
  __int128 v6; // [rsp+20h] [rbp-50h]
  __int128 v7; // [rsp+48h] [rbp-28h] BYREF
  __int128 v8; // [rsp+58h] [rbp-18h] BYREF
  __int64 v9; // [rsp+68h] [rbp-8h]

  v9 = -2;
  sub_141447850(&v7, a1);
  if ( (_QWORD)v8 )
  {
    v1 = *((_QWORD *)&v7 + 1);
    v3 = v7;
    v6 = v8;
  }
  else
  {
    v3 = 0;
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v7 + 32))((char *)&v8 + 8, *((_QWORD *)&v7 + 1), 0);
  }
  v8 = v6;
  *(_QWORD *)&v7 = v3;
  *((_QWORD *)&v7 + 1) = v1;
  nullsub_1(v2);
  result = (_OWORD *)sub_140001650(32, 8);
  if ( !result )
    sub_1416C2D31(8, 32);
  v5 = v7;
  result[1] = v8;
  *result = v5;
  return result;
}