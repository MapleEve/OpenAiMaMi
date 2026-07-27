// module: codexmate_lib/core/voice/workspace
// addr: 0x1405581c0
// name: sub_1405581C0
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405581C0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // r13
  __int64 v9; // r13
  __int64 v10; // r12
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rbx
  _QWORD *v16; // [rsp+20h] [rbp-48h]

  result = a3 - 1;
  if ( a3 - 1 >= a2 )
    BUG();
  if ( a3 != a2 )
  {
    v5 = &a1[a2];
    v6 = &a1[a3];
    v7 = 8 * a3 - 8;
    v16 = v5;
    do
    {
      v9 = *(v6 - 1);
      v10 = *v6;
      v11 = *(_QWORD *)(v9 + 40);
      v12 = *(_QWORD *)(*v6 + 40LL);
      if ( v11 == v12 )
      {
        result = sub_1416847B0(*(_QWORD *)(v10 + 32), *(_QWORD *)(v9 + 32), v11);
        if ( (int)result >= 0 )
          goto LABEL_8;
      }
      else if ( v11 >= v12 )
      {
        goto LABEL_8;
      }
      v13 = v6 - 1;
      *v6 = v9;
      v8 = a1;
      if ( v6 - 1 == a1 )
        goto LABEL_7;
      v14 = v7;
      while ( 1 )
      {
        v15 = *(_QWORD *)((char *)a1 + v14 - 8);
        if ( *(_QWORD *)(v15 + 40) != v12 )
          break;
        result = sub_1416847B0(*(_QWORD *)(v10 + 32), *(_QWORD *)(v15 + 32), v12);
        if ( (int)result >= 0 )
        {
          v8 = v13;
          goto LABEL_6;
        }
LABEL_16:
        --v13;
        *(_QWORD *)((char *)a1 + v14) = v15;
        v14 -= 8;
        if ( !v14 )
        {
          v8 = a1;
          goto LABEL_6;
        }
      }
      if ( *(_QWORD *)(v15 + 40) < v12 )
        goto LABEL_16;
      v8 = (_QWORD *)((char *)a1 + v14);
LABEL_6:
      v5 = v16;
LABEL_7:
      *v8 = v10;
LABEL_8:
      ++v6;
      v7 += 8;
    }
    while ( v6 != v5 );
  }
  return result;
}