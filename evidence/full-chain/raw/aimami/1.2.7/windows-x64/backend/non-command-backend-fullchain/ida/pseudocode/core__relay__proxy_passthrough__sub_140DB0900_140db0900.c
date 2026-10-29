// win 1.2.7 | module src/core/relay/proxy_passthrough.rs | ea 0x140db0900 | name sub_140DB0900
// win 1.2.7 | module src/core/relay/proxy_passthrough.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140DB0900(
        __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int16 a6,
        __int16 a7)
{
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  char v16; // al
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // ecx
  char v20; // di
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // r13
  __int64 v24; // r14
  unsigned __int64 v25; // rdi
  __m128i *v26; // rax
  void *v27; // rax
  __int64 v28; // rcx
  void *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r14
  _QWORD *v33; // rax
  __int64 v34; // r14
  __m128i *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  const __m128i *v38; // [rsp+50h] [rbp-30h]
  int v39; // [rsp+5Ch] [rbp-24h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-20h]
  unsigned int v41; // [rsp+64h] [rbp-1Ch]
  __int64 v42; // [rsp+68h] [rbp-18h]
  void *v43; // [rsp+70h] [rbp-10h]
  __int64 v44; // [rsp+78h] [rbp-8h]
  _QWORD *v45; // [rsp+80h] [rbp+0h]
  __int64 v46; // [rsp+88h] [rbp+8h]
  __int64 v47; // [rsp+90h] [rbp+10h]
  int v48; // [rsp+9Ch] [rbp+1Ch]
  __int64 v49; // [rsp+A0h] [rbp+20h]

  v49 = -2;
  sub_140DABA40((_DWORD)a2, a3, (unsigned int)aGptImage2, 11, (__int64)&unk_141A4DB91, 6, a6, a7, 0);
  v11 = *a1;
  LOBYTE(v12) = 1;
  if ( !_InterlockedCompareExchange8((volatile signed __int8 *)(v11 + 16), 1, 0) )
  {
    v38 = a4;
    v13 = off_1421E7210;
    if ( 2 * *off_1421E7210 )
    {
      v14 = sub_141938160(v12);
      LOBYTE(v14) = v14 ^ 1;
      v15 = *(unsigned __int8 *)(v11 + 17);
      if ( (_BYTE)v15 )
        goto LABEL_4;
    }
    else
    {
      v14 = 0;
      v15 = *(unsigned __int8 *)(v11 + 17);
      if ( (_BYTE)v15 )
      {
LABEL_4:
        if ( (_BYTE)v14 || !(2 * *v13) )
        {
LABEL_6:
          v16 = *(_BYTE *)(v11 + 16);
          *(_BYTE *)(v11 + 16) = 0;
          if ( v16 == 2 )
            WakeByAddressSingle((PVOID)(v11 + 16));
          return;
        }
LABEL_30:
        if ( !(unsigned __int8)sub_141938160(v15) )
          *(_BYTE *)(v11 + 17) = 1;
        goto LABEL_6;
      }
    }
    v48 = v14;
    v47 = a3;
    v42 = v11;
    sub_141406CE0(&v39);
    v17 = (v39 >> 13) - 1;
    v18 = 0;
    if ( v39 >> 13 <= 0 )
    {
      v19 = (1 - (v39 >> 13)) / 0x190u + 1;
      v17 += 400 * v19;
      v18 = -146097 * v19;
    }
    v20 = v48;
    v21 = v18 + (((unsigned int)v39 >> 4) & 0x1FF);
    v22 = v40;
    v23 = 1000 * (v40 + 86400LL * (int)(((v17 / 100) >> 2) + ((1461 * v17) >> 2) + v21 - v17 / 100 - 719163))
        + v41 / 0xF4240uLL;
    if ( v47 < 0 )
    {
      v24 = 0;
      v25 = v47;
      goto LABEL_13;
    }
    if ( v47 )
    {
      nullsub_1(v40);
      v24 = 1;
      v25 = v47;
      v26 = (__m128i *)sub_140001650(v47, 1);
      if ( !v26 )
LABEL_13:
        sub_141938D2B(v24, v25);
      v46 = (__int64)v26;
      sub_1418F44E0(v26, a2, v25);
      v20 = v48;
    }
    else
    {
      v46 = 1;
    }
    nullsub_1(v22);
    v27 = (void *)sub_140001650(11, 1);
    if ( !v27 )
      sub_141938D2B(1, 11);
    v29 = v27;
    qmemcpy(v27, "gpt-image-2", 11);
    nullsub_1(v28);
    v30 = sub_140001650(6, 1);
    v43 = v29;
    if ( !v30 )
      sub_141938D2B(1, 6);
    v32 = v30;
    *(_WORD *)(v30 + 4) = 26977;
    *(_DWORD *)v30 = 1852141679;
    nullsub_1(v31);
    v33 = (_QWORD *)sub_140001650(13, 1);
    v44 = v32;
    if ( !v33 )
      sub_141938D2B(1, 13);
    *(_QWORD *)((char *)v33 + 5) = 0xB996E698AEE52049uLL;
    v45 = v33;
    *v33 = 0xE52049416E65704FuLL;
    if ( a5 < 0 )
    {
      v34 = 0;
      goto LABEL_23;
    }
    if ( a5 )
    {
      nullsub_1(0xE52049416E65704FuLL);
      v34 = 1;
      v35 = (__m128i *)sub_140001650(a5, 1);
      if ( !v35 )
LABEL_23:
        sub_141938D2B(v34, a5);
      v36 = (__int64)v35;
      sub_1418F44E0(v35, v38, a5);
    }
    else
    {
      v36 = 1;
    }
    v11 = v42;
    sub_140020F20(v42 + 176);
    v37 = v47;
    *(_QWORD *)(v11 + 176) = v47;
    v15 = v46;
    *(_QWORD *)(v11 + 184) = v46;
    *(_QWORD *)(v11 + 192) = v37;
    *(_QWORD *)(v11 + 200) = 11;
    *(_QWORD *)(v11 + 208) = v43;
    *(_QWORD *)(v11 + 216) = 11;
    *(_QWORD *)(v11 + 224) = 6;
    *(_QWORD *)(v11 + 232) = v44;
    *(_QWORD *)(v11 + 240) = 6;
    *(_QWORD *)(v11 + 248) = 13;
    *(_QWORD *)(v11 + 256) = v45;
    *(_QWORD *)(v11 + 264) = 13;
    *(_QWORD *)(v11 + 272) = a5;
    *(_QWORD *)(v11 + 280) = v36;
    *(_QWORD *)(v11 + 288) = a5;
    *(_QWORD *)(v11 + 296) = -1;
    *(_QWORD *)(v11 + 320) = v23;
    *(_WORD *)(v11 + 328) = a6;
    *(_WORD *)(v11 + 330) = a7;
    if ( v20 || !(2 * *off_1421E7210) )
      goto LABEL_6;
    goto LABEL_30;
  }
}
