// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x14078fd60
// name: sub_14078FD60
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_14078FD60(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // r14
  void *v22; // rax
  __int64 v23; // rcx
  void *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  _OWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rsi
  _QWORD *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // [rsp+28h] [rbp-58h] BYREF
  __int64 v36; // [rsp+30h] [rbp-50h] BYREF
  _OWORD *v37; // [rsp+38h] [rbp-48h]
  __int64 v38; // [rsp+40h] [rbp-40h]
  __int64 v39; // [rsp+48h] [rbp-38h] BYREF
  __int64 v40; // [rsp+50h] [rbp-30h]
  __int64 v41; // [rsp+58h] [rbp-28h]
  __int64 v42; // [rsp+60h] [rbp-20h]
  __int64 v43; // [rsp+68h] [rbp-18h]
  __int64 v44; // [rsp+70h] [rbp-10h]
  __int64 v45; // [rsp+88h] [rbp+8h] BYREF
  char v46; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v47[3]; // [rsp+98h] [rbp+18h] BYREF
  __int128 v48; // [rsp+B0h] [rbp+30h] BYREF
  __int64 *v49; // [rsp+C0h] [rbp+40h]
  __int64 (__fastcall *v50)(); // [rsp+C8h] [rbp+48h]
  __int128 *v51; // [rsp+D0h] [rbp+50h]
  __int64 (__fastcall *v52)(_QWORD, _QWORD); // [rsp+D8h] [rbp+58h]
  __int128 v53; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v54; // [rsp+F0h] [rbp+70h]
  __int64 v55; // [rsp+100h] [rbp+80h]
  void *v56; // [rsp+108h] [rbp+88h]
  __int64 v57; // [rsp+110h] [rbp+90h]
  __int64 v58; // [rsp+118h] [rbp+98h]
  __int64 v59; // [rsp+120h] [rbp+A0h]

  v59 = -2;
  if ( (a3 & 1) == 0 )
    return sub_140797030(a1, (unsigned int)&xmmword_14178D8C7, 32, (unsigned int)&unk_14178F8CD, 63);
  sub_1404C0AB0(&v39, a2);
  v5 = v41;
  if ( !(v41 | v45) )
  {
    sub_140797030(a1, (unsigned int)&xmmword_14178D8C7, 32, (unsigned int)&unk_14178FA20, 36);
    v6 = v40;
    v7 = v41;
    if ( v41 )
    {
      v8 = (_QWORD *)(v40 + 8);
      do
      {
        v9 = *(v8 - 1);
        if ( v9 )
          sub_140001660(*v8, v9, 1);
        v8 += 3;
        --v7;
      }
      while ( v7 );
    }
    if ( v39 )
      sub_140001660(v6, 24 * v39, 8);
    v12 = v43;
    v13 = v44;
    if ( v44 )
    {
      v14 = (_QWORD *)(v43 + 8);
      do
      {
        v15 = *(v14 - 1);
        if ( v15 )
          sub_140001660(*v14, v15, 1);
        v14 += 3;
        --v13;
      }
      while ( v13 );
    }
    result = v42;
    if ( v42 )
    {
      v16 = 24 * v42;
      v17 = v12;
      return sub_140001660(v17, v16, 8);
    }
    return result;
  }
  if ( v44 )
  {
    sub_140440300((unsigned int)&v48, v43, v44, (unsigned int)&unk_14178CCCE, 3);
    v54 = (__int64)v49;
    v53 = v48;
    v5 = v41;
    if ( v41 )
    {
LABEL_11:
      v35 = v5;
      *(_QWORD *)&v48 = &v35;
      *((_QWORD *)&v48 + 1) = sub_1414AC520;
      v49 = &v45;
      v50 = sub_1414AC520;
      v51 = &v53;
      v52 = sub_1400015F0;
      sub_14149C0F0(v47, &unk_14178F975, &v48);
      goto LABEL_24;
    }
  }
  else
  {
    nullsub_1(v4);
    v18 = sub_140001650(9, 1);
    if ( !v18 )
      sub_1416C2D4B(1, 9);
    *(_QWORD *)v18 = 0xBEE4BAA4E7A097E6uLL;
    *(_BYTE *)(v18 + 8) = -117;
    *(_QWORD *)&v53 = 9;
    *((_QWORD *)&v53 + 1) = v18;
    v54 = 9;
    if ( v5 )
      goto LABEL_11;
  }
  *(_QWORD *)&v48 = &v45;
  *((_QWORD *)&v48 + 1) = sub_1414AC520;
  v49 = (__int64 *)&v46;
  v50 = sub_1414AC520;
  v51 = &v53;
  v52 = sub_1400015F0;
  sub_14149C0F0(v47, &unk_14178F90C, &v48);
LABEL_24:
  v19 = v47[0];
  v20 = v47[1];
  v21 = v47[2];
  nullsub_1(v11);
  v22 = (void *)sub_140001650(32, 1);
  if ( !v22 )
  {
    v57 = v20;
    v58 = v19;
    sub_1416C2D4B(1, 32);
  }
  v24 = v22;
  qmemcpy(v22, "thread_model_catalog_consistency", 32);
  nullsub_1(v23);
  v25 = sub_140001650(5, 1);
  if ( !v25 )
  {
    v56 = v24;
    v57 = v20;
    v58 = v19;
    sub_1416C2D4B(1, 5);
  }
  *(_BYTE *)(v25 + 4) = 114;
  v55 = v25;
  *(_DWORD *)v25 = 1869771365;
  if ( v41 )
  {
    nullsub_1(v26);
    v27 = (_OWORD *)sub_140001650(45, 1);
    if ( !v27 )
    {
      v56 = v24;
      v57 = v20;
      v58 = v19;
      sub_1416C2D4B(1, 45);
    }
    *(_OWORD *)((char *)v27 + 29) = *(__int128 *)((char *)&xmmword_14178FA03 + 13);
    v27[1] = xmmword_14178FA03;
    *v27 = xmmword_14178F9F3;
    v36 = 45;
    v37 = v27;
    v38 = 45;
  }
  else
  {
    v56 = v24;
    v57 = v20;
    v58 = v19;
    *(_QWORD *)&v48 = &v45;
    *((_QWORD *)&v48 + 1) = sub_1414AC520;
    sub_14149C0F0(&v36, &unk_14178F9C8, &v48);
    v19 = v58;
    v20 = v57;
    v24 = v56;
  }
  v28 = v55;
  *(_QWORD *)(a1 + 72) = v19;
  *(_QWORD *)(a1 + 80) = v20;
  *(_QWORD *)(a1 + 88) = v21;
  *(_QWORD *)a1 = 32;
  *(_QWORD *)(a1 + 8) = v24;
  *(_QWORD *)(a1 + 16) = 32;
  *(_QWORD *)(a1 + 24) = 5;
  *(_QWORD *)(a1 + 32) = v28;
  *(_QWORD *)(a1 + 40) = 5;
  *(_QWORD *)(a1 + 48) = v36;
  *(_QWORD *)(a1 + 56) = v37;
  *(_QWORD *)(a1 + 64) = v38;
  *(_BYTE *)(a1 + 96) = 1;
  if ( (_QWORD)v53 )
    sub_140001660(*((_QWORD *)&v53 + 1), v53, 1);
  v29 = v41;
  if ( v41 )
  {
    v30 = (_QWORD *)(v40 + 8);
    do
    {
      v31 = *(v30 - 1);
      if ( v31 )
        sub_140001660(*v30, v31, 1);
      v30 += 3;
      --v29;
    }
    while ( v29 );
  }
  if ( v39 )
    sub_140001660(v40, 24 * v39, 8);
  v32 = v44;
  if ( v44 )
  {
    v33 = (_QWORD *)(v43 + 8);
    do
    {
      v34 = *(v33 - 1);
      if ( v34 )
        sub_140001660(*v33, v34, 1);
      v33 += 3;
      --v32;
    }
    while ( v32 );
  }
  result = v42;
  if ( v42 )
  {
    v17 = v43;
    v16 = 24 * v42;
    return sub_140001660(v17, v16, 8);
  }
  return result;
}