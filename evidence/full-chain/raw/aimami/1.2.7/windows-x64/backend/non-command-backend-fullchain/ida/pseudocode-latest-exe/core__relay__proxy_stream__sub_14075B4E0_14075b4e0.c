// win 1.2.7 latest-exe | module src/core/relay/proxy_stream.rs | ea 0x14075b4e0 | successor of pre-update 0x140dc42e0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 __fastcall sub_14075B4E0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rax
  bool v5; // zf
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 *v10; // r15
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  bool v19; // cf
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  __int64 *v22; // r12
  unsigned __int64 v23; // r14
  const char *v24; // rdi
  __int64 v25; // r14
  __int64 *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rsi
  unsigned __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rax
  __int64 *v42; // rax
  _QWORD **v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 *v46; // rsi
  __int64 result; // rax
  __int64 *v48; // rcx
  __int128 v49; // xmm1
  _QWORD *v50; // r15
  unsigned __int64 v51; // r14
  _BYTE v52[544]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v53[544]; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v54; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v55; // [rsp+480h] [rbp+400h]
  __int128 v56; // [rsp+690h] [rbp+610h]
  __int128 v57; // [rsp+6A0h] [rbp+620h]
  __int128 v58; // [rsp+6B0h] [rbp+630h]
  __int128 v59; // [rsp+6C0h] [rbp+640h]
  __int64 v60; // [rsp+6D8h] [rbp+658h] BYREF
  unsigned __int64 v61; // [rsp+6E0h] [rbp+660h]
  unsigned __int64 v62; // [rsp+6E8h] [rbp+668h]
  __int64 v63; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v64; // [rsp+6F8h] [rbp+678h]
  _BYTE *v65; // [rsp+700h] [rbp+680h]
  const char *v66; // [rsp+708h] [rbp+688h] BYREF
  __int64 v67; // [rsp+710h] [rbp+690h]
  __int64 v68; // [rsp+718h] [rbp+698h]
  _DWORD *v69; // [rsp+720h] [rbp+6A0h]
  __int64 *v70; // [rsp+728h] [rbp+6A8h]
  __int128 v71; // [rsp+730h] [rbp+6B0h] BYREF
  unsigned __int64 v72; // [rsp+740h] [rbp+6C0h]
  char v73[8]; // [rsp+748h] [rbp+6C8h] BYREF
  __int128 v74; // [rsp+750h] [rbp+6D0h] BYREF
  _BYTE v75[24]; // [rsp+760h] [rbp+6E0h]
  _QWORD **v76; // [rsp+778h] [rbp+6F8h]
  __int64 (__fastcall **v77)(); // [rsp+780h] [rbp+700h]
  _QWORD *v78; // [rsp+788h] [rbp+708h]
  char v79; // [rsp+797h] [rbp+717h]
  __int64 *v80; // [rsp+798h] [rbp+718h]
  __int64 v81; // [rsp+7A0h] [rbp+720h]

  v81 = -2;
  v3 = a2;
  v64 = a1;
  v4 = *a2;
  v5 = *a2 == 0;
  v80 = a2;
  if ( !v5 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v65 = a2 + 142;
      v7 = *((unsigned __int8 *)a2 + 1136);
      v69 = a2 + 1;
      switch ( v7 )
      {
        case 0LL:
          goto LABEL_6;
        case 1LL:
          sub_14196B990(&off_141A39148);
        case 2LL:
          sub_14196B9B0(&off_141A39148);
        case 3LL:
          v27 = (_QWORD *)a2[141];
          goto LABEL_45;
      }
    }
    sub_14196B830(aUnfoldMustNotB, 63, &off_141A40980);
  }
  v6 = a2[1];
  *a2 = 2;
  if ( v6 >= 3 )
    sub_14196B830("internal error: entered unreachable code", 40, &off_141A3BB00);
  *a2 = 1;
  *((_OWORD *)a2 + 35) = *(_OWORD *)(a2 + 143);
  v65 = a2 + 142;
  *((_BYTE *)a2 + 1136) = 0;
  v69 = a2 + 1;
LABEL_6:
  *(_WORD *)((char *)a2 + 1137) = 0;
  v8 = a2[1];
  if ( v8 == 2 )
  {
    v9 = -1;
    goto LABEL_81;
  }
  *(_WORD *)((char *)a2 + 1137) = 257;
  a2[72] = v8;
  sub_1419234B0(a2 + 73, a2 + 2, 544);
  if ( v3[138] )
    goto LABEL_9;
  v27 = v3 + 135;
  v3[141] = (__int64)(v3 + 135);
LABEL_45:
  sub_140188FF0(&v74, *v27);
  if ( (_QWORD)v74 == 2 )
  {
    *v65 = 3;
    goto LABEL_83;
  }
  v58 = *(_OWORD *)&v75[8];
  if ( (_DWORD)v74 != 1 )
  {
    sub_1416D8D10(&v74, v80[133], v80[134]);
    v36 = (__int64)(v80 + 72);
    v78 = *((_QWORD **)&v74 + 1);
    chat_to_responses_stream_feed_line(&v71, v80 + 72, *((_QWORD *)&v74 + 1), *(_QWORD *)v75);
    v2 = *((_QWORD *)&v71 + 1);
    v37 = v71;
    v38 = v72;
    if ( (__int64)v74 > 0 )
      sub_140001660(v78, v74, 1);
    v9 = 2;
    if ( v37 == -1 )
    {
LABEL_63:
      v77 = nullptr;
      v41 = v80;
      if ( *((_BYTE *)v80 + 1137) )
        goto LABEL_70;
      goto LABEL_64;
    }
    v60 = v37;
    v61 = v2;
    v62 = v38;
    if ( *((_BYTE *)v80 + 1053) )
    {
LABEL_99:
      v79 = 0;
      sub_141683760(&v74, &v60);
      v2 = *((_QWORD *)&v74 + 1);
      v77 = (__int64 (__fastcall **)())v74;
      v59 = *(_OWORD *)v75;
      v41 = v80;
      if ( *((_BYTE *)v80 + 1137) )
        goto LABEL_70;
      goto LABEL_64;
    }
    if ( v80[109] == -1 )
      v39 = 0;
    else
      v39 = v80[110];
    v79 = 1;
    sub_140625740(&v74, v39);
    v79 = 1;
    sub_140A3CD90(&v71, v36, (__int64 *)&v74);
    v50 = *((_QWORD **)&v71 + 1);
    v51 = v72;
    if ( v72 > v37 - v38 )
    {
      v78 = *((_QWORD **)&v71 + 1);
      sub_141939070((unsigned int)&v60, v38, v72, 1, 1);
      v2 = v61;
      v38 = v62;
      v50 = v78;
    }
    else if ( !v72 )
    {
      goto LABEL_97;
    }
    sub_1419234B0(v38 + v2, v50, v51);
LABEL_97:
    v62 = v51 + v38;
    if ( (_QWORD)v71 )
      sub_140001660(v50, v71, 1);
    goto LABEL_99;
  }
  if ( !*((_QWORD *)&v74 + 1) )
  {
    v66 = aChat;
    v67 = 4;
    v63 = sub_1412469C0(*(_QWORD *)v75);
    *(_QWORD *)&v74 = &v66;
    *((_QWORD *)&v74 + 1) = sub_140191200;
    *(_QWORD *)v75 = &v63;
    *(_QWORD *)&v75[8] = sub_141246C00;
    sub_1416DAFA0(&v71, &unk_141A391D3, &v74);
    sub_14028DCE0(v63);
    v74 = v71;
    *(_QWORD *)v75 = v72;
    LOBYTE(v40) = 41;
    v35 = sub_1411D09D0(v40, &v74);
    goto LABEL_62;
  }
  v76 = *((_QWORD ***)&v74 + 1);
  v78 = *(_QWORD **)v75;
  v28 = v80[136];
  v29 = v80[137];
  v77 = (__int64 (__fastcall **)())(v80 + 138);
  (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v28 + 32))(v80 + 139, v29, v80[138], v80);
  v3 = v80;
  *((_BYTE *)v80 + 1138) = 1;
  v3[136] = (__int64)v76;
  v3[137] = (__int64)v78;
  *(_OWORD *)v77 = v58;
  v30 = v3[138];
  v31 = v3[70];
  v32 = v3[140];
  v33 = 0;
  v19 = v31 < v32;
  v34 = v31 - v32;
  if ( !v19 )
    v33 = v34;
  if ( v30 > v33 )
  {
    LOBYTE(v32) = 41;
    v35 = sub_1416A8370(v32, aUpstreamTransl_0, 59);
LABEL_62:
    v2 = v35;
    v9 = 2;
    goto LABEL_63;
  }
  v3[140] = v30 + v32;
LABEL_9:
  v70 = v3 + 72;
  v10 = v3 + 136;
  v78 = v3 + 132;
  v77 = nullptr;
  v11 = 0;
  while ( 1 )
  {
    v12 = v3[138];
    if ( !v12 )
    {
LABEL_53:
      v59 = 0;
      v9 = v3[72];
      sub_1419234B0(&v54, v3 + 73, 544);
      *(_WORD *)((char *)v3 + 1137) = 0;
      v2 = 1;
      v77 = off_141A353D8;
      goto LABEL_82;
    }
    ++v11;
    v13 = 0;
    while ( *(_BYTE *)(v3[137] + v13) != 10 )
    {
      if ( v12 == ++v13 )
        goto LABEL_16;
    }
    v12 = v13 + 1;
LABEL_16:
    sub_1416824B0(&v71, v10, v12);
    v14 = *((_QWORD *)&v71 + 1);
    v15 = v72;
    if ( v72 )
    {
      v2 = v72 - 1;
      v16 = 0;
      if ( *(_BYTE *)(*((_QWORD *)&v71 + 1) + v72 - 1) == 10 )
        v16 = *((_QWORD *)&v71 + 1);
    }
    else
    {
      v16 = 0;
    }
    if ( !v16 )
      v2 = v72;
    v17 = v80[71];
    v18 = v80[134];
    v19 = v17 < v18;
    v20 = v17 - v18;
    v21 = 0;
    if ( !v19 )
      v21 = v20;
    if ( v2 > v21 )
    {
      LOBYTE(v16) = 41;
      v2 = sub_1416A8370(v16, aUpstreamTransl, 56);
      v9 = 2;
      v77 = nullptr;
      goto LABEL_69;
    }
    if ( v16 )
      v14 = v16;
    if ( v2 > *v78 - v18 )
    {
      sub_141939070((_DWORD)v78, v18, v2, 1, 1);
      v22 = v80;
      v18 = v80[134];
LABEL_30:
      sub_1419234B0(v18 + v22[133], v14, v2);
      v15 = v72;
      goto LABEL_31;
    }
    v22 = v80;
    if ( v2 )
      goto LABEL_30;
LABEL_31:
    v23 = v2 + v18;
    v22[134] = v23;
    if ( v15 )
    {
      if ( *(_BYTE *)(*((_QWORD *)&v71 + 1) + v15 - 1) == 10 )
        break;
    }
LABEL_40:
    (*(void (__fastcall **)(char *, _QWORD, unsigned __int64))(v71 + 32))(v73, *((_QWORD *)&v71 + 1), v72);
    v3 = v80;
    if ( v11 > 0x3F )
      goto LABEL_53;
  }
  sub_1416D8D10(&v74, v80[133], v23);
  v76 = *((_QWORD ***)&v74 + 1);
  chat_to_responses_stream_feed_line(&v66, v70, *((_QWORD *)&v74 + 1), *(_QWORD *)v75);
  v24 = v66;
  v2 = v67;
  v25 = v68;
  if ( (__int64)v74 > 0 )
    sub_140001660(v76, v74, 1);
  v9 = 2;
  if ( v24 == (const char *)-1LL )
    goto LABEL_69;
  v26 = v80;
  v80[134] = 0;
  if ( *((_BYTE *)v26 + 1053) == 1 )
  {
    v66 = v24;
    v67 = v2;
    v68 = v25;
    sub_141683760(&v74, &v66);
    v2 = *((_QWORD *)&v74 + 1);
    v77 = (__int64 (__fastcall **)())v74;
    v59 = *(_OWORD *)v75;
    goto LABEL_69;
  }
  if ( !v25 )
  {
    if ( v24 )
      sub_140001660(v2, v24, 1);
    goto LABEL_40;
  }
  v66 = v24;
  v67 = v2;
  v68 = v25;
  sub_141683760(&v74, &v66);
  v2 = *((_QWORD *)&v74 + 1);
  v77 = (__int64 (__fastcall **)())v74;
  v59 = *(_OWORD *)v75;
  v42 = v80;
  *(_WORD *)((char *)v80 + 1137) = 0;
  v9 = v42[72];
  sub_1419234B0(&v54, v42 + 73, 544);
LABEL_69:
  (*(void (__fastcall **)(char *, _QWORD, unsigned __int64))(v71 + 32))(v73, *((_QWORD *)&v71 + 1), v72);
  v41 = v80;
  if ( !*((_BYTE *)v80 + 1137) )
  {
LABEL_64:
    if ( *((_BYTE *)v41 + 1138) )
      goto LABEL_75;
    goto LABEL_76;
  }
LABEL_70:
  v43 = (_QWORD **)v41[135];
  v78 = *v43;
  v76 = v43;
  v70 = v43[1];
  if ( *v70 )
    ((void (__fastcall *)(_QWORD *))*v70)(v78);
  v44 = v70[1];
  if ( v44 )
    sub_140001660(v78, v44, v70[2]);
  sub_140001660(v76, 16, 8);
  if ( *((_BYTE *)v80 + 1138) )
LABEL_75:
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v80[136] + 32))(v80 + 139, v80[137], v80[138]);
LABEL_76:
  if ( *((_BYTE *)v80 + 1137) )
  {
    v45 = v80[132];
    if ( !v45 || (v46 = v80, sub_140001660(v80[133], v45, 1), *((_BYTE *)v46 + 1137)) )
      sub_1406C3CB0(v80 + 72);
  }
  v3 = v80;
  *((_BYTE *)v80 + 1137) = 0;
LABEL_81:
  *(_WORD *)((char *)v3 + 1137) = 0;
LABEL_82:
  v57 = v59;
  sub_1419234B0(v52, &v54, 544);
  *v65 = 1;
  if ( v9 == -2 )
  {
LABEL_83:
    result = v64;
    *(_QWORD *)v64 = 2;
  }
  else
  {
    v56 = v57;
    sub_1419234B0(v53, v52, 544);
    if ( v9 == -1 )
    {
      if ( !*v3 && *v69 != 2 )
        sub_14068DB80(v69);
      *v80 = 2;
      result = v64;
      *(_QWORD *)v64 = 0;
    }
    else
    {
      v78 = (_QWORD *)v9;
      *(_QWORD *)&v54 = v77;
      *((_QWORD *)&v54 + 1) = v2;
      v55 = v56;
      if ( !*v3 && *v69 != 2 )
        sub_14068DB80(v69);
      v48 = v80;
      *v80 = 0;
      v48[1] = (__int64)v78;
      sub_1419234B0(v48 + 2, v53, 544);
      v49 = v55;
      result = v64;
      *(_OWORD *)(v64 + 8) = v54;
      *(_OWORD *)(result + 24) = v49;
      *(_QWORD *)result = 1;
    }
  }
  return result;
}
