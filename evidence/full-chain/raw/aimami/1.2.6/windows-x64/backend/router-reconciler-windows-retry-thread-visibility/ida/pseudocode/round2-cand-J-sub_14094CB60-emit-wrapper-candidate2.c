/* round2 (2026-08-07) 证据 -- RouterToggleProgress emit 闭包实现候选二
 * 0x14094CB60 (0x138=312B, 完整反编译体, 无截断)
 * 与 0x140944320 同模式，同样引用 "codex-router-toggle-progress" 并调用
 * sub_1401B5900；参数形状为 __int128*(接收 16 字节对齐结构体)而非 __int64，
 * 推测为不同调用点的单态化版本。
 */

__int64 __fastcall sub_14094CB60(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  void *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-60h]
  _QWORD v13[3]; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v14[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+70h] [rbp-10h]
  _QWORD v17[6]; // [rsp+88h] [rbp+8h] BYREF
  _OWORD *v18; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+40h]
  __int64 v20; // [rsp+C8h] [rbp+48h]

  v20 = -2;
  v19 = a1;
  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v16 = a2[3];
  v15 = v4;
  v14[1] = v3;
  v14[0] = v2;
  v18 = v14;
  if ( !(unsigned __int8)sub_1412D1380(aCodexRouterTog, 28) )
  {
    nullsub_1(v6, v5, v7, v8, v12);
    v10 = (void *)sub_140001650(28, 1);
    if ( !v10 )
      sub_14176E54B(1, 28);
    qmemcpy(v10, "codex-router-toggle-progress", 28);
    v17[3] = 28;
    v17[0] = 0x8000000000000023uLL;
    v17[1] = 28;
    v17[2] = v10;
    goto LABEL_6;
  }
  v9 = *(_QWORD *)(v19 + 136) + 16;
  v13[0] = -1;
  v13[1] = &v18;
  sub_1401B5900((unsigned int)v17, v9, (unsigned int)aCodexRouterTog, 28, (__int64)v13);
  if ( v17[0] != -1 )
LABEL_6:
    sub_140868460(v17);
  if ( (_QWORD)v15 )
    sub_140001660(*((_QWORD *)&v15 + 1), v15, 1);
  return sub_140203A20(v19);
}
