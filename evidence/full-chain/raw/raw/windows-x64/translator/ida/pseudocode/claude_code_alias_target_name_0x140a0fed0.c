// module: codexmate_lib/core/relay/translator
// addr: 0x140a0fed0
// name: claude_code_alias_target_name
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::translator::claude_code_alias_target_name | 跨平台字符串签名匹配(名↔函数一致)
const char *__fastcall claude_code_alias_target_name(_DWORD *a1, __int64 a2)
{
  const char *result; // rax

  if ( a2 != 4 )
    return nullptr;
  result = "exec_command";
  if ( *a1 != 1752392002 && *a1 != 1684104530 && *a1 != 1651469383 && *a1 != 1885696583 )
    return nullptr;
  return result;
}