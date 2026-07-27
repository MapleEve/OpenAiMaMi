// module: codexmate_lib/core/relay/translator
// addr: 0x140b565b0
// name: sub_140B565B0
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140B565B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  if ( v2 < 0 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  if ( v2 )
  {
    v4 = a1;
    v5 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
    nullsub_1(a1);
    v3 = 1;
    v6 = sub_140001650(v2, 1);
    if ( !v6 )
LABEL_3:
      sub_1416C2D4B(v3, v2);
    v7 = v6;
    sub_141684120(v6, v5, v2);
    a1 = v4;
  }
  else
  {
    v7 = 1;
  }
  *(_BYTE *)a1 = 3;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = v2;
  return a1;
}