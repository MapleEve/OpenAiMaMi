// __ZN13codexmate_lib4core5relay23codex_thread_visibility27find_reference_instructions @ 0x100ad4a10
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::find_reference_instructions | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 *__fastcall codexmate_lib::core::relay::codex_thread_visibility::find_reference_instructions::h37bba5dc08e7bf70(
        __int64 *a1)
{
  __int64 *v1; // r14
  __int64 v2; // r13
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  size_t v27; // rcx
  const void *v28; // rax
  size_t v29; // rsi
  unsigned __int64 v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // rbx
  _QWORD *v33; // r14
  __int64 v34; // rsi
  __int64 *result; // rax
  void *v36; // r13
  __int64 *v37; // rax
  __int64 *v38; // r13
  __int64 v39; // [rsp+0h] [rbp-1B0h] BYREF
  __int64 v40; // [rsp+8h] [rbp-1A8h]
  __int64 v41; // [rsp+10h] [rbp-1A0h]
  __int64 v42; // [rsp+18h] [rbp-198h]
  __int64 v43; // [rsp+20h] [rbp-190h]
  unsigned int v44; // [rsp+28h] [rbp-188h]
  __int64 v45; // [rsp+30h] [rbp-180h]
  _QWORD v46[4]; // [rsp+98h] [rbp-118h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-F8h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-F0h]
  __int64 v49; // [rsp+D0h] [rbp-E0h]
  __int64 v50; // [rsp+D8h] [rbp-D8h]
  void *__src; // [rsp+E0h] [rbp-D0h]
  _QWORD v52[4]; // [rsp+E8h] [rbp-C8h] BYREF
  __int128 v53; // [rsp+108h] [rbp-A8h] BYREF
  void *__dst; // [rsp+118h] [rbp-98h]
  __int64 v55; // [rsp+120h] [rbp-90h]
  __int128 v56; // [rsp+128h] [rbp-88h]
  __int64 *v57; // [rsp+138h] [rbp-78h]
  __int64 v58; // [rsp+140h] [rbp-70h]
  __int64 v59; // [rsp+148h] [rbp-68h] BYREF
  __int64 v60; // [rsp+150h] [rbp-60h]
  __int64 v61; // [rsp+158h] [rbp-58h]
  __int64 v62; // [rsp+160h] [rbp-50h]
  __int64 v63; // [rsp+168h] [rbp-48h]
  size_t __n; // [rsp+170h] [rbp-40h]
  __int64 v65; // [rsp+178h] [rbp-38h]
  __int64 v66; // [rsp+180h] [rbp-30h]

  v57 = a1; /*0x100ad4a24*/
  codexmate_lib::core::relay::codex_thread_visibility::collect_active_rollout_paths::h780c6fe0c7fd3d31(&v39); /*0x100ad4a39*/
  v1 = (__int64 *)v40; /*0x100ad4a45*/
  v59 = v40; /*0x100ad4a5b*/
  v60 = v40; /*0x100ad4a5f*/
  v49 = v39; /*0x100ad4a63*/
  v61 = v39; /*0x100ad4a6a*/
  v66 = v40 + 24 * v41; /*0x100ad4a6e*/
  v62 = v66; /*0x100ad4a72*/
  v50 = v40; /*0x100ad4a79*/
  v2 = 49; /*0x100ad4a80*/
  if ( v41 ) /*0x100ad4a86*/
  {
    v3 = (__int64 *)v40; /*0x100ad4a8c*/
    while ( 1 ) /*0x100ad4a90*/
    {
      v1 = v3 + 3; /*0x100ad4a90*/
      v4 = *v3; /*0x100ad4a94*/
      if ( *v3 == 0x8000000000000000LL ) /*0x100ad4a9a*/
        goto LABEL_56; /*0x100ad4a9a*/
      v5 = v3[2]; /*0x100ad4aa4*/
      v58 = v3[1]; /*0x100ad4aaf*/
      std::sys::fs::metadata::h32fa16d3052ea535(&v39, v58, v5); /*0x100ad4ab6*/
      if ( (_BYTE)v39 ) /*0x100ad4ac2*/
        break; /*0x100ad4ac2*/
      LODWORD(v53) = 0; /*0x100ad4b30*/
      WORD2(v53) = 438; /*0x100ad4b3a*/
      WORD5(v53) = 0; /*0x100ad4b4a*/
      *(_DWORD *)((char *)&v53 + 6) = 1; /*0x100ad4b50*/
      std::fs::OpenOptions::_open::h1dad73452047b8aa(&v39, &v53, v58, v5); /*0x100ad4b73*/
      if ( (_BYTE)v39 ) /*0x100ad4b7f*/
      {
        if ( (v40 & 3) == 1 ) /*0x100ad4b94*/
        {
          v65 = v4; /*0x100ad4b96*/
          v9 = v40 - 1; /*0x100ad4b9a*/
          v10 = *(_QWORD *)(v40 - 1); /*0x100ad4b9e*/
          v11 = *(_QWORD *)(v40 + 7); /*0x100ad4ba2*/
          if ( *(_QWORD *)v11 ) /*0x100ad4ba6*/
            (*(void (__fastcall **)(__int64))v11)(v10); /*0x100ad4bb1*/
          v12 = *(_QWORD *)(v11 + 8); /*0x100ad4bb3*/
          if ( v12 ) /*0x100ad4bba*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x100ad4bc3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24, 8); /*0x100ad4bd5*/
          v4 = v65; /*0x100ad4bda*/
        }
LABEL_18:
        if ( v4 ) /*0x100ad4bf3*/
LABEL_19:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v4, 1); /*0x100ad4bf5*/
        goto LABEL_20; /*0x100ad4c01*/
      }
      v14 = HIDWORD(v39); /*0x100ad4c30*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v39, &v53); /*0x100ad4c37*/
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1); /*0x100ad4c46*/
      v65 = v4; /*0x100ad4c4e*/
      if ( !v15 ) /*0x100ad4c52*/
      {
        v63 = v2; /*0x100ad50fa*/
        v60 = (__int64)v1; /*0x100ad50fe*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000); /*0x100ad510c*/
      }
      v43 = 0; /*0x100ad4c5f*/
      v42 = 0; /*0x100ad4c67*/
      v41 = 0; /*0x100ad4c6f*/
      v39 = v15; /*0x100ad4c76*/
      v40 = 0x2000; /*0x100ad4c7d*/
      v44 = v14; /*0x100ad4c88*/
      v16 = 5; /*0x100ad4c8f*/
      do /*0x100ad4cc9*/
      {
        v45 = v16 - 1; /*0x100ad4cd2*/
        _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3e6b44ac088bb82( /*0x100ad4ce7*/
          &v47,
          &v39);
        v17 = v47; /*0x100ad4cec*/
        if ( v47 == 0x8000000000000001LL ) /*0x100ad4cfb*/
          break; /*0x100ad4cfb*/
        if ( v47 == 0x8000000000000000LL ) /*0x100ad4d08*/
        {
          if ( (v48 & 3) == 1 ) /*0x100ad4caf*/
          {
            v20 = v48 - 1; /*0x100ad4e3a*/
            v21 = *(_QWORD *)(v48 - 1); /*0x100ad4e3e*/
            v22 = *(_QWORD *)(v48 + 7); /*0x100ad4e42*/
            if ( *(_QWORD *)v22 ) /*0x100ad4e46*/
              (*(void (__fastcall **)(__int64))v22)(v21); /*0x100ad4e51*/
            v23 = *(_QWORD *)(v22 + 8); /*0x100ad4e53*/
            if ( v23 ) /*0x100ad4e5a*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v23, *(_QWORD *)(v22 + 16)); /*0x100ad4e63*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 24, 8); /*0x100ad4e75*/
            v4 = v65; /*0x100ad4e7a*/
          }
        }
        else
        {
          v18 = v48; /*0x100ad4d0a*/
          v53 = v48; /*0x100ad4d18*/
          v55 = 0; /*0x100ad4d2d*/
          __dst = nullptr; /*0x100ad4d35*/
          v56 = v48; /*0x100ad4d3c*/
          serde_json::de::from_trait::h51e180b4bb6af5e0(v46, &v53); /*0x100ad4d55*/
          if ( LOBYTE(v46[0]) == 6 ) /*0x100ad4d61*/
          {
            core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(v46); /*0x100ad4d6a*/
          }
          else
          {
            v52[3] = v46[3]; /*0x100ad4d87*/
            v52[2] = v46[2]; /*0x100ad4d95*/
            v52[1] = v46[1]; /*0x100ad4daa*/
            v52[0] = v46[0]; /*0x100ad4db1*/
            v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ad4dcb*/
                    "typefullargsopenwithkindsavetrueuuidemitshowhide",
                    4,
                    v52);
            if ( v19 ) /*0x100ad4dd3*/
            {
              if ( *(_BYTE *)v19 == 3 /*0x100ad4dfe*/
                && *(_QWORD *)(v19 + 24) == 12
                && !(**(_QWORD **)(v19 + 16) ^ 0x5F6E6F6973736573LL
                   | *(unsigned int *)(*(_QWORD *)(v19 + 16) + 8LL) ^ 0x6174656DLL) )
              {
                v24 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ad4e96*/
                        "payload",
                        7,
                        v52);
                if ( v24 ) /*0x100ad4e9e*/
                {
                  v25 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ad4eb3*/
                          &unk_10167D7AA,
                          17,
                          v24);
                  if ( v25 ) /*0x100ad4ebb*/
                  {
                    v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ad4ed0*/
                            "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                            4,
                            v25);
                    if ( v26 ) /*0x100ad4ed8*/
                    {
                      if ( *(_BYTE *)v26 == 3 ) /*0x100ad4ee1*/
                      {
                        v27 = *(_QWORD *)(v26 + 24); /*0x100ad4ee7*/
                        if ( v27 >= 0x3E9 ) /*0x100ad4ef2*/
                        {
                          __src = *(void **)(v26 + 16); /*0x100ad4efc*/
                          __n = v27; /*0x100ad4f03*/
                          v28 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f( /*0x100ad4f0b*/
                                                __src,
                                                v27);
                          v29 = __n; /*0x100ad4f10*/
                          if ( v30 < 0x2F || (v31 = memcmp(&unk_10167D7BB, v28, 0x2Fu), v29 = __n, v31) ) /*0x100ad4f38*/
                          {
                            v63 = v2; /*0x100ad501f*/
                            v60 = (__int64)v1; /*0x100ad5023*/
                            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v53, v29, 0, 1, 1); /*0x100ad503e*/
                            v66 = *((_QWORD *)&v53 + 1); /*0x100ad504a*/
                            if ( (_DWORD)v53 == 1 ) /*0x100ad5055*/
                              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v66, __dst); /*0x100ad511e*/
                            v36 = __dst; /*0x100ad505b*/
                            memcpy(__dst, __src, v29); /*0x100ad506f*/
                            v37 = v57; /*0x100ad5074*/
                            *v57 = v66; /*0x100ad507c*/
                            v37[1] = (__int64)v36; /*0x100ad507f*/
                            v38 = v37; /*0x100ad5083*/
                            v37[2] = v29; /*0x100ad5086*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v52); /*0x100ad5091*/
                            if ( v17 ) /*0x100ad5099*/
                              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100ad50a6*/
                            if ( v40 ) /*0x100ad50b5*/
                              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v40, 1); /*0x100ad50c3*/
                            close_NOCANCEL(v44); /*0x100ad50ce*/
                            if ( v4 ) /*0x100ad50d6*/
                              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v4, 1); /*0x100ad50e4*/
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2cddd3ddc7fca1d6(&v59); /*0x100ad50ed*/
                            return v38; /*0x100ad50f5*/
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v52); /*0x100ad4e17*/
          }
          if ( v17 ) /*0x100ad4e1f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100ad4e30*/
        }
        v16 = v45; /*0x100ad4cb5*/
      }
      while ( v45 ); /*0x100ad4cc9*/
      if ( v40 ) /*0x100ad4f5a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v40, 1); /*0x100ad4f68*/
      close_NOCANCEL(v44); /*0x100ad4f73*/
      if ( v4 ) /*0x100ad4f7b*/
        goto LABEL_19; /*0x100ad4f7b*/
LABEL_20:
      if ( v2-- == 0 ) /*0x100ad4c06*/
      {
        v2 = 0; /*0x100ad4f86*/
        goto LABEL_56; /*0x100ad4f86*/
      }
      v3 = v1; /*0x100ad4c10*/
      if ( v1 == (__int64 *)v66 ) /*0x100ad4c17*/
        goto LABEL_61; /*0x100ad4c17*/
    }
    if ( (v40 & 3) == 1 ) /*0x100ad4ad3*/
    {
      __n = v40 - 1; /*0x100ad4add*/
      v6 = *(_QWORD *)(v40 - 1); /*0x100ad4ae1*/
      v7 = *(_QWORD *)(v40 + 7); /*0x100ad4ae5*/
      if ( *(_QWORD *)v7 ) /*0x100ad4ae9*/
        (*(void (__fastcall **)(__int64))v7)(v6); /*0x100ad4af4*/
      v8 = *(_QWORD *)(v7 + 8); /*0x100ad4af6*/
      if ( v8 ) /*0x100ad4afd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x100ad4b06*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, 24, 8); /*0x100ad4b19*/
    }
    goto LABEL_18; /*0x100ad4b1e*/
  }
LABEL_56:
  v63 = v2; /*0x100ad4f89*/
  v60 = (__int64)v1; /*0x100ad4fa4*/
  if ( (__int64 *)v66 != v1 ) /*0x100ad4fab*/
  {
    v32 = (v66 - (__int64)v1) / 0x18uLL; /*0x100ad4fb0*/
    v33 = v1 + 1; /*0x100ad4fb4*/
    do /*0x100ad4fc7*/
    {
      v34 = *(v33 - 1); /*0x100ad4fc9*/
      if ( v34 ) /*0x100ad4fd0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v33, v34, 1); /*0x100ad4fda*/
      v33 += 3; /*0x100ad4fc0*/
      --v32; /*0x100ad4fc4*/
    }
    while ( v32 ); /*0x100ad4fc7*/
  }
LABEL_61:
  if ( v49 ) /*0x100ad4feb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 24 * v49, 8); /*0x100ad5001*/
  result = v57; /*0x100ad5006*/
  *v57 = 0x8000000000000000LL; /*0x100ad500a*/
  return result; /*0x100ad500d*/
}