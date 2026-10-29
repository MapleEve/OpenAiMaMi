// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e24770 | name sub_140E24770
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140E24770(__int64 a1, _QWORD *a2)
{
  __m128i *v4; // rax
  __int64 v5; // rcx
  __m128i *v6; // rax
  __int64 v7; // rcx
  __m128i *v8; // rax
  __int64 v9; // rcx
  __m128i *v10; // rax
  __int64 v11; // rcx
  signed __int64 v12; // rbx
  __int64 v13; // r12
  const __m128i *v14; // r15
  __m128i *v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __m128i *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  _WORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  signed __int64 v31; // rbx
  __int64 v32; // r15
  const __m128i *v33; // r14
  __m128i *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  const __m128i *v38; // r14
  unsigned __int64 v39; // rdi
  __int64 v40; // rbx
  _QWORD v41[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v42; // [rsp+48h] [rbp-38h] BYREF
  __int64 v43; // [rsp+58h] [rbp-28h]
  __int64 v44; // [rsp+60h] [rbp-20h]
  __int128 v45; // [rsp+68h] [rbp-18h] BYREF
  __int64 v46; // [rsp+78h] [rbp-8h]
  const __m128i *v47; // [rsp+80h] [rbp+0h]
  char v48[8]; // [rsp+88h] [rbp+8h] BYREF
  __int128 v49; // [rsp+90h] [rbp+10h]
  __int64 v50; // [rsp+A0h] [rbp+20h]
  _WORD *v51; // [rsp+A8h] [rbp+28h]
  __int128 *v52; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v53; // [rsp+B8h] [rbp+38h]
  __int64 v54; // [rsp+C8h] [rbp+48h]
  __int64 v55; // [rsp+D0h] [rbp+50h] BYREF
  const __m128i *v56; // [rsp+D8h] [rbp+58h]
  unsigned __int64 v57; // [rsp+E0h] [rbp+60h]
  char v58; // [rsp+EDh] [rbp+6Dh]
  char v59; // [rsp+EEh] [rbp+6Eh]
  char v60; // [rsp+EFh] [rbp+6Fh]
  __int64 v61; // [rsp+F0h] [rbp+70h]

  v61 = -2;
  if ( *(_BYTE *)(a1 + 476) )
    return;
  *(_BYTE *)(a1 + 476) = 1;
  *(_QWORD *)&v42 = 0;
  v43 = 0;
  nullsub_1(a1);
  v4 = (__m128i *)sub_140001650(4, 1);
  if ( !v4 )
    sub_141938D2B(1, 4);
  v4->m128i_i32[0] = 1701869940;
  v55 = 4;
  v51 = v4;
  v56 = v4;
  v57 = 4;
  nullsub_1(v5);
  v6 = (__m128i *)sub_140001650(16, 1);
  v47 = v6;
  if ( !v6 )
    sub_141938D2B(1, 16);
  *v6 = *(__m128i *)aResponseCreate;
  LOBYTE(v52) = 3;
  *(_QWORD *)&v53 = 16;
  *((_QWORD *)&v53 + 1) = v6;
  v54 = 16;
  sub_140E72AA0(v48, &v42, &v55, &v52);
  if ( v48[0] != -1 )
    sub_140DF44E0(v48);
  nullsub_1(v7);
  v8 = (__m128i *)sub_140001650(8, 1);
  if ( !v8 )
    sub_141938D2B(1, 8);
  v8->m128i_i64[0] = 0x65736E6F70736572LL;
  v41[0] = 8;
  v47 = v8;
  v41[1] = v8;
  v41[2] = 8;
  *(_QWORD *)&v45 = 0;
  v46 = 0;
  nullsub_1(v9);
  v10 = (__m128i *)sub_140001650(2, 1);
  if ( !v10 )
    sub_141938D2B(1, 2);
  v10->m128i_i16[0] = 25705;
  v55 = 2;
  v56 = v10;
  v57 = 2;
  v12 = *(_QWORD *)(a1 + 120);
  v51 = v10;
  if ( v12 < 0 )
  {
    v13 = 0;
    goto LABEL_10;
  }
  if ( v12 )
  {
    v14 = *(const __m128i **)(a1 + 112);
    nullsub_1(v11);
    v13 = 1;
    v15 = (__m128i *)sub_140001650(v12, 1);
    if ( !v15 )
    {
LABEL_10:
      v60 = 1;
      sub_141938D2B(v13, v12);
    }
    v16 = (__int64)v15;
    sub_1418F44E0(v15, v14, v12);
  }
  else
  {
    v16 = 1;
  }
  LOBYTE(v52) = 3;
  *(_QWORD *)&v53 = v12;
  *((_QWORD *)&v53 + 1) = v16;
  v54 = v12;
  v60 = 0;
  sub_140E72AA0(v48, &v45, &v55, &v52);
  if ( v48[0] != -1 )
    sub_140DF44E0(v48);
  nullsub_1(v17);
  v18 = sub_140001650(6, 1);
  if ( !v18 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v18 + 4) = 29795;
  *(_DWORD *)v18 = 1701470831;
  v55 = 6;
  v44 = v18;
  v56 = (const __m128i *)v18;
  v57 = 6;
  nullsub_1(v19);
  v20 = (_QWORD *)sub_140001650(8, 1);
  v51 = v20;
  if ( !v20 )
    sub_141938D2B(1, 8);
  *v20 = 0x65736E6F70736572LL;
  LOBYTE(v52) = 3;
  *(_QWORD *)&v53 = 8;
  *((_QWORD *)&v53 + 1) = v20;
  v54 = 8;
  sub_140E72AA0(v48, &v45, &v55, &v52);
  if ( v48[0] != -1 )
    sub_140DF44E0(v48);
  nullsub_1(v21);
  v22 = (__m128i *)sub_140001650(10, 1);
  if ( !v22 )
    sub_141938D2B(1, 10);
  qmemcpy(v22, "created_at", 10);
  v55 = 10;
  v56 = v22;
  v57 = 10;
  v23 = *(_QWORD *)(a1 + 464);
  LOBYTE(v52) = 2;
  *(_QWORD *)&v53 = v23 >> 63;
  *((_QWORD *)&v53 + 1) = v23;
  sub_140E72AA0(v48, &v45, &v55, &v52);
  if ( v48[0] != -1 )
    sub_140DF44E0(v48);
  nullsub_1(v24);
  v25 = sub_140001650(6, 1);
  if ( !v25 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v25 + 4) = 29557;
  *(_DWORD *)v25 = 1952543859;
  v55 = 6;
  v44 = v25;
  v56 = (const __m128i *)v25;
  v57 = 6;
  nullsub_1(v26);
  v27 = (_WORD *)sub_140001650(11, 1);
  v51 = v27;
  if ( !v27 )
    sub_141938D2B(1, 11);
  qmemcpy(v27, "in_progress", 11);
  LOBYTE(v52) = 3;
  *(_QWORD *)&v53 = 11;
  *((_QWORD *)&v53 + 1) = v27;
  v54 = 11;
  sub_140E72AA0(v48, &v45, &v55, &v52);
  if ( v48[0] != -1 )
    sub_140DF44E0(v48);
  nullsub_1(v28);
  v29 = sub_140001650(5, 1);
  if ( !v29 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v29 + 4) = 108;
  *(_DWORD *)v29 = 1701080941;
  v55 = 5;
  v56 = (const __m128i *)v29;
  v57 = 5;
  v31 = *(_QWORD *)(a1 + 96);
  v51 = (_WORD *)v29;
  if ( v31 < 0 )
  {
    v32 = 0;
    goto LABEL_31;
  }
  if ( v31 )
  {
    v33 = *(const __m128i **)(a1 + 88);
    nullsub_1(v30);
    v32 = 1;
    v34 = (__m128i *)sub_140001650(v31, 1);
    if ( !v34 )
    {
LABEL_31:
      v59 = 1;
      sub_141938D2B(v32, v31);
    }
    v35 = (__int64)v34;
    sub_1418F44E0(v34, v33, v31);
  }
  else
  {
    v35 = 1;
  }
  LOBYTE(v52) = 3;
  *(_QWORD *)&v53 = v31;
  *((_QWORD *)&v53 + 1) = v35;
  v54 = v31;
  v59 = 0;
  sub_140E72AA0(v48, &v45, &v55, &v52);
  if ( v48[0] != -1 )
    sub_140DF44E0(v48);
  nullsub_1(v36);
  v37 = sub_140001650(6, 1);
  if ( !v37 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v37 + 4) = 29813;
  *(_DWORD *)v37 = 1886680431;
  v55 = 6;
  v56 = (const __m128i *)v37;
  v57 = 6;
  *(_QWORD *)&v53 = 0;
  *((_QWORD *)&v53 + 1) = 8;
  v54 = 0;
  LOBYTE(v52) = 4;
  sub_140E72AA0(v48, &v45, &v55, &v52);
  if ( v48[0] != -1 )
    sub_140DF44E0(v48);
  v53 = v45;
  v54 = v46;
  LOBYTE(v52) = 5;
  v58 = 0;
  sub_140E72AA0(v48, &v42, v41, &v52);
  if ( v48[0] != -1 )
    sub_140DF44E0(v48);
  v49 = v42;
  v50 = v43;
  v48[0] = 5;
  *(_QWORD *)&v45 = aResponseCreate;
  *((_QWORD *)&v45 + 1) = 16;
  v41[0] = v48;
  v52 = &v45;
  *(_QWORD *)&v53 = sub_140186EE0;
  *((_QWORD *)&v53 + 1) = v41;
  v54 = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v55, &unk_141A548D8, &v52);
  v38 = v56;
  v39 = v57;
  v40 = a2[2];
  if ( v57 > *a2 - v40 )
  {
    v47 = v56;
    sub_14190D590((_DWORD)a2, v40, v57, 1, 1);
    v40 = a2[2];
    v38 = v47;
    goto LABEL_45;
  }
  if ( v57 )
LABEL_45:
    sub_1418F44E0((__m128i *)(v40 + a2[1]), v38, v39);
  a2[2] = v39 + v40;
  if ( v55 )
    sub_140001660(v38, v55, 1);
  sub_140DF44E0(v48);
}
