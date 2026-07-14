// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x1010aad50 depth=2
// std6thread6scoped9ScopeData29increment_num_running_threads
void __fastcall std::thread::scoped::ScopeData::increment_num_running_threads::hdb6cf601e92f2af7(__int64 a1)
{
  char v1; // of
  __int64 v2; // rt0

  v2 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8)); /*0x1010aad50*/
  if ( (v2 < 0) ^ v1 | (v2 == 0) ) /*0x1010aad55*/
    std::thread::scoped::ScopeData::overflow::hc479ea1c23114762(a1); /*0x1010aad5c*/
}