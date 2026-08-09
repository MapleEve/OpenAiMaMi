// Pseudocode for set_voice_trigger_listener_suppressed (EA: 0x140161330, size: 0x509)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_140161330(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v17; // [rsp+20h] [rbp-60h]
  _BYTE v18[520]; // [rsp+38h] [rbp-48h] BYREF
  char v19[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v20; // [rsp+3C0h] [rbp+340h]
  int v21; // [rsp+3C8h] [rbp+348h]
  int v22; // [rsp+3CCh] [rbp+34Ch]
  _BYTE v23[152]; // [rsp+3D0h] [rbp+350h] BYREF
  const char *v24; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v25; // [rsp+470h] [rbp+3F0h]
  const char *v26; // [rsp+478h] [rbp+3F8h]
  __int64 v27; // [rsp+480h] [rbp+400h]
  __int128 v28; // [rsp+488h] [rbp+408h]
  __int128 v29; // [rsp+498h] [rbp+418h]
  __int128 v30; // [rsp+4A8h] [rbp+428h]
  __int64 v31; // [rsp+5F8h] [rbp+578h] BYREF
  __int128 v32; // [rsp+600h] [rbp+580h]
  _OWORD v33[8]; // [rsp+610h] [rbp+590h]
  __int128 v34; // [rsp+690h] [rbp+610h] BYREF
  __int64 v35; // [rsp+6A0h] [rbp+620h]
  __int64 v36; // [rsp+6A8h] [rbp+628h]
  __int128 v37; // [rsp+6B0h] [rbp+630h] BYREF
  __int128 v38; // [rsp+6C0h] [rbp+640h]
  _BYTE v39[48]; // [rsp+6D0h] [rbp+650h] BYREF
  __int128 v40; // [rsp+700h] [rbp+680h] BYREF
  __int64 v41; // [rsp+710h] [rbp+690h]
  __int64 v42; // [rsp+718h] [rbp+698h]
  __int64 v43; // [rsp+720h] [rbp+6A0h]
  char v44; // [rsp+72Eh] [rbp+6AEh]
  char v45; // [rsp+72Fh] [rbp+6AFh]
  __int64 v46; // [rsp+730h] [rbp+6B0h]

  v46 = -2;
  sub_14172B820(v18, a1, 520);
  v2 = a1 + 520;
  sub_14172B820(v19, a1 + 520, 400);
  v41 = *(_QWORD *)(a1 + 936);
  v40 = *(_OWORD *)(a1 + 920);
  *(_QWORD *)&v29 = 0;
  v24 = aSetVoiceTrigge_1;
  v25 = 37;
  v26 = aApp;
  v27 = 3;
  *(_QWORD *)&v28 = v18;
  *((_QWORD *)&v28 + 1) = &v40;
  v45 = 1;
  sub_1401A9630((__int64)&v31, (__int64)&v24);
  if ( (_DWORD)v31 == -1 )
  {
    *(_OWORD *)&v39[24] = v33[0];
    *(_OWORD *)&v39[8] = v32;
    sub_14172B820(&v24, a1 + 520, 360);
    v37 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v38 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v39 = 1;
    v45 = 0;
    sub_140AFFC30((__int64)&v24, v20, (__int64)v39, &v37, v21, v22);
    goto LABEL_21;
  }
  sub_14172B820(v23, &v31, 152);
  *(_QWORD *)&v29 = 0;
  v24 = aSetVoiceTrigge_1;
  v25 = 37;
  v26 = aSuppressed;
  v27 = 10;
  *(_QWORD *)&v28 = v18;
  *((_QWORD *)&v28 + 1) = &v40;
  sub_1409562A0(&v37, &v24);
  LOBYTE(v43) = v37;
  if ( (_BYTE)v37 == 0xFF )
  {
    sub_140C4A220(&v24, v23, BYTE1(v37));
    v3 = (__int64)v24;
    if ( v24 == (const char *)-1LL )
    {
      sub_1404D1D00(&v24);
      v6 = (__int64)v24;
      v3 = v25;
      v4 = (__int64)v26;
      v5 = v27;
      *(_OWORD *)v39 = v28;
      *(_OWORD *)&v39[16] = v29;
      *(_OWORD *)&v39[32] = v30;
    }
    else
    {
      v4 = v25;
      v5 = (__int64)v26;
      v6 = -1;
    }
    sub_140203A20(v23);
    sub_14172B820(&v24, v2, 400);
    if ( v6 != -1 )
    {
      v31 = v6;
      *(_QWORD *)&v32 = v3;
      *((_QWORD *)&v32 + 1) = v4;
      *(_QWORD *)&v33[0] = v5;
      *(_OWORD *)((char *)v33 + 8) = *(_OWORD *)v39;
      *(_OWORD *)((char *)&v33[1] + 8) = *(_OWORD *)&v39[16];
      *(_OWORD *)((char *)&v33[2] + 8) = *(_OWORD *)&v39[32];
LABEL_20:
      v44 = 0;
      sub_140A97B10(&v24, &v31);
      goto LABEL_21;
    }
    if ( v5 < 0 )
    {
      v11 = 0;
      goto LABEL_12;
    }
    if ( v5 )
    {
      nullsub_1(v8, v7, v9, v10, v17);
      v11 = 1;
      v12 = sub_140001650(v5, 1);
      if ( !v12 )
      {
LABEL_12:
        v42 = v4;
        v43 = v3;
        sub_14176E54B(v11, v5);
      }
      v13 = v12;
      sub_14172B820(v12, v4, v5);
    }
    else
    {
      v13 = 1;
    }
    if ( v3 )
      sub_140001660(v4, v3, 1);
    LOBYTE(v32) = 3;
    *((_QWORD *)&v32 + 1) = v5;
    *(_QWORD *)&v33[0] = v13;
    *((_QWORD *)&v33[0] + 1) = v5;
    v31 = -1;
    goto LABEL_20;
  }
  *(_OWORD *)&v39[24] = v38;
  *(_OWORD *)&v39[8] = v37;
  sub_14172B820(&v24, a1 + 520, 360);
  v34 = *(_OWORD *)(a1 + 880);
  v35 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v39 = 1;
  sub_140AFFC30((__int64)&v24, v20, (__int64)v39, &v34, v21, v22);
  v45 = 0;
  sub_1400437E0(v23);
LABEL_21:
  if ( (_QWORD)v40 != -1 )
  {
    v14 = *((_QWORD *)&v40 + 1);
    v42 = v41;
    v43 = 0;
    v36 = *((_QWORD *)&v40 + 1);
    while ( v42 != v43 )
    {
      ++v43;
      v15 = v14 + 96;
      sub_140401FB0();
      v14 = v15;
    }
    if ( (_QWORD)v40 )
      sub_140001660(*((_QWORD *)&v40 + 1), 96 * v40, 8);
  }
  return sub_140043900(v18);
}
