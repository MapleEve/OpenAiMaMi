// mac 1.2.2 NEW codexmate_lib4core12debug_bundle21thread_catalog_h 0x100bb18b0 d=1
unsigned __int64 *__fastcall rusqlite::inner_connection::InnerConnection::open_with_flags::h3a2e27052a583d8e(
        unsigned __int64 *a1,
        const char *a2,
        __int64 a3,
        int a4,
        const char *a5)
{
  sqlite3_mutex *v7; // r15
  unsigned int v8; // eax
  unsigned __int64 v9; // rax
  unsigned int busy; // eax
  sqlite3 *v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // r14d
  unsigned int v16; // eax
  unsigned __int64 *v17; // r15
  _BYTE v18[64]; // [rsp+8h] [rbp-178h] BYREF
  size_t v19[3]; // [rsp+48h] [rbp-138h] BYREF
  size_t v20[3]; // [rsp+60h] [rbp-120h] BYREF
  _QWORD v21[8]; // [rsp+78h] [rbp-108h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-C8h] BYREF
  __int64 *v23; // [rsp+D0h] [rbp-B0h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+D8h] [rbp-A8h]
  __int64 *v25; // [rsp+E0h] [rbp-A0h]
  __int64 (__fastcall *v26)(); // [rsp+E8h] [rbp-98h]
  _QWORD v27[3]; // [rsp+F0h] [rbp-90h] BYREF
  __int64 v28; // [rsp+108h] [rbp-78h]
  __int64 v29; // [rsp+110h] [rbp-70h] BYREF
  __int64 v30; // [rsp+118h] [rbp-68h]
  __int64 v31; // [rsp+120h] [rbp-60h]
  __int64 v32; // [rsp+128h] [rbp-58h]
  sqlite3 *v33; // [rsp+130h] [rbp-50h]
  __int64 v34; // [rsp+138h] [rbp-48h]
  __int64 v35; // [rsp+140h] [rbp-40h]
  __int64 v36; // [rsp+148h] [rbp-38h]
  sqlite3 *ppDb[6]; // [rsp+150h] [rbp-30h] BYREF

  v28 = a3; /*0x100bb18ca*/
  if ( !sqlite3_threadsafe() || (v7 = sqlite3_mutex_alloc(0), sqlite3_mutex_free(v7), v7 == (sqlite3_mutex *)8) ) /*0x100bb18f3*/
  {
    v9 = 0x8000000000000001LL; /*0x100bb1935*/
  }
  else
  {
    if ( sqlite3_libversion_number() <= 3036999 ) /*0x100bb18ff*/
    {
      ppDb[0] = nullptr; /*0x100bb193d*/
      v8 = sqlite3_open_v2(a2, ppDb, a4, a5); /*0x100bb1952*/
      if ( v8 ) /*0x100bb1959*/
        goto LABEL_13; /*0x100bb1959*/
      sqlite3_extended_result_codes(ppDb[0], 1); /*0x100bb1968*/
    }
    else
    {
      ppDb[0] = nullptr; /*0x100bb1908*/
      v8 = sqlite3_open_v2(a2, ppDb, a4 | 0x2000000, a5); /*0x100bb191d*/
      if ( v8 ) /*0x100bb1924*/
      {
LABEL_13:
        v15 = v8; /*0x100bb1a1d*/
        if ( ppDb[0] ) /*0x100bb1a27*/
        {
          rusqlite::error::error_from_handle::hd78209d4a5eceb5e(&v29, ppDb[0], v8); /*0x100bb1b24*/
          if ( __OFSUB__(0, v29) && BYTE4(v33) == 12 && v30 != 0x8000000000000000LL ) /*0x100bb1b45*/
          {
            v27[2] = v32; /*0x100bb1bbc*/
            v27[1] = v31; /*0x100bb1bc7*/
            v27[0] = v30; /*0x100bb1bce*/
            alloc::ffi::c_str::_$LT$impl$u20$core..ffi..c_str..CStr$GT$::to_string_lossy::h92d59085db2314c3( /*0x100bb1be6*/
              &v22,
              a2,
              v28);
            v23 = v27; /*0x100bb1bf2*/
            v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100bb1c00*/
            v25 = &v22; /*0x100bb1c07*/
            v26 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he8f9913113c1108e; /*0x100bb1c15*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v19, byte_1016FD14A, (unsigned __int64)&v23); /*0x100bb1c31*/
            if ( v22 != 0x8000000000000000LL && v22 ) /*0x100bb1c45*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100bb1c53*/
            rusqlite::error::error_from_sqlite_code::hf3e8160fde4a9d40(&v29, v15, v19); /*0x100bb1c66*/
            if ( v27[0] ) /*0x100bb1c75*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100bb1c87*/
          }
          sqlite3_close(ppDb[0]); /*0x100bb1b4b*/
          v21[0] = v29; /*0x100bb1b58*/
          v21[1] = v30; /*0x100bb1b5f*/
          v21[2] = v31; /*0x100bb1b6a*/
          v21[3] = v32; /*0x100bb1b75*/
          v21[4] = v33; /*0x100bb1b80*/
          v21[5] = v34; /*0x100bb1b8b*/
          v21[6] = v35; /*0x100bb1b96*/
          v21[7] = v36; /*0x100bb1ba1*/
          v17 = v21; /*0x100bb1ba8*/
        }
        else
        {
          alloc::ffi::c_str::_$LT$impl$u20$core..ffi..c_str..CStr$GT$::to_string_lossy::h92d59085db2314c3(&v29, a2, v28); /*0x100bb1a3f*/
          v23 = &v29; /*0x100bb1a44*/
          v24 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he8f9913113c1108e; /*0x100bb1a52*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v20, byte_1016F10F6, (unsigned __int64)&v23); /*0x100bb1a6e*/
          v16 = v15; /*0x100bb1a7d*/
          if ( !__OFSUB__(-v29, 1) && v29 ) /*0x100bb1a82*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100bb1a8d*/
            v16 = v15; /*0x100bb1a92*/
          }
          v17 = v21; /*0x100bb1a95*/
          rusqlite::error::error_from_sqlite_code::hf3e8160fde4a9d40(v21, v16, v20); /*0x100bb1aa8*/
        }
        goto LABEL_18; /*0x100bb1aa8*/
      }
    }
    busy = sqlite3_busy_timeout(ppDb[0], 5000); /*0x100bb1976*/
    v11 = ppDb[0]; /*0x100bb197b*/
    if ( busy ) /*0x100bb1981*/
    {
      v17 = (unsigned __int64 *)v18; /*0x100bb1aed*/
      rusqlite::error::error_from_handle::hd78209d4a5eceb5e(v18, ppDb[0], busy); /*0x100bb1afc*/
      sqlite3_close(ppDb[0]); /*0x100bb1b05*/
LABEL_18:
      a1[7] = v17[7]; /*0x100bb1aad*/
      a1[6] = v17[6]; /*0x100bb1ab9*/
      a1[5] = v17[5]; /*0x100bb1ac1*/
      a1[4] = v17[4]; /*0x100bb1ac9*/
      a1[3] = v17[3]; /*0x100bb1ad1*/
      a1[2] = v17[2]; /*0x100bb1ad9*/
      v9 = *v17; /*0x100bb1add*/
      a1[1] = v17[1]; /*0x100bb1ae4*/
      goto LABEL_12; /*0x100bb1ae8*/
    }
    v29 = 1; /*0x100bb1987*/
    v30 = 1; /*0x100bb198f*/
    v31 = 0; /*0x100bb1997*/
    LOBYTE(v32) = 0; /*0x100bb199f*/
    v33 = ppDb[0]; /*0x100bb19a3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100bb19a7*/
    v12 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x28u, 8u); /*0x100bb19b6*/
    if ( !v12 ) /*0x100bb19be*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 40); /*0x100bb1b16*/
    v12[4] = v33; /*0x100bb19c8*/
    v12[3] = v32; /*0x100bb19d0*/
    v12[2] = v31; /*0x100bb19d8*/
    v13 = v29; /*0x100bb19dc*/
    v12[1] = v30; /*0x100bb19e4*/
    *v12 = v13; /*0x100bb19e8*/
    a1[1] = (unsigned __int64)v12; /*0x100bb19eb*/
    a1[2] = (unsigned __int64)v11; /*0x100bb19ef*/
    *((_BYTE *)a1 + 24) = 1; /*0x100bb19f3*/
    v9 = 0x8000000000000016LL; /*0x100bb1a01*/
  }
LABEL_12:
  *a1 = v9; /*0x100bb1a05*/
  return a1; /*0x100bb1a0b*/
}