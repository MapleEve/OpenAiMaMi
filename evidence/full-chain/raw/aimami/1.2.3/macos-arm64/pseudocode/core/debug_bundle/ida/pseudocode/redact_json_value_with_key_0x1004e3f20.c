// __ZN13codexmate_lib4core12debug_bundle26redact_json_value_with_key @ 0x1004e3f20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::redact_json_value_with_key::hf230bf36b2ce29ff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5)
{
  __int64 v8; // r12
  void *v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // edx
  bool v13; // cf
  unsigned __int32 v14; // eax
  unsigned int v15; // ecx
  int v16; // r15d
  __int64 v17; // rsi
  _BOOL4 v18; // r15d
  char *v19; // rdi
  unsigned int *v20; // r12
  __int64 v21; // r13
  __int64 v22; // rsi
  void *v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rax
  void *v31; // rax
  signed __int64 v32; // rax
  _BOOL4 v33; // r15d
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  _BOOL8 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v41; // rax
  __int64 v42[3]; // [rsp+8h] [rbp-D8h] BYREF
  _BOOL8 v43; // [rsp+20h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+28h] [rbp-B8h]
  __int64 v45; // [rsp+30h] [rbp-B0h]
  __int64 v46; // [rsp+38h] [rbp-A8h]
  _BOOL8 v47; // [rsp+40h] [rbp-A0h]
  __int64 v48; // [rsp+48h] [rbp-98h]
  __int64 v49; // [rsp+50h] [rbp-90h]
  __int64 v50; // [rsp+58h] [rbp-88h]
  __int64 v51; // [rsp+60h] [rbp-80h]
  __int64 v52; // [rsp+68h] [rbp-78h]
  __int64 v53; // [rsp+70h] [rbp-70h]
  __int64 v54; // [rsp+78h] [rbp-68h]
  signed __int64 v55; // [rsp+80h] [rbp-60h] BYREF
  _DWORD *v56; // [rsp+88h] [rbp-58h]
  __int64 v57; // [rsp+90h] [rbp-50h]
  __int64 v58; // [rsp+98h] [rbp-48h]
  __int64 v59; // [rsp+A0h] [rbp-40h] BYREF
  void *__s1; // [rsp+A8h] [rbp-38h]
  __int64 v61; // [rsp+B0h] [rbp-30h]

  v58 = a5; /*0x1004e3f34*/
  if ( !a2 ) /*0x1004e3f41*/
    goto LABEL_57; /*0x1004e3f41*/
  v8 = a2 + a3; /*0x1004e3f4d*/
  v43 = 0; /*0x1004e3f50*/
  v48 = 0; /*0x1004e3f5b*/
  v53 = a2; /*0x1004e3f66*/
  v54 = a2 + a3; /*0x1004e3f6a*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h0d22c3c16a3d0689( /*0x1004e3f79*/
    &v59,
    &v43);
  v9 = __s1; /*0x1004e3f7e*/
  if ( v61 == 7 ) /*0x1004e3f8a*/
  {
    v14 = _byteswap_ulong(*(_DWORD *)__s1); /*0x1004e3fc1*/
    v15 = 1751474532; /*0x1004e3fc3*/
    if ( v14 != 1751474532 /*0x1004e3fde*/
      || (v14 = _byteswap_ulong(*(_DWORD *)((char *)__s1 + 3)), v15 = 1684370035, v14 != 1684370035) )
    {
      v12 = 0; /*0x1004e4003*/
      v13 = v14 < v15; /*0x1004e4005*/
LABEL_15:
      LOBYTE(v12) = !v13; /*0x1004e4007*/
      v16 = 2 * v12 - 1; /*0x1004e400a*/
      v17 = v59; /*0x1004e400f*/
      if ( !v59 ) /*0x1004e4016*/
        goto LABEL_17; /*0x1004e4016*/
      goto LABEL_16; /*0x1004e4016*/
    }
    goto LABEL_10; /*0x1004e3fde*/
  }
  if ( v61 == 12 ) /*0x1004e3f90*/
  {
    v10 = 0x6578747261686561LL; /*0x1004e3f92*/
    v11 = _byteswap_uint64(*(_QWORD *)__s1); /*0x1004e3f9f*/
    if ( v11 != 0x6578747261686561LL ) /*0x1004e3fa5*/
    {
LABEL_7:
      v12 = 0; /*0x1004e3fb8*/
      v13 = v11 < v10; /*0x1004e3fba*/
      goto LABEL_15; /*0x1004e3fbd*/
    }
    v11 = _byteswap_ulong(*((_DWORD *)__s1 + 2)); /*0x1004e3faa*/
    if ( (_DWORD)v11 != 1684370035 ) /*0x1004e3fb1*/
    {
      v10 = 1684370035; /*0x1004e3fb3*/
      goto LABEL_7; /*0x1004e3fb3*/
    }
LABEL_10:
    v16 = 0; /*0x1004e3fe0*/
    v17 = v59; /*0x1004e3fe3*/
    if ( !v59 ) /*0x1004e3fea*/
    {
LABEL_17:
      if ( !v16 ) /*0x1004e4025*/
      {
        v24 = *a4; /*0x1004e424a*/
        if ( *a4 ) /*0x1004e424a*/
        {
          if ( v24 == 3 ) /*0x1004e4259*/
          {
            codexmate_lib::core::debug_bundle::extra_headers_summary::h2d075dd13e550ac7( /*0x1004e42f5*/
              &v55,
              *((char **)a4 + 2),
              *((_QWORD *)a4 + 3));
          }
          else if ( v24 == 5 ) /*0x1004e4262*/
          {
            v25 = *((_QWORD *)a4 + 1); /*0x1004e4268*/
            v26 = *((_QWORD *)a4 + 2); /*0x1004e426c*/
            v27 = v25; /*0x1004e4272*/
            if ( v25 ) /*0x1004e427b*/
              v27 = *((_QWORD *)a4 + 3); /*0x1004e427d*/
            v43 = v25 != 0; /*0x1004e4281*/
            v44 = 0; /*0x1004e4288*/
            v45 = v25; /*0x1004e4293*/
            v46 = v26; /*0x1004e429a*/
            v47 = v43; /*0x1004e42a1*/
            v48 = 0; /*0x1004e42a8*/
            v49 = v25; /*0x1004e42b3*/
            v50 = v26; /*0x1004e42ba*/
            v51 = v27; /*0x1004e42c1*/
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hfe16504aedc8558f( /*0x1004e42d3*/
              &v59,
              &v43);
            codexmate_lib::core::debug_bundle::header_names_summary::h4ba000d06d225391(&v55, &v59, v28, v29); /*0x1004e42df*/
          }
          else
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v17); /*0x1004e4338*/
            v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1004e4347*/
            if ( !v31 ) /*0x1004e434f*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1004e456b*/
            qmemcpy(v31, "invalid header shape", 20); /*0x1004e436d*/
            v55 = 20; /*0x1004e4377*/
            v56 = v31; /*0x1004e437f*/
            v57 = 20; /*0x1004e4383*/
          }
        }
        else
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v17); /*0x1004e42ff*/
          v30 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1004e430e*/
          if ( !v30 ) /*0x1004e4316*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1004e455c*/
          *v30 = 1701736302; /*0x1004e431c*/
          v55 = 4; /*0x1004e4322*/
          v56 = v30; /*0x1004e432a*/
          v57 = 4; /*0x1004e432e*/
        }
        *(_QWORD *)(a1 + 24) = v57; /*0x1004e438f*/
        v32 = v55; /*0x1004e4393*/
        *(_QWORD *)(a1 + 16) = v56; /*0x1004e439b*/
        *(_QWORD *)(a1 + 8) = v32; /*0x1004e439f*/
        goto LABEL_65; /*0x1004e43a3*/
      }
      goto LABEL_18; /*0x1004e4025*/
    }
LABEL_16:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v17, 1); /*0x1004e4018*/
    goto LABEL_17; /*0x1004e401d*/
  }
  if ( v59 ) /*0x1004e3ff5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v59, 1); /*0x1004e3ffc*/
LABEL_18:
  v43 = 0; /*0x1004e402b*/
  v48 = 0; /*0x1004e4036*/
  v53 = a2; /*0x1004e4041*/
  v54 = v8; /*0x1004e4045*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h0d22c3c16a3d0689( /*0x1004e4054*/
    &v59,
    &v43);
  if ( v61 == 9 ) /*0x1004e405e*/
  {
    v18 = (*(_QWORD *)__s1 ^ 0x6F7272657473616CLL | *((unsigned __int8 *)__s1 + 8) ^ 0x72LL) != 0; /*0x1004e4083*/
    if ( v59 ) /*0x1004e408a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v59, 1); /*0x1004e4091*/
    if ( !v18 ) /*0x1004e4099*/
    {
      codexmate_lib::core::debug_bundle::summarize_last_error_value::hbfe17fa9cde4693f(a1, a4); /*0x1004e40a1*/
      return a1; /*0x1004e40a6*/
    }
  }
  else if ( v59 ) /*0x1004e40b2*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v59, 1); /*0x1004e40bd*/
  }
  v43 = 0; /*0x1004e40c2*/
  v48 = 0; /*0x1004e40cd*/
  v53 = a2; /*0x1004e40d8*/
  v54 = v8; /*0x1004e40dc*/
  v19 = (char *)&v59; /*0x1004e40e0*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h0d22c3c16a3d0689( /*0x1004e40eb*/
    &v59,
    &v43);
  v20 = (unsigned int *)__s1; /*0x1004e40f0*/
  v21 = v61; /*0x1004e40f4*/
  if ( v61 == 10 && !(*(_QWORD *)__s1 ^ 0x6B746E756F636361LL | *((unsigned __int16 *)__s1 + 4) ^ 0x7965LL) /*0x1004e41de*/
    || (v19 = "authorizationapikeytokensecretcookiejwtbearer",
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "authorizationapikeytokensecretcookiejwtbearer",
                           0xDu,
                           __s1))
    || (v19 = "apikeytokensecretcookiejwtbearer",
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "apikeytokensecretcookiejwtbearer",
                           6u,
                           v20))
    || (v19 = "tokensecretcookiejwtbearer",
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "tokensecretcookiejwtbearer",
                           5u,
                           v20))
    || (v19 = "secretcookiejwtbearer",
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "secretcookiejwtbearer",
                           6u,
                           v20))
    || (v19 = "cookiejwtbearer",
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "cookiejwtbearer",
                           6u,
                           v20))
    || (v19 = "jwtbearer",
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "jwtbearer",
                           3u,
                           v20))
    || (v19 = "bearer",
        (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "bearer",
                           6u,
                           v20)) )
  {
    v22 = v59; /*0x1004e41eb*/
    if ( v59 ) /*0x1004e41f2*/
    {
      v19 = (char *)v20; /*0x1004e41f9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v59, 1); /*0x1004e41fc*/
    }
LABEL_36:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v22); /*0x1004e4201*/
    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1004e4210*/
    if ( !v23 ) /*0x1004e4218*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10); /*0x1004e454d*/
    qmemcpy(v23, "[REDACTED]", 10); /*0x1004e4228*/
    *(_QWORD *)(a1 + 8) = 10; /*0x1004e4231*/
    *(_QWORD *)(a1 + 16) = v23; /*0x1004e4239*/
    *(_QWORD *)(a1 + 24) = 10; /*0x1004e423d*/
    goto LABEL_65; /*0x1004e4245*/
  }
  if ( v21 == 12 ) /*0x1004e43ac*/
  {
    v33 = (*(_QWORD *)v20 ^ 0x706169616E65706FLL | v20[2] ^ 0x79656B69LL) != 0; /*0x1004e43ce*/
    v22 = v59; /*0x1004e43d2*/
    if ( v59 ) /*0x1004e43d9*/
    {
      v19 = (char *)v20; /*0x1004e43e0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v59, 1); /*0x1004e43e3*/
    }
    if ( !v33 ) /*0x1004e43eb*/
      goto LABEL_36; /*0x1004e43eb*/
  }
  else if ( v59 ) /*0x1004e43f9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v59, 1); /*0x1004e4403*/
  }
LABEL_57:
  v34 = *a4; /*0x1004e4408*/
  switch ( v34 ) /*0x1004e440f*/
  {
    case 3: /*0x1004e440f*/
      codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b( /*0x1004e44fa*/
        a1 + 8,
        *((_QWORD *)a4 + 2),
        *((_QWORD *)a4 + 3),
        *(_QWORD *)(v58 + 8),
        *(_QWORD *)(v58 + 16));
LABEL_65:
      *(_BYTE *)a1 = 3; /*0x1004e44ff*/
      return a1; /*0x1004e44ff*/
    case 4: /*0x1004e440f*/
      v39 = *((_QWORD *)a4 + 2) + 32LL * *((_QWORD *)a4 + 3); /*0x1004e44b1*/
      v42[0] = *((_QWORD *)a4 + 2); /*0x1004e44b4*/
      v42[1] = v39; /*0x1004e44bb*/
      v42[2] = v58; /*0x1004e44c6*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9ee3443baffb6e46( /*0x1004e44d8*/
        (unsigned __int64 *)(a1 + 8),
        v42);
      *(_BYTE *)a1 = 4; /*0x1004e44dd*/
      break;
    case 5: /*0x1004e440f*/
      v35 = *((_QWORD *)a4 + 1); /*0x1004e4427*/
      v36 = *((_QWORD *)a4 + 2); /*0x1004e442b*/
      v37 = 0; /*0x1004e442f*/
      v38 = v35; /*0x1004e4431*/
      if ( v35 ) /*0x1004e443b*/
        v38 = *((_QWORD *)a4 + 3); /*0x1004e443d*/
      LOBYTE(v37) = v35 != 0; /*0x1004e4441*/
      v43 = v37; /*0x1004e4444*/
      v44 = 0; /*0x1004e444b*/
      v45 = v35; /*0x1004e4456*/
      v46 = v36; /*0x1004e445d*/
      v47 = v37; /*0x1004e4464*/
      v48 = 0; /*0x1004e446b*/
      v49 = v35; /*0x1004e4476*/
      v50 = v36; /*0x1004e447d*/
      v51 = v38; /*0x1004e4484*/
      v52 = v58; /*0x1004e448c*/
      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::h03f7291e06178e2b( /*0x1004e449b*/
        a1 + 8,
        &v43);
      *(_BYTE *)a1 = 5; /*0x1004e44a0*/
      break;
    default:
      if ( *a4 ) /*0x1004e4408*/
      {
        *(_QWORD *)(a1 + 24) = *((_QWORD *)a4 + 3); /*0x1004e4522*/
        *(_QWORD *)(a1 + 16) = *((_QWORD *)a4 + 2); /*0x1004e452a*/
        v41 = *(_QWORD *)a4; /*0x1004e452e*/
        *(_QWORD *)(a1 + 8) = *((_QWORD *)a4 + 1); /*0x1004e4535*/
        *(_QWORD *)a1 = v41; /*0x1004e4539*/
      }
      else
      {
        *(_BYTE *)a1 = 0; /*0x1004e453e*/
      }
      break;
  }
  return a1; /*0x1004e4505*/
}