// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND pick_free_port node 0x1010a2060 depth=1
__int64 __fastcall std::sys::net::connection::socket::TcpListener::bind::inner::h34af0de907fa1c41(__int64 a1, char *a2)
{
  char v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // r14d
  int v7; // ecx
  __int16 v8; // ax
  int *v9; // rdi
  __int128 v10; // xmm0
  socklen_t v11; // edx
  char v12; // si
  int v13; // edi
  _BYTE v15[24]; // [rsp+0h] [rbp-40h] BYREF
  int v16; // [rsp+18h] [rbp-28h]

  v4 = *a2; /*0x1010a2075*/
  v5 = 2; /*0x1010a2081*/
  if ( v4 ) /*0x1010a2086*/
    v5 = 30; /*0x1010a2086*/
  std::sys::net::connection::socket::unix::Socket::new::hd9b3c34578a2e50e(v15, v5, 1); /*0x1010a2092*/
  if ( *(_DWORD *)v15 == 1 ) /*0x1010a209b*/
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&v15[8]; /*0x1010a20a1*/
    *(_DWORD *)a1 = 1; /*0x1010a20a5*/
  }
  else
  {
    v6 = *(_DWORD *)&v15[4]; /*0x1010a20b0*/
    *(_DWORD *)v15 = 1; /*0x1010a20b4*/
    if ( setsockopt(*(int *)&v15[4], 0xFFFF, 4, v15, 4u) == -1 ) /*0x1010a20da*/
      goto LABEL_12; /*0x1010a20da*/
    if ( v4 ) /*0x1010a20e3*/
    {
      v8 = __ROL2__(*((_WORD *)a2 + 14), 8); /*0x1010a20ea*/
      v9 = (int *)(a2 + 20); /*0x1010a20ee*/
      v7 = *((_DWORD *)a2 + 6); /*0x1010a20f2*/
      v10 = *(_OWORD *)(a2 + 4); /*0x1010a20f6*/
      v11 = 28; /*0x1010a20fb*/
      v12 = 30; /*0x1010a2100*/
    }
    else
    {
      v8 = __ROL2__(*((_WORD *)a2 + 3), 8); /*0x1010a210e*/
      v10 = 0; /*0x1010a2112*/
      v11 = 16; /*0x1010a2115*/
      v12 = 2; /*0x1010a211a*/
      v9 = (int *)(a2 + 2); /*0x1010a211d*/
    }
    v13 = *v9; /*0x1010a2120*/
    v15[0] = 0; /*0x1010a2122*/
    v15[1] = v12; /*0x1010a2126*/
    *(_WORD *)&v15[2] = v8; /*0x1010a212a*/
    *(_DWORD *)&v15[4] = v13; /*0x1010a212e*/
    *(_OWORD *)&v15[8] = v10; /*0x1010a2131*/
    v16 = v7; /*0x1010a2135*/
    if ( bind(v6, (const sockaddr *)v15, v11) == -1 || listen(v6, 128) == -1 ) /*0x1010a2159*/
    {
LABEL_12:
      *(_QWORD *)(a1 + 8) = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x1010a2176*/
      *(_DWORD *)a1 = 1; /*0x1010a217a*/
      close_NOCANCEL(v6); /*0x1010a2183*/
    }
    else
    {
      *(_DWORD *)(a1 + 4) = v6; /*0x1010a215b*/
      *(_DWORD *)a1 = 0; /*0x1010a215f*/
    }
  }
  return a1; /*0x1010a218b*/
}