// Pseudocode for set_voice_processing_mode_id (EA: 0x14015d330, size: 0x679)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: 职责：Tauri 命令 set_voice_processing_mode_id 的 dispatch 入口，薄壳转发到 core::voice::runtime::set_processing_mode_id，结果经 CoreEnvelope::ok 包装返回。边界：commands::voice_runtime 模块，薄壳转发模式。副作用：转发调用触发下游语音处理模式 ID 更新。1.2.4→
// 职责：Tauri 命令 set_voice_processing_mode_id dispatch 入口，薄壳转发到 core::voice::runtime::set_processing_mode_id，结果经 CoreEnvelope::ok 返回。commands::voice_runtime 模块。1.2.4->1.2.6 delta 新增，mac符号 commands::voice_runtime::set_voice_processing_mode_id，命令名串唯一 xref 定位。
__int64 __fastcall set_voice_processing_mode_id(__int64 a1)
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
  __int128 v22; // [rsp+530h] [rbp+4B0h] BYREF
  const char *v23; // [rsp+540h] [rbp+4C0h]
  __int64 v24; // [rsp+548h] [rbp+4C8h]
  char v25[688]; // [rsp+550h] [rbp+4D0h] BYREF
  char v26[384]; // [rsp+800h] [rbp+780h] BYREF
  __int64 v27; // [rsp+980h] [rbp+900h]
  int v28; // [rsp+988h] [rbp+908h]
  int v29; // [rsp+98Ch] [rbp+90Ch]
  int v30; // [rsp+990h] [rbp+910h] BYREF
  __m256i v31; // [rsp+998h] [rbp+918h]
  _BYTE v32[152]; // [rsp+A28h] [rbp+9A8h] BYREF
  __int64 v33; // [rsp+AC0h] [rbp+A40h] BYREF
  __int64 v34; // [rsp+AC8h] [rbp+A48h]
  const char *v35; // [rsp+AD0h] [rbp+A50h]
  __int64 v36; // [rsp+AD8h] [rbp+A58h]
  _BYTE *v37; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 *v38; // [rsp+AE8h] [rbp+A68h]
  __int64 v39; // [rsp+AF0h] [rbp+A70h]
  __m256i v40; // [rsp+DD8h] [rbp+D58h] BYREF
  __m256i v41; // [rsp+DF8h] [rbp+D78h] BYREF
  __int64 v42; // [rsp+E18h] [rbp+D98h]
  __int128 v43; // [rsp+E20h] [rbp+DA0h] BYREF
  __int64 v44; // [rsp+E30h] [rbp+DB0h]
  __int128 v45; // [rsp+E40h] [rbp+DC0h] BYREF
  const char *v46; // [rsp+E50h] [rbp+DD0h]
  const char *v47; // [rsp+E58h] [rbp+DD8h]
  __int64 v48; // [rsp+E60h] [rbp+DE0h]
  char v49; // [rsp+E6Eh] [rbp+DEEh]
  char v50; // [rsp+E6Fh] [rbp+DEFh]
  __int64 v51; // [rsp+E70h] [rbp+DF0h]

  v51 = -2;
  sub_14172B820(v19, a1, 520);
  v2 = a1 + 520;
  sub_14172B820(v26, a1 + 520, 400);
  v46 = *(const char **)(a1 + 936);
  v45 = *(_OWORD *)(a1 + 920);
  v39 = 0;
  v33 = (__int64)aSetVoiceProces;
  v34 = 28;
  v35 = aApp;
  v36 = 3;
  v37 = v19;
  v38 = &v45;
  v50 = 1;
  sub_1401A9630((__int64)&v30, (__int64)&v33);
  if ( v30 == -1 )
  {
    v21 = v31;
    sub_14172B820(&v33, a1 + 520, 360);
    v22 = *(_OWORD *)(a1 + 880);
    v23 = *(const char **)(a1 + 896);
    v20 = 1;
    v50 = 0;
    sub_140AFFC30((__int64)&v33, v27, (__int64)&v20, &v22, v28, v29);
    goto LABEL_25;
  }
  sub_14172B820(v32, &v30, 152);
  v39 = 0;
  v33 = (__int64)aSetVoiceProces;
  v34 = 28;
  v35 = aModeid;
  v36 = 6;
  v37 = v19;
  v38 = &v45;
  sub_140955980(&v41, &v33);
  LOBYTE(v48) = v41.m256i_i8[0] == -1;
  if ( v41.m256i_i8[0] != -1 )
  {
    v21 = v41;
    sub_14172B820(&v33, a1 + 520, 360);
    v22 = *(_OWORD *)(a1 + 880);
    v23 = *(const char **)(a1 + 896);
    v20 = 1;
    sub_140AFFC30((__int64)&v33, v27, (__int64)&v20, &v22, v28, v29);
    v50 = 0;
    sub_1400437E0(v32);
    goto LABEL_25;
  }
  v44 = v41.m256i_i64[3];
  v43 = *(_OWORD *)&v41.m256i_u64[1];
  v39 = 0;
  v33 = (__int64)aSetVoiceProces;
  v34 = 28;
  v35 = aProcessingmode;
  v36 = 14;
  v37 = v19;
  v38 = &v45;
  sub_140953DC0(&v40, &v33);
  LOBYTE(v48) = v40.m256i_i8[0];
  if ( v40.m256i_i8[0] == -1 )
  {
    sub_140C45270(&v33, v32, &v43, v40.m256i_u8[1]);
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
      sub_14172B820(v25, &v37, 680);
      *(_QWORD *)&v22 = v3;
      *((_QWORD *)&v22 + 1) = v4;
      v23 = v5;
      v24 = v6;
      sub_1404CF350(&v33, &v22);
      v7 = v33;
      v4 = v34;
      v5 = v35;
      v6 = v36;
      sub_14172B820(&v20, &v37, 760);
    }
    sub_140203A20(v32);
    sub_14172B820(&v22, v2, 400);
    if ( v7 == 2 )
    {
      if ( v6 < 0 )
      {
        v12 = 0;
        goto LABEL_15;
      }
      if ( v6 )
      {
        nullsub_1(v9, v8, v10, v11, v18);
        v12 = 1;
        v13 = sub_140001650(v6, 1);
        if ( !v13 )
        {
LABEL_15:
          v47 = v5;
          v48 = v4;
          sub_14176E54B(v12, v6);
        }
        v14 = v13;
        sub_14172B820(v13, v5, v6);
      }
      else
      {
        v14 = 1;
      }
      if ( v4 )
        sub_140001660(v5, v4, 1);
      LOBYTE(v34) = 3;
      v35 = (const char *)v6;
      v36 = v14;
      v37 = (_BYTE *)v6;
      v33 = 2;
    }
    else
    {
      v33 = v7;
      v34 = v4;
      v35 = v5;
      v36 = v6;
      sub_14172B820(&v37, &v20, 760);
    }
    v49 = 0;
    sub_140A946C0(&v22, &v33);
    goto LABEL_25;
  }
  v21 = v40;
  sub_14172B820(&v33, a1 + 520, 360);
  v22 = *(_OWORD *)(a1 + 880);
  v23 = *(const char **)(a1 + 896);
  v20 = 1;
  sub_140AFFC30((__int64)&v33, v27, (__int64)&v20, &v22, v28, v29);
  if ( (_QWORD)v43 )
    sub_140001660(*((_QWORD *)&v43 + 1), v43, 1);
  v50 = 0;
  sub_1400437E0(v32);
LABEL_25:
  if ( (_QWORD)v45 != -1 )
  {
    v15 = *((_QWORD *)&v45 + 1);
    v47 = v46;
    v48 = 0;
    v42 = *((_QWORD *)&v45 + 1);
    while ( v47 != (const char *)v48 )
    {
      ++v48;
      v16 = v15 + 96;
      sub_140401FB0();
      v15 = v16;
    }
    if ( (_QWORD)v45 )
      sub_140001660(*((_QWORD *)&v45 + 1), 96 * v45, 8);
  }
  return sub_140043900(v19);
}
