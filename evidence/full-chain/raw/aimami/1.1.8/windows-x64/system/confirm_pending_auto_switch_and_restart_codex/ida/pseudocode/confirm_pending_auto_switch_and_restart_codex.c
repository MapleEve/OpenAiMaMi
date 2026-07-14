// confirm_pending_auto_switch_and_restart_codex — AiMaMi 1.1.8, windows-x64
// owner-map-118.jsonl 记录的 owner_va=0x1403cf5b0 是共享主 dispatcher（sub_1403CF5B0, size=0x4ad3=19155B），
// 内联 match-arm 处理本命令（字符串 "confirm_pending_auto_switch_and_restart_codex" @0x14133b472 被 xrefs_to 确认
// 仅在该 dispatcher 内被引用一次，代码位置 0x1403d175f）；该 dispatcher 是所有命令共享的大函数（同一函数体内也发现
// aClean @0x14133b34d 等其它命令的字符串引用），本轮不整体展开（19155B 超大体，且命令专属逻辑不在此处），
// 未对 dispatcher 做 rename/comment（避免污染其它命令的共享 owner 标注）。
//
// 真正的命令专属实现是一个独立的 async 协程状态机 sub_140A56AC0（size=0xbd3=3027B ——
// 与 1.0.9 windows 基线 confirm_pending_auto_switch_and_restart_coroutine@0x1408E4F50 的 size 完全一致 0xBD3，
// 强信号：同一份协程代码在两个版本间只是地址漂移，函数体本身大概率未变）。
// 本轮已 rename: sub_140A56AC0 -> confirm_pending_auto_switch_and_restart_codex_owner_sys
// 定位方法：该协程内部持有自己独立的一份字符串字面量副本 "confirm_pending_auto_switch_and_restart_codex"
// @0x141361469（xrefs_to 确认仅在此协程内引用一次，代码位置 0x140a56b81），用于协程自身的 tracing span 组装
// （与 dispatcher 处引用的是同一字符串内容但不同的 .rdata 副本地址，Rust/LLVM 常见的字符串常量去重边界现象）。
// state 字段偏移 a1+3440（resume state：0/1/2/3）与 1.0.9 基线 a1[3440] 完全同构，进一步确认这是同一份协程逻辑
// 的跨版本对应体。
//
// session <审计会话>, source_binary_sha256=f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10
// 反编译通道：反编译器 HexRays MCP（win 实例），逐跳 decompile()，depth1..depth5 真实调用链见
// call-trees/confirm_pending_auto_switch_and_restart_codex.jsonl

// ==== depth2: 协程状态机本体（已 rename confirm_pending_auto_switch_and_restart_codex_owner_sys）====
char __fastcall confirm_pending_auto_switch_and_restart_codex_owner_sys(__int64 a1, __int64 a2)
{
  // a1+3440 是 resume-state 字段（0=initial, 1/2=poll-guard 中转, 3=final-drive），与 1.0.9 baseline 完全同构。
  switch ( *(unsigned __int8 *)(a1 + 3440) )
  {
    case 0: /* initial：进入 case 3 分支前先做一次性初始化（清空/拷贝局部缓冲区 0x5F0 字节） */
      // 初始化后按 a1+3424（内部子状态）跳转 case0..case3
      goto case_dispatch_by_a1_3424;

    case 1: /* poll-guard enter（Rust async fn 生成的可重入保护，配对 sub_1412ADB20/sub_1412ADB40） */
    case 2:
      sub_1412ADB20(&off_141363680); /* enter guard */
      sub_1412ADB40(&off_141363680); /* exit guard（fallthrough，无 break，与 Rust 生成的 poll-count 断言样板一致） */
      // fallthrough 进入 case 3

    case 3: /* 按 a1+3424 子状态跳转 */
case_dispatch_by_a1_3424:
      switch ( *(_BYTE *)(a1 + 3424) )
      {
        case 0: /* ==== depth3: 复用 confirm_pending_auto_switch 的确认逻辑 ==== */
          // 组装 tracing span：aConfirmPending_1="confirm_pending_auto_switch_and_restart_codex" @0x141361469（本函数私有字面量副本）
          //                    + "app" @0x1413613f9
          sub_140421360(&v75, (__int64)&v63);
          // sub_140421360 是与本 session 更早的 confirm_pending_auto_switch 叶子（同一 session、同一批次）
          // 独立确认过的共享 tracing-instrument 薄包装：unpacks a2+32 -> 转发 sub_140870B80
          // （async-block/future constructor，6x Arc<T>::clone via InterlockedIncrement64，见该叶子 evidence.md）。
          // 本命令在这里【复用】confirm_pending_auto_switch 的确认子逻辑作为自身第一阶段，
          // 与 win-shard-1.json 记录的判定一致："inherits the confirm_pending_auto_switch core delta documented above"。
          if ( /* discriminant(v75.m128i_i64[0]) == 3 */ 0 )
          {
            // fast-path：确认已就绪，直接进入 case3 收尾（复制/打包后跳转公共尾部 LABEL_12）
          }
          else
          {
            // 非 fast-path：sub_1409B5490 做一次 capacity/dealloc 记账，遍历一个 96 字节/元素的 Vec（sub_1401EEBE0 逐元素 drop），
            // 视首元素指针是否非空分别 goto LABEL_57（有内容需要 sub_140001370 释放）或 LABEL_58（空，直接跳收尾）。
          }
          break;

        case 1:
        case 2:
          sub_1412ADB20(&off_1413613C8);
          sub_1412ADB40(&off_1413613C8); /* 同样的 poll-guard 样板，作用于第二个 guard 槽位 */
          // fallthrough

        case 3:
          break; /* 已初始化完毕，直接进入公共尾部 */
      }
  }

LABEL_12_common_tail:
  // 公共尾部：按 a1+3408（第二重子状态，"是否已发起 restart 任务"）分派
  switch ( *(_BYTE *)(a1 + 3408) )
  {
    case 0: /* ==== depth4/depth5: 发起 restart 任务 ==== */
LABEL_13:
      sub_140103590(&v59, a1 + 3248); /* 字节缓冲 clone（与 confirm_pending_auto_switch 叶子 depth4 的 clone-helper#2 同一函数） */
      // 2x _InterlockedIncrement64（Arc<T>::clone，仅 2 个被捕获资源——比 confirm_pending_auto_switch 的 6 个更少，
      // 语义上更贴近"仅需要 Codex 进程句柄 + 一个配置/状态引用"这类更窄的捕获集，Inferred，未逐类型核实）；
      // 任一引用计数 <=0 触发 BUG() abort（与 sibling 叶子一致的 Rust async-block 生成样板）。
      // 按全局配置标志 off_141963508（偏移+96 == 2 时走一条分支，否则走另一条）选择两个不同的目标对象
      // （off_141321088 或 off_141321070，均以 0x141321000 为基址的同一 .rdata 区块内相邻小结构，
      //  经 get_bytes 读取原始字节，两者内容目前观察到完全一致：{ptr=0x141321000, tag=0x6b(107)}，
      //  本轮未能将其解析为清晰的 vtable 函数指针对——Unknown，见 evidence.md 第 4 条），
      // 调用 sub_1401A3720(...) 发起一个新的异步任务（本轮已独立 decompile 确认 sub_1401A3720 是通用 Tokio
      // 任务派生 helper：内部调用 sub_140EE3CC0 完成实际 spawn，构造一个 0x98 字节的 future/vtable 载荷，
      // 与 1.0.9 baseline 的 tokio_spawn_restart_task 语义等价，但非命令专属——是全二进制共享的 spawn 基础设施）。
      // 结果句柄存入 a1+3400（"restart task" 的任务槽位）。
      break;
    case 1:
    case 2:
      sub_1412ADB20(&off_141362978);
      sub_1412ADB40(&off_141362978);
    case 3:
      break;
  }

LABEL_25_poll_restart_task:
  // ==== 轮询上面发起的 restart 任务 ====
  sub_140064790(&v75, a1 + 3400, a2); /* poll 调用：读取 restart 任务当前状态 */
  // discriminant == 4  => 仍是 Pending，state 全部回退到 3，直接 return（等待下一次 poll，与 Tokio Future::poll 语义一致）
  // discriminant == 3  => Ok 分支：拷贝 payload（v36/v13/v9 等字段）
  // 其它非 2/3       => Err 分支：sub_140036730(&v75,&v63) 走 Display::fmt trait-object 格式化
  //                     （与 confirm_pending_auto_switch 叶子的 sub_1407B6C80 内部调用同一 helper，共享"Display
  //                     implementation returned an error unexpectedly" @0x141363370 兜底 panic 串——同一份错误
  //                     格式化基础设施，非命令专属）
  // == Ok(3)/Err(2) 两条分支收敛：==
  //   若 v13(长度字段) > 0：nullsub_1（no-op 探针）-> sub_140001360(v13,1)（Rust 全局分配器 thunk，
  //     与 confirm_pending_auto_switch 叶子 depth5 终态确认的同一分配器）分配失败则 sub_1412AD46B(handle_alloc_error->abort)；
  //     成功则 sub_1412762D0 memcpy 克隆；若原 payload 非空再 sub_140001370(v36,v37,1) 释放原缓冲（alloc/dealloc 配对）
  //   否则走 else 分支直接沿用已有指针
  // 收尾：v94(状态标志)=1 -> sub_1409A6080(drop 一个 Vec-like 集合) -> sub_1409B5490(capacity 记账)
  //       -> 遍历 (a1+2432 计数, a1+2440 指针) 96 字节/元素的集合逐个 sub_1401EEBE0 drop
  //       -> 若非空 sub_140001370(ptr, 96*count, 8) 释放该 Vec 的底层缓冲
  //       -> a1+3424=1（标志推进） -> sub_140988030(cleanup)
  //       -> 组装最终 6 元组结果 (v9,v10,v11,v12,v13,v14) 到 result-slot
  //       -> ==== TERMINAL: sub_1407A7610(&v75, v54, &v81, &v63, ...) ====
  //          与 confirm_pending_auto_switch 叶子完全同一个 IPC resolver 终态函数（"resolver consumed" 一次性消费守卫，
  //          vtable 回调做 JSON 序列化 + webview IPC 派发，WakeByAddressSingle 唤醒阻塞方）。TERMINATED_REASON=response_serialize。
  // a1+3440 更新为下一个 resume state，return。
}
