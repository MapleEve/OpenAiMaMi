// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1403619c0 | name sub_1403619C0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1403619C0(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  const __m128i *v6; // rbx
  __m128i *v7; // rax
  __m128i *v8; // r14
  __int128 v9; // [rsp+28h] [rbp-38h]
  __int128 v10; // [rsp+38h] [rbp-28h]
  _OWORD *v11; // [rsp+48h] [rbp-18h]

  if ( !a4 )
    return;
  v4 = a1;
  v5 = 10;
  v6 = (const __m128i *)&aFinalAnswercom[12];
  if ( a2 )
  {
    if ( a3 == 13 )
    {
      a1 = *a2 ^ 0x7165735F706F7473LL | *(_QWORD *)((char *)a2 + 5) ^ 0x65636E6575716573LL;
      if ( a1 )
        goto LABEL_7;
      goto LABEL_6;
    }
    if ( a3 == 8 && *a2 == 0x6E7275745F646E65LL )
    {
LABEL_6:
      v5 = 12;
      v6 = (const __m128i *)aFinalAnswercom;
    }
  }
LABEL_7:
  nullsub_1(a1);
  v7 = (__m128i *)sub_140001650(v5, 1);
  if ( !v7 )
    sub_141938D2B(1, v5);
  v8 = v7;
  sub_1418F44E0(v7, v6, v5);
  LOBYTE(v9) = 3;
  *((_QWORD *)&v9 + 1) = v5;
  *(_QWORD *)&v10 = v8;
  *((_QWORD *)&v10 + 1) = v5;
  v11 = (_OWORD *)sub_141641AF0(aPhase_0, 5, v4);
  sub_14002F9D0(v11);
  v11[1] = v10;
  *v11 = v9;
}
