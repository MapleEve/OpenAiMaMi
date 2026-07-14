// win 1.1.8 get_image_compat — OWNER ABSENT (present=False)
// 该 IPC 命令在 win64 二进制中无后端 owner 函数:命令名字符串 0 命中、无 dispatcher xref。
// 结论:get_image_compat 在 Windows 侧为 frontend-only / 平台条件编译剔除(仅 macOS 有 notch/image 兼容实现)。
// 5 法交叉验证缺失见 evidence.md。无可反编译 owner 体。
