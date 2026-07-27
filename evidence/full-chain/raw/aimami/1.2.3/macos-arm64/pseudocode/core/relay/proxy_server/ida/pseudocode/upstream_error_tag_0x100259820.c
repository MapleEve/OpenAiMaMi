// __ZN13codexmate_lib4core5relay12proxy_server18upstream_error_tag @ 0x100259820
__int64 __fastcall codexmate_lib::core::relay::proxy_server::upstream_error_tag::hcf71e8f52df5a934(
        size_t *a1,
        unsigned __int8 *a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  size_t v8; // r15
  __int64 v9; // r12
  __int64 result; // rax
  size_t v11; // r12
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int8 v15; // r12
  __int64 v16; // rax
  char *v17; // rsi
  void *v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rax
  void *v21; // r13
  __int64 v22; // rcx
  unsigned __int8 *v23; // rdx
  int v24; // esi
  int v25; // edi
  int v26; // r9d
  int v27; // r8d
  unsigned __int64 v28; // rsi
  size_t v29; // [rsp+0h] [rbp-60h] BYREF
  void *__s2; // [rsp+8h] [rbp-58h]
  size_t __n; // [rsp+10h] [rbp-50h]
  size_t *v32; // [rsp+18h] [rbp-48h] BYREF
  void *__s1; // [rsp+20h] [rbp-40h]
  __int64 v34; // [rsp+28h] [rbp-38h]
  char v35[41]; // [rsp+37h] [rbp-29h] BYREF

  if ( !a2 ) /*0x100259837*/
    goto LABEL_8; /*0x100259837*/
  v3 = *a2; /*0x100259839*/
  if ( v3 == 1 ) /*0x10025983f*/
  {
    v15 = a2[1]; /*0x100259900*/
    v8 = v15 ^ 5LL; /*0x100259908*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10025990c*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x100259919*/
    if ( !v16 ) /*0x100259921*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8); /*0x100259b79*/
    v12 = v16; /*0x100259927*/
    v17 = (char *)&unk_1015DCE49; /*0x100259931*/
    if ( v15 ) /*0x10025993b*/
      v17 = "trueuuidemitshowhide"; /*0x10025993b*/
    v18 = (void *)v16; /*0x10025993f*/
    goto LABEL_21; /*0x100259942*/
  }
  if ( v3 == 2 ) /*0x100259848*/
  {
    v29 = 0; /*0x10025988c*/
    __s2 = (void *)1; /*0x100259894*/
    __n = 0; /*0x10025989c*/
    v34 = 1610612768; /*0x1002598a4*/
    v32 = &v29; /*0x1002598b0*/
    __s1 = &off_10195E1D8; /*0x1002598bb*/
    if ( (unsigned __int8)_$LT$serde_json..number..Number$u20$as$u20$core..fmt..Display$GT$::fmt::hf3bcbc63ca3abd0b( /*0x1002598c9*/
                            a2 + 8,
                            &v32) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DEF8B, 55, v35, &unk_10195E760, &off_10195E208); /*0x100259b6a*/
    v11 = v29; /*0x1002598d6*/
    v12 = (__int64)__s2; /*0x1002598da*/
    v8 = __n; /*0x1002598de*/
    v13 = qword_1019FF218; /*0x1002598e9*/
    if ( !codexmate_lib::platform::debug_log::CODEX_HOME::hdbb870b9a1d083c7 ) /*0x1002598f3*/
      goto LABEL_22; /*0x1002598f3*/
    goto LABEL_11; /*0x1002598f3*/
  }
  if ( v3 != 3 ) /*0x10025984d*/
  {
LABEL_8:
    *a1 = 0x8000000000000000LL; /*0x100259880*/
    return 0x8000000000000000LL; /*0x100259883*/
  }
  v4 = *((_QWORD *)a2 + 2); /*0x10025984f*/
  v5 = *((_QWORD *)a2 + 3); /*0x100259853*/
  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, v5); /*0x100259857*/
  v8 = v7; /*0x10025985c*/
  if ( v7 < 0 ) /*0x100259862*/
  {
    v9 = 0; /*0x100259868*/
    goto LABEL_7; /*0x100259868*/
  }
  if ( v7 ) /*0x100259944*/
  {
    v19 = v6; /*0x100259946*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v5); /*0x100259949*/
    v9 = 1; /*0x10025994e*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x10025995c*/
    if ( !v20 ) /*0x100259964*/
LABEL_7:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x10025986b*/
    v12 = v20; /*0x10025996a*/
    v6 = v19; /*0x10025996d*/
  }
  else
  {
    v12 = 1; /*0x100259972*/
  }
  v18 = (void *)v12; /*0x100259978*/
  v17 = (char *)v6; /*0x10025997b*/
LABEL_21:
  memcpy(v18, v17, v8); /*0x10025997e*/
  v11 = v8; /*0x100259986*/
  v13 = qword_1019FF218; /*0x100259990*/
  if ( !codexmate_lib::platform::debug_log::CODEX_HOME::hdbb870b9a1d083c7 ) /*0x10025999a*/
  {
LABEL_22:
    v14 = qword_1019FF210; /*0x1002599a0*/
    goto LABEL_23; /*0x1002599a0*/
  }
LABEL_11:
  v14 = 0; /*0x1002598f9*/
LABEL_23:
  codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b(&v32, v12, v8, v14, v13); /*0x1002599a7*/
  if ( v34 == v8 ) /*0x1002599ba*/
  {
    v21 = __s1; /*0x1002599bc*/
    if ( !memcmp(__s1, (const void *)v12, v8) ) /*0x1002599d0*/
    {
      if ( v32 ) /*0x100259a21*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v32, 1); /*0x100259a2b*/
      if ( v8 - 1 >= 0x50 ) /*0x100259a38*/
        goto LABEL_27; /*0x100259a38*/
      result = v12 + v8; /*0x100259a3a*/
      v22 = 0x4000000002003LL; /*0x100259a3e*/
      v23 = (unsigned __int8 *)v12; /*0x100259a48*/
      while ( 1 ) /*0x100259a59*/
      {
        v24 = *v23; /*0x100259a59*/
        if ( (v24 & 0x80u) != 0 ) /*0x100259a5f*/
        {
          v25 = v24 & 0x1F; /*0x100259a82*/
          v26 = v23[1] & 0x3F; /*0x100259a8a*/
          if ( (unsigned __int8)v24 <= 0xDFu ) /*0x100259a92*/
          {
            v23 += 2; /*0x100259ad9*/
            v24 = v26 | (v25 << 6); /*0x100259ae3*/
            if ( (unsigned int)(v24 - 48) >= 0xA ) /*0x100259aeb*/
              goto LABEL_46; /*0x100259aeb*/
          }
          else
          {
            v27 = (v26 << 6) | v23[2] & 0x3F; /*0x100259aa1*/
            if ( (unsigned __int8)v24 < 0xF0u ) /*0x100259aa8*/
            {
              v23 += 3; /*0x100259af2*/
              v24 = (v25 << 12) | v27; /*0x100259afc*/
              if ( (unsigned int)(v24 - 48) >= 0xA ) /*0x100259b05*/
                goto LABEL_46; /*0x100259b05*/
            }
            else
            {
              v24 = ((v24 & 7) << 18) | (v27 << 6) | v23[3] & 0x3F; /*0x100259abe*/
              if ( v24 == 1114112 ) /*0x100259ac6*/
              {
LABEL_50:
                *a1 = v11; /*0x100259b3c*/
                a1[1] = v12; /*0x100259b3f*/
                a1[2] = v8; /*0x100259b43*/
                return result; /*0x100259b47*/
              }
              v23 += 4; /*0x100259ac8*/
              if ( (unsigned int)(v24 - 48) >= 0xA ) /*0x100259ad2*/
              {
LABEL_46:
                if ( (v24 & 0xFFFFFFDF) - 65 >= 0x1A ) /*0x100259b1b*/
                {
                  v28 = (unsigned int)(v24 - 45); /*0x100259b21*/
                  if ( (unsigned int)v28 > 0x32 || !_bittest64(&v22, v28) ) /*0x100259b31*/
                    goto LABEL_27; /*0x100259b31*/
                }
              }
            }
          }
        }
        else
        {
          ++v23; /*0x100259a61*/
          if ( (unsigned int)(v24 - 48) >= 0xA ) /*0x100259a6a*/
            goto LABEL_46; /*0x100259a6a*/
        }
        if ( v23 == (unsigned __int8 *)result ) /*0x100259a53*/
          goto LABEL_50; /*0x100259a53*/
      }
    }
  }
  if ( v32 ) /*0x1002599d9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v32, 1); /*0x1002599e4*/
LABEL_27:
  result = 0x8000000000000000LL; /*0x1002599e9*/
  *a1 = 0x8000000000000000LL; /*0x1002599f3*/
  if ( v11 ) /*0x1002599f9*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x100259a06*/
  return result; /*0x100259a0b*/
}