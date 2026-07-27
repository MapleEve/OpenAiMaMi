// module: codexmate_lib/core/relay/manager
// addr: 0x1402acec0
// name: sub_1402ACEC0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1402ACEC0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // [rsp+20h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v4 = *a2;
    v5 = a2[1];
    v13 = *(_QWORD *)(a1 + 8);
    v6 = (_QWORD *)(v13 + 24);
    v7 = 0;
    while ( 1 )
    {
      if ( *(v6 - 1) == v5 )
      {
        v8 = *(v6 - 2);
        if ( !(unsigned int)sub_1416847B0(v8, v4, v5) )
          break;
      }
      ++v7;
      v6 += 3;
      if ( v2 == v7 )
        return;
    }
    v9 = *(v6 - 3);
    if ( v9 )
      sub_140001660(v8, v9, 1);
    if ( v7 + 1 < v2 )
    {
      v10 = v2 - 1 - v7;
      do
      {
        if ( v6[2] != v5 || (v12 = v6[1], (unsigned int)sub_1416847B0(v12, v4, v5)) )
        {
          v11 = 3 * v7;
          *(_QWORD *)(v13 + 8 * v11 + 16) = v6[2];
          *(_OWORD *)(v13 + 8 * v11) = *(_OWORD *)v6;
          ++v7;
        }
        else if ( *v6 )
        {
          sub_140001660(v12, *v6, 1);
        }
        v6 += 3;
        --v10;
      }
      while ( v10 );
    }
    *(_QWORD *)(a1 + 16) = v7;
  }
}