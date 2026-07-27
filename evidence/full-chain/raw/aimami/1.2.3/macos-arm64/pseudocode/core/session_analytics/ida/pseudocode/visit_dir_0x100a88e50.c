// __ZN13codexmate_lib4core17session_analytics9visit_dir @ 0x100a88e50 | 基线 same-set
void __fastcall codexmate_lib::core::session_analytics::visit_dir::hb67ededd4101d90b(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  void *v9; // r14
  size_t v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD __src[132]; // [rsp+8h] [rbp-1218h] BYREF
  __int64 v19; // [rsp+428h] [rbp-DF8h] BYREF
  char v20; // [rsp+430h] [rbp-DF0h]
  __int64 v21; // [rsp+850h] [rbp-9D0h]
  __int64 v22; // [rsp+C78h] [rbp-5A8h]
  char v23; // [rsp+C80h] [rbp-5A0h]
  volatile signed __int64 *__dst[132]; // [rsp+C88h] [rbp-598h] BYREF
  _QWORD v25[18]; // [rsp+10A8h] [rbp-178h] BYREF
  __int64 v26; // [rsp+1138h] [rbp-E8h] BYREF
  _QWORD v27[18]; // [rsp+1140h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+11D0h] [rbp-50h] BYREF
  void *v29; // [rsp+11D8h] [rbp-48h]
  size_t __n; // [rsp+11E0h] [rbp-40h]
  __int64 v31; // [rsp+11E8h] [rbp-38h]
  __int64 v32; // [rsp+11F0h] [rbp-30h]

  __src[62] = 0; /*0x100a88e64*/
  std::sys::fs::read_dir::h768dda1fe4336014(&v19, a1, a2); /*0x100a88e83*/
  v4 = v19; /*0x100a88e8f*/
  if ( v20 != 2 ) /*0x100a88e99*/
  {
    v19 = 0; /*0x100a88efd*/
    v21 = 0; /*0x100a88f08*/
    v22 = v4; /*0x100a88f13*/
    v23 = v20; /*0x100a88f1a*/
    while ( 1 ) /*0x100a88f86*/
    {
      while ( 1 ) /*0x100a88f42*/
      {
        _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb16283f610dc29bd( /*0x100a88f42*/
          __src,
          &v19);
        if ( !__src[0] ) /*0x100a88f4f*/
        {
          core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(&v19); /*0x100a891da*/
          return; /*0x100a891da*/
        }
        memcpy(__dst, __src, sizeof(__dst)); /*0x100a88f60*/
        std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v28, __dst); /*0x100a88f6c*/
        v9 = v29; /*0x100a88f71*/
        v10 = __n; /*0x100a88f75*/
        if ( !(unsigned __int8)std::path::Path::is_dir::h7ca012509d3e379e(v29, __n) ) /*0x100a88f7f*/
          break; /*0x100a88f7f*/
        codexmate_lib::core::session_analytics::visit_dir::hb67ededd4101d90b(v9, v10, a3); /*0x100a88f91*/
LABEL_17:
        if ( v28 ) /*0x100a89017*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v28, 1); /*0x100a89021*/
        if ( !_InterlockedDecrement64(__dst[0]) ) /*0x100a8902d*/
          goto LABEL_9; /*0x100a89031*/
      }
      v11 = std::path::Path::file_name::hf6c2daad91e50ebf(v9, v10); /*0x100a88fa6*/
      if ( !v11 ) /*0x100a88fae*/
        goto LABEL_17; /*0x100a88fae*/
      core::str::converts::from_utf8::hb32deb9559450f6e(&v26, v11, v12); /*0x100a88fba*/
      if ( (unsigned __int8)v26 | (v27[1] < 8u) /*0x100a89000*/
        || *(_QWORD *)v27[0] != 0x2D74756F6C6C6F72LL
        || *(_DWORD *)(v27[0] + v27[1] - 6LL) ^ 0x6F736A2E | *(unsigned __int16 *)(v27[0] + v27[1] - 2LL) ^ 0x6C6E )
      {
        goto LABEL_17; /*0x100a89002*/
      }
      std::fs::DirEntry::metadata::hcca7f11ed9733fc8(&v26, __dst); /*0x100a89046*/
      if ( (_DWORD)v26 == 1 ) /*0x100a89052*/
      {
        if ( (v27[0] & 3) == 1 ) /*0x100a89063*/
        {
          v31 = v27[0] - 1LL; /*0x100a8906d*/
          v13 = *(_QWORD *)(v27[0] - 1LL); /*0x100a89071*/
          v32 = *(_QWORD *)(v27[0] + 7LL); /*0x100a89079*/
          if ( *(_QWORD *)v32 ) /*0x100a8907d*/
LABEL_28:
            (*(void (__fastcall **)(__int64))v32)(v13); /*0x100a890f4*/
LABEL_29:
          v14 = *(_QWORD *)(v32 + 8); /*0x100a890f9*/
          if ( v14 ) /*0x100a89104*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v14, *(_QWORD *)(v32 + 16)); /*0x100a8910d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24, 8); /*0x100a89120*/
        }
      }
      else
      {
        memcpy(v25, v27, sizeof(v25)); /*0x100a890a2*/
        std::fs::Metadata::modified::h0e075817eaa8c909(&v26, v25); /*0x100a890b1*/
        if ( LODWORD(v27[0]) == 1000000000 ) /*0x100a890c1*/
        {
          if ( (v26 & 3) == 1 ) /*0x100a890d2*/
          {
            v31 = v26 - 1; /*0x100a890dc*/
            v13 = *(_QWORD *)(v26 - 1); /*0x100a890e0*/
            v32 = *(_QWORD *)(v26 + 7); /*0x100a890e8*/
            if ( *(_QWORD *)v32 ) /*0x100a890ec*/
              goto LABEL_28; /*0x100a890f2*/
            goto LABEL_29; /*0x100a890f2*/
          }
        }
        else
        {
          v25[0] = v26; /*0x100a8912e*/
          LODWORD(v25[1]) = v27[0]; /*0x100a89135*/
          std::time::SystemTime::duration_since::had059553cab94f96(&v26, v25, 0, 0); /*0x100a8914d*/
          if ( (_DWORD)v26 != 1 ) /*0x100a89159*/
          {
            v31 = v27[0]; /*0x100a891cd*/
            goto LABEL_34; /*0x100a891d1*/
          }
        }
      }
      v31 = 0; /*0x100a8915b*/
LABEL_34:
      v32 = v28; /*0x100a89163*/
      v15 = a3[2]; /*0x100a8916b*/
      if ( v15 == *a3 ) /*0x100a89172*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(a3); /*0x100a89177*/
      v16 = a3[1]; /*0x100a8917c*/
      v17 = 32 * v15; /*0x100a89183*/
      *(_QWORD *)(v16 + v17) = v32; /*0x100a8918b*/
      *(_QWORD *)(v16 + v17 + 8) = v9; /*0x100a8918f*/
      *(_QWORD *)(v16 + v17 + 16) = v10; /*0x100a89194*/
      *(_QWORD *)(v16 + v17 + 24) = v31; /*0x100a8919d*/
      a3[2] = v15 + 1; /*0x100a891a5*/
      if ( !_InterlockedDecrement64(__dst[0]) ) /*0x100a891b0*/
LABEL_9:
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x100a88f30*/
    }
  }
  if ( (v19 & 3) == 1 ) /*0x100a88ea3*/
  {
    v5 = v19 - 1; /*0x100a88ea9*/
    v6 = *(_QWORD *)(v19 - 1); /*0x100a88ead*/
    v7 = *(_QWORD *)(v19 + 7); /*0x100a88eb1*/
    if ( *(_QWORD *)v7 ) /*0x100a88eb5*/
      (*(void (__fastcall **)(_QWORD))v7)(*(_QWORD *)(v19 - 1)); /*0x100a88ec1*/
    v8 = *(_QWORD *)(v7 + 8); /*0x100a88ec3*/
    if ( v8 ) /*0x100a88ecb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x100a88ed5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x100a88ef8*/
  }
}