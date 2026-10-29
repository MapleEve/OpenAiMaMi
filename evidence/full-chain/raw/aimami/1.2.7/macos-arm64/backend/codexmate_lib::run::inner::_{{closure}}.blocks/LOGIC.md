# codexmate_lib::run::inner::_{{closure}} — 分块逆向逻辑说明（blockwise_reconstructed）

- 函数：`__ZN13codexmate_lib3run5inner28_$u7b$$u7b$closure$u7d$$u7d$17h0709a9248eb13976E`
- 地址区间：0x1002bc7c0 – 0x1003098bd（函数体 315,645 字节，51,859 条指令，6,218 个 basic blocks）
- 二进制：AiMaMi 1.2.7-release（macOS universal，IDB 加载 x86_64 slice；按已决事项「mac universal 任一 slice 证据等价」，与 arm64 slice 语义一致）
- source_binary_sha256：f019dbc8e267…（<审计环境> 实例 `retrieve_input_file_sha256` 实测匹配）
- 方法：**basic_blocks 分块重建（blockwise_reconstructed）**。反编译器 decompile ×3 失败（超大体），本文不是反编译伪代码，是从 blocks.jsonl（全 block 拓扑 + callee 边 + 字符串/常量引用）+ disasm/batch-00..31.txt（51,859 条指令分批转储）组装的行为描述。局限：未逐指令精读全部 5.2 万条指令，区域语义由锚点（命名 callee / 字符串 / 常量）+ 控制流拓扑交叉确认，符合红线 13 超大体破法。
- session：<审计会话>（2026-10-27 执行，<审计环境>）

## 总体结论（先说人话）

这个 315KB 的巨型闭包**不是事件循环/命令分派体**，而是 Tauri 启动时**一次性运行的应用上下文构造器**：tauri 编译期宏把 `Builder` 的 config 解析、ACL（capabilities → permission 解析）、RuntimeAuthority 构造全部内联进了 `run()` 的内层闭包。体积来源是约 **108 个命令逐一做权限作用域解析**（每个命令对窗口标签 'hotspot' 和 'main' 各做一次 glob 编译 + BTreeMap 插入），加上 218 个 unwrap panic 桩和 1,489 个 alloc 失败桩撑出来的。

**没有 switch/match 分派表**：全函数出度分布 {0:1709, 1:2021, 2:2488}，无任何 ≥3 后继的分派块。命令分发不在这里（tauri 的 invoke 分派在另外的 generate_handler 函数里）。**控制流 = 线性主 spine（idx 0→2802）+ 大量前跳错误/清理分支（idx 2803-6217 冷区）**。

## 控制流分区（以 block idx 标注，blocks.jsonl 可查地址）

### A. 序与产品元数据（idx 0 – 45，0x1002bc7c0 – 0x1002bdafb）
- idx 0：prologue，`mov r14, rdi`（r14 = 输出结构体指针，closure 把构造结果写进 caller 的 out-param），随即 `__rust_alloc(6,1)` 写入字节 `41 69 4D 61 4D 69` = **"AiMaMi"**，`__rust_alloc(5,1)` 写入 **"1.2.7"**，`__rust_alloc(18,1)` 写入以 "mi.desk…" 开头的 18 字节标识（`mov rcx, 746B7365642E696Dh` = "mi.desk" LE）。即 bundle 名 / 版本 / identifier 字面量的内联物化。
- idx 6（0x1002bc902）：`url::ParseOptions::parse` 解析 **updater 端点**。引用的 rodata 串是相邻拼接：`'http://localhost:3123/'` + base64 段，base64 解码 = `untrusted comment: minisign public key: 9718C9FEBC6D1926\nRWQmGW28/skYl7C7vQmvWOGxQboDI73SZ1xtbCzpRQklpaeEHPy+KCfz\n`。即 **updater endpoint = http://localhost:3123/（本地/开发更新服务器），minisign 公钥 ID 9718C9FEBC6D1926**。⚠ 注意：端点是 localhost，消费者实现时不要把该值当生产端点硬编码（红线 26 同类约束）。
- idx 14（0x1002bce07）：**全函数唯一间接调用** `call qword ptr [rdi]`（vtable 0 号槽，0x1002bcf0f），位于 config 合并段，静态不可解（真动态分发，单点、非分派表，不构成覆盖缺口）。
- idx 16（0x1002bcf25）：`RpmConfig::default` + `MacConfig::default` + `IosConfig::default` + 多次 `_memcpy` —— 组装 tauri `Config` 大结构体。
- idx 44（0x1002bd9e6）：`semver::Version::from_str`（解析 app 版本号）。
- idx 45（0x1002bda19）：产品元数据串物化：author=**borawong**、description=**"Cross-platform desktop companion for Codex"**、productName=**codexmate**；同串 rodata 还含 `orphanedAuthFile`、`base_url`、`NoParentOverflow`（panic/错误信息碎片，相邻 rodata 被 IDA 合并显示）。

### B. capability / ACL manifest 解析（idx ~46 – 1664）
- 大量 `glob::Pattern::from_str`（全程共 **216** 个调用点）与 `BTreeMap::insert`（4 个单态化变体合计 486 次）——解析 capabilities 定义里每个 permission 的 scope glob 与 allow/deny 集合。
- `drop_in_place<Option<tauri_utils::acl::Permission>>` ×364、`drop_in_place<Option<tauri_utils::acl::manifest::Manifest>>` ×16：manifest 解析中间态的析构。

### C. 逐命令权限作用域解析（idx 1665 – 2795，0x1002e9723 – 0x1002fd907）
- **108 个重复单元**（'hotspot' 串块 108 个、'main' 串块 108 个、216 = 108×2 个 glob from_str）：每个命令（ResolvedCommand）单元做 `Pattern::from_str("hotspot")` + `Pattern::from_str("main")` —— 即**每条命令的远程/窗口作用域都按窗口标签 hotspot 与 main 各编译一个 glob**，然后 insert 进 resolved 映射。
- 该区间的 1,809 条「回边」全是 (N → N-1) 相邻对：每个命令单元内部的错误汇合形态，**不是循环**。全函数无真实循环回边（无 while/for 语义），印证这是一次性线性构造。
- `drop_in_place<tauri_utils::acl::resolved::ResolvedCommand>` ×102。

### D. RuntimeAuthority 收口与返回（idx 2802，0x1002fdaa1 – 0x1002fdc48）
- `tauri::ipc::authority::RuntimeAuthority::new`（全函数唯一一次）——把解析完的 ACL 灌进运行时权限机构。
- `drop_in_place<tauri_utils::config::AssetProtocolConfig>`，两次 `_memcpy` 把 authority/config 拷进 out-struct（`[r14+1080h]`、`[r14+1088h..+0xE0]`、`[r14+1168h/1170h/1178h]`）。
- `add rsp,2C88h; pop …; retn` —— **closure 正常返回点**，返回即把构造好的上下文交还 `run::inner` 继续做事件循环（事件循环不在本函数内）。
- idx 2811/2812：`std::sys::random::hashmap_random_keys` ×2 —— 构造阶段建了两个 HashMap（监听器/插件映射类）。

### E. 冷区：panic / alloc-fail / drop 清理桩（idx 2803 – 6217）
- 218 个 `core::result::unwrap_failed` 调用点（首个 idx 2807，末尾 4421-4429），panic Location 引用 `src/lib.rs`（如 0x1002fdc85 `lea r8, off_101AA4B68; "src/lib.rs"`，配合行号 0x2B 等）——**unwrap/expect 重灾：启动期任何 config/ACL 解析失败直接 panic，进程终止，无降级路径**。
- 1,489 个 `alloc::alloc::handle_alloc_error` / `raw_vec::handle_error` 调用点（idx 4429 之后几乎全部 3-5 指令小桩），全部汇到 ud2（0x1002fdc57，idx 2804）。
- 所有 panic/alloc 桩为 ARM64 等价的 `-> !` 发散端，函数正常路径只经 idx 2802 的 retn。

## 破坏性 / 副作用标注（红线 20 ⚠）
- **无文件删除、无 remove_dir_all、无 keychain 删、无进程 kill/exit**：全部 25 个唯一 callee 里无任何破坏性 API。
- ⚠ panic 面：218 个 unwrap_failed 桩 —— 启动期 config/ACL 异常 = 直接 panic 崩溃（含 src/lib.rs 行号定位），无恢复。对消费者含义：复刻启动逻辑时，这些 unwrap 点在自研实现里应换成显式错误传播，否则二进制级行为是「启动即崩」。
- ⚠ updater 端点是 `http://localhost:3123/`：明文 HTTP + 本地地址，说明发布环境走自架更新服务或开发配置；minisign 验签公钥 9718C9FEBC6D1926 内嵌。

## 与 run() bootstrap / 事件分派的关系
本闭包是 `run::inner` 启动序列里的**上下文构造步骤**（config → ACL → RuntimeAuthority → 写出 out-struct → 返回）。事件循环、invoke 命令分派、窗口创建均不在本函数体内；其返回的 RuntimeAuthority 是之后 IPC 权限检查的数据源。查找命令分派请移步 generate_handler 系函数，不要在本函数内找。

## 证据文件
- `blocks.jsonl`：6,218 行，每行 {idx, start, end, succ, callees, strings, consts}（实测：6937 直接调用边、1 间接调用、219 字符串引用、25 唯一 callee）。
- `disasm/batch-00.txt … batch-31.txt`：每批 ≤200 blocks 的全指令转储（合计 51,859 条），块间以 `; ---- block start=… ----` 分隔。
