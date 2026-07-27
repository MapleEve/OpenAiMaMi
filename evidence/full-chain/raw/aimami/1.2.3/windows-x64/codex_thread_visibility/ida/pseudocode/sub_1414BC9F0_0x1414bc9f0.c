// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1414bc9f0
// name: sub_1414BC9F0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1414BC9F0(__int64 a1)
{
  const char *v1; // r8
  char v2; // al

  if ( !a1 )
  {
    v1 = "NULL";
LABEL_7:
    sub_1414C6950(21, "API call with %s database connection pointer", v1);
    sub_1414C6950(
      21,
      "%s at line %d of [%.10s]",
      "misuse",
      188823,
      "737ae4a34738ffa0c3ff7f9bb18df914dd1cad163f28fd6b6e114a344fe6d618");
    return 0;
  }
  v2 = *(_BYTE *)(a1 + 113);
  if ( v2 != 118 )
  {
    if ( v2 == -70 || (v1 = "invalid", v2 == 109) )
      v1 = "unopened";
    goto LABEL_7;
  }
  return *(unsigned __int8 *)(a1 + 101);
}