// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x1010aace0 depth=2
// std6thread2id8ThreadId3new
signed __int64 std::thread::id::ThreadId::new::h915fa47e758550ba()
{
  signed __int64 v0; // rax
  signed __int64 v1; // rcx
  signed __int64 v2; // rtt

  v0 = std::thread::id::ThreadId::new::COUNTER::h744b5cb69c0c863f; /*0x1010aace0*/
  do /*0x1010aad03*/
  {
    if ( v0 == -1 ) /*0x1010aacf4*/
      std::thread::id::ThreadId::new::exhausted::hf16f361ce084b02b(); /*0x1010aad0d*/
    v1 = v0 + 1; /*0x1010aacf6*/
    v2 = v0; /*0x1010aacfa*/
    v0 = _InterlockedCompareExchange64(&std::thread::id::ThreadId::new::COUNTER::h744b5cb69c0c863f, v0 + 1, v0); /*0x1010aacfa*/
  }
  while ( v2 != v0 ); /*0x1010aad03*/
  return v1; /*0x1010aad08*/
}