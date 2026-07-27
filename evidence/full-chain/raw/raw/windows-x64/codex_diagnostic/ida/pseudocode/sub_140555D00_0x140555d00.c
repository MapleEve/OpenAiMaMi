// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x140555d00
// name: sub_140555D00
// 
// win 1.2.3 recheck | attributed via call-graph propagation (FANIN_CAP=12, decompile-verified real logic not generic glue, caller-module-purity cross-checked no conflicting non-relay module attribution) | target=/codexmate_lib/core/relay/codex_diagnostic
_QWORD *__fastcall sub_140555D00(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // r15
  __int64 v8; // rdi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r8
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r8
  __int64 v16; // r12
  int v17; // eax
  __int64 *v18; // [rsp+20h] [rbp-48h]

  result = (_QWORD *)(a3 - 1);
  if ( a3 - 1 >= a2 )
    BUG();
  if ( a3 != a2 )
  {
    v5 = &a1[3 * a2];
    v6 = 24 * a3;
    v7 = &a1[3 * a3];
    v18 = v5;
    do
    {
      v8 = v7[1];
      v9 = v7[2];
      v10 = *(v7 - 1);
      v11 = v9 - v10;
      if ( v9 < v10 )
        v10 = v7[2];
      result = (_QWORD *)(int)sub_1416847B0(v7[1], *(v7 - 2), v10);
      if ( (_DWORD)result )
        v11 = (int)result;
      if ( v11 < 0 )
      {
        v12 = *v7;
        v13 = v6;
        do
        {
          v14 = v13;
          *(_QWORD *)((char *)a1 + v13 + 16) = *(_QWORD *)((char *)a1 + v13 - 8);
          *(_OWORD *)((char *)a1 + v13) = *(_OWORD *)((char *)a1 + v13 - 24);
          if ( v13 == 24 )
          {
            result = a1;
            goto LABEL_6;
          }
          v15 = *(_QWORD *)((char *)a1 + v13 - 32);
          v16 = v9 - v15;
          if ( v9 < v15 )
            v15 = v9;
          v17 = sub_1416847B0(v8, *(_QWORD *)((char *)a1 + v13 - 40), v15);
          if ( v17 )
            v16 = v17;
          v13 = v14 - 24;
        }
        while ( v16 < 0 );
        result = (_QWORD *)((char *)a1 + v13);
LABEL_6:
        *result = v12;
        *(_QWORD *)((char *)a1 + v14 - 16) = v8;
        *(_QWORD *)((char *)a1 + v14 - 8) = v9;
        v5 = v18;
      }
      v7 += 3;
      v6 += 24;
    }
    while ( v7 != v5 );
  }
  return result;
}