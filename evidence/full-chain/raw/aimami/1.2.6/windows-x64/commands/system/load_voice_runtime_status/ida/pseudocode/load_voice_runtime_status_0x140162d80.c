// Pseudocode for load_voice_runtime_status (EA: 0x140162d80, size: 0x44c)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: 职责：load_voice_runtime_status IPC 命令的 tracing::instrument 包装壳（真实业务体在同 IDB 内已命名的 load_voice_runtime_status@0x140c37a50，本次会话确认该重命名+注释来自更早轮次但从未落 raw evidence bundle，本次补写证据）。边界：core::voice::runtime 模块状态查询。
// 职责：load_voice_runtime_status IPC 命令的 tracing::instrument 包装壳（真实业务体在同 IDB 内已命名的 load_voice_runtime_status@0x140c37a50，本次会话确认该重命名+注释来自更早轮次但从未落 raw evidence bundle，本次补写证据）。边界：core::voice::runtime 模块状态查询。副作用：无写入副作用，纯读取。1.2.6 windows P1 补漏 deep pass 20260806。
__int64 __fastcall load_voice_runtime_status_owner_sys(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r14
  const char *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rsi
  _BYTE v14[520]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+238h] [rbp+1B8h] BYREF
  __int128 v16; // [rsp+240h] [rbp+1C0h]
  __int128 v17; // [rsp+250h] [rbp+1D0h]
  char v18[384]; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v19; // [rsp+6B0h] [rbp+630h]
  int v20; // [rsp+6B8h] [rbp+638h]
  int v21; // [rsp+6BCh] [rbp+63Ch]
  __int128 v22; // [rsp+6C0h] [rbp+640h] BYREF
  const char *v23; // [rsp+6D0h] [rbp+650h]
  __int64 v24; // [rsp+6D8h] [rbp+658h]
  char v25[688]; // [rsp+6E0h] [rbp+660h] BYREF
  _BYTE v26[152]; // [rsp+990h] [rbp+910h] BYREF
  int v27; // [rsp+A28h] [rbp+9A8h] BYREF
  __int128 v28; // [rsp+A30h] [rbp+9B0h]
  __int128 v29; // [rsp+A40h] [rbp+9C0h]
  __int64 v30; // [rsp+AC0h] [rbp+A40h] BYREF
  __int64 v31; // [rsp+AC8h] [rbp+A48h]
  const char *v32; // [rsp+AD0h] [rbp+A50h]
  __int64 v33; // [rsp+AD8h] [rbp+A58h]
  _QWORD v34[96]; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 v35; // [rsp+DE0h] [rbp+D60h] BYREF
  const char *v36; // [rsp+DF0h] [rbp+D70h]
  const char *v37; // [rsp+DF8h] [rbp+D78h]
  __int64 v38; // [rsp+E00h] [rbp+D80h]
  char v39; // [rsp+E0Eh] [rbp+D8Eh]
  char v40; // [rsp+E0Fh] [rbp+D8Fh]
  __int64 v41; // [rsp+E10h] [rbp+D90h]

  v41 = -2;
  sub_14172B820(v14, a1, 520);
  v2 = a1 + 520;
  sub_14172B820(v18, a1 + 520, 400);
  v36 = *(const char **)(a1 + 936);
  v35 = *(_OWORD *)(a1 + 920);
  v34[2] = 0;
  v30 = (__int64)aLoadVoiceRunti;
  v31 = 25;
  v32 = aApp;
  v33 = 3;
  v34[0] = v14;
  v34[1] = &v35;
  v40 = 1;
  sub_1401A9630((__int64)&v27, (__int64)&v30);
  if ( v27 != -1 )
  {
    sub_14172B820(v26, &v27, 152);
    load_voice_runtime_status((__int64)&v30, (__int64)v26);
    v3 = v30;
    v4 = v31;
    v5 = v32;
    v6 = v33;
    if ( v30 == 2 )
    {
      v40 = 1;
      sub_140203A20(v26);
      sub_14172B820(&v22, v2, 400);
    }
    else
    {
      sub_14172B820(v25, v34, 680);
      *(_QWORD *)&v22 = v3;
      *((_QWORD *)&v22 + 1) = v4;
      v23 = v5;
      v24 = v6;
      sub_1404CF350(&v30, &v22);
      v7 = v30;
      v4 = v31;
      v5 = v32;
      v6 = v33;
      sub_14172B820(&v15, v34, 760);
      v40 = 1;
      sub_140203A20(v26);
      sub_14172B820(&v22, v2, 400);
      if ( v7 != 2 )
      {
        v30 = v7;
        v31 = v4;
        v32 = v5;
        v33 = v6;
        sub_14172B820(v34, &v15, 760);
        goto LABEL_15;
      }
    }
    if ( v6 < 0 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    if ( v6 )
    {
      nullsub_1();
      v8 = 1;
      v9 = sub_140001650(v6, 1);
      if ( !v9 )
      {
LABEL_8:
        v37 = v5;
        v38 = v4;
        sub_14176E54B(v8, v6);
      }
      v10 = v9;
      sub_14172B820(v9, v5, v6);
      if ( !v4 )
        goto LABEL_13;
    }
    else
    {
      v10 = 1;
      if ( !v4 )
        goto LABEL_13;
    }
    sub_140001660(v5, v4, 1);
LABEL_13:
    LOBYTE(v31) = 3;
    v32 = (const char *)v6;
    v33 = v10;
    v34[0] = v6;
    v30 = 2;
LABEL_15:
    v39 = 0;
    sub_140A946C0(&v22, &v30);
    goto LABEL_16;
  }
  v17 = v29;
  v16 = v28;
  sub_14172B820(&v30, a1 + 520, 360);
  v22 = *(_OWORD *)(a1 + 880);
  v23 = *(const char **)(a1 + 896);
  v15 = 1;
  v40 = 0;
  sub_140AFFC30((__int64)&v30, v19, (__int64)&v15, &v22, v20, v21);
LABEL_16:
  if ( (_QWORD)v35 != -1 )
  {
    v11 = *((_QWORD *)&v35 + 1);
    v37 = v36;
    v38 = 0;
    v34[95] = *((_QWORD *)&v35 + 1);
    while ( v37 != (const char *)v38 )
    {
      ++v38;
      v12 = v11 + 96;
      sub_140401FB0();
      v11 = v12;
    }
    if ( (_QWORD)v35 )
      sub_140001660(*((_QWORD *)&v35 + 1), 96 * v35, 8);
  }
  return sub_140043900(v14);
}
