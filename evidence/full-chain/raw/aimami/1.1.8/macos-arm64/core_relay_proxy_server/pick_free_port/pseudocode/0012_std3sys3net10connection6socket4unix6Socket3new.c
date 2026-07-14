// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND pick_free_port node 0x1010a23a0 depth=2
__int64 __fastcall std::sys::net::connection::socket::unix::Socket::new::hd9b3c34578a2e50e(__int64 a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // r14d
  int v6[5]; // [rsp+Ch] [rbp-14h] BYREF

  v3 = socket(a2, a3, 0); /*0x1010a23b4*/
  if ( v3 == -1 ) /*0x1010a23bc*/
  {
    *(_QWORD *)(a1 + 8) = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x1010a243a*/
    *(_DWORD *)a1 = 1; /*0x1010a243e*/
  }
  else
  {
    v4 = v3; /*0x1010a23be*/
    if ( ioctl(v3, 0x20006601u) == -1 || (v6[0] = 1, setsockopt(v4, 0xFFFF, 4130, v6, 4u) == -1) ) /*0x1010a23fa*/
    {
      *(_QWORD *)(a1 + 8) = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x1010a2417*/
      *(_DWORD *)a1 = 1; /*0x1010a241b*/
      close_NOCANCEL(v4); /*0x1010a2424*/
    }
    else
    {
      *(_DWORD *)(a1 + 4) = v4; /*0x1010a23fc*/
      *(_DWORD *)a1 = 0; /*0x1010a2400*/
    }
  }
  return a1; /*0x1010a2447*/
}