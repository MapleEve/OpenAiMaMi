// win 1.2.7 | module src/core/codex_app_server/models.rs | ea 0x14038c890 | name sub_14038C890
// win 1.2.7 | module src/core/codex_app_server/models.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14038C890(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rdx
  __int64 result; // rax

  if ( *a1 )
    sub_140001660(a1[1], *a1, 1);
  v2 = a1[3];
  if ( v2 )
    sub_140001660(a1[4], v2, 1);
  v3 = a1[7];
  v4 = a1[8];
  if ( v4 )
  {
    v5 = (_QWORD *)(v3 + 8);
    do
    {
      v6 = *(v5 - 1);
      if ( v6 )
        sub_140001660(*v5, v6, 1);
      v5 += 3;
      --v4;
    }
    while ( v4 );
  }
  result = a1[6];
  if ( result )
    return sub_140001660(v3, 24 * result, 8);
  return result;
}
