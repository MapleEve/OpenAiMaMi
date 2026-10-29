// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407dd730 | successor of pre-update 0x1402357e0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
void __fastcall sub_1407DD730(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rax
  char v21; // cl
  __int64 v22; // r13
  __int64 v23; // r8
  volatile signed __int64 *v24; // r13
  volatile signed __int64 *v25; // r15
  volatile signed __int64 *v26; // rbx
  int v27; // r13d
  __int64 v28; // r13
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int128 v34; // xmm0
  _OWORD *v35; // rax
  _QWORD v36[152]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v37; // [rsp+4E0h] [rbp+460h] BYREF
  char v38[8]; // [rsp+4E8h] [rbp+468h] BYREF
  volatile signed __int64 *v39; // [rsp+4F0h] [rbp+470h] BYREF
  __int64 v40; // [rsp+750h] [rbp+6D0h] BYREF
  __int64 v41; // [rsp+758h] [rbp+6D8h]
  __int64 v42; // [rsp+760h] [rbp+6E0h]
  volatile signed __int64 *v43; // [rsp+998h] [rbp+918h] BYREF
  volatile signed __int64 *v44; // [rsp+9A0h] [rbp+920h] BYREF
  volatile signed __int64 *v45; // [rsp+9A8h] [rbp+928h] BYREF
  _BYTE v46[20]; // [rsp+9B0h] [rbp+930h] BYREF
  int v47; // [rsp+9C4h] [rbp+944h]
  volatile signed __int64 *v48; // [rsp+C08h] [rbp+B88h]
  __int64 v49; // [rsp+C10h] [rbp+B90h]
  __int64 v50; // [rsp+C18h] [rbp+B98h]
  __int64 v51; // [rsp+C20h] [rbp+BA0h]
  __int64 v52; // [rsp+C28h] [rbp+BA8h]
  __int64 v53; // [rsp+C30h] [rbp+BB0h]
  _OWORD *v54; // [rsp+C38h] [rbp+BB8h]
  __int128 v55; // [rsp+C40h] [rbp+BC0h] BYREF
  __int128 v56; // [rsp+C50h] [rbp+BD0h]
  __int64 v57; // [rsp+C60h] [rbp+BE0h]
  __int64 v58; // [rsp+C68h] [rbp+BE8h]
  __int64 v59; // [rsp+C70h] [rbp+BF0h] BYREF
  __int64 v60; // [rsp+C78h] [rbp+BF8h]
  __int64 i; // [rsp+C80h] [rbp+C00h]
  __int64 v62; // [rsp+C88h] [rbp+C08h]
  __int64 v63; // [rsp+C90h] [rbp+C10h]

  v63 = -2;
  v10 = sub_1416B1C00(a5, a6);
  v52 = v11;
  v49 = v10;
  if ( !v10 )
  {
    *a1 = -1;
    return;
  }
  nullsub_1(v12, v11);
  v13 = sub_140001650(32, 8);
  if ( !v13 )
    sub_14196B2C1(8, 32);
  v50 = a3;
  v16 = *(_QWORD *)(a2 + 464);
  v17 = 1;
  v18 = 1;
  if ( v16 )
  {
    v62 = v13;
    v19 = *(_QWORD *)(a2 + 456);
    nullsub_1(v15, v14);
    v20 = sub_140001650(v16, 1);
    if ( !v20 )
      sub_14196B2DB(1, v16);
    v18 = v20;
    sub_1419234B0(v20, v19, v16);
    v13 = v62;
  }
  v51 = a4;
  v54 = a1;
  v21 = *(_BYTE *)(a2 + 472);
  *(_QWORD *)v13 = v16;
  *(_QWORD *)(v13 + 8) = v18;
  *(_QWORD *)(v13 + 16) = v16;
  *(_BYTE *)(v13 + 24) = v21;
  v59 = 1;
  v60 = v13;
  for ( i = 1; ; v17 = i )
  {
    if ( !v17 )
    {
      *(_QWORD *)v54 = -1;
      v33 = v59;
      if ( !v59 )
        return;
LABEL_53:
      sub_140001660(v60, 32 * v33, 8);
      return;
    }
    i = v17 - 1;
    v22 = 32 * (v17 - 1);
    v62 = *(_QWORD *)(v60 + v22);
    v23 = *(_QWORD *)(v60 + v22 + 16);
    v57 = *(_QWORD *)(v60 + v22 + 8);
    sub_1416C4AC0(v36, v57, v23);
    if ( LODWORD(v36[0]) != 2 )
      break;
    v44 = (volatile signed __int64 *)v36[1];
    v43 = (volatile signed __int64 *)2;
LABEL_12:
    sub_140776A60(&v43);
LABEL_50:
    if ( v62 )
      sub_140001660(v57, v62, 1);
  }
  sub_1419234B0(&v43, v36, 624);
  if ( v43 == (volatile signed __int64 *)2 )
    goto LABEL_12;
  sub_1419234B0(&v37, &v43, 624);
  v36[0] = 0;
  v36[76] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_14:
        if ( (_DWORD)v37 == 2 )
        {
LABEL_49:
          sub_1401A6690(v36);
          goto LABEL_50;
        }
        sub_1416D21A0(&v43, &v37);
        if ( v43 )
        {
          v24 = v44;
          v25 = v45;
          sub_1419234B0(&v40, v46, 584);
          goto LABEL_23;
        }
        if ( v37 )
        {
          if ( (_DWORD)v37 == 2 )
            goto LABEL_22;
          sub_1416CF740(v38);
        }
        if ( !_InterlockedDecrement64(v39) )
          sub_141141760(&v39);
LABEL_22:
        v37 = 2;
        v26 = v43;
        v24 = v44;
        v25 = v45;
        sub_1419234B0(&v40, v46, 584);
        if ( v26 != (volatile signed __int64 *)1 )
          goto LABEL_49;
LABEL_23:
        if ( !v24 )
        {
          if ( ((unsigned __int8)v25 & 3u) - 2 >= 2 && ((unsigned __int8)v25 & 3) != 0 )
          {
            v44 = (volatile signed __int64 *)((char *)v25 - 1);
            LOBYTE(v43) = 3;
            sub_1416EBAD0(&v44);
          }
          continue;
        }
        sub_1419234B0(&v45, &v40, 584);
        v43 = v24;
        v44 = v25;
        v27 = v47;
        sub_1416B9630(&v55, &v43);
        if ( ((unsigned __int16)v25 & 0x400) == 0 || (v27 & 0x20000000) == 0 )
          break;
LABEL_34:
        if ( (_QWORD)v55 )
          sub_140001660(*((_QWORD *)&v55 + 1), v55, 1);
        if ( !_InterlockedDecrement64(v43) )
          goto LABEL_48;
      }
      v48 = v25;
      if ( ((unsigned __int8)v25 & 0x10) == 0 )
        break;
      v53 = *((_QWORD *)&v55 + 1);
      v58 = v55;
      v29 = i;
      if ( i == v59 )
        sub_1419397B0(&v59);
      v30 = v60;
      v31 = 32 * v29;
      *(_QWORD *)(v60 + v31) = v58;
      *(_QWORD *)(v30 + v31 + 8) = v53;
      *(_OWORD *)(v30 + v31 + 16) = v56;
      i = v29 + 1;
      if ( !_InterlockedDecrement64(v43) )
      {
LABEL_48:
        sub_141141760(&v43);
        goto LABEL_14;
      }
    }
    sub_1416B9740(&v40, &v43);
    if ( v42 != v52 || (v28 = v41, (unsigned int)sub_141923B40(v41, v49, v52)) )
    {
      if ( v40 )
        sub_140001660(v41, v40, 1);
      goto LABEL_34;
    }
    if ( v40 )
      sub_140001660(v28, v40, 1);
    v32 = *((_QWORD *)&v55 + 1);
    if ( (unsigned __int8)sub_1407E31B0(*((_QWORD *)&v55 + 1), v56, v50, v51) )
      break;
    if ( (_QWORD)v55 )
      sub_140001660(v32, v55, 1);
    if ( !_InterlockedDecrement64(v43) )
      goto LABEL_48;
  }
  v34 = v55;
  v35 = v54;
  v54[1] = v56;
  *v35 = v34;
  if ( !_InterlockedDecrement64(v43) )
    sub_141141760(&v43);
  sub_1401A6690(v36);
  if ( v62 )
    sub_140001660(v57, v62, 1);
  sub_140234510(&v59);
  v33 = v59;
  if ( v59 )
    goto LABEL_53;
}
