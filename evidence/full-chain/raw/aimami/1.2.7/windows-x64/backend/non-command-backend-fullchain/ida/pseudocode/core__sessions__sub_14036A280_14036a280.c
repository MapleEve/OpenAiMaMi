// win 1.2.7 | module src/core/sessions.rs | ea 0x14036a280 | name sub_14036A280
// win 1.2.7 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14036A280(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // xmm6_8
  int v9; // r13d
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp-8h]
  __int64 v21; // [rsp+80h] [rbp+0h]
  __int64 v22; // [rsp+88h] [rbp+8h]
  __int64 v23; // [rsp+90h] [rbp+10h] BYREF
  __int128 v24; // [rsp+98h] [rbp+18h]
  __int64 v25; // [rsp+A8h] [rbp+28h]

  v25 = -2;
  if ( a2[2] == -1 )
  {
    *(_QWORD *)&v12 = -1;
    v6 = -1;
    if ( a2[5] != -1 )
    {
LABEL_3:
      sub_1416AC440(&v23, a2 + 5);
      v20 = v23;
      v14 = *((_QWORD *)&v24 + 1);
      v15 = v24;
      v7 = *a2;
      v8 = a2[1];
      if ( a2[8] != -1 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else
  {
    sub_1416AC440(&v12, a2 + 2);
    v6 = -1;
    if ( a2[5] != -1 )
      goto LABEL_3;
  }
  v20 = -1;
  v7 = *a2;
  v8 = a2[1];
  if ( a2[8] != -1 )
  {
LABEL_4:
    sub_1416AC440(&v23, a2 + 8);
    v6 = v23;
    v3 = *((_QWORD *)&v24 + 1);
    v16 = v24;
    v19 = v23;
    if ( a2[11] != -1 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  v19 = -1;
  if ( a2[11] != -1 )
  {
LABEL_5:
    sub_1416AC440(&v23, a2 + 11);
    v21 = v23;
    v2 = *((_QWORD *)&v24 + 1);
    v17 = v24;
    v9 = *((_DWORD *)a2 + 40);
    if ( a2[14] != -1 )
      goto LABEL_6;
LABEL_12:
    v22 = -1;
    if ( a2[17] != -1 )
      goto LABEL_7;
LABEL_13:
    result = -1;
    goto LABEL_14;
  }
LABEL_11:
  v21 = -1;
  v9 = *((_DWORD *)a2 + 40);
  if ( a2[14] == -1 )
    goto LABEL_12;
LABEL_6:
  sub_1416AC440(&v23, a2 + 14);
  v22 = v23;
  v6 = *((_QWORD *)&v24 + 1);
  v18 = v24;
  if ( a2[17] == -1 )
    goto LABEL_13;
LABEL_7:
  sub_1416AC440(&v23, a2 + 17);
  result = v23;
  v11 = v24;
LABEL_14:
  *(_QWORD *)(a1 + 32) = v13;
  *(_OWORD *)(a1 + 16) = v12;
  *(_QWORD *)(a1 + 40) = v20;
  *(_QWORD *)(a1 + 48) = v15;
  *(_QWORD *)(a1 + 56) = v14;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 64) = v19;
  *(_QWORD *)(a1 + 72) = v16;
  *(_QWORD *)(a1 + 80) = v3;
  *(_QWORD *)(a1 + 88) = v21;
  *(_QWORD *)(a1 + 96) = v17;
  *(_QWORD *)(a1 + 104) = v2;
  *(_DWORD *)(a1 + 160) = v9;
  *(_QWORD *)(a1 + 112) = v22;
  *(_QWORD *)(a1 + 120) = v18;
  *(_QWORD *)(a1 + 128) = v6;
  *(_QWORD *)(a1 + 136) = result;
  *(_OWORD *)(a1 + 144) = v11;
  return result;
}
