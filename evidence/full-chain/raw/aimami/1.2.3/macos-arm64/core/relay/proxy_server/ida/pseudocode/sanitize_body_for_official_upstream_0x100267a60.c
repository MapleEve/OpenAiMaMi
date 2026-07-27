// __ZN13codexmate_lib4core5relay12proxy_server35sanitize_body_for_official_upstream @ 0x100267a60 | 基线 same-set
void __fastcall codexmate_lib::core::relay::proxy_server::sanitize_body_for_official_upstream::hfbf77cd4d93d2100(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  char **v5; // rdx
  __int64 v6; // rdx
  size_t v7; // rbx
  __int64 v8; // r12
  void *v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  _QWORD v12[4]; // [rsp+8h] [rbp-108h] BYREF
  _QWORD v13[3]; // [rsp+28h] [rbp-E8h] BYREF
  char *v14; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C8h]
  void *v16; // [rsp+50h] [rbp-C0h]
  size_t v17; // [rsp+58h] [rbp-B8h]
  char **v18; // [rsp+60h] [rbp-B0h]
  __int64 v19; // [rsp+68h] [rbp-A8h]
  __int64 v20; // [rsp+70h] [rbp-A0h]
  char **v21; // [rsp+78h] [rbp-98h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+80h] [rbp-90h]
  __int64 v23; // [rsp+88h] [rbp-88h]
  __int64 v24; // [rsp+90h] [rbp-80h]
  __int64 v25; // [rsp+98h] [rbp-78h]
  __int64 v26; // [rsp+A0h] [rbp-70h]
  __int64 v27; // [rsp+A8h] [rbp-68h]
  __int64 v28; // [rsp+B0h] [rbp-60h]
  char *v29; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-50h]
  void *__src; // [rsp+C8h] [rbp-48h]
  size_t __n; // [rsp+D0h] [rbp-40h]
  char **v33; // [rsp+D8h] [rbp-38h]
  __int64 v34; // [rsp+E0h] [rbp-30h]
  __int64 v35; // [rsp+E8h] [rbp-28h]

  if ( *a1 == 5 ) /*0x100267a75*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100267a7e*/
    v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100267a8d*/
    if ( !v2 ) /*0x100267a95*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100267d7b*/
    *(_BYTE *)(v2 + 4) = 101; /*0x100267a9f*/
    *(_DWORD *)v2 = 1919906931; /*0x100267aa3*/
    v13[0] = 5; /*0x100267aa9*/
    v13[1] = v2; /*0x100267ab4*/
    v13[2] = 5; /*0x100267abb*/
    LOWORD(v25) = 1; /*0x100267ac6*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v14, a1 + 8, v13); /*0x100267add*/
    if ( __OFSUB__(0, v14) ) /*0x100267ae4*/
    {
      v3 = v15; /*0x100267aed*/
      v4 = 32 * v17; /*0x100267afb*/
      v24 = *(_QWORD *)(v15 + 32 * v17 + 24); /*0x100267b04*/
      v23 = *(_QWORD *)(v15 + 32 * v17 + 16); /*0x100267b0d*/
      v5 = *(char ***)(v15 + 32 * v17); /*0x100267b14*/
      v22 = *(__int64 (__fastcall **)())(v15 + 32 * v17 + 8); /*0x100267b1d*/
      v21 = v5; /*0x100267b24*/
      *(_QWORD *)(v15 + v4 + 24) = v28; /*0x100267b2f*/
      *(_QWORD *)(v3 + v4 + 16) = v27; /*0x100267b38*/
      v6 = v25; /*0x100267b3d*/
      *(_QWORD *)(v3 + v4 + 8) = v26; /*0x100267b45*/
      *(_QWORD *)(v3 + v4) = v6; /*0x100267b4a*/
      if ( (_BYTE)v21 != 6 ) /*0x100267b55*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v21); /*0x100267b62*/
    }
    else
    {
      v35 = v20; /*0x100267b73*/
      v34 = v19; /*0x100267b7e*/
      v33 = v18; /*0x100267b89*/
      __n = v17; /*0x100267b94*/
      __src = v16; /*0x100267b9f*/
      v30 = v15; /*0x100267bb1*/
      v29 = v14; /*0x100267bb5*/
      v12[3] = v28; /*0x100267bbd*/
      v12[2] = v27; /*0x100267bc8*/
      v12[1] = v26; /*0x100267bd7*/
      v12[0] = v25; /*0x100267bde*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100267bf7*/
        &v21,
        &v29,
        v12);
    }
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d( /*0x100267c0f*/
      &v29,
      a1 + 8,
      "previous_response_idweb_search[AiMaMi] web_search tool rejected by upstream; retrying without itcodex responses tr"
      "anslated stream failedcodex-router",
      20);
    if ( (_BYTE)v29 != 6 ) /*0x100267c18*/
    {
      if ( (_BYTE)v29 == 3 ) /*0x100267c22*/
      {
        v7 = __n; /*0x100267c24*/
        if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100267c2b*/
        {
          v8 = 0; /*0x100267c2d*/
          goto LABEL_11; /*0x100267c2d*/
        }
        v9 = __src; /*0x100267c4b*/
        if ( __n ) /*0x100267c4f*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v29, a1 + 8); /*0x100267c51*/
          v8 = 1; /*0x100267c56*/
          v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x100267c64*/
          if ( !v10 ) /*0x100267c6c*/
LABEL_11:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x100267c30*/
          v11 = v10; /*0x100267c6e*/
        }
        else
        {
          v11 = 1; /*0x100267c73*/
        }
        memcpy((void *)v11, v9, v7); /*0x100267c82*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v29); /*0x100267c8b*/
        if ( v7 ) /*0x100267c93*/
        {
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x100267ca7*/
          {
            v29 = (char *)v11; /*0x100267cb1*/
            v30 = v11 + v7; /*0x100267cb5*/
            __src = (void *)40; /*0x100267cb9*/
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hd906709289eb08f4( /*0x100267ccf*/
              &v14,
              &v29);
            v21 = &v14; /*0x100267cd4*/
            v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100267ce2*/
            v29 = "codexmate_lib::core::relay::proxy_serverstream"; /*0x100267cf0*/
            v30 = 40; /*0x100267cf4*/
            __src = "codexmate_lib::core::relay::proxy_serverstream"; /*0x100267cfc*/
            __n = 40; /*0x100267d00*/
            v33 = &off_10195D7C8; /*0x100267d0f*/
            log::__private_api::log::h719f4907c7336ae9(&unk_1017B9C7A, &v21, 3, &v29); /*0x100267d2a*/
            if ( v14 ) /*0x100267d39*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v14, 1); /*0x100267d47*/
          }
        }
        if ( v7 ) /*0x100267d4f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v7, 1); /*0x100267d5c*/
      }
      else
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v29); /*0x100267c41*/
      }
    }
  }
}