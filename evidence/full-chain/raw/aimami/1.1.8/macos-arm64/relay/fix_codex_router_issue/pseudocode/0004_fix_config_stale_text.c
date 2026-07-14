// owner: codexmate_lib::core::relay::codex_diagnostic::fix_config_stale_text::hc42079fca70283e7
// VA: 0x1003df800 | AiMaMi 1.1.8 macos universal.app x86_64 slice (arch-noise-filtered)
// session: <审计会话>

double __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_config_stale_text::hc42079fca70283e7(
        _QWORD *a1,
        _QWORD **a2,
        size_t a3,
        double result)
{
  _QWORD **v5; // r12
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r15
  size_t v11; // rsi
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rax
  size_t v16; // rbx
  char *v17; // r13
  const void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  size_t v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  size_t v27; // r14
  void *v28; // r15
  void *v29; // r12
  _QWORD *v30; // r13
  _QWORD **v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  size_t v34; // rbx
  __int64 v35; // rax
  int v36[4]; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+10h] [rbp-D0h]
  size_t v38; // [rsp+18h] [rbp-C8h]
  __int64 v39; // [rsp+20h] [rbp-C0h] BYREF
  size_t v40; // [rsp+28h] [rbp-B8h]
  _QWORD v41[5]; // [rsp+30h] [rbp-B0h] BYREF
  char v42; // [rsp+58h] [rbp-88h]
  __int16 v43; // [rsp+60h] [rbp-80h]
  _QWORD *v44; // [rsp+68h] [rbp-78h]
  _QWORD **v45; // [rsp+70h] [rbp-70h]
  size_t __n; // [rsp+78h] [rbp-68h]
  size_t v47; // [rsp+80h] [rbp-60h] BYREF
  void *__s1; // [rsp+88h] [rbp-58h]
  __int64 v49; // [rsp+90h] [rbp-50h]
  __int64 v50; // [rsp+98h] [rbp-48h]
  void *__s2; // [rsp+A0h] [rbp-40h]
  __int64 v52; // [rsp+A8h] [rbp-38h]
  __int64 v53; // [rsp+B0h] [rbp-30h]

  v5 = a2; /*0x1003df817*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v39, a2, a3); /*0x1003df824*/
  if ( __OFSUB__(-v39, 1) ) /*0x1003df833*/
  {
    if ( (v40 & 3) == 1 ) /*0x1003df84b*/
    {
      v52 = v40 - 1; /*0x1003df854*/
      v7 = *(_QWORD *)(v40 - 1); /*0x1003df858*/
      v8 = *(_QWORD *)(v40 + 7); /*0x1003df85c*/
      if ( *(_QWORD *)v8 ) /*0x1003df860*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x1003df86c*/
      v9 = *(_QWORD *)(v8 + 8); /*0x1003df86e*/
      if ( v9 ) /*0x1003df876*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x1003df880*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, 24, 8); /*0x1003df893*/
      v5 = a2; /*0x1003df898*/
    }
    v45 = v5; /*0x1003df89b*/
    v44 = a1; /*0x1003df89f*/
    v10 = 1; /*0x1003df8a3*/
    v11 = 0; /*0x1003df8a9*/
    v53 = 0; /*0x1003df8ab*/
    v12 = 1; /*0x1003df8b3*/
    goto LABEL_9; /*0x1003df8b3*/
  }
  v10 = v40; /*0x1003dfb23*/
  v11 = v41[0]; /*0x1003dfb2a*/
  if ( v41[0] < 0LL ) /*0x1003dfb34*/
  {
    v26 = 0; /*0x1003dfb3a*/
    goto LABEL_39; /*0x1003dfb3a*/
  }
  __n = v41[0]; /*0x1003dfc7c*/
  v45 = v5; /*0x1003dfc80*/
  v44 = a1; /*0x1003dfc84*/
  v53 = v39; /*0x1003dfc88*/
  if ( v41[0] ) /*0x1003dfc8c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v39); /*0x1003dfc8e*/
    v34 = __n; /*0x1003dfc98*/
    v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1003dfc9f*/
    v26 = 1; /*0x1003dfca4*/
    v11 = v34; /*0x1003dfca9*/
    if ( !v35 ) /*0x1003dfcb3*/
LABEL_39:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v11); /*0x1003dfb3c*/
    v12 = v35; /*0x1003dfcb9*/
  }
  else
  {
    v12 = 1; /*0x1003dfcc1*/
    v11 = 0; /*0x1003dfcc7*/
  }
LABEL_9:
  v38 = a3; /*0x1003df8b9*/
  v47 = v11; /*0x1003df8c0*/
  __s1 = (void *)v12; /*0x1003df8c4*/
  v49 = 0; /*0x1003df8c8*/
  v39 = 0; /*0x1003df8d0*/
  v40 = v11; /*0x1003df8db*/
  __s2 = (void *)v10; /*0x1003df8e2*/
  v41[0] = v10; /*0x1003df8e6*/
  v41[1] = v11; /*0x1003df8ed*/
  v41[2] = 0; /*0x1003df8f4*/
  __n = v11; /*0x1003df8ff*/
  v41[3] = v11; /*0x1003df903*/
  v41[4] = 0xA0000000ALL; /*0x1003df914*/
  v42 = 1; /*0x1003df91b*/
  v43 = 0; /*0x1003df922*/
  v13 = 0; /*0x1003df928*/
  v52 = v12; /*0x1003df92b*/
  v50 = 0; /*0x1003df92f*/
  while ( 1 ) /*0x1003df940*/
  {
    v14 = v41[0]; /*0x1003df940*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1003df955*/
      v36,
      v41);
    if ( v36[0] == 1 ) /*0x1003df961*/
    {
      v15 = v39; /*0x1003df96a*/
      v39 = v37; /*0x1003df971*/
      v16 = v37 - v15; /*0x1003df978*/
      v17 = (char *)(v15 + v14); /*0x1003df97b*/
      if ( v37 != v15 ) /*0x1003df981*/
        goto LABEL_16; /*0x1003df981*/
      goto LABEL_22; /*0x1003df981*/
    }
    if ( HIBYTE(v43) ) /*0x1003df994*/
      break; /*0x1003df994*/
    HIBYTE(v43) = 1; /*0x1003df99a*/
    v16 = v40 - v39; /*0x1003df9ac*/
    if ( ((unsigned __int8)v43 | (v40 != v39)) != 1 ) /*0x1003df9b7*/
      break; /*0x1003df9b7*/
    v17 = (char *)(v41[0] + v39); /*0x1003df9bd*/
    if ( v16 ) /*0x1003df9c7*/
    {
LABEL_16:
      if ( v17[v16 - 1] == 10 ) /*0x1003df9cf*/
      {
        if ( v16 == 1 ) /*0x1003df9d7*/
        {
          v16 = 0; /*0x1003df9e7*/
        }
        else if ( v17[v16 - 2] == 13 ) /*0x1003df9df*/
        {
          v16 -= 2LL; /*0x1003df9e1*/
        }
        else
        {
          --v16; /*0x1003df9eb*/
        }
      }
    }
LABEL_22:
    v18 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v17, v16); /*0x1003df9f0*/
    if ( v19 == 64 ) /*0x1003df9ff*/
    {
      LODWORD(v21) = memcmp(v18, &unk_1012C3795, 0x40u); /*0x1003dfa10*/
      if ( v50 & 1 | ((_DWORD)v21 == 0) ) /*0x1003dfa1d*/
      {
        LOBYTE(v21) = 1; /*0x1003dfa21*/
LABEL_34:
        v50 = v21; /*0x1003dfab8*/
        goto LABEL_35; /*0x1003dfab8*/
      }
LABEL_26:
      v22 = v47; /*0x1003dfa36*/
      if ( v16 > v47 - v13 ) /*0x1003dfa43*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v47, v13, v16, 1, 1); /*0x1003dfae0*/
        v13 = v49; /*0x1003dfae5*/
        v22 = v47; /*0x1003dfae9*/
        v12 = (__int64)__s1; /*0x1003dfaed*/
        v52 = (__int64)__s1; /*0x1003dfaf1*/
      }
      memcpy((void *)(v13 + v12), v17, v16); /*0x1003dfa55*/
      v23 = v13 + v16; /*0x1003dfa5a*/
      v49 = v23; /*0x1003dfa5d*/
      v24 = v23; /*0x1003dfa61*/
      v12 = v52; /*0x1003dfa67*/
      if ( v22 == v23 ) /*0x1003dfa6b*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v47, v22, 1, 1, 1); /*0x1003dfb11*/
        v12 = (__int64)__s1; /*0x1003dfb16*/
        v24 = v49; /*0x1003dfb1a*/
      }
      *(_BYTE *)(v12 + v24) = 10; /*0x1003dfa71*/
      v25 = v23 + 1; /*0x1003dfa76*/
      v49 = v25; /*0x1003dfa79*/
      v52 = v12; /*0x1003dfa81*/
      v13 = v25; /*0x1003dfa85*/
      if ( HIBYTE(v43) ) /*0x1003dfa88*/
        goto LABEL_41; /*0x1003dfa88*/
    }
    else
    {
      if ( (v50 & 1) == 0 ) /*0x1003dfa34*/
        goto LABEL_26; /*0x1003dfa34*/
      LOBYTE(v20) = 1; /*0x1003dfa93*/
      v50 = v20; /*0x1003dfa95*/
      if ( v19 == 39 ) /*0x1003dfa9d*/
      {
        LODWORD(v21) = memcmp(v18, &unk_1012C37D5, 0x27u); /*0x1003dfaae*/
        LOBYTE(v21) = (_DWORD)v21 != 0; /*0x1003dfab5*/
        goto LABEL_34; /*0x1003dfab5*/
      }
LABEL_35:
      v25 = v13; /*0x1003dfabc*/
      if ( HIBYTE(v43) ) /*0x1003dfac3*/
        goto LABEL_41; /*0x1003dfac3*/
    }
  }
  v25 = v13; /*0x1003dfb46*/
LABEL_41:
  v27 = v47; /*0x1003dfb49*/
  v28 = __s1; /*0x1003dfb4d*/
  v29 = __s2; /*0x1003dfb58*/
  v30 = v44; /*0x1003dfb5c*/
  if ( v25 == __n && (v31 = (_QWORD **)__s1, !memcmp(__s1, __s2, __n)) /*0x1003dfb8a*/
    || (v31 = v45,
        (v32 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af(
                 v45,
                 v38,
                 (__int64)v28,
                 v25,
                 result)) == 0) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31); /*0x1003dfbd8*/
    v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x1003dfbe7*/
    if ( !v33 ) /*0x1003dfbef*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35); /*0x1003dfc75*/
    *(_QWORD *)(v33 + 24) = 0x6C622082B1E5B6A1LL; /*0x1003dfbfb*/
    *(_QWORD *)(v33 + 16) = 0xE920726574756F72LL; /*0x1003dfc09*/
    *(_QWORD *)(v33 + 8) = 0x209995E78BAEE686LL; /*0x1003dfc17*/
    *(_QWORD *)v33 = 0x90E785B8E6B2B7E5LL; /*0x1003dfc25*/
    *(_DWORD *)(v33 + 31) = 1801678700; /*0x1003dfc28*/
    v30[1] = 35; /*0x1003dfc2f*/
    v30[2] = v33; /*0x1003dfc37*/
    v30[3] = 35; /*0x1003dfc3b*/
    *v30 = 10; /*0x1003dfc43*/
    if ( v27 ) /*0x1003dfc4e*/
LABEL_45:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x1003dfb9d*/
  }
  else
  {
    *v30 = 2; /*0x1003dfb8c*/
    v30[1] = v32; /*0x1003dfb94*/
    if ( v27 ) /*0x1003dfb9b*/
      goto LABEL_45; /*0x1003dfb9b*/
  }
  if ( v53 ) /*0x1003dfbb4*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v53, 1); /*0x1003dfbd3*/
  return result; /*0x1003dfbc2*/
}