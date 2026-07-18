// mac 1.2.2 NEW codexmate_lib4core12debug_bundle20header_names_sum 0x1008e7580 d=1
void __fastcall alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::hf75b2df030a9d998(__int64 a1)
{
  unsigned __int64 v1; // r15
  __int64 *v2; // r13
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  size_t v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // r12
  size_t v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16); /*0x1008e7595*/
  if ( v1 >= 2 ) /*0x1008e759d*/
  {
    v11 = *(_QWORD *)(a1 + 8); /*0x1008e75ab*/
    v2 = (__int64 *)(v11 + 48); /*0x1008e75af*/
    v3 = 2; /*0x1008e75bb*/
    while ( 1 ) /*0x1008e75e6*/
    {
      v5 = *(v2 - 1); /*0x1008e75e6*/
      if ( v5 == *(v2 - 4) && !memcmp((const void *)*(v2 - 2), (const void *)*(v2 - 5), v5) ) /*0x1008e75fb*/
        break; /*0x1008e75fb*/
      v2 += 3; /*0x1008e75d0*/
      v4 = 1 - v1 + v3++ + 1; /*0x1008e75d4*/
      if ( v4 == 2 ) /*0x1008e75e0*/
        return; /*0x1008e75e0*/
    }
    if ( *(v2 - 3) ) /*0x1008e7604*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008e7615*/
    v6 = v3 - 1; /*0x1008e761a*/
    if ( v1 > v3 ) /*0x1008e7622*/
    {
      v7 = v1 - v3; /*0x1008e7624*/
      do /*0x1008e7654*/
      {
        v9 = (_QWORD *)(v11 + 24 * v6); /*0x1008e765e*/
        v10 = v2[2]; /*0x1008e7662*/
        if ( v10 == *(v9 - 1) && !memcmp((const void *)v2[1], (const void *)*(v9 - 2), v10) ) /*0x1008e7679*/
        {
          if ( *v2 ) /*0x1008e7682*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008e7693*/
        }
        else
        {
          v9[2] = v2[2]; /*0x1008e7634*/
          v8 = *v2; /*0x1008e7639*/
          v9[1] = v2[1]; /*0x1008e7641*/
          *v9 = v8; /*0x1008e7646*/
          ++v6; /*0x1008e764a*/
        }
        v2 += 3; /*0x1008e764d*/
        --v7; /*0x1008e7651*/
      }
      while ( v7 ); /*0x1008e7654*/
    }
    *(_QWORD *)(a1 + 16) = v6; /*0x1008e769e*/
  }
}