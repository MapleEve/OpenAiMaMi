// mac 1.1.8 test_relay_draft_stream node va=0x1005d11d0 depth=1
// _::body
_QWORD *__fastcall _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hd6af5c5e641087b3(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  _BYTE *v2; // rax
  int v3; // r13d
  __int64 v4; // r15
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+8h] [rbp-58h] BYREF
  _BYTE *v11; // [rsp+10h] [rbp-50h]
  __int64 v12; // [rsp+18h] [rbp-48h]
  __int64 *v13; // [rsp+20h] [rbp-40h] BYREF
  __int16 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 **v15; // [rsp+30h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005d11e7*/
  v2 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x80u, 1u); /*0x1005d11f6*/
  if ( !v2 ) /*0x1005d11fe*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1005d1758*/
  v10 = 128; /*0x1005d120e*/
  v11 = v2; /*0x1005d1216*/
  v13 = &v10; /*0x1005d121e*/
  v3 = *a2; /*0x1005d1222*/
  switch ( *a2 ) /*0x1005d1234*/
  {
    case 0u: /*0x1005d1234*/
      *v2 = 123; /*0x1005d1236*/
      v12 = 1; /*0x1005d1239*/
      v14 = 256; /*0x1005d1241*/
      v15 = &v13; /*0x1005d124b*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::h36b6fbe26879c162(&v14, &unk_1012CA3EB, 5, &unk_1012CA3F0, 5); /*0x1005d1271*/
      if ( v4 ) /*0x1005d1277*/
        goto LABEL_18; /*0x1005d1277*/
      if ( (_BYTE)v14 ) /*0x1005d1281*/
        goto LABEL_17; /*0x1005d1281*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::ha72edab222504d4d(&v14, &unk_1012CA3F5, 3, a2 + 8); /*0x1005d165d*/
      if ( v4 ) /*0x1005d1663*/
        goto LABEL_18; /*0x1005d1663*/
      if ( (_BYTE)v14 ) /*0x1005d166d*/
        goto LABEL_17; /*0x1005d166d*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::ha72edab222504d4d(&v14, "modelcontentstream", 5, a2 + 32); /*0x1005d168c*/
      if ( v4 ) /*0x1005d1692*/
        goto LABEL_18; /*0x1005d1692*/
      if ( (v14 & 1) != 0 || !HIBYTE(v14) ) /*0x1005d16a6*/
        goto LABEL_49; /*0x1005d16a6*/
      goto LABEL_48; /*0x1005d16a6*/
    case 1u: /*0x1005d1234*/
      *v2 = 123; /*0x1005d139b*/
      v12 = 1; /*0x1005d139e*/
      v14 = 256; /*0x1005d13a6*/
      v15 = &v13; /*0x1005d13b0*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::h36b6fbe26879c162(&v14, &unk_1012CA3EB, 5, &unk_1012CA3F8, 6); /*0x1005d13d6*/
      if ( v4 ) /*0x1005d13dc*/
        goto LABEL_18; /*0x1005d13dc*/
      if ( (_BYTE)v14 ) /*0x1005d13e2*/
        goto LABEL_17; /*0x1005d13e2*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::hb1530cb7a6e93974(&v14, &unk_1012CA3F8, 6, a2 + 2); /*0x1005d16e2*/
      if ( v4 ) /*0x1005d16e8*/
        goto LABEL_18; /*0x1005d16e8*/
      if ( (_BYTE)v14 ) /*0x1005d16f2*/
        goto LABEL_17; /*0x1005d16f2*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::h1ff633f03943d6d5(&v14, &unk_1012CA3FE, 9, a2 + 8); /*0x1005d1711*/
      if ( v4 ) /*0x1005d1717*/
        goto LABEL_18; /*0x1005d1717*/
      if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x1005d172b*/
        goto LABEL_48; /*0x1005d172b*/
      goto LABEL_49; /*0x1005d172b*/
    case 2u: /*0x1005d1234*/
      *v2 = 123; /*0x1005d12ec*/
      v12 = 1; /*0x1005d12ef*/
      v14 = 256; /*0x1005d12f7*/
      v15 = &v13; /*0x1005d1301*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::h36b6fbe26879c162( /*0x1005d1327*/
             &v14,
             &unk_1012CA3EB,
             5,
             &unk_1012CA407,
             10);
      if ( v4 ) /*0x1005d132d*/
        goto LABEL_18; /*0x1005d132d*/
      if ( (_BYTE)v14 == 1 ) /*0x1005d1337*/
        goto LABEL_17; /*0x1005d1337*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::h1ff633f03943d6d5(&v14, &unk_1012CA3FE, 9, a2 + 8); /*0x1005d1586*/
      if ( v4 ) /*0x1005d158c*/
        goto LABEL_18; /*0x1005d158c*/
      if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x1005d159c*/
        goto LABEL_48; /*0x1005d159c*/
      goto LABEL_49; /*0x1005d159c*/
    case 3u: /*0x1005d1234*/
      *v2 = 123; /*0x1005d1347*/
      v12 = 1; /*0x1005d134a*/
      v14 = 256; /*0x1005d1352*/
      v15 = &v13; /*0x1005d135c*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::h36b6fbe26879c162(&v14, &unk_1012CA3EB, 5, &unk_1012CA411, 5); /*0x1005d1382*/
      if ( v4 ) /*0x1005d1388*/
        goto LABEL_18; /*0x1005d1388*/
      if ( (_BYTE)v14 == 1 ) /*0x1005d138e*/
        goto LABEL_17; /*0x1005d138e*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::ha72edab222504d4d( /*0x1005d15d1*/
             &v14,
             "textuserkill-wal-shmlsof",
             4,
             a2 + 8);
      if ( v4 ) /*0x1005d15d7*/
        goto LABEL_18; /*0x1005d15d7*/
      if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x1005d15e7*/
        goto LABEL_48; /*0x1005d15e7*/
      goto LABEL_49; /*0x1005d15e7*/
    case 4u: /*0x1005d1234*/
      *v2 = 123; /*0x1005d1291*/
      v12 = 1; /*0x1005d1294*/
      v14 = 256; /*0x1005d129c*/
      v15 = &v13; /*0x1005d12a6*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::h36b6fbe26879c162( /*0x1005d12cc*/
             &v14,
             &unk_1012CA3EB,
             5,
             "donetooletagfromlinkvaryMenu",
             4);
      if ( v4 ) /*0x1005d12d2*/
        goto LABEL_18; /*0x1005d12d2*/
      if ( (_BYTE)v14 ) /*0x1005d12dc*/
        goto LABEL_17; /*0x1005d12dc*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::hd3c5ce374947300a( /*0x1005d14a3*/
             &v14,
             "okprimary_windowprolitechatgptprolitepro",
             2,
             a2 + 1);
      if ( v4 ) /*0x1005d14a9*/
        goto LABEL_18; /*0x1005d14a9*/
      if ( (_BYTE)v14 ) /*0x1005d14b3*/
        goto LABEL_17; /*0x1005d14b3*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::h1ff633f03943d6d5(&v14, &unk_1012CA416, 12, a2 + 8); /*0x1005d14d2*/
      if ( v4 ) /*0x1005d14d8*/
        goto LABEL_18; /*0x1005d14d8*/
      if ( (_BYTE)v14 ) /*0x1005d14e2*/
        goto LABEL_17; /*0x1005d14e2*/
      v4 = serde_core::ser::SerializeMap::serialize_entry::h1ff633f03943d6d5(&v14, &unk_1012CA422, 7, a2 + 16); /*0x1005d1501*/
      if ( v4 ) /*0x1005d1507*/
        goto LABEL_18; /*0x1005d1507*/
      if ( (_BYTE)v14 ) /*0x1005d1511*/
      {
LABEL_17:
        v4 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1005d13ed*/
        goto LABEL_18; /*0x1005d13ed*/
      }
      v4 = serde_core::ser::SerializeMap::serialize_entry::h544b962a0ac81076(&v14, "error", 5, a2 + 24); /*0x1005d1530*/
      if ( v4 ) /*0x1005d1536*/
      {
LABEL_18:
        if ( v10 ) /*0x1005d13f7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005d1402*/
        goto LABEL_20; /*0x1005d1402*/
      }
      if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x1005d154a*/
LABEL_48:
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2fa7c5e9e7ae59a0(*v15, "}false", 1); /*0x1005d15e9*/
LABEL_49:
      v8 = v10; /*0x1005d1601*/
      v4 = (__int64)v11; /*0x1005d1605*/
      if ( v10 == 0x8000000000000000LL ) /*0x1005d160c*/
      {
LABEL_20:
        *a1 = 0x8000000000000005LL; /*0x1005d1407*/
        a1[1] = v4; /*0x1005d140f*/
        if ( (unsigned int)(v3 - 1) < 2 ) /*0x1005d141a*/
          return a1; /*0x1005d141a*/
        goto LABEL_21; /*0x1005d141a*/
      }
      v9 = v12; /*0x1005d1612*/
      a1[1] = 0; /*0x1005d1616*/
      a1[2] = v8; /*0x1005d161e*/
      a1[3] = v4; /*0x1005d1622*/
      a1[4] = v9; /*0x1005d1626*/
      *a1 = 0x8000000000000025LL; /*0x1005d162f*/
      if ( (unsigned int)(v3 - 1) < 2 ) /*0x1005d1639*/
        return a1; /*0x1005d1639*/
LABEL_21:
      if ( !v3 ) /*0x1005d141f*/
      {
        v5 = 32; /*0x1005d1447*/
        if ( *((_QWORD *)a2 + 1) ) /*0x1005d1443*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005d145b*/
LABEL_28:
        if ( !*(_QWORD *)&a2[v5] ) /*0x1005d1467*/
          return a1; /*0x1005d1467*/
        goto LABEL_29; /*0x1005d1467*/
      }
      v5 = 8; /*0x1005d1421*/
      if ( v3 == 3 ) /*0x1005d142b*/
        goto LABEL_28; /*0x1005d142b*/
      v6 = *((_QWORD *)a2 + 3); /*0x1005d142d*/
      if ( v6 != 0x8000000000000000LL && v6 ) /*0x1005d143f*/
LABEL_29:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005d1469*/
      return a1;
  }
}