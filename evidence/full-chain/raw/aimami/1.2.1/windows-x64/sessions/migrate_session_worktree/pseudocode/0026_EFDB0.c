// win 1.2.1 NEW migrate_session_worktree 0x1415efdb0 d=1
bool sub_1415EFDB0()
{
  return *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 576LL) == 0; /*0x1415efdce*/
}