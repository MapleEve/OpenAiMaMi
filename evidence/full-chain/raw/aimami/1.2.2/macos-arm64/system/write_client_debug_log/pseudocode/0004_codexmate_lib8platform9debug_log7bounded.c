// mac 1.2.2 NEW write_client_debug_log 0x1008cada0 d=2
_QWORD *__fastcall codexmate_lib::platform::debug_log::bounded::ha93dbbea7494d98b(
        _QWORD *a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 *v4; // r13
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned int v8; // r12d
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  char v14; // dl
  unsigned int v15; // esi
  char v16; // si
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v20; // rdx
  unsigned __int8 *v21; // [rsp+8h] [rbp-48h]
  __int64 v22; // [rsp+10h] [rbp-40h] BYREF
  __int64 v23; // [rsp+18h] [rbp-38h]
  __int64 v24; // [rsp+20h] [rbp-30h]

  v22 = 0; /*0x1008cadb5*/
  v23 = 1; /*0x1008cadbd*/
  v24 = 0; /*0x1008cadc5*/
  if ( !a3 ) /*0x1008cadd4*/
    goto LABEL_31; /*0x1008cadd4*/
  v4 = a2; /*0x1008caddd*/
  v21 = &a2[a3]; /*0x1008cade0*/
  v5 = a4 + 1; /*0x1008cade4*/
  v6 = 1; /*0x1008cade7*/
  v7 = 0; /*0x1008cadec*/
  while ( 1 ) /*0x1008cae15*/
  {
    v8 = *v4; /*0x1008cae15*/
    if ( (v8 & 0x80u) == 0 ) /*0x1008cae1d*/
    {
      ++v4; /*0x1008cae1f*/
      if ( !--v5 ) /*0x1008cae25*/
        goto LABEL_28; /*0x1008cae25*/
      goto LABEL_16; /*0x1008cae25*/
    }
    v9 = v8 & 0x1F; /*0x1008cae33*/
    v10 = v4[1] & 0x3F; /*0x1008cae3b*/
    if ( (unsigned __int8)v8 <= 0xDFu ) /*0x1008cae42*/
    {
      v4 += 2; /*0x1008cae8d*/
      v8 = v10 | (v9 << 6); /*0x1008cae96*/
      if ( !--v5 ) /*0x1008cae9c*/
        goto LABEL_28; /*0x1008cae9c*/
      goto LABEL_16; /*0x1008cae9c*/
    }
    v11 = (v10 << 6) | v4[2] & 0x3F; /*0x1008cae53*/
    if ( (unsigned __int8)v8 >= 0xF0u ) /*0x1008cae59*/
      break; /*0x1008cae59*/
    v8 = (v9 << 12) | v11; /*0x1008caea8*/
    v4 += 3; /*0x1008caeab*/
    if ( !--v5 ) /*0x1008caeb1*/
      goto LABEL_28; /*0x1008caeb1*/
LABEL_16:
    v12 = 1; /*0x1008caec0*/
    if ( v8 >= 0x80 ) /*0x1008caecc*/
    {
      v12 = 2; /*0x1008caece*/
      if ( v8 >= 0x800 ) /*0x1008caeda*/
        v12 = 4LL - (v8 < 0x10000); /*0x1008caee8*/
    }
    v13 = v7; /*0x1008caef3*/
    if ( v12 > v22 - v7 ) /*0x1008caef9*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e(&v22, v7, v12, 1, 1); /*0x1008cafa6*/
      v6 = v23; /*0x1008cafab*/
      v13 = v24; /*0x1008cafaf*/
      if ( v8 >= 0x80 ) /*0x1008cafbe*/
      {
LABEL_21:
        v14 = v8 & 0x3F | 0x80; /*0x1008caf0c*/
        v15 = v8 >> 6; /*0x1008caf18*/
        if ( v8 >= 0x800 ) /*0x1008caf22*/
        {
          v16 = v15 & 0x3F | 0x80; /*0x1008caf44*/
          v17 = v8 >> 12; /*0x1008caf4b*/
          if ( v8 > 0xFFFF ) /*0x1008caf56*/
          {
            *(_BYTE *)(v6 + v13) = (v8 >> 18) | 0xF0; /*0x1008caf7e*/
            *(_BYTE *)(v6 + v13 + 1) = v17 & 0x3F | 0x80; /*0x1008caf82*/
            *(_BYTE *)(v6 + v13 + 2) = v16; /*0x1008caf87*/
            *(_BYTE *)(v6 + v13 + 3) = v14; /*0x1008caf8c*/
          }
          else
          {
            *(_BYTE *)(v6 + v13) = v17 | 0xE0; /*0x1008caf5c*/
            *(_BYTE *)(v6 + v13 + 1) = v16; /*0x1008caf60*/
            *(_BYTE *)(v6 + v13 + 2) = v14; /*0x1008caf65*/
          }
        }
        else
        {
          *(_BYTE *)(v6 + v13) = v15 | 0xC0; /*0x1008caf28*/
          *(_BYTE *)(v6 + v13 + 1) = v14; /*0x1008caf2c*/
        }
        goto LABEL_4; /*0x1008caf30*/
      }
    }
    else if ( v8 >= 0x80 ) /*0x1008caf06*/
    {
      goto LABEL_21; /*0x1008caf06*/
    }
    *(_BYTE *)(v6 + v13) = v8; /*0x1008cae00*/
LABEL_4:
    v7 += v12; /*0x1008cae04*/
    v24 = v7; /*0x1008cae07*/
    if ( v4 == v21 ) /*0x1008cae0f*/
      goto LABEL_31; /*0x1008cae0f*/
  }
  v8 = ((v8 & 7) << 18) | (v11 << 6) | v4[3] & 0x3F; /*0x1008cae6f*/
  if ( v8 == 1114112 ) /*0x1008cae79*/
    goto LABEL_31; /*0x1008cae79*/
  v4 += 4; /*0x1008cae7f*/
  if ( --v5 ) /*0x1008cae86*/
    goto LABEL_16; /*0x1008cae86*/
LABEL_28:
  if ( (unsigned __int64)(v22 - v7) <= 0xD ) /*0x1008cafd4*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e(&v22, v7, 14, 1, 1); /*0x1008cb040*/
    v7 = v24; /*0x1008cb045*/
  }
  v18 = v23; /*0x1008cafd6*/
  *(_QWORD *)(v23 + v7 + 6) = 0x5D64657461636E75LL; /*0x1008cafe4*/
  *(_QWORD *)(v18 + v7) = 0x6E7572745B2E2E2ELL; /*0x1008caff3*/
  v24 = v7 + 14; /*0x1008caffb*/
LABEL_31:
  a1[2] = v24; /*0x1008cafff*/
  v20 = v22; /*0x1008cb00b*/
  a1[1] = v23; /*0x1008cb013*/
  *a1 = v20; /*0x1008cb017*/
  return a1; /*0x1008cb01a*/
}