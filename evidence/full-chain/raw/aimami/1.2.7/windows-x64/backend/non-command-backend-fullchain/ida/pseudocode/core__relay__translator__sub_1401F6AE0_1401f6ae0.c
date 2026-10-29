// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1401f6ae0 | name sub_1401F6AE0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1401F6AE0(__int64 *a1, _BYTE *a2)
{
  __int64 v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned __int128 v7; // kr00_16
  __int64 v8; // rcx
  char v9; // al
  char v10; // [rsp+3Ch] [rbp-4h]

  v3 = *a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v3 + 56), 1, 0) )
    sub_141937480((volatile void *)(v3 + 56));
  v4 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
    v10 = sub_141938160(a1) ^ 1;
  else
    v10 = 0;
  v5 = sub_14167FD50(v3 + 40);
  v7 = 0x3E8 * (unsigned __int128)(unsigned __int64)v5 + v6 / 0xF4240uLL;
  sub_1402249D0(v3 + 64, v7 | -(__int64)(*((_QWORD *)&v7 + 1) != 0), (const __m128i *)aResponses, 9u, a2);
  if ( !v10 && 2 * *v4 && !(unsigned __int8)sub_141938160(v8) )
    *(_BYTE *)(v3 + 57) = 1;
  v9 = *(_BYTE *)(v3 + 56);
  *(_BYTE *)(v3 + 56) = 0;
  if ( v9 == 2 )
    WakeByAddressSingle((PVOID)(v3 + 56));
}
