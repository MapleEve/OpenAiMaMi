// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND responses_to_sse_payload node 0x1001cd290 depth=1
_QWORD *__fastcall alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rcx
  size_t v5; // r12
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r14
  size_t v10; // rdx
  __int64 v11; // r15
  int v12; // eax
  char v13; // cl
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-60h]
  void *__s1; // [rsp+8h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-30h]

  v3 = a1; /*0x1001cd2a1*/
  v4 = *a2; /*0x1001cd2a4*/
  if ( *a2 ) /*0x1001cd2a4*/
  {
    v21 = a2[1]; /*0x1001cd2bc*/
    __s1 = (void *)a3[1]; /*0x1001cd2c4*/
    v5 = a3[2]; /*0x1001cd2cc*/
    while ( 2 ) /*0x1001cd2d0*/
    {
      v6 = v4 + 360; /*0x1001cd2d0*/
      v20 = v4; /*0x1001cd2d7*/
      v17 = *(unsigned __int16 *)(v4 + 626); /*0x1001cd2e2*/
      v7 = 3LL * (unsigned int)(8 * v17); /*0x1001cd2ed*/
      v8 = -1; /*0x1001cd2f1*/
      do /*0x1001cd344*/
      {
        if ( !v7 ) /*0x1001cd303*/
        {
          v8 = v17; /*0x1001cd350*/
          goto LABEL_13; /*0x1001cd350*/
        }
        v9 = v6 + 24; /*0x1001cd305*/
        v10 = *(_QWORD *)(v6 + 16); /*0x1001cd30d*/
        v11 = v5 - v10; /*0x1001cd314*/
        if ( v5 < v10 ) /*0x1001cd317*/
          v10 = v5; /*0x1001cd317*/
        v12 = memcmp(__s1, *(const void **)(v6 + 8), v10); /*0x1001cd31f*/
        if ( v12 ) /*0x1001cd328*/
          v11 = v12; /*0x1001cd328*/
        v13 = (v11 > 0) - (v11 < 0); /*0x1001cd335*/
        ++v8; /*0x1001cd337*/
        v7 -= 24; /*0x1001cd33a*/
        v6 = v9; /*0x1001cd33e*/
      }
      while ( v13 == 1 ); /*0x1001cd344*/
      if ( !v13 ) /*0x1001cd34b*/
      {
        v3 = a1; /*0x1001cd377*/
        a1[1] = v20; /*0x1001cd37f*/
        a1[2] = v21; /*0x1001cd387*/
        a1[3] = v8; /*0x1001cd38b*/
        a1[4] = a2; /*0x1001cd393*/
        *a1 = 0x8000000000000000LL; /*0x1001cd3a1*/
        if ( *a3 ) /*0x1001cd3a8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001cd3b9*/
        return v3; /*0x1001cd3be*/
      }
LABEL_13:
      if ( v21 ) /*0x1001cd35c*/
      {
        --v21; /*0x1001cd362*/
        v4 = *(_QWORD *)(v20 + 8 * v8 + 632); /*0x1001cd36a*/
        continue; /*0x1001cd372*/
      }
      break;
    }
    v3 = a1; /*0x1001cd3fc*/
    a1[2] = a3[2]; /*0x1001cd400*/
    v16 = *a3; /*0x1001cd404*/
    a1[1] = a3[1]; /*0x1001cd40b*/
    *a1 = v16; /*0x1001cd40f*/
    a1[3] = a2; /*0x1001cd416*/
    a1[4] = v20; /*0x1001cd41e*/
    a1[5] = 0; /*0x1001cd422*/
    a1[6] = v8; /*0x1001cd42a*/
  }
  else
  {
    a1[2] = a3[2]; /*0x1001cd3c4*/
    v14 = *a3; /*0x1001cd3c8*/
    a1[1] = a3[1]; /*0x1001cd3cf*/
    *a1 = v14; /*0x1001cd3d3*/
    a1[3] = a2; /*0x1001cd3d6*/
    a1[4] = 0; /*0x1001cd3da*/
  }
  return v3; /*0x1001cd3e5*/
}