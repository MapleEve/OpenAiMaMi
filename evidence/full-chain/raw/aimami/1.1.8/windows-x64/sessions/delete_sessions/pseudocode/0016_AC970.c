// win 1.1.8 delete_sessions node va=0x1412ac970 depth=2
// AC970
bool sub_1412AC970()
{
  return *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 520LL) == 0; /*0x1412ac98e*/
}