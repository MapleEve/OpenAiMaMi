# clean — windows-x64 1.1.1 逆向证据

## 元信息
- session: wf-aimami111-delta-20260618-goldleaf
- machine: <本地机器>
- idb: <本地路径>
- produced: 2026-06-18
- method: HexRays decompile 成功（clean_handler_111，32 BB，size=0x3BF）
- ceiling_cracked: false

## 函数定位
- handler VA: 0x1400152B0
- 逆向分析 名: clean_handler_111
- size: 0x3BF bytes
- basic_blocks: 32

## decompile 摘要（关键路径）

```c
__int64 clean_handler_111(__int64 a1) {
  // a1 = IPC request struct
  // 复制 request state 到栈（两次 sub_141212FB0）
  sub_141212FB0(v13, a1, 520);       // 第一段 request 数据
  sub_141212FB0(v15, a1 + 520, 400); // 第二段 request 数据

  // IPC 参数: command="clean"(len=5), namespace="repo"(len=4)
  v19 = (int64)aClean;   // "clean"
  v20.q[0] = 5;
  v20.q[1] = aRepo;      // "repo"
  v21.q[0] = 4;
  v21.q[1] = v13;        // request body ref

  // 获取 repo 参数（Option<String>）
  v2 = pending_auto_switch_state_lock_acquire_111(*(v14+16)); // lock acquire
  if (!v2) {
    // 解析 IPC 参数
    query_installed_skills_with_repo_111(&v32, &v19, &v20+8);
    if ((byte)v32 != 6) {
      // Some(repo) 解析失败路径 → 直接 respond
      has_notch_invoke_resolver_respond(v12, v16, &v19, &v30, v17, v18);
      goto LABEL_16;
    }
    v2 = v32.q[1]; // repo 字符串
  }

  // 有 repo → 执行 clean
  sub_14078EA20(&v24, v2);           // clean 核心执行（repo arg）
  sub_141212FB0(&v19, a1+520, 400);  // refresh request state

  // 处理执行结果 Result<T, E>
  if (OFSUB(0, v24.q[0])) {
    // Result::Ok 路径
    v4 = v24.q[1];   // Ok value
    v5 = v25;         // capacity/len
    if (v25 < 0) { v6 = 0; goto LABEL_7; }
    if (v25.q[1]) {
      // 有数据 → alloc + copy
      v7 = sub_140001360(v25.q[1], 1); // alloc
      if (!v7) { goto LABEL_7; }       // OOM path
      sub_141212FB0(v7, v5, v25.q[1]); // copy
    } else { v8 = 1; }
    sub_140001370(v5, v4, 1);         // dealloc old
LABEL_13:
    // 打包结果到 v32（Poll::Ready(Ok(...))）
    BYTE8(v32) = 3;
    v33.q[0] = v25.q[1];
    v33.q[1] = v8;
    v34.q[0] = v25.q[1];
    v32.q[0] = 0x8000000000000000ULL;
  } else {
    // Result::Err 路径 → 回传 v24..v29
    v32=v24; v33=v25; v34=v26; v35=v27; v36=v28; v37=v29;
  }

LABEL_14:
  // 归约结果
  v43 = 0;
  sub_140836020(&v19, &v32);  // Result 序列化/归约

LABEL_16:
  // Arc listener drop loop（cleanup）
  if (!OFSUB(0, v39.q[0])) {
    v9 = v39.q[1];
    while (v41 != v42) {
      ++v42;
      has_notch_arc_listener_drop_loop();  // 0x14033AB50
      v9 += 96;
    }
    if (v39.q[0]) sub_140001370(v39.q[1], 96*v39.q[0], 8); // dealloc
  }
  return sub_140042650(v13); // respond / finalize
}
```

## IPC 合同
- command: "clean"（0x1412AC1CC，len=5）
- namespace: "repo"（0x1412AC6D1，len=4）
- 入参: Option<String> repo（via pending_auto_switch_state_lock_acquire_111 + query_installed_skills_with_repo_111）
- 返回: Result<CleanOutput, Error>（通过 has_notch_invoke_resolver_respond 发送）

## 关键 callees
| callee | VA | 职责 |
|--------|----|------|
| pending_auto_switch_state_lock_acquire_111 | 0x14006EDC0 | repo 参数锁定/解析前置 |
| query_installed_skills_with_repo_111 | 0x141214620 | 解析 IPC repo 参数（Option<String>，discriminant 6=Some） |
| sub_14078EA20 | 0x14078EA20 | clean 核心实现（接受 repo 字符串，清理 repo 缓存/制品） |
| sub_140836020 | 0x140836020 | Result 序列化归约 |
| has_notch_invoke_resolver_respond | 0x14080C3C0 | InvokeResolver::respond，WakeByAddressSingle terminal |
| has_notch_arc_listener_drop_loop | 0x14033AB50 | Arc IPC listener 清理循环 |
| sub_140042650 | 0x140042650 | finalize/respond wrapper |
| sub_140001360 | 0x140001360 | alloc |
| sub_140001370 | 0x140001370 | dealloc |

## 1.0.9 对比
1.0.9 windows-x64 无 clean 独立 leaf；win-same.txt 初始分类为 same 候选。

本次 decompile 对照分析：
- 函数语义: "clean"/"repo" 参数解析 → 执行 clean → respond，结构与预期 1.0.9 clean 模式完全一致
- 无新字符串引入，无额外广播副作用
- callees 均为已确认的 has_notch 基础 runtime（arc_listener_drop_loop、invoke_resolver_respond）
- sub_14078EA20 为 clean 核心，无 1.0.9 对应 VA（因 1.0.9 win 未独立逆向），但结构与 mac same 一致
- Arc cleanup 模式（stride=96，has_notch_arc_listener_drop_loop）与所有 1.1.1 win confirmed-same 命令一致
- 函数体量 0x3BF（小，32 BB），与 clean 语义（轻量单步）吻合
**判定：same（语义、参数、响应模式与 1.0.9 clean 预期一致；无 delta 证据）**
