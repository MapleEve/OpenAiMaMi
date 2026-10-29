// win 1.2.7 | module src/core/sessions/health.rs | ea 0x1401b5f40 | name sub_1401B5F40
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401B5F40(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rax
  __int128 v8; // xmm0
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  const __m128i *v11; // r15
  __m128i *v12; // rax
  char v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r14
  __int128 v23; // xmm0
  __int64 v24; // r12
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm6
  __int64 v30; // rdx
  __int128 v31; // xmm0
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r14
  _QWORD *v34; // r12
  __int64 v35; // rdx
  __int64 v37; // rdx
  __int64 v38; // [rsp+30h] [rbp-50h] BYREF
  __int64 v39; // [rsp+38h] [rbp-48h]
  __int64 v40; // [rsp+40h] [rbp-40h]
  __int128 v41; // [rsp+50h] [rbp-30h] BYREF
  __int128 v42; // [rsp+60h] [rbp-20h]
  __int64 v43; // [rsp+70h] [rbp-10h]
  __int64 v44; // [rsp+78h] [rbp-8h]
  __int128 v45; // [rsp+80h] [rbp+0h] BYREF
  __int128 v46; // [rsp+90h] [rbp+10h]
  __int64 v47; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v48; // [rsp+A8h] [rbp+28h]
  __int64 v49; // [rsp+B0h] [rbp+30h]
  __int64 v50; // [rsp+B8h] [rbp+38h]
  __int64 v51; // [rsp+C0h] [rbp+40h]
  __int64 v52; // [rsp+C8h] [rbp+48h]

  v52 = -2;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  sub_1416828D0((unsigned int)&v45, v3, v4, (unsigned int)aSqlitecodexDev, 6);
  v51 = *((_QWORD *)&v45 + 1);
  sub_1416828D0((unsigned int)&v41, DWORD2(v45), v46, (unsigned int)&aSqlitecodexDev[6], 12);
  if ( (_QWORD)v45 )
    sub_140001660(v51, v45, 1);
  v47 = 0;
  v48 = 8;
  v49 = 0;
  sub_1401B79C0((__int64)&v38, v3, v4);
  if ( v38 != -1 )
  {
    v51 = v38;
    v50 = v39;
    sub_1416828D0((unsigned int)&v45, v39, v40, (unsigned int)&aSqlitecodexDev[6], 12);
    v6 = v49;
    if ( v49 == v47 )
      sub_14190F570(&v47);
    v7 = v48;
    v5 = 32 * v6;
    v8 = v45;
    *(_OWORD *)(v48 + v5 + 16) = v46;
    *(_OWORD *)(v7 + v5) = v8;
    v49 = v6 + 1;
    if ( v51 )
      sub_140001660(v50, v51, 1);
  }
  v9 = v42;
  if ( (__int64)v42 < 0 )
  {
    v10 = 0;
    goto LABEL_10;
  }
  v11 = *((const __m128i **)&v41 + 1);
  v43 = *((_QWORD *)&v41 + 1);
  v51 = v42;
  if ( (_QWORD)v42 )
  {
    nullsub_1(v5);
    v10 = 1;
    v12 = (__m128i *)sub_140001650(v9, 1);
    if ( !v12 )
LABEL_10:
      sub_141938D2B(v10, v9);
    v50 = (__int64)v12;
    sub_1418F44E0(v12, v11, v9);
    v13 = BYTE8(v42);
    v14 = v49;
    if ( v49 != v47 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v50 = 1;
  v13 = BYTE8(v42);
  v14 = v49;
  if ( v49 == v47 )
LABEL_16:
    sub_14190F570(&v47);
LABEL_17:
  v15 = v48;
  v16 = 32 * v14;
  v17 = v51;
  *(_QWORD *)(v48 + v16) = v51;
  *(_QWORD *)(v15 + v16 + 8) = v50;
  *(_QWORD *)(v15 + v16 + 16) = v17;
  *(_BYTE *)(v15 + v16 + 24) = v13;
  v49 = v14 + 1;
  sub_1416828D0((unsigned int)&v45, v3, v4, (unsigned int)&aSqlitecodexDev[6], 12);
  v18 = v47;
  v19 = v49;
  if ( v49 == v47 )
  {
    sub_14190F570(&v47);
    v18 = v47;
  }
  v20 = v48;
  v21 = 32 * v19;
  v22 = v48 + 32 * (v19 + 1);
  v23 = v45;
  *(_OWORD *)(v48 + v21 + 16) = v46;
  *(_OWORD *)(v20 + v21) = v23;
  *(_QWORD *)&v45 = v20;
  *(_QWORD *)&v46 = v18;
  *((_QWORD *)&v45 + 1) = v20;
  *((_QWORD *)&v46 + 1) = v22;
  v24 = v20;
  v49 = v19 + 1;
  if ( v19 == -1 )
  {
LABEL_27:
    v31 = v41;
    *(_OWORD *)(a1 + 16) = v42;
    *(_OWORD *)a1 = v31;
    goto LABEL_28;
  }
  v25 = v20 + 32;
  while ( 1 )
  {
    v51 = *(_QWORD *)(v25 - 32);
    v28 = *(_QWORD *)(v25 - 24);
    v29 = *(_OWORD *)(v25 - 16);
    v50 = v25;
    v30 = *(_QWORD *)(v25 - 16);
    v44 = v28;
    if ( !(unsigned __int8)sub_141682B30(v28, v30) )
    {
      v24 = v50;
      if ( v51 )
        sub_140001660(v44, v51, 1);
      goto LABEL_22;
    }
    v26 = v51;
    v24 = v50;
    if ( v51 != -1 )
      break;
LABEL_22:
    v27 = v24 - 32;
    v25 = v24 + 32;
    if ( v27 + 32 == v22 )
    {
      *((_QWORD *)&v45 + 1) = v22;
      v24 = v22;
      goto LABEL_27;
    }
  }
  *((_QWORD *)&v45 + 1) = v50;
  *(_QWORD *)(a1 + 8) = v44;
  *(_OWORD *)(a1 + 16) = v29;
  v37 = v41;
  *(_QWORD *)a1 = v26;
  if ( v37 )
    sub_140001660(v43, v37, 1);
LABEL_28:
  v32 = v22 - v24;
  if ( v32 )
  {
    v33 = v32 >> 5;
    v34 = (_QWORD *)(v24 + 8);
    do
    {
      v35 = *(v34 - 1);
      if ( v35 )
        sub_140001660(*v34, v35, 1);
      v34 += 4;
      --v33;
    }
    while ( v33 );
  }
  if ( v18 )
    sub_140001660(v20, 32 * v18, 8);
  return a1;
}
