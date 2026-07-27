// module: codexmate_lib/core/relay/manager
// addr: 0x140bee1a0
// name: sub_140BEE1A0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140BEE1A0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( *(_BYTE *)(a1 + 1122) == 3 )
  {
    sub_140BEDF60();
    v1 = *(_QWORD *)(a1 + 1056);
    if ( v1 )
      sub_140001660(*(_QWORD *)(a1 + 1064), v1, 1);
    *(_BYTE *)(a1 + 1121) = 0;
    sub_14034FA40(a1 + 864);
    sub_1400104F0(a1 + 832);
    v2 = *(_QWORD *)(a1 + 1040);
    if ( v2 )
    {
      v3 = (_QWORD *)(*(_QWORD *)(a1 + 1032) + 8LL);
      do
      {
        v4 = *(v3 - 1);
        if ( v4 )
          sub_140001660(*v3, v4, 1);
        v3 += 3;
        --v2;
      }
      while ( v2 );
    }
    v5 = *(_QWORD *)(a1 + 1024);
    if ( v5 )
      sub_140001660(*(_QWORD *)(a1 + 1032), 24 * v5, 8);
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 1016)) )
      sub_141018B80(a1 + 1016);
  }
}