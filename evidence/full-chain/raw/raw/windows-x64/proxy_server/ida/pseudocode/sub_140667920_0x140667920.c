// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140667920
// name: sub_140667920
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140667920(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int16 a9,
        unsigned __int16 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r12
  __int64 *v14; // rsi
  __int64 v15; // r15
  const char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  char v22; // al
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // ecx
  char v26; // r14
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // r14
  __int64 v31; // rax
  bool v32; // zf
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  char v46; // al
  __int128 v47; // [rsp+50h] [rbp-30h]
  unsigned __int64 v48; // [rsp+60h] [rbp-20h]
  _DWORD v49[3]; // [rsp+6Ch] [rbp-14h] BYREF
  __int64 v50; // [rsp+78h] [rbp-8h]
  __int64 v51; // [rsp+80h] [rbp+0h]
  __int64 v52; // [rsp+88h] [rbp+8h]
  __int64 v53; // [rsp+90h] [rbp+10h]
  __int64 v54; // [rsp+98h] [rbp+18h]
  __int64 v55; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v56; // [rsp+A8h] [rbp+28h]
  __int64 v57; // [rsp+B8h] [rbp+38h]
  __int64 v58; // [rsp+C0h] [rbp+40h]
  __int64 v59; // [rsp+C8h] [rbp+48h]
  __int64 v60; // [rsp+D0h] [rbp+50h]
  __int64 v61; // [rsp+D8h] [rbp+58h]
  __int64 v62; // [rsp+E0h] [rbp+60h]
  __int64 v63; // [rsp+E8h] [rbp+68h]
  __int64 v64; // [rsp+F0h] [rbp+70h]
  unsigned __int16 v65; // [rsp+F8h] [rbp+78h]
  __int16 v66; // [rsp+FAh] [rbp+7Ah]
  int v67; // [rsp+FCh] [rbp+7Ch]
  __int64 v68; // [rsp+100h] [rbp+80h]

  v68 = -2;
  v12 = a4;
  v14 = (__int64 *)a1;
  v15 = a6;
  if ( a6 )
  {
    v16 = *(const char **)(a6 + 8);
    a1 = *(_QWORD *)(a6 + 16);
  }
  else
  {
    v16 = nullptr;
  }
  v63 = a8;
  v64 = a7;
  v65 = a10;
  v66 = a9;
  v61 = a3;
  log_route_result(a2, a3, a4, a5, v16, a1, a9, a10, a11, a12);
  v18 = *v14;
  LOBYTE(v19) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v18 + 16), 1, 0) )
    return;
  if ( 2 * *off_141EC90B8 )
  {
    v20 = sub_1416C2250(v19, v17);
    LOBYTE(v20) = v20 ^ 1;
    v21 = *(unsigned __int8 *)(v18 + 17);
    if ( (_BYTE)v21 )
    {
LABEL_7:
      if ( !(_BYTE)v20 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v21, v17) )
        *(_BYTE *)(v18 + 17) = 1;
      v22 = *(_BYTE *)(v18 + 16);
      *(_BYTE *)(v18 + 16) = 0;
      if ( v22 == 2 )
        WakeByAddressSingle((PVOID)(v18 + 16));
      return;
    }
  }
  else
  {
    v20 = 0;
    v21 = *(unsigned __int8 *)(v18 + 17);
    if ( (_BYTE)v21 )
      goto LABEL_7;
  }
  v62 = a5;
  v67 = v20;
  v52 = v18;
  sub_140FFA6E0(v49);
  v23 = (v49[0] >> 13) - 1;
  v24 = 0;
  if ( v49[0] >> 13 <= 0 )
  {
    v25 = (1 - (v49[0] >> 13)) / 0x190u + 1;
    v23 += 400 * v25;
    v24 = -146097 * v25;
  }
  v26 = v67;
  v27 = 1000
      * (v49[1]
       + 86400LL * (((v23 / 100) >> 2) + ((1461 * v23) >> 2) + v24 + ((v49[0] >> 4) & 0x1FF) - v23 / 100 - 719163))
      + v49[2] / 0xF4240uLL;
  v48 = v27;
  v28 = v61;
  if ( v61 < 0 )
  {
    v29 = 0;
    goto LABEL_16;
  }
  if ( v61 )
  {
    nullsub_1(v27);
    v29 = 1;
    v30 = v61;
    v31 = sub_140001650(v61, 1);
    v28 = v30;
    if ( !v31 )
LABEL_16:
      sub_1416C2D4B(v29, v28);
    v57 = v31;
    sub_141684120(v31, a2, v30);
    v26 = v67;
    v32 = v62 == 0;
    v33 = v63;
    if ( v62 < 0 )
      goto LABEL_20;
  }
  else
  {
    v57 = 1;
    v32 = v62 == 0;
    v33 = v63;
    if ( v62 < 0 )
    {
LABEL_20:
      v34 = 0;
      v35 = v62;
      goto LABEL_21;
    }
  }
  if ( v32 )
  {
    v59 = 1;
    v37 = -1;
    if ( a6 )
      goto LABEL_26;
  }
  else
  {
    nullsub_1(v27);
    v34 = 1;
    v35 = v62;
    v36 = sub_140001650(v62, 1);
    if ( !v36 )
LABEL_21:
      sub_1416C2D4B(v34, v35);
    v59 = v36;
    sub_141684120(v36, v12, v35);
    v33 = v63;
    v37 = -1;
    if ( a6 )
    {
LABEL_26:
      sub_14149C500(&v55, a6);
      v12 = *((_QWORD *)&v56 + 1);
      v63 = v55;
      v51 = v55;
      v53 = v56;
      v50 = v56;
      sub_14149C500(&v55, a6 + 24);
      v58 = v55;
      v15 = *((_QWORD *)&v56 + 1);
      v54 = v56;
      v26 = v67;
      if ( !v64 )
        goto LABEL_37;
      goto LABEL_27;
    }
  }
  v63 = -1;
  v58 = -1;
  if ( !v64 )
    goto LABEL_37;
LABEL_27:
  if ( v33 < 0 )
  {
    v38 = 0;
    goto LABEL_29;
  }
  if ( v33 )
  {
    nullsub_1(v27);
    v38 = 1;
    v39 = sub_140001650(v33, 1);
    if ( !v39 )
LABEL_29:
      sub_1416C2D4B(v38, v33);
    v60 = v39;
    sub_141684120(v39, v64, v33);
    v37 = v33;
  }
  else
  {
    v60 = 1;
    v37 = 0;
    v33 = 0;
  }
LABEL_37:
  v64 = v37;
  if ( a11 )
  {
    sub_140AE70B0(&v55, a11, a12);
    v40 = v55;
    v47 = v56;
    v26 = v67;
  }
  else
  {
    v40 = -1;
  }
  v41 = v52;
  sub_140009140(v52 + 152);
  v43 = v61;
  *(_QWORD *)(v41 + 152) = v61;
  *(_QWORD *)(v41 + 160) = v57;
  *(_QWORD *)(v41 + 168) = v43;
  v44 = v62;
  *(_QWORD *)(v41 + 176) = v62;
  v45 = v59;
  *(_QWORD *)(v41 + 184) = v59;
  *(_QWORD *)(v41 + 192) = v44;
  *(_QWORD *)(v41 + 200) = v63;
  *(_QWORD *)(v41 + 208) = v53;
  *(_QWORD *)(v41 + 216) = v12;
  *(_QWORD *)(v41 + 224) = v58;
  *(_QWORD *)(v41 + 232) = v54;
  *(_QWORD *)(v41 + 240) = v15;
  *(_QWORD *)(v41 + 248) = v64;
  *(_QWORD *)(v41 + 256) = v60;
  *(_QWORD *)(v41 + 264) = v33;
  *(_QWORD *)(v41 + 272) = v40;
  *(_OWORD *)(v41 + 280) = v47;
  *(_QWORD *)(v41 + 296) = v48;
  *(_WORD *)(v41 + 304) = v66;
  *(_WORD *)(v41 + 306) = v65;
  if ( !v26 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v45, v42) )
    *(_BYTE *)(v41 + 17) = 1;
  v46 = *(_BYTE *)(v41 + 16);
  *(_BYTE *)(v41 + 16) = 0;
  if ( v46 == 2 )
    WakeByAddressSingle((PVOID)(v41 + 16));
}