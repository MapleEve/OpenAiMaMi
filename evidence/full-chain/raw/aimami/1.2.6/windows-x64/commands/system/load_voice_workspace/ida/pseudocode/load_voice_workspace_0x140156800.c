// Pseudocode for load_voice_workspace (EA: 0x140156800, size: 0x388)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_140156800(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // r15
  __int128 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-60h]
  _BYTE v16[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+238h] [rbp+1B8h]
  _BYTE v18[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v19; // [rsp+3C0h] [rbp+340h]
  int v20; // [rsp+3C8h] [rbp+348h]
  int v21; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v22[2]; // [rsp+3D0h] [rbp+350h] BYREF
  _QWORD v23[48]; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v24; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v25; // [rsp+570h] [rbp+4F0h]
  __int64 v26; // [rsp+578h] [rbp+4F8h]
  __int64 v27; // [rsp+638h] [rbp+5B8h] BYREF
  __int128 v28; // [rsp+640h] [rbp+5C0h]
  __int128 v29; // [rsp+650h] [rbp+5D0h]
  _OWORD v30[2]; // [rsp+708h] [rbp+688h] BYREF
  __int64 v31; // [rsp+728h] [rbp+6A8h]
  __int128 v32; // [rsp+730h] [rbp+6B0h] BYREF
  __int64 v33; // [rsp+740h] [rbp+6C0h]
  __int64 v34; // [rsp+748h] [rbp+6C8h]
  __int64 v35; // [rsp+750h] [rbp+6D0h]
  char v36; // [rsp+75Eh] [rbp+6DEh]
  char v37; // [rsp+75Fh] [rbp+6DFh]
  __int64 v38; // [rsp+760h] [rbp+6E0h]

  v38 = -2;
  sub_14172B820(v16, a1, 520);
  sub_14172B820(v18, a1 + 520, 400);
  v33 = *(_QWORD *)(a1 + 936);
  v32 = *(_OWORD *)(a1 + 920);
  v23[4] = 0;
  v22[0] = aLoadVoiceWorks;
  v22[1] = 20;
  v23[0] = aRepo;
  v23[1] = 4;
  v23[2] = v16;
  v23[3] = &v32;
  v37 = 1;
  v2 = sub_140029DD0((volatile void *)(v17 + 16));
  if ( v2 )
  {
LABEL_2:
    v37 = 1;
    sub_1409F7960(&v24, v2);
    sub_14172B820(v22, a1 + 520, 400);
    if ( (_QWORD)v24 != -1 )
    {
      sub_14172B820(&v27, &v24, 208);
LABEL_14:
      v36 = 0;
      sub_140A939C0(v22, &v27);
      goto LABEL_15;
    }
    v7 = *((_QWORD *)&v24 + 1);
    v8 = v25;
    *((_QWORD *)&v9 + 1) = v26;
    if ( v26 < 0 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    if ( v26 )
    {
      nullsub_1(v4, v3, v5, v6, v15);
      v10 = 1;
      v11 = sub_140001650(*((_QWORD *)&v9 + 1), 1);
      if ( !v11 )
      {
LABEL_8:
        v34 = v8;
        v35 = v7;
        sub_14176E54B(v10, *((_QWORD *)&v9 + 1));
      }
      *(_QWORD *)&v9 = v11;
      sub_14172B820(v11, v8, *((_QWORD *)&v9 + 1));
      if ( !v7 )
      {
LABEL_13:
        LOBYTE(v28) = 3;
        *((_QWORD *)&v28 + 1) = *((_QWORD *)&v9 + 1);
        v29 = v9;
        v27 = -1;
        goto LABEL_14;
      }
    }
    else
    {
      *(_QWORD *)&v9 = 1;
      if ( !*((_QWORD *)&v24 + 1) )
        goto LABEL_13;
    }
    sub_140001660(v8, v7, 1);
    goto LABEL_13;
  }
  v37 = 1;
  sub_14172C620((__int64)v30, (__int64)v22, (__int64)v23);
  if ( LOBYTE(v30[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v30[0] + 1);
    goto LABEL_2;
  }
  v29 = v30[1];
  v28 = v30[0];
  sub_14172B820(v22, a1 + 520, 360);
  v24 = *(_OWORD *)(a1 + 880);
  v25 = *(_QWORD *)(a1 + 896);
  v27 = 1;
  v37 = 0;
  sub_140AFFC30((__int64)v22, v19, (__int64)&v27, &v24, v20, v21);
LABEL_15:
  if ( (_QWORD)v32 != -1 )
  {
    v12 = *((_QWORD *)&v32 + 1);
    v34 = v33;
    v35 = 0;
    v31 = *((_QWORD *)&v32 + 1);
    while ( v34 != v35 )
    {
      ++v35;
      v13 = v12 + 96;
      sub_140401FB0();
      v12 = v13;
    }
    if ( (_QWORD)v32 )
      sub_140001660(*((_QWORD *)&v32 + 1), 96 * v32, 8);
  }
  return sub_140043900(v16);
}
