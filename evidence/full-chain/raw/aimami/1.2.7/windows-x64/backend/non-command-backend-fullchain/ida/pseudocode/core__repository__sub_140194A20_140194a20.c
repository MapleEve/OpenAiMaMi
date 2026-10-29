// win 1.2.7 | module src/core/repository.rs | ea 0x140194a20 | name sub_140194A20
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140194A20(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx

  v2 = a1[24];
  if ( v2 )
    result = sub_140001660(a1[25], v2, 1);
  v4 = a1[27];
  if ( v4 )
    result = sub_140001660(a1[28], v4, 1);
  v5 = a1[30];
  if ( v5 )
    result = sub_140001660(a1[31], v5, 1);
  v6 = a1[33];
  if ( v6 )
    result = sub_140001660(a1[34], v6, 1);
  v7 = a1[42];
  if ( v7 != -1 && v7 )
    result = sub_140001660(a1[43], v7, 1);
  v8 = a1[45];
  if ( v8 != -1 && v8 )
    result = sub_140001660(a1[46], v8, 1);
  v9 = a1[48];
  if ( v9 != -1 && v9 )
    result = sub_140001660(a1[49], v9, 1);
  v10 = a1[36];
  if ( v10 )
    result = sub_140001660(a1[37], v10, 1);
  v11 = a1[39];
  if ( v11 )
    return sub_140001660(a1[40], v11, 1);
  return result;
}
