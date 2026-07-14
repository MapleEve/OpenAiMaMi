// mac 1.1.8 BEHAVIORAL-BACKEND install_daemon node 0x1010a0e10 depth=2
// std3sys2fs4unix4File6open_c
__int64 __fastcall std::sys::fs::unix::File::open_c::hea0cbe8efcfb1225(
        __int64 a1,
        const char *a2,
        __int64 a3,
        double a4)
{
  char v5; // cl
  char v6; // al
  int v7; // esi
  int v8; // r15d
  unsigned __int8 v9; // al
  char v10; // cl
  int v11; // eax
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 result; // rax
  char *v18; // rsi
  __int64 v19; // rdx

  v5 = *(_BYTE *)(a3 + 7); /*0x1010a0e21*/
  v6 = *(_BYTE *)(a3 + 8); /*0x1010a0e25*/
  if ( *(_BYTE *)(a3 + 6) ) /*0x1010a0e29*/
  {
    if ( !v5 ) /*0x1010a0e31*/
    {
      if ( !v6 ) /*0x1010a0e66*/
      {
        if ( !*(_BYTE *)(a3 + 9) && !*(_BYTE *)(a3 + 10) ) /*0x1010a0f1a*/
        {
          v8 = 0; /*0x1010a0f20*/
          v10 = 0; /*0x1010a0f27*/
          v9 = 0; /*0x1010a0f2c*/
          if ( !*(_BYTE *)(a3 + 11) ) /*0x1010a0f31*/
          {
LABEL_12:
            if ( *(_BYTE *)(a3 + 10) ) /*0x1010a0e9c*/
            {
              if ( (v10 & 1) == 0 ) /*0x1010a0ea5*/
              {
                v11 = (v9 << 10) | 0x200; /*0x1010a0ead*/
                goto LABEL_18; /*0x1010a0eb2*/
              }
            }
            else if ( (v10 & 1) == 0 ) /*0x1010a0eb7*/
            {
              v11 = v9 << 10; /*0x1010a0ec3*/
LABEL_18:
              v12 = v11 | *(_DWORD *)a3 & 0xFEFFFFFC | v8 | 0x1000000; /*0x1010a0ec6*/
              v13 = *(unsigned __int16 *)(a3 + 4); /*0x1010a0eda*/
              while ( 1 ) /*0x1010a0eeb*/
              {
                v14 = open(a2, v12, v13); /*0x1010a0eeb*/
                if ( v14 != -1 ) /*0x1010a0ef3*/
                  break; /*0x1010a0ef3*/
                v15 = *__error(); /*0x1010a0efa*/
                if ( v15 != 4 ) /*0x1010a0f01*/
                {
                  v16 = (v15 << 32) | 2; /*0x1010a0f07*/
                  goto LABEL_33; /*0x1010a0f0b*/
                }
              }
              *(_DWORD *)(a1 + 4) = v14; /*0x1010a0f0d*/
              result = 0; /*0x1010a0f10*/
              goto LABEL_34; /*0x1010a0f12*/
            }
            v11 = 2560; /*0x1010a0eb9*/
            goto LABEL_18; /*0x1010a0ebe*/
          }
        }
        goto LABEL_31; /*0x1010a0f31*/
      }
      v8 = 10; /*0x1010a0e6c*/
      goto LABEL_11; /*0x1010a0e72*/
    }
    v7 = 2; /*0x1010a0e33*/
    v8 = 10; /*0x1010a0e38*/
    if ( v6 ) /*0x1010a0e40*/
    {
LABEL_11:
      v9 = *(_BYTE *)(a3 + 9); /*0x1010a0e82*/
      v10 = *(_BYTE *)(a3 + 11); /*0x1010a0e86*/
      if ( v10 & 1 | ((v9 & 1) == 0) ) /*0x1010a0e92*/
        goto LABEL_12; /*0x1010a0e96*/
      goto LABEL_31; /*0x1010a0e96*/
    }
LABEL_7:
    v9 = *(_BYTE *)(a3 + 9); /*0x1010a0e57*/
    v10 = *(_BYTE *)(a3 + 11); /*0x1010a0e5b*/
    v8 = v7; /*0x1010a0e5f*/
    goto LABEL_12; /*0x1010a0e62*/
  }
  if ( v5 ) /*0x1010a0e46*/
  {
    v7 = 1; /*0x1010a0e48*/
    v8 = 9; /*0x1010a0e4d*/
    if ( v6 ) /*0x1010a0e55*/
      goto LABEL_11; /*0x1010a0e55*/
    goto LABEL_7; /*0x1010a0e55*/
  }
  v8 = 9; /*0x1010a0e74*/
  if ( v6 ) /*0x1010a0e7c*/
    goto LABEL_11; /*0x1010a0e7c*/
  if ( !*(_BYTE *)(a3 + 10) && !*(_BYTE *)(a3 + 11) && !*(_BYTE *)(a3 + 9) ) /*0x1010a0f45*/
  {
    v18 = "must specify at least one of read, write, or append accesscreating or truncating a file requires write or append access"; /*0x1010a0f4b*/
    v19 = 58; /*0x1010a0f52*/
    goto LABEL_32; /*0x1010a0f57*/
  }
LABEL_31:
  v18 = "creating or truncating a file requires write or append access"; /*0x1010a0f59*/
  v19 = 61; /*0x1010a0f60*/
LABEL_32:
  v16 = std::io::error::Error::new::h2838dbd593bc6ec9(20, v18, v19, a4); /*0x1010a0f65*/
LABEL_33:
  *(_QWORD *)(a1 + 8) = v16; /*0x1010a0f6f*/
  result = 1; /*0x1010a0f73*/
LABEL_34:
  *(_DWORD *)a1 = result; /*0x1010a0f78*/
  return result; /*0x1010a0f7a*/
}