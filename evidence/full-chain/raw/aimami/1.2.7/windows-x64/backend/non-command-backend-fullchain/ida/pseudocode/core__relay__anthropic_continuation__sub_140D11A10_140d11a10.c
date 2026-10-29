// win 1.2.7 | module src/core/relay/anthropic_continuation.rs | ea 0x140d11a10 | name sub_140D11A10
// win 1.2.7 | module src/core/relay/anthropic_continuation.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140D11A10(__int64 a1)
{
  __int64 v1; // rdx

  if ( *(_BYTE *)(a1 + 26) == 4 )
  {
    if ( *(_BYTE *)(a1 + 153) == 3 )
    {
      sub_140D1A820(*(_QWORD *)(a1 + 120), *(_QWORD *)(a1 + 128));
      *(_BYTE *)(a1 + 152) = 0;
    }
    else if ( !*(_BYTE *)(a1 + 153) )
    {
      sub_140409B40(a1 + 88);
    }
    *(_BYTE *)(a1 + 25) = 0;
    v1 = *(_QWORD *)(a1 + 32);
    if ( v1 )
      sub_140001660(*(_QWORD *)(a1 + 40), v1, 1);
    *(_BYTE *)(a1 + 24) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 160) + 32LL))(
      a1 + 184,
      *(_QWORD *)(a1 + 168),
      *(_QWORD *)(a1 + 176));
  }
}
