// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1402357e0 | name sub_1402357E0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402357E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  signed __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rbx
  const __m128i *v20; // r14
  __m128i *v21; // rax
  char v22; // cl
  __int64 v23; // r13
  __int64 v24; // r8
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // rbx
  int v28; // r13d
  __int64 v29; // r13
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int128 v34; // xmm0
  _OWORD *v35; // rax
  __m128i v36[38]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v37; // [rsp+280h] [rbp+200h]
  __m128i v38; // [rsp+4E0h] [rbp+460h] BYREF
  volatile signed __int64 *v39; // [rsp+4F0h] [rbp+470h] BYREF
  __m128i v40; // [rsp+750h] [rbp+6D0h] BYREF
  __int64 v41; // [rsp+760h] [rbp+6E0h]
  __m128i v42; // [rsp+998h] [rbp+918h] BYREF
  __m128i v43; // [rsp+9A8h] [rbp+928h] BYREF
  int v44; // [rsp+9C4h] [rbp+944h]
  __int64 v45; // [rsp+C08h] [rbp+B88h]
  __int64 v46; // [rsp+C10h] [rbp+B90h]
  __int64 v47; // [rsp+C18h] [rbp+B98h]
  __int64 v48; // [rsp+C20h] [rbp+BA0h]
  __int64 v49; // [rsp+C28h] [rbp+BA8h]
  __int64 v50; // [rsp+C30h] [rbp+BB0h]
  _OWORD *v51; // [rsp+C38h] [rbp+BB8h]
  __int128 v52; // [rsp+C40h] [rbp+BC0h] BYREF
  __int128 v53; // [rsp+C50h] [rbp+BD0h]
  __int64 v54; // [rsp+C60h] [rbp+BE0h]
  __int64 v55; // [rsp+C68h] [rbp+BE8h]
  __int64 v56; // [rsp+C70h] [rbp+BF0h] BYREF
  __int64 v57; // [rsp+C78h] [rbp+BF8h]
  __int64 i; // [rsp+C80h] [rbp+C00h]
  __int64 v59; // [rsp+C88h] [rbp+C08h]
  __int64 v60; // [rsp+C90h] [rbp+C10h]

  v60 = -2;
  result = sub_141682C30(a5, a6);
  v49 = v12;
  if ( !result )
  {
    *a1 = -1;
    return result;
  }
  v13 = result;
  nullsub_1(v11);
  v14 = sub_140001650(32, 8);
  if ( !v14 )
    sub_141938D11(8, 32);
  v16 = *(_QWORD *)(a2 + 464);
  if ( v16 < 0 )
  {
    v59 = v14;
    v17 = 0;
    goto LABEL_5;
  }
  v46 = v13;
  v48 = a3;
  v47 = a4;
  v18 = 1;
  v19 = 1;
  if ( v16 )
  {
    v59 = v14;
    v20 = *(const __m128i **)(a2 + 456);
    nullsub_1(v15);
    v17 = 1;
    v21 = (__m128i *)sub_140001650(v16, 1);
    if ( !v21 )
LABEL_5:
      sub_141938D2B(v17, v16);
    v19 = (__int64)v21;
    sub_1418F44E0(v21, v20, v16);
    v14 = v59;
  }
  v51 = a1;
  v22 = *(_BYTE *)(a2 + 472);
  *(_QWORD *)v14 = v16;
  *(_QWORD *)(v14 + 8) = v19;
  *(_QWORD *)(v14 + 16) = v16;
  *(_BYTE *)(v14 + 24) = v22;
  v56 = 1;
  v57 = v14;
  for ( i = 1; ; v18 = i )
  {
    if ( !v18 )
    {
      result = (__int64)v51;
      *(_QWORD *)v51 = -1;
      goto LABEL_57;
    }
    i = v18 - 1;
    v23 = 32 * (v18 - 1);
    v59 = *(_QWORD *)(v57 + v23);
    v24 = *(_QWORD *)(v57 + v23 + 16);
    v54 = *(_QWORD *)(v57 + v23 + 8);
    sub_141695AF0(v36, v54, v24);
    if ( v36[0].m128i_i32[0] != 2 )
      break;
    v42.m128i_i64[1] = v36[0].m128i_i64[1];
    v42.m128i_i64[0] = 2;
LABEL_16:
    sub_14018FC00(&v42);
LABEL_54:
    if ( v59 )
      sub_140001660(v54, v59, 1);
  }
  sub_1418F44E0(&v42, v36, 0x270u);
  if ( v42.m128i_i64[0] == 2 )
    goto LABEL_16;
  sub_1418F44E0(&v38, &v42, 0x270u);
  v36[0].m128i_i64[0] = 0;
  v37 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v38.m128i_i32[0] == 2 )
          {
LABEL_53:
            sub_140191C80(v36);
            goto LABEL_54;
          }
          sub_1416A31D0(&v42, &v38);
          if ( v42.m128i_i64[0] )
          {
            v25 = v42.m128i_i64[1];
            v26 = v43.m128i_i64[0];
            sub_1418F44E0(&v40, (const __m128i *)&v43.m128i_u64[1], 0x248u);
            goto LABEL_27;
          }
          if ( v38.m128i_i64[0] )
          {
            if ( v38.m128i_i32[0] == 2 )
              goto LABEL_26;
            sub_1416A0770(&v38.m128i_u64[1]);
          }
          if ( !_InterlockedDecrement64(v39) )
            sub_14119A730(&v39);
LABEL_26:
          v38.m128i_i64[0] = 2;
          v25 = v42.m128i_i64[1];
          v27 = v42.m128i_i64[0];
          v26 = v43.m128i_i64[0];
          sub_1418F44E0(&v40, (const __m128i *)&v43.m128i_u64[1], 0x248u);
          if ( v27 != 1 )
            goto LABEL_53;
LABEL_27:
          if ( v25 )
            break;
          if ( (unsigned int)(v26 & 3) - 2 >= 2 && (v26 & 3) != 0 )
          {
            v42.m128i_i64[1] = v26 - 1;
            v42.m128i_i8[0] = 3;
            sub_1416BCB00(&v42.m128i_u64[1]);
          }
        }
        sub_1418F44E0(&v43, &v40, 0x248u);
        v42.m128i_i64[0] = v25;
        v42.m128i_i64[1] = v26;
        v28 = v44;
        sub_14168A660(&v52, &v42);
        if ( (v26 & 0x400) == 0 || (v28 & 0x20000000) == 0 )
          break;
LABEL_38:
        if ( (_QWORD)v52 )
          sub_140001660(*((_QWORD *)&v52 + 1), v52, 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v42.m128i_i64[0]) )
          goto LABEL_52;
      }
      v45 = v26;
      if ( (v26 & 0x10) == 0 )
        break;
      v50 = *((_QWORD *)&v52 + 1);
      v55 = v52;
      v30 = i;
      if ( i == v56 )
        sub_14190F570(&v56);
      v31 = v57;
      v32 = 32 * v30;
      *(_QWORD *)(v57 + v32) = v55;
      *(_QWORD *)(v31 + v32 + 8) = v50;
      *(_OWORD *)(v31 + v32 + 16) = v53;
      i = v30 + 1;
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v42.m128i_i64[0]) )
LABEL_52:
        sub_14119A730(&v42);
    }
    sub_14168A770(&v40, &v42);
    if ( v41 != v49 || (v29 = v40.m128i_i64[1], (unsigned int)sub_1418F4B70(v40.m128i_i64[1], v46)) )
    {
      if ( v40.m128i_i64[0] )
        sub_140001660(v40.m128i_i64[1], v40.m128i_i64[0], 1);
      goto LABEL_38;
    }
    if ( v40.m128i_i64[0] )
      sub_140001660(v29, v40.m128i_i64[0], 1);
    v33 = *((_QWORD *)&v52 + 1);
    if ( (unsigned __int8)sub_14023B6B0(*((_QWORD *)&v52 + 1), v53, v48, v47) )
      break;
    if ( (_QWORD)v52 )
      sub_140001660(v33, v52, 1);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v42.m128i_i64[0]) )
      goto LABEL_52;
  }
  v34 = v52;
  v35 = v51;
  v51[1] = v53;
  *v35 = v34;
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v42.m128i_i64[0]) )
    sub_14119A730(&v42);
  sub_140191C80(v36);
  if ( v59 )
    sub_140001660(v54, v59, 1);
  result = sub_1403FAC20(&v56);
LABEL_57:
  if ( v56 )
    return sub_140001660(v57, 32 * v56, 8);
  return result;
}
