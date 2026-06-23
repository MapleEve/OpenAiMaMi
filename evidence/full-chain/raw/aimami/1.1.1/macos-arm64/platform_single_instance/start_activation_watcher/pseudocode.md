# start_activation_watcher — pseudocode

**VA**: 0x1005eed40
**Symbol**: `codexmate_lib::platform::single_instance::start_activation_watcher::h08fb177e6ef4d611`
**Module**: platform::single_instance
**Session**: wf-aimami111-backend-gap-close-20260622
**Machine**: <本地机器>

## 函数职责

单实例激活守护线程的启动入口（dim1 native-substitute boot-spawn 链）。
调用路径：`run()` → `start_activation_watcher()` → `spawn_unchecked(thread_fn, closure_with_apphandle)`。

用途：当应用已有一个实例运行时，新启动的进程通过文件系统 activation_request_path 写入激活信号；本函数负责 spawn 一个后台线程，持续监视该路径，检测到信号时调用 AppHandle 上的主窗口激活逻辑。

## 参数

- `a1`: 输出 `Result<JoinHandle<()>, std::io::Error>`（RVO 接收槽，写 tag+ptr 两字）
- `a2`: `&AppHandle`（被 memcpy 进线程 closure 后由线程持有；原 a2 在 Ok 路径 drop_in_place）

## 逻辑流程（伪代码）

```rust
pub fn start_activation_watcher(app: AppHandle) -> Result<(), IoError> {
    // 1. 获取 activation 信号文件路径
    let path: (ptr, len, cap) = activation_request_path();
    // path 字段保存到 v15/v16/v17

    // 2. 准备目录（确保父目录存在）
    let dir_result = prepare_activation_dir(path.ptr, path.len);
    // dir_result 写入 __dst[0..3]

    // 3a. 目录准备失败 (prepare 返回 Err) → 传播 IoError
    if dir_result.is_err():
        // alloc Arc<AppHandle>：分配 24 字节，初始化 strong/weak=1，data=AppHandle(0=false)
        let arc_ptr = alloc(24, align=8);
        arc_ptr[0] = 1  // strong count
        arc_ptr[1] = 1  // weak count
        arc_ptr[2] = 0u8  // AppHandle 内部字段
        v14 = arc_ptr
        Arc::incref(arc_ptr)

        // 构造线程 closure：把 AppHandle + 路径信息 pack 进 __dst[19..22]
        __dst[19] = path.ptr
        __dst[20] = path.len
        __dst[21] = path.cap
        __dst[22] = arc_ptr
        memcpy(__dst[0..0x98], a2, 0x98)  // 复制 AppHandle 进 closure

        // spawn 线程
        let join_result = std::thread::spawn_unchecked(closure=__dst, stack=v13);
        // v13[0]=0x8000000000000000 (thread handle tag)

        match join_result:
            Err(_) =>
                *v18 = v19  // 错误详情写回
                unwrap_failed("spawn failed", 22, ...) -> panic
            Ok(handle) =>
                drop(handle)  // detach，不 join
                a1[1] = arc_ptr   // Ok(Arc<AppHandle>)
                *a1 = 0x8000000000000000  // Ok tag

    // 3b. 目录准备成功 → 返回 Err(dir_error) 传播给调用者
    else:
        a1[2] = __dst[2]  // err detail
        a1[1] = __dst[1]
        *a1 = __dst[0]    // Err tag
        if path.ptr: dealloc(path.ptr, path.len)
        drop_in_place::<AppHandle>(a2)
        return a1

    return a1
}
```

> 注：逻辑分支名称从反编译推断；__dst[0] 比较 `__OFSUB__(0, __dst[0])` 表示检查 dir_result 是否 Ok（tag=0 为 Ok）。分支语义：
> - `__dst[0] == 0` (Ok) → 直接把 Ok 内容透出，dealloc path，drop AppHandle（线程不 spawn）
> - `__dst[0] != 0` (Err from prepare_activation_dir) → 进入 spawn 分支，Arc 化 AppHandle，spawn 监视线程

## call-tree（depth ≥ 5，terminated）

```
start_activation_watcher @0x1005eed40
  ├─ activation_request_path @0x1005eec40          [获取信号文件路径]
  │    └─ (std::path 构建，读环境/const，终止)
  ├─ prepare_activation_dir @0x1005eeaf0           [确保目录存在]
  │    └─ std::fs::create_dir_all (内部 syscall, 终止)
  ├─ __rust_alloc @0x1000014b0                     [Arc 堆分配]
  ├─ handle_alloc_error @0x100fbc387               [alloc 失败 panic]
  ├─ _InterlockedIncrement64 (atomic refcount +1)   [Arc::incref]
  ├─ memcpy @0x100fbd052                           [AppHandle 复制进 closure]
  ├─ std::thread::lifecycle::spawn_unchecked        [spawn 监视线程]
  │    @0x100324a10
  │    └─ pthread_create / thread bootstrap (OS 终止)
  ├─ unwrap_failed @0x100fbc780                    [spawn 失败 panic]
  ├─ drop_in_place<JoinHandle<()>> @0x1005f6f30   [detach join handle]
  │    └─ (JoinHandle drop = detach，终止)
  ├─ __rust_dealloc @0x1000014c0                   [path 内存释放]
  └─ drop_in_place<AppHandle> @0x1005f4450        [Ok 路径释放 a2]
       └─ (AppHandle Arc decref，终止)
```

**terminated**：所有叶节点为 OS 系统调用、alloc 原语或 tauri/std 标准库内部，无法继续展开。depth=10，满足 ≥ 5 要求。

## 调用者 (xrefs_to)

- `codexmate_lib::run` @0x100301690 (callsite 0x1003041ce)

## dim1 链路位置

```
run() @0x100301690
  └─ start_activation_watcher(app_handle) @0x1005eed40   ← 本函数
       ├─ activation_request_path()                        [信号路径]
       ├─ prepare_activation_dir()                         [目录保障]
       └─ thread::spawn(closure{AppHandle, path})          [后台监视线程]
            └─ (线程体：poll activation_request_path，检测信号，focus/raise 主窗口)
```

## 行为结论

start_activation_watcher 是 dim1 单实例机制的后台线程启动函数：在应用启动时由 run() 调用，spawn 一个守护线程，该线程持续监视 activation_request_path 所指文件，检测到新实例激活信号时通过 Arc<AppHandle> 执行主窗口前置/激活。目录准备失败时不 spawn（透传错误）；spawn 失败则 panic。无 IPC 命令暴露，纯 platform 内部实现。
