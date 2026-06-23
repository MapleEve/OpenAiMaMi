# quota_text — pseudocode

**VA**: 0x100627190
**Symbol**: `codexmate_lib::commands::tray_menu::quota_text::h3bae01cab641e16d`
**Module**: commands::tray_menu
**Session**: wf-aimami111-backend-gap-close-20260622
**Machine**: <本地机器>

## 函数职责

从 runtime snapshot（结构体通过 a2 传入）读取账户使用量字段，根据当前账户的 daily/monthly 到期状态格式化并返回一个 String 用于 tray 菜单 quota 显示文本。

## 参数

- `a1`: 输出 String（Rust &str / String RVO 接收槽，写 ptr/len/cap 三元组）
- `a2`: 指向 snapshot 结构体，已知偏移：
  - `+48` (DWORD): 主账户 type flag（== 2 表示到期/无效）
  - `+80` (QWORD): 主 usage 数值（i32，格式化目标）
  - `+88` (QWORD): 次账户 type flag（== 2）
  - `+120` (QWORD): 次 usage 数值（i32，格式化目标）
- `a3`, `a4`: 透传（未使用）

## 逻辑分支（全路径）

```
if *(a2+48) == 2:
    if *(a2+88) == 2:
        // 双账户均到期 → 分配 2 字节堆块，写 UTF-16 字节 0x2D2D ("--") 原始值 11565
        alloc 2 bytes; *result = 11565 (0x2D2D = "--" in LE UTF-16 or 2 ascii)
        write String RVO: ptr=result, len=2, cap=2
        return
    else:
        // 主到期，次有效 → 格式化次 usage
        v7 = a2+120  // 次 usage i32
        fmt_one_i32(v7, fmt_string_B)  // unk_1010B80B4 = "{} GB" 类模板
        return format_inner(a1, fmt_B, &v7)
else:
    if *(a2+88) != 2:
        // 双账户均有效 → 格式化主+次 usage 两个 i32
        v7 = a2+80   // 主 usage
        v9 = a2+120  // 次 usage
        return format_inner(a1, fmt_C, [v7, v9])  // unk_1010B80B8 = "{}/{} GB" 类模板
    else:
        // 主有效，次到期 → 格式化主 usage
        v7 = a2+80
LABEL_8:
        fmt_one_i32(v7, fmt_string_B)  // unk_1010B80B4
        return format_inner(a1, fmt_B, &v7)
```

## call-tree（depth ≥ 5）

```
quota_text @0x100627190
  ├─ alloc::alloc::__rust_alloc @0x1000014b0        [双到期路径]
  ├─ alloc::raw_vec::handle_error @0x100fbc3a1       [alloc 失败]
  ├─ fmt::num::imp::Display<i32>::fmt @0x100f673f0   [格式化 i32]
  │    └─ (core fmt 内部，终止)
  └─ alloc::fmt::format::format_inner @0x100f63980   [写入 String]
       ├─ alloc::fmt::Formatter::write_fmt            [终止]
       └─ alloc::raw_vec::RawVec::grow_one            [扩容，终止]
```

**终止节点**：fmt::num、format_inner、raw_vec 均为标准库内部叶节点。

## 调用者 (xrefs_to)

- `create_tray_menu_from_snapshot` @0x10062a470（两处 callsite: 0x10062aa21, 0x10062aea7）

## 行为结论

quota_text 是纯计算无副作用函数：读 snapshot 两个账户的 type+usage 字段，按 4 种组合生成 quota 显示文本（双到期="--"，单到期=单值，双有效=两值格式化）。不调 IPC、不写状态、不触发网络。

## 字符串证据

- `unk_1010B80B4`：单值格式模板（"N GB" 类）
- `unk_1010B80B8`：双值格式模板（"N/M GB" 类）
- 0x2D2D (11565 as u16)：ASCII "--"（到期占位符）
