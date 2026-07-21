# OpenAiMami IDB 状态

`OpenAiMami IDB` 是独立的大文件资料集，用于保存 OpenAiMami 1.0.9、1.1.1、1.1.8 和 1.2.2/1.2.1 的 macOS/Windows `.i64` 参考文件。它不属于主源码仓库的普通文本材料。

## 当前规则

- 主仓库不直接保存大体积 `.i64` 文件。
- 主仓库保存匿名化 raw/internal、前端 dumped 文件、架构骨架和重建文档。
- `OpenAiMami IDB` 作为独立资料存在。
- IDB 只能作为还原参考资产，不能替代 `evidence/full-chain/raw` 和 `evidence/full-chain/internal`。

## 资产内容

`OpenAiMami IDB` 应只包含 OpenAiMami 各发布版本的 macOS/Windows 参考数据库 `.i64` 文件。具体文件名、大小和哈希以主仓库清单为准，不在说明文档中重复写内部来源路径。

1.2.2/1.2.1 的 macOS 与 Windows 参考数据库已把应用自身函数按模块路径归入 `codexmate_lib/...` 目录树；Windows（strip 后的库）另外恢复了命令 handler 命名与按模块归属，便于直接按模块浏览。Windows 1.2.1 参考库已随 SMB 同步补入合并 archive。


1.2.3 的 macOS 与 Windows 参考数据库已按模块路径归入 `codexmate_lib/...` 目录树；macOS（带符号）承载全量应用函数命名+注释+目录，Windows（strip）恢复命令 handler 名 + 跨平台字符串签名名 + 按模块归属。两平台版本重新对齐（均 1.2.3）。

不发布展开后的伴随文件，不发布用户数据，不发布运行期缓存，不发布凭据或本机状态。

## 清单

主仓库用以下清单记录状态、大小和哈希：

- `evidence/binary-manifests/1.0.9/i64-databases.json`
- `evidence/binary-manifests/1.1.1/i64-databases.json`
- `evidence/binary-manifests/1.1.8/i64-databases.json`
- `evidence/binary-manifests/1.2.2/i64-databases.json`(macOS 1.2.2 / Windows 1.2.1)

重建时先使用 raw/internal 链条，再按需要核对该清单。PR 中引用 IDB 时必须说明它只是参考资产，并列出对应 raw/internal 证据。
