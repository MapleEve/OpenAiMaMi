// module: codexmate_lib/core/relay/router_reconciler
// addr: 0x14052db80
// name: sub_14052DB80
// win 1.2.1 | module src/core/relay/router_reconciler.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14052DB80(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  bool v3; // cf
  __int64 v4; // rcx
  __int64 result; // rax
  signed __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  _QWORD *v15; // r14
  __int64 v16; // rdx
  _QWORD *v17; // [rsp+20h] [rbp-10h]

  v2 = *a1;
  v3 = v2 < 2;
  v4 = v2 - 2;
  result = 2;
  if ( !v3 )
    result = v4;
  switch ( result )
  {
    case 0LL:
      return sub_140018650(a1 + 1);
    case 1LL:
      v9 = (_QWORD *)a1[1];
      v17 = v9;
      if ( *v9 == 1 )
      {
        sub_140018650(v9 + 1);
      }
      else if ( !*v9 )
      {
        v10 = v9[2];
        if ( v10 )
          sub_140001660(v9[1], v10, 1);
      }
      v6 = 40;
      v8 = 8;
      v7 = v17;
      return sub_140001660(v7, v6, v8);
    case 2LL:
      v11 = a1[3];
      if ( v11 )
        sub_140001660(a1[4], v11, 1);
      v12 = a1[9];
      if ( v12 != -1 && v12 )
        sub_140001660(a1[10], v12, 1);
      v13 = a1[7];
      v14 = a1[8];
      if ( v14 )
      {
        v15 = (_QWORD *)(v13 + 8);
        do
        {
          v16 = *(v15 - 1);
          if ( v16 )
            sub_140001660(*v15, v16, 1);
          v15 += 3;
          --v14;
        }
        while ( v14 );
      }
      result = a1[6];
      if ( result )
        return sub_140001660(v13, 24 * result, 8);
      return result;
    case 3LL:
      v6 = a1[1];
      result = 0x8000000000000005uLL;
      if ( v6 < (__int64)0x8000000000000005uLL )
        return result;
      goto LABEL_5;
    case 4LL:
      return sub_140528900(a1[1]);
    default:
      v6 = a1[1];
LABEL_5:
      if ( v6 )
      {
        v7 = (_QWORD *)a1[2];
        v8 = 1;
        return sub_140001660(v7, v6, v8);
      }
      return result;
  }
}