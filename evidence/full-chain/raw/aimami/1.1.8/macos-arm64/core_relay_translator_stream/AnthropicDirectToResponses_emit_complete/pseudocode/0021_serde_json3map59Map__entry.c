// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_complete 0x10105b930 d=2
_QWORD *__fastcall serde_json::map::Map$LT$alloc..string..String$C$serde_json..value..Value$GT$::entry::heb130057db8658a9(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // r14
  size_t v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbx
  size_t v9; // rdx
  __int64 v10; // r12
  int v11; // eax
  char v12; // cl
  _QWORD *v13; // rcx
  void *v14; // rbx
  _QWORD *result; // rax
  __int64 v16; // [rsp+0h] [rbp-60h]
  __int64 v17; // [rsp+8h] [rbp-58h]
  _QWORD *v18; // [rsp+10h] [rbp-50h]
  void *__s1; // [rsp+18h] [rbp-48h]
  size_t v20; // [rsp+20h] [rbp-40h]

  v17 = *a3; /*0x10105b948*/
  __s1 = (void *)a3[1]; /*0x10105b950*/
  v4 = a3[2]; /*0x10105b954*/
  v5 = *a2; /*0x10105b958*/
  if ( *a2 ) /*0x10105b958*/
  {
    v20 = a2[1]; /*0x10105b96c*/
LABEL_3:
    v6 = v5 + 360; /*0x10105b970*/
    v18 = (_QWORD *)v5; /*0x10105b977*/
    v16 = *(unsigned __int16 *)(v5 + 626); /*0x10105b982*/
    v7 = 3LL * (unsigned int)(8 * v16); /*0x10105b98d*/
    v3 = -1; /*0x10105b991*/
    do /*0x10105b9e4*/
    {
      if ( !v7 ) /*0x10105b9a3*/
      {
        v3 = v16; /*0x10105b9f0*/
LABEL_13:
        v13 = v18; /*0x10105b9f4*/
        if ( !v20 ) /*0x10105ba00*/
          goto LABEL_19; /*0x10105ba00*/
        --v20; /*0x10105ba02*/
        v5 = v18[v3 + 79]; /*0x10105ba06*/
        goto LABEL_3; /*0x10105ba0e*/
      }
      v8 = v6 + 24; /*0x10105b9a5*/
      v9 = *(_QWORD *)(v6 + 16); /*0x10105b9ad*/
      v10 = v4 - v9; /*0x10105b9b4*/
      if ( v4 < v9 ) /*0x10105b9b7*/
        v9 = v4; /*0x10105b9b7*/
      v11 = memcmp(__s1, *(const void **)(v6 + 8), v9); /*0x10105b9bf*/
      if ( v11 ) /*0x10105b9c8*/
        v10 = v11; /*0x10105b9c8*/
      v12 = (v10 > 0) - (v10 < 0); /*0x10105b9d5*/
      ++v3; /*0x10105b9d7*/
      v7 -= 24; /*0x10105b9da*/
      v6 = v8; /*0x10105b9de*/
    }
    while ( v12 == 1 ); /*0x10105b9e4*/
    if ( v12 ) /*0x10105b9eb*/
      goto LABEL_13; /*0x10105b9eb*/
    v14 = v18; /*0x10105ba1a*/
    v4 = v20; /*0x10105ba1e*/
    if ( v17 ) /*0x10105ba22*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10105ba2d*/
    result = a1; /*0x10105ba32*/
    v13 = a2; /*0x10105ba36*/
    goto LABEL_21; /*0x10105ba3a*/
  }
  v13 = nullptr; /*0x10105ba3c*/
LABEL_19:
  if ( v17 == 0x8000000000000000LL ) /*0x10105ba4f*/
  {
    v14 = __s1; /*0x10105ba51*/
    v3 = (__int64)a2; /*0x10105ba55*/
    result = a1; /*0x10105ba59*/
LABEL_21:
    result[1] = v14; /*0x10105ba5d*/
    result[2] = v4; /*0x10105ba61*/
    result[3] = v3; /*0x10105ba65*/
    result[4] = v13; /*0x10105ba69*/
    *result = 0x8000000000000000LL; /*0x10105ba77*/
    return result; /*0x10105ba7a*/
  }
  *a1 = v17; /*0x10105ba80*/
  a1[1] = __s1; /*0x10105ba87*/
  a1[2] = v4; /*0x10105ba8b*/
  a1[3] = a2; /*0x10105ba93*/
  a1[4] = v13; /*0x10105ba97*/
  a1[5] = 0; /*0x10105ba9b*/
  a1[6] = v3; /*0x10105baa3*/
  return a1; /*0x10105baa7*/
}