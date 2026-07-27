// __ZN13codexmate_lib4core5relay23codex_thread_visibility26replace_session_meta_lines @ 0x100ad4190 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::replace_session_meta_lines::haca5d114b57dfff7(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _BYTE *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  _BYTE *v11; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rcx
  bool v15; // cf
  bool v16; // cc
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  size_t v21; // rbx
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  double result; // xmm0_8
  __int64 v25; // rsi
  _BYTE *v26; // rdi
  size_t v27; // rsi
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rdx
  signed __int64 v31; // rdx
  signed __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  _BYTE *v36; // rax
  bool v37; // zf
  __int64 v38; // rbx
  __int64 v39; // rdi
  _QWORD *v40; // rbx
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rax
  void *v46; // rax
  void *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51[8]; // [rsp+0h] [rbp-1D0h] BYREF
  int v52; // [rsp+8h] [rbp-1C8h]
  __int64 v53; // [rsp+10h] [rbp-1C0h]
  unsigned int v54; // [rsp+18h] [rbp-1B8h]
  int v55; // [rsp+28h] [rbp-1A8h]
  __int64 v56; // [rsp+30h] [rbp-1A0h] BYREF
  _QWORD __dst[17]; // [rsp+38h] [rbp-198h] BYREF
  _BYTE v58[152]; // [rsp+C0h] [rbp-110h] BYREF
  _QWORD v59[3]; // [rsp+158h] [rbp-78h] BYREF
  __int64 v60; // [rsp+170h] [rbp-60h]
  __int64 v61; // [rsp+178h] [rbp-58h]
  __int64 v62; // [rsp+180h] [rbp-50h]
  unsigned int v63; // [rsp+18Ch] [rbp-44h]
  size_t __n; // [rsp+190h] [rbp-40h]
  _BYTE *v65; // [rsp+198h] [rbp-38h]
  _DWORD v66[11]; // [rsp+1A4h] [rbp-2Ch] BYREF

  v8 = v58; /*0x100ad41b5*/
  v9 = a4; /*0x100ad41bc*/
  core::iter::adapters::try_process::h3e8a5bf534631565(v58, a4, a4 + 72 * a5); /*0x100ad41bf*/
  v10 = *(_QWORD *)v58; /*0x100ad41c4*/
  v56 = *(_QWORD *)&v58[8]; /*0x100ad41d2*/
  __dst[0] = *(_QWORD *)&v58[16]; /*0x100ad41e0*/
  __dst[1] = *(_QWORD *)&v58[24]; /*0x100ad41ee*/
  if ( *(_QWORD *)v58 != 11 ) /*0x100ad41f9*/
  {
    a1[11] = *(_QWORD *)&v58[88]; /*0x100ad42e6*/
    a1[10] = *(_QWORD *)&v58[80]; /*0x100ad42f1*/
    a1[9] = *(_QWORD *)&v58[72]; /*0x100ad42fc*/
    a1[8] = *(_QWORD *)&v58[64]; /*0x100ad4307*/
    a1[7] = *(_QWORD *)&v58[56]; /*0x100ad4312*/
    a1[6] = *(_QWORD *)&v58[48]; /*0x100ad431d*/
    v18 = *(_QWORD *)&v58[32]; /*0x100ad4321*/
    a1[5] = *(_QWORD *)&v58[40]; /*0x100ad432f*/
    a1[4] = v18; /*0x100ad4333*/
    a1[3] = __dst[1]; /*0x100ad433e*/
    v19 = v56; /*0x100ad4342*/
    a1[2] = __dst[0]; /*0x100ad4350*/
    a1[1] = v19; /*0x100ad4354*/
    *a1 = v10; /*0x100ad4358*/
    return result; /*0x100ad435b*/
  }
  v11 = (_BYTE *)__dst[0]; /*0x100ad4206*/
  v59[0] = v56; /*0x100ad420d*/
  v59[1] = __dst[0]; /*0x100ad4211*/
  v12 = __dst[1]; /*0x100ad4215*/
  v59[2] = __dst[1]; /*0x100ad421c*/
  *(_QWORD *)v58 = &v56; /*0x100ad4227*/
  if ( __dst[1] >= 2u ) /*0x100ad4232*/
  {
    v8 = (_BYTE *)__dst[0]; /*0x100ad4933*/
    v9 = __dst[1]; /*0x100ad4936*/
    if ( __dst[1] >= 0x15u ) /*0x100ad4925*/
      core::slice::sort::stable::driftsort_main::h5106545fcc100d6b(__dst[0], __dst[1], v58); /*0x100ad4961*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h86b576e4a8a4b43f(__dst[0], __dst[1], 1, v58); /*0x100ad4939*/
  }
  v13 = v12 + 1; /*0x100ad4238*/
  v14 = v11 + 48; /*0x100ad423c*/
  while ( 1 ) /*0x100ad4243*/
  {
    v15 = v13-- == 1; /*0x100ad4243*/
    if ( v15 || v13 == 1 ) /*0x100ad4243*/
      break; /*0x100ad4247*/
    v16 = *v14 + v14[1] <= v14[8]; /*0x100ad4254*/
    v14 += 8; /*0x100ad4258*/
    if ( !v16 ) /*0x100ad425c*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v9); /*0x100ad425e*/
      v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x100ad426d*/
      if ( !v17 ) /*0x100ad4275*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x100ad494d*/
      qmemcpy(v17, "session_meta replacements overlap", 33); /*0x100ad42af*/
      *a1 = 9; /*0x100ad42b6*/
      a1[1] = 33; /*0x100ad42bd*/
      a1[2] = v17; /*0x100ad42c5*/
      a1[3] = 33; /*0x100ad42c9*/
      if ( v12 ) /*0x100ad42d4*/
        goto LABEL_16; /*0x100ad42d4*/
      goto LABEL_57; /*0x100ad42d4*/
    }
  }
  v56 = 0x10101B600000000LL; /*0x100ad436a*/
  LODWORD(__dst[0]) = 0; /*0x100ad4371*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(v58, &v56, a2, a3); /*0x100ad438f*/
  if ( *(_DWORD *)v58 == 1 ) /*0x100ad439b*/
  {
    v20 = *(_QWORD *)&v58[8]; /*0x100ad439d*/
    *a1 = 2; /*0x100ad43a4*/
    a1[1] = v20; /*0x100ad43ab*/
    if ( v12 ) /*0x100ad43b2*/
      goto LABEL_16; /*0x100ad43b2*/
    goto LABEL_57; /*0x100ad43b2*/
  }
  v61 = a2; /*0x100ad43b9*/
  v66[0] = *(_DWORD *)&v58[4]; /*0x100ad43c3*/
  std::fs::File::metadata::h408606eff73040af(v58, v66); /*0x100ad43d1*/
  v21 = *(_QWORD *)&v58[8]; /*0x100ad43d6*/
  if ( *(_DWORD *)v58 == 1 ) /*0x100ad43e4*/
  {
    *a1 = 2; /*0x100ad43e6*/
    a1[1] = v21; /*0x100ad43ed*/
    goto LABEL_15; /*0x100ad43ed*/
  }
  memcpy(__dst, &v58[16], sizeof(__dst)); /*0x100ad445f*/
  v56 = *(_QWORD *)&v58[8]; /*0x100ad4464*/
  v26 = v58; /*0x100ad446b*/
  v27 = (size_t)&v56; /*0x100ad4472*/
  std::fs::Metadata::modified::h0e075817eaa8c909(v58, &v56); /*0x100ad4479*/
  v60 = a3; /*0x100ad447e*/
  v63 = *(_DWORD *)&v58[8]; /*0x100ad4488*/
  v62 = *(_QWORD *)v58; /*0x100ad449a*/
  if ( *(_DWORD *)&v58[8] == 1000000000 && (v58[0] & 3) == 1 ) /*0x100ad44a4*/
  {
    v65 = (_BYTE *)(v62 - 1); /*0x100ad4689*/
    v21 = *(_QWORD *)(v62 - 1); /*0x100ad468d*/
    v43 = *(_QWORD *)(v62 + 7); /*0x100ad4691*/
    if ( *(_QWORD *)v43 ) /*0x100ad4695*/
      (*(void (__fastcall **)(_QWORD))v43)(*(_QWORD *)(v62 - 1)); /*0x100ad46a1*/
    v44 = *(_QWORD *)(v43 + 8); /*0x100ad46a3*/
    if ( v44 ) /*0x100ad46ab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v44, *(_QWORD *)(v43 + 16)); /*0x100ad46b5*/
    v27 = 24; /*0x100ad46ba*/
    v26 = v65; /*0x100ad46c4*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, 24, 8); /*0x100ad46c8*/
  }
  v65 = v11; /*0x100ad44b2*/
  v28 = v12 << 6; /*0x100ad44b9*/
  if ( !v12 ) /*0x100ad44c0*/
  {
LABEL_38:
    v11 = v65; /*0x100ad4599*/
    v36 = v65; /*0x100ad459d*/
    do /*0x100ad45b9*/
    {
      if ( !v28 ) /*0x100ad45a3*/
      {
        v40 = v65; /*0x100ad462b*/
        v41 = v12 << 6; /*0x100ad4631*/
        while ( v41 ) /*0x100ad463c*/
        {
          if ( (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h9f4cbd6fbcee8df4(v66, 0, v40[6]) & 1) != 0 ) /*0x100ad4652*/
            goto LABEL_55; /*0x100ad4652*/
          v42 = std::io::Write::write_all::he2fd9a54c4cbfe2a(v66, v40[4], v40[5]); /*0x100ad465f*/
          v40 += 8; /*0x100ad4664*/
          v41 -= 64; /*0x100ad4668*/
          if ( v42 ) /*0x100ad466f*/
          {
            *a1 = 2; /*0x100ad4671*/
            a1[1] = v42; /*0x100ad4678*/
            goto LABEL_64; /*0x100ad467c*/
          }
        }
        v45 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(v66); /*0x100ad472d*/
        v11 = v65; /*0x100ad4732*/
        if ( v45 ) /*0x100ad473c*/
        {
          *a1 = 2; /*0x100ad4742*/
          a1[1] = v45; /*0x100ad4749*/
        }
        else
        {
          if ( v63 != 1000000000 ) /*0x100ad4898*/
          {
            v52 = 1000000000; /*0x100ad489a*/
            v55 = 1000000000; /*0x100ad48a4*/
            v53 = v62; /*0x100ad48b2*/
            v54 = v63; /*0x100ad48b9*/
            *(_QWORD *)v58 = std::fs::File::set_times::had0248e52bff5c3b(v66, v51); /*0x100ad48cf*/
            if ( *(_QWORD *)v58 ) /*0x100ad48d9*/
              core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v58, v51, v48, v49, v50); /*0x100ad48e2*/
          }
          *a1 = 11; /*0x100ad48e7*/
        }
        goto LABEL_15; /*0x100ad474d*/
      }
      v28 -= 64; /*0x100ad45ad*/
      v37 = *((_QWORD *)v36 + 5) == *((_QWORD *)v36 + 7); /*0x100ad45b1*/
      v36 += 64; /*0x100ad45b5*/
    }
    while ( v37 ); /*0x100ad45b9*/
    close_NOCANCEL(v66[0]); /*0x100ad45be*/
    v38 = v60; /*0x100ad45d5*/
    codexmate_lib::core::relay::codex_thread_visibility::stream_replace_session_meta_lines::ha4fc6f6a6135271f( /*0x100ad45e2*/
      v58,
      v61,
      v60,
      v11,
      v12,
      &v56);
    if ( *(_DWORD *)v58 == 11 ) /*0x100ad45ee*/
    {
      codexmate_lib::core::relay::codex_thread_visibility::restore_rollout_mtime_best_effort::h1815d59067547dd1( /*0x100ad4602*/
        v61,
        v38,
        v62,
        v63);
      *a1 = 11; /*0x100ad4607*/
      core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_thread_visibility..PreparedSessionMetaReplacement$GT$$GT$::hf71f1ca8a4ff5e9d(v59); /*0x100ad4612*/
      return result; /*0x100ad4617*/
    }
    qmemcpy(a1, v58, 0x60u); /*0x100ad46f1*/
    if ( v12 ) /*0x100ad46f7*/
      goto LABEL_16; /*0x100ad46f7*/
    goto LABEL_57; /*0x100ad46f7*/
  }
  v29 = 0; /*0x100ad44c6*/
  while ( 1 ) /*0x100ad44c9*/
  {
    if ( *(_QWORD *)&v65[v29 + 16] != *(_QWORD *)&v65[v29 + 56] ) /*0x100ad44d7*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v27); /*0x100ad4752*/
      v21 = 51; /*0x100ad4757*/
      v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(51, 1); /*0x100ad4766*/
      v39 = 1; /*0x100ad476b*/
      if ( !v46 ) /*0x100ad4773*/
        goto LABEL_44; /*0x100ad4773*/
      qmemcpy(v46, "session_meta line length changed before replacement", 51); /*0x100ad47c9*/
      *a1 = 9; /*0x100ad47d3*/
      a1[1] = 51; /*0x100ad47da*/
      a1[2] = v46; /*0x100ad47e2*/
      a1[3] = 51; /*0x100ad47e6*/
LABEL_64:
      v11 = v65; /*0x100ad47ee*/
      goto LABEL_15; /*0x100ad47f2*/
    }
    if ( (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h9f4cbd6fbcee8df4(v66, 0, *(_QWORD *)&v65[v29 + 48]) & 1) != 0 ) /*0x100ad44ef*/
    {
LABEL_55:
      *a1 = 2; /*0x100ad46d2*/
      a1[1] = v30; /*0x100ad46d9*/
      goto LABEL_64; /*0x100ad46dd*/
    }
    v31 = *(_QWORD *)&v65[v29 + 56]; /*0x100ad44f9*/
    if ( v31 < 0 ) /*0x100ad4501*/
    {
      v39 = 0; /*0x100ad461c*/
      goto LABEL_44; /*0x100ad461c*/
    }
    __n = *(_QWORD *)&v65[v29 + 56]; /*0x100ad4507*/
    if ( v31 ) /*0x100ad450b*/
    {
      v32 = v31; /*0x100ad450d*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, 0); /*0x100ad4510*/
      v33 = _RNvCs1Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed(v32, 1); /*0x100ad451d*/
      if ( v33 ) /*0x100ad4525*/
      {
        v31 = __n; /*0x100ad452b*/
        goto LABEL_32; /*0x100ad452f*/
      }
      v21 = __n; /*0x100ad496b*/
      v39 = 1; /*0x100ad496f*/
LABEL_44:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v39, v21); /*0x100ad461e*/
    }
    v33 = 1; /*0x100ad4531*/
LABEL_32:
    v26 = v66; /*0x100ad4536*/
    v21 = v33; /*0x100ad453a*/
    v27 = v33; /*0x100ad453d*/
    v34 = std::io::default_read_exact::haa83ade3829e94a3(v66, v33, v31); /*0x100ad4540*/
    if ( v34 ) /*0x100ad4548*/
    {
      *a1 = 2; /*0x100ad48f3*/
      a1[1] = v34; /*0x100ad48fa*/
      goto LABEL_72; /*0x100ad48fa*/
    }
    if ( __n != *(_QWORD *)&v65[v29 + 16] ) /*0x100ad455b*/
      break; /*0x100ad455b*/
    v26 = (_BYTE *)v21; /*0x100ad4566*/
    v35 = memcmp((const void *)v21, *(const void **)&v65[v29 + 8], __n); /*0x100ad4569*/
    v27 = __n; /*0x100ad456e*/
    if ( v35 ) /*0x100ad4574*/
      break; /*0x100ad4574*/
    if ( __n ) /*0x100ad457d*/
    {
      v26 = (_BYTE *)v21; /*0x100ad4584*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, __n, 1); /*0x100ad4587*/
    }
    v29 += 64; /*0x100ad458c*/
    if ( v28 == v29 ) /*0x100ad4593*/
      goto LABEL_38; /*0x100ad4593*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v27); /*0x100ad47f7*/
  v47 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1); /*0x100ad4806*/
  if ( !v47 ) /*0x100ad480e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 53); /*0x100ad4983*/
  qmemcpy(v47, "session_meta changed while preparing router migration", 53); /*0x100ad4872*/
  *a1 = 10; /*0x100ad4875*/
  a1[1] = 53; /*0x100ad487c*/
  a1[2] = v47; /*0x100ad4884*/
  a1[3] = 53; /*0x100ad4888*/
LABEL_72:
  v11 = v65; /*0x100ad48fe*/
  if ( __n ) /*0x100ad4909*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, __n, 1); /*0x100ad4917*/
LABEL_15:
  close_NOCANCEL(v66[0]); /*0x100ad43f1*/
  if ( v12 ) /*0x100ad43fc*/
  {
LABEL_16:
    v22 = v11 + 32; /*0x100ad4402*/
    do /*0x100ad4417*/
    {
      v23 = *(v22 - 4); /*0x100ad441d*/
      if ( v23 ) /*0x100ad4424*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v22 - 3), v23, 1); /*0x100ad442f*/
      v25 = *(v22 - 1); /*0x100ad4434*/
      if ( v25 ) /*0x100ad443b*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v25, 1); /*0x100ad4445*/
      v22 += 8; /*0x100ad4410*/
      --v12; /*0x100ad4414*/
    }
    while ( v12 ); /*0x100ad4417*/
  }
LABEL_57:
  if ( v59[0] ) /*0x100ad4704*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v59[0] << 6, 8); /*0x100ad4712*/
  return result; /*0x100ad4717*/
}