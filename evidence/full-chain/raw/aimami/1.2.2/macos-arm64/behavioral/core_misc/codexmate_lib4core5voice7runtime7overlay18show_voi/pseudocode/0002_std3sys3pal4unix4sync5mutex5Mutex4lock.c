// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x10135a800 d=1
unsigned int __fastcall std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(pthread_mutex_t *a1)
{
  unsigned int result; // eax

  result = pthread_mutex_lock(a1); /*0x10135a804*/
  if ( result ) /*0x10135a80b*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::fail::h80ca574eae995758(result); /*0x10135a811*/
  return result; /*0x10135a80d*/
}