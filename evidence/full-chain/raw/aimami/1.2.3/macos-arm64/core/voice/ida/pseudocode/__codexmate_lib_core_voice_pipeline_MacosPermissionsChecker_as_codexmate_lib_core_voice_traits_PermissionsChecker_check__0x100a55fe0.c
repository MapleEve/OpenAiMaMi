// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::pipeline::MacosPermissionsChecker as codexmate_lib::core::voice::traits::PermissionsChecker>::check::h1a1cc4d29b02591a @ 0x100a55fe0 | full-body via py_exec_file(ida_hexrays.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..voice..pipeline..MacosPermissionsChecker$u20$as$u20$codexmate_lib..core..voice..traits..PermissionsChecker$GT$::check::h1a1cc4d29b02591a(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  result = codexmate_lib::platform::voice_permissions::query::h4128ce0e089239d5() & 0xFFFFFF;
  if ( a2 )
  {
    if ( a2 == 1 )
      return (unsigned int)result >> 8;
    else
      return WORD1(result);
  }
  return result;
}
