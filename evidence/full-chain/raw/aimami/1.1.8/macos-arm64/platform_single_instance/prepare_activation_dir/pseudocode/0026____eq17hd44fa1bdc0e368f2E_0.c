// mac 1.1.8 BEHAVIORAL-BACKEND prepare_activation_dir node 0x1010cb130 depth=3
// _::eq17hd44fa1bdc0e368f2E_0
char __fastcall _$LT$std..path..Component$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd44fa1bdc0e368f2(
        unsigned __int8 *a1,
        unsigned __int8 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r8
  char result; // al
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  size_t v7; // rdx
  const void *v8; // rsi
  const void *v9; // rdi
  size_t v11; // rdx

  v2 = *a1; /*0x1010cb137*/
  v3 = v2 - 5; /*0x1010cb13a*/
  result = 0; /*0x1010cb13e*/
  if ( v2 < 6 ) /*0x1010cb144*/
    v3 = 0; /*0x1010cb144*/
  v5 = *a2; /*0x1010cb148*/
  v6 = v5 - 5; /*0x1010cb14b*/
  if ( v5 < 6 ) /*0x1010cb153*/
    v6 = 0; /*0x1010cb153*/
  if ( v3 == v6 ) /*0x1010cb15a*/
  {
    result = 1; /*0x1010cb15c*/
    if ( v3 ) /*0x1010cb161*/
    {
      if ( v3 != 4 ) /*0x1010cb167*/
        return result; /*0x1010cb167*/
LABEL_8:
      v7 = *((_QWORD *)a1 + 2); /*0x1010cb169*/
      if ( v7 == *((_QWORD *)a2 + 2) ) /*0x1010cb171*/
      {
        v8 = *((const void **)a2 + 1); /*0x1010cb173*/
        v9 = *((const void **)a1 + 1); /*0x1010cb177*/
        return memcmp(v9, v8, v7) == 0; /*0x1010cb182*/
      }
    }
    else
    {
      if ( (unsigned __int8)v5 > 5u ) /*0x1010cb18d*/
        return result; /*0x1010cb18d*/
      if ( (_BYTE)v2 == (_BYTE)v5 ) /*0x1010cb191*/
      {
        switch ( *a1 ) /*0x1010cb1a3*/
        {
          case 0u: /*0x1010cb1a3*/
          case 3u: /*0x1010cb1a3*/
            goto LABEL_8;
          case 1u: /*0x1010cb1a3*/
          case 4u: /*0x1010cb1a3*/
            v11 = *((_QWORD *)a1 + 2); /*0x1010cb1a5*/
            if ( v11 != *((_QWORD *)a2 + 2) ) /*0x1010cb1ad*/
              return 0; /*0x1010cb1ad*/
            if ( memcmp(*((const void **)a1 + 1), *((const void **)a2 + 1), v11) ) /*0x1010cb1bd*/
              return 0; /*0x1010cb1bd*/
            v7 = *((_QWORD *)a1 + 4); /*0x1010cb1c6*/
            if ( v7 != *((_QWORD *)a2 + 4) ) /*0x1010cb1ce*/
              return 0; /*0x1010cb1ce*/
            v8 = *((const void **)a2 + 3); /*0x1010cb1d0*/
            v9 = *((const void **)a1 + 3); /*0x1010cb1d4*/
            break; /*0x1010cb1d8*/
          case 2u: /*0x1010cb1a3*/
          case 5u: /*0x1010cb1a3*/
            return a1[1] == a2[1]; /*0x1010cb1e8*/
        }
        return memcmp(v9, v8, v7) == 0; /*0x1010cb1d8*/
      }
    }
    return 0; /*0x1010cb1da*/
  }
  return result; /*0x1010cb185*/
}