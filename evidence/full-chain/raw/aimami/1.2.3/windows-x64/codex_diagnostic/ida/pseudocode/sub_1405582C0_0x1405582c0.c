// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1405582c0
// name: sub_1405582C0
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1405582C0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // r15
  _QWORD *v8; // r13
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r13
  unsigned __int64 v14; // r8
  __int64 v15; // rbp

  result = a3 - 1;
  if ( a3 - 1 >= a2 )
    BUG();
  if ( a3 != a2 )
  {
    v5 = &a1[2 * a2];
    v6 = 16 * a3;
    v7 = &a1[2 * a3];
    do
    {
      v9 = *v7;
      v10 = v7[1];
      v11 = *(v7 - 1);
      v12 = v10 - v11;
      if ( v10 < v11 )
        v11 = v7[1];
      result = (int)sub_1416847B0(*v7, *(v7 - 2), v11);
      if ( (_DWORD)result )
        v12 = (int)result;
      if ( v12 < 0 )
      {
        v13 = v6;
        do
        {
          *(_OWORD *)((char *)a1 + v13) = *(_OWORD *)((char *)a1 + v13 - 16);
          if ( v13 == 16 )
          {
            v8 = a1;
            goto LABEL_6;
          }
          v14 = *(_QWORD *)((char *)a1 + v13 - 24);
          v15 = v10 - v14;
          if ( v10 < v14 )
            v14 = v10;
          result = (int)sub_1416847B0(v9, *(_QWORD *)((char *)a1 + v13 - 32), v14);
          if ( (_DWORD)result )
            v15 = (int)result;
          v13 -= 16;
        }
        while ( v15 < 0 );
        v8 = (_QWORD *)((char *)a1 + v13);
LABEL_6:
        *v8 = v9;
        v8[1] = v10;
      }
      v7 += 2;
      v6 += 16;
    }
    while ( v7 != v5 );
  }
  return result;
}