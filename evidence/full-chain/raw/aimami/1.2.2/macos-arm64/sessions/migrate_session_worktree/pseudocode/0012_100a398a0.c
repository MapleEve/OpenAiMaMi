// mac 1.2.2 NEW migrate_session_worktree 0x100a398a0 d=1
__int64 __fastcall codexmate_lib::core::sessions::migrate_session_worktree::_$u7b$$u7b$closure$u7d$$u7d$::h4e1410d4ee360672(
        _QWORD *a1)
{
  __int64 result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a398a9*/
  result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x21u, 1u); /*0x100a398b8*/
  if ( !result ) /*0x100a398c0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x100a39921*/
  *(_QWORD *)(result + 24) = 0xA7E781BFE8A885E5LL; /*0x100a398cc*/
  *(_QWORD *)(result + 16) = 0x89AEE5BD83E88DB8LL; /*0x100a398da*/
  *(_QWORD *)(result + 8) = 0xE48D89E593BDE58BLL; /*0x100a398e8*/
  *(_QWORD *)result = 0xA8E7BFBAE7A5AFE8LL; /*0x100a398f6*/
  *(_BYTE *)(result + 32) = -69; /*0x100a398f9*/
  *a1 = 33; /*0x100a398fd*/
  a1[1] = result; /*0x100a39904*/
  a1[2] = 33; /*0x100a39908*/
  return result; /*0x100a39914*/
}