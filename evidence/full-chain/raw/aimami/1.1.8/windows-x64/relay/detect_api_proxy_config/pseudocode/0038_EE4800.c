// win 1.1.8 detect_api_proxy_config node va=0x140ee4800 depth=2
// EE4800
void __fastcall sub_140EE4800(_BYTE *a1)
{
  char v1; // bl
  __int64 v2; // rax
  _BYTE *v3; // rsi
  int v4; // eax

  if ( *a1 == 1 ) /*0x140ee4809*/
  {
    v1 = a1[1]; /*0x140ee480b*/
    v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex); /*0x140ee481e*/
    v3 = (_BYTE *)(v2 + 392); /*0x140ee4822*/
    v4 = *(unsigned __int8 *)(v2 + 464); /*0x140ee4829*/
    if ( v4 != 1 ) /*0x140ee4833*/
    {
      if ( v4 == 2 ) /*0x140ee4838*/
        return; /*0x140ee4838*/
      sub_14107F1B0((__int64)v3, (__int64)sub_140EE6640); /*0x140ee484b*/
      v3[72] = 1; /*0x140ee4850*/
    }
    v3[68] = 1; /*0x140ee4854*/
    v3[69] = v1; /*0x140ee4858*/
  }
}