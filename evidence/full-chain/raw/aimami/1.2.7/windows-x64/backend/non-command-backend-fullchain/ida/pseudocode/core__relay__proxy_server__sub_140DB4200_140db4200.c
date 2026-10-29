// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140db4200 | name sub_140DB4200
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140DB4200(
        __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int16 a6,
        __int16 a7)
{
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  char v15; // al
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // ecx
  unsigned __int64 v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // r13
  __int64 v23; // rbx
  unsigned __int64 v24; // r12
  __m128i *v25; // rax
  bool v26; // zf
  __int64 v27; // rbx
  __m128i *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned __int8 v32; // bl
  unsigned __int64 v33; // rsi
  __int64 v34; // rcx
  __m128i *v35; // rax
  __m128i *v36; // rdi
  const __m128i *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v41; // [rsp+58h] [rbp-28h]
  unsigned int v42; // [rsp+5Ch] [rbp-24h]
  __int64 v43; // [rsp+60h] [rbp-20h]
  __int64 v44; // [rsp+68h] [rbp-18h]
  _QWORD *v45; // [rsp+70h] [rbp-10h]
  __int64 v46; // [rsp+78h] [rbp-8h]
  __int64 v47; // [rsp+80h] [rbp+0h]
  int v48; // [rsp+8Ch] [rbp+Ch]
  __int64 v49; // [rsp+90h] [rbp+10h]
  __int64 v50; // [rsp+98h] [rbp+18h]
  __int64 v51; // [rsp+A0h] [rbp+20h]

  v51 = -2;
  sub_140DABA40((_DWORD)a2, a3, (_DWORD)a4, a5, (__int64)&unk_141A4DB91, 6, a6, a7, 0);
  v11 = *a1;
  LOBYTE(v12) = 1;
  if ( !_InterlockedCompareExchange8((volatile signed __int8 *)(v11 + 16), 1, 0) )
  {
    if ( 2 * *off_1421E7210 )
    {
      v13 = sub_141938160(v12);
      LOBYTE(v13) = v13 ^ 1;
      v14 = *(unsigned __int8 *)(v11 + 17);
      if ( (_BYTE)v14 )
      {
LABEL_4:
        if ( (_BYTE)v13 )
        {
LABEL_6:
          v15 = *(_BYTE *)(v11 + 16);
          *(_BYTE *)(v11 + 16) = 0;
          if ( v15 == 2 )
            WakeByAddressSingle((PVOID)(v11 + 16));
          return;
        }
LABEL_5:
        if ( 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v14) )
          *(_BYTE *)(v11 + 17) = 1;
        goto LABEL_6;
      }
    }
    else
    {
      v13 = 0;
      v14 = *(unsigned __int8 *)(v11 + 17);
      if ( (_BYTE)v14 )
        goto LABEL_4;
    }
    v50 = a5;
    v48 = v13;
    v49 = a3;
    v43 = v11;
    sub_141406CE0(&v40);
    v16 = (v40 >> 13) - 1;
    v17 = 0;
    if ( v40 >> 13 <= 0 )
    {
      v18 = (1 - (v40 >> 13)) / 0x190u + 1;
      v16 += 400 * v18;
      v17 = -146097 * v18;
    }
    v19 = v50;
    v20 = v17 + (((unsigned int)v40 >> 4) & 0x1FF);
    v21 = v41;
    v22 = 1000 * (v41 + 86400LL * (int)(((v16 / 100) >> 2) + ((1461 * v16) >> 2) + v20 - v16 / 100 - 719163))
        + v42 / 0xF4240uLL;
    if ( v49 < 0 )
    {
      v23 = 0;
      v24 = v49;
      goto LABEL_13;
    }
    if ( v49 )
    {
      nullsub_1(v41);
      v23 = 1;
      v24 = v49;
      v25 = (__m128i *)sub_140001650(v49, 1);
      if ( !v25 )
LABEL_13:
        sub_141938D2B(v23, v24);
      v46 = (__int64)v25;
      sub_1418F44E0(v25, a2, v24);
      v19 = v50;
      v26 = v50 == 0;
      if ( v50 < 0 )
        goto LABEL_17;
    }
    else
    {
      v46 = 1;
      v26 = v50 == 0;
      if ( v50 < 0 )
      {
LABEL_17:
        v27 = 0;
        goto LABEL_18;
      }
    }
    if ( v26 )
    {
      v47 = 1;
    }
    else
    {
      nullsub_1(v21);
      v27 = 1;
      v28 = (__m128i *)sub_140001650(v19, 1);
      if ( !v28 )
LABEL_18:
        sub_141938D2B(v27, v19);
      v47 = (__int64)v28;
      sub_1418F44E0(v28, a4, v19);
    }
    nullsub_1(v21);
    v29 = sub_140001650(6, 1);
    if ( !v29 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v29 + 4) = 26977;
    v44 = v29;
    *(_DWORD *)v29 = 1852141679;
    nullsub_1(v30);
    v31 = (_QWORD *)sub_140001650(13, 1);
    if ( !v31 )
      sub_141938D2B(1, 13);
    *(_QWORD *)((char *)v31 + 5) = 0xB996E698AEE52049uLL;
    v45 = v31;
    *v31 = 0xE52049416E65704FuLL;
    v32 = sub_140DDDAE0(aCompact, 7, a2);
    v33 = 8LL * v32 + 47;
    nullsub_1(v34);
    v35 = (__m128i *)sub_140001650(v33, 1);
    if ( !v35 )
      sub_141938D2B(1, v33);
    v36 = v35;
    v37 = (const __m128i *)aHttpsChatgptCo;
    if ( v32 )
      v37 = (const __m128i *)&aHttpsChatgptCo[47];
    sub_1418F44E0(v35, v37, v33);
    v11 = v43;
    sub_140020F20(v43 + 176);
    v38 = v49;
    *(_QWORD *)(v11 + 176) = v49;
    *(_QWORD *)(v11 + 184) = v46;
    *(_QWORD *)(v11 + 192) = v38;
    v39 = v50;
    *(_QWORD *)(v11 + 200) = v50;
    v14 = v47;
    *(_QWORD *)(v11 + 208) = v47;
    *(_QWORD *)(v11 + 216) = v39;
    *(_QWORD *)(v11 + 224) = 6;
    *(_QWORD *)(v11 + 232) = v44;
    *(_QWORD *)(v11 + 240) = 6;
    *(_QWORD *)(v11 + 248) = 13;
    *(_QWORD *)(v11 + 256) = v45;
    *(_QWORD *)(v11 + 264) = 13;
    *(_QWORD *)(v11 + 272) = v33;
    *(_QWORD *)(v11 + 280) = v36;
    *(_QWORD *)(v11 + 288) = v33;
    *(_QWORD *)(v11 + 296) = -1;
    *(_QWORD *)(v11 + 320) = v22;
    *(_WORD *)(v11 + 328) = a6;
    *(_WORD *)(v11 + 330) = a7;
    if ( (_BYTE)v48 )
      goto LABEL_6;
    goto LABEL_5;
  }
}
