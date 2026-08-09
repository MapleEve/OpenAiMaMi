// Pseudocode for set_voice_overlay_style (EA: 0x14015cb10, size: 0x53c)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: 职责：Tauri 命令 set_voice_overlay_style 的 dispatch 入口，薄壳转发到 core::voice::runtime::set_overlay_style，结果经 CoreEnvelope::ok 包装返回。边界：commands::voice_runtime 模块，薄壳转发模式。副作用：转发调用触发下游语音悬浮窗样式更新。1.2.4→1.2.6 delta 新
// 职责：Tauri 命令 set_voice_overlay_style dispatch 入口，薄壳转发到 core::voice::runtime::set_overlay_style，结果经 CoreEnvelope::ok 返回。commands::voice_runtime 模块。1.2.4->1.2.6 delta 新增，mac符号 commands::voice_runtime::set_voice_overlay_style，命令名串唯一 xref 定位。
__int64 __fastcall set_voice_overlay_style(__int64 a1)
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
  int v31; // [rsp+990h] [rbp+910h] BYREF
  __int128 v32; // [rsp+998h] [rbp+918h]
  __int128 v33; // [rsp+9A8h] [rbp+928h]
  _BYTE v34[152]; // [rsp+A28h] [rbp+9A8h] BYREF
  __int64 v35; // [rsp+AC0h] [rbp+A40h] BYREF
  __int64 v36; // [rsp+AC8h] [rbp+A48h]
  const char *v37; // [rsp+AD0h] [rbp+A50h]
  __int64 v38; // [rsp+AD8h] [rbp+A58h]
  _BYTE *v39; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 *v40; // [rsp+AE8h] [rbp+A68h]
  __int64 v41; // [rsp+AF0h] [rbp+A70h]
  _OWORD v42[2]; // [rsp+DD8h] [rbp+D58h] BYREF
  __int64 v43; // [rsp+DF8h] [rbp+D78h]
  __int128 v44; // [rsp+E00h] [rbp+D80h] BYREF
  const char *v45; // [rsp+E10h] [rbp+D90h]
  const char *v46; // [rsp+E18h] [rbp+D98h]
  __int64 v47; // [rsp+E20h] [rbp+DA0h]
  char v48; // [rsp+E2Eh] [rbp+DAEh]
  char v49; // [rsp+E2Fh] [rbp+DAFh]
  __int64 v50; // [rsp+E30h] [rbp+DB0h]

  v50 = -2;
  sub_14172B820(v19, a1, 520);
  v2 = a1 + 520;
  sub_14172B820(v23, a1 + 520, 400);
  v45 = *(const char **)(a1 + 936);
  v44 = *(_OWORD *)(a1 + 920);
  v41 = 0;
  v35 = (__int64)aSetVoiceOverla;
  v36 = 23;
  v37 = aApp;
  v38 = 3;
  v39 = v19;
  v40 = &v44;
  v49 = 1;
  sub_1401A9630((__int64)&v31, (__int64)&v35);
  if ( v31 == -1 )
  {
    v22 = v33;
    v21 = v32;
    sub_14172B820(&v35, a1 + 520, 360);
    v27 = *(_OWORD *)(a1 + 880);
    v28 = *(const char **)(a1 + 896);
    v20 = 1;
    v49 = 0;
    sub_140AFFC30((__int64)&v35, v24, (__int64)&v20, &v27, v25, v26);
    goto LABEL_19;
  }
  sub_14172B820(v34, &v31, 152);
  v41 = 0;
  v35 = (__int64)aSetVoiceOverla;
  v36 = 23;
  v37 = aStyle;
  v38 = 5;
  v39 = v19;
  v40 = &v44;
  sub_1404F66B0(v42, &v35);
  LOBYTE(v47) = v42[0];
  if ( LOBYTE(v42[0]) == 0xFF )
  {
    sub_140C3DE90(&v35, v34, BYTE1(v42[0]));
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
      sub_14172B820(v30, &v39, 680);
      *(_QWORD *)&v27 = v3;
      *((_QWORD *)&v27 + 1) = v4;
      v28 = v5;
      v29 = v6;
      sub_1404CF350(&v35, &v27);
      v7 = v35;
      v4 = v36;
      v5 = v37;
      v6 = v38;
      sub_14172B820(&v20, &v39, 760);
    }
    sub_140203A20(v34);
    sub_14172B820(&v27, v2, 400);
    if ( v7 != 2 )
    {
      v35 = v7;
      v36 = v4;
      v37 = v5;
      v38 = v6;
      sub_14172B820(&v39, &v20, 760);
LABEL_18:
      v48 = 0;
      sub_140A946C0(&v27, &v35);
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
    LOBYTE(v36) = 3;
    v37 = (const char *)v6;
    v38 = v14;
    v39 = (_BYTE *)v6;
    v35 = 2;
    goto LABEL_18;
  }
  v22 = v42[1];
  v21 = v42[0];
  sub_14172B820(&v35, a1 + 520, 360);
  v27 = *(_OWORD *)(a1 + 880);
  v28 = *(const char **)(a1 + 896);
  v20 = 1;
  sub_140AFFC30((__int64)&v35, v24, (__int64)&v20, &v27, v25, v26);
  v49 = 0;
  sub_1400437E0(v34);
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
