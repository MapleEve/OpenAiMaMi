// Pseudocode for request_accessibility_permission (EA: 0x14015aad0, size: 0x42c)
// Module: commands/voice
// Source: IDA Hex-Rays decompiler
// IDA Comment: 职责：Tauri 命令 request_accessibility_permission 的公开 dispatch 入口（tracing::instrument 包装壳，span 字段名 app，薄壳转发模式）。边界：commands::voice_runtime 模块，请求系统辅助功能权限（语音唤醒/监听依赖）。副作用：转发调用触发下游系统权限请求 API（跨进程/系统调用，非本函数直接执行）。
// 职责：Tauri 命令 request_accessibility_permission 的公开 dispatch 入口（tracing::instrument 包装壳，span 字段名 app，薄壳转发模式）。边界：commands::voice_runtime 模块，请求系统辅助功能权限（语音唤醒/监听依赖）。副作用：转发调用触发下游系统权限请求 API（跨进程/系统调用，非本函数直接执行）。1.2.4→1.2.6 delta 新增命令，win 侧本轮经唯一命令名字符串 xref 定位并完成红线24 production。
__int64 __fastcall request_accessibility_permission(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r14
  const char *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v18; // [rsp+20h] [rbp-60h]
  _BYTE v19[520]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+238h] [rbp+1B8h] BYREF
  __int128 v21; // [rsp+240h] [rbp+1C0h]
  __int128 v22; // [rsp+250h] [rbp+1D0h]
  char v23[384]; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v24; // [rsp+6B0h] [rbp+630h]
  int v25; // [rsp+6B8h] [rbp+638h]
  int v26; // [rsp+6BCh] [rbp+63Ch]
  __int128 v27; // [rsp+6C0h] [rbp+640h] BYREF
  const char *v28; // [rsp+6D0h] [rbp+650h]
  __int64 v29; // [rsp+6D8h] [rbp+658h]
  char v30[688]; // [rsp+6E0h] [rbp+660h] BYREF
  _BYTE v31[152]; // [rsp+990h] [rbp+910h] BYREF
  int v32; // [rsp+A28h] [rbp+9A8h] BYREF
  __int128 v33; // [rsp+A30h] [rbp+9B0h]
  __int128 v34; // [rsp+A40h] [rbp+9C0h]
  __int64 v35; // [rsp+AC0h] [rbp+A40h] BYREF
  __int64 v36; // [rsp+AC8h] [rbp+A48h]
  const char *v37; // [rsp+AD0h] [rbp+A50h]
  __int64 v38; // [rsp+AD8h] [rbp+A58h]
  _QWORD v39[96]; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 v40; // [rsp+DE0h] [rbp+D60h] BYREF
  const char *v41; // [rsp+DF0h] [rbp+D70h]
  const char *v42; // [rsp+DF8h] [rbp+D78h]
  __int64 v43; // [rsp+E00h] [rbp+D80h]
  char v44; // [rsp+E0Eh] [rbp+D8Eh]
  char v45; // [rsp+E0Fh] [rbp+D8Fh]
  __int64 v46; // [rsp+E10h] [rbp+D90h]

  v46 = -2;
  sub_14172B820(v19, a1, 520);
  v2 = a1 + 520;
  sub_14172B820(v23, a1 + 520, 400);
  v41 = *(const char **)(a1 + 936);
  v40 = *(_OWORD *)(a1 + 920);
  v39[2] = 0;
  v35 = (__int64)aRequestAccessi;
  v36 = 32;
  v37 = aApp;
  v38 = 3;
  v39[0] = v19;
  v39[1] = &v40;
  v45 = 1;
  sub_1401A9630((__int64)&v32, (__int64)&v35);
  if ( v32 != -1 )
  {
    sub_14172B820(v31, &v32, 152);
    sub_140C432E0(&v35, v31);
    v3 = v35;
    v4 = v36;
    v5 = v37;
    v6 = v38;
    if ( v35 == 2 )
    {
      v7 = 2;
    }
    else
    {
      sub_14172B820(v30, v39, 680);
      *(_QWORD *)&v27 = v3;
      *((_QWORD *)&v27 + 1) = v4;
      v28 = v5;
      v29 = v6;
      sub_1404CF350(&v35, &v27);
      v7 = v35;
      v4 = v36;
      v5 = v37;
      v6 = v38;
      sub_14172B820(&v20, v39, 760);
    }
    v45 = 1;
    sub_140203A20(v31);
    sub_14172B820(&v27, v2, 400);
    if ( v7 != 2 )
    {
      v35 = v7;
      v36 = v4;
      v37 = v5;
      v38 = v6;
      sub_14172B820(v39, &v20, 760);
LABEL_16:
      v44 = 0;
      sub_140A946C0(&v27, &v35);
      goto LABEL_17;
    }
    if ( v6 < 0 )
    {
      v12 = 0;
      goto LABEL_9;
    }
    if ( v6 )
    {
      nullsub_1(v9, v8, v10, v11, v18);
      v12 = 1;
      v13 = sub_140001650(v6, 1);
      if ( !v13 )
      {
LABEL_9:
        v42 = v5;
        v43 = v4;
        sub_14176E54B(v12, v6);
      }
      v14 = v13;
      sub_14172B820(v13, v5, v6);
      if ( !v4 )
        goto LABEL_15;
    }
    else
    {
      v14 = 1;
      if ( !v4 )
        goto LABEL_15;
    }
    sub_140001660(v5, v4, 1);
LABEL_15:
    LOBYTE(v36) = 3;
    v37 = (const char *)v6;
    v38 = v14;
    v39[0] = v6;
    v35 = 2;
    goto LABEL_16;
  }
  v22 = v34;
  v21 = v33;
  sub_14172B820(&v35, a1 + 520, 360);
  v27 = *(_OWORD *)(a1 + 880);
  v28 = *(const char **)(a1 + 896);
  v20 = 1;
  v45 = 0;
  sub_140AFFC30((__int64)&v35, v24, (__int64)&v20, &v27, v25, v26);
LABEL_17:
  if ( (_QWORD)v40 != -1 )
  {
    v15 = *((_QWORD *)&v40 + 1);
    v42 = v41;
    v43 = 0;
    v39[95] = *((_QWORD *)&v40 + 1);
    while ( v42 != (const char *)v43 )
    {
      ++v43;
      v16 = v15 + 96;
      sub_140401FB0();
      v15 = v16;
    }
    if ( (_QWORD)v40 )
      sub_140001660(*((_QWORD *)&v40 + 1), 96 * v40, 8);
  }
  return sub_140043900(v19);
}
