// win 1.2.7 latest-exe | module src/core/relay/keychain.rs | ea 0x140816450 | successor of pre-update 0x140349630 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
double __fastcall sub_140816450(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 (__fastcall **v10)(); // r14
  double result; // xmm0_8
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  char v19; // al
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  int v23; // edi
  unsigned __int64 v24; // rax
  __int64 (__fastcall **v25)(); // rax
  __int64 v26; // rdi
  char *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  _QWORD v32[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v33; // [rsp+38h] [rbp-48h] BYREF
  __int64 v34; // [rsp+40h] [rbp-40h]
  char *v35; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v37; // [rsp+60h] [rbp-20h] BYREF
  __int128 v38; // [rsp+70h] [rbp-10h]
  __int128 v39; // [rsp+80h] [rbp+0h] BYREF
  __int128 v40; // [rsp+90h] [rbp+10h] BYREF
  __int128 v41; // [rsp+A0h] [rbp+20h]
  __int128 v42; // [rsp+B0h] [rbp+30h]
  __int64 v43; // [rsp+C0h] [rbp+40h]
  const char *v44; // [rsp+C8h] [rbp+48h]
  __int64 v45; // [rsp+D0h] [rbp+50h]
  __int64 v46; // [rsp+D8h] [rbp+58h]
  void *v47; // [rsp+E0h] [rbp+60h]
  __int128 *v48; // [rsp+E8h] [rbp+68h]
  __int128 *v49; // [rsp+F0h] [rbp+70h] BYREF
  __int64 (__fastcall **v50)(); // [rsp+F8h] [rbp+78h]
  __int64 v51; // [rsp+100h] [rbp+80h]
  __int64 v52; // [rsp+108h] [rbp+88h]
  __int64 v53; // [rsp+110h] [rbp+90h]
  char v54; // [rsp+11Fh] [rbp+9Fh] BYREF
  __int64 v55; // [rsp+120h] [rbp+A0h]
  _BYTE v56[2]; // [rsp+12Eh] [rbp+AEh] BYREF
  __int64 v57; // [rsp+130h] [rbp+B0h]

  v57 = -2;
  v6 = a2;
  v7 = a1;
  v33 = a3;
  v34 = a4;
  sub_140815FF0(&v40, a1, a2);
  v8 = *((_QWORD *)&v40 + 1);
  v9 = *((_QWORD *)&v41 + 1);
  v10 = (__int64 (__fastcall **)())v41;
  if ( !(_QWORD)v40 )
    goto LABEL_18;
  result = *(double *)&v42;
  v39 = v42;
  v38 = v41;
  v37 = v40;
  v12 = sub_1406D0E00(&v39, a3, a4);
  v10 = (__int64 (__fastcall **)())&v40;
  sub_140021610((unsigned int)&v40, (unsigned int)&v37, v12, a3, a4);
  v14 = v40;
  if ( (_QWORD)v40 == -1 )
  {
    v8 = -1;
LABEL_17:
    sub_14018EA10(&v37);
    v9 = 38;
    goto LABEL_18;
  }
  v8 = *((_QWORD *)&v41 + 1);
  v15 = v42;
  if ( (_QWORD)v40 )
    result = sub_140001660(*((_QWORD *)&v40 + 1), v40, 1);
  if ( v8 == -1 )
    goto LABEL_17;
  if ( v8 )
    result = sub_140001660(v15, v8, 1);
  nullsub_1(v13, v14);
  v16 = sub_140001650(128, 1);
  if ( !v16 )
    sub_14196B2DB(1, 128);
  *(_QWORD *)&v40 = 128;
  *((_QWORD *)&v40 + 1) = v16;
  *(_QWORD *)&v41 = 0;
  v49 = &v40;
  sub_14078B370(&v37, &v49);
  if ( (_QWORD)v40 == -1 )
  {
    *(_QWORD *)&v40 = *((_QWORD *)&v40 + 1);
    nullsub_1(*((_QWORD *)&v40 + 1), v17);
    v25 = (__int64 (__fastcall **)())sub_140001650(38, 1);
    if ( !v25 )
      sub_14196B2DB(1, 38);
    v10 = v25;
    result = 6.899641893683236e212;
    qmemcpy(v25, "encode legacy relay key storage failed", 38);
    sub_140032F30(&v40);
    v8 = 38;
    goto LABEL_17;
  }
  v55 = *((_QWORD *)&v40 + 1);
  v53 = v40;
  v18 = v41;
  sub_1416B18A0((unsigned int)&v40, v7, v6, (unsigned int)&unk_141A4CF02, 12);
  v52 = *((_QWORD *)&v40 + 1);
  v19 = sub_1407C8880(*((_QWORD *)&v40 + 1), v41, v55, v18);
  v22 = v20;
  if ( (v19 & 1) != 0 )
  {
    v32[0] = v20;
    v23 = v20 & 3;
    switch ( v20 & 3 )
    {
      case 0uLL:
        LOBYTE(v24) = *(_BYTE *)(v20 + 16);
        break;
      case 1uLL:
        LOBYTE(v24) = *(_BYTE *)(v20 + 31);
        break;
      case 2uLL:
        v31 = sub_1416E2EE0(v21, v20);
        LOBYTE(v24) = (*(__int64 (__fastcall **)(unsigned __int64))(v31 + 8))(HIDWORD(v22));
        break;
      case 3uLL:
        v24 = HIDWORD(v20);
        break;
    }
    v54 = v24;
    v35 = &v54;
    v36[0] = sub_1416EBC60;
    sub_1416DAFA0(&v49, &unk_141A47CFF, &v35);
    if ( (unsigned int)(v23 - 2) >= 2 && (v22 & 3) != 0 )
    {
      v36[0] = v22 - 1;
      LOBYTE(v35) = 3;
      sub_1416EBAD0(v36);
    }
    v8 = (__int64)v49;
    v10 = v50;
    v9 = v51;
    v30 = v53;
    if ( !v53 )
      goto LABEL_45;
  }
  else
  {
    sub_1407B9160(v20);
    v8 = -1;
    v30 = v53;
    if ( !v53 )
      goto LABEL_45;
  }
  result = sub_140001660(v55, v30, 1);
LABEL_45:
  sub_14018EA10(&v37);
  if ( (_QWORD)v40 )
    result = sub_140001660(v52, v40, 1);
LABEL_18:
  if ( v8 != -1 )
  {
    v49 = (__int128 *)v8;
    v50 = v10;
    v51 = v9;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v37 = &v33;
      *((_QWORD *)&v37 + 1) = sub_140191200;
      *(_QWORD *)&v38 = &v49;
      *((_QWORD *)&v38 + 1) = sub_1400015F0;
      v43 = 2;
      v44 = aCodexmateLibCo_32;
      v45 = 36;
      v47 = &unk_141A4CF37;
      v48 = &v37;
      *(_QWORD *)&v40 = 0;
      *((_QWORD *)&v40 + 1) = aCodexmateLibCo_32;
      v41 = 0x24u;
      *(_QWORD *)&v42 = aSrcCoreRelayKe;
      *((_QWORD *)&v42 + 1) = 26;
      v46 = 0xC500000001LL;
      sub_141503E20(v56, &v40);
      v8 = (__int64)v49;
    }
    if ( v8 )
      result = sub_140001660(v50, v8, 1);
  }
  sub_140817F00(&v40, v33, v34);
  v26 = *((_QWORD *)&v40 + 1);
  v27 = (char *)v40;
  if ( (_QWORD)v40 != -1 )
    goto LABEL_24;
  v53 = *((_QWORD *)&v40 + 1);
  v32[0] = *((_QWORD *)&v40 + 1);
  v55 = v41;
  v32[1] = v41;
  sub_14113A110(&v37, v32);
  v52 = v37;
  if ( (_QWORD)v37 == -1 || (_QWORD)v37 == 0x8000000000000002uLL )
  {
    if ( *(_QWORD *)v55 )
      (*(void (__fastcall **)(__int64))v55)(v53);
    v28 = *(_QWORD *)(v55 + 8);
    if ( v28 )
      result = sub_140001660(v53, v28, *(_QWORD *)(v55 + 16));
    if ( v52 != -1 )
      sub_1407781F0(&v37);
  }
  else
  {
    result = *(double *)&v37;
    v42 = v39;
    v41 = v38;
    v40 = v37;
    v35 = nullptr;
    v36[0] = 1;
    v36[1] = 0;
    v51 = 1610612768;
    v49 = (__int128 *)&v35;
    v50 = &off_141A49990;
    if ( (unsigned __int8)sub_14113A6B0(&v40, &v49) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_59,
        55,
        (unsigned int)v56,
        (unsigned int)&unk_141A481A8,
        (__int64)&off_141A4E498);
    v27 = v35;
    v26 = v36[0];
    sub_1407781F0(&v37);
    if ( *(_QWORD *)v55 )
      (*(void (__fastcall **)(__int64))v55)(v53);
    v29 = *(_QWORD *)(v55 + 8);
    if ( v29 )
      result = sub_140001660(v53, v29, *(_QWORD *)(v55 + 16));
    if ( v27 != (char *)-1LL )
    {
LABEL_24:
      if ( v27 )
        result = sub_140001660(v26, v27, 1);
      if ( *(_QWORD *)off_14223FF10 > 1u )
      {
        *(_QWORD *)&v37 = &v33;
        *((_QWORD *)&v37 + 1) = sub_140191200;
        v43 = 2;
        v44 = aCodexmateLibCo_32;
        v45 = 36;
        v47 = &unk_141A4CFAC;
        v48 = &v37;
        *(_QWORD *)&v40 = 0;
        *((_QWORD *)&v40 + 1) = aCodexmateLibCo_32;
        v41 = 0x24u;
        *(_QWORD *)&v42 = aSrcCoreRelayKe;
        *((_QWORD *)&v42 + 1) = 26;
        v46 = 0xC800000001LL;
        sub_141503E20(v56, &v40);
      }
    }
  }
  return result;
}
