// __ZN13codexmate_lib4core5relay6models18normalize_model_id @ 0x10032cd20 | 基线 same-set
char *__fastcall codexmate_lib::core::relay::models::normalize_model_id::h31ecf32369635efd(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int8 *v8; // r15
  signed __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int8 *v12; // rcx
  unsigned int v13; // edx
  int v14; // esi
  int v15; // r8d
  int v16; // edi
  __int64 v17; // r14
  char *result; // rax
  __int64 v19; // r12
  void *v20; // rax
  __int64 v21; // r13
  _QWORD v22[7]; // [rsp+8h] [rbp-38h] BYREF

  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x10032cd3a*/
  if ( v7 ) /*0x10032cd42*/
  {
    v8 = (unsigned __int8 *)v6; /*0x10032cd48*/
    v9 = v7; /*0x10032cd4b*/
    v10 = v6; /*0x10032cd4e*/
    v11 = v7; /*0x10032cd51*/
    if ( v7 >= 0x20 ) /*0x10032cd58*/
    {
      if ( (unsigned __int64)core::str::count::do_count_chars::h4875767a8f682eeb(v6, v7) <= 0x100 ) /*0x10032cf41*/
        goto LABEL_4; /*0x10032cf41*/
    }
    else if ( (unsigned __int64)core::str::count::char_count_general_case::h35f326d7c82e4f55(v6, v7) <= 0x100 ) /*0x10032cd69*/
    {
LABEL_4:
      v12 = v8; /*0x10032cd6f*/
      while ( 1 ) /*0x10032cd80*/
      {
        if ( v12 == &v8[v9] ) /*0x10032cd83*/
        {
LABEL_24:
          if ( v9 >= 0 ) /*0x10032cf7c*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v11); /*0x10032cf8c*/
            v19 = 1; /*0x10032cf91*/
            v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x10032cf9f*/
            if ( v20 ) /*0x10032cfa7*/
            {
              v21 = (__int64)v20; /*0x10032cfa9*/
              result = (char *)memcpy(v20, v8, v9); /*0x10032cfb5*/
              a1[1] = v9; /*0x10032cfba*/
              a1[2] = v21; /*0x10032cfbe*/
              a1[3] = v9; /*0x10032cfc2*/
              v17 = 0; /*0x10032cfc6*/
              goto LABEL_29; /*0x10032cfc6*/
            }
          }
          else
          {
            v19 = 0; /*0x10032cf7e*/
          }
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v9); /*0x10032cf87*/
        }
        v13 = *v12; /*0x10032cd89*/
        if ( (v13 & 0x80u) != 0 ) /*0x10032cd8e*/
        {
          v14 = v13 & 0x1F; /*0x10032cdb2*/
          v15 = v12[1] & 0x3F; /*0x10032cdba*/
          if ( (unsigned __int8)v13 <= 0xDFu ) /*0x10032cdc1*/
          {
            v12 += 2; /*0x10032ce01*/
            v11 = v15 | (unsigned int)(v14 << 6); /*0x10032ce08*/
            v13 = v11; /*0x10032ce0b*/
            if ( (unsigned int)v11 < 0x20 ) /*0x10032ce10*/
              goto LABEL_18; /*0x10032ce10*/
          }
          else
          {
            v16 = (v15 << 6) | v12[2] & 0x3F; /*0x10032cdce*/
            if ( (unsigned __int8)v13 < 0xF0u ) /*0x10032cdd4*/
            {
              v12 += 3; /*0x10032ce14*/
              v11 = (unsigned int)(v14 << 12); /*0x10032ce18*/
              v10 = (unsigned int)v11 | v16; /*0x10032ce1b*/
              v13 = v10; /*0x10032ce1d*/
              if ( (unsigned int)v10 < 0x20 ) /*0x10032ce22*/
                goto LABEL_18; /*0x10032ce22*/
            }
            else
            {
              v11 = (unsigned __int8)(v13 & 7) << 18; /*0x10032cddd*/
              v10 = (unsigned int)(v16 << 6); /*0x10032cde0*/
              v13 = v11 | v10 | v12[3] & 0x3F; /*0x10032cde8*/
              if ( v13 == 1114112 ) /*0x10032cdf0*/
                goto LABEL_24; /*0x10032cdf0*/
              v12 += 4; /*0x10032cdf6*/
              if ( v13 < 0x20 ) /*0x10032cdfd*/
              {
LABEL_18:
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v11); /*0x10032ce3c*/
                v17 = 1; /*0x10032ce41*/
                result = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x10032ce51*/
                if ( !result ) /*0x10032ce59*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 42); /*0x10032cff4*/
                qmemcpy(result, "relay model id contains control characters", 42); /*0x10032cea1*/
                a1[1] = 42; /*0x10032ceaa*/
                a1[2] = (__int64)result; /*0x10032ceb2*/
                a1[3] = 42; /*0x10032ceb6*/
                goto LABEL_29; /*0x10032cebe*/
              }
            }
          }
        }
        else
        {
          ++v12; /*0x10032cd90*/
          if ( v13 < 0x20 ) /*0x10032cd96*/
            goto LABEL_18; /*0x10032cd96*/
        }
        if ( v13 - 127 < 0x21 ) /*0x10032ce36*/
          goto LABEL_18; /*0x10032ce36*/
      }
    }
    v22[0] = ""; /*0x10032cf4e*/
    v22[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10032cf59*/
    result = (char *)alloc::fmt::format::format_inner::h3c16c74008a310d4(a1 + 1, &unk_1017BC589, v22); /*0x10032cf6c*/
    v17 = 1; /*0x10032cf71*/
    goto LABEL_29; /*0x10032cf77*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x10032cec3*/
  v17 = 1; /*0x10032cec8*/
  result = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x10032ced8*/
  if ( !result ) /*0x10032cee0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x10032cfe5*/
  qmemcpy(result, "relay model id cannot be empty", 30); /*0x10032cf1a*/
  a1[1] = 30; /*0x10032cf1d*/
  a1[2] = (__int64)result; /*0x10032cf25*/
  a1[3] = 30; /*0x10032cf29*/
LABEL_29:
  *a1 = v17; /*0x10032cfc9*/
  return result; /*0x10032cfcc*/
}