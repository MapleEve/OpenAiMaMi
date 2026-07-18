// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18hide_voi 0x101361380 d=2
signed __int64 __fastcall std::thread::id::ThreadId::new::h915fa47e758550ba(__int64 a1)
{
  signed __int64 v1; // rax
  signed __int64 v2; // rcx
  signed __int64 v3; // rtt

  v1 = std::thread::id::ThreadId::new::COUNTER::h744b5cb69c0c863f; /*0x101361380*/
  do /*0x1013613a3*/
  {
    if ( v1 == -1 ) /*0x101361394*/
      std::thread::id::ThreadId::new::exhausted::hf16f361ce084b02b(a1); /*0x1013613ad*/
    v2 = v1 + 1; /*0x101361396*/
    v3 = v1; /*0x10136139a*/
    v1 = _InterlockedCompareExchange64(&std::thread::id::ThreadId::new::COUNTER::h744b5cb69c0c863f, v1 + 1, v1); /*0x10136139a*/
  }
  while ( v3 != v1 ); /*0x1013613a3*/
  return v2; /*0x1013613a8*/
}