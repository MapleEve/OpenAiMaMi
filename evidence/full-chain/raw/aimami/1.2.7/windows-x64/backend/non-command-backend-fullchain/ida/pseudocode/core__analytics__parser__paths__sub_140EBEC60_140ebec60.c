// win 1.2.7 | module src/core/analytics/parser/paths.rs | ea 0x140ebec60 | name sub_140EBEC60
// win 1.2.7 | module src/core/analytics/parser/paths.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EBEC60(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  _OWORD *v10; // rcx
  __int128 v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+48h] [rbp-8h]

  v14 = -2;
  nullsub_1(a1);
  v8 = sub_140001650(24, 8);
  if ( !v8 )
    sub_141938D11(8, 24);
  v13 = v8;
  sub_140F8ADE0(&v11, a3, a4);
  result = v12;
  v10 = (_OWORD *)v13;
  *(_QWORD *)(v13 + 16) = v12;
  *v10 = v11;
  *(_BYTE *)(a1 + 24) = a2;
  *(_QWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)(a1 + 16) = 1;
  return result;
}
