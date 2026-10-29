// state_fetch_sub_1406440D0.c — 0x1406440D0 (206B)
// win 1.2.7 最新 exe | IDA <审计环境> | session <审计会话>
// tauri state 提取原语（StateManager::try_get 等价）：请求 {命令名, state key, env, captures}（a2+0/+8/+16/+24/+32/+40），
// ~100 命令 glue 共用（focus_main_window/switch_account/load_snapshot 等）。
// 内部经 sub_1401881D0 克隆 invoke env（Arc 字段），取克隆 env+176 的 152B state 句柄写入输出 a1。
// 「app」= AppHandle 的 state 注册键（mac 铁证：clean wrapper 以 {name="clean", key="repo"} 同模式调 StateManager::try_get）。
// 非「发往 app actor」消息——纠正 Oct 6 icf-twin 会话「薄壳 manager-request」表述。
__int64 __fastcall sub_1406440D0(__int64 a1, __int64 a2)
{
  _BYTE v4[136]; // [rsp+28h] [rbp-58h] BYREF
  volatile signed __int64 *v5; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v6; // [rsp+C0h] [rbp+40h]
  __int64 v7; // [rsp+C8h] [rbp+48h]
  _BYTE v8[152]; // [rsp+D8h] [rbp+58h] BYREF
  volatile signed __int64 *v9; // [rsp+170h] [rbp+F0h] BYREF
  volatile signed __int64 *v10; // [rsp+178h] [rbp+F8h] BYREF
  volatile signed __int64 *v11[4]; // [rsp+180h] [rbp+100h] BYREF

  v11[2] = (volatile signed __int64 *)-2LL; /*0x1406440e1*/
  sub_1401881D0(v4, *(_QWORD *)(a2 + 32)); /*0x1406440f7*/
  sub_1419234B0(a1, v8, 152); /*0x140644109*/
  if ( !_InterlockedDecrement64(v9) ) /*0x140644115*/
    sub_141468FB0(&v9); /*0x140644122*/
  if ( v6 ) /*0x14064412f*/
    sub_140001660(v7, v6, 1); /*0x14064413b*/
  if ( !_InterlockedDecrement64(v5) ) /*0x140644144*/
    sub_140CA3110(&v5); /*0x14064414e*/
  sub_140513A80(v4); /*0x140644158*/
  if ( !_InterlockedDecrement64(v10) ) /*0x140644165*/
    sub_141469660(&v10); /*0x140644172*/
  if ( !_InterlockedDecrement64(v11[0]) ) /*0x14064417f*/
    sub_141469260(v11); /*0x14064418c*/
  return a1; /*0x140644194*/
}
