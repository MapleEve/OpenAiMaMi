// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18hide_voi 0x1013613f0 d=2
void __fastcall std::thread::scoped::ScopeData::increment_num_running_threads::hdb6cf601e92f2af7(__int64 a1)
{
  char v1; // of
  __int64 v2; // rt0

  v2 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8)); /*0x1013613f0*/
  if ( (v2 < 0) ^ v1 | (v2 == 0) ) /*0x1013613f5*/
    std::thread::scoped::ScopeData::overflow::hc479ea1c23114762(a1); /*0x1013613fc*/
}