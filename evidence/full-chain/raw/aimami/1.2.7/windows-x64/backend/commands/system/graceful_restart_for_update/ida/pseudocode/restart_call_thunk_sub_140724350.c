// restart_call_thunk_sub_140724350.c — 0x140724350 (33B)
// win 1.2.7 最新 exe | IDA <审计环境> | session <审计会话>
// graceful_restart_for_update 专属重启调用 thunk：唯一 caller=0x1405F27C0；data ref 0x141ef0d0c/0x1422aabb8 为 vtable 槽。
// 尾调 sub_1406320F0（tauri-2.10.3 AppHandle 重启机制，发散）。
void __fastcall __noreturn sub_140724350(__int64 a1, __int64 a2)
{
  sub_1406320F0(a2); /*0x140724369*/
}
