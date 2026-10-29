// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d1bea0 | name sub_140D1BEA0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D1BEA0(_QWORD *a1)
{
  __int64 result; // rax
  signed __int64 v2; // rdx
  __int64 v3; // [rsp+30h] [rbp-8h] BYREF

  result = 2;
  if ( *a1 >= 2u )
    result = *a1 - 2LL;
  switch ( result )
  {
    case 0LL:
      result = a1[1];
      if ( (unsigned int)(result & 3) - 2 >= 2 && (result & 3) != 0 )
      {
        v3 = result - 1;
        result = sub_1416BCB00(&v3);
      }
      break;
    case 1LL:
      result = sub_14002F910(a1 + 1);
      break;
    case 2LL:
      result = sub_140192EE0(a1);
      break;
    case 3LL:
      v2 = a1[1];
      result = 0x8000000000000005uLL;
      if ( v2 >= (__int64)0x8000000000000005uLL )
        goto LABEL_5;
      break;
    case 4LL:
      result = sub_140D19140(a1[1]);
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
