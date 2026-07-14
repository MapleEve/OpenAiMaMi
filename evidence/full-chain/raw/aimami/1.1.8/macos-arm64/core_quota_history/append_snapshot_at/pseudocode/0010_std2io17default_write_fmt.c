// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND append_snapshot_at node 0x100698bd0 depth=1
__int64 __fastcall std::io::default_write_fmt::hf62afa4a4e97fcee(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  char v3; // cl
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // [rsp+0h] [rbp-30h] BYREF
  __int64 v7; // [rsp+8h] [rbp-28h]

  v6 = a1; /*0x100698be5*/
  v7 = 0; /*0x100698be9*/
  v3 = core::fmt::write::h2e5a8157a38fb62d((__int64)&v6, (__int64)&anon_5d4536734f60d7d1ae09e451c2f7649c_1050, a2, a3); /*0x100698c01*/
  result = v7; /*0x100698c03*/
  if ( v3 ) /*0x100698c09*/
  {
    if ( !v7 ) /*0x100698c0e*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100698c23*/
        (__int64)&anon_5d4536734f60d7d1ae09e451c2f7649c_1048,
        173,
        (__int64)&anon_5d4536734f60d7d1ae09e451c2f7649c_1049);
  }
  else
  {
    if ( (v7 & 3) == 1 ) /*0x100698c32*/
    {
      v5 = *(_QWORD *)(v7 + 7); /*0x100698c4b*/
      if ( *(_QWORD *)v5 ) /*0x100698c4f*/
        (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v7 - 1)); /*0x100698c5b*/
      if ( *(_QWORD *)(v5 + 8) ) /*0x100698c5d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100698c6f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100698c81*/
    }
    return 0; /*0x100698c34*/
  }
  return result; /*0x100698c36*/
}