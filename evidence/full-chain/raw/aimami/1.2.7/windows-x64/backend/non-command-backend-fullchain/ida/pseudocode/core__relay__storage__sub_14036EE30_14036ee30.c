// win 1.2.7 | module src/core/relay/storage.rs | ea 0x14036ee30 | name sub_14036EE30
// win 1.2.7 | module src/core/relay/storage.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14036EE30(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = a1[1];
  if ( v1 )
  {
    v2 = 16 * v1;
    v3 = 17 * v1 + 33;
    if ( v3 )
      sub_140001660(*a1 - v2 - 16, v3, 16);
  }
}
