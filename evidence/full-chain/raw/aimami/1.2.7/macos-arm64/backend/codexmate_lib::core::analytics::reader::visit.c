// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::reader::visit::h613210282e290e45; addr: 0x1009c0f50; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
volatile signed __int64 *__fastcall codexmate_lib::core::analytics::reader::visit::h613210282e290e45(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  volatile signed __int64 *result; // rax
  volatile signed __int64 *v6; // rbx
  __int16 v7; // bx
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rsi
  bool v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rsi
  _QWORD *v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rsi
  _QWORD *v28; // rax
  volatile signed __int64 *v29; // [rsp+8h] [rbp-A28h] BYREF
  volatile signed __int64 *v30; // [rsp+10h] [rbp-A20h]
  volatile signed __int64 *v31; // [rsp+18h] [rbp-A18h]
  _BYTE __src[1040]; // [rsp+20h] [rbp-A10h] BYREF
  volatile signed __int64 *v33[2]; // [rsp+430h] [rbp-600h] BYREF
  _BYTE __dst[1040]; // [rsp+440h] [rbp-5F0h] BYREF
  __int64 v35; // [rsp+850h] [rbp-1E0h] BYREF
  _QWORD v36[17]; // [rsp+858h] [rbp-1D8h] BYREF
  _BYTE v37[152]; // [rsp+8E0h] [rbp-150h] BYREF
  __int64 v38; // [rsp+978h] [rbp-B8h] BYREF
  int v39; // [rsp+980h] [rbp-B0h]
  __int64 v40; // [rsp+988h] [rbp-A8h]
  __int64 v41; // [rsp+990h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+998h] [rbp-98h]
  __int64 v43; // [rsp+9A0h] [rbp-90h]
  _QWORD *v44; // [rsp+9A8h] [rbp-88h]
  __int64 v45; // [rsp+9B0h] [rbp-80h] BYREF
  _BOOL8 v46; // [rsp+9B8h] [rbp-78h]
  __int64 v47; // [rsp+9C0h] [rbp-70h]
  unsigned __int128 v48; // [rsp+9C8h] [rbp-68h]
  volatile signed __int64 *v49; // [rsp+9D8h] [rbp-58h] BYREF
  char v50; // [rsp+9E0h] [rbp-50h]
  _BOOL8 v51; // [rsp+9E8h] [rbp-48h]
  _QWORD *v52; // [rsp+9F0h] [rbp-40h]
  __int64 v53; // [rsp+9F8h] [rbp-38h]
  bool v54; // [rsp+A07h] [rbp-29h]

  std::sys::fs::read_dir::h768dda1fe4336014(&v29, a2, a3); /*0x1009c0f71*/
  result = v29; /*0x1009c0f7d*/
  if ( (_BYTE)v30 == 2 ) /*0x1009c0f87*/
  {
    *a1 = 2; /*0x1009c0f89*/
    a1[1] = result; /*0x1009c0f90*/
    return result; /*0x1009c0f94*/
  }
  v44 = a4; /*0x1009c0f99*/
  v52 = a1; /*0x1009c0fa0*/
  v49 = v29; /*0x1009c0fa4*/
  v50 = (char)v30; /*0x1009c0fa8*/
  while ( 1 ) /*0x1009c0fcb*/
  {
    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(&v29, &v49); /*0x1009c0fcb*/
    if ( (_DWORD)v29 != 1 ) /*0x1009c0fd7*/
      break; /*0x1009c0fd7*/
    v6 = v31; /*0x1009c0fe4*/
    if ( !v30 ) /*0x1009c0fee*/
    {
      v24 = v52; /*0x1009c138b*/
      *v52 = 2; /*0x1009c138f*/
      v24[1] = v6; /*0x1009c1396*/
LABEL_44:
      result = v49; /*0x1009c13cb*/
      if ( !_InterlockedDecrement64(v49) ) /*0x1009c13cf*/
        return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v49); /*0x1009c13d9*/
      return result; /*0x1009c13d9*/
    }
    memcpy(__dst, __src, sizeof(__dst)); /*0x1009c1007*/
    v33[0] = v30; /*0x1009c100c*/
    v33[1] = v31; /*0x1009c1013*/
    std::fs::DirEntry::file_type::hdd298e01714fd423(v37, v33); /*0x1009c1020*/
    if ( v37[0] == 1 ) /*0x1009c102c*/
    {
      v25 = *(_QWORD *)&v37[8]; /*0x1009c139c*/
      v26 = v52; /*0x1009c13a3*/
      *v52 = 2; /*0x1009c13a7*/
      v26[1] = v25; /*0x1009c13ae*/
      goto LABEL_42; /*0x1009c13ae*/
    }
    v7 = *(_WORD *)&v37[2]; /*0x1009c1032*/
    v8 = *(_WORD *)&v37[2] & 0xF000; /*0x1009c103b*/
    if ( v8 != 0x4000 ) /*0x1009c1045*/
    {
      if ( v8 == 40960 ) /*0x1009c1050*/
        goto LABEL_17; /*0x1009c1050*/
      std::fs::DirEntry::file_name::h82e3a94f480fbff7(&v41, v33); /*0x1009c1060*/
      v9 = v42; /*0x1009c1065*/
      core::str::converts::from_utf8::hb32deb9559450f6e(v37, v42, v43); /*0x1009c1079*/
      if ( *(_DWORD *)v37 == 1 /*0x1009c1188*/
        || (v10 = *(_QWORD *)&v37[16], v7 >= -28672 || *(_QWORD *)&v37[16] < 8u)
        || (v11 = *(_QWORD *)&v37[8], **(_QWORD **)&v37[8] != 0x2D74756F6C6C6F72LL)
        || *(_DWORD *)(*(_QWORD *)&v37[8] + *(_QWORD *)&v37[16] - 6LL) ^ 0x6F736A2E
         | *(unsigned __int16 *)(*(_QWORD *)&v37[8] + *(_QWORD *)&v37[16] - 2LL) ^ 0x6C6E
        && (*(_QWORD *)&v37[16] < 0xAu
         || *(_QWORD *)(*(_QWORD *)&v37[8] + *(_QWORD *)&v37[16] - 10LL) ^ 0x7A2E6C6E6F736A2ELL
          | *(unsigned __int16 *)(*(_QWORD *)&v37[8] + *(_QWORD *)&v37[16] - 2LL) ^ 0x7473LL) )
      {
        v12 = v41; /*0x1009c10c0*/
        if ( !v41 ) /*0x1009c10ca*/
          goto LABEL_17; /*0x1009c10ca*/
LABEL_16:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v12, 1); /*0x1009c1118*/
        goto LABEL_17; /*0x1009c1120*/
      }
      std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v45, v33); /*0x1009c1198*/
      v13 = *(_DWORD *)(v11 + v10 - 4) != 1953724974; /*0x1009c11a6*/
      std::fs::DirEntry::metadata::hcca7f11ed9733fc8(v37, v33); /*0x1009c11b0*/
      v14 = *(_QWORD *)&v37[8]; /*0x1009c11b5*/
      if ( *(_DWORD *)v37 == 1 ) /*0x1009c11c3*/
      {
        v28 = v52; /*0x1009c141e*/
        *v52 = 2; /*0x1009c1422*/
        v28[1] = v14; /*0x1009c1429*/
        if ( v45 ) /*0x1009c1434*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x1009c143f*/
        v27 = v41; /*0x1009c1444*/
        if ( !v41 ) /*0x1009c144e*/
        {
LABEL_42:
          if ( !_InterlockedDecrement64(v33[0]) ) /*0x1009c13b9*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v33); /*0x1009c13c6*/
          goto LABEL_44; /*0x1009c13c6*/
        }
LABEL_48:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v27, 1); /*0x1009c140f*/
        goto LABEL_42; /*0x1009c141c*/
      }
      memcpy(v36, &v37[16], sizeof(v36)); /*0x1009c11dc*/
      v35 = *(_QWORD *)&v37[8]; /*0x1009c11e1*/
      v15 = (__int64)&v35; /*0x1009c11eb*/
      std::fs::Metadata::modified::h0e075817eaa8c909(v37, &v35); /*0x1009c11f2*/
      if ( *(_DWORD *)&v37[8] == 1000000000 ) /*0x1009c1202*/
      {
        if ( (v37[0] & 3) == 1 ) /*0x1009c1213*/
        {
          LOBYTE(v51) = v13; /*0x1009c1219*/
          v53 = *(_QWORD *)v37 - 1LL; /*0x1009c1221*/
          v17 = *(_QWORD *)(*(_QWORD *)v37 - 1LL); /*0x1009c1225*/
          v18 = *(_QWORD *)(*(_QWORD *)v37 + 7LL); /*0x1009c1229*/
          if ( *(_QWORD *)v18 ) /*0x1009c122d*/
            (*(void (__fastcall **)(__int64))v18)(v17); /*0x1009c1239*/
          v19 = *(_QWORD *)(v18 + 8); /*0x1009c123b*/
          if ( v19 ) /*0x1009c1242*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, *(_QWORD *)(v18 + 16)); /*0x1009c124b*/
          v15 = 24; /*0x1009c1250*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, 24, 8); /*0x1009c125e*/
          v13 = v51; /*0x1009c1263*/
        }
LABEL_31:
        v48 = 0u; /*0x1009c129a*/
      }
      else
      {
        v38 = *(_QWORD *)v37; /*0x1009c1271*/
        v39 = *(_DWORD *)&v37[8]; /*0x1009c1278*/
        v15 = (__int64)&v38; /*0x1009c1281*/
        std::time::SystemTime::duration_since::had059553cab94f96(v37, &v38, 0, 0); /*0x1009c128c*/
        if ( *(_DWORD *)v37 == 1 ) /*0x1009c1298*/
          goto LABEL_31; /*0x1009c1298*/
        v48 = *(unsigned int *)&v37[16] + *(unsigned __int64 *)&v37[8] * (unsigned __int128)0x3B9ACA00uLL; /*0x1009c12c9*/
        v16 = *((_QWORD *)&v48 + 1); /*0x1009c12c1*/
      }
      v54 = !v13; /*0x1009c12d4*/
      v53 = v45; /*0x1009c12dc*/
      v51 = v46; /*0x1009c12e4*/
      v40 = v47; /*0x1009c12ec*/
      v20 = v44; /*0x1009c12f3*/
      v21 = v44[2]; /*0x1009c12fa*/
      if ( v21 == *v44 ) /*0x1009c1301*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hee66bcda09fcf0e7(v44, v15, v16); /*0x1009c1306*/
      v22 = v20[1]; /*0x1009c130b*/
      v23 = 48 * v21; /*0x1009c1314*/
      *(_OWORD *)(v22 + v23) = v48; /*0x1009c1325*/
      *(_QWORD *)(v22 + v23 + 16) = v53; /*0x1009c132d*/
      *(_QWORD *)(v22 + v23 + 24) = v51; /*0x1009c1336*/
      *(_QWORD *)(v22 + v23 + 32) = v40; /*0x1009c1342*/
      *(_BYTE *)(v22 + v23 + 40) = v54; /*0x1009c134b*/
      v20[2] = v21 + 1; /*0x1009c1352*/
      v12 = v41; /*0x1009c1356*/
      if ( v41 ) /*0x1009c1360*/
        goto LABEL_16; /*0x1009c1360*/
      goto LABEL_17; /*0x1009c1360*/
    }
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v35, v33); /*0x1009c10da*/
    v9 = v36[0]; /*0x1009c10df*/
    codexmate_lib::core::analytics::reader::visit::h613210282e290e45(v37, v36[0], v36[1], v44); /*0x1009c10fa*/
    if ( *(_DWORD *)v37 != 11 ) /*0x1009c1106*/
    {
      qmemcpy(v52, v37, 0x60u); /*0x1009c1400*/
      v27 = v35; /*0x1009c1403*/
      if ( !v35 ) /*0x1009c140d*/
        goto LABEL_42; /*0x1009c140d*/
      goto LABEL_48; /*0x1009c140d*/
    }
    v12 = v35; /*0x1009c110c*/
    if ( v35 ) /*0x1009c1116*/
      goto LABEL_16; /*0x1009c1116*/
LABEL_17:
    if ( !_InterlockedDecrement64(v33[0]) ) /*0x1009c112c*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v33); /*0x1009c1139*/
  }
  if ( !_InterlockedDecrement64(v49) ) /*0x1009c136f*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v49); /*0x1009c1379*/
  result = v52; /*0x1009c137e*/
  *v52 = 11; /*0x1009c1382*/
  return result; /*0x1009c13de*/
}