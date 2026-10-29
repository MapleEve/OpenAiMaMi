// win 1.2.7 | module src/core/relay/proxy_stream.rs | ea 0x140ce6d90 | name sub_140CE6D90
// win 1.2.7 | module src/core/relay/proxy_stream.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140CE6D90(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  _QWORD *v5; // [rsp+20h] [rbp-20h]
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]

  v1 = (_QWORD *)a1[101];
  v6 = *v1;
  v5 = v1;
  v7 = v1[1];
  if ( *(_QWORD *)v7 )
    (*(void (__fastcall **)(__int64))v7)(v6);
  v2 = *(_QWORD *)(v7 + 8);
  if ( v2 )
    sub_140001660(v6, v2, *(_QWORD *)(v7 + 16));
  sub_140001660(v5, 16, 8);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(a1[102] + 32LL))(a1 + 105, a1[103], a1[104]);
  v3 = a1[98];
  if ( v3 )
    sub_140001660(a1[99], v3, 1);
  return sub_140D1C7D0(a1);
}
