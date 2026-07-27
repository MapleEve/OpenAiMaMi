// __ZN13codexmate_lib4core4auth21account_snapshot_path @ 0x1008efb20
// 1.2.3 NEW-delta | codexmate_lib::core::auth::account_snapshot_path | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 *__fastcall codexmate_lib::core::auth::account_snapshot_path::hba769e00197999ad(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        size_t a5,
        __int64 a6)
{
  unsigned __int8 *v6; // r13
  unsigned __int8 *v8; // r14
  __int64 v9; // rax
  unsigned int v10; // r10d
  int v11; // r11d
  int v12; // edi
  unsigned __int64 v13; // rdi
  __int64 v15; // r8
  size_t v16; // r12
  __int64 v17; // rbx
  unsigned __int8 *v18; // rax
  __int64 v19; // r15
  int v20; // ecx
  int v21; // edx
  int v22; // edi
  int v23; // esi
  unsigned int v24; // ecx
  int v25; // eax
  size_t v26; // r15
  size_t v27; // r12
  size_t v28; // rbx
  __int64 *v29; // r13
  char *v30; // rax
  __int64 v31; // r12
  __int64 v32; // r15
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // r12
  __int64 v38; // r15
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // r13
  __int64 v44; // r14
  __int64 v45; // rsi
  __int64 v46; // rbx
  char *v47; // r15
  char v48; // al
  size_t v49; // r14
  __int64 v50; // rax
  size_t v51; // rbx
  void *v52; // r14
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-290h] BYREF
  void *v56[18]; // [rsp+8h] [rbp-288h] BYREF
  _QWORD __src[22]; // [rsp+98h] [rbp-1F8h] BYREF
  _QWORD __dst[22]; // [rsp+148h] [rbp-148h] BYREF
  __int64 v59; // [rsp+1F8h] [rbp-98h] BYREF
  __int64 v60; // [rsp+200h] [rbp-90h]
  __int64 v61; // [rsp+208h] [rbp-88h]
  __int64 v62; // [rsp+210h] [rbp-80h]
  __int64 v63; // [rsp+218h] [rbp-78h]
  __int64 v64; // [rsp+220h] [rbp-70h]
  __int64 *v65; // [rsp+228h] [rbp-68h]
  __int64 v66; // [rsp+230h] [rbp-60h]
  size_t __n; // [rsp+238h] [rbp-58h]
  __int64 v68; // [rsp+240h] [rbp-50h] BYREF
  __int64 v69; // [rsp+248h] [rbp-48h]
  __int64 v70; // [rsp+250h] [rbp-40h]
  void *__s2; // [rsp+258h] [rbp-38h]
  __int64 v72; // [rsp+260h] [rbp-30h]

  v6 = a4; /*0x1008efb34*/
  if ( a5 > 0xB4 ) /*0x1008efb41*/
  {
LABEL_19:
    codexmate_lib::core::auth::hashed_account_snapshot_path::h7cd1d09406fd5673(a1, a2, a3, v6, a5); /*0x1008efc40*/
    return a1; /*0x1008efc5f*/
  }
  v8 = &a4[a5]; /*0x1008efb47*/
  v9 = 0x400000034002101LL; /*0x1008efb4c*/
  while ( a4 != v8 ) /*0x1008efb6d*/
  {
    v10 = *a4; /*0x1008efb73*/
    if ( (v10 & 0x80u) != 0 ) /*0x1008efb7a*/
    {
      v11 = v10 & 0x1F; /*0x1008efb93*/
      a6 = a4[1] & 0x3F; /*0x1008efb9c*/
      if ( (unsigned __int8)v10 <= 0xDFu ) /*0x1008efba4*/
      {
        a4 += 2; /*0x1008efbed*/
        v10 = a6 | (v11 << 6); /*0x1008efbf8*/
        if ( v10 < 0x20 ) /*0x1008efbff*/
          goto LABEL_19; /*0x1008efbff*/
      }
      else
      {
        a6 = (unsigned int)((_DWORD)a6 << 6); /*0x1008efbaa*/
        v12 = a6 | a4[2] & 0x3F; /*0x1008efbb1*/
        if ( (unsigned __int8)v10 < 0xF0u ) /*0x1008efbb8*/
        {
          a4 += 3; /*0x1008efc03*/
          v10 = (v11 << 12) | v12; /*0x1008efc0e*/
          if ( v10 < 0x20 ) /*0x1008efc15*/
            goto LABEL_19; /*0x1008efc15*/
        }
        else
        {
          v10 = ((v10 & 7) << 18) | (v12 << 6) | a4[3] & 0x3F; /*0x1008efbd1*/
          if ( v10 == 1114112 ) /*0x1008efbdb*/
            break; /*0x1008efbdb*/
          a4 += 4; /*0x1008efbe1*/
          if ( v10 < 0x20 ) /*0x1008efbe9*/
            goto LABEL_19; /*0x1008efbe9*/
        }
      }
    }
    else
    {
      ++a4; /*0x1008efb7c*/
      if ( v10 < 0x20 ) /*0x1008efb83*/
        goto LABEL_19; /*0x1008efb83*/
    }
    if ( v10 - 127 < 0x21 ) /*0x1008efc27*/
      goto LABEL_19; /*0x1008efc27*/
    v13 = v10 - 34; /*0x1008efc29*/
    if ( (unsigned int)v13 <= 0x3A ) /*0x1008efc30*/
    {
      if ( _bittest64(&v9, v13) ) /*0x1008efc36*/
        goto LABEL_19; /*0x1008efc36*/
    }
    if ( v10 == 124 ) /*0x1008efb64*/
      goto LABEL_19; /*0x1008efb64*/
  }
  v66 = a2; /*0x1008efc60*/
  v64 = a3; /*0x1008efc64*/
  __n = a5; /*0x1008efc68*/
  v65 = a1; /*0x1008efc6c*/
  __dst[0] = 0; /*0x1008efc70*/
  __dst[1] = 1; /*0x1008efc7b*/
  v15 = 1; /*0x1008efc86*/
  v16 = 0; /*0x1008efc8c*/
  __s2 = v6; /*0x1008efc8f*/
  v72 = 0; /*0x1008efc93*/
  v17 = 0; /*0x1008efc9b*/
LABEL_21:
  __dst[2] = v16; /*0x1008efc9d*/
  while ( v6 != v8 ) /*0x1008efcb3*/
  {
    v18 = v6; /*0x1008efcb9*/
    v19 = v17; /*0x1008efcbc*/
    v20 = *v6; /*0x1008efcbf*/
    if ( (v20 & 0x80u) != 0 ) /*0x1008efcc6*/
    {
      v21 = v20 & 0x1F; /*0x1008efcd2*/
      v22 = v6[1] & 0x3F; /*0x1008efcd9*/
      if ( (unsigned __int8)v20 <= 0xDFu ) /*0x1008efcdf*/
      {
        v6 += 2; /*0x1008efd0c*/
        v20 = v22 | (v21 << 6); /*0x1008efd15*/
      }
      else
      {
        v23 = (v22 << 6) | v6[2] & 0x3F; /*0x1008efceb*/
        if ( (unsigned __int8)v20 < 0xF0u ) /*0x1008efcf0*/
        {
          v6 += 3; /*0x1008efd19*/
          v20 = (v21 << 12) | v23; /*0x1008efd22*/
        }
        else
        {
          v6 += 4; /*0x1008efcf2*/
          v20 = ((v20 & 7) << 18) | (v23 << 6) | v18[3] & 0x3F; /*0x1008efd08*/
        }
      }
    }
    else
    {
      ++v6; /*0x1008efcc8*/
    }
    v17 += v6 - v18; /*0x1008efd36*/
    v24 = v20 - 47; /*0x1008efd39*/
    if ( v24 <= 0x11 ) /*0x1008efd3f*/
    {
      v25 = 133121; /*0x1008efd45*/
      if ( _bittest(&v25, v24) ) /*0x1008efd4a*/
      {
        v26 = v19 - v72; /*0x1008efd53*/
        if ( v26 > __dst[0] - v16 ) /*0x1008efd67*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008efdc5*/
            __dst,
            v16,
            v26,
            1,
            1,
            a6);
          v16 = __dst[2]; /*0x1008efdca*/
          v63 = __dst[0]; /*0x1008efdd8*/
          v15 = __dst[1]; /*0x1008efddc*/
        }
        else
        {
          v63 = __dst[0]; /*0x1008efd69*/
        }
        v62 = v15; /*0x1008efd6d*/
        memcpy((void *)(v15 + v16), (char *)__s2 + v72, v26); /*0x1008efd80*/
        v27 = v26 + v16; /*0x1008efd85*/
        __dst[2] = v27; /*0x1008efd88*/
        if ( v63 == v27 ) /*0x1008efd96*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008efdfc*/
            __dst,
            v63,
            1,
            1,
            1,
            a6);
          v62 = __dst[1]; /*0x1008efe08*/
          v27 = __dst[2]; /*0x1008efe0c*/
        }
        v15 = v62; /*0x1008efd98*/
        *(_BYTE *)(v62 + v27) = 95; /*0x1008efd9c*/
        v16 = v27 + 1; /*0x1008efda1*/
        v72 = v17; /*0x1008efda4*/
        goto LABEL_21; /*0x1008efda8*/
      }
    }
  }
  v28 = __n - v72; /*0x1008efe19*/
  v29 = v65; /*0x1008efe2a*/
  v30 = (char *)__s2; /*0x1008efe2e*/
  if ( __n - v72 > __dst[0] - v16 ) /*0x1008efe32*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f024d*/
      __dst,
      v16,
      __n - v72,
      1,
      1,
      a6);
    v16 = __dst[2]; /*0x1008f0252*/
    v29 = v65; /*0x1008f0259*/
    v30 = (char *)__s2; /*0x1008f025d*/
  }
  memcpy((void *)(v16 + __dst[1]), &v30[v72], v28); /*0x1008efe4c*/
  __src[2] = v28 + v16; /*0x1008efe54*/
  __src[0] = __dst[0]; /*0x1008efe69*/
  __src[1] = __dst[1]; /*0x1008efe70*/
  __dst[0] = __src; /*0x1008efe7e*/
  __dst[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008efe8c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C711D, __dst); /*0x1008efea8*/
  v31 = v64; /*0x1008efeb7*/
  if ( __src[0] ) /*0x1008efebb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], __src[0], 1); /*0x1008efec9*/
  v32 = v60; /*0x1008efece*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v68, v66, v31, v60, v61); /*0x1008efeea*/
  if ( v59 ) /*0x1008efef9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v59, 1); /*0x1008eff03*/
  v33 = v70; /*0x1008eff0c*/
  v72 = v69; /*0x1008eff17*/
  std::sys::fs::symlink_metadata::hd69903fe66faddbd(__dst, v69, v70); /*0x1008eff1e*/
  v34 = __dst[1]; /*0x1008eff23*/
  if ( !LOBYTE(__dst[0]) ) /*0x1008eff31*/
  {
    if ( (__dst[1] & 0xF00000000000LL) != 0x800000000000LL ) /*0x1008effc4*/
    {
LABEL_64:
      v29[2] = v70; /*0x1008f00eb*/
      v50 = v68; /*0x1008f00f3*/
      v29[1] = v69; /*0x1008f00fb*/
      *v29 = v50; /*0x1008f00ff*/
      return v29; /*0x1008f0103*/
    }
    codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, v72, v33); /*0x1008effd8*/
    if ( __src[0] == 0x8000000000000001LL ) /*0x1008effee*/
    {
      qmemcpy(v56, &__src[1], 0x60u); /*0x1008f0007*/
      v55 = 2; /*0x1008f000a*/
    }
    else
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x1008f011e*/
      codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(&v55, __dst, v72, v33); /*0x1008f0134*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(__src); /*0x1008f0140*/
      v51 = __n; /*0x1008f014d*/
      v52 = __s2; /*0x1008f0151*/
      if ( v55 != 2 ) /*0x1008f0155*/
      {
        if ( v56[3] == (void *)__n && !memcmp(v56[2], __s2, __n) ) /*0x1008f01cd*/
        {
          v29[2] = v70; /*0x1008f0213*/
          v54 = v68; /*0x1008f0217*/
          v29[1] = v69; /*0x1008f021f*/
          *v29 = v54; /*0x1008f0223*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v55); /*0x1008f022e*/
          return v29; /*0x1008f0233*/
        }
        codexmate_lib::core::auth::hashed_account_snapshot_path::h7cd1d09406fd5673(v29, v66, v31, v52, v51); /*0x1008f01df*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v55); /*0x1008f01eb*/
        goto LABEL_72; /*0x1008f01eb*/
      }
    }
    v29[2] = v70; /*0x1008f015b*/
    v53 = v68; /*0x1008f015f*/
    v29[1] = v69; /*0x1008f0167*/
    *v29 = v53; /*0x1008f016b*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v56); /*0x1008f0176*/
    return v29; /*0x1008f017b*/
  }
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(__dst[1]) ) /*0x1008eff36*/
  {
    v29[2] = v70; /*0x1008eff47*/
    v35 = v68; /*0x1008eff4b*/
    v29[1] = v69; /*0x1008eff53*/
    *v29 = v35; /*0x1008eff57*/
    if ( (v34 & 3) == 1 ) /*0x1008eff64*/
    {
      v36 = v34 - 1; /*0x1008eff6a*/
      v37 = *(_QWORD *)(v34 - 1); /*0x1008eff6e*/
      v38 = *(_QWORD *)(v34 + 7); /*0x1008eff72*/
      if ( *(_QWORD *)v38 ) /*0x1008eff76*/
        (*(void (__fastcall **)(__int64))v38)(v37); /*0x1008eff81*/
      v39 = *(_QWORD *)(v38 + 8); /*0x1008eff83*/
      if ( v39 ) /*0x1008eff8a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v39, *(_QWORD *)(v38 + 16)); /*0x1008eff93*/
      v40 = 24; /*0x1008eff98*/
      v41 = 8; /*0x1008eff9d*/
      v42 = v36; /*0x1008effa2*/
      goto LABEL_74; /*0x1008effa5*/
    }
    return v29; /*0x1008eff64*/
  }
  if ( (v34 & 3) == 1 ) /*0x1008f0023*/
  {
    v43 = *(_QWORD *)(v34 - 1); /*0x1008f0029*/
    v44 = *(_QWORD *)(v34 + 7); /*0x1008f002d*/
    if ( *(_QWORD *)v44 ) /*0x1008f0031*/
      (*(void (__fastcall **)(_QWORD))v44)(*(_QWORD *)(v34 - 1)); /*0x1008f003c*/
    v45 = *(_QWORD *)(v44 + 8); /*0x1008f003e*/
    if ( v45 ) /*0x1008f0045*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v45, *(_QWORD *)(v44 + 16)); /*0x1008f004e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34 - 1, 24, 8); /*0x1008f0060*/
    v29 = v65; /*0x1008f0065*/
    v31 = v64; /*0x1008f0069*/
  }
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2( /*0x1008f0089*/
    __dst,
    __s2,
    __n,
    &anon_155c4da9b5393270cfa7378e2b52c417_108,
    2);
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x1008f009c*/
    __src,
    __dst);
  if ( LODWORD(__src[0]) == 1 ) /*0x1008f00a8*/
  {
    v46 = __src[2]; /*0x1008f00b5*/
    v47 = (char *)__s2; /*0x1008f00bc*/
    v48 = codexmate_lib::core::auth::account_snapshot_path::_$u7b$$u7b$closure$u7d$$u7d$::h6430d60871dc1d41( /*0x1008f00c3*/
            __s2,
            __src[1]);
    v49 = __n; /*0x1008f00ca*/
    if ( v48 /*0x1008f00de*/
      && (unsigned __int8)codexmate_lib::core::auth::account_snapshot_path::_$u7b$$u7b$closure$u7d$$u7d$::h6430d60871dc1d41(
                            &v47[v46],
                            __n - v46) )
    {
      goto LABEL_64; /*0x1008f00e5*/
    }
    codexmate_lib::core::auth::hashed_account_snapshot_path::h7cd1d09406fd5673(v29, v66, v31, v47, v49); /*0x1008f01a9*/
  }
  else
  {
    codexmate_lib::core::auth::hashed_account_snapshot_path::h7cd1d09406fd5673(v29, v66, v31, __s2, __n); /*0x1008f0192*/
  }
LABEL_72:
  v40 = v68; /*0x1008f01f0*/
  if ( v68 ) /*0x1008f01f7*/
  {
    v41 = 1; /*0x1008f01f9*/
    v42 = v72; /*0x1008f01fe*/
LABEL_74:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v40, v41); /*0x1008f0202*/
  }
  return v29; /*0x1008efc4e*/
}