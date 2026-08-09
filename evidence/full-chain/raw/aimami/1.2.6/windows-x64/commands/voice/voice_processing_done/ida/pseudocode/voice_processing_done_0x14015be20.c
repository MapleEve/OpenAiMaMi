// Pseudocode for voice_processing_done (EA: 0x14015be20, size: 0x46c)
// Module: commands/voice
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_14015BE20(__int64 a1)
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
  char v16[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v17; // [rsp+3C0h] [rbp+340h]
  int v18; // [rsp+3C8h] [rbp+348h]
  int v19; // [rsp+3CCh] [rbp+34Ch]
  _BYTE v20[152]; // [rsp+3D0h] [rbp+350h] BYREF
  const char *v21; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v22; // [rsp+470h] [rbp+3F0h]
  const char *v23; // [rsp+478h] [rbp+3F8h]
  __int64 v24; // [rsp+480h] [rbp+400h]
  _BYTE *v25; // [rsp+488h] [rbp+408h]
  __int128 *v26; // [rsp+490h] [rbp+410h]
  __int64 v27; // [rsp+498h] [rbp+418h]
  int v28; // [rsp+5F8h] [rbp+578h] BYREF
  __int128 v29; // [rsp+600h] [rbp+580h]
  __int128 v30; // [rsp+610h] [rbp+590h]
  __int128 v31; // [rsp+690h] [rbp+610h] BYREF
  __int64 v32; // [rsp+6A0h] [rbp+620h]
  __int64 v33; // [rsp+6A8h] [rbp+628h]
  __int128 v34; // [rsp+6B0h] [rbp+630h] BYREF
  __int128 v35; // [rsp+6C0h] [rbp+640h]
  __int64 v36; // [rsp+6D8h] [rbp+658h] BYREF
  __int128 v37; // [rsp+6E0h] [rbp+660h]
  __int128 v38; // [rsp+6F0h] [rbp+670h]
  __int128 v39; // [rsp+700h] [rbp+680h] BYREF
  __int64 v40; // [rsp+710h] [rbp+690h]
  __int64 v41; // [rsp+718h] [rbp+698h]
  __int64 v42; // [rsp+720h] [rbp+6A0h]
  char v43; // [rsp+72Eh] [rbp+6AEh]
  char v44; // [rsp+72Fh] [rbp+6AFh]
  __int64 v45; // [rsp+730h] [rbp+6B0h]

  v45 = -2;
  sub_14172B820(v15, a1, 520);
  sub_14172B820(v16, a1 + 520, 400);
  v40 = *(_QWORD *)(a1 + 936);
  v39 = *(_OWORD *)(a1 + 920);
  v27 = 0;
  v21 = aVoiceProcessin;
  v22 = 21;
  v23 = aApp;
  v24 = 3;
  v25 = v15;
  v26 = &v39;
  v44 = 1;
  sub_1401A9630((__int64)&v28, (__int64)&v21);
  if ( v28 == -1 )
  {
    v38 = v30;
    v37 = v29;
    sub_14172B820(&v21, a1 + 520, 360);
    v34 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v35 = *(_QWORD *)(a1 + 896);
    v36 = 1;
    v44 = 0;
    sub_140AFFC30((__int64)&v21, v17, (__int64)&v36, &v34, v18, v19);
    goto LABEL_16;
  }
  sub_14172B820(v20, &v28, 152);
  v27 = 0;
  v21 = aVoiceProcessin;
  v22 = 21;
  v23 = aSessiongenerat;
  v24 = 17;
  v25 = v15;
  v26 = &v39;
  sub_140954A30(&v34, &v21);
  LOBYTE(v42) = v34;
  if ( (_BYTE)v34 == 0xFF )
  {
    sub_140C44EE0(&v36, v20, *((_QWORD *)&v34 + 1), v35);
    sub_140203A20(v20);
    sub_14172B820(&v21, a1 + 520, 400);
    v6 = v36;
    if ( v36 == -1 )
    {
      LOBYTE(v28) = -1;
LABEL_15:
      v43 = 0;
      sub_140A9A020(&v21, &v28);
      goto LABEL_16;
    }
    v7 = v37;
    if ( v37 < 0 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    if ( *((_QWORD *)&v37 + 1) )
    {
      nullsub_1(v3, v2, v4, v5, v14);
      v8 = 1;
      v9 = sub_140001650(*((_QWORD *)&v7 + 1), 1);
      if ( !v9 )
      {
LABEL_8:
        v41 = v7;
        v42 = v6;
        sub_14176E54B(v8, *((_QWORD *)&v7 + 1));
      }
      v10 = v9;
      sub_14172B820(v9, v7, *((_QWORD *)&v7 + 1));
      if ( !v6 )
        goto LABEL_14;
    }
    else
    {
      v10 = 1;
      if ( !v36 )
        goto LABEL_14;
    }
    sub_140001660(v7, v6, 1);
LABEL_14:
    LOBYTE(v28) = 3;
    *(_QWORD *)&v29 = *((_QWORD *)&v7 + 1);
    *((_QWORD *)&v29 + 1) = v10;
    *(_QWORD *)&v30 = *((_QWORD *)&v7 + 1);
    goto LABEL_15;
  }
  v38 = v35;
  v37 = v34;
  sub_14172B820(&v21, a1 + 520, 360);
  v31 = *(_OWORD *)(a1 + 880);
  v32 = *(_QWORD *)(a1 + 896);
  v36 = 1;
  sub_140AFFC30((__int64)&v21, v17, (__int64)&v36, &v31, v18, v19);
  v44 = 0;
  sub_1400437E0(v20);
LABEL_16:
  if ( (_QWORD)v39 != -1 )
  {
    v11 = *((_QWORD *)&v39 + 1);
    v41 = v40;
    v42 = 0;
    v33 = *((_QWORD *)&v39 + 1);
    while ( v41 != v42 )
    {
      ++v42;
      v12 = v11 + 96;
      sub_140401FB0();
      v11 = v12;
    }
    if ( (_QWORD)v39 )
      sub_140001660(*((_QWORD *)&v39 + 1), 96 * v39, 8);
  }
  return sub_140043900(v15);
}
