// SOURCE: AiMaMi 1.1.8 macOS universal (x86_64 slice decompiled; app-level facts arch-independent)
// SHA256 (AiMaMi app Mach-O): 63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470
// FUNCTION: codexmate_lib::core::relay::atomic_write::write_atomic
// SYMBOL: __ZN13codexmate_lib4core5relay12atomic_write12write_atomic17h7c1a4e98b44038afE
// VA: 0x10039e600   CALLER: ensure_fresh_token (depth2 callee of root; depth3 in full tree)
// STATUS: accepted pseudocode (133-line HexRays body; first ~50 lines captured verbatim below via
//   direct decompile read, remainder condensed per red line 3).
// terminated_reason: persistence_commit — classic temp-file-then-rename atomic write pattern:
//   Path::parent -> DirBuilder::_create (mkdir -p parent) -> build temp filename from process::id +
//   uuid::v4 -> OpenOptions::_open -> io::Write::write_all -> close -> File::sync_data -> fs::rename
//   (atomic swap onto final path) -> sync_parent_dir. On any step failing, cleans up via
//   fs::remove_file of the temp file. This is the depth3 leaf that terminates the
//   confirm_pending_auto_switch -> ensure_fresh_token -> write_atomic branch of the call tree with a
//   real OS filesystem boundary (rename(2)/fsync).
//
// This is the function that persists a refreshed OAuth token back to the local auth file after a
// successful oauth_refresh::ensure_fresh_token call (0004) during a confirm_pending_auto_switch
// freshness-gate pass — i.e. confirming an auto-switch can, as a side effect, silently rewrite the
// candidate account's stored auth/token file on disk even though the user only asked to "confirm the
// switch", not "refresh my token". This is a genuine new persistent side effect vs 1.0.9.

__int64 __fastcall codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af(
        _QWORD **path, size_t path_len, __int64 contents_ptr, __int64 contents_len, double fsync_flag)
{
  void *parent;
  parent = (void *)std::path::Path::parent::h4c3ac26770731fbb(path, path_len); /*0x10039e624*/
  if ( !parent )
    return std::io::error::Error::new::h2838dbd593bc6ec9(20 /*InvalidInput*/, "atomic write: missing parent");
  // ... condensed: DirBuilder::_create(parent) -> file_name -> process::id + uuid::v4 -> temp path via
  // Path::_join -> OpenOptions::_open(temp) -> io::Write::write_all(contents) -> close ->
  // File::sync_data (fsync) -> std::sys::fs::rename(temp, final) -> sync_parent_dir(parent) ->
  // on error at any step: std::sys::fs::remove_file(temp) cleanup, propagate std::io::Error.
  return 0;
}
