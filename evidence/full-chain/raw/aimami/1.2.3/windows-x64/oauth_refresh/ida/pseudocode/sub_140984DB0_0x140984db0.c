// module: codexmate_lib/core/oauth_refresh
// addr: 0x140984db0
// name: sub_140984DB0
// win 1.2.1 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140984DB0(_QWORD *a1)
{
  __int64 result; // rax
  signed __int64 v2; // rdx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // [rsp+20h] [rbp-10h]

  result = 2;
  if ( *a1 >= 2u )
    result = *a1 - 2LL;
  switch ( result )
  {
    case 0LL:
      result = sub_140018650(a1 + 1);
      break;
    case 1LL:
      v3 = (_QWORD *)a1[1];
      v5 = v3;
      if ( *v3 == 1 )
      {
        sub_140018650(v3 + 1);
      }
      else if ( !*v3 )
      {
        v4 = v3[2];
        if ( v4 )
          sub_140001660(v3[1], v4, 1);
      }
      result = sub_140001660(v5, 40, 8);
      break;
    case 2LL:
      result = sub_14068D580();
      break;
    case 3LL:
      v2 = a1[1];
      result = 0x8000000000000005uLL;
      if ( v2 >= (__int64)0x8000000000000005uLL )
        goto LABEL_5;
      break;
    case 4LL:
      result = sub_140528900(a1[1]);
      break;
    default:
      v2 = a1[1];
LABEL_5:
      if ( v2 )
        result = sub_140001660(a1[2], v2, 1);
      break;
  }
  return result;
}