// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e4cbc0 | name sub_140E4CBC0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E4CBC0(__int64 a1, const __m128i *a2, signed __int64 a3, __int128 *a4, __int128 *a5)
{
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  __int64 v10; // r14
  unsigned __int8 v11; // bl
  __int64 v12; // r15
  __m128i *v13; // rax
  __int64 v14; // rdi
  int v15; // edx
  int v16; // r8d
  signed __int64 v17; // r11
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm4
  __int128 v24; // xmm5
  __int128 v25; // xmm6
  __int128 v27; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v28[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 *v29; // [rsp+58h] [rbp-28h]
  signed __int64 v30; // [rsp+60h] [rbp-20h]
  _QWORD *v31; // [rsp+68h] [rbp-18h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]
  unsigned __int64 v33; // [rsp+78h] [rbp-8h]
  __int64 v34; // [rsp+80h] [rbp+0h]
  __int128 v35; // [rsp+88h] [rbp+8h] BYREF
  __int64 v36; // [rsp+98h] [rbp+18h]
  __int64 v37; // [rsp+A0h] [rbp+20h]
  _QWORD *v38; // [rsp+A8h] [rbp+28h]
  char v39; // [rsp+B7h] [rbp+37h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+38h]

  v40 = -2;
  v29 = a4;
  v8 = sub_1402B7B30(a4);
  if ( a3 < 0 )
  {
    v10 = 0;
    goto LABEL_3;
  }
  v11 = v8;
  v12 = *((_QWORD *)a5 + 3);
  v30 = a3;
  if ( a3 )
  {
    nullsub_1(v9);
    v10 = 1;
    v13 = (__m128i *)sub_140001650(a3, 1);
    if ( !v13 )
LABEL_3:
      sub_141938D2B(v10, a3);
    v34 = (__int64)v13;
    sub_1418F44E0(v13, a2, a3);
  }
  else
  {
    v34 = 1;
  }
  sub_141568C20(&v35);
  v27 = v35;
  v31 = nullptr;
  v32 = 1;
  v33 = 0;
  v36 = 1610612768;
  *(_QWORD *)&v35 = &v31;
  *((_QWORD *)&v35 + 1) = &off_141A54A20;
  if ( (unsigned __int8)sub_141569DC0(&v27, &v35) )
    sub_141939040(
      (unsigned int)aADisplayImplem_9,
      55,
      (unsigned int)&v39,
      (unsigned int)&unk_141A53038,
      (__int64)&off_141A54AD8);
  v38 = v31;
  v37 = v32;
  if ( v33 <= 0x10 )
  {
    if ( v33 != 16 )
LABEL_11:
      sub_141938F40(v32, v33, 0, 16, (__int64)&off_141A53FB0);
  }
  else if ( *(char *)(v32 + 16) < -64 )
  {
    goto LABEL_11;
  }
  v28[0] = v32;
  v28[1] = 16;
  v31 = v28;
  v32 = (__int64)sub_140186EE0;
  sub_1416ABFD0(&v35, &unk_141A53500, &v31);
  if ( v38 )
    sub_140001660(v37, v38, 1);
  v37 = *((_QWORD *)&v35 + 1);
  v38 = (_QWORD *)v35;
  v14 = v36;
  sub_141406CE0(&v35);
  v15 = ((int)v35 >> 13) - 1;
  v16 = 0;
  v17 = v30;
  if ( (int)v35 >> 13 <= 0 )
  {
    v18 = (1 - ((int)v35 >> 13)) / 0x190u + 1;
    v15 += 400 * v18;
    v16 = -146097 * v18;
  }
  v19 = DWORD1(v35)
      + 86400LL
      * (int)(((v15 / 100) >> 2) + ((1461 * v15) >> 2) + v16 + (((unsigned int)v35 >> 4) & 0x1FF) - v15 / 100 - 719163);
  v20 = *v29;
  v21 = v29[1];
  v22 = v29[2];
  v23 = *a5;
  v24 = a5[1];
  v25 = a5[2];
  *(_OWORD *)(a1 + 328) = v29[3];
  *(_OWORD *)(a1 + 312) = v22;
  *(_OWORD *)(a1 + 296) = v21;
  *(_OWORD *)(a1 + 280) = v20;
  *(_OWORD *)(a1 + 616) = v25;
  *(_OWORD *)(a1 + 600) = v24;
  *(_OWORD *)(a1 + 584) = v23;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 64) = v17;
  *(_QWORD *)(a1 + 72) = v34;
  *(_QWORD *)(a1 + 80) = v17;
  *(_QWORD *)(a1 + 88) = v38;
  *(_QWORD *)(a1 + 96) = v37;
  *(_QWORD *)(a1 + 104) = v14;
  *(_QWORD *)(a1 + 640) = v19;
  *(_BYTE *)(a1 + 780) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  *(_OWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 160) = -1;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 8;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  *(_OWORD *)(a1 + 688) = 0;
  *(_OWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 368) = (v12 != 0) | v11 | 0xFFFFFFFFFFFFFFFEuLL;
  *(_BYTE *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_BYTE *)(a1 + 512) = 0;
  *(_WORD *)(a1 + 781) = 0;
  *(_OWORD *)(a1 + 440) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  *(_OWORD *)(a1 + 488) = 0;
  *(_BYTE *)(a1 + 552) = -1;
  *(_BYTE *)(a1 + 520) = 5;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 8;
  *(_QWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 344) = -1;
  *(_QWORD *)(a1 + 744) = 0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 760) = 0;
  return a1;
}
