// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140dabd30 | name sub_140DABD30
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140DABD30(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int16 a9,
        __int16 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 *v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  char v21; // al
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // ecx
  char v25; // r14
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r14
  __m128i *v29; // rax
  bool v30; // zf
  unsigned __int64 v31; // r13
  __m128i *v32; // rax
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // al
  __int128 v41; // [rsp+50h] [rbp-30h]
  unsigned __int64 v42; // [rsp+60h] [rbp-20h]
  _DWORD v43[3]; // [rsp+6Ch] [rbp-14h] BYREF
  __int64 v44; // [rsp+78h] [rbp-8h]
  __int64 v45; // [rsp+80h] [rbp+0h]
  __int64 v46; // [rsp+88h] [rbp+8h]
  __int64 v47; // [rsp+90h] [rbp+10h]
  __int64 v48; // [rsp+98h] [rbp+18h]
  __int64 v49; // [rsp+A0h] [rbp+20h]
  __int64 v50; // [rsp+A8h] [rbp+28h]
  __int64 v51; // [rsp+B0h] [rbp+30h]
  __int64 v52; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v53; // [rsp+C0h] [rbp+40h]
  __int64 v54; // [rsp+D0h] [rbp+50h]
  __int64 v55; // [rsp+D8h] [rbp+58h]
  __int64 v56; // [rsp+E0h] [rbp+60h]
  __int64 v57; // [rsp+E8h] [rbp+68h]
  __int64 v58; // [rsp+F0h] [rbp+70h]
  __int16 v59; // [rsp+F8h] [rbp+78h]
  __int16 v60; // [rsp+FAh] [rbp+7Ah]
  int v61; // [rsp+FCh] [rbp+7Ch]
  __int64 v62; // [rsp+100h] [rbp+80h]

  v62 = -2;
  v14 = (__int64 *)a1;
  v15 = a6;
  if ( a6 )
  {
    v16 = *(_QWORD *)(a6 + 8);
    a1 = *(_QWORD *)(a6 + 16);
  }
  else
  {
    v16 = 0;
  }
  v57 = a8;
  v55 = a7;
  v59 = a10;
  v60 = a9;
  v54 = a3;
  sub_140DABA40((_DWORD)a2, a3, (_DWORD)a4, a5, v16, a1, a9, a10, a11);
  v17 = *v14;
  LOBYTE(v18) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v17 + 16), 1, 0) )
    return;
  if ( 2 * *off_1421E7210 )
  {
    v19 = sub_141938160(v18);
    LOBYTE(v19) = v19 ^ 1;
    v20 = *(unsigned __int8 *)(v17 + 17);
    if ( (_BYTE)v20 )
    {
LABEL_7:
      if ( !(_BYTE)v19 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v20) )
        *(_BYTE *)(v17 + 17) = 1;
      v21 = *(_BYTE *)(v17 + 16);
      *(_BYTE *)(v17 + 16) = 0;
      if ( v21 == 2 )
        WakeByAddressSingle((PVOID)(v17 + 16));
      return;
    }
  }
  else
  {
    v19 = 0;
    v20 = *(unsigned __int8 *)(v17 + 17);
    if ( (_BYTE)v20 )
      goto LABEL_7;
  }
  v61 = v19;
  v46 = v17;
  sub_141406CE0(v43);
  v58 = a5;
  v22 = (v43[0] >> 13) - 1;
  v23 = 0;
  if ( v43[0] >> 13 <= 0 )
  {
    v24 = (1 - (v43[0] >> 13)) / 0x190u + 1;
    v22 += 400 * v24;
    v23 = -146097 * v24;
  }
  v25 = v61;
  v26 = 1000
      * (v43[1]
       + 86400LL * (((v22 / 100) >> 2) + ((1461 * v22) >> 2) + v23 + ((v43[0] >> 4) & 0x1FF) - v22 / 100 - 719163))
      + v43[2] / 0xF4240uLL;
  v42 = v26;
  v27 = v54;
  if ( v54 < 0 )
  {
    v17 = 0;
    goto LABEL_16;
  }
  if ( v54 )
  {
    nullsub_1(v26);
    v17 = 1;
    v28 = v54;
    v29 = (__m128i *)sub_140001650(v54, 1);
    v27 = v28;
    if ( !v29 )
LABEL_16:
      sub_141938D2B(v17, v27);
    v49 = (__int64)v29;
    sub_1418F44E0(v29, a2, v28);
    v25 = v61;
    v30 = v58 == 0;
    if ( v58 < 0 )
      goto LABEL_20;
  }
  else
  {
    v49 = 1;
    v30 = v58 == 0;
    if ( v58 < 0 )
    {
LABEL_20:
      v17 = 0;
      v31 = v58;
      goto LABEL_21;
    }
  }
  if ( v30 )
  {
    v50 = 1;
    v33 = -1;
    v34 = v55;
    if ( a6 )
      goto LABEL_26;
  }
  else
  {
    nullsub_1(v26);
    v17 = 1;
    v31 = v58;
    v32 = (__m128i *)sub_140001650(v58, 1);
    if ( !v32 )
LABEL_21:
      sub_141938D2B(v17, v31);
    v50 = (__int64)v32;
    sub_1418F44E0(v32, a4, v31);
    v33 = -1;
    v34 = v55;
    if ( a6 )
    {
LABEL_26:
      sub_1416AC440(&v52, a6);
      v17 = *((_QWORD *)&v53 + 1);
      v51 = v52;
      v45 = v52;
      v47 = v53;
      v44 = v53;
      sub_1416AC440(&v52, a6 + 24);
      v56 = v52;
      v15 = *((_QWORD *)&v53 + 1);
      v48 = v53;
      v25 = v61;
      if ( v34 )
        goto LABEL_27;
LABEL_31:
      if ( a11 )
        goto LABEL_28;
      goto LABEL_32;
    }
  }
  v51 = -1;
  v56 = -1;
  if ( !v34 )
    goto LABEL_31;
LABEL_27:
  sub_140EF5FF0(&v52, v34, v57);
  v33 = v52;
  v34 = *((_QWORD *)&v53 + 1);
  v55 = v53;
  v25 = v61;
  if ( a11 )
  {
LABEL_28:
    v57 = v33;
    sub_14102D650(&v52, a11, a12);
    v35 = v52;
    v41 = v53;
    v25 = v61;
    v33 = v57;
    goto LABEL_33;
  }
LABEL_32:
  v35 = -1;
LABEL_33:
  v36 = v46;
  sub_140020F20(v46 + 176);
  v37 = v54;
  *(_QWORD *)(v36 + 176) = v54;
  *(_QWORD *)(v36 + 184) = v49;
  *(_QWORD *)(v36 + 192) = v37;
  v38 = v58;
  *(_QWORD *)(v36 + 200) = v58;
  v39 = v50;
  *(_QWORD *)(v36 + 208) = v50;
  *(_QWORD *)(v36 + 216) = v38;
  *(_QWORD *)(v36 + 224) = v51;
  *(_QWORD *)(v36 + 232) = v47;
  *(_QWORD *)(v36 + 240) = v17;
  *(_QWORD *)(v36 + 248) = v56;
  *(_QWORD *)(v36 + 256) = v48;
  *(_QWORD *)(v36 + 264) = v15;
  *(_QWORD *)(v36 + 272) = v33;
  *(_QWORD *)(v36 + 280) = v55;
  *(_QWORD *)(v36 + 288) = v34;
  *(_QWORD *)(v36 + 296) = v35;
  *(_OWORD *)(v36 + 304) = v41;
  *(_QWORD *)(v36 + 320) = v42;
  *(_WORD *)(v36 + 328) = v60;
  *(_WORD *)(v36 + 330) = v59;
  if ( !v25 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v39) )
    *(_BYTE *)(v36 + 17) = 1;
  v40 = *(_BYTE *)(v36 + 16);
  *(_BYTE *)(v36 + 16) = 0;
  if ( v40 == 2 )
    WakeByAddressSingle((PVOID)(v36 + 16));
}
