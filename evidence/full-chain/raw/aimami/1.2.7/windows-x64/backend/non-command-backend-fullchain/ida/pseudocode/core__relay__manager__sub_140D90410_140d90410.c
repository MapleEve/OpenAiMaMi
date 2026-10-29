// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d90410 | name sub_140D90410
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140D90410(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  char *v4; // r12
  int v6; // r14d
  __int64 v8; // rdi
  char *v9; // r15
  __int64 v10; // rcx
  char *v11; // r14
  char *v12; // r15
  char *v13; // rbx
  _OWORD *v14; // rax
  __int128 v15; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int128 v17; // [rsp+60h] [rbp-20h]
  __int128 v18; // [rsp+70h] [rbp-10h]
  char *v19; // [rsp+88h] [rbp+8h]
  char **v20; // [rsp+90h] [rbp+10h] BYREF
  char *v21; // [rsp+98h] [rbp+18h]
  __int64 v22; // [rsp+A0h] [rbp+20h]
  char *v23; // [rsp+B8h] [rbp+38h] BYREF
  char *v24; // [rsp+C0h] [rbp+40h] BYREF
  char *v25; // [rsp+C8h] [rbp+48h]
  char *v26; // [rsp+D0h] [rbp+50h]
  _BYTE v27[72]; // [rsp+D8h] [rbp+58h]
  char *v28; // [rsp+120h] [rbp+A0h]
  char *v29; // [rsp+128h] [rbp+A8h]
  char *v30; // [rsp+130h] [rbp+B0h]
  __int64 v31; // [rsp+138h] [rbp+B8h]

  v31 = -2;
  if ( !*(_BYTE *)(a4 + 364) )
  {
    *a1 = -1;
    return;
  }
  v6 = a2;
  sub_141018040(
    (__int64)&v23,
    a2,
    *(__int128 **)(a4 + 8),
    *(_QWORD *)(a4 + 16),
    *(_QWORD *)(a4 + 32),
    *(_QWORD *)(a4 + 40),
    *(_BYTE *)(a4 + 382) ^ 1,
    *(_QWORD **)(a4 + 136),
    *(_QWORD *)(a4 + 144));
  if ( (_BYTE)v23 )
  {
    v8 = *(_QWORD *)v27;
    v17 = *(_OWORD *)&v27[8];
    v18 = *(_OWORD *)&v27[24];
    if ( v24 != (char *)-1LL )
    {
      v23 = v24;
      v24 = v25;
      v25 = v26;
      v26 = *(char **)v27;
      *(_OWORD *)v27 = v17;
      *(_OWORD *)&v27[16] = v18;
      *(_OWORD *)&v27[32] = *(_OWORD *)&v27[40];
      *(_OWORD *)&v27[48] = *(_OWORD *)&v27[56];
      v20 = &v23;
      v21 = (char *)sub_14104A7D0;
      sub_1416ABFD0(&v15, &unk_141A4B261, &v20);
      a1[2] = v16;
      *(_OWORD *)a1 = v15;
      sub_140D1BEA0(&v23);
      return;
    }
    v28 = v26;
    v29 = v25;
  }
  else
  {
    v4 = *(char **)&v27[48];
    v9 = *(char **)&v27[40];
    v8 = *(_QWORD *)&v27[56];
    if ( v24 != (char *)2 && v26 )
      sub_140001660(*(_QWORD *)v27, v26, 1);
    v28 = v4;
    v29 = v9;
  }
  sub_1416828D0((unsigned int)&v23, v6, a3, (unsigned int)&unk_141A6F681, 25);
  v30 = v24;
  sub_14169D480(&v20, v24, v25);
  v11 = v28;
  if ( v23 )
    sub_140001660(v30, v23, 1);
  v12 = (char *)v20;
  v13 = v29;
  if ( v20 == (char **)-1LL )
  {
    v10 = (unsigned __int8)v21 & 3;
    if ( (unsigned int)(v10 - 2) >= 2 && ((unsigned __int8)v21 & 3) != 0 )
    {
      v24 = v21 - 1;
      LOBYTE(v23) = 3;
      sub_1416BCB00(&v24);
    }
    v13 = v29;
    v11 = v28;
LABEL_21:
    nullsub_1(v10);
    v14 = (_OWORD *)sub_140001650(63, 1);
    if ( !v14 )
    {
      v19 = v4;
      v30 = v12;
      sub_141938D2B(1, 63);
    }
    *(_OWORD *)((char *)v14 + 47) = *(__int128 *)((char *)&xmmword_141A47BB7 + 15);
    v14[2] = xmmword_141A47BB7;
    v14[1] = xmmword_141A47BA7;
    *v14 = xmmword_141A47B97;
    *a1 = 63;
    a1[1] = v14;
    a1[2] = 63;
    if ( v12 == (char *)-1LL )
      goto LABEL_25;
    goto LABEL_23;
  }
  v4 = v21;
  if ( v22 != v8 || (unsigned int)sub_1418F4B70(v21, v11) )
    goto LABEL_21;
  *a1 = -1;
LABEL_23:
  if ( v12 )
    sub_140001660(v4, v12, 1);
LABEL_25:
  if ( v13 )
    sub_140001660(v11, v13, 1);
}
