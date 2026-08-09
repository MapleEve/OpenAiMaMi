// Pseudocode for parse_aimami_deeplink (EA: 0x140149f60, size: 0x36c)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 parse_aimami_deeplink 处理器（commands::deeplink，argKeys: url）。解析 aimami deeplink URL（体内 url 串佐证）。
// Tauri 命令 parse_aimami_deeplink 处理器（commands::deeplink，argKeys: url）。解析 aimami deeplink URL（体内 url 串佐证）。
__int64 __fastcall parse_aimami_deeplink(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // r15
  __int128 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v17; // [rsp+20h] [rbp-60h]
  _BYTE v18[520]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v19[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v20; // [rsp+3C0h] [rbp+340h]
  int v21; // [rsp+3C8h] [rbp+348h]
  int v22; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v23[50]; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v24; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v25; // [rsp+570h] [rbp+4F0h]
  __int64 v26; // [rsp+578h] [rbp+4F8h]
  __int64 v27; // [rsp+628h] [rbp+5A8h] BYREF
  __m256i v28; // [rsp+630h] [rbp+5B0h]
  __int128 v29; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v30; // [rsp+700h] [rbp+680h]
  __m256i v31; // [rsp+708h] [rbp+688h] BYREF
  __int64 v32; // [rsp+728h] [rbp+6A8h]
  __int128 v33; // [rsp+730h] [rbp+6B0h] BYREF
  __int64 v34; // [rsp+740h] [rbp+6C0h]
  __int64 v35; // [rsp+748h] [rbp+6C8h]
  __int64 v36; // [rsp+750h] [rbp+6D0h]
  char v37; // [rsp+75Eh] [rbp+6DEh]
  char v38; // [rsp+75Fh] [rbp+6DFh]
  __int64 v39; // [rsp+760h] [rbp+6E0h]

  v39 = -2;
  sub_14172B820(v18, a1, 520);
  sub_14172B820(v19, a1 + 520, 400);
  v34 = *(_QWORD *)(a1 + 936);
  v33 = *(_OWORD *)(a1 + 920);
  v23[6] = 0;
  v23[0] = aParseAimamiDee;
  v23[1] = 21;
  v23[2] = aUrl;
  v23[3] = 3;
  v23[4] = v18;
  v23[5] = &v33;
  v38 = 1;
  sub_140955980(&v31, v23);
  if ( v31.m256i_i8[0] == -1 )
  {
    v30 = v31.m256i_i64[3];
    v29 = *(_OWORD *)&v31.m256i_u64[1];
    v38 = 1;
    sub_140B2C970(&v24, &v29);
    sub_14172B820(v23, a1 + 520, 400);
    if ( (_QWORD)v24 != -1 )
    {
      sub_14172B820(&v27, &v24, 200);
LABEL_13:
      v37 = 0;
      sub_140A97490(v23, &v27);
      goto LABEL_14;
    }
    v9 = *((_QWORD *)&v24 + 1);
    v10 = v25;
    *((_QWORD *)&v11 + 1) = v26;
    if ( v26 < 0 )
    {
      v12 = 0;
      goto LABEL_7;
    }
    if ( v26 )
    {
      nullsub_1(v6, v5, v7, v8, v17);
      v12 = 1;
      v13 = sub_140001650(*((_QWORD *)&v11 + 1), 1);
      if ( !v13 )
      {
LABEL_7:
        v35 = v10;
        v36 = v9;
        sub_14176E54B(v12, *((_QWORD *)&v11 + 1));
      }
      *(_QWORD *)&v11 = v13;
      sub_14172B820(v13, v10, *((_QWORD *)&v11 + 1));
      if ( !v9 )
      {
LABEL_12:
        v28.m256i_i8[0] = 3;
        v28.m256i_i64[1] = *((_QWORD *)&v11 + 1);
        *(_OWORD *)&v28.m256i_u64[2] = v11;
        v27 = -1;
        goto LABEL_13;
      }
    }
    else
    {
      *(_QWORD *)&v11 = 1;
      if ( !*((_QWORD *)&v24 + 1) )
        goto LABEL_12;
    }
    sub_140001660(v10, v9, 1);
    goto LABEL_12;
  }
  v28 = v31;
  sub_14172B820(v23, a1 + 520, 360);
  v24 = *(_OWORD *)(a1 + 880);
  v25 = *(_QWORD *)(a1 + 896);
  v27 = 1;
  v38 = 0;
  sub_140AFFC30((__int64)v23, v20, (__int64)&v27, &v24, v21, v22);
LABEL_14:
  if ( (_QWORD)v33 != -1 )
  {
    v14 = *((_QWORD *)&v33 + 1);
    v35 = v34;
    v36 = 0;
    v32 = *((_QWORD *)&v33 + 1);
    while ( v35 != v36 )
    {
      ++v36;
      v15 = v14 + 96;
      sub_140401FB0(v14, v2, v3, v4, v17);
      v14 = v15;
    }
    if ( (_QWORD)v33 )
      sub_140001660(*((_QWORD *)&v33 + 1), 96 * v33, 8);
  }
  return sub_140043900(v18);
}
