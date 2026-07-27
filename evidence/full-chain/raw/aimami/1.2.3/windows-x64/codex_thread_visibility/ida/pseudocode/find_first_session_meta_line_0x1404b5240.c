// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall find_first_session_meta_line(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rcx
  char *v9; // rsi
  _QWORD *v10; // rax
  __int64 v12; // rax
  char *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r9d
  __int64 v17; // r13
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  _QWORD *v30; // rax
  char *v31; // rcx
  _QWORD *v32; // rdx
  _QWORD v33[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v34; // [rsp+38h] [rbp-48h] BYREF
  __int64 v35; // [rsp+40h] [rbp-40h]
  __int128 v36; // [rsp+48h] [rbp-38h]
  char v37; // [rsp+58h] [rbp-28h]
  HANDLE hObject; // [rsp+60h] [rbp-20h]
  __int64 v39; // [rsp+68h] [rbp-18h]
  __m128i v40[2]; // [rsp+70h] [rbp-10h] BYREF
  __m128i v41; // [rsp+90h] [rbp+10h] BYREF
  _BYTE v42[24]; // [rsp+A0h] [rbp+20h]
  __int64 v43; // [rsp+B8h] [rbp+38h]
  __int64 v44; // [rsp+C0h] [rbp+40h]
  const char *v45; // [rsp+C8h] [rbp+48h]
  __int64 v46; // [rsp+D0h] [rbp+50h]
  __int64 v47; // [rsp+D8h] [rbp+58h]
  void *v48; // [rsp+E0h] [rbp+60h]
  __m128i *v49; // [rsp+E8h] [rbp+68h]
  __int64 v50; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v51; // [rsp+F8h] [rbp+78h]
  unsigned __int64 v52; // [rsp+100h] [rbp+80h]
  char *v53; // [rsp+108h] [rbp+88h]
  _QWORD *v54; // [rsp+110h] [rbp+90h]
  __int64 v55; // [rsp+118h] [rbp+98h]
  char v56; // [rsp+127h] [rbp+A7h] BYREF
  char *i; // [rsp+128h] [rbp+A8h]
  char v58; // [rsp+137h] [rbp+B7h]
  __int64 v59; // [rsp+138h] [rbp+B8h]

  v59 = -2; /*0x1404b5262*/
  v4 = a3; /*0x1404b526d*/
  v5 = a2; /*0x1404b5270*/
  v54 = a1; /*0x1404b5273*/
  v41.m128i_i32[0] = 0; /*0x1404b527a*/
  v41.m128i_i64[1] = 0; /*0x1404b5281*/
  *(_DWORD *)v42 = 7; /*0x1404b5289*/
  *(_QWORD *)&v42[4] = 0x100000000LL; /*0x1404b5290*/
  *(_QWORD *)&v42[9] = 0; /*0x1404b5298*/
  v6 = sub_141481480(&v41, a2, a3); /*0x1404b52a8*/
  v9 = v7; /*0x1404b52ad*/
  if ( v6 == 1 ) /*0x1404b52b4*/
  {
    v10 = v54; /*0x1404b52b6*/
    *v54 = 2; /*0x1404b52bd*/
    v10[1] = v7; /*0x1404b52c4*/
    return v54; /*0x1404b52c4*/
  }
  nullsub_1(v8); /*0x1404b52ea*/
  v12 = sub_140001650(0x2000, 1); /*0x1404b52f9*/
  if ( !v12 ) /*0x1404b5301*/
  {
    i = v9; /*0x1404b5710*/
    sub_1416C2D4B(1, 0x2000); /*0x1404b5721*/
  }
  v34 = v12; /*0x1404b5307*/
  v35 = 0x2000; /*0x1404b530b*/
  v36 = 0; /*0x1404b5316*/
  v37 = 0; /*0x1404b531a*/
  hObject = v9; /*0x1404b531e*/
  v50 = 0; /*0x1404b5322*/
  v51 = 1; /*0x1404b532a*/
  for ( i = nullptr; ; i += v17 ) /*0x1404b533a*/
  {
    v52 = 0; /*0x1404b5361*/
    LOBYTE(v13) = 10; /*0x1404b536f*/
    v14 = sub_140351290(&v34, v13, &v50); /*0x1404b5374*/
    v17 = v15; /*0x1404b537a*/
    if ( v14 == 1 ) /*0x1404b5381*/
    {
      v30 = v54; /*0x1404b562b*/
      *v54 = 2; /*0x1404b5632*/
      v30[1] = v15; /*0x1404b5639*/
      goto LABEL_41; /*0x1404b563d*/
    }
    if ( !v15 ) /*0x1404b538a*/
    {
      *(_OWORD *)v54 = -1; /*0x1404b564a*/
      goto LABEL_41; /*0x1404b564a*/
    }
    LOBYTE(v9) = v52 != 0; /*0x1404b539e*/
    if ( !v52 ) /*0x1404b53a2*/
    {
LABEL_13:
      v3 = 0; /*0x1404b53c0*/
      v18 = 0; /*0x1404b53c2*/
      goto LABEL_20; /*0x1404b53c5*/
    }
    v18 = v52 - 1; /*0x1404b53a4*/
    if ( *(_BYTE *)(v51 + v52 - 1) == 10 ) /*0x1404b53b1*/
    {
      if ( v52 == 1 ) /*0x1404b53b6*/
        goto LABEL_13; /*0x1404b53b6*/
      v19 = v52 - 2; /*0x1404b53b8*/
    }
    else
    {
      v19 = v52 - 1; /*0x1404b53d0*/
      v18 = v52; /*0x1404b53d3*/
    }
    if ( v19 >= v52 ) /*0x1404b53d9*/
      sub_1416C30E3(v19, v52, &off_14175BCF0); /*0x1404b5708*/
    LOBYTE(v3) = *(_BYTE *)(v51 + v19) == 13; /*0x1404b53e3*/
    if ( *(_BYTE *)(v51 + v19) == 13 ) /*0x1404b53e6*/
      v18 = v19; /*0x1404b53e6*/
    if ( v18 > v52 ) /*0x1404b53ed*/
      sub_1416C32F0(0, v18, v52, &off_14175BD48); /*0x1404b569c*/
    LOBYTE(v16) = *(_BYTE *)(v51 + v52 - 1) == 10; /*0x1404b53ad*/
    LODWORD(v9) = v16; /*0x1404b53f3*/
LABEL_20:
    sub_1414A3C90(&v41, v51, v18); /*0x1404b53f6*/
    if ( v41.m128i_i8[0] ) /*0x1404b5404*/
    {
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404b5418*/
      {
        v33[0] = v5; /*0x1404b541e*/
        v33[1] = v4; /*0x1404b5422*/
        v40[0].m128i_i64[0] = (__int64)v33; /*0x1404b542a*/
        v40[0].m128i_i64[1] = (__int64)sub_14148F3A0; /*0x1404b5435*/
        v41.m128i_i64[0] = 0; /*0x1404b5439*/
        v41.m128i_i64[1] = (__int64)aCodexmateLibCo_0; /*0x1404b5448*/
        *(_OWORD *)v42 = 0x33u; /*0x1404b544c*/
        *(_QWORD *)&v42[16] = aSrcCoreRelayCo_0; /*0x1404b5463*/
        v43 = 41; /*0x1404b5467*/
        v44 = 2; /*0x1404b546f*/
        v45 = aCodexmateLibCo_0; /*0x1404b5477*/
        v46 = 51; /*0x1404b547b*/
        v47 = 0xC4D00000001LL; /*0x1404b548d*/
        v48 = &unk_14175BD08; /*0x1404b5498*/
        v49 = v40; /*0x1404b54a0*/
        sub_1412C36A0(&v56, &v41); /*0x1404b54af*/
      }
      continue; /*0x1404b54b5*/
    }
    v39 = v3; /*0x1404b54c0*/
    v3 = (unsigned int)v9; /*0x1404b54c4*/
    v9 = *(char **)v42; /*0x1404b54c6*/
    if ( *(__int64 *)v42 < 0 ) /*0x1404b54cd*/
    {
      v24 = 0; /*0x1404b5613*/
      goto LABEL_38; /*0x1404b5613*/
    }
    if ( *(_QWORD *)v42 ) /*0x1404b54d3*/
    {
      v21 = v5; /*0x1404b54d5*/
      v22 = v4; /*0x1404b54d8*/
      v23 = v41.m128i_i64[1]; /*0x1404b54db*/
      nullsub_1(v20); /*0x1404b54df*/
      v24 = 1; /*0x1404b54e4*/
      v25 = sub_140001650(v9, 1); /*0x1404b54f2*/
      if ( !v25 ) /*0x1404b54fa*/
      {
        v55 = (__int64)v9; /*0x1404b5729*/
LABEL_38:
        sub_1416C2D4B(v24, v55); /*0x1404b5616*/
      }
      v26 = v25; /*0x1404b5500*/
      sub_141684120(v25, v23, v9); /*0x1404b550c*/
      v27 = v26; /*0x1404b5511*/
      v4 = v22; /*0x1404b5514*/
      v5 = v21; /*0x1404b5517*/
    }
    else
    {
      v27 = 1; /*0x1404b5524*/
    }
    v41.m128i_i64[0] = v27; /*0x1404b5529*/
    v41.m128i_i64[1] = (__int64)v9; /*0x1404b552d*/
    *(_OWORD *)v42 = 0; /*0x1404b5535*/
    v55 = v27; /*0x1404b5538*/
    *(_QWORD *)&v42[16] = v27; /*0x1404b553f*/
    v53 = v9; /*0x1404b5543*/
    v43 = (__int64)v9; /*0x1404b554a*/
    v58 = 1; /*0x1404b554e*/
    sub_1408A6200(v40, &v41); /*0x1404b555d*/
    if ( v40[0].m128i_i8[0] != -1 ) /*0x1404b5567*/
      break; /*0x1404b5567*/
    v58 = 1; /*0x1404b55db*/
    sub_140348CF0(v40); /*0x1404b55e6*/
LABEL_35:
    v13 = v53; /*0x1404b55ec*/
    if ( v53 ) /*0x1404b55f6*/
      sub_140001660(v55, v53, 1); /*0x1404b5609*/
  }
  v28 = _mm_loadu_si128(v40); /*0x1404b5569*/
  *(__m128i *)v42 = v40[1]; /*0x1404b5572*/
  v41 = v28; /*0x1404b5576*/
  v29 = sub_141433D50(aType_4, 4, &v41); /*0x1404b558b*/
  if ( !v29 /*0x1404b55bf*/
    || *(_BYTE *)v29 != 3
    || *(_QWORD *)(v29 + 24) != 12
    || **(_QWORD **)(v29 + 16) ^ 0x5F6E6F6973736573LL | *(unsigned int *)(*(_QWORD *)(v29 + 16) + 8LL) ^ 0x6174656DLL )
  {
    v58 = 1; /*0x1404b55c8*/
    sub_1400104F0(v40); /*0x1404b55d3*/
    goto LABEL_35; /*0x1404b55d9*/
  }
  v31 = v53; /*0x1404b56a7*/
  v32 = v54; /*0x1404b56ae*/
  v54[1] = v53; /*0x1404b56b5*/
  v32[2] = v55; /*0x1404b56c0*/
  v32[3] = v31; /*0x1404b56c4*/
  v32[4] = i; /*0x1404b56cf*/
  v32[5] = v17; /*0x1404b56d3*/
  *((_BYTE *)v32 + 48) = v3; /*0x1404b56d7*/
  *((_BYTE *)v32 + 49) = v39; /*0x1404b56de*/
  *v32 = -1; /*0x1404b56e1*/
  v58 = 0; /*0x1404b56e8*/
  sub_1400104F0(v40); /*0x1404b56f3*/
LABEL_41:
  if ( v50 ) /*0x1404b5655*/
    sub_140001660(v51, v50, 1); /*0x1404b5661*/
  if ( v35 ) /*0x1404b566d*/
    sub_140001660(v34, v35, 1); /*0x1404b5679*/
  CloseHandle(hObject); /*0x1404b5682*/
  return v54; /*0x1404b52cf*/
}