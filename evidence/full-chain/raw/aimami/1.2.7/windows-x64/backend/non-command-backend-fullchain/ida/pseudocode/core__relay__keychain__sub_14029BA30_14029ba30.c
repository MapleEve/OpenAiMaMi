// win 1.2.7 | module src/core/relay/keychain.rs | ea 0x14029ba30 | name sub_14029BA30
// win 1.2.7 | module src/core/relay/keychain.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14029BA30(__int64 *a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64); // rdx
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-10h]
  void (__fastcall **v10)(__int64); // [rsp+28h] [rbp-8h]

  v2 = *a1;
  v3 = *a1 ^ 0x8000000000000000uLL;
  result = 5;
  if ( v2 < 0 )
    result = v3;
  switch ( result )
  {
    case 0LL:
      v9 = a1[1];
      v10 = (void (__fastcall **)(__int64))a1[2];
      if ( !*v10 )
        goto LABEL_10;
      goto LABEL_9;
    case 1LL:
      v9 = a1[1];
      v10 = (void (__fastcall **)(__int64))a1[2];
      if ( *v10 )
LABEL_9:
        (*v10)(v9);
LABEL_10:
      result = (__int64)v10;
      v7 = v10[1];
      if ( v7 )
        return sub_140001660(v9, v7, v10[2]);
      return result;
    case 2LL:
      return result;
    case 3LL:
    case 4LL:
      v5 = a1[1];
      if ( !v5 )
        return result;
      v6 = a1[2];
      break;
    case 5LL:
      if ( v2 )
        result = sub_140001660(a1[1], v2, 1);
      v5 = a1[3];
      if ( !v5 )
        return result;
      v6 = a1[4];
      break;
    default:
      sub_1403FA970();
      v8 = a1[1];
      result = (__int64)a1;
      if ( v8 )
        return sub_140001660(a1[2], 16 * v8, 8);
      return result;
  }
  return sub_140001660(v6, v5, 1);
}
