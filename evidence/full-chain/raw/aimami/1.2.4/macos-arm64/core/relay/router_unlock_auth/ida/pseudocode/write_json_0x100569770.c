// __ZN13codexmate_lib4core5relay18router_unlock_auth10write_json @ 0x100569770 | 1.2.4 NEW-delta
_Unwind_Exception *__fastcall codexmate_lib::core::relay::router_unlock_auth::write_json::h7be466d29606e26a(
        _Unwind_Exception *a1,
        void *a2,
        size_t a3,
        unsigned __int8 *a4)
{
  size_t v5; // rbx
  void *v6; // r14
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rcx
  void *v9; // r15
  size_t v10; // r14
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 *v16; // rbx
  __int64 (__fastcall *v17)(); // r14
  uintptr_t v18; // r15
  _Unwind_Exception *result; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rsi
  _Unwind_Exception *v25; // rdx
  __int64 (__fastcall *v26)(); // rcx
  __int64 v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r15
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r8
  unsigned __int64 v38; // rdi
  __int64 **v39; // r15
  __int64 *v40; // r12
  __int64 v41; // rbx
  __int64 v42; // r13
  __int64 v43; // r13
  __int64 *v44; // r14
  size_t v45; // r15
  size_t v46; // [rsp+0h] [rbp-90h]
  __int64 *v48; // [rsp+10h] [rbp-80h] BYREF
  __int64 (__fastcall *v49)(); // [rsp+18h] [rbp-78h] BYREF
  __int64 v50; // [rsp+20h] [rbp-70h]
  __int64 v51; // [rsp+28h] [rbp-68h]
  char v52; // [rsp+30h] [rbp-60h]
  __int64 v53; // [rsp+38h] [rbp-58h] BYREF
  __int64 **v54; // [rsp+40h] [rbp-50h]
  __int64 v55; // [rsp+48h] [rbp-48h] BYREF
  __int64 (__fastcall *v56)(); // [rsp+50h] [rbp-40h]
  __int64 v57; // [rsp+58h] [rbp-38h]
  _Unwind_Exception *exception_object; // [rsp+60h] [rbp-30h]

  v5 = a3; /*0x100569784*/
  v6 = a2; /*0x100569787*/
  exception_object = a1; /*0x10056978a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3, a4); /*0x10056978e*/
  v7 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x10056979d*/
  if ( !v7 ) /*0x1005697a5*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100569e23*/
  v55 = 128; /*0x1005697ab*/
  v56 = v7; /*0x1005697b3*/
  v57 = 0; /*0x1005697b7*/
  v48 = &v55; /*0x1005697c3*/
  v49 = (__int64 (__fastcall *)())&unk_10166F14C; /*0x1005697ce*/
  v50 = 2; /*0x1005697d2*/
  v51 = 0; /*0x1005697da*/
  v52 = 0; /*0x1005697e2*/
  v8 = *a4; /*0x1005697e6*/
  switch ( *a4 ) /*0x1005697f9*/
  {
    case 0u: /*0x1005697f9*/
      v9 = a2; /*0x1005697fb*/
      v10 = 4; /*0x1005697fe*/
      v11 = "nullpaneroledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody"; /*0x100569804*/
      goto LABEL_14; /*0x10056980b*/
    case 1u: /*0x1005697f9*/
      v9 = a2; /*0x10056987c*/
      v11 = "false"; /*0x10056988c*/
      if ( a4[1] ) /*0x10056987f*/
        v11 = "trueuuidemithideshow"; /*0x100569896*/
      v10 = a4[1] ^ 5LL; /*0x10056989a*/
LABEL_14:
      memcpy(v7, v11, v10); /*0x10056989e*/
      v57 = v10; /*0x1005698a9*/
      v6 = v9; /*0x1005698ad*/
      goto LABEL_15; /*0x1005698ad*/
    case 2u: /*0x1005697f9*/
      v12 = _$LT$serde_json..number..Number$u20$as$u20$serde_core..ser..Serialize$GT$::serialize::h57af0d522f03aec5( /*0x10056982d*/
              a4 + 8,
              &v48);
      goto LABEL_6; /*0x10056982d*/
    case 3u: /*0x1005697f9*/
      v14 = serde_json::ser::format_escaped_str::h220e2f8de0c1730a(&v48, &v49, *((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3)); /*0x100569865*/
      if ( !v14 ) /*0x10056986d*/
        goto LABEL_15; /*0x10056986d*/
      v13 = serde_json::error::Error::io::h4df820d482c0c826(v14); /*0x100569877*/
      goto LABEL_7; /*0x10056987a*/
    case 4u: /*0x1005697f9*/
      v12 = serde_core::ser::Serializer::collect_seq::h4f39f3cbdd642f3c(&v48, a4 + 8); /*0x10056981b*/
LABEL_6:
      v13 = v12; /*0x100569832*/
      if ( v12 ) /*0x100569838*/
        goto LABEL_7; /*0x100569838*/
      goto LABEL_15; /*0x100569838*/
    case 5u: /*0x1005697f9*/
      v46 = v5; /*0x100569a1c*/
      v27 = *((_QWORD *)a4 + 3); /*0x100569a23*/
      v51 = 1; /*0x100569a28*/
      v52 = 0; /*0x100569a30*/
      *(_BYTE *)v7 = 123; /*0x100569a34*/
      v57 = 1; /*0x100569a37*/
      LOBYTE(v8) = 1; /*0x100569a3f*/
      if ( !v27 ) /*0x100569a44*/
      {
        v51 = 0; /*0x100569a46*/
        *((_BYTE *)v7 + 1) = 125; /*0x100569a4e*/
        v57 = 2; /*0x100569a52*/
        v8 = 0; /*0x100569a5a*/
      }
      LOBYTE(v53) = 0; /*0x100569a5c*/
      BYTE1(v53) = v8; /*0x100569a60*/
      v54 = &v48; /*0x100569a67*/
      v28 = *((_QWORD *)a4 + 1); /*0x100569a6b*/
      v29 = *((_QWORD *)a4 + 2); /*0x100569a70*/
      LOBYTE(v8) = v28 != 0; /*0x100569a78*/
      if ( !v28 ) /*0x100569a7b*/
        v27 = 0; /*0x100569a7b*/
      v30 = 0; /*0x100569a7f*/
      break; /*0x100569a7f*/
  }
  while ( v27-- != 0 ) /*0x100569a90*/
  {
    if ( (v8 & 1) == 0 ) /*0x100569a9d*/
      core::option::unwrap_failed::h44626cade04bbf1e(&anon_0c22962ad8183617843af04262484590_11); /*0x100569e12*/
    if ( v30 ) /*0x100569aa6*/
    {
      if ( v29 < *(unsigned __int16 *)(v30 + 626) ) /*0x100569ab3*/
        goto LABEL_36; /*0x100569ab3*/
      goto LABEL_47; /*0x100569ab3*/
    }
    if ( !v29 ) /*0x100569ad3*/
    {
      v30 = v28; /*0x100569b0d*/
      goto LABEL_46; /*0x100569b10*/
    }
    v30 = v28; /*0x100569ad8*/
    if ( (v29 & 7) == 0 ) /*0x100569adf*/
    {
      v35 = v29; /*0x100569b12*/
      if ( v29 < 8 ) /*0x100569b19*/
        goto LABEL_46; /*0x100569b19*/
      do /*0x100569b5c*/
      {
LABEL_45:
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 632) /*0x100569b20*/
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v35 -= 8LL; /*0x100569b58*/
      }
      while ( v35 ); /*0x100569b5c*/
      goto LABEL_46; /*0x100569b5c*/
    }
    v34 = 0; /*0x100569ae1*/
    do /*0x100569afd*/
    {
      v30 = *(_QWORD *)(v30 + 632); /*0x100569af0*/
      ++v34; /*0x100569af7*/
    }
    while ( (v29 & 7) != v34 ); /*0x100569afd*/
    v35 = v29 - v34; /*0x100569b02*/
    if ( v29 >= 8 ) /*0x100569b09*/
      goto LABEL_45; /*0x100569b09*/
LABEL_46:
    v29 = 0; /*0x100569b5e*/
    v28 = 0; /*0x100569b61*/
    if ( *(_WORD *)(v30 + 626) ) /*0x100569b63*/
    {
LABEL_36:
      v32 = v30; /*0x100569ab9*/
      v33 = v29; /*0x100569abc*/
      goto LABEL_49; /*0x100569abf*/
    }
    do /*0x100569ba5*/
    {
LABEL_47:
      v32 = *(_QWORD *)(v30 + 352); /*0x100569b80*/
      if ( !v32 ) /*0x100569b8a*/
        core::option::unwrap_failed::h44626cade04bbf1e(&anon_0c22962ad8183617843af04262484590_853); /*0x100569daf*/
      ++v28; /*0x100569b90*/
      v33 = *(unsigned __int16 *)(v30 + 624); /*0x100569b93*/
      v30 = *(_QWORD *)(v30 + 352); /*0x100569b9b*/
    }
    while ( (unsigned __int16)v33 >= *(_WORD *)(v32 + 626) ); /*0x100569ba5*/
LABEL_49:
    if ( !v28 ) /*0x100569baa*/
    {
      v29 = v33 + 1; /*0x100569c40*/
      v30 = v32; /*0x100569c44*/
      goto LABEL_57; /*0x100569c44*/
    }
    v36 = v32 + 8 * v33 + 640; /*0x100569bb0*/
    if ( (v28 & 7) != 0 ) /*0x100569bbf*/
    {
      v37 = 0; /*0x100569bc5*/
      do /*0x100569be0*/
      {
        v30 = *(_QWORD *)v36; /*0x100569bd0*/
        v36 = *(_QWORD *)v36 + 632LL; /*0x100569bd3*/
        ++v37; /*0x100569bda*/
      }
      while ( (v28 & 7) != v37 ); /*0x100569be0*/
      v38 = v28 - v37; /*0x100569be5*/
      if ( v28 < 8 ) /*0x100569bec*/
        goto LABEL_55; /*0x100569bec*/
      do /*0x100569c2f*/
      {
LABEL_54:
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36 + 632LL) /*0x100569bf0*/
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v36 = v30 + 632; /*0x100569c24*/
        v38 -= 8LL; /*0x100569c2b*/
      }
      while ( v38 ); /*0x100569c2f*/
      goto LABEL_55; /*0x100569c2f*/
    }
    v38 = v28; /*0x100569c80*/
    if ( v28 >= 8 ) /*0x100569c87*/
      goto LABEL_54; /*0x100569c87*/
LABEL_55:
    v29 = 0; /*0x100569c31*/
LABEL_57:
    v13 = serde_core::ser::SerializeMap::serialize_entry::he29fd8898ca5a908(&v53, v32 + 24 * v33 + 360, v32 + 32 * v33); /*0x100569c47*/
    LOBYTE(v8) = 1; /*0x100569c65*/
    v28 = 0; /*0x100569c67*/
    if ( v13 ) /*0x100569c6f*/
    {
LABEL_7:
      if ( v55 ) /*0x100569841*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x10056984c*/
LABEL_16:
      v53 = v13; /*0x1005698c0*/
      v55 = (__int64)&v53; /*0x1005698c8*/
      v56 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1005698d3*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v48, &unk_1017C8398, &v55); /*0x1005698e6*/
      v16 = v48; /*0x1005698eb*/
      v17 = v49; /*0x1005698ef*/
      v18 = v50; /*0x1005698f3*/
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc173bfdeee8b49ee(&v53); /*0x1005698fb*/
      result = exception_object; /*0x100569900*/
      exception_object->exception_class = 10; /*0x100569904*/
      result->exception_cleanup = (void (__cdecl *)(_Unwind_Reason_Code, _Unwind_Exception *))v16; /*0x10056990b*/
      result->private_1 = (uintptr_t)v17; /*0x10056990f*/
      result->private_2 = v18; /*0x100569913*/
      return result; /*0x100569917*/
    }
  }
  if ( (v53 & 1) != 0 ) /*0x100569cab*/
    core::panicking::panic::h286e2dd5eab048be(&unk_10167267C, 40, &off_101975AB8, v8); /*0x100569da1*/
  v6 = a2; /*0x100569cbc*/
  if ( BYTE1(v53) ) /*0x100569cc3*/
  {
    v39 = v54; /*0x100569cc9*/
    v40 = *v54; /*0x100569ccd*/
    v41 = (__int64)v54[3] - 1; /*0x100569cd4*/
    v54[3] = (__int64 *)v41; /*0x100569cd7*/
    if ( *((_BYTE *)v39 + 32) ) /*0x100569cdb*/
    {
      v42 = v40[2]; /*0x100569ce2*/
      if ( *v40 == v42 ) /*0x100569ceb*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(v40, v40[2], 1, 1, 1); /*0x100569dfc*/
        v42 = v40[2]; /*0x100569e01*/
      }
      *(_BYTE *)(v40[1] + v42) = 10; /*0x100569cf6*/
      v43 = v42 + 1; /*0x100569cfb*/
      v40[2] = v43; /*0x100569cfe*/
      if ( v41 ) /*0x100569d06*/
      {
        v44 = v39[1]; /*0x100569d08*/
        v45 = (size_t)v39[2]; /*0x100569d0c*/
        do /*0x100569d3a*/
        {
          if ( v45 > *v40 - v43 ) /*0x100569d1a*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(v40, v43, v45, 1, 1); /*0x100569d52*/
            v43 = v40[2]; /*0x100569d57*/
          }
          memcpy((void *)(v43 + v40[1]), v44, v45); /*0x100569d2a*/
          v43 += v45; /*0x100569d2f*/
          v40[2] = v43; /*0x100569d32*/
          --v41; /*0x100569d37*/
        }
        while ( v41 ); /*0x100569d3a*/
      }
    }
    else
    {
      v43 = v40[2]; /*0x100569d5e*/
    }
    if ( *v40 == v43 ) /*0x100569d67*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(v40, v43, 1, 1, 1); /*0x100569dcc*/
      v5 = v46; /*0x100569dd1*/
      v6 = a2; /*0x100569dd8*/
      v43 = v40[2]; /*0x100569ddf*/
    }
    else
    {
      v5 = v46; /*0x100569d69*/
      v6 = a2; /*0x100569d70*/
    }
    *(_BYTE *)(v40[1] + v43) = 125; /*0x100569d7c*/
    v40[2] = v43 + 1; /*0x100569d84*/
  }
LABEL_15:
  v15 = v55; /*0x1005698b0*/
  v13 = (__int64)v56; /*0x1005698b4*/
  if ( __OFSUB__(-v55, 1) ) /*0x1005698bb*/
    goto LABEL_16; /*0x1005698be*/
  v20 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h9563029d42e25ca2(v6, v5); /*0x10056992f*/
  if ( v20 ) /*0x100569937*/
  {
    v53 = v20; /*0x10056993d*/
    v55 = (__int64)&v53; /*0x100569945*/
    v56 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100569950*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v48, &unk_1017C836F, &v55); /*0x100569963*/
    v55 = (__int64)v48; /*0x100569970*/
    v56 = v49; /*0x100569974*/
    v57 = v50; /*0x10056997c*/
    if ( (v53 & 3) == 1 ) /*0x10056998c*/
    {
      v21 = v53 - 1; /*0x10056998e*/
      v22 = *(_QWORD *)(v53 - 1); /*0x100569992*/
      v23 = *(_QWORD *)(v53 + 7); /*0x100569996*/
      if ( *(_QWORD *)v23 ) /*0x10056999a*/
        (*(void (__fastcall **)(__int64))v23)(v22); /*0x1005699a5*/
      v24 = *(_QWORD *)(v23 + 8); /*0x1005699a7*/
      if ( v24 ) /*0x1005699ae*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v24, *(_QWORD *)(v23 + 16)); /*0x1005699b7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24, 8); /*0x1005699c9*/
    }
    v25 = exception_object; /*0x1005699ce*/
    exception_object->exception_class = 10; /*0x1005699d2*/
    v26 = v56; /*0x1005699dd*/
    v25->exception_cleanup = (void (__cdecl *)(_Unwind_Reason_Code, _Unwind_Exception *))v55; /*0x1005699e1*/
    v25->private_1 = (uintptr_t)v26; /*0x1005699e5*/
    result = (_Unwind_Exception *)v57; /*0x1005699e9*/
    v25->private_2 = v57; /*0x1005699ed*/
    if ( v15 ) /*0x1005699f4*/
      return (_Unwind_Exception *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, 1); /*0x1005699f6*/
  }
  else
  {
    result = exception_object; /*0x100569c8e*/
    exception_object->exception_class = 11; /*0x100569c92*/
    if ( v15 ) /*0x100569c9c*/
      return (_Unwind_Exception *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, 1); /*0x100569c9c*/
  }
  return result; /*0x100569a06*/
}