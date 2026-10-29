// win 1.2.7 | module src/core/relay/anthropic_continuation.rs | ea 0x140d1cf80 | name sub_140D1CF80
// win 1.2.7 | module src/core/relay/anthropic_continuation.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D1CF80(_QWORD *a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v5; // [rsp+28h] [rbp-18h]
  __int64 v6; // [rsp+30h] [rbp-10h]

  sub_140D1D140(a1 + 98);
  v1 = a1;
  v5 = a1[128];
  if ( v5 )
  {
    v6 = a1[129];
    if ( *(_QWORD *)v6 )
      (*(void (__fastcall **)(__int64))v6)(v5);
    v2 = *(_QWORD *)(v6 + 8);
    v1 = a1;
    if ( v2 )
      sub_140001660(v5, v2, *(_QWORD *)(v6 + 16));
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v1[124] + 32LL))(v1 + 127, v1[125], v1[126]);
  v3 = a1[121];
  if ( v3 )
    sub_140001660(a1[122], v3, 1);
  return sub_140D1DBB0(a1);
}
