// glue_graceful_restart_for_update.c — 0x1405F27C0 (586B, idb_name=graceful_restart_for_update)
// win 1.2.7 最新 exe | IDA <审计环境> | session <审计会话>
// 零参数命令 glue：请求 {name(27), key="app"(3), env, captures} 经 sub_1406440D0 提取 AppHandle；
// 成功(≠-1)→sub_140724350(重启,发散,调用点后 ud2@0x1405f2a08)；失败(==-1)→sub_140B39980 responder 错误应答。
// ⚠破坏性副作用：重启路径=进程退出+重启。
// 反编译器变量 v8(400B part2 拷贝)与 v9/v10/v11(part2 尾 16B)同帧相邻，v12 为复用缓冲——见 disasm 109 指令核验记录（evidence.md §2）。
__int64 __fastcall graceful_restart_for_update(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _BYTE v6[520]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v7[152]; // [rsp+240h] [rbp+1C0h] BYREF
  _BYTE v8[384]; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v9; // [rsp+458h] [rbp+3D8h]
  int v10; // [rsp+460h] [rbp+3E0h]
  int v11; // [rsp+464h] [rbp+3E4h]
  _QWORD v12[45]; // [rsp+468h] [rbp+3E8h] BYREF
  int v13; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v14; // [rsp+5D8h] [rbp+558h]
  __int128 v15; // [rsp+5E8h] [rbp+568h]
  __int64 v16; // [rsp+668h] [rbp+5E8h] BYREF
  __int128 v17; // [rsp+670h] [rbp+5F0h]
  __int128 v18; // [rsp+680h] [rbp+600h]
  __int128 v19; // [rsp+690h] [rbp+610h] BYREF
  __int64 v20; // [rsp+6A0h] [rbp+620h]
  __int64 v21; // [rsp+6B0h] [rbp+630h]
  __int64 v22; // [rsp+6B8h] [rbp+638h]
  __int128 v23; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v24; // [rsp+6D0h] [rbp+650h]
  __int64 v25; // [rsp+6E0h] [rbp+660h]
  char v26; // [rsp+6EFh] [rbp+66Fh]
  __int64 v27; // [rsp+6F0h] [rbp+670h]

  v27 = -2; /*0x1405f27d3*/
  sub_1419234B0(v6, a1, 520); /*0x1405f27f1*/
  sub_1419234B0(v8, a1 + 520, 400); /*0x1405f280d*/
  v24 = *(_QWORD *)(a1 + 936); /*0x1405f2819*/
  v23 = *(_OWORD *)(a1 + 920); /*0x1405f2827*/
  v12[6] = 0; /*0x1405f282e*/
  v12[0] = aGracefulRestar; /*0x1405f2840*/
  v12[1] = 27; /*0x1405f2847*/
  v12[2] = aApp_2; /*0x1405f2859*/
  v12[3] = 3; /*0x1405f2860*/
  v12[4] = v6; /*0x1405f286b*/
  v12[5] = &v23; /*0x1405f2879*/
  v26 = 1; /*0x1405f2880*/
  sub_1406440D0(&v13, v12); /*0x1405f2895*/
  if ( v13 != -1 ) /*0x1405f28a2*/
  {
    sub_1419234B0(v7, &v13, 152); /*0x1405f29ec*/
    v26 = 1; /*0x1405f29f1*/
    sub_140724350(v12, v7); /*0x1405f2a02*/
  }
  v18 = v15; /*0x1405f28b6*/
  v17 = v14; /*0x1405f28bd*/
  sub_1419234B0(v12, a1 + 520, 360); /*0x1405f28d7*/
  v19 = *(_OWORD *)(a1 + 880); /*0x1405f28ea*/
  v20 = *(_QWORD *)(a1 + 896); /*0x1405f28f8*/
  v16 = 1; /*0x1405f290b*/
  v26 = 0; /*0x1405f2916*/
  sub_140B39980((unsigned int)v12, v9, (unsigned int)&v16, (unsigned int)&v19, v10, v11); /*0x1405f2936*/
  if ( (_QWORD)v23 != -1 ) /*0x1405f2944*/
  {
    v3 = *((_QWORD *)&v23 + 1); /*0x1405f2946*/
    v22 = v24; /*0x1405f2954*/
    v25 = 0; /*0x1405f295b*/
    v21 = *((_QWORD *)&v23 + 1); /*0x1405f2966*/
    while ( v22 != v25 ) /*0x1405f297e*/
    {
      ++v25; /*0x1405f2983*/
      v4 = v3 + 96; /*0x1405f298a*/
      sub_1401AFF50(v3, v2); /*0x1405f298e*/
      v3 = v4; /*0x1405f2994*/
    }
    if ( (_QWORD)v23 ) /*0x1405f29a3*/
      sub_140001660(*((_QWORD *)&v23 + 1), 96 * v23, 8); /*0x1405f29ba*/
  }
  return sub_1405251E0(v6); /*0x1405f29c9*/
}
// [调用点后 ud2@0x1405f2a08 — 编译器证明 sub_140724350 发散 (Rust -> !)，重启路径前端 invoke 永无响应]
