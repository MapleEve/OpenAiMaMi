// mac 1.1.8 BEHAVIORAL-BACKEND check_daemon_state node 0x1010a5ef0 depth=2
// std3sys7process4unix6common11read_output
__int64 __fastcall std::sys::process::unix::common::read_output::hc551af4ae02e8c69(
        unsigned int a1,
        __int64 *a2,
        unsigned int a3,
        __int64 *a4)
{
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r13
  int v12; // eax
  char v13; // al
  __int64 v14; // rdx
  int v15; // eax
  pollfd v17; // [rsp+0h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-38h]
  int v19; // [rsp+Ch] [rbp-34h]
  unsigned int v20; // [rsp+10h] [rbp-30h] BYREF
  int v21[11]; // [rsp+14h] [rbp-2Ch] BYREF

  v21[0] = a1; /*0x1010a5f0c*/
  v20 = a3; /*0x1010a5f0f*/
  v6 = fcntl(a1, 3); /*0x1010a5f19*/
  if ( v6 == -1 /*0x1010a5f7a*/
    || (v6 | 4) != v6 && fcntl(a1, 4) == -1
    || (v7 = fcntl(a3, 3), v7 == -1)
    || (v7 | 4) != v7 && fcntl(a3, 4) == -1 )
  {
LABEL_29:
    v11 = (unsigned int)*__error(); /*0x1010a60e1*/
LABEL_30:
    v9 = (v11 << 32) | 2; /*0x1010a60e9*/
    goto LABEL_31; /*0x1010a60ed*/
  }
  *(_DWORD *)&v17.events = 1; /*0x1010a5f80*/
  v19 = 1; /*0x1010a5f88*/
  v17.fd = a1; /*0x1010a5f8f*/
  v18 = a3; /*0x1010a5f98*/
  while ( 1 ) /*0x1010a5fb8*/
  {
    while ( poll(&v17, 2u, -1) == -1 ) /*0x1010a5fb8*/
    {
      v11 = *__error(); /*0x1010a604a*/
      if ( v11 != 4 ) /*0x1010a6051*/
        goto LABEL_30; /*0x1010a6051*/
    }
    if ( !v17.revents ) /*0x1010a5fc3*/
      goto LABEL_12; /*0x1010a5fc3*/
    if ( (std::sys::fd::unix::FileDesc::read_to_end::h0ea2ab9eb27c9c4e(v21, a2) & 1) == 0 ) /*0x1010a5fd3*/
      break; /*0x1010a5fd3*/
    v9 = v8; /*0x1010a5fd9*/
    if ( (v8 & 0xFFFFFFFF00000003LL) != 0x2300000002LL ) /*0x1010a5ff9*/
      goto LABEL_31; /*0x1010a5ff9*/
LABEL_12:
    if ( HIWORD(v19) ) /*0x1010a6004*/
    {
      if ( (std::sys::fd::unix::FileDesc::read_to_end::h0ea2ab9eb27c9c4e((int *)&v20, a4) & 1) == 0 ) /*0x1010a6014*/
      {
        v15 = fcntl(a1, 3); /*0x1010a60a4*/
        if ( v15 == -1 || (v15 & 0xFFFFFFFB) != v15 && fcntl(a1, 4) == -1 ) /*0x1010a60c8*/
          goto LABEL_29; /*0x1010a60c8*/
        v13 = std::sys::fd::unix::FileDesc::read_to_end::h0ea2ab9eb27c9c4e(v21, a2); /*0x1010a60d1*/
        goto LABEL_26; /*0x1010a60d1*/
      }
      v9 = v10; /*0x1010a601a*/
      if ( (v10 & 0xFFFFFFFF00000003LL) != 0x2300000002LL ) /*0x1010a603a*/
        goto LABEL_31; /*0x1010a603a*/
    }
  }
  v12 = fcntl(a3, 3); /*0x1010a6066*/
  if ( v12 == -1 || (v12 & 0xFFFFFFFB) != v12 && fcntl(a3, 4) == -1 ) /*0x1010a608b*/
    goto LABEL_29; /*0x1010a608b*/
  v13 = std::sys::fd::unix::FileDesc::read_to_end::h0ea2ab9eb27c9c4e((int *)&v20, a4); /*0x1010a6094*/
LABEL_26:
  v9 = 0; /*0x1010a60d6*/
  if ( (v13 & 1) != 0 ) /*0x1010a60db*/
    v9 = v14; /*0x1010a60db*/
LABEL_31:
  close_NOCANCEL(a3); /*0x1010a60f1*/
  close_NOCANCEL(a1); /*0x1010a60fb*/
  return v9; /*0x1010a6103*/
}