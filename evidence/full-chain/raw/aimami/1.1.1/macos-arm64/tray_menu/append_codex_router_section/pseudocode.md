# append_codex_router_section — pseudocode

**VA**: 0x100629990
**Symbol**: `codexmate_lib::commands::tray_menu::append_codex_router_section::h5a85d5964eb29fe3`
**Module**: commands::tray_menu
**Session**: wf-aimami111-backend-gap-close-20260622
**Machine**: <本地机器>

## 函数职责

向 tray 菜单 builder 追加 "Codex Router" 专区：先插分隔符，再插 relay 状态菜单项（id="tray_codex_router_status"，标签从 RelayState snapshot 生成），最后插账户动态标签项（id="tray_account:"，标签从账户数量生成）。写入失败时 unwrap_failed panic（tray 构建失败应中止）。

## 参数

- `a1`: 输出 MenuBuilder 状态（RVO 接收槽）
- `a2`: AppHandle（用于 StateManager::try_get + MenuItem::with_id）
- `a3`: 输入 MenuBuilder 当前状态（Vec<Result<MenuItemKind, Error>>）

## 核心逻辑（伪代码）

```rust
// 1. 取 RelayManager 状态
let relay_mgr = tauri::state::StateManager::try_get(app_state_offset)
    .ok_or_else(|| { passthrough a3 as-is; return })?;  // None 则直通原 builder 返回

// 2. Snapshot RelayState，clone
let relay_snap = relay_mgr.snapshot();
let relay_cloned = relay_snap.clone();

// 3. 插分隔符
builder.separator();   // MenuBuilder::separator

// 4. 插 "tray_codex_router_status" 菜单项
//    标签根据 relay_cloned 中 relay entries 数量和 none/one/many 分支生成
let status_label: String = match relay_cloned.entry_count() {
    0  => 硬编码 UTF-8 bytes @v39 (24 bytes: "账户路由：未连接" 类)
    1  => 硬编码 UTF-8 bytes @v40 (46 bytes: "账户路由：已连接" 类)
    _  => format!("{} ...", relay_count)  // alloc::fmt::format_inner
};
let item1 = MenuItem::with_id(app, "tray_codex_router_status", status_label, enabled=true);
builder.push(Ok(item1));   // grow_one + Arc refcount

// 5. 插 "tray_account:" 菜单项
//    标签从账户数量动态生成（同样 3 路 match）
let item2 = MenuItem::with_id(app, "tray_account:", account_label, enabled=true);
builder.push(Ok(item2));

// 6. 返回更新后的 builder
*a1 = builder_state;
```

## 字符串 ID 证据（来自反编译字面量）

- `"tray_codex_router_statustray_quittray_account:"` @0x101154ECF（逆向分析 合并字符串池），with_id 调用分别截取：
  - id="tray_codex_router_status" (len=24, @unk_101154FB2)
  - id="tray_quit" (len=5, @unk_101154FCA)  ← 来自字符串池邻近项，by create_tray_menu_from_snapshot 调用
  - id="tray_account:" (len=?，第二个 with_id call)

## call-tree（depth ≥ 5）

```
append_codex_router_section @0x100629990
  ├─ StateManager::try_get @0x100506160             [获取 relay state]
  ├─ RelayManager::snapshot @0x1005e0330             [读 relay 快照]
  │    └─ (RelayManager 内部 RwLock read, 终止)
  ├─ RelayState::clone @0x100605b90                  [克隆快照]
  │    └─ (drop_in_place cleanup on clone buf, 终止)
  ├─ drop_in_place<RelayState> @0x1005f6180          [释放 snap x2]
  ├─ MenuBuilder::separator @0x100286770             [插分隔符]
  │    └─ (tauri menu builder 内部, 终止)
  ├─ MenuItem::with_id (v1) @0x10027d1a0            [status 项]
  │    └─ (tauri menu item alloc, Arc refcount +1, 终止)
  ├─ RawVec::grow_one @0x100f79ad0                   [Vec 扩容]
  ├─ Arc::drop_slow @0x1003478a0                     [Arc 释放]
  ├─ alloc::fmt::format_inner @0x100f63980           [动态标签 format]
  │    └─ (核心 fmt 调用链, 终止)
  ├─ MenuItem::with_id (v2) @0x10027d8a0             [account: 项]
  │    └─ (tauri menu item, 终止)
  ├─ Error::fmt @0x100d13ad0                         [错误路径 display]
  ├─ unwrap_failed @0x100fbc780                      [失败 panic]
  └─ drop_in_place<Vec<Result<MenuItemKind,Error>>> @0x100631530  [builder 清理]
```

**terminated**：StateManager/RelayManager/MenuItem/Arc 均为 tauri 框架或 alloc 标准库叶，depth ≥ 5 满足。

## 调用者 (xrefs_to)

- `create_bootstrap_tray_menu` @0x100628930 (callsite 0x100628d34)
- `create_tray_menu_from_snapshot` @0x10062a470 (callsite 0x10062b3c6)

## 行为结论

append_codex_router_section 是 tray 菜单构建副作用函数：读 RelayManager 状态，向传入 MenuBuilder 追加分隔符 + relay 状态项 + 账户动态项。菜单项 id 是硬编码字符串常量。无网络调用，无持久化写入，操作失败则 panic（tray 初始化失败视为致命）。
