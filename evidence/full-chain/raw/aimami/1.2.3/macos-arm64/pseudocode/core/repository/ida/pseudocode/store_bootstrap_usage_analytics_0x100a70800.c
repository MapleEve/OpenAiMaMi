// __ZN13codexmate_lib4core10repository10Repository31store_bootstrap_usage_analytics @ 0x100a70800 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::store_bootstrap_usage_analytics::h0c08c9e60c4a9b91(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax

  v4 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820((_QWORD *)a2); /*0x100a70816*/
  if ( v4 ) /*0x100a7081e*/
  {
    *a1 = 2; /*0x100a70820*/
    a1[1] = v4; /*0x100a70827*/
  }
  else
  {
    codexmate_lib::core::bootstrap_cache::update::hd7784444676a6e73(a1, *(void **)(a2 + 464), *(_QWORD *)(a2 + 472), a3); /*0x100a70841*/
  }
  return a1; /*0x100a7084d*/
}