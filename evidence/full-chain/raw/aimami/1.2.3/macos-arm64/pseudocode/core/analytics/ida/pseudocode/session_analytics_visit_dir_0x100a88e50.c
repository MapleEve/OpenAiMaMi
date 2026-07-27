// 1.2.3 baseline same-set | __ZN13codexmate_lib4core17session_analytics9visit_dir17hb67ededd4101d90bE @ 0x100a88e50 | full-body via IDA decompiler
// 1.2.3 baseline same-set | codexmate_lib::core::session_analytics::visit_dir | 完整基线逆(decompile+归目录)
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

  __src[62] = 0;
  std::sys::fs::read_dir::h768dda1fe4336014(&v19, a1, a2);
  v4 = v19;
  if ( v20 != 2 )
  {
    v19 = 0;
    v21 = 0;
    v22 = v4;
    v23 = v20;
    while ( 1 )
    {
      while ( 1 )
      {
        _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb16283f610dc29bd(
          __src,
          &v19);
        if ( !__src[0] )
        {
          core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(&v19);
          return;
        }
        memcpy(__dst, __src, sizeof(__dst));
        std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v28, __dst);
        v9 = v29;
        v10 = __n;
        if ( !(unsigned __int8)std::path::Path::is_dir::h7ca012509d3e379e(v29, __n) )
          break;
        codexmate_lib::core::session_analytics::visit_dir::hb67ededd4101d90b(v9, v10, a3);
LABEL_17:
        if ( v28 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v28, 1);
        if ( !_InterlockedDecrement64(__dst[0]) )
          goto LABEL_9;
      }
      v11 = std::path::Path::file_name::hf6c2daad91e50ebf(v9, v10);
      if ( !v11 )
        goto LABEL_17;
      core::str::converts::from_utf8::hb32deb9559450f6e(&v26, v11, v12);
      if ( (unsigned __int8)v26 | (v27[1] < 8u)
        || *(_QWORD *)v27[0] != 0x2D74756F6C6C6F72LL
        || *(_DWORD *)(v27[0] + v27[1] - 6LL) ^ 0x6F736A2E | *(unsigned __int16 *)(v27[0] + v27[1] - 2LL) ^ 0x6C6E )
      {
        goto LABEL_17;
      }
      std::fs::DirEntry::metadata::hcca7f11ed9733fc8(&v26, __dst);
      if ( (_DWORD)v26 == 1 )
      {
        if ( (v27[0] & 3) == 1 )
        {
          v31 = v27[0] - 1LL;
          v13 = *(_QWORD *)(v27[0] - 1LL);
          v32 = *(_QWORD *)(v27[0] + 7LL);
          if ( *(_QWORD *)v32 )
LABEL_28:
            (*(void (__fastcall **)(__int64))v32)(v13);
LABEL_29:
          v14 = *(_QWORD *)(v32 + 8);
          if ( v14 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v14, *(_QWORD *)(v32 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24, 8);
        }
      }
      else
      {
        memcpy(v25, v27, sizeof(v25));
        std::fs::Metadata::modified::h0e075817eaa8c909(&v26, v25);
        if ( LODWORD(v27[0]) == 1000000000 )
        {
          if ( (v26 & 3) == 1 )
          {
            v31 = v26 - 1;
            v13 = *(_QWORD *)(v26 - 1);
            v32 = *(_QWORD *)(v26 + 7);
            if ( *(_QWORD *)v32 )
              goto LABEL_28;
            goto LABEL_29;
          }
        }
        else
        {
          v25[0] = v26;
          LODWORD(v25[1]) = v27[0];
          std::time::SystemTime::duration_since::had059553cab94f96(&v26, v25, 0, 0);
          if ( (_DWORD)v26 != 1 )
          {
            v31 = v27[0];
            goto LABEL_34;
          }
        }
      }
      v31 = 0;
LABEL_34:
      v32 = v28;
      v15 = a3[2];
      if ( v15 == *a3 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(a3);
      v16 = a3[1];
      v17 = 32 * v15;
      *(_QWORD *)(v16 + v17) = v32;
      *(_QWORD *)(v16 + v17 + 8) = v9;
      *(_QWORD *)(v16 + v17 + 16) = v10;
      *(_QWORD *)(v16 + v17 + 24) = v31;
      a3[2] = v15 + 1;
      if ( !_InterlockedDecrement64(__dst[0]) )
LABEL_9:
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst);
    }
  }
  if ( (v19 & 3) == 1 )
  {
    v5 = v19 - 1;
    v6 = *(_QWORD *)(v19 - 1);
    v7 = *(_QWORD *)(v19 + 7);
    if ( *(_QWORD *)v7 )
      (*(void (__fastcall **)(_QWORD))v7)(*(_QWORD *)(v19 - 1));
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8);
  }
}
