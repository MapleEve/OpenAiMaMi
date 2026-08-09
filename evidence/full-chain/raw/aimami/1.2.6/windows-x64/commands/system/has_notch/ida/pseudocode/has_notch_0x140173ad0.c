// Pseudocode for has_notch (EA: 0x140173ad0, size: 0x35c)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 has_notch 处理器（commands::hotspot）。检测屏幕刘海（mac 侧对应 platform::screen::has_notch_screen）。
// Tauri 命令 has_notch 处理器（commands::hotspot）。检测屏幕刘海（mac 侧对应 platform::screen::has_notch_screen）。
__int64 __fastcall has_notch(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  __int128 v7; // kr00_16
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v17; // [rsp+20h] [rbp-60h]
  _BYTE v18[520]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v19[152]; // [rsp+240h] [rbp+1C0h] BYREF
  char v20[384]; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v21; // [rsp+458h] [rbp+3D8h]
  int v22; // [rsp+460h] [rbp+3E0h]
  int v23; // [rsp+464h] [rbp+3E4h]
  _QWORD v24[50]; // [rsp+468h] [rbp+3E8h] BYREF
  int v25; // [rsp+5F8h] [rbp+578h] BYREF
  __int128 v26; // [rsp+600h] [rbp+580h]
  __int128 v27; // [rsp+610h] [rbp+590h]
  __int128 v28; // [rsp+690h] [rbp+610h] BYREF
  __int64 v29; // [rsp+6A0h] [rbp+620h]
  __int64 v30; // [rsp+6B0h] [rbp+630h] BYREF
  __int128 v31; // [rsp+6B8h] [rbp+638h]
  __int128 v32; // [rsp+6C8h] [rbp+648h]
  __int64 v33; // [rsp+6D8h] [rbp+658h]
  __int128 v34; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v35; // [rsp+6F0h] [rbp+670h]
  __int64 v36; // [rsp+6F8h] [rbp+678h]
  __int64 v37; // [rsp+700h] [rbp+680h]
  char v38; // [rsp+70Eh] [rbp+68Eh]
  char v39; // [rsp+70Fh] [rbp+68Fh]
  __int64 v40; // [rsp+710h] [rbp+690h]

  v40 = -2;
  sub_14172B820(v18, a1, 520);
  sub_14172B820(v20, a1 + 520, 400);
  v35 = *(_QWORD *)(a1 + 936);
  v34 = *(_OWORD *)(a1 + 920);
  v24[6] = 0;
  v24[0] = aHasNotch;
  v24[1] = 9;
  v24[2] = aApp;
  v24[3] = 3;
  v24[4] = v18;
  v24[5] = &v34;
  v39 = 1;
  sub_1401A9630((__int64)&v25, (__int64)v24);
  if ( v25 != -1 )
  {
    sub_14172B820(v19, &v25, 152);
    v39 = 1;
    sub_14094FFA0(&v30, v19);
    sub_14172B820(v24, a1 + 520, 400);
    v6 = v30;
    if ( v30 == -1 )
    {
      LOWORD(v25) = __PAIR16__(v31, -1);
LABEL_13:
      v38 = 0;
      sub_140A99C40(v24, &v25);
      goto LABEL_14;
    }
    v7 = v31;
    if ( v31 < 0 )
    {
      v8 = 0;
      goto LABEL_5;
    }
    if ( *((_QWORD *)&v31 + 1) )
    {
      nullsub_1(v3, v2, v4, v5, v17);
      v8 = 1;
      v12 = sub_140001650(*((_QWORD *)&v7 + 1), 1);
      if ( !v12 )
      {
LABEL_5:
        v36 = v7;
        v37 = v6;
        sub_14176E54B(v8, *((_QWORD *)&v7 + 1));
      }
      v13 = v12;
      sub_14172B820(v12, v7, *((_QWORD *)&v7 + 1));
      if ( !v6 )
        goto LABEL_12;
    }
    else
    {
      v13 = 1;
      if ( !v30 )
        goto LABEL_12;
    }
    sub_140001660(v7, v6, 1);
LABEL_12:
    LOBYTE(v25) = 3;
    *(_QWORD *)&v26 = *((_QWORD *)&v7 + 1);
    *((_QWORD *)&v26 + 1) = v13;
    *(_QWORD *)&v27 = *((_QWORD *)&v7 + 1);
    goto LABEL_13;
  }
  v32 = v27;
  v31 = v26;
  sub_14172B820(v24, a1 + 520, 360);
  v28 = *(_OWORD *)(a1 + 880);
  v29 = *(_QWORD *)(a1 + 896);
  v30 = 1;
  v39 = 0;
  sub_140AFFC30((__int64)v24, v21, (__int64)&v30, &v28, v22, v23);
LABEL_14:
  if ( (_QWORD)v34 != -1 )
  {
    v14 = *((_QWORD *)&v34 + 1);
    v36 = v35;
    v37 = 0;
    v33 = *((_QWORD *)&v34 + 1);
    while ( v36 != v37 )
    {
      ++v37;
      v15 = v14 + 96;
      sub_140401FB0(v14, v9, v10, v11, v17);
      v14 = v15;
    }
    if ( (_QWORD)v34 )
      sub_140001660(*((_QWORD *)&v34 + 1), 96 * v34, 8);
  }
  return sub_140043900(v18);
}
