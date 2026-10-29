// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x1401b8c00 | name sub_1401B8C00
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401B8C00(__int64 a1, __int64 a2)
{
  signed __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  const __m128i *v6; // rbx
  __m128i *v7; // rax

  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    sub_1401B8620(a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 976);
    if ( v3 < 0 )
    {
      v4 = 0;
      goto LABEL_4;
    }
    if ( v3 )
    {
      v5 = a2;
      v6 = *(const __m128i **)(a2 + 968);
      nullsub_1(a1);
      v4 = 1;
      v7 = (__m128i *)sub_140001650(v3, 1);
      if ( !v7 )
LABEL_4:
        sub_141938D2B(v4, v3);
      *(_QWORD *)a1 = v3;
      *(_QWORD *)(a1 + 8) = v7;
      sub_1418F44E0(v7, v6, v3);
      *(_QWORD *)(a1 + 16) = v3;
      a2 = v5;
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 1;
      *(_QWORD *)(a1 + 16) = 0;
    }
    *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 984);
  }
  return a1;
}
