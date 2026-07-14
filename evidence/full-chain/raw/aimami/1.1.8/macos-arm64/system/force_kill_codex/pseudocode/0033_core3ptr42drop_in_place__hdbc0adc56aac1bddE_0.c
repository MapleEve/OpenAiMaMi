// mac 1.1.8 force_kill_codex node va=0x1001c7900 depth=3
// core3ptr42drop_in_place::hdbc0adc56aac1bddE_0
unsigned __int8 __fastcall core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // r13
  _QWORD *v9; // rax
  _BYTE *v10; // rdi
  __int64 v11; // rsi
  _BYTE *v12; // rdi
  __int64 v13; // rsi
  unsigned __int8 result; // al
  __int64 v15; // [rsp+8h] [rbp-88h] BYREF
  __int64 v16; // [rsp+18h] [rbp-78h]
  _QWORD v17[14]; // [rsp+20h] [rbp-70h] BYREF

  v2 = *(_QWORD *)(a1 + 136); /*0x1001c791b*/
  **(_BYTE **)(a1 + 128) = 0; /*0x1001c7922*/
  if ( v2 ) /*0x1001c7928*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c792f*/
  _$LT$std..sys..process..unix..common..cstring_array..CStringArray$u20$as$u20$core..ops..drop..Drop$GT$::drop::h592902080c93a71d(a1); /*0x1001c7937*/
  if ( *(_QWORD *)a1 ) /*0x1001c793c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c7951*/
  v3 = *(_QWORD *)(a1 + 96); /*0x1001c7956*/
  if ( v3 ) /*0x1001c795d*/
  {
    v4 = *(_QWORD *)(a1 + 104); /*0x1001c795f*/
    v5 = *(_QWORD *)(a1 + 112); /*0x1001c7963*/
    v17[1] = 0; /*0x1001c7967*/
    v17[2] = v3; /*0x1001c796f*/
    v17[3] = v4; /*0x1001c7973*/
    v17[5] = 0; /*0x1001c7977*/
    v17[6] = v3; /*0x1001c797f*/
    v17[7] = v4; /*0x1001c7983*/
    v6 = 1; /*0x1001c7987*/
  }
  else
  {
    v6 = 0; /*0x1001c798e*/
    v5 = 0; /*0x1001c7990*/
  }
  v17[0] = v6; /*0x1001c7992*/
  v17[4] = v6; /*0x1001c7996*/
  v17[8] = v5; /*0x1001c799a*/
  while ( 1 ) /*0x1001c79b6*/
  {
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h877cf5622139861f(&v15, v17); /*0x1001c79b6*/
    v7 = v15; /*0x1001c79bb*/
    if ( !v15 ) /*0x1001c79c5*/
      break; /*0x1001c79c5*/
    v8 = 3 * v16; /*0x1001c79cb*/
    if ( *(_QWORD *)(v15 + 24 * v16 + 8) ) /*0x1001c79cf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c79e7*/
    v9 = (_QWORD *)(v7 + 8 * v8 + 272); /*0x1001c79ec*/
    if ( !__OFSUB__(-*v9, 1) ) /*0x1001c79fd*/
    {
      if ( *v9 ) /*0x1001c79f7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c7a0a*/
    }
  }
  v10 = *(_BYTE **)(a1 + 144); /*0x1001c7a11*/
  if ( v10 ) /*0x1001c7a1b*/
  {
    v11 = *(_QWORD *)(a1 + 152); /*0x1001c7a1d*/
    *v10 = 0; /*0x1001c7a24*/
    if ( v11 ) /*0x1001c7a2a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c7a31*/
  }
  v12 = *(_BYTE **)(a1 + 160); /*0x1001c7a36*/
  if ( v12 ) /*0x1001c7a40*/
  {
    v13 = *(_QWORD *)(a1 + 168); /*0x1001c7a42*/
    *v12 = 0; /*0x1001c7a49*/
    if ( v13 ) /*0x1001c7a4f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c7a56*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfa89aadb3a713bf0(a1 + 24); /*0x1001c7a62*/
  if ( *(_QWORD *)(a1 + 24) ) /*0x1001c7a67*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c7a7c*/
  result = *(_QWORD *)(a1 + 176) == 0; /*0x1001c7a92*/
  if ( result | (*(_QWORD *)(a1 + 184) == 0) ) /*0x1001c7a9b*/
  {
    if ( *(_DWORD *)(a1 + 72) != 3 ) /*0x1001c7aa3*/
      goto LABEL_25; /*0x1001c7aa3*/
  }
  else
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c7ad0*/
    if ( *(_DWORD *)(a1 + 72) != 3 ) /*0x1001c7ad9*/
    {
LABEL_25:
      if ( *(_DWORD *)(a1 + 80) != 3 ) /*0x1001c7aa9*/
        goto LABEL_26; /*0x1001c7aa9*/
      goto LABEL_30; /*0x1001c7aa9*/
    }
  }
  result = close_NOCANCEL(*(unsigned int *)(a1 + 76)); /*0x1001c7ade*/
  if ( *(_DWORD *)(a1 + 80) != 3 ) /*0x1001c7ae7*/
  {
LABEL_26:
    if ( *(_DWORD *)(a1 + 88) != 3 ) /*0x1001c7aaf*/
      return result; /*0x1001c7aaf*/
    return close_NOCANCEL(*(unsigned int *)(a1 + 92)); /*0x1001c7aaf*/
  }
LABEL_30:
  result = close_NOCANCEL(*(unsigned int *)(a1 + 84)); /*0x1001c7ae9*/
  if ( *(_DWORD *)(a1 + 88) == 3 ) /*0x1001c7af5*/
    return close_NOCANCEL(*(unsigned int *)(a1 + 92)); /*0x1001c7ab1*/
  return result; /*0x1001c7ab4*/
}