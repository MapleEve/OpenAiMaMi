// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_created 0x1001cdb90 d=1
_QWORD *__fastcall alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(
        _QWORD *a1,
        unsigned __int16 **a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r14
  unsigned __int16 *v5; // rdi
  bool v6; // zf
  unsigned __int64 v7; // r12
  unsigned __int16 *v8; // rax
  __int64 v9; // r13
  unsigned __int16 *v10; // r15
  size_t v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  char v14; // cl
  __int64 v15; // rdi
  char *v16; // rbx
  __int64 v17; // rax
  _QWORD *result; // rax
  _QWORD *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24[32]; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v25[7]; // [rsp+20h] [rbp-C0h] BYREF
  _QWORD v26[4]; // [rsp+58h] [rbp-88h] BYREF
  __int64 v27; // [rsp+78h] [rbp-68h]
  unsigned __int16 *v28; // [rsp+80h] [rbp-60h]
  __int64 v29; // [rsp+88h] [rbp-58h]
  __int64 *v30; // [rsp+90h] [rbp-50h]
  unsigned __int16 *v31; // [rsp+98h] [rbp-48h]
  _QWORD *v32; // [rsp+A0h] [rbp-40h]
  _QWORD *v33; // [rsp+A8h] [rbp-38h]
  void *__s1; // [rsp+B0h] [rbp-30h]

  v33 = a4; /*0x1001cdba4*/
  v32 = a1; /*0x1001cdba8*/
  v5 = *a2; /*0x1001cdbac*/
  v6 = *a2 == nullptr; /*0x1001cdbaf*/
  v29 = (__int64)a2; /*0x1001cdbb2*/
  if ( v6 ) /*0x1001cdbb6*/
  {
    __s1 = *(void **)(a3 + 8); /*0x1001cdc9b*/
    v7 = *(_QWORD *)(a3 + 16); /*0x1001cdc9f*/
    v15 = 0; /*0x1001cdca3*/
    v17 = *(_QWORD *)a3; /*0x1001cdca5*/
    if ( !__OFSUB__(-*(_QWORD *)a3, 1) ) /*0x1001cdcae*/
    {
LABEL_21:
      v25[0] = v17; /*0x1001cdd1c*/
      v25[1] = (__int64)__s1; /*0x1001cdd27*/
      v25[2] = v7; /*0x1001cdd2e*/
      v25[3] = v29; /*0x1001cdd39*/
      v25[4] = v15; /*0x1001cdd40*/
      v25[5] = 0; /*0x1001cdd47*/
      v25[6] = v4; /*0x1001cdd52*/
      v26[3] = v33[3]; /*0x1001cdd61*/
      v26[2] = v33[2]; /*0x1001cdd69*/
      v23 = *v33; /*0x1001cdd6d*/
      v26[1] = v33[1]; /*0x1001cdd74*/
      v26[0] = v23; /*0x1001cdd78*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1001cdd94*/
        (__int64)v24,
        v25,
        v26);
      result = v32; /*0x1001cdd99*/
      *(_BYTE *)v32 = 6; /*0x1001cdd9d*/
      return result; /*0x1001cdd9d*/
    }
  }
  else
  {
    v28 = a2[1]; /*0x1001cdbc0*/
    __s1 = *(void **)(a3 + 8); /*0x1001cdbc8*/
    v30 = (__int64 *)a3; /*0x1001cdbcc*/
    v7 = *(_QWORD *)(a3 + 16); /*0x1001cdbd0*/
    while ( 2 ) /*0x1001cdbd4*/
    {
      v8 = v5 + 180; /*0x1001cdbd4*/
      v31 = v5; /*0x1001cdbdb*/
      v27 = v5[313]; /*0x1001cdbe6*/
      v9 = 3LL * (unsigned int)(8 * v27); /*0x1001cdbf1*/
      v4 = -1; /*0x1001cdbf5*/
      do /*0x1001cdc44*/
      {
        if ( !v9 ) /*0x1001cdc03*/
        {
          v4 = v27; /*0x1001cdc50*/
          goto LABEL_13; /*0x1001cdc50*/
        }
        v10 = v8 + 12; /*0x1001cdc05*/
        v11 = *((_QWORD *)v8 + 2); /*0x1001cdc0d*/
        v12 = v7 - v11; /*0x1001cdc14*/
        if ( v7 < v11 ) /*0x1001cdc17*/
          v11 = v7; /*0x1001cdc17*/
        v13 = memcmp(__s1, *((const void **)v8 + 1), v11); /*0x1001cdc1f*/
        if ( v13 ) /*0x1001cdc28*/
          v12 = v13; /*0x1001cdc28*/
        v14 = (v12 > 0) - (v12 < 0); /*0x1001cdc35*/
        ++v4; /*0x1001cdc37*/
        v9 -= 24; /*0x1001cdc3a*/
        v8 = v10; /*0x1001cdc3e*/
      }
      while ( v14 == 1 ); /*0x1001cdc44*/
      if ( !v14 ) /*0x1001cdc4b*/
      {
        v16 = (char *)v31; /*0x1001cdc81*/
        if ( *v30 ) /*0x1001cdc7b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001cdc90*/
        goto LABEL_19; /*0x1001cdc95*/
      }
LABEL_13:
      v15 = (__int64)v31; /*0x1001cdc54*/
      if ( v28 ) /*0x1001cdc60*/
      {
        v28 = (unsigned __int16 *)((char *)v28 - 1); /*0x1001cdc66*/
        v5 = *(unsigned __int16 **)&v31[4 * v4 + 316]; /*0x1001cdc6a*/
        continue; /*0x1001cdc72*/
      }
      break;
    }
    v17 = *v30; /*0x1001cdd11*/
    if ( !__OFSUB__(-*v30, 1) ) /*0x1001cdd1a*/
      goto LABEL_21; /*0x1001cdd1a*/
  }
  v16 = (char *)__s1; /*0x1001cdcb0*/
  v4 = v29; /*0x1001cdcb4*/
LABEL_19:
  result = v32; /*0x1001cdcb8*/
  v19 = v33; /*0x1001cdcbc*/
  v20 = 32 * v4; /*0x1001cdcc0*/
  v32[3] = *(_QWORD *)&v16[v20 + 24]; /*0x1001cdcc9*/
  result[2] = *(_QWORD *)&v16[v20 + 16]; /*0x1001cdcd2*/
  v21 = *(_QWORD *)&v16[v20]; /*0x1001cdcd6*/
  result[1] = *(_QWORD *)&v16[v20 + 8]; /*0x1001cdcdf*/
  *result = v21; /*0x1001cdce3*/
  v22 = v19[1]; /*0x1001cdce9*/
  *(_QWORD *)&v16[v20] = *v19; /*0x1001cdced*/
  *(_QWORD *)&v16[v20 + 8] = v22; /*0x1001cdcf1*/
  *(_QWORD *)&v16[v20 + 16] = v19[2]; /*0x1001cdcfa*/
  *(_QWORD *)&v16[v20 + 24] = v19[3]; /*0x1001cdd03*/
  return result; /*0x1001cdda0*/
}