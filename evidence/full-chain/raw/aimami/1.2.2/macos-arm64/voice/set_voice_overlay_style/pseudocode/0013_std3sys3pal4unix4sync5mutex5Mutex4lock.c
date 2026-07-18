// mac 1.2.2 NEW set_voice_overlay_style 0x10135a800 d=2
unsigned int __fastcall std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(pthread_mutex_t *a1)
{
  unsigned int result; // eax

  result = pthread_mutex_lock(a1); /*0x10135a804*/
  if ( result ) /*0x10135a80b*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::fail::h80ca574eae995758(result); /*0x10135a811*/
  return result; /*0x10135a80d*/
}