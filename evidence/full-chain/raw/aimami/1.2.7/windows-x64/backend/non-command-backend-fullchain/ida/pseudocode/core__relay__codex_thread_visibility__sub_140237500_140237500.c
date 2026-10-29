// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140237500 | name sub_140237500
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_140237500(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, unsigned __int64, __int64 *); // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  bool v10; // di
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  bool v13; // si
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  const __m128i *v16; // r15
  __int64 v17; // r13
  __m128i *v18; // rax
  __int64 v19; // r13
  __m128i v20; // xmm0
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rdx
  _QWORD v28[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h]
  __m128i v30; // [rsp+40h] [rbp-40h] BYREF
  __m128i v31; // [rsp+50h] [rbp-30h]
  const char *v32; // [rsp+60h] [rbp-20h]
  __int64 v33; // [rsp+68h] [rbp-18h]
  __int64 v34; // [rsp+70h] [rbp-10h]
  const char *v35; // [rsp+78h] [rbp-8h]
  __int64 v36; // [rsp+80h] [rbp+0h]
  __int64 v37; // [rsp+88h] [rbp+8h]
  void *v38; // [rsp+90h] [rbp+10h]
  __m128i *v39; // [rsp+98h] [rbp+18h]
  __m128i v40[2]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v41; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v43; // [rsp+D0h] [rbp+50h]
  __int64 v44; // [rsp+D8h] [rbp+58h]
  _QWORD *v45; // [rsp+E0h] [rbp+60h]
  __int64 v46; // [rsp+E8h] [rbp+68h]
  __int64 i; // [rsp+F0h] [rbp+70h]
  unsigned __int64 v48; // [rsp+F8h] [rbp+78h]
  char v49; // [rsp+107h] [rbp+87h] BYREF
  __int64 (__fastcall *v50)(__int64, unsigned __int64, __int64 *); // [rsp+108h] [rbp+88h]
  char v51; // [rsp+117h] [rbp+97h]
  __int64 v52; // [rsp+118h] [rbp+98h]

  v52 = -2;
  v3 = a2;
  v45 = a1;
  v29 = a3;
  sub_140281F40(&v30, a2, a3);
  v5 = v30.m128i_i64[1];
  v44 = v30.m128i_i64[0];
  if ( !v30.m128i_i64[0] )
  {
    v22 = v45;
    *v45 = 2;
    v22[1] = v5;
    return v45;
  }
  v41 = 0;
  v42 = 1;
  v46 = v30.m128i_i64[1];
  v6 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *))(v30.m128i_i64[1] + 112);
  for ( i = 0; ; i += v9 )
  {
    v43 = 0;
    LOBYTE(v4) = 10;
    v7 = v6(v44, v4, &v41);
    v9 = v8;
    if ( v7 == 1 )
    {
      v24 = v45;
      *v45 = 2;
      v24[1] = v8;
      goto LABEL_38;
    }
    if ( !v8 )
    {
      *(_OWORD *)v45 = -1;
      goto LABEL_38;
    }
    v10 = v43 != 0;
    if ( !v43 || (v11 = v43, *(_BYTE *)(v42 + v43 - 1) == 10) && (v11 = v43 - 1, v43 == 1) )
    {
      v12 = 0;
      v13 = 0;
    }
    else
    {
      v12 = v11 - 1;
      if ( v11 - 1 >= v43 )
        sub_1419390C3(v12, v43, &off_1419DE858);
      v13 = *(_BYTE *)(v42 + v11 - 1) == 13;
      if ( *(_BYTE *)(v42 + v11 - 1) != 13 )
        v12 = v11;
      if ( v12 > v43 )
        sub_1419392D0(0, v12, v43, &off_1419DE8B0);
      v10 = *(_BYTE *)(v42 + v43 - 1) == 10;
    }
    sub_1416B3AE0(&v30, v42, v12);
    if ( v30.m128i_i8[0] )
    {
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v28[0] = v3;
        v28[1] = v29;
        v40[0].m128i_i64[0] = (__int64)v28;
        v40[0].m128i_i64[1] = (__int64)sub_14169F630;
        v34 = 2;
        v35 = aCodexmateLibCo_0;
        v36 = 51;
        v38 = &unk_1419DE870;
        v39 = v40;
        v30.m128i_i64[0] = 0;
        v30.m128i_i64[1] = (__int64)aCodexmateLibCo_0;
        v31 = (__m128i)0x33uLL;
        v32 = aSrcCoreRelayCo_0;
        v33 = 41;
        v37 = 0x118B00000001LL;
        sub_1414D53A0(&v49, &v30);
      }
      continue;
    }
    v15 = v31.m128i_i64[0];
    if ( v31.m128i_i64[0] < 0 )
    {
      v17 = 0;
      goto LABEL_33;
    }
    if ( v31.m128i_i64[0] )
    {
      v50 = v6;
      v48 = v3;
      v16 = (const __m128i *)v30.m128i_i64[1];
      nullsub_1(v14);
      v17 = 1;
      v18 = (__m128i *)sub_140001650(v15, 1);
      if ( v18 )
      {
        v19 = (__int64)v18;
        sub_1418F44E0(v18, v16, v15);
        v3 = v48;
        v6 = v50;
        goto LABEL_23;
      }
      v50 = (__int64 (__fastcall *)(__int64, unsigned __int64, __int64 *))v15;
LABEL_33:
      sub_141938D2B(v17, v50);
    }
    v19 = 1;
LABEL_23:
    v30.m128i_i64[0] = v19;
    v30.m128i_i64[1] = v15;
    v31 = 0;
    v50 = (__int64 (__fastcall *)(__int64, unsigned __int64, __int64 *))v19;
    v32 = (const char *)v19;
    v48 = v15;
    v33 = v15;
    v51 = 1;
    sub_14062D280(v40, &v30);
    if ( v40[0].m128i_i8[0] != -1 )
      break;
    v51 = 1;
    sub_14002F910(&v40[0].m128i_u64[1]);
LABEL_30:
    v4 = v48;
    if ( v48 )
      sub_140001660(v50, v48, 1);
  }
  v20 = _mm_loadu_si128(v40);
  v31 = v40[1];
  v30 = v20;
  v21 = sub_1416419F0(aType_3, 4, &v30);
  if ( !v21
    || *(_BYTE *)v21 != 3
    || *(_QWORD *)(v21 + 24) != 12
    || **(_QWORD **)(v21 + 16) ^ 0x5F6E6F6973736573LL | *(unsigned int *)(*(_QWORD *)(v21 + 16) + 8LL) ^ 0x6174656DLL )
  {
    v51 = 1;
    sub_14002F9D0(v40);
    goto LABEL_30;
  }
  v26 = v48;
  v27 = v45;
  v45[1] = v48;
  v27[2] = v50;
  v27[3] = v26;
  v27[4] = i;
  v27[5] = v9;
  *((_BYTE *)v27 + 48) = v10;
  *((_BYTE *)v27 + 49) = v13;
  *v27 = -1;
  v51 = 0;
  sub_14002F9D0(v40);
LABEL_38:
  if ( v41 )
    sub_140001660(v42, v41, 1);
  if ( *(_QWORD *)v46 )
    (*(void (__fastcall **)(__int64))v46)(v44);
  v25 = *(_QWORD *)(v46 + 8);
  if ( v25 )
    sub_140001660(v44, v25, *(_QWORD *)(v46 + 16));
  return v45;
}
