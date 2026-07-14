// win 1.1.8 detect_api_proxy_config node va=0x140edf720 depth=2
// EDF720
__int64 sub_140EDF720()
{
  return *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 392LL; /*0x140edf73a*/
}