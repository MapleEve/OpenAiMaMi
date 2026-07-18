// win 1.2.1 NEW write_client_debug_log 0x1415efdb0 d=2
bool sub_1415EFDB0()
{
  return *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 576LL) == 0; /*0x1415efdce*/
}