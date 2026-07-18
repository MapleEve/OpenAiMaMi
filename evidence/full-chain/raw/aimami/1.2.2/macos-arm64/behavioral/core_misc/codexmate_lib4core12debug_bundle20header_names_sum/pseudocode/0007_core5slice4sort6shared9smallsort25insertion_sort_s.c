// mac 1.2.2 NEW codexmate_lib4core12debug_bundle20header_names_sum 0x1005f06c0 d=1
_QWORD *__fastcall core::slice::sort::shared::smallsort::insertion_sort_shift_left::h1ccf5003f0715752(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax
  __int64 *v4; // r13
  const void *v5; // r15
  size_t v6; // r14
  size_t v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  size_t v12; // rdx
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // [rsp-48h] [rbp-48h]
  __int64 v16; // [rsp-40h] [rbp-40h]
  const void *v17; // [rsp-38h] [rbp-38h]

  result = (_QWORD *)(a3 - 1); /*0x1005f06c0*/
  if ( a3 - 1 >= a2 ) /*0x1005f06c7*/
    BUG(); /*0x1005f07f0*/
  if ( a3 != a2 ) /*0x1005f06d0*/
  {
    v16 = 24 * a3; /*0x1005f06fe*/
    v4 = &a1[3 * a3]; /*0x1005f0702*/
    do /*0x1005f072d*/
    {
      v5 = (const void *)v4[1]; /*0x1005f0733*/
      v6 = v4[2]; /*0x1005f0737*/
      v7 = *(v4 - 1); /*0x1005f073f*/
      v8 = v6 - v7; /*0x1005f0746*/
      if ( v6 < v7 ) /*0x1005f0749*/
        v7 = v4[2]; /*0x1005f0749*/
      result = (_QWORD *)memcmp((const void *)v4[1], (const void *)*(v4 - 2), v7); /*0x1005f0755*/
      if ( (_DWORD)result ) /*0x1005f0759*/
        v8 = (int)result; /*0x1005f0759*/
      if ( v8 < 0 ) /*0x1005f0760*/
      {
        v17 = v5; /*0x1005f0762*/
        v15 = *v4; /*0x1005f076a*/
        v9 = v16; /*0x1005f076e*/
        do /*0x1005f07d7*/
        {
          v10 = v9; /*0x1005f0780*/
          *(_QWORD *)((char *)a1 + v9 + 16) = *(_QWORD *)((char *)a1 + v9 - 8); /*0x1005f0788*/
          v11 = *(_QWORD *)((char *)a1 + v9 - 24); /*0x1005f078d*/
          *(_QWORD *)((char *)a1 + v10 + 8) = *(_QWORD *)((char *)a1 + v10 - 16); /*0x1005f0797*/
          *(_QWORD *)((char *)a1 + v10) = v11; /*0x1005f079c*/
          if ( v10 == 24 ) /*0x1005f07a4*/
          {
            result = a1; /*0x1005f0708*/
            goto LABEL_5; /*0x1005f0708*/
          }
          v12 = *(_QWORD *)((char *)a1 + v10 - 32); /*0x1005f07af*/
          v13 = v6 - v12; /*0x1005f07b7*/
          if ( v6 < v12 ) /*0x1005f07ba*/
            v12 = v6; /*0x1005f07ba*/
          v14 = memcmp(v17, *(const void **)((char *)a1 + v10 - 40), v12); /*0x1005f07c2*/
          if ( v14 ) /*0x1005f07cb*/
            v13 = v14; /*0x1005f07cb*/
          v9 = v10 - 24; /*0x1005f07cf*/
        }
        while ( v13 < 0 ); /*0x1005f07d7*/
        result = (_QWORD *)((char *)a1 + v9); /*0x1005f07d9*/
LABEL_5:
        *result = v15; /*0x1005f070b*/
        *(_QWORD *)((char *)a1 + v10 - 16) = v17; /*0x1005f0716*/
        *(_QWORD *)((char *)a1 + v10 - 8) = v6; /*0x1005f071b*/
      }
      v4 += 3; /*0x1005f0720*/
      v16 += 24; /*0x1005f0724*/
    }
    while ( v4 != &a1[3 * a2] ); /*0x1005f072d*/
  }
  return result; /*0x1005f07ef*/
}