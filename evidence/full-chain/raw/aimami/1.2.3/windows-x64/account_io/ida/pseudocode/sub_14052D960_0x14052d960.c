// module: codexmate_lib/core/account_io
// addr: 0x14052d960
// name: sub_14052D960
// win 1.2.1 | module src/core/account_io.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14052D960(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx

  v2 = *a1;
  if ( *a1 != -1 && v2 )
    result = sub_140001660(a1[1], v2, 1);
  v4 = a1[3];
  if ( v4 != -1 && v4 )
    result = sub_140001660(a1[4], v4, 1);
  v5 = a1[6];
  if ( v5 != -1 && v5 )
    result = sub_140001660(a1[7], v5, 1);
  v6 = a1[9];
  if ( v6 != -1 && v6 )
    result = sub_140001660(a1[10], v6, 1);
  v7 = a1[12];
  if ( v7 != -1 && v7 )
    result = sub_140001660(a1[13], v7, 1);
  v8 = a1[15];
  if ( v8 != -1 && v8 )
    result = sub_140001660(a1[16], v8, 1);
  v9 = a1[18];
  if ( v9 != -1 )
  {
    if ( v9 )
      return sub_140001660(a1[19], v9, 1);
  }
  return result;
}