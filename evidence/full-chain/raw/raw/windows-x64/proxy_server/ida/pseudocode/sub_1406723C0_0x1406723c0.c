// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1406723c0
// name: sub_1406723C0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1406723C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        unsigned __int16 a7)
{
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  char v16; // al
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // ecx
  __int64 v20; // r12
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // r13
  __int64 v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  unsigned __int8 v33; // bl
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  void *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+48h] [rbp-38h]
  int v42; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v43; // [rsp+58h] [rbp-28h]
  unsigned int v44; // [rsp+5Ch] [rbp-24h]
  __int64 v45; // [rsp+60h] [rbp-20h]
  __int64 v46; // [rsp+68h] [rbp-18h]
  _QWORD *v47; // [rsp+70h] [rbp-10h]
  __int64 v48; // [rsp+78h] [rbp-8h]
  __int64 v49; // [rsp+80h] [rbp+0h]
  int v50; // [rsp+8Ch] [rbp+Ch]
  __int64 v51; // [rsp+90h] [rbp+10h]
  __int64 v52; // [rsp+98h] [rbp+18h]
  __int64 v53; // [rsp+A0h] [rbp+20h]

  v53 = -2;
  log_route_result(a2, a3, a4, a5, aOpenai_3, 6, a6, a7, 0, v41);
  v12 = *a1;
  LOBYTE(v13) = 1;
  if ( !_InterlockedCompareExchange8((volatile signed __int8 *)(v12 + 16), 1, 0) )
  {
    if ( 2 * *off_141EC90B8 )
    {
      v14 = sub_1416C2250(v13, v11);
      LOBYTE(v14) = v14 ^ 1;
      v15 = *(unsigned __int8 *)(v12 + 17);
      if ( (_BYTE)v15 )
      {
LABEL_4:
        if ( (_BYTE)v14 )
        {
LABEL_6:
          v16 = *(_BYTE *)(v12 + 16);
          *(_BYTE *)(v12 + 16) = 0;
          if ( v16 == 2 )
            WakeByAddressSingle((PVOID)(v12 + 16));
          return;
        }
LABEL_5:
        if ( 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v15, v11) )
          *(_BYTE *)(v12 + 17) = 1;
        goto LABEL_6;
      }
    }
    else
    {
      v14 = 0;
      v15 = *(unsigned __int8 *)(v12 + 17);
      if ( (_BYTE)v15 )
        goto LABEL_4;
    }
    v52 = a5;
    v50 = v14;
    v51 = a3;
    v45 = v12;
    sub_140FFA6E0(&v42);
    v17 = (v42 >> 13) - 1;
    v18 = 0;
    if ( v42 >> 13 <= 0 )
    {
      v19 = (1 - (v42 >> 13)) / 0x190u + 1;
      v17 += 400 * v19;
      v18 = -146097 * v19;
    }
    v20 = v52;
    v21 = v18 + (((unsigned int)v42 >> 4) & 0x1FF);
    v22 = v43;
    v23 = 1000 * (v43 + 86400LL * (int)(((v17 / 100) >> 2) + ((1461 * v17) >> 2) + v21 - v17 / 100 - 719163))
        + v44 / 0xF4240uLL;
    if ( v51 < 0 )
    {
      v24 = 0;
      v25 = v51;
      goto LABEL_13;
    }
    if ( v51 )
    {
      nullsub_1(v43);
      v24 = 1;
      v25 = v51;
      v26 = sub_140001650(v51, 1);
      if ( !v26 )
LABEL_13:
        sub_1416C2D4B(v24, v25);
      v48 = v26;
      sub_141684120(v26, a2, v25);
      v20 = v52;
      v27 = v52 == 0;
      if ( v52 < 0 )
        goto LABEL_17;
    }
    else
    {
      v48 = 1;
      v27 = v52 == 0;
      if ( v52 < 0 )
      {
LABEL_17:
        v28 = 0;
        goto LABEL_18;
      }
    }
    if ( v27 )
    {
      v49 = 1;
    }
    else
    {
      nullsub_1(v22);
      v28 = 1;
      v29 = sub_140001650(v20, 1);
      if ( !v29 )
LABEL_18:
        sub_1416C2D4B(v28, v20);
      v49 = v29;
      sub_141684120(v29, a4, v20);
    }
    nullsub_1(v22);
    v30 = sub_140001650(6, 1);
    if ( !v30 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v30 + 4) = 26977;
    v46 = v30;
    *(_DWORD *)v30 = 1852141679;
    nullsub_1(v31);
    v32 = (_QWORD *)sub_140001650(13, 1);
    if ( !v32 )
      sub_1416C2D4B(1, 13);
    *(_QWORD *)((char *)v32 + 5) = 0xB996E698AEE52049uLL;
    v47 = v32;
    *v32 = 0xE52049416E65704FuLL;
    v33 = sub_140681590(aCompact, 7, a2);
    v34 = 8LL * v33 + 47;
    nullsub_1(v35);
    v36 = sub_140001650(v34, 1);
    if ( !v36 )
      sub_1416C2D4B(1, v34);
    v37 = v36;
    v38 = &unk_141768F30;
    if ( v33 )
      v38 = &unk_141768F5F;
    sub_141684120(v36, v38, v34);
    v12 = v45;
    sub_140009140(v45 + 152);
    v39 = v51;
    *(_QWORD *)(v12 + 152) = v51;
    *(_QWORD *)(v12 + 160) = v48;
    *(_QWORD *)(v12 + 168) = v39;
    v40 = v52;
    *(_QWORD *)(v12 + 176) = v52;
    v15 = v49;
    *(_QWORD *)(v12 + 184) = v49;
    *(_QWORD *)(v12 + 192) = v40;
    *(_QWORD *)(v12 + 200) = 6;
    *(_QWORD *)(v12 + 208) = v46;
    *(_QWORD *)(v12 + 216) = 6;
    *(_QWORD *)(v12 + 224) = 13;
    *(_QWORD *)(v12 + 232) = v47;
    *(_QWORD *)(v12 + 240) = 13;
    *(_QWORD *)(v12 + 248) = v34;
    *(_QWORD *)(v12 + 256) = v37;
    *(_QWORD *)(v12 + 264) = v34;
    *(_QWORD *)(v12 + 272) = -1;
    *(_QWORD *)(v12 + 296) = v23;
    *(_WORD *)(v12 + 304) = a6;
    *(_WORD *)(v12 + 306) = a7;
    if ( (_BYTE)v50 )
      goto LABEL_6;
    goto LABEL_5;
  }
}