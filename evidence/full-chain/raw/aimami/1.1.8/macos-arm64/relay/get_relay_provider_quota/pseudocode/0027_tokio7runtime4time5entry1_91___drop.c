// mac 1.1.8 get_relay_provider_quota node va=0x100f52b80 depth=5
// tokio7runtime4time5entry1_91_::drop
void __fastcall tokio::runtime::time::entry::_::_$LT$impl$u20$core..ops..drop..Drop$u20$for$u20$tokio..runtime..time..entry..TimerEntry$GT$::drop::he5cadf9634a2230f(
        __int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  if ( *(_DWORD *)(a1 + 16) == 1 ) /*0x100f52b84*/
  {
    v2 = *(_QWORD *)(a1 + 8); /*0x100f52b89*/
    v3 = 544; /*0x100f52b95*/
    if ( *(_BYTE *)a1 ) /*0x100f52b8d*/
      v3 = 336; /*0x100f52b9a*/
    if ( *(_DWORD *)(v2 + v3 + 168) == 1000000000 ) /*0x100f52ba9*/
      core::option::expect_failed::ha75f8bdcbd673567( /*0x100f52bd3*/
        "A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers.",
        115,
        &anon_c357f38cc605a4eed6fc8703455037a4_45);
    tokio::runtime::time::_$LT$impl$u20$tokio..runtime..time..handle..Handle$GT$::clear_entry::h233d7a8c7f81b196( /*0x100f52bb6*/
      v3 + v2 + 96,
      a1 + 24);
  }
}