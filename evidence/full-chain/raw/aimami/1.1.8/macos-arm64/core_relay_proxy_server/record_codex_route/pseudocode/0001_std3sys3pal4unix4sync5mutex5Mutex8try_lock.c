// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND record_codex_route node 0x1010a4250 depth=1
bool __fastcall std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(pthread_mutex_t *a1)
{
  return pthread_mutex_trylock(a1) == 0; /*0x1010a425e*/
}