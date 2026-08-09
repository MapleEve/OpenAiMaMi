// Pseudocode for request_voice_permissions (EA: 0x140162800, size: 0x37c)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_140162800(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // kr00_16
  const char *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // [rsp+20h] [rbp-60h]
  _BYTE v15[520]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v16[152]; // [rsp+238h] [rbp+1B8h] BYREF
  char v17[384]; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v18; // [rsp+450h] [rbp+3D0h]
  int v19; // [rsp+458h] [rbp+3D8h]
  int v20; // [rsp+45Ch] [rbp+3DCh]
  __int64 v21; // [rsp+460h] [rbp+3E0h] BYREF
  __int128 v22; // [rsp+468h] [rbp+3E8h]
  __int128 v23; // [rsp+478h] [rbp+3F8h]
  int v24; // [rsp+778h] [rbp+6F8h] BYREF
  __int128 v25; // [rsp+780h] [rbp+700h]
  __int128 v26; // [rsp+790h] [rbp+710h]
  __int64 v27; // [rsp+908h] [rbp+888h] BYREF
  __int64 v28; // [rsp+910h] [rbp+890h]
  const char *v29; // [rsp+918h] [rbp+898h]
  __int64 v30; // [rsp+920h] [rbp+8A0h]
  const char *v31; // [rsp+928h] [rbp+8A8h]
  __int128 *v32; // [rsp+930h] [rbp+8B0h]
  __int64 v33; // [rsp+938h] [rbp+8B8h]
  __int128 v34; // [rsp+C20h] [rbp+BA0h] BYREF
  __int64 v35; // [rsp+C30h] [rbp+BB0h]
  __int64 v36; // [rsp+C38h] [rbp+BB8h]
  __int128 v37; // [rsp+C40h] [rbp+BC0h] BYREF
  __int64 v38; // [rsp+C50h] [rbp+BD0h]
  __int64 v39; // [rsp+C58h] [rbp+BD8h]
  __int64 v40; // [rsp+C60h] [rbp+BE0h]
  char v41; // [rsp+C6Eh] [rbp+BEEh]
  char v42; // [rsp+C6Fh] [rbp+BEFh]
  __int64 v43; // [rsp+C70h] [rbp+BF0h]

  v43 = -2;
  sub_14172B820(v15, a1, 520);
  sub_14172B820(v17, a1 + 520, 400);
  v38 = *(_QWORD *)(a1 + 936);
  v37 = *(_OWORD *)(a1 + 920);
  v33 = 0;
  v27 = (__int64)aRequestVoicePe;
  v28 = 25;
  v29 = aApp;
  v30 = 3;
  v31 = v15;
  v32 = &v37;
  v42 = 1;
  sub_1401A9630((__int64)&v24, (__int64)&v27);
  if ( v24 != -1 )
  {
    sub_14172B820(v16, &v24, 152);
    v42 = 1;
    sub_1403D64D0(&v21, v16);
    sub_14172B820(&v24, a1 + 520, 400);
    if ( (_DWORD)v21 != 2 )
    {
      sub_14172B820(&v27, &v21, 792);
LABEL_13:
      v41 = 0;
      sub_140A946C0(&v24, &v27);
      goto LABEL_14;
    }
    v6 = v22;
    v7 = (const char *)v23;
    if ( (__int64)v23 < 0 )
    {
      v8 = 0;
      goto LABEL_5;
    }
    if ( (_QWORD)v23 )
    {
      nullsub_1(v3, v2, v4, v5, v14);
      v8 = 1;
      v9 = sub_140001650(v7, 1);
      if ( !v9 )
      {
LABEL_5:
        v39 = *((_QWORD *)&v6 + 1);
        v40 = v6;
        sub_14176E54B(v8, v7);
      }
      v10 = v9;
      sub_14172B820(v9, *((_QWORD *)&v6 + 1), v7);
      if ( !(_QWORD)v6 )
        goto LABEL_12;
    }
    else
    {
      v10 = 1;
      if ( !(_QWORD)v22 )
        goto LABEL_12;
    }
    sub_140001660(*((_QWORD *)&v6 + 1), v6, 1);
LABEL_12:
    LOBYTE(v28) = 3;
    v29 = v7;
    v30 = v10;
    v31 = v7;
    v27 = 2;
    goto LABEL_13;
  }
  v23 = v26;
  v22 = v25;
  sub_14172B820(&v27, a1 + 520, 360);
  v34 = *(_OWORD *)(a1 + 880);
  v35 = *(_QWORD *)(a1 + 896);
  v21 = 1;
  v42 = 0;
  sub_140AFFC30((__int64)&v27, v18, (__int64)&v21, &v34, v19, v20);
LABEL_14:
  if ( (_QWORD)v37 != -1 )
  {
    v11 = *((_QWORD *)&v37 + 1);
    v39 = v38;
    v40 = 0;
    v36 = *((_QWORD *)&v37 + 1);
    while ( v39 != v40 )
    {
      ++v40;
      v12 = v11 + 96;
      sub_140401FB0();
      v11 = v12;
    }
    if ( (_QWORD)v37 )
      sub_140001660(*((_QWORD *)&v37 + 1), 96 * v37, 8);
  }
  return sub_140043900(v15);
}
