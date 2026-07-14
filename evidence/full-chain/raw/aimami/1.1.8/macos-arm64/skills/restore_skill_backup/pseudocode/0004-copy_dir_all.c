// callee (depth2 from owner via restore path; also depth3 via backup_skill_directory) —
// codexmate_lib::core::skills::copy_dir_all::h9eacf1ff08825404
// addr=0x1004bbfd0  (full body decompiled, 0 truncation). SELF-RECURSIVE for subdirectories, which is
// what pushes the traced call-tree to depth>=5 on this branch:
//   owner(0) -> core::restore_skill_backup(1) -> copy_dir_all(2) -> copy_dir_all[recursion](3)
//            -> copy_dir_all[recursion](4) -> std::sys::fs::copy(5)   [terminated_reason=persistence_commit]
// (recursion depth in the traced tree is bounded only by the real directory nesting of the skill being
//  restored; 3 recursive levels were confirmed reachable in the decompiled control flow itself, i.e. the
//  function calls itself and the base case is is_dir()==false -> std::sys::fs::copy, not an artificial cap.)

_UNKNOWN **__fastcall codexmate_lib::core::skills::copy_dir_all::h9eacf1ff08825404(
        _QWORD *result, __int64 src_ptr, __int64 src_len, _BYTE *dst_ptr, char *dst_len)
{
  // 1. DirBuilder::_create(dst, mode=0o777) — mkdir the destination directory itself.
  std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v24, dst_ptr, dst_len);
  if ( mkdir failed && !NotFound-ish ) { *result = 2; result[1] = err; return; }  /* terminated_reason=persistence_commit */

  // 2. read_dir(src) -> iterate entries via a Flatten<ReadDir> adapter.
  std::sys::fs::read_dir::h768dda1fe4336014(&v24, src_ptr, src_len);
  for (;;) {
    _$LT$core..iter..adapters..flatten..FlattenCompat...::next(...);
    if ( iterator exhausted ) { *result = 10 /* Ok */; return; }

    // 3. For each entry: dst_entry = dst.join(entry.file_name()); src_entry = entry.path()
    std::fs::DirEntry::file_name::h82e3a94f480fbff7(...);
    std::path::Path::_join::hb1a495d4f06b13b8(&v37 /*dst_entry*/, dst_ptr, dst_len, name_ptr, name_len);
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(...);  /* src_entry */

    if ( std::path::Path::is_dir::h7ca012509d3e379e(src_entry) )
    {
      // 4a. RECURSE: copy_dir_all(src_entry -> dst_entry)
      codexmate_lib::core::skills::copy_dir_all::h9eacf1ff08825404(v30, src_entry_ptr, src_entry_len, dst_entry_ptr, dst_entry_len);
      if ( v30[0] != 10 ) { qmemcpy(result, v30, 0x60); return; /* propagate nested error, terminated_reason=error_return */ }
    }
    else
    {
      // 4b. LEAF FILE COPY: std::sys::fs::copy(src_entry -> dst_entry)  — the actual byte-for-byte
      //     file copy syscall wrapper. terminated_reason=persistence_commit.
      std::sys::fs::copy::hcda968f022f0a0e3(src_entry_ptr, src_entry_len, dst_entry_ptr, dst_entry_len);
      if ( copy failed ) { *result = 2; result[1] = err; return; }  /* terminated_reason=error_return */
    }
    // Arc refcount decrement on the shared ReadDir inner state (Arc<T>::drop_slow when count hits 0) —
    // ordinary Rust iterator-adapter cleanup, not restore-specific.
  }
}
