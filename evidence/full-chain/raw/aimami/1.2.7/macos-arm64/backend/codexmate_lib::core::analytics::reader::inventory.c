// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::reader::inventory::h4651af9d52ebfe7e; addr: 0x1009c1680; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
_QWORD *__fastcall codexmate_lib::core::analytics::reader::inventory::h4651af9d52ebfe7e(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r15
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r14
  void *v14; // rax
  unsigned __int64 v15; // r14
  _QWORD *v16; // r15
  __int64 v17; // rsi
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r12
  _QWORD v27[19]; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+98h] [rbp-48h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-38h]
  char v31; // [rsp+B7h] [rbp-29h] BYREF

  v28 = 0; /*0x1009c169a*/
  v29 = 16; /*0x1009c16a2*/
  v30 = 0; /*0x1009c16aa*/
  v3 = a2[16]; /*0x1009c16b2*/
  v4 = a2[17]; /*0x1009c16b9*/
  v5 = v3; /*0x1009c16c7*/
  std::sys::fs::symlink_metadata::hd69903fe66faddbd(v27, v3, v4); /*0x1009c16cd*/
  v7 = v27[1]; /*0x1009c16d2*/
  if ( LOBYTE(v27[0]) ) /*0x1009c16e0*/
  {
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v27[1]) ) /*0x1009c16e5*/
    {
LABEL_13:
      *a1 = 2; /*0x1009c17cc*/
      a1[1] = v7; /*0x1009c17d3*/
LABEL_19:
      v15 = v30; /*0x1009c18a5*/
      if ( v30 ) /*0x1009c18ac*/
      {
        v16 = (_QWORD *)(v29 + 24); /*0x1009c18b2*/
        do /*0x1009c18c7*/
        {
          v17 = *(v16 - 1); /*0x1009c18c9*/
          if ( v17 ) /*0x1009c18d0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v16, v17, 1); /*0x1009c18da*/
          v16 += 6; /*0x1009c18c0*/
          --v15; /*0x1009c18c4*/
        }
        while ( v15 ); /*0x1009c18c7*/
      }
      if ( v28 ) /*0x1009c18e8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, 48 * v28, 16); /*0x1009c18fb*/
      return a1; /*0x1009c18fb*/
    }
    if ( (v7 & 3) == 1 ) /*0x1009c16fb*/
    {
      v8 = v7 - 1; /*0x1009c1701*/
      v9 = *(_QWORD *)(v7 - 1); /*0x1009c1706*/
      v10 = *(_QWORD *)(v7 + 7); /*0x1009c170b*/
      if ( *(_QWORD *)v10 ) /*0x1009c1710*/
        (*(void (__fastcall **)(__int64))v10)(v9); /*0x1009c171c*/
      v11 = *(_QWORD *)(v10 + 8); /*0x1009c171e*/
      if ( v11 ) /*0x1009c1726*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16)); /*0x1009c1730*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24, 8); /*0x1009c1742*/
    }
  }
  else
  {
    if ( (v27[1] & 0xF00000000000LL) != 0x400000000000LL ) /*0x1009c1763*/
      goto LABEL_17; /*0x1009c1763*/
    codexmate_lib::core::analytics::reader::visit::h613210282e290e45(v27, v3, v4, &v28); /*0x1009c177a*/
    if ( LODWORD(v27[0]) != 11 ) /*0x1009c1786*/
      goto LABEL_16; /*0x1009c1786*/
  }
  v12 = a2[19]; /*0x1009c178c*/
  v13 = a2[20]; /*0x1009c1793*/
  v5 = v12; /*0x1009c17a1*/
  std::sys::fs::symlink_metadata::hd69903fe66faddbd(v27, v12, v13); /*0x1009c17a7*/
  v7 = v27[1]; /*0x1009c17ac*/
  if ( !LOBYTE(v27[0]) ) /*0x1009c17ba*/
  {
    if ( (v27[1] & 0xF00000000000LL) == 0x400000000000LL ) /*0x1009c17f6*/
    {
      codexmate_lib::core::analytics::reader::visit::h613210282e290e45(v27, v12, v13, &v28); /*0x1009c1809*/
      if ( LODWORD(v27[0]) == 11 ) /*0x1009c1815*/
        goto LABEL_33; /*0x1009c1815*/
LABEL_16:
      qmemcpy(a1, v27, 0x60u); /*0x1009c182a*/
      goto LABEL_19; /*0x1009c182a*/
    }
LABEL_17:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v5, v6); /*0x1009c182f*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x1009c183e*/
    if ( !v14 ) /*0x1009c1846*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35); /*0x1009c19d8*/
    qmemcpy(v14, "analytics source is not a directory", 35); /*0x1009c1880*/
    *a1 = 9; /*0x1009c188a*/
    a1[1] = 35; /*0x1009c1891*/
    a1[2] = v14; /*0x1009c1899*/
    a1[3] = 35; /*0x1009c189d*/
    goto LABEL_19; /*0x1009c189d*/
  }
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v27[1]) ) /*0x1009c17bf*/
    goto LABEL_13; /*0x1009c17c6*/
  if ( (v7 & 3) == 1 ) /*0x1009c191e*/
  {
    v19 = v7 - 1; /*0x1009c1920*/
    v20 = *(_QWORD *)(v7 - 1); /*0x1009c1925*/
    v21 = *(_QWORD *)(v7 + 7); /*0x1009c192a*/
    if ( *(_QWORD *)v21 ) /*0x1009c192f*/
      (*(void (__fastcall **)(__int64))v21)(v20); /*0x1009c193b*/
    v22 = *(_QWORD *)(v21 + 8); /*0x1009c193d*/
    if ( v22 ) /*0x1009c1945*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x1009c194f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24, 8); /*0x1009c1961*/
  }
LABEL_33:
  v23 = v29; /*0x1009c1966*/
  v27[0] = &v31; /*0x1009c1972*/
  if ( v30 >= 2 ) /*0x1009c197d*/
  {
    if ( v30 >= 0x15 ) /*0x1009c19a7*/
    {
      core::slice::sort::stable::driftsort_main::hb7411e31ebc23a77(v29, v30, v27); /*0x1009c19e9*/
    }
    else
    {
      v25 = 48 * v30; /*0x1009c19ad*/
      v26 = 48; /*0x1009c19b1*/
      do /*0x1009c19ca*/
      {
        core::slice::sort::shared::smallsort::insert_tail::h55a294c71c614379(v23, v23 + v26); /*0x1009c19be*/
        v26 += 48; /*0x1009c19c3*/
      }
      while ( v25 != v26 ); /*0x1009c19ca*/
    }
  }
  a1[3] = v30; /*0x1009c1983*/
  v24 = v28; /*0x1009c1987*/
  a1[2] = v29; /*0x1009c198f*/
  a1[1] = v24; /*0x1009c1993*/
  *a1 = 11; /*0x1009c1997*/
  return a1; /*0x1009c1903*/
}