/* round2 (2026-08-07) 证据 -- RouterToggleProgress emit 闭包实现候选一
 * 0x140944320 (0x111=273B, 完整反编译体, 无截断)
 * 引用 Tauri 事件名 "codex-router-toggle-progress"(0x14184AC0E)，调用通用
 * emit helper sub_1401B5900。仅被数据(vtable/闭包表)引用，未见直接 code call，
 * 与 reconcile_router_on 内 a6/a7 参数(a7+32 偏移的 Fn(&str) 风格 fat-pointer
 * 闭包调用槽)的调用模式吻合，推断为该回调闭包具体实现候选之一。
 */

__int64 __fastcall sub_140944320(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  void *v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-60h]
  _QWORD v12[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[6]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h]
  __int64 v16; // [rsp+80h] [rbp+0h]

  v16 = -2;
  v15 = a2;
  v14 = a2;
  if ( !(unsigned __int8)sub_1412D1380(aCodexRouterTog, 28) )
  {
    nullsub_1(v4, v3, v5, v6, v11);
    v8 = (void *)sub_140001650(28, 1);
    if ( !v8 )
      sub_14176E54B(1, 28);
    qmemcpy(v8, "codex-router-toggle-progress", 28);
    v13[3] = 28;
    v13[0] = 0x8000000000000023uLL;
    v13[1] = 28;
    v13[2] = v8;
    goto LABEL_6;
  }
  v7 = *(_QWORD *)(a1 + 136) + 16;
  v12[0] = -1;
  v12[1] = &v14;
  sub_1401B5900((unsigned int)v13, v7, (unsigned int)aCodexRouterTog, 28, (__int64)v12);
  if ( v13[0] != -1 )
LABEL_6:
    sub_140868460(v13);
  result = v15;
  v10 = *(_QWORD *)(v15 + 32);
  if ( v10 )
    return sub_140001660(*(_QWORD *)(v15 + 40), v10, 1);
  return result;
}
