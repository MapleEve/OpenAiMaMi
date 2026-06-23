# parse_aimami_deeplink — 逻辑文档

**版本**: 1.1.1 windows-x64 新增命令
**gate**: strictImplementationUse_candidate
**owner VA**: parse_aimami_deeplink_owner_sys（dispatcher named handlers 列表）

## IPC 合约

```
command: "parse_aimami_deeplink"
params: deeplink URL 参数（见 frontend ipc-contracts）
response: 解析结果（结构待确认）
```

## 行为

- deeplink URL 解析命令
- Changelog #4 win 一键导入功能相关（import 修复搭档）
- 具体 URL scheme 和 response struct 见 raw leaf evidence.md

## 关联

与 import_accounts_from_file 共同支撑 Changelog #4"应用已运行时一键导入"场景。
deeplink 解析在 import 流程之前或之后处理，具体时序见 frontend CCF。
