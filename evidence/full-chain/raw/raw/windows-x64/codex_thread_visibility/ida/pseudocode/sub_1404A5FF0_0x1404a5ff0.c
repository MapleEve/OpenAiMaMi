// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404a5ff0
// name: sub_1404A5FF0
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
int __fastcall sub_1404A5FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rbx
  _QWORD *v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rcx
  bool v16; // cf
  bool v17; // cc
  void *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  _QWORD *v24; // rbx
  __int64 v25; // r14
  int v26; // eax
  __int128 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // r12
  unsigned __int64 v30; // r13
  bool v31; // r15
  __int64 v32; // r12
  __int128 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  bool v36; // zf
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  void *v40; // rax
  void *v41; // rax
  unsigned __int64 v42; // r15
  __int64 v43; // r12
  _DWORD v45[4]; // [rsp+3Ch] [rbp-44h] BYREF
  __int64 v46; // [rsp+4Ch] [rbp-34h]
  int v47; // [rsp+54h] [rbp-2Ch]
  __int128 v48; // [rsp+60h] [rbp-20h] BYREF
  __int128 v49; // [rsp+70h] [rbp-10h]
  __int128 v50; // [rsp+80h] [rbp+0h]
  __int64 v51; // [rsp+90h] [rbp+10h]
  __int128 v52; // [rsp+98h] [rbp+18h]
  __int128 v53; // [rsp+A8h] [rbp+28h]
  _QWORD *v54; // [rsp+B8h] [rbp+38h]
  int v55; // [rsp+C4h] [rbp+44h] BYREF
  __int64 v56; // [rsp+C8h] [rbp+48h]
  __int128 v57; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v58; // [rsp+E0h] [rbp+60h]
  _BYTE v59[48]; // [rsp+F0h] [rbp+70h] BYREF
  _BYTE v60[48]; // [rsp+120h] [rbp+A0h]
  __int64 v61; // [rsp+150h] [rbp+D0h]
  __int64 v62; // [rsp+158h] [rbp+D8h]
  __int64 v63; // [rsp+160h] [rbp+E0h]
  __int64 v64; // [rsp+168h] [rbp+E8h]
  unsigned __int64 v65; // [rsp+170h] [rbp+F0h]
  char v66; // [rsp+17Fh] [rbp+FFh] BYREF
  HANDLE hObject; // [rsp+180h] [rbp+100h] BYREF
  bool v68; // [rsp+18Eh] [rbp+10Eh]
  char v69; // [rsp+18Fh] [rbp+10Fh]
  __int64 v70; // [rsp+190h] [rbp+110h]

  v70 = -2;
  sub_140988200(v59, a4, a4 + 72 * a5);
  v8 = *(void **)v59;
  v48 = *(_OWORD *)&v59[8];
  *(_QWORD *)&v49 = *(_QWORD *)&v59[24];
  if ( *(_QWORD *)v59 != -1 )
  {
    v9 = *(_OWORD *)&v59[32];
    v10 = *(_OWORD *)v60;
    v11 = *(_OWORD *)&v60[16];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v60[32];
    *(_OWORD *)(a1 + 64) = v11;
    *(_OWORD *)(a1 + 48) = v10;
    *(_OWORD *)(a1 + 32) = v9;
    *(_QWORD *)(a1 + 24) = v49;
    *(_OWORD *)(a1 + 8) = v48;
    *(_QWORD *)a1 = v8;
    return (int)v8;
  }
  v63 = a2;
  v62 = a3;
  v57 = v48;
  v12 = v49;
  v58 = v49;
  v13 = *((_QWORD **)&v48 + 1);
  *(_QWORD *)v59 = &v66;
  if ( (unsigned __int64)v49 >= 2 )
  {
    if ( (unsigned __int64)v49 >= 0x15 )
      sub_140B5A050(*((_QWORD *)&v48 + 1), v49, v59);
    else
      sub_1405577E0(*((_QWORD *)&v48 + 1), v49, 1, v59);
  }
  v14 = v49 + 1;
  v15 = (_QWORD *)(*((_QWORD *)&v48 + 1) + 48LL);
  while ( 1 )
  {
    v16 = v14-- == 1;
    if ( v16 || v14 == 1 )
      break;
    v17 = *v15 + v15[1] <= v15[8];
    v15 += 8;
    if ( !v17 )
    {
      nullsub_1(v15);
      v8 = (void *)sub_140001650(33, 1);
      if ( !v8 )
        sub_1416C2D4B(1, 33);
      qmemcpy(v8, "session_meta replacements overlap", 33);
      *(_QWORD *)a1 = 9;
      *(_QWORD *)(a1 + 8) = 33;
      *(_QWORD *)(a1 + 16) = v8;
      *(_QWORD *)(a1 + 24) = 33;
      if ( !v12 )
        goto LABEL_50;
LABEL_16:
      v21 = v13 + 4;
      do
      {
        v22 = *(v21 - 4);
        if ( v22 )
          LODWORD(v8) = sub_140001660(*(v21 - 3), v22, 1);
        v23 = *(v21 - 1);
        if ( v23 )
          LODWORD(v8) = sub_140001660(*v21, v23, 1);
        v21 += 8;
        --v12;
      }
      while ( v12 );
      goto LABEL_50;
    }
  }
  *(_DWORD *)v59 = 0;
  *(_QWORD *)&v59[8] = 0;
  *(_DWORD *)&v59[16] = 7;
  *(_QWORD *)&v59[20] = 0x100000000LL;
  *(_QWORD *)&v59[25] = 1;
  v8 = (void *)sub_141481480(v59, v63, v62);
  if ( v8 == (void *)1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v18;
    if ( !v12 )
      goto LABEL_50;
    goto LABEL_16;
  }
  hObject = v18;
  v69 = 1;
  sub_141474A10(v59, &hObject);
  v19 = *(_QWORD *)&v59[8];
  v20 = *(_QWORD *)v59;
  if ( *(_QWORD *)v59 == 2 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v19;
    goto LABEL_15;
  }
  v50 = *(_OWORD *)&v59[32];
  v49 = *(_OWORD *)&v59[16];
  v52 = *(_OWORD *)&v60[8];
  v53 = *(_OWORD *)&v60[24];
  v48 = *(_OWORD *)v59;
  v51 = *(_QWORD *)v60;
  v61 = *(_QWORD *)v60;
  v56 = *(_QWORD *)v60;
  v55 = 1;
  v24 = &v13[8 * v12];
  if ( v13 == v24 )
  {
LABEL_45:
    v13 = *((_QWORD **)&v57 + 1);
    v12 = v58;
    v34 = v58 << 6;
    v35 = *((_QWORD *)&v57 + 1);
    while ( v34 )
    {
      v34 -= 64;
      v36 = *(_QWORD *)(v35 + 40) == *(_QWORD *)(v35 + 56);
      v35 += 64;
      if ( !v36 )
      {
        CloseHandle(hObject);
        v69 = 0;
        LODWORD(v8) = stream_replace_session_meta_lines((__int64 *)v59, v63, v62, v13, v12, (__int64)&v48);
        if ( *(_DWORD *)v59 != -1 )
        {
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v60[32];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v60[16];
          v37 = *(_OWORD *)v59;
          v38 = *(_OWORD *)&v59[16];
          v39 = *(_OWORD *)&v59[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)v60;
          *(_OWORD *)(a1 + 32) = v39;
          *(_OWORD *)(a1 + 16) = v38;
          *(_OWORD *)a1 = v37;
          if ( !v12 )
            goto LABEL_50;
          goto LABEL_16;
        }
        v69 = 0;
        restore_rollout_mtime_best_effort(v63, v62, (__int64)&v55);
        *(_QWORD *)a1 = -1;
        LODWORD(v8) = sub_1402B8C90(&v57);
        return (int)v8;
      }
    }
LABEL_64:
    if ( v13 == (_QWORD *)(*((_QWORD *)&v57 + 1) + (v58 << 6)) )
    {
      v45[0] = 0;
      v47 = 0;
      v45[3] = 1;
      v46 = v61;
      v69 = 1;
      *(_QWORD *)v59 = sub_141474AC0(&hObject, v45);
      if ( *(_QWORD *)v59 )
      {
        v69 = 1;
        sub_140018650(v59);
      }
      *(_QWORD *)a1 = -1;
      goto LABEL_15;
    }
    v69 = 1;
    if ( sub_141491C20(&hObject, 0) == 1 )
      goto LABEL_81;
    v42 = v13[5];
    if ( !v42 )
    {
LABEL_62:
      *((_QWORD *)&v27 + 1) = 0;
      goto LABEL_63;
    }
    v43 = v13[4];
    while ( 1 )
    {
      v69 = 1;
      *(_QWORD *)&v27 = sub_141491C00(&hObject, v43, v42);
      *(_OWORD *)v59 = v27;
      if ( (_QWORD)v27 == 1 )
      {
        switch ( BYTE8(v27) & 3 )
        {
          case 0:
            LOBYTE(v27) = *(_BYTE *)(*((_QWORD *)&v27 + 1) + 16LL);
            goto LABEL_78;
          case 1:
            LOBYTE(v27) = *(_BYTE *)(*((_QWORD *)&v27 + 1) + 15LL);
            goto LABEL_78;
          case 2:
            goto LABEL_63;
          case 3:
            *(_QWORD *)&v27 = HIDWORD(*((_QWORD *)&v27 + 1));
LABEL_78:
            if ( (_BYTE)v27 != 35 )
              goto LABEL_63;
            v69 = 1;
            sub_140018650(&v59[8]);
            break;
        }
      }
      else
      {
        if ( !*((_QWORD *)&v27 + 1) )
        {
          *((_QWORD *)&v27 + 1) = &off_141785228;
LABEL_63:
          v13 += 8;
          if ( *((_QWORD *)&v27 + 1) )
            goto LABEL_81;
          goto LABEL_64;
        }
        if ( v42 < *((_QWORD *)&v27 + 1) )
        {
          v69 = 1;
          sub_1416C32F0(*((_QWORD *)&v27 + 1), v42, v42, &off_141785290);
        }
        v43 += *((_QWORD *)&v27 + 1);
        v42 -= *((_QWORD *)&v27 + 1);
      }
      if ( !v42 )
        goto LABEL_62;
    }
  }
  while ( 1 )
  {
LABEL_26:
    if ( v13[2] != v13[7] )
    {
      nullsub_1(v20);
      v40 = (void *)sub_140001650(51, 1);
      if ( !v40 )
      {
        v69 = 1;
        sub_1416C2D4B(1, 51);
      }
      qmemcpy(v40, "session_meta line length changed before replacement", 51);
      *(_QWORD *)a1 = 9;
      *(_QWORD *)(a1 + 8) = 51;
      *(_QWORD *)(a1 + 16) = v40;
      *(_QWORD *)(a1 + 24) = 51;
      goto LABEL_15;
    }
    v65 = v13[2];
    v69 = 1;
    if ( sub_141491C20(&hObject, 0) == 1 )
    {
LABEL_81:
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v27 + 1);
      goto LABEL_15;
    }
    v29 = v13 + 8;
    v30 = v65;
    v31 = v65 == 0;
    if ( v65 )
      break;
    v25 = 1;
    v26 = sub_1416847B0(1, v13[1], 0);
    v13 += 8;
    if ( v26 )
      goto LABEL_57;
    if ( v29 == v24 )
      goto LABEL_45;
  }
  v54 = v13 + 8;
  nullsub_1(v28);
  v25 = sub_140001680(v30, 1);
  v32 = v25;
  if ( !v25 )
  {
    v69 = 1;
    sub_1416C2D4B(1, v65);
  }
  while ( 1 )
  {
    v68 = 0;
    v64 = v25;
    *(_QWORD *)&v33 = sub_141491990(&hObject, v32, v30);
    *(_OWORD *)v59 = v33;
    if ( (_QWORD)v33 == 1 )
    {
      switch ( BYTE8(v33) & 3 )
      {
        case 0:
          LOBYTE(v33) = *(_BYTE *)(*((_QWORD *)&v33 + 1) + 16LL);
          goto LABEL_40;
        case 1:
          LOBYTE(v33) = *(_BYTE *)(*((_QWORD *)&v33 + 1) + 15LL);
          goto LABEL_40;
        case 2:
          goto LABEL_42;
        case 3:
          *(_QWORD *)&v33 = HIDWORD(*((_QWORD *)&v33 + 1));
LABEL_40:
          if ( (_BYTE)v33 == 35 )
          {
            v68 = 0;
            v64 = v25;
            sub_140018650(&v59[8]);
            goto LABEL_31;
          }
LABEL_42:
          if ( *((_QWORD *)&v33 + 1) )
            goto LABEL_54;
LABEL_43:
          v30 = v65;
          if ( (unsigned int)sub_1416847B0(v25, v13[1], v65) )
          {
LABEL_57:
            nullsub_1(v20);
            v41 = (void *)sub_140001650(53, 1);
            if ( !v41 )
            {
              v68 = v31;
              v64 = v25;
              sub_1416C2D4B(1, 53);
            }
            qmemcpy(v41, "session_meta changed while preparing router migration", 53);
            *(_QWORD *)a1 = 10;
            *(_QWORD *)(a1 + 8) = 53;
            *(_QWORD *)(a1 + 16) = v41;
            *(_QWORD *)(a1 + 24) = 53;
            goto LABEL_59;
          }
          sub_140001660(v25, v30, 1);
          v13 = v54;
          if ( v54 == v24 )
            goto LABEL_45;
          break;
      }
      goto LABEL_26;
    }
    if ( !*((_QWORD *)&v33 + 1) )
      break;
    if ( v30 < *((_QWORD *)&v33 + 1) )
    {
      v68 = 0;
      v64 = v25;
      sub_1416C32F0(*((_QWORD *)&v33 + 1), v30, v30, &off_1417497F8);
    }
    v32 += *((_QWORD *)&v33 + 1);
    v30 -= *((_QWORD *)&v33 + 1);
LABEL_31:
    if ( !v30 )
      goto LABEL_43;
  }
  *((_QWORD *)&v33 + 1) = &off_1417497E0;
LABEL_54:
  *(_QWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&v33 + 1);
  v31 = 0;
  v30 = v65;
LABEL_59:
  if ( !v31 )
    sub_140001660(v25, v30, 1);
LABEL_15:
  LODWORD(v8) = CloseHandle(hObject);
  v13 = *((_QWORD **)&v57 + 1);
  v12 = v58;
  if ( v58 )
    goto LABEL_16;
LABEL_50:
  if ( (_QWORD)v57 )
    LODWORD(v8) = sub_140001660(v13, (_QWORD)v57 << 6, 8);
  return (int)v8;
}