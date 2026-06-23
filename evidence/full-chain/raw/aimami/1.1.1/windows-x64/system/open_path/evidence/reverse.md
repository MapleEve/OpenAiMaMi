# open_path — 1.1.1 windows-x64 reverse evidence
session: wf-aimami111-same-depth-20260618  machine: <本地机器>  produced: 2026-06-19

## SAME-DEPTH-CONFIRM

verdict: confirmed_same_depth5
depth_reached: 5
comparison_baseline: 1.0.9 windows-x64/system/open_path
dim6_inherited: 1.0.9

### 对比结论

**结构变更（非 app 级行为变更）：**
1. Dispatcher: 1.0.9 auto_switch_multiplex_dispatcher_sys@0x1402663e0 → 1.1.1 tauri_ipc_main_dispatcher_sys@0x14000D2A0（全局 dispatcher 整合，结构重构）
2. Arg extractor: 1.0.9 import_remote_device_secret_result_adapter_sys@0x14045F6C0 → 1.1.1 remove_skill_parse_id_param_111（函数名改变，均为提取 path string 参数，行为等价）
3. Case 位置: 1.0.9 inline case@0x140268E60 → 1.1.1 inline case@0x14000F99b（地址偏移，编译噪声）

**Core 路径对比（depth 2–5，app 级完全等价）：**

| Layer | 1.0.9 | 1.1.1 | 等价判断 |
|-------|-------|-------|---------|
| D2 | sub_14103D7A0 (osstring_init "explorer") | sub_141087850 (osstring_init "explorer") | 等价：同为 init OsString with "explorer" |
| D3 | sub_14103D680 (osstring_append path) | sub_141096C10 (osstring_append path) | 等价：追加 path 参数 |
| D4 | CloseHandle/SetFileInformationByHandle | CloseHandle/SetFileInformationByHandle | 完全等价 |
| D2 | sub_141042700 (process_launch) | sub_141042700 (process_launch) | 完全相同地址 |
| D3 | sub_141037A60 (createprocess_impl) | sub_141037A60 (createprocess_impl) | 完全相同地址 |
| D4 | CreateProcessW | CreateProcessW | 完全等价 |
| D3–5 | CloseHandle (success/error branches) | CloseHandle (success/error branches) | 等价 |

字符串 "explorer"@0x141258690、"open_path"@0x141268e79、"path"@0x141269284 在 1.1.1 中对应地址变化属编译噪声，内容不变。

### 结论

confirmed_same_depth5: open_path dispatcher 整合和 arg extractor 名称变化为结构重构；
core 路径 depth 2–5 callee 集合（含 CreateProcessW/CloseHandle）完全等价，无 app 级 callee 增删。
1.0.9 readyToImplement=true，gate=strictImplementationUse → dim6_inherited=1.0.9
