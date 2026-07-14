// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1005f3960 depth=2
// core4iter6traits8iterator8Iterator5eq_by
bool __fastcall core::iter::traits::iterator::Iterator::eq_by::h77f76f8e43e3e623(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r14
  char v14; // r13
  void *v15; // rbx
  size_t v16; // r12
  void *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r14
  const void *v22; // rdi
  void *v23; // rbx
  _QWORD v25[8]; // [rsp+0h] [rbp-120h] BYREF
  _QWORD v26[8]; // [rsp+40h] [rbp-E0h] BYREF
  unsigned __int8 v27; // [rsp+80h] [rbp-A0h] BYREF
  unsigned __int8 v28; // [rsp+81h] [rbp-9Fh]
  void *__s2; // [rsp+88h] [rbp-98h]
  __int64 v30; // [rsp+90h] [rbp-90h]
  void *v31; // [rsp+98h] [rbp-88h]
  __int64 v32; // [rsp+A0h] [rbp-80h]
  _BYTE v33[8]; // [rsp+B8h] [rbp-68h] BYREF
  void *__s1; // [rsp+C0h] [rbp-60h]
  size_t __n; // [rsp+C8h] [rbp-58h]
  void *v36; // [rsp+D0h] [rbp-50h]
  size_t v37; // [rsp+D8h] [rbp-48h]
  size_t v38; // [rsp+F0h] [rbp-30h]

  v26[7] = a1[7]; /*0x1005f3978*/
  v26[6] = a1[6]; /*0x1005f3983*/
  v26[5] = a1[5]; /*0x1005f398e*/
  v26[4] = a1[4]; /*0x1005f3999*/
  v26[3] = a1[3]; /*0x1005f39a4*/
  v26[2] = a1[2]; /*0x1005f39af*/
  v6 = *a1; /*0x1005f39b6*/
  v26[1] = a1[1]; /*0x1005f39bd*/
  v26[0] = v6; /*0x1005f39c4*/
  v25[7] = a2[7]; /*0x1005f39cf*/
  v25[6] = a2[6]; /*0x1005f39da*/
  v25[5] = a2[5]; /*0x1005f39e5*/
  v25[4] = a2[4]; /*0x1005f39f0*/
  v25[3] = a2[3]; /*0x1005f39fb*/
  v25[2] = a2[2]; /*0x1005f3a06*/
  v7 = *a2; /*0x1005f3a0d*/
  v8 = a2[1]; /*0x1005f3a10*/
  v25[1] = v8; /*0x1005f3a14*/
  v25[0] = v7; /*0x1005f3a1b*/
  while ( 1 ) /*0x1005f3a2d*/
  {
    _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x1005f3a2d*/
      v33,
      v26,
      a3,
      v8,
      a5,
      a6);
    v13 = v33[0]; /*0x1005f3a32*/
    if ( v33[0] == 10 ) /*0x1005f3a3b*/
      break; /*0x1005f3a3b*/
    v14 = v33[1]; /*0x1005f3a41*/
    v15 = __s1; /*0x1005f3a46*/
    v16 = __n; /*0x1005f3a4a*/
    v17 = v36; /*0x1005f3a4e*/
    v38 = v37; /*0x1005f3a56*/
    _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x1005f3a68*/
      &v27,
      v25,
      v9,
      v10,
      v11,
      v12);
    v8 = v27; /*0x1005f3a6d*/
    if ( v27 == 10 ) /*0x1005f3a78*/
      return 0; /*0x1005f3a78*/
    v18 = v13; /*0x1005f3a7e*/
    v19 = v13 - 5LL; /*0x1005f3a82*/
    if ( v13 < 6u ) /*0x1005f3a8d*/
      v19 = 0; /*0x1005f3a8d*/
    v20 = v27 - 5LL; /*0x1005f3a91*/
    if ( v27 < 6u ) /*0x1005f3a98*/
      v20 = 0; /*0x1005f3a98*/
    if ( v19 != v20 ) /*0x1005f3a9f*/
      return 0; /*0x1005f3a9f*/
    a3 = v30; /*0x1005f3aac*/
    if ( v19 == 4 ) /*0x1005f3ab7*/
    {
LABEL_14:
      if ( v16 != v30 || memcmp(v15, __s2, v16) ) /*0x1005f3b0b*/
        return 0; /*0x1005f3b12*/
    }
    else if ( !v19 && v27 <= 5u ) /*0x1005f3ac5*/
    {
      if ( v13 == v27 ) /*0x1005f3ace*/
      {
        v8 = v28; /*0x1005f3ad4*/
        a5 = v31; /*0x1005f3adb*/
        v21 = v32; /*0x1005f3ae2*/
        switch ( v18 ) /*0x1005f3af4*/
        {
          case 0LL: /*0x1005f3af4*/
          case 3LL: /*0x1005f3af4*/
            goto LABEL_14;
          case 1LL: /*0x1005f3af4*/
          case 4LL: /*0x1005f3af4*/
            if ( v16 != v30 ) /*0x1005f3b1d*/
              return 0; /*0x1005f3b1d*/
            v22 = v15; /*0x1005f3b1f*/
            v23 = v31; /*0x1005f3b25*/
            if ( memcmp(v22, __s2, v16) || v38 != v21 || memcmp(v17, v23, v38) ) /*0x1005f3b41*/
              return 0; /*0x1005f3b48*/
            continue; /*0x1005f3b48*/
          case 2LL: /*0x1005f3af4*/
          case 5LL: /*0x1005f3af4*/
            if ( v14 != v28 ) /*0x1005f3b53*/
              return 0; /*0x1005f3b53*/
            continue; /*0x1005f3b53*/
        }
      }
      return 0; /*0x1005f3b5b*/
    }
  }
  _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x1005f3b6b*/
    &v27,
    v25,
    v9,
    v10,
    v11,
    v12);
  return v27 == 10; /*0x1005f3b7a*/
}