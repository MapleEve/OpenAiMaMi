// module: codexmate_lib/core/relay/proxy_passthrough
// addr: 0x14066baa0
// name: sub_14066BAA0
// win 1.2.1 | module src/core/relay/proxy_passthrough.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14066BAA0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        unsigned __int16 a7)
{
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  char v17; // al
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // ecx
  char v21; // di
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rdi
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rcx
  void *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r14
  _QWORD *v34; // rax
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // [rsp+48h] [rbp-38h]
  __int64 v40; // [rsp+50h] [rbp-30h]
  int v41; // [rsp+5Ch] [rbp-24h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-20h]
  unsigned int v43; // [rsp+64h] [rbp-1Ch]
  __int64 v44; // [rsp+68h] [rbp-18h]
  void *v45; // [rsp+70h] [rbp-10h]
  __int64 v46; // [rsp+78h] [rbp-8h]
  _QWORD *v47; // [rsp+80h] [rbp+0h]
  __int64 v48; // [rsp+88h] [rbp+8h]
  __int64 v49; // [rsp+90h] [rbp+10h]
  int v50; // [rsp+9Ch] [rbp+1Ch]
  __int64 v51; // [rsp+A0h] [rbp+20h]

  v51 = -2;
  log_route_result(a2, a3, (__int64)aGptImage2, 11, aOpenai_3, 6, a6, a7, 0, v39);
  v12 = *a1;
  LOBYTE(v13) = 1;
  if ( !_InterlockedCompareExchange8((volatile signed __int8 *)(v12 + 16), 1, 0) )
  {
    v40 = a4;
    v14 = off_141EC90B8;
    if ( 2 * *off_141EC90B8 )
    {
      v15 = sub_1416C2250(v13, v11);
      LOBYTE(v15) = v15 ^ 1;
      v16 = *(unsigned __int8 *)(v12 + 17);
      if ( (_BYTE)v16 )
        goto LABEL_4;
    }
    else
    {
      v15 = 0;
      v16 = *(unsigned __int8 *)(v12 + 17);
      if ( (_BYTE)v16 )
      {
LABEL_4:
        if ( (_BYTE)v15 || !(2 * *v14) )
        {
LABEL_6:
          v17 = *(_BYTE *)(v12 + 16);
          *(_BYTE *)(v12 + 16) = 0;
          if ( v17 == 2 )
            WakeByAddressSingle((PVOID)(v12 + 16));
          return;
        }
LABEL_30:
        if ( !(unsigned __int8)sub_1416C2250(v16, v11) )
          *(_BYTE *)(v12 + 17) = 1;
        goto LABEL_6;
      }
    }
    v50 = v15;
    v49 = a3;
    v44 = v12;
    sub_140FFA6E0(&v41);
    v18 = (v41 >> 13) - 1;
    v19 = 0;
    if ( v41 >> 13 <= 0 )
    {
      v20 = (1 - (v41 >> 13)) / 0x190u + 1;
      v18 += 400 * v20;
      v19 = -146097 * v20;
    }
    v21 = v50;
    v22 = v19 + (((unsigned int)v41 >> 4) & 0x1FF);
    v23 = v42;
    v24 = 1000 * (v42 + 86400LL * (int)(((v18 / 100) >> 2) + ((1461 * v18) >> 2) + v22 - v18 / 100 - 719163))
        + v43 / 0xF4240uLL;
    if ( v49 < 0 )
    {
      v25 = 0;
      v26 = v49;
      goto LABEL_13;
    }
    if ( v49 )
    {
      nullsub_1(v42);
      v25 = 1;
      v26 = v49;
      v27 = sub_140001650(v49, 1);
      if ( !v27 )
LABEL_13:
        sub_1416C2D4B(v25, v26);
      v48 = v27;
      sub_141684120(v27, a2, v26);
      v21 = v50;
    }
    else
    {
      v48 = 1;
    }
    nullsub_1(v23);
    v28 = (void *)sub_140001650(11, 1);
    if ( !v28 )
      sub_1416C2D4B(1, 11);
    v30 = v28;
    qmemcpy(v28, "gpt-image-2", 11);
    nullsub_1(v29);
    v31 = sub_140001650(6, 1);
    v45 = v30;
    if ( !v31 )
      sub_1416C2D4B(1, 6);
    v33 = v31;
    *(_WORD *)(v31 + 4) = 26977;
    *(_DWORD *)v31 = 1852141679;
    nullsub_1(v32);
    v34 = (_QWORD *)sub_140001650(13, 1);
    v46 = v33;
    if ( !v34 )
      sub_1416C2D4B(1, 13);
    *(_QWORD *)((char *)v34 + 5) = 0xB996E698AEE52049uLL;
    v47 = v34;
    *v34 = 0xE52049416E65704FuLL;
    if ( a5 < 0 )
    {
      v35 = 0;
      goto LABEL_23;
    }
    if ( a5 )
    {
      nullsub_1(0xE52049416E65704FuLL);
      v35 = 1;
      v36 = sub_140001650(a5, 1);
      if ( !v36 )
LABEL_23:
        sub_1416C2D4B(v35, a5);
      v37 = v36;
      sub_141684120(v36, v40, a5);
    }
    else
    {
      v37 = 1;
    }
    v12 = v44;
    sub_140009140(v44 + 152);
    v38 = v49;
    *(_QWORD *)(v12 + 152) = v49;
    v16 = v48;
    *(_QWORD *)(v12 + 160) = v48;
    *(_QWORD *)(v12 + 168) = v38;
    *(_QWORD *)(v12 + 176) = 11;
    *(_QWORD *)(v12 + 184) = v45;
    *(_QWORD *)(v12 + 192) = 11;
    *(_QWORD *)(v12 + 200) = 6;
    *(_QWORD *)(v12 + 208) = v46;
    *(_QWORD *)(v12 + 216) = 6;
    *(_QWORD *)(v12 + 224) = 13;
    *(_QWORD *)(v12 + 232) = v47;
    *(_QWORD *)(v12 + 240) = 13;
    *(_QWORD *)(v12 + 248) = a5;
    *(_QWORD *)(v12 + 256) = v37;
    *(_QWORD *)(v12 + 264) = a5;
    *(_QWORD *)(v12 + 272) = -1;
    *(_QWORD *)(v12 + 296) = v24;
    *(_WORD *)(v12 + 304) = a6;
    *(_WORD *)(v12 + 306) = a7;
    if ( v21 || !(2 * *off_141EC90B8) )
      goto LABEL_6;
    goto LABEL_30;
  }
}