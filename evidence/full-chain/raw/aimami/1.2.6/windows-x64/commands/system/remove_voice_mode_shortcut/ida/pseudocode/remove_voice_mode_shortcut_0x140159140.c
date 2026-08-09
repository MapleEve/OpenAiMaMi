// Pseudocode for remove_voice_mode_shortcut (EA: 0x140159140, size: 0x49c)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_140159140(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // kr00_16
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v17; // [rsp+20h] [rbp-60h]
  _BYTE v18[520]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+238h] [rbp+1B8h] BYREF
  __m256i v20; // [rsp+240h] [rbp+1C0h]
  int v21; // [rsp+550h] [rbp+4D0h] BYREF
  __m256i v22; // [rsp+558h] [rbp+4D8h]
  _BYTE v23[384]; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v24; // [rsp+860h] [rbp+7E0h]
  int v25; // [rsp+868h] [rbp+7E8h]
  int v26; // [rsp+86Ch] [rbp+7ECh]
  __int64 v27; // [rsp+870h] [rbp+7F0h] BYREF
  __int64 v28; // [rsp+878h] [rbp+7F8h]
  const char *v29; // [rsp+880h] [rbp+800h]
  __int64 v30; // [rsp+888h] [rbp+808h]
  _BYTE *v31; // [rsp+890h] [rbp+810h]
  __int128 *v32; // [rsp+898h] [rbp+818h]
  __int64 v33; // [rsp+8A0h] [rbp+820h]
  _BYTE v34[152]; // [rsp+B88h] [rbp+B08h] BYREF
  __int128 v35; // [rsp+C20h] [rbp+BA0h] BYREF
  __int64 v36; // [rsp+C30h] [rbp+BB0h]
  __int128 v37; // [rsp+C40h] [rbp+BC0h] BYREF
  __int64 v38; // [rsp+C50h] [rbp+BD0h]
  __int64 v39; // [rsp+C58h] [rbp+BD8h]
  __m256i v40; // [rsp+C60h] [rbp+BE0h] BYREF
  __int128 v41; // [rsp+C80h] [rbp+C00h] BYREF
  __int64 v42; // [rsp+C90h] [rbp+C10h]
  __int64 v43; // [rsp+C98h] [rbp+C18h]
  __int64 v44; // [rsp+CA0h] [rbp+C20h]
  char v45; // [rsp+CAEh] [rbp+C2Eh]
  char v46; // [rsp+CAFh] [rbp+C2Fh]
  __int64 v47; // [rsp+CB0h] [rbp+C30h]

  v47 = -2;
  sub_14172B820(v18, a1, 520);
  sub_14172B820(v23, a1 + 520, 400);
  v42 = *(_QWORD *)(a1 + 936);
  v41 = *(_OWORD *)(a1 + 920);
  v33 = 0;
  v27 = (__int64)aRemoveVoiceMod;
  v28 = 26;
  v29 = aApp;
  v30 = 3;
  v31 = v18;
  v32 = &v41;
  v46 = 1;
  sub_1401A9630((__int64)&v21, (__int64)&v27);
  if ( v21 == -1 )
  {
    v20 = v22;
    sub_14172B820(&v27, a1 + 520, 360);
    *(_OWORD *)v40.m256i_i8 = *(_OWORD *)(a1 + 880);
    v40.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    v19 = 1;
    v46 = 0;
    sub_140AFFC30((__int64)&v27, v24, (__int64)&v19, (__int128 *)v40.m256i_i8, v25, v26);
    goto LABEL_16;
  }
  sub_14172B820(v34, &v21, 152);
  v33 = 0;
  v27 = (__int64)aRemoveVoiceMod;
  v28 = 26;
  v29 = aModeid;
  v30 = 6;
  v31 = v18;
  v32 = &v41;
  sub_140955980(&v40, &v27);
  LOBYTE(v44) = v40.m256i_i8[0];
  if ( v40.m256i_i8[0] == -1 )
  {
    v38 = v40.m256i_i64[3];
    v37 = *(_OWORD *)&v40.m256i_u64[1];
    sub_1403D6800(&v19, v34, &v37);
    sub_14172B820(&v21, a1 + 520, 400);
    if ( (_DWORD)v19 != 2 )
    {
      sub_14172B820(&v27, &v19, 792);
LABEL_15:
      v45 = 0;
      sub_140A946C0(&v21, &v27);
      goto LABEL_16;
    }
    v9 = *(_OWORD *)v20.m256i_i8;
    v10 = v20.m256i_i64[2];
    if ( v20.m256i_i64[2] < 0 )
    {
      v11 = 0;
      goto LABEL_8;
    }
    if ( v20.m256i_i64[2] )
    {
      nullsub_1(v6, v5, v7, v8, v17);
      v11 = 1;
      v12 = sub_140001650(v10, 1);
      if ( !v12 )
      {
LABEL_8:
        v43 = *((_QWORD *)&v9 + 1);
        v44 = v9;
        sub_14176E54B(v11, v10);
      }
      v13 = v12;
      sub_14172B820(v12, *((_QWORD *)&v9 + 1), v10);
      if ( !(_QWORD)v9 )
        goto LABEL_14;
    }
    else
    {
      v13 = 1;
      if ( !v20.m256i_i64[0] )
        goto LABEL_14;
    }
    sub_140001660(*((_QWORD *)&v9 + 1), v9, 1);
LABEL_14:
    LOBYTE(v28) = 3;
    v29 = (const char *)v10;
    v30 = v13;
    v31 = (_BYTE *)v10;
    v27 = 2;
    goto LABEL_15;
  }
  v20 = v40;
  sub_14172B820(&v27, a1 + 520, 360);
  v35 = *(_OWORD *)(a1 + 880);
  v36 = *(_QWORD *)(a1 + 896);
  v19 = 1;
  sub_140AFFC30((__int64)&v27, v24, (__int64)&v19, &v35, v25, v26);
  v46 = 0;
  sub_1400437E0(v34);
LABEL_16:
  if ( (_QWORD)v41 != -1 )
  {
    v14 = *((_QWORD *)&v41 + 1);
    v43 = v42;
    v44 = 0;
    v39 = *((_QWORD *)&v41 + 1);
    while ( v43 != v44 )
    {
      ++v44;
      v15 = v14 + 96;
      sub_140401FB0(v14, v2, v3, v4, v17);
      v14 = v15;
    }
    if ( (_QWORD)v41 )
      sub_140001660(*((_QWORD *)&v41 + 1), 96 * v41, 8);
  }
  return sub_140043900(v18);
}
