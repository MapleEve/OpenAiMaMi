// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1402ad260
// name: sub_1402AD260
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
void __fastcall sub_1402AD260(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // r14
  _QWORD *v4; // r15
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // r8
  __int64 v14; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 >= 2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = (_QWORD *)(v3 + 48);
    v5 = 2;
    while ( 1 )
    {
      v7 = *(v4 - 1);
      if ( v7 == *(v4 - 4) )
      {
        v8 = *(v4 - 2);
        if ( !(unsigned int)sub_1416847B0(v8, *(v4 - 5), v7) )
          break;
      }
      v4 += 3;
      v6 = 1 - v1 + v5++ + 1;
      if ( v6 == 2 )
        return;
    }
    v9 = *(v4 - 3);
    if ( v9 )
      sub_140001660(v8, v9, 1);
    v10 = v5 - 1;
    if ( v1 > v5 )
    {
      v11 = v1 - v5;
      do
      {
        v12 = v3 + 24 * v10;
        v13 = v4[2];
        if ( v13 != *(_QWORD *)(v12 - 8) || (v14 = v4[1], (unsigned int)sub_1416847B0(v14, *(_QWORD *)(v12 - 16), v13)) )
        {
          *(_QWORD *)(v12 + 16) = v4[2];
          *(_OWORD *)v12 = *(_OWORD *)v4;
          ++v10;
        }
        else if ( *v4 )
        {
          sub_140001660(v14, *v4, 1);
        }
        v4 += 3;
        --v11;
      }
      while ( v11 );
    }
    *(_QWORD *)(a1 + 16) = v10;
  }
}