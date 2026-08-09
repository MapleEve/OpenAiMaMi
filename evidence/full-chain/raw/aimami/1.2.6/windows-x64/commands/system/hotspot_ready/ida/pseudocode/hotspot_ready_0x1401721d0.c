// Pseudocode for hotspot_ready (EA: 0x1401721d0, size: 0x35c)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 hotspot_ready 处理器（commands::hotspot）。查询/上报热点就绪状态。
// Tauri 命令 hotspot_ready 处理器（commands::hotspot）。查询/上报热点就绪状态。
__int64 __fastcall sub_1401721D0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  __int128 v7; // kr00_16
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // [rsp+20h] [rbp-60h]
  _BYTE v15[520]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v16[152]; // [rsp+240h] [rbp+1C0h] BYREF
  char v17[384]; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v18; // [rsp+458h] [rbp+3D8h]
  int v19; // [rsp+460h] [rbp+3E0h]
  int v20; // [rsp+464h] [rbp+3E4h]
  _QWORD v21[50]; // [rsp+468h] [rbp+3E8h] BYREF
  int v22; // [rsp+5F8h] [rbp+578h] BYREF
  __int128 v23; // [rsp+600h] [rbp+580h]
  __int128 v24; // [rsp+610h] [rbp+590h]
  __int128 v25; // [rsp+690h] [rbp+610h] BYREF
  __int64 v26; // [rsp+6A0h] [rbp+620h]
  __int64 v27; // [rsp+6B0h] [rbp+630h] BYREF
  __int128 v28; // [rsp+6B8h] [rbp+638h]
  __int128 v29; // [rsp+6C8h] [rbp+648h]
  __int64 v30; // [rsp+6D8h] [rbp+658h]
  __int128 v31; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v32; // [rsp+6F0h] [rbp+670h]
  __int64 v33; // [rsp+6F8h] [rbp+678h]
  __int64 v34; // [rsp+700h] [rbp+680h]
  char v35; // [rsp+70Eh] [rbp+68Eh]
  char v36; // [rsp+70Fh] [rbp+68Fh]
  __int64 v37; // [rsp+710h] [rbp+690h]

  v37 = -2;
  sub_14172B820(v15, a1, 520);
  sub_14172B820(v17, a1 + 520, 400);
  v32 = *(_QWORD *)(a1 + 936);
  v31 = *(_OWORD *)(a1 + 920);
  v21[6] = 0;
  v21[0] = aHotspotReady;
  v21[1] = 13;
  v21[2] = aApp;
  v21[3] = 3;
  v21[4] = v15;
  v21[5] = &v31;
  v36 = 1;
  sub_1401A9630((__int64)&v22, (__int64)v21);
  if ( v22 != -1 )
  {
    sub_14172B820(v16, &v22, 152);
    v36 = 1;
    sub_14094E790(&v27, v16);
    sub_14172B820(v21, a1 + 520, 400);
    v6 = v27;
    if ( v27 == -1 )
    {
      LOBYTE(v22) = -1;
LABEL_13:
      v35 = 0;
      sub_140A9A020(v21, &v22);
      goto LABEL_14;
    }
    v7 = v28;
    if ( v28 < 0 )
    {
      v8 = 0;
      goto LABEL_5;
    }
    if ( *((_QWORD *)&v28 + 1) )
    {
      nullsub_1(v3, v2, v4, v5, v14);
      v8 = 1;
      v9 = sub_140001650(*((_QWORD *)&v7 + 1), 1);
      if ( !v9 )
      {
LABEL_5:
        v33 = v7;
        v34 = v6;
        sub_14176E54B(v8, *((_QWORD *)&v7 + 1));
      }
      v10 = v9;
      sub_14172B820(v9, v7, *((_QWORD *)&v7 + 1));
      if ( !v6 )
        goto LABEL_12;
    }
    else
    {
      v10 = 1;
      if ( !v27 )
        goto LABEL_12;
    }
    sub_140001660(v7, v6, 1);
LABEL_12:
    LOBYTE(v22) = 3;
    *(_QWORD *)&v23 = *((_QWORD *)&v7 + 1);
    *((_QWORD *)&v23 + 1) = v10;
    *(_QWORD *)&v24 = *((_QWORD *)&v7 + 1);
    goto LABEL_13;
  }
  v29 = v24;
  v28 = v23;
  sub_14172B820(v21, a1 + 520, 360);
  v25 = *(_OWORD *)(a1 + 880);
  v26 = *(_QWORD *)(a1 + 896);
  v27 = 1;
  v36 = 0;
  sub_140AFFC30((__int64)v21, v18, (__int64)&v27, &v25, v19, v20);
LABEL_14:
  if ( (_QWORD)v31 != -1 )
  {
    v11 = *((_QWORD *)&v31 + 1);
    v33 = v32;
    v34 = 0;
    v30 = *((_QWORD *)&v31 + 1);
    while ( v33 != v34 )
    {
      ++v34;
      v12 = v11 + 96;
      sub_140401FB0();
      v11 = v12;
    }
    if ( (_QWORD)v31 )
      sub_140001660(*((_QWORD *)&v31 + 1), 96 * v31, 8);
  }
  return sub_140043900(v15);
}
