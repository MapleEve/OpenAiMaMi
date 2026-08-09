// Pseudocode for set_voice_global_shortcut (EA: 0x140161fd0, size: 0x54c)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: 职责：Tauri 命令 set_voice_global_shortcut 的 dispatch 入口，薄壳转发到 core::voice::runtime::set_global_shortcut，结果经 CoreEnvelope::ok 包装返回。边界：commands::voice_runtime 模块，薄壳转发模式。副作用：转发调用触发下游语音全局快捷键配置更新。1.2.4→1.2.6 d
// 职责：Tauri 命令 set_voice_global_shortcut dispatch 入口，薄壳转发到 core::voice::runtime::set_global_shortcut，结果经 CoreEnvelope::ok 返回。commands::voice_runtime 模块。1.2.4->1.2.6 delta 新增，mac符号 commands::voice_runtime::set_voice_global_shortcut，命令名串唯一 xref 定位。
__int64 __fastcall set_voice_global_shortcut(__int64 a1)
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
  __m256i v21; // [rsp+240h] [rbp+1C0h]
  char v22[384]; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v23; // [rsp+6B0h] [rbp+630h]
  int v24; // [rsp+6B8h] [rbp+638h]
  int v25; // [rsp+6BCh] [rbp+63Ch]
  __int128 v26; // [rsp+6C0h] [rbp+640h] BYREF
  const char *v27; // [rsp+6D0h] [rbp+650h]
  __int64 v28; // [rsp+6D8h] [rbp+658h]
  char v29[680]; // [rsp+6E0h] [rbp+660h] BYREF
  int v30; // [rsp+988h] [rbp+908h] BYREF
  __m256i v31; // [rsp+990h] [rbp+910h]
  _BYTE v32[152]; // [rsp+A20h] [rbp+9A0h] BYREF
  __int64 v33; // [rsp+AB8h] [rbp+A38h] BYREF
  __int64 v34; // [rsp+AC0h] [rbp+A40h]
  const char *v35; // [rsp+AC8h] [rbp+A48h]
  __int64 v36; // [rsp+AD0h] [rbp+A50h]
  _BYTE *v37; // [rsp+AD8h] [rbp+A58h] BYREF
  __int128 *v38; // [rsp+AE0h] [rbp+A60h]
  __int64 v39; // [rsp+AE8h] [rbp+A68h]
  __int128 v40; // [rsp+DD0h] [rbp+D50h] BYREF
  __int64 v41; // [rsp+DE0h] [rbp+D60h]
  __m256i v42; // [rsp+DE8h] [rbp+D68h] BYREF
  __int64 v43; // [rsp+E08h] [rbp+D88h]
  __int128 v44; // [rsp+E10h] [rbp+D90h] BYREF
  const char *v45; // [rsp+E20h] [rbp+DA0h]
  const char *v46; // [rsp+E28h] [rbp+DA8h]
  __int64 v47; // [rsp+E30h] [rbp+DB0h]
  char v48; // [rsp+E3Eh] [rbp+DBEh]
  char v49; // [rsp+E3Fh] [rbp+DBFh]
  __int64 v50; // [rsp+E40h] [rbp+DC0h]

  v50 = -2;
  sub_14172B820(v19, a1, 520);
  v2 = a1 + 520;
  sub_14172B820(v22, a1 + 520, 400);
  v45 = *(const char **)(a1 + 936);
  v44 = *(_OWORD *)(a1 + 920);
  v39 = 0;
  v33 = (__int64)aSetVoiceGlobal;
  v34 = 25;
  v35 = aApp;
  v36 = 3;
  v37 = v19;
  v38 = &v44;
  v49 = 1;
  sub_1401A9630((__int64)&v30, (__int64)&v33);
  if ( v30 == -1 )
  {
    v21 = v31;
    sub_14172B820(&v33, a1 + 520, 360);
    v26 = *(_OWORD *)(a1 + 880);
    v27 = *(const char **)(a1 + 896);
    v20 = 1;
    v49 = 0;
    sub_140AFFC30((__int64)&v33, v23, (__int64)&v20, &v26, v24, v25);
    goto LABEL_19;
  }
  sub_14172B820(v32, &v30, 152);
  v39 = 0;
  v33 = (__int64)aSetVoiceGlobal;
  v34 = 25;
  v35 = aShortcut;
  v36 = 8;
  v37 = v19;
  v38 = &v44;
  sub_140952570(&v42, &v33);
  LOBYTE(v47) = v42.m256i_i8[0];
  if ( v42.m256i_i8[0] == -1 )
  {
    v41 = v42.m256i_i64[3];
    v40 = *(_OWORD *)&v42.m256i_u64[1];
    sub_140C3FB70(&v33, v32, &v40);
    v3 = v33;
    v4 = v34;
    v5 = v35;
    v6 = v36;
    if ( v33 == 2 )
    {
      v7 = 2;
    }
    else
    {
      sub_14172B820(v29, &v37, 680);
      *(_QWORD *)&v26 = v3;
      *((_QWORD *)&v26 + 1) = v4;
      v27 = v5;
      v28 = v6;
      sub_1404CF350(&v33, &v26);
      v7 = v33;
      v4 = v34;
      v5 = v35;
      v6 = v36;
      sub_14172B820(&v20, &v37, 760);
    }
    sub_140203A20(v32);
    sub_14172B820(&v26, v2, 400);
    if ( v7 != 2 )
    {
      v33 = v7;
      v34 = v4;
      v35 = v5;
      v36 = v6;
      sub_14172B820(&v37, &v20, 760);
LABEL_18:
      v48 = 0;
      sub_140A946C0(&v26, &v33);
      goto LABEL_19;
    }
    if ( v6 < 0 )
    {
      v12 = 0;
      goto LABEL_11;
    }
    if ( v6 )
    {
      nullsub_1(v9, v8, v10, v11, v18);
      v12 = 1;
      v13 = sub_140001650(v6, 1);
      if ( !v13 )
      {
LABEL_11:
        v46 = v5;
        v47 = v4;
        sub_14176E54B(v12, v6);
      }
      v14 = v13;
      sub_14172B820(v13, v5, v6);
      if ( !v4 )
        goto LABEL_17;
    }
    else
    {
      v14 = 1;
      if ( !v4 )
        goto LABEL_17;
    }
    sub_140001660(v5, v4, 1);
LABEL_17:
    LOBYTE(v34) = 3;
    v35 = (const char *)v6;
    v36 = v14;
    v37 = (_BYTE *)v6;
    v33 = 2;
    goto LABEL_18;
  }
  v21 = v42;
  sub_14172B820(&v33, a1 + 520, 360);
  v26 = *(_OWORD *)(a1 + 880);
  v27 = *(const char **)(a1 + 896);
  v20 = 1;
  sub_140AFFC30((__int64)&v33, v23, (__int64)&v20, &v26, v24, v25);
  v49 = 0;
  sub_1400437E0(v32);
LABEL_19:
  if ( (_QWORD)v44 != -1 )
  {
    v15 = *((_QWORD *)&v44 + 1);
    v46 = v45;
    v47 = 0;
    v43 = *((_QWORD *)&v44 + 1);
    while ( v46 != (const char *)v47 )
    {
      ++v47;
      v16 = v15 + 96;
      sub_140401FB0();
      v15 = v16;
    }
    if ( (_QWORD)v44 )
      sub_140001660(*((_QWORD *)&v44 + 1), 96 * v44, 8);
  }
  return sub_140043900(v19);
}
