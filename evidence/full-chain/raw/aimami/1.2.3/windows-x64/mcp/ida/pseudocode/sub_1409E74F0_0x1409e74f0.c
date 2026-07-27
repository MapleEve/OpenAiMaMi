// module: codexmate_lib/core/mcp
// addr: 0x1409e74f0
// name: sub_1409E74F0
// win 1.2.1 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_1409E74F0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdx
  char v7; // r9
  char *v8; // r15
  int v9; // r11d
  char *v10; // r10
  int v11; // ebx
  int v12; // r14d
  int v13; // r11d
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rbx
  unsigned __int64 v26; // r13
  __int64 *v27; // r12
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // r14
  _BYTE *v31; // rsi
  __int64 v32; // [rsp+28h] [rbp-58h] BYREF
  __int64 v33; // [rsp+30h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-40h]
  unsigned __int64 v36; // [rsp+48h] [rbp-38h]
  __int64 v37; // [rsp+50h] [rbp-30h]
  unsigned __int64 v38; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+60h] [rbp-20h]
  char v40; // [rsp+68h] [rbp-18h]
  __int16 v41; // [rsp+70h] [rbp-10h]
  __int64 v42; // [rsp+78h] [rbp-8h]
  __int64 v43; // [rsp+80h] [rbp+0h]
  __int128 v44; // [rsp+88h] [rbp+8h] BYREF
  __int64 v45; // [rsp+98h] [rbp+18h]
  __int64 v46; // [rsp+A0h] [rbp+20h]

  v46 = -2;
  if ( a3 < 0xC )
    goto LABEL_3;
  if ( *(_QWORD *)a2 ^ 0x767265735F70636DLL | *(unsigned int *)(a2 + 8) ^ 0x2E737265LL )
    goto LABEL_3;
  v3 = a3 - 12;
  if ( a3 == 12 )
    goto LABEL_3;
  v4 = a2 + 12;
  if ( *(_BYTE *)(a2 + 12) != 34 )
  {
    v32 = 2;
    v33 = 0;
    v34 = a3 - 12;
    v35 = a2 + 12;
    v36 = a3 - 12;
    v37 = 0;
    v38 = a3 - 12;
    v39 = 0x2E0000002ELL;
    v40 = 1;
    v41 = 1;
    sub_14031B9B0(&v44, &v32);
    v16 = v45;
    if ( !v45 )
      sub_1416C30E3(0, 0, &off_1417A7698);
    v17 = *((_QWORD *)&v44 + 1);
    v18 = *(_QWORD *)(*((_QWORD *)&v44 + 1) + 8LL);
    if ( v18 < 0 )
    {
      v19 = 0;
      goto LABEL_27;
    }
    if ( !v18 )
    {
      *a1 = -1;
      goto LABEL_52;
    }
    v20 = **((_QWORD **)&v44 + 1);
    nullsub_1(v15);
    v19 = 1;
    v21 = sub_140001650(v18, 1);
    if ( !v21 )
LABEL_27:
      sub_1416C2D4B(v19, v18);
    v43 = v21;
    sub_141684120(v21, v20, v18);
    if ( v16 == 1 )
    {
      v23 = -1;
LABEL_51:
      *a1 = v18;
      a1[1] = v43;
      a1[2] = v18;
      a1[3] = v23;
      a1[4] = v19;
      a1[5] = v23;
LABEL_52:
      if ( (_QWORD)v44 )
        sub_140001660(v17, 16 * v44, 8);
      return;
    }
    v23 = *(_QWORD *)(v17 + 24);
    if ( v23 >= 0 )
    {
      if ( !v23 )
      {
        v23 = 0;
        goto LABEL_51;
      }
      v28 = *(_QWORD *)(v17 + 16);
      nullsub_1(v22);
      v24 = 1;
      v29 = sub_140001650(v23, 1);
      if ( v29 )
      {
        v19 = v29;
        sub_141684120(v29, v28, v23);
        goto LABEL_51;
      }
    }
    else
    {
      v24 = 0;
    }
    v42 = v18;
    sub_1416C2D4B(v24, v23);
  }
  if ( a3 == 13 )
  {
LABEL_3:
    *a1 = -1;
    return;
  }
  v5 = (char *)(a2 + a3);
  v6 = (char *)(a2 + 13);
  v7 = 0;
  v8 = nullptr;
  while ( 1 )
  {
    v9 = (unsigned __int8)*v6;
    if ( *v6 >= 0 )
    {
      v10 = v6 + 1;
      if ( (v7 & 1) == 0 )
        goto LABEL_21;
      goto LABEL_9;
    }
    v11 = v9 & 0x1F;
    v12 = v6[1] & 0x3F;
    if ( (unsigned __int8)v9 > 0xDFu )
      break;
    v10 = v6 + 2;
    v9 = v12 | (v11 << 6);
    if ( (v7 & 1) == 0 )
      goto LABEL_21;
LABEL_9:
    v7 ^= 1u;
LABEL_10:
    v8 = &v10[v8 - v6];
    v6 = v10;
    if ( v10 == v5 )
      goto LABEL_3;
  }
  v13 = (v12 << 6) | v6[2] & 0x3F;
  if ( (unsigned __int8)*v6 >= 0xF0u )
  {
    v10 = v6 + 4;
    v9 = ((v11 & 7) << 18) | (v13 << 6) | v6[3] & 0x3F;
    if ( (v7 & 1) == 0 )
      goto LABEL_21;
    goto LABEL_9;
  }
  v10 = v6 + 3;
  v9 = (v11 << 12) | v13;
  if ( (v7 & 1) != 0 )
    goto LABEL_9;
LABEL_21:
  if ( v9 == 92 )
    goto LABEL_9;
  if ( v9 != 34 )
  {
    v7 = 0;
    goto LABEL_10;
  }
  LODWORD(v25) = (_DWORD)v8 + 1;
  if ( (unsigned __int64)(v8 + 1) >= v3 )
    goto LABEL_55;
  v25 = (__int64)(v8 + 2);
  if ( (unsigned __int64)(v8 + 2) < v3 )
  {
    if ( *(char *)(v4 + v25) > -65 )
    {
      v26 = a3;
      v27 = a1;
      sub_1409E14D0((__int64 *)&v44, v4, (__int64)(v8 + 2));
      goto LABEL_44;
    }
LABEL_55:
    sub_1416C2F60(v4, a3 - 12, 0, v25, (__int64)&off_1417A76B0);
  }
  v26 = a3;
  v27 = a1;
  sub_1409E14D0((__int64 *)&v44, v4, (__int64)(v8 + 2));
  if ( v25 != v3 )
    sub_1416C2F60(v4, v3, (_DWORD)v8 + 2, v3, (__int64)&off_1417A76C8);
LABEL_44:
  v30 = -1;
  if ( v3 != v25 )
  {
    v31 = (_BYTE *)(v25 + v4);
    if ( *v31 == 46 )
    {
      v25 = v26 - (_QWORD)v8 - 15;
      sub_140388B60((unsigned int)&v32, v26 - (_DWORD)v8 - 15, 0, 1, 1);
      v30 = v33;
      if ( (_BYTE)v32 )
        sub_1416C2D4B(v33, v34);
      v3 = v34;
      if ( v26 - (_QWORD)v8 == 15 )
        v25 = 0;
      else
        sub_141684120(v34, v31 + 1, v26 - (_QWORD)v8 - 15);
    }
  }
  v27[2] = v45;
  *(_OWORD *)v27 = v44;
  v27[3] = v30;
  v27[4] = v3;
  v27[5] = v25;
}