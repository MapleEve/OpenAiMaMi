// __ZN13codexmate_lib4core3mcp24parse_mcp_section_header @ 0x10084ba90 | 基线 same-set
void __fastcall codexmate_lib::core::mcp::parse_mcp_section_header::hea0ffbf53ee9ae95(
        signed __int64 *a1,
        __int64 a2,
        char *a3)
{
  char *v3; // r14
  __int64 v4; // rbx
  unsigned __int8 *v5; // rax
  unsigned __int8 *v6; // rsi
  __int64 v7; // rcx
  unsigned __int8 *v8; // r13
  int v9; // r9d
  unsigned __int8 *v10; // r8
  int v11; // r10d
  int v12; // r15d
  int v13; // r11d
  __int64 v15; // rcx
  void *v16; // r12
  unsigned __int64 v17; // r14
  signed __int64 v18; // rbx
  __int64 v19; // r13
  void *v20; // rax
  void *v21; // rdi
  signed __int64 v22; // r12
  __int64 v23; // rdi
  char *v24; // r12
  __int64 v25; // rdx
  void *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  char *v29; // r12
  const void *v30; // rsi
  signed __int64 *v31; // rax
  signed __int64 v32; // rcx
  _QWORD v33[8]; // [rsp+0h] [rbp-C0h] BYREF
  char v34; // [rsp+40h] [rbp-80h]
  __int16 v35; // [rsp+48h] [rbp-78h]
  _QWORD v36[3]; // [rsp+50h] [rbp-70h] BYREF
  signed __int64 v37; // [rsp+68h] [rbp-58h]
  __int64 v38; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-48h]
  void *__dst; // [rsp+80h] [rbp-40h]
  signed __int64 *v41; // [rsp+88h] [rbp-38h]
  void *__src; // [rsp+90h] [rbp-30h]

  if ( (unsigned __int64)a3 < 0xC ) /*0x10084baa8*/
    goto LABEL_3; /*0x10084baa8*/
  if ( *(_QWORD *)a2 ^ 0x767265735F70636DLL | *(unsigned int *)(a2 + 8) ^ 0x2E737265LL ) /*0x10084bac1*/
    goto LABEL_3; /*0x10084bac1*/
  v3 = a3 - 12; /*0x10084bae8*/
  if ( a3 == (char *)12 ) /*0x10084baec*/
    goto LABEL_3; /*0x10084baec*/
  v4 = a2 + 12; /*0x10084baee*/
  if ( *(_BYTE *)(a2 + 12) != 34 ) /*0x10084baf5*/
  {
    v33[0] = 2; /*0x10084bbee*/
    v33[1] = 0; /*0x10084bbf9*/
    v33[2] = a3 - 12; /*0x10084bc04*/
    v33[3] = a2 + 12; /*0x10084bc0b*/
    v33[4] = a3 - 12; /*0x10084bc12*/
    v33[5] = 0; /*0x10084bc19*/
    v33[6] = a3 - 12; /*0x10084bc24*/
    v33[7] = 0x2E0000002ELL; /*0x10084bc35*/
    v34 = 1; /*0x10084bc3c*/
    v35 = 1; /*0x10084bc40*/
    ((void (__fastcall *)(__int64 *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc47db020a33319c8)( /*0x10084bc51*/
      &v38,
      v33);
    v16 = __dst; /*0x10084bc56*/
    if ( !__dst ) /*0x10084bc5d*/
      core::panicking::panic_bounds_check::h56740b1198b22635(0, 0, &off_10196C770, v15); /*0x10084be7a*/
    v17 = v39; /*0x10084bc63*/
    v18 = *(_QWORD *)(v39 + 8); /*0x10084bc67*/
    if ( v18 < 0 ) /*0x10084bc6e*/
    {
      v19 = 0; /*0x10084bc70*/
      goto LABEL_27; /*0x10084bc70*/
    }
    if ( !v18 ) /*0x10084bc83*/
    {
      *a1 = 0x8000000000000000LL; /*0x10084bcdb*/
      goto LABEL_45; /*0x10084bcde*/
    }
    __src = *(void **)v39; /*0x10084bc88*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v38, v33); /*0x10084bc8c*/
    v19 = 1; /*0x10084bc91*/
    v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v18, 1); /*0x10084bc9f*/
    if ( !v20 ) /*0x10084bca7*/
LABEL_27:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v18); /*0x10084bc73*/
    v37 = (signed __int64)v20; /*0x10084bca9*/
    v21 = v20; /*0x10084bcad*/
    memcpy(v20, __src, v18); /*0x10084bcb7*/
    if ( v16 == (void *)1 ) /*0x10084bcc0*/
    {
      v22 = 0x8000000000000000LL; /*0x10084bcc2*/
LABEL_44:
      *a1 = v18; /*0x10084bd77*/
      a1[1] = v37; /*0x10084bd7e*/
      a1[2] = v18; /*0x10084bd82*/
      a1[3] = v22; /*0x10084bd86*/
      a1[4] = v19; /*0x10084bd8a*/
      a1[5] = v22; /*0x10084bd8e*/
LABEL_45:
      if ( v38 ) /*0x10084bd99*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 16 * v38, 8); /*0x10084bdab*/
      return; /*0x10084bdb0*/
    }
    v22 = *(_QWORD *)(v17 + 24); /*0x10084bce3*/
    if ( v22 < 0 ) /*0x10084bcea*/
    {
      v23 = 0; /*0x10084bcec*/
      goto LABEL_35; /*0x10084bcec*/
    }
    v26 = *(void **)(v17 + 16); /*0x10084bd3f*/
    if ( v22 ) /*0x10084bd43*/
    {
      __src = *(void **)(v17 + 16); /*0x10084bd45*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v26); /*0x10084bd49*/
      v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1); /*0x10084bd56*/
      v23 = 1; /*0x10084bd5b*/
      if ( !v27 ) /*0x10084bd63*/
LABEL_35:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, v22); /*0x10084bcee*/
      v19 = v27; /*0x10084bd65*/
      v26 = __src; /*0x10084bd68*/
    }
    memcpy((void *)v19, v26, v22); /*0x10084bd72*/
    goto LABEL_44; /*0x10084bd72*/
  }
  if ( a3 == (char *)13 ) /*0x10084baff*/
  {
LABEL_3:
    *a1 = 0x8000000000000000LL; /*0x10084bac6*/
    return; /*0x10084bad0*/
  }
  v5 = (unsigned __int8 *)&a3[a2]; /*0x10084bb01*/
  v6 = (unsigned __int8 *)(a2 + 13); /*0x10084bb05*/
  v7 = 0; /*0x10084bb09*/
  v8 = nullptr; /*0x10084bb0b*/
  while ( 1 ) /*0x10084bb21*/
  {
    v9 = *v6; /*0x10084bb21*/
    if ( (v9 & 0x80u) == 0 ) /*0x10084bb28*/
    {
      v10 = v6 + 1; /*0x10084bb2a*/
      if ( (v7 & 1) == 0 ) /*0x10084bb31*/
        goto LABEL_21; /*0x10084bb31*/
      goto LABEL_9; /*0x10084bb31*/
    }
    v11 = v9 & 0x1F; /*0x10084bb43*/
    v12 = v6[1] & 0x3F; /*0x10084bb4c*/
    if ( (unsigned __int8)v9 > 0xDFu ) /*0x10084bb54*/
      break; /*0x10084bb54*/
    v10 = v6 + 2; /*0x10084bb92*/
    v9 = v12 | (v11 << 6); /*0x10084bb9d*/
    if ( (v7 & 1) == 0 ) /*0x10084bba3*/
      goto LABEL_21; /*0x10084bba3*/
LABEL_9:
    LOBYTE(v7) = v7 ^ 1; /*0x10084bb10*/
LABEL_10:
    v8 = &v10[v8 - v6]; /*0x10084bb13*/
    v6 = v10; /*0x10084bb19*/
    if ( v10 == v5 ) /*0x10084bb1f*/
      goto LABEL_3; /*0x10084bb1f*/
  }
  v13 = (v12 << 6) | v6[2] & 0x3F; /*0x10084bb63*/
  if ( (unsigned __int8)v9 >= 0xF0u ) /*0x10084bb6a*/
  {
    v10 = v6 + 4; /*0x10084bb6c*/
    v9 = ((v9 & 7) << 18) | (v13 << 6) | v6[3] & 0x3F; /*0x10084bb88*/
    if ( (v7 & 1) == 0 ) /*0x10084bb8e*/
      goto LABEL_21; /*0x10084bb8e*/
    goto LABEL_9; /*0x10084bb8e*/
  }
  v10 = v6 + 3; /*0x10084bbab*/
  v9 = (v11 << 12) | v13; /*0x10084bbb6*/
  if ( (v7 & 1) != 0 ) /*0x10084bbbc*/
    goto LABEL_9; /*0x10084bbbc*/
LABEL_21:
  if ( v9 == 92 ) /*0x10084bbd4*/
    goto LABEL_9; /*0x10084bbd4*/
  if ( v9 != 34 ) /*0x10084bbde*/
  {
    v7 = 0; /*0x10084bbe4*/
    goto LABEL_10; /*0x10084bbe6*/
  }
  if ( v8 == (unsigned __int8 *)-2LL ) /*0x10084bcff*/
    core::str::traits::str_index_overflow_fail::h4aabc2a2e83a537e(&off_10196C788, v6, a3, v7, v10); /*0x10084be5c*/
  v24 = (char *)(v8 + 2); /*0x10084bd05*/
  v41 = a1; /*0x10084bd0c*/
  __src = a3; /*0x10084bd10*/
  if ( v8 + 2 >= (unsigned __int8 *)v3 ) /*0x10084bd14*/
  {
    v25 = (__int64)(a3 - 12); /*0x10084bdb5*/
    if ( v8 + 2 != (unsigned __int8 *)v3 ) /*0x10084bdb8*/
LABEL_39:
      core::str::slice_error_fail::h480e51fbd8b15eba(v4, v3, 0, v8 + 2, &off_10196C788); /*0x10084bd28*/
  }
  else
  {
    v25 = (__int64)(v8 + 2); /*0x10084bd1f*/
    if ( v24[v4] <= -65 ) /*0x10084bd22*/
      goto LABEL_39; /*0x10084bd22*/
  }
  v28 = 0x8000000000000000LL; /*0x10084bdbe*/
  codexmate_lib::core::mcp::unquote_toml::h70fff5d5dbeccb7a(v36, v4, v25); /*0x10084bdcf*/
  if ( v3 != v24 ) /*0x10084bdd7*/
  {
    v4 += (__int64)v24; /*0x10084bdd9*/
    if ( *(_BYTE *)v4 == 46 ) /*0x10084bddf*/
    {
      v29 = (char *)((_BYTE *)__src - v8 - 15); /*0x10084bdfb*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v38, v29, 0, 1, 1); /*0x10084be00*/
      v28 = v39; /*0x10084be05*/
      if ( (_BYTE)v38 ) /*0x10084be0d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v39, __dst); /*0x10084be68*/
      v3 = (char *)__dst; /*0x10084be12*/
      v30 = (const void *)(v4 + 1); /*0x10084be19*/
      v4 = (__int64)v29; /*0x10084be1c*/
      memcpy(__dst, v30, (size_t)v29); /*0x10084be22*/
    }
  }
  v31 = v41; /*0x10084be29*/
  v41[2] = v36[2]; /*0x10084be31*/
  v32 = v36[0]; /*0x10084be35*/
  v31[1] = v36[1]; /*0x10084be3d*/
  *v31 = v32; /*0x10084be41*/
  v31[3] = v28; /*0x10084be44*/
  v31[4] = (signed __int64)v3; /*0x10084be48*/
  v31[5] = v4; /*0x10084be4c*/
}