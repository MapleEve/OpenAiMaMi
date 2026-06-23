# import_accounts_from_file — 逻辑文档

**版本**: 1.1.1 windows-x64 body-delta
**变更性质**: 新增 relay provider vtable 并发导入路径
**handler VA**: sub_140961470 @ 0x140961470 (6063B)

## 变更摘要

1.0.9 baseline 是简单同步导入序列。
1.1.1 win 新增通过 relay provider vtable（off_141899420）进行并发导入，处理"app 已运行时"的导入场景（Changelog #4 核心修复）。

## handler 信息

```
VA: 0x140961470
size: 6063B
type: coroutine
coroutine_state_field_offset: 4688
sub_state_field_offset: 4672
```

## string refs（1.1.1 确认）

```
'import_accounts_from_file' @ 0x1412faa31 (25B)
'filePath'
'overwriteExisting' (17B)
'selectedKeys' (12B)
```

## 新增路径

```
off_141899420 → sub_14023EDA0 / sub_14023EAB0  [relay provider vtable dispatch]
atomic ops: _InterlockedIncrement64 @ a1+4472, a1+4480
```

## win 专有错误

`RUNTIME_REFRESH_FAILED_AFTER_IMPORT`（35B）：
- win 1.1.1 新增，macOS 1.1.1 未见
- 处理导入完成后运行时刷新失败的场景
- response_func: sub_14080C3C0

## 其他 callees

```
namespace: app (aApp_4) → sub_140089A50
relay_provider_vtable: off_141899420 → sub_14023EDA0 / sub_14023EAB0
response_func: sub_14080C3C0
```
