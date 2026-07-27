// module: codexmate_lib/core/relay/translator
// addr: 0x1409a8410
// name: sub_1409A8410
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1409A8410(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rcx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _WORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  void *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  _WORD *v38; // r14
  unsigned __int64 v39; // rdi
  __int64 v40; // rbx
  _QWORD v41[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v42; // [rsp+48h] [rbp-38h] BYREF
  __int64 v43; // [rsp+58h] [rbp-28h]
  __int128 v44; // [rsp+60h] [rbp-20h] BYREF
  __int64 v45; // [rsp+70h] [rbp-10h]
  char v46[8]; // [rsp+78h] [rbp-8h] BYREF
  __int128 v47; // [rsp+80h] [rbp+0h]
  __int64 v48; // [rsp+90h] [rbp+10h]
  _QWORD *v49; // [rsp+98h] [rbp+18h]
  __int128 *v50; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v51; // [rsp+A8h] [rbp+28h]
  __int64 v52; // [rsp+B8h] [rbp+38h]
  __int64 v53; // [rsp+C0h] [rbp+40h] BYREF
  _WORD *v54; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v55; // [rsp+D0h] [rbp+50h]
  char v56; // [rsp+DDh] [rbp+5Dh]
  char v57; // [rsp+DEh] [rbp+5Eh]
  char v58; // [rsp+DFh] [rbp+5Fh]
  __int64 v59; // [rsp+E0h] [rbp+60h]

  v59 = -2;
  if ( *(_BYTE *)(a1 + 428) )
    return;
  *(_BYTE *)(a1 + 428) = 1;
  *(_QWORD *)&v42 = 0;
  v43 = 0;
  nullsub_1(a1);
  v4 = (_DWORD *)sub_140001650(4, 1);
  if ( !v4 )
    sub_1416C2D4B(1, 4);
  *v4 = 1701869940;
  v53 = 4;
  v54 = v4;
  v55 = 4;
  nullsub_1(v5);
  v6 = (_OWORD *)sub_140001650(16, 1);
  v49 = v6;
  if ( !v6 )
    sub_1416C2D4B(1, 16);
  *v6 = *(_OWORD *)aResponseCreate;
  LOBYTE(v50) = 3;
  *(_QWORD *)&v51 = 16;
  *((_QWORD *)&v51 + 1) = v6;
  v52 = 16;
  sub_140307860(v46, &v42, &v53, &v50);
  if ( v46[0] != -1 )
    sub_1400104F0(v46);
  nullsub_1(v7);
  v8 = (_QWORD *)sub_140001650(8, 1);
  if ( !v8 )
    sub_1416C2D4B(1, 8);
  *v8 = 0x65736E6F70736572LL;
  v41[0] = 8;
  v41[1] = v8;
  v41[2] = 8;
  *(_QWORD *)&v44 = 0;
  v45 = 0;
  nullsub_1(v9);
  v10 = (_WORD *)sub_140001650(2, 1);
  if ( !v10 )
    sub_1416C2D4B(1, 2);
  *v10 = 25705;
  v53 = 2;
  v54 = v10;
  v55 = 2;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 < 0 )
  {
    v13 = 0;
    goto LABEL_10;
  }
  if ( v12 )
  {
    v14 = *(_QWORD *)(a1 + 48);
    nullsub_1(v11);
    v13 = 1;
    v15 = sub_140001650(v12, 1);
    if ( !v15 )
    {
LABEL_10:
      v58 = 1;
      sub_1416C2D4B(v13, v12);
    }
    v16 = v15;
    sub_141684120(v15, v14, v12);
  }
  else
  {
    v16 = 1;
  }
  LOBYTE(v50) = 3;
  *(_QWORD *)&v51 = v12;
  *((_QWORD *)&v51 + 1) = v16;
  v52 = v12;
  v58 = 0;
  sub_140307860(v46, &v44, &v53, &v50);
  if ( v46[0] != -1 )
    sub_1400104F0(v46);
  nullsub_1(v17);
  v18 = sub_140001650(6, 1);
  if ( !v18 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v18 + 4) = 29795;
  *(_DWORD *)v18 = 1701470831;
  v53 = 6;
  v54 = (_WORD *)v18;
  v55 = 6;
  nullsub_1(v19);
  v20 = (_QWORD *)sub_140001650(8, 1);
  v49 = v20;
  if ( !v20 )
    sub_1416C2D4B(1, 8);
  *v20 = 0x65736E6F70736572LL;
  LOBYTE(v50) = 3;
  *(_QWORD *)&v51 = 8;
  *((_QWORD *)&v51 + 1) = v20;
  v52 = 8;
  sub_140307860(v46, &v44, &v53, &v50);
  if ( v46[0] != -1 )
    sub_1400104F0(v46);
  nullsub_1(v21);
  v22 = (void *)sub_140001650(10, 1);
  if ( !v22 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v22, "created_at", 10);
  v53 = 10;
  v54 = v22;
  v55 = 10;
  v23 = *(_QWORD *)(a1 + 400);
  LOBYTE(v50) = 2;
  *(_QWORD *)&v51 = v23 >> 63;
  *((_QWORD *)&v51 + 1) = v23;
  sub_140307860(v46, &v44, &v53, &v50);
  if ( v46[0] != -1 )
    sub_1400104F0(v46);
  nullsub_1(v24);
  v25 = sub_140001650(6, 1);
  if ( !v25 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v25 + 4) = 29557;
  *(_DWORD *)v25 = 1952543859;
  v53 = 6;
  v54 = (_WORD *)v25;
  v55 = 6;
  nullsub_1(v26);
  v27 = (_QWORD *)sub_140001650(11, 1);
  v49 = v27;
  if ( !v27 )
    sub_1416C2D4B(1, 11);
  qmemcpy(v27, "in_progress", 11);
  LOBYTE(v50) = 3;
  *(_QWORD *)&v51 = 11;
  *((_QWORD *)&v51 + 1) = v27;
  v52 = 11;
  sub_140307860(v46, &v44, &v53, &v50);
  if ( v46[0] != -1 )
    sub_1400104F0(v46);
  nullsub_1(v28);
  v29 = sub_140001650(5, 1);
  if ( !v29 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v29 + 4) = 108;
  *(_DWORD *)v29 = 1701080941;
  v53 = 5;
  v54 = (_WORD *)v29;
  v55 = 5;
  v31 = *(_QWORD *)(a1 + 32);
  if ( v31 < 0 )
  {
    v32 = 0;
    goto LABEL_31;
  }
  if ( v31 )
  {
    v33 = *(_QWORD *)(a1 + 24);
    nullsub_1(v30);
    v32 = 1;
    v34 = sub_140001650(v31, 1);
    if ( !v34 )
    {
LABEL_31:
      v57 = 1;
      sub_1416C2D4B(v32, v31);
    }
    v35 = v34;
    sub_141684120(v34, v33, v31);
  }
  else
  {
    v35 = 1;
  }
  LOBYTE(v50) = 3;
  *(_QWORD *)&v51 = v31;
  *((_QWORD *)&v51 + 1) = v35;
  v52 = v31;
  v57 = 0;
  sub_140307860(v46, &v44, &v53, &v50);
  if ( v46[0] != -1 )
    sub_1400104F0(v46);
  nullsub_1(v36);
  v37 = sub_140001650(6, 1);
  if ( !v37 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v37 + 4) = 29813;
  *(_DWORD *)v37 = 1886680431;
  v53 = 6;
  v54 = (_WORD *)v37;
  v55 = 6;
  *(_QWORD *)&v51 = 0;
  *((_QWORD *)&v51 + 1) = 8;
  v52 = 0;
  LOBYTE(v50) = 4;
  sub_140307860(v46, &v44, &v53, &v50);
  if ( v46[0] != -1 )
    sub_1400104F0(v46);
  v51 = v44;
  v52 = v45;
  LOBYTE(v50) = 5;
  v56 = 0;
  sub_140307860(v46, &v42, v41, &v50);
  if ( v46[0] != -1 )
    sub_1400104F0(v46);
  v47 = v42;
  v48 = v43;
  v46[0] = 5;
  *(_QWORD *)&v44 = aResponseCreate;
  *((_QWORD *)&v44 + 1) = 16;
  v41[0] = v46;
  v50 = &v44;
  *(_QWORD *)&v51 = sub_14041F680;
  *((_QWORD *)&v51 + 1) = v41;
  v52 = (__int64)sub_140B982E0;
  sub_14149C0F0(&v53, &unk_1417A94D0, &v50);
  v38 = v54;
  v39 = v55;
  v40 = a2[2];
  if ( v55 > *a2 - v40 )
  {
    v49 = v54;
    sub_141688D30((_DWORD)a2, v40, v55, 1, 1);
    v40 = a2[2];
    v38 = v49;
    goto LABEL_45;
  }
  if ( v55 )
LABEL_45:
    sub_141684120(v40 + a2[1], v38, v39);
  a2[2] = v39 + v40;
  if ( v53 )
    sub_140001660(v38, v53, 1);
  sub_1400104F0(v46);
}