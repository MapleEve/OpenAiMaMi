// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e4ef10 | name sub_140E4EF10
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E4EF10(int a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __m128i *v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  int v18; // edi
  signed __int64 v19; // r15
  __int64 v20; // r13
  const __m128i *v21; // r12
  __m128i *v22; // rax
  __int64 v23; // r14
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  const __m128i *v29; // r14
  __m128i *v30; // rax
  __m128i *v31; // r15
  const __m128i *v32; // r14
  unsigned __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  const __m128i *v36; // [rsp+38h] [rbp-48h]
  unsigned __int64 v37; // [rsp+40h] [rbp-40h]
  __int128 v38; // [rsp+48h] [rbp-38h] BYREF
  __int64 v39; // [rsp+58h] [rbp-28h]
  _DWORD *v40; // [rsp+60h] [rbp-20h]
  __int64 v41; // [rsp+68h] [rbp-18h] BYREF
  const __m128i *v42; // [rsp+70h] [rbp-10h]
  unsigned __int64 v43; // [rsp+78h] [rbp-8h]
  __int64 v44; // [rsp+88h] [rbp+8h] BYREF
  _DWORD *v45; // [rsp+90h] [rbp+10h]
  __int64 v46; // [rsp+98h] [rbp+18h]
  char v47[8]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v48; // [rsp+A8h] [rbp+28h]
  __int64 v49; // [rsp+B8h] [rbp+38h]
  __m128i *v50; // [rsp+C0h] [rbp+40h]
  char v51; // [rsp+CFh] [rbp+4Fh]
  __int64 v52; // [rsp+D0h] [rbp+50h]

  v52 = -2;
  result = sub_1402B64C0(&v35, a2 + 24);
  v8 = v37;
  if ( !v37 )
    goto LABEL_32;
  *(_QWORD *)&v38 = 0;
  v39 = 0;
  nullsub_1(v7);
  v9 = (_DWORD *)sub_140001650(4, 1);
  if ( !v9 )
    sub_141938D2B(1, 4);
  *v9 = 1701869940;
  v44 = 4;
  v40 = v9;
  v45 = v9;
  v46 = 4;
  nullsub_1(v10);
  v11 = (__m128i *)sub_140001650(26, 1);
  v50 = v11;
  if ( !v11 )
    sub_141938D2B(1, 26);
  qmemcpy(v11, "response.output_text.delta", 26);
  v47[0] = 3;
  *(_QWORD *)&v48 = 26;
  *((_QWORD *)&v48 + 1) = v11;
  v49 = 26;
  sub_140E72AA0(&v41, &v38, &v44, v47);
  if ( (_BYTE)v41 != 0xFF )
    sub_140DF44E0(&v41);
  nullsub_1(v12);
  v13 = (void *)sub_140001650(12, 1);
  if ( !v13 )
    sub_141938D2B(1, 12);
  qmemcpy(v13, "output_index", 12);
  v44 = 12;
  v45 = v13;
  v46 = 12;
  v14 = *(unsigned int *)(a2 + 112);
  v47[0] = 2;
  *(_QWORD *)&v48 = 0;
  *((_QWORD *)&v48 + 1) = v14;
  sub_140E72AA0(&v41, &v38, &v44, v47);
  if ( (_BYTE)v41 != 0xFF )
    sub_140DF44E0(&v41);
  nullsub_1(v15);
  v16 = (_DWORD *)sub_140001650(7, 1);
  if ( !v16 )
    sub_141938D2B(1, 7);
  v18 = a1 + 768;
  *(_DWORD *)((char *)v16 + 3) = 1684627309;
  *v16 = 1835365481;
  v44 = 7;
  v45 = v16;
  v46 = 7;
  v19 = *(_QWORD *)(a2 + 16);
  v50 = (__m128i *)v16;
  if ( v19 < 0 )
  {
    v20 = 0;
    goto LABEL_12;
  }
  if ( v19 )
  {
    v21 = *(const __m128i **)(a2 + 8);
    nullsub_1(v17);
    v20 = 1;
    v22 = (__m128i *)sub_140001650(v19, 1);
    if ( !v22 )
    {
LABEL_12:
      v51 = 1;
      sub_141938D2B(v20, v19);
    }
    v23 = (__int64)v22;
    sub_1418F44E0(v22, v21, v19);
  }
  else
  {
    v23 = 1;
  }
  v47[0] = 3;
  *(_QWORD *)&v48 = v19;
  *((_QWORD *)&v48 + 1) = v23;
  v49 = v19;
  v51 = 0;
  sub_140E72AA0(&v41, &v38, &v44, v47);
  if ( (_BYTE)v41 != 0xFF )
    sub_140DF44E0(&v41);
  nullsub_1(v24);
  v25 = (void *)sub_140001650(13, 1);
  if ( !v25 )
    sub_141938D2B(1, 13);
  qmemcpy(v25, "content_index", 13);
  v44 = 13;
  v45 = v25;
  v46 = 13;
  v47[0] = 2;
  v48 = 0;
  sub_140E72AA0(&v41, &v38, &v44, v47);
  if ( (_BYTE)v41 != 0xFF )
    sub_140DF44E0(&v41);
  nullsub_1(v26);
  v27 = sub_140001650(5, 1);
  if ( !v27 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v27 + 4) = 97;
  *(_DWORD *)v27 = 1953260900;
  v44 = 5;
  v40 = (_DWORD *)v27;
  v45 = (_DWORD *)v27;
  v46 = 5;
  v29 = v36;
  nullsub_1(v28);
  v30 = (__m128i *)sub_140001650(v8, 1);
  v50 = v30;
  if ( !v30 )
    sub_141938D2B(1, v8);
  v31 = v30;
  sub_1418F44E0(v30, v29, v8);
  v47[0] = 3;
  *(_QWORD *)&v48 = v8;
  *((_QWORD *)&v48 + 1) = v31;
  v49 = v8;
  sub_140E72AA0(&v41, &v38, &v44, v47);
  if ( (_BYTE)v41 != 0xFF )
    sub_140DF44E0(&v41);
  v48 = v38;
  v49 = v39;
  v47[0] = 5;
  sub_140E4D190((unsigned int)&v41, v18, (unsigned int)&xmmword_141A53730, 26, (__int64)v47);
  v32 = v42;
  v33 = v43;
  v34 = a3[2];
  if ( v43 > *a3 - v34 )
  {
    v50 = (__m128i *)v42;
    sub_14190D590((_DWORD)a3, v34, v43, 1, 1);
    v34 = a3[2];
    v32 = v50;
    goto LABEL_28;
  }
  if ( v43 )
LABEL_28:
    sub_1418F44E0((__m128i *)(v34 + a3[1]), v32, v33);
  a3[2] = v33 + v34;
  if ( v41 )
    sub_140001660(v32, v41, 1);
  result = sub_140DF44E0(v47);
LABEL_32:
  if ( v35 )
    return sub_140001660(v36, v35, 1);
  return result;
}
