# pseudocode.md — set_codex_api_login (AiMaMi 1.1.1 win64)

## Dispatch Hub (set_codex_api_login_dispatch_hub_sys @ 0x14099D990)

```
// 多命令 Tokio coroutine hub；outer-switch state in fields 3506/3507/3508/3512/3520/3536-3539
// LABEL_4 / case 0 = set_codex_api_login branch:

fn set_codex_api_login_dispatch_hub_sys(coroutine_state, cx):
    // case 0: 首次 poll
    payload_raw = parse_json(v99="set_codex_api_login"[19B], v101="app"[3B])  // sub_140089A50
    manager_str  = extract_manager_param(payload_raw)   // sub_14006F4B0, 7B, WIN hash-map + InterlockedCmpXchg8
    enabled_bool = extract_bool(payload_raw, "enabled")  // sub_1402FF1A0
    relaunch_bool = extract_relaunch(payload_raw)         // sub_1402FF330, checks coroutine_state[+480]==6

    coroutine_state[apiLogin@2832]  = enabled_bool
    coroutine_state[enabled@2833]   = enabled_bool
    coroutine_state[relaunch@...]   = relaunch_bool

    // 通过 vtable off_141899420 → sub_14023E4D0 分配 512B buffer → sub_140F050E0 enqueue async task
    enqueue_blocking_task(set_codex_api_login_task_runner_sys)
    yield  // → Tokio 调度
```

## Task Runner (set_codex_api_login_task_runner_sys @ 0x1407D63E0)

```
fn set_codex_api_login_task_runner_sys(out_result, coroutine_state):
    if *coroutine_state == 3: panic("[internal exception] blocking task ran twice.")  // sub_14124BF80
    *coroutine_state = 3   // 标记 in-progress 防重入
    copy_state(v10, coroutine_state+1, 192)   // sub_141212FB0
    sub_140F03290()   // runtime setup
    set_codex_api_login_core_sys(result, params, api_login_bool, relaunch_bool, relay_state)
    cleanup(params)
    copy_result(out_result, result, 392)
    return out_result
```

## Core Body (set_codex_api_login_core_sys @ 0x1406D8620)

```
fn set_codex_api_login_core_sys(out, params, a3_api_login: bool, a4_relaunch: bool, relay_state):
    // 1. 无变化快路径
    current_api_login = relay_state[codexApiLogin@+365]  // RelayManagerState.codexApiLogin bool
    if (a3_api_login XOR current_api_login) != 1:
        // 状态未改变：滚回 providers 的 field[11] (apiKey clear-flag), stride=232B
        for provider in relay_state.providers:
            provider[field_11] = 0   // clear auth flag
        relay_providers_config_write_and_persist_sys(relay_state)
        return ok_no_change

    lock relay_state  // InterlockedCompareExchange8(relay_state+16, 1, 0); WakeByAddressSingle on release

    // 2. ENABLE 路径 (a3_api_login = true)
    if a3_api_login:
        emit_event("writing_auth")
        providers = relay_get_active_providers_vec_sys(relay_state)   // → Vec<RelayProvider> (stride=232B, up to 5)
        if providers.is_empty():
            return ok_no_providers

        relay_providers_config_write_and_persist_sys(relay_state)   // codexApiLogin@+365 = true
        emit_event("writing_config")
        sub_140514170(relay_state)    // update relay state writing_config field
        rp = sub_1407169C0(relay_state)   // get providers Vec guard (panics "relay state poisoned" if +0==1)
        sub_1400397C0(rp)               // init provider entry: set +373=1, clear +136/+152 auth fields

        ok = relay_providers_config_write_and_persist_sys(relay_state)
        relay_post_login_state_sync_sys(relay_state, params)

        if !ok:
            sub_1406E1040(relay_state)   // rollback: set codexApiLogin=false, re-persist, log

        if a4_relaunch:
            emit_event("stopping_codex")
            quit_codex_poll_wait_sys_111(app, 5, 0)   // poll sub_140504DA0("Codex",5) @50ms for 5000ms; fallback kill
            emit_event("launching_codex" or "done")
            sub_1406D9F00(relay_state)   // emit final event

    // 3. DISABLE 路径 (a3_api_login = false)
    else:
        emit_event("restoring_auth")
        sub_1401BF770(relay_state)   // restore auth (reverse of writing_auth)
        relay_providers_config_write_and_persist_sys(relay_state)
        emit_event("writing_config")
        relay_post_login_state_sync_sys(relay_state, params)

    return result
```

## Persist Chain (relay_providers_config_write_and_persist_sys @ 0x1406E6960)

```
fn relay_providers_config_write_and_persist_sys(relay_state):
    buf = sub_1406DA6B0(relay_state)   // serialize to buffer
    relay_config_check_parent_dirs_sys(relay_state)  // sub_1406F2870: check 9 parent dir path fields
    json_bytes = sub_14020A3E0(relay_state)  // JSON serialize:
                                              //   "schemaVersion" @ +360
                                              //   "providers"     @ +0 (Vec)
                                              //   "activeByIde"   @ +24
                                              //   "proxy"         @ +48
                                              //   "codexRouterEnabled" @ +364 (bool)
                                              //   "codexApiLogin"     @ +365 (bool)  ← KEY FIELD
                                              //   "codexApiSlots"     @ +128
                                              //   "displayTagGlobal"  @ +152
                                              //   "displayTagWoyao"   @ +176
    atomic_write_file_sys(path, json_bytes)   // sub_140504310:
                                               //   GetCurrentProcessId → build temp path
                                               //   WriteFile loop (sub_141097C30)
                                               //   rename temp → final (sub_140504130)
                                               //   CloseHandle on all paths
    WIN lock: WakeByAddressSingle(relay_state+? )
    return ok/err
```

## quit_codex_poll_wait_sys_111 (@ 0x1407A39B0)

```
fn quit_codex_poll_wait_sys_111(app, poll_count=5, arg2):
    if sub_140504DA0("Codex", 5) == 1:   // is_running check
        sub_1407A3C60()   // send quit signal
        // poll loop: max 5000ms (5*1000ms or 100*50ms)
        deadline = now() + timeout
        while now() < deadline AND sub_140504DA0("Codex",5)==1:
            sub_14108D4A0(0, 50_000_000)   // sleep 50ms (nanoseconds)
    quit_codex_fallback_kill_sys_111(app)  // always called after poll
    // NOTE: WIN 无 WakeByAddressSingle condvar — 纯轮询 50ms 间隔
```
