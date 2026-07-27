// __ZN13codexmate_lib8platform9debug_log11redact_text @ 0x100916d70 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::debug_log::redact_text::h6747aac2d01298e4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rcx

  if ( codexmate_lib::platform::debug_log::CODEX_HOME::hdbb870b9a1d083c7 ) /*0x100916d83*/
  {
    v5 = 0; /*0x100916d88*/
  }
  else
  {
    v5 = qword_1019FF210; /*0x100916d8c*/
    a5 = qword_1019FF218; /*0x100916d93*/
  }
  codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b(a1, a2, a3, v5, a5); /*0x100916d9d*/
  return a1; /*0x100916da9*/
}