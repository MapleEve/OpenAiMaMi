// mac 1.1.8 behavioral install_virtual_unlock_auth 0x1010a0490 d=1
__int64 __fastcall std::sys::fs::copy::hcda968f022f0a0e3(void *__src, size_t __n, void *a3, size_t a4, double a5)
{
  unsigned int v8; // r12d
  unsigned __int64 v9; // r13
  _UNKNOWN **v10; // rax
  int v11; // r12d
  __int64 v12; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // r13
  unsigned int v15; // ebx
  _copyfile_state *v16; // rax
  _copyfile_state *v17; // r15
  copyfile_flags_t v18; // ecx
  stat __dst[2]; // [rsp+0h] [rbp-210h] BYREF
  _TBYTE *v20; // [rsp+188h] [rbp-88h] BYREF
  __int64 v21; // [rsp+190h] [rbp-80h]
  __int64 v22; // [rsp+198h] [rbp-78h] BYREF
  char *v23; // [rsp+1A0h] [rbp-70h]
  int v24; // [rsp+1B0h] [rbp-60h] BYREF
  __int16 v25; // [rsp+1B4h] [rbp-5Ch]
  _BYTE v26[10]; // [rsp+1B6h] [rbp-5Ah]
  _TBYTE v27; // [rsp+1C0h] [rbp-50h] BYREF
  __int16 v28; // [rsp+1CAh] [rbp-46h]
  int to_fd[2]; // [rsp+1D0h] [rbp-40h] BYREF
  _UNKNOWN **v30; // [rsp+1D8h] [rbp-38h]
  int from_fd; // [rsp+1E4h] [rbp-2Ch] BYREF

  v24 = 0; /*0x1010a04b0*/
  v25 = 438; /*0x1010a04b7*/
  *(_DWORD *)v26 = 1; /*0x1010a04bd*/
  *(_WORD *)&v26[4] = 0; /*0x1010a04c4*/
  *(_QWORD *)&v27 = &v24; /*0x1010a04d2*/
  if ( __n > 0x17F ) /*0x1010a04dd*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::h0ddb4d007f51cbc7( /*0x1010a0563*/
      (__int64)to_fd,
      __src,
      __n,
      (__int64)&v27,
      (__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64))std::sys::fs::unix::File::open::_$u7b$$u7b$closure$u7d$$u7d$::h95c66e27a3b35b3f);
    if ( to_fd[0] == 1 ) /*0x1010a056c*/
      return 1; /*0x1010a056c*/
  }
  else
  {
    memcpy(__dst, __src, __n); /*0x1010a04ec*/
    *((_BYTE *)&__dst[0].st_dev + __n) = 0; /*0x1010a04f1*/
    core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v22, (__int64)__dst, __n + 1); /*0x1010a0507*/
    if ( (_DWORD)v22 == 1 ) /*0x1010a0510*/
    {
      v30 = &off_1015AE3E8; /*0x1010a0519*/
      to_fd[0] = 1; /*0x1010a051d*/
      return 1; /*0x1010a054c*/
    }
    std::sys::fs::unix::File::open_c::hea0cbe8efcfb1225((__int64)to_fd, v23, (__int64)&v24, a5); /*0x1010a0538*/
    if ( to_fd[0] == 1 ) /*0x1010a0541*/
      return 1; /*0x1010a0541*/
  }
  v8 = to_fd[1]; /*0x1010a056e*/
  memset(__dst, 0, 144); /*0x1010a05ad*/
  if ( fstat_INODE64(to_fd[1], __dst) == -1 ) /*0x1010a05c6*/
  {
    __error(); /*0x1010a064e*/
    goto LABEL_13; /*0x1010a064e*/
  }
  v9 = *(_QWORD *)&__dst[0].st_dev; /*0x1010a05d6*/
  if ( (*(_QWORD *)&__dst[0].st_dev & 0xF00000000000LL) != 0x800000000000LL ) /*0x1010a05f0*/
  {
LABEL_13:
    close_NOCANCEL(v8); /*0x1010a0667*/
    return 1; /*0x1010a0674*/
  }
  from_fd = v8; /*0x1010a05f9*/
  *(_QWORD *)to_fd = &from_fd; /*0x1010a0601*/
  if ( a4 > 0x17F ) /*0x1010a060c*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::h0ddb4d007f51cbc7( /*0x1010a0909*/
      (__int64)&v24,
      a3,
      a4,
      (__int64)to_fd,
      (__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64))std::sys::fs::unix::copy::_$u7b$$u7b$closure$u7d$$u7d$::h72093a4ebea54e6a);
    if ( v24 ) /*0x1010a0915*/
      goto LABEL_18; /*0x1010a0915*/
LABEL_42:
    v12 = 0; /*0x1010a091b*/
    goto LABEL_43; /*0x1010a091b*/
  }
  memcpy(__dst, a3, a4); /*0x1010a0622*/
  *((_BYTE *)&__dst[0].st_dev + a4) = 0; /*0x1010a0627*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v22, (__int64)__dst, a4 + 1); /*0x1010a063a*/
  if ( (_BYTE)v22 ) /*0x1010a0643*/
  {
    v10 = &off_1015AE3E8; /*0x1010a0645*/
  }
  else
  {
    v11 = 0; /*0x1010a0683*/
    if ( fclonefileat(**(_DWORD **)to_fd, -2, v23, 0) != -1 ) /*0x1010a0695*/
      goto LABEL_17; /*0x1010a0695*/
    v10 = (_UNKNOWN **)(((unsigned __int64)(unsigned int)*__error() << 32) | 2); /*0x1010a06a2*/
  }
  *(_QWORD *)&v26[2] = v10; /*0x1010a06a6*/
  v11 = 1; /*0x1010a06aa*/
LABEL_17:
  if ( !v11 ) /*0x1010a06b3*/
    goto LABEL_42; /*0x1010a06b3*/
LABEL_18:
  if ( (v26[2] & 3) == 2 && *(_DWORD *)&v26[6] <= 0x2Du ) /*0x1010a06dd*/
  {
    v12 = 1; /*0x1010a06df*/
    v13 = 0x200000060000LL; /*0x1010a06e5*/
    if ( _bittest64(&v13, *(unsigned int *)&v26[6]) ) /*0x1010a06ef*/
    {
      v14 = HIDWORD(v9); /*0x1010a06f9*/
      LODWORD(v27) = 0; /*0x1010a06fd*/
      *(_DWORD *)((char *)&v27 + 6) = 16777472; /*0x1010a0704*/
      v28 = 1; /*0x1010a070b*/
      WORD2(v27) = v14; /*0x1010a0711*/
      v20 = &v27; /*0x1010a0726*/
      if ( a4 > 0x17F ) /*0x1010a0734*/
      {
        std::sys::helpers::small_c_string::run_with_cstr_allocating::h0ddb4d007f51cbc7( /*0x1010a0956*/
          (__int64)to_fd,
          a3,
          a4,
          (__int64)&v20,
          (__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64))std::sys::fs::unix::File::open::_$u7b$$u7b$closure$u7d$$u7d$::h95c66e27a3b35b3f);
      }
      else
      {
        memcpy(__dst, a3, a4); /*0x1010a074a*/
        *((_BYTE *)&__dst[0].st_dev + a4) = 0; /*0x1010a074f*/
        core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v22, (__int64)__dst, a4 + 1); /*0x1010a0764*/
        if ( (_DWORD)v22 == 1 ) /*0x1010a076d*/
        {
          v30 = &off_1015AE3E8; /*0x1010a0776*/
          to_fd[0] = 1; /*0x1010a077a*/
        }
        else
        {
          std::sys::fs::unix::File::open_c::hea0cbe8efcfb1225((__int64)to_fd, v23, (__int64)&v27, 0.0); /*0x1010a078f*/
        }
      }
      if ( to_fd[0] != 1 ) /*0x1010a0798*/
      {
        v15 = to_fd[1]; /*0x1010a07a3*/
        memset(__dst, 0, 144); /*0x1010a07e1*/
        if ( fstat_INODE64(to_fd[1], __dst) == -1 ) /*0x1010a07f9*/
          goto LABEL_38; /*0x1010a07f9*/
        v21 = *(_QWORD *)&__dst[0].st_dev & 0xF00000000000LL; /*0x1010a0810*/
        if ( (*(_QWORD *)&__dst[0].st_dev & 0xF00000000000LL) == 0x800000000000LL ) /*0x1010a0821*/
        {
          while ( fchmod(v15, v14) == -1 ) /*0x1010a0834*/
          {
            if ( *__error() != 4 ) /*0x1010a0842*/
              goto LABEL_40; /*0x1010a0842*/
          }
        }
        v16 = copyfile_state_alloc(); /*0x1010a0849*/
        if ( !v16 ) /*0x1010a0851*/
        {
LABEL_38:
          __error(); /*0x1010a08c9*/
        }
        else
        {
          v17 = v16; /*0x1010a0853*/
          v18 = 8; /*0x1010a0869*/
          if ( v21 == 0x800000000000LL ) /*0x1010a086e*/
            v18 = 15; /*0x1010a086e*/
          if ( fcopyfile(from_fd, v15, v16, v18) != -1 ) /*0x1010a0881*/
          {
            *(_QWORD *)&__dst[0].st_dev = 0; /*0x1010a0883*/
            if ( copyfile_state_get(v17, 8u, __dst) != -1 ) /*0x1010a08a5*/
            {
              copyfile_state_free(v17); /*0x1010a08b1*/
              close_NOCANCEL(v15); /*0x1010a08b8*/
              close_NOCANCEL((unsigned int)from_fd); /*0x1010a08c0*/
              return 0; /*0x1010a08c7*/
            }
          }
          __error(); /*0x1010a08d3*/
          copyfile_state_free(v17); /*0x1010a08de*/
        }
LABEL_40:
        close_NOCANCEL(v15); /*0x1010a08e3*/
      }
    }
  }
  else
  {
    v12 = 1; /*0x1010a06c8*/
  }
LABEL_43:
  close_NOCANCEL((unsigned int)from_fd); /*0x1010a091e*/
  return v12; /*0x1010a092c*/
}