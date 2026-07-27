// __ZN13codexmate_lib4core5relay10translator29claude_code_alias_target_name @ 0x10086e400 | 基线 same-set
const char *__fastcall codexmate_lib::core::relay::translator::claude_code_alias_target_name::heaae98c00ec3c8e5(
        unsigned int *a1,
        __int64 a2)
{
  const char *result; // rax
  unsigned __int32 v3; // eax
  int v4; // ecx

  if ( a2 != 4 ) /*0x10086e408*/
    return nullptr; /*0x10086e456*/
  result = "exec_command"; /*0x10086e40a*/
  if ( *a1 != 1752392002 && *a1 != 1684104530 && *a1 != 1651469383 ) /*0x10086e427*/
  {
    v3 = _byteswap_ulong(*a1); /*0x10086e42b*/
    v4 = (char)((v3 >= 0x47726571) - (v3 < 0x47726570)); /*0x10086e43d*/
    result = nullptr; /*0x10086e440*/
    if ( !v4 ) /*0x10086e44b*/
      return "exec_command"; /*0x10086e44b*/
  }
  return result; /*0x10086e454*/
}