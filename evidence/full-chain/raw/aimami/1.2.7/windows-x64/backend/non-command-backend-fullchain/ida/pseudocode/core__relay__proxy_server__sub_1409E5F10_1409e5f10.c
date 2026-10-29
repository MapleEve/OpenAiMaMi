// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1409e5f10 | name sub_1409E5F10
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1409E5F10(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *result; // rax
  _QWORD *v3; // [rsp+20h] [rbp-10h]
  __int64 v4; // [rsp+28h] [rbp-8h]

  v4 = *a1;
  v3 = (_QWORD *)(*a1 + 16LL);
  sub_140285990();
  if ( *v3 )
    sub_140001660(*(_QWORD *)(v4 + 24), *v3, 1);
  sub_1401861A0(v4 + 144);
  v1 = *(_QWORD *)(v4 + 144);
  if ( v1 )
    sub_140001660(*(_QWORD *)(v4 + 152), 32 * v1, 8);
  sub_1401861A0(v4 + 176);
  result = (_QWORD *)(v4 + 176);
  if ( *(_QWORD *)(v4 + 176) )
    result = (_QWORD *)sub_140001660(*(_QWORD *)(v4 + 184), 32LL * *result, 8);
  if ( v4 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v4 + 8)) )
    return (_QWORD *)sub_140001660(v4, 352, 8);
  return result;
}
