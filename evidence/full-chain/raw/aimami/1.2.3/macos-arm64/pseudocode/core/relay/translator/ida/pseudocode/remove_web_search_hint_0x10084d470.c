// __ZN13codexmate_lib4core5relay10translator22remove_web_search_hint @ 0x10084d470 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::translator::remove_web_search_hint::h746cda0ae492b867(
        signed __int64 *a1,
        char *a2,
        signed __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r14
  signed __int64 v8; // rdx
  signed __int64 v9; // r13
  unsigned __int64 v10; // rbx
  char *v11; // r15
  __int64 v12; // r15
  unsigned __int8 *v13; // rbx
  bool v14; // zf
  __int64 v15; // r14
  void *result; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r9
  signed __int64 v20; // r13
  signed __int64 v21; // r13
  unsigned __int8 *v22; // rcx
  unsigned __int8 *v23; // rcx
  int v24; // edx
  unsigned __int8 *v25; // r14
  unsigned __int8 *v26; // rcx
  int v27; // esi
  int v28; // edx
  int v29; // r8d
  int v30; // edi
  unsigned __int8 v31; // si
  size_t v32; // rbx
  signed __int64 *v33; // rdx
  char *v34; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+10h] [rbp-B0h]
  signed __int64 v36; // [rsp+18h] [rbp-A8h]
  int v37; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-48h]
  void *__src; // [rsp+88h] [rbp-38h]
  signed __int64 *v40; // [rsp+90h] [rbp-30h]

  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(&v34, a2, a3, &unk_101674D0D, 37); /*0x10084d4a4*/
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x10084d4b0*/
    &v37,
    &v34);
  if ( v37 != 1 ) /*0x10084d4b9*/
  {
    if ( a3 < 0 ) /*0x10084d4ea*/
    {
      v5 = 0; /*0x10084d4ec*/
      goto LABEL_8; /*0x10084d4ec*/
    }
    if ( a3 ) /*0x10084d4fa*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v37, &v34); /*0x10084d500*/
      v5 = 1; /*0x10084d505*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x10084d513*/
      if ( !v6 ) /*0x10084d51b*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, a3); /*0x10084d4ef*/
      v7 = v6; /*0x10084d51d*/
    }
    else
    {
      v7 = 1; /*0x10084d5b5*/
    }
    result = memcpy((void *)v7, a2, a3); /*0x10084d5c4*/
    *a1 = a3; /*0x10084d5c9*/
    a1[1] = v7; /*0x10084d5cd*/
    a1[2] = a3; /*0x10084d5d1*/
    return result; /*0x10084d5d5*/
  }
  v4 = v38; /*0x10084d4bb*/
  if ( v38 ) /*0x10084d4c2*/
  {
    if ( a3 <= v38 ) /*0x10084d4c7*/
    {
      if ( a3 != v38 ) /*0x10084d525*/
LABEL_5:
        core::str::slice_error_fail::h480e51fbd8b15eba(a2, a3, 0, v38, &off_10196C838); /*0x10084d4d0*/
    }
    else if ( a2[v38] <= -65 ) /*0x10084d4ce*/
    {
      goto LABEL_5; /*0x10084d4ce*/
    }
  }
  v40 = a1; /*0x10084d527*/
  __src = (void *)core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hdd9c7a1211e7482d(a2, v38); /*0x10084d536*/
  v9 = v8; /*0x10084d53a*/
  v10 = a3 - v4; /*0x10084d53d*/
  v11 = &a2[v4]; /*0x10084d540*/
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(&v34, &a2[v4], v10, &unk_101674D32, 2); /*0x10084d559*/
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x10084d565*/
    &v37,
    &v34);
  if ( v37 != 1 ) /*0x10084d56e*/
  {
    v12 = 1; /*0x10084d59a*/
    v13 = nullptr; /*0x10084d5a0*/
    v14 = v9 == 0; /*0x10084d5a2*/
    if ( v9 >= 0 ) /*0x10084d5a5*/
      goto LABEL_25; /*0x10084d5a5*/
LABEL_19:
    v15 = 0; /*0x10084d5a7*/
    goto LABEL_20; /*0x10084d5a7*/
  }
  if ( v38 ) /*0x10084d577*/
  {
    if ( v10 <= v38 ) /*0x10084d57c*/
    {
      if ( v10 != v38 ) /*0x10084d5da*/
LABEL_17:
        core::str::slice_error_fail::h480e51fbd8b15eba(v11, v10, v38, v10, &off_10196C850); /*0x10084d585*/
    }
    else if ( v11[v38] < -64 ) /*0x10084d583*/
    {
      goto LABEL_17; /*0x10084d583*/
    }
  }
  v13 = (unsigned __int8 *)(v10 - v38); /*0x10084d5dc*/
  v12 = (__int64)&v11[v38]; /*0x10084d5df*/
  v14 = v9 == 0; /*0x10084d5e2*/
  if ( v9 < 0 ) /*0x10084d5e5*/
    goto LABEL_19; /*0x10084d5e5*/
LABEL_25:
  if ( v14 ) /*0x10084d5e7*/
  {
    v18 = 1; /*0x10084d60b*/
    goto LABEL_29; /*0x10084d60b*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v37, &v34); /*0x10084d5e9*/
  v15 = 1; /*0x10084d5ee*/
  v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x10084d5fc*/
  if ( !v17 ) /*0x10084d604*/
LABEL_20:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15, v9); /*0x10084d5aa*/
  v18 = v17; /*0x10084d606*/
LABEL_29:
  memcpy((void *)v18, __src, v9); /*0x10084d611*/
  v34 = (char *)v9; /*0x10084d620*/
  v35 = v18; /*0x10084d627*/
  v36 = v9; /*0x10084d62e*/
  if ( v13 ) /*0x10084d638*/
  {
    if ( v9 ) /*0x10084d641*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v34, v9, 2, 1, 1, v19); /*0x10084d65d*/
      v18 = v35; /*0x10084d662*/
      v20 = v36; /*0x10084d669*/
      *(_WORD *)(v35 + v36) = 2570; /*0x10084d670*/
      v21 = v20 + 2; /*0x10084d677*/
      v36 = v21; /*0x10084d67b*/
    }
    else
    {
      v21 = 0; /*0x10084d684*/
    }
    v22 = nullptr; /*0x10084d690*/
    while ( v22 != v13 ) /*0x10084d6b0*/
    {
      v25 = v22; /*0x10084d6b2*/
      v26 = &v22[v12]; /*0x10084d6b5*/
      v27 = *v26; /*0x10084d6b8*/
      if ( (v27 & 0x80u) == 0 ) /*0x10084d6be*/
      {
        v23 = v26 + 1; /*0x10084d6a0*/
        v24 = v27; /*0x10084d6a3*/
      }
      else
      {
        v28 = v27 & 0x1F; /*0x10084d6c2*/
        v29 = v26[1] & 0x3F; /*0x10084d6ca*/
        if ( (unsigned __int8)v27 <= 0xDFu ) /*0x10084d6d2*/
        {
          v23 = v26 + 2; /*0x10084d702*/
          v24 = v29 | (v28 << 6); /*0x10084d709*/
        }
        else
        {
          v30 = (v29 << 6) | v26[2] & 0x3F; /*0x10084d6df*/
          if ( (unsigned __int8)v27 < 0xF0u ) /*0x10084d6e6*/
          {
            v23 = v26 + 3; /*0x10084d70e*/
            v24 = v30 | (v28 << 12); /*0x10084d715*/
          }
          else
          {
            v31 = v26[3]; /*0x10084d6e8*/
            v23 = v26 + 4; /*0x10084d6ec*/
            v24 = (v30 << 6) | v31 & 0x3F | ((v28 & 7) << 18); /*0x10084d6fe*/
          }
        }
      }
      v22 = &v23[-v12]; /*0x10084d6a5*/
      if ( v24 != 10 ) /*0x10084d6ab*/
        goto LABEL_44; /*0x10084d6ab*/
    }
    v25 = v13; /*0x10084d719*/
LABEL_44:
    v32 = v13 - v25; /*0x10084d71c*/
    if ( v32 > (unsigned __int64)&v34[-v21] ) /*0x10084d72c*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v34, v21, v32, 1, 1, v19); /*0x10084d79a*/
      v18 = v35; /*0x10084d79f*/
      v21 = v36; /*0x10084d7a6*/
    }
    memcpy((void *)(v21 + v18), &v25[v12], v32); /*0x10084d73d*/
    v36 = v32 + v21; /*0x10084d745*/
  }
  v33 = v40; /*0x10084d753*/
  v40[2] = v36; /*0x10084d757*/
  result = v34; /*0x10084d75b*/
  v33[1] = v35; /*0x10084d769*/
  *v33 = (signed __int64)result; /*0x10084d76d*/
  return result; /*0x10084d770*/
}