// EA: 0x140c37a50 (name "load_voice_runtime_status" already present in the IDB prior to this session --
// confirmed via grep across raw/ and intermediate/ trees for any 1.2.6 windows leaf: 0 hits found anywhere
// on disk before this session's write, so this was an ORPHANED IDB mutation from an earlier round: renamed
// + commented but no raw evidence bundle was ever written to SMB. This session supplies the first full
// raw pseudocode/call-tree/interface/evidence/gate-report bundle for it.)
//
// Pre-existing comment found on this function at session start (verbatim, not authored by this session):
// "职责：加载语音运行时当前状态(load_voice_runtime_status)，供 emit/UI 查询使用。边界：core::voice::runtime
//  模块内部读取实现。副作用：无写入副作用，纯读取。1.2.6 windows deep pass 20260806"
//
// Role: reads the voice-runtime Repository mutex-guarded state (via sub_140029DD0 poison-checked mutex
// pointer resolution, string anchor "std::sync::poison::mutex::Mutex<codexmate_lib::core::repository::
// Repository>"), builds a 712-byte snapshot via sub_140BB37B0, and terminates by calling
// sub_140C48530(&v40, a2) which produces the final response tuple written to a1+8/a1+24.
__int64 __fastcall load_voice_runtime_status(__int64 a1, __int64 a2)
{
  // mutex-guard acquire on Repository<voice-runtime> (sub_140029DD0, poison recovery via sub_14176CDB0)
  // -> sub_140A80280 / sub_141536D40 (tracing span helpers)
  // -> repository field copy (712B) via sub_140BB37B0(&v40, v28 + 40)
  // -> sub_14172B820(a1, &v40, 712) final struct copy into caller's return slot
  // -> sub_140C48530(&v40, a2) computes the final disc/ok/error tuple, terminal, response_serialize
  return a1;
}
