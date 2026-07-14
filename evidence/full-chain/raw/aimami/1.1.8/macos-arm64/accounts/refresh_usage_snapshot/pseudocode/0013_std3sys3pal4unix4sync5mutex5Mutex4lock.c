// mac 1.1.8 refresh_usage_snapshot node va=0x1010a4220 depth=2
// std3sys3pal4unix4sync5mutex5Mutex4lock
unsigned int __fastcall std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(pthread_mutex_t *a1)
{
  unsigned int result; // eax

  result = pthread_mutex_lock(a1); /*0x1010a4224*/
  if ( result ) /*0x1010a422b*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::fail::h80ca574eae995758(result); /*0x1010a4231*/
  return result; /*0x1010a422d*/
}