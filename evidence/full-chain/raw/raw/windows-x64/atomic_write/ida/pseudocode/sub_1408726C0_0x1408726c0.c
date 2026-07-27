// win 1.2.1 | module src/core/relay/atomic_write.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1408726C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  char **v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v19; // r13
  char v20; // al
  char **v21; // rdx
  __int128 v22; // rax
  __int64 v23; // rax
  _QWORD v24[4]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h] BYREF
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]
  _QWORD v29[2]; // [rsp+78h] [rbp-8h] BYREF
  __int64 v30; // [rsp+88h] [rbp+8h] BYREF
  __int64 v31; // [rsp+90h] [rbp+10h]
  __int64 v32; // [rsp+98h] [rbp+18h]
  __int64 v33; // [rsp+A0h] [rbp+20h]
  DWORD v34[2]; // [rsp+ACh] [rbp+2Ch] BYREF
  __int64 v35; // [rsp+B4h] [rbp+34h]
  int v36; // [rsp+BCh] [rbp+3Ch]
  _BYTE v37[13]; // [rsp+C0h] [rbp+40h]
  _OWORD v38[2]; // [rsp+D0h] [rbp+50h] BYREF
  char v39; // [rsp+F0h] [rbp+70h]
  char **v40; // [rsp+100h] [rbp+80h] BYREF
  __int128 v41; // [rsp+108h] [rbp+88h] BYREF
  DWORD *v42; // [rsp+118h] [rbp+98h]
  __int64 v43; // [rsp+120h] [rbp+A0h]
  char **v44; // [rsp+128h] [rbp+A8h]
  __int64 (__fastcall *v45)(); // [rsp+130h] [rbp+B0h]
  HANDLE hObject; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v47; // [rsp+140h] [rbp+C0h]
  char v48; // [rsp+14Fh] [rbp+CFh]
  __int64 v49; // [rsp+150h] [rbp+D0h]

  v49 = -2; /*0x1408726db*/
  v8 = sub_1414740B0(a1, a2); /*0x1408726f2*/
  if ( !v8 ) /*0x1408726fa*/
  {
    LOBYTE(v10) = 20; /*0x14087277b*/
    return sub_14146B840(v10, aAtomicWriteMis, 28); /*0x140872790*/
  }
  v11 = v8; /*0x1408726fc*/
  v12 = v9; /*0x1408726ff*/
  LOBYTE(v41) = 1; /*0x140872702*/
  v13 = (char **)sub_14147B9A0(&v41, v8, v9); /*0x14087271b*/
  if ( v13 ) /*0x140872721*/
    return (__int64)v13; /*0x140872721*/
  v14 = sub_1414742C0(a1, a2); /*0x14087272d*/
  if ( v14 ) /*0x140872735*/
  {
    sub_1414A3C90(&v41, v14, v15); /*0x140872744*/
    v16 = &unk_141798B1F; /*0x140872750*/
    if ( !(_BYTE)v41 ) /*0x140872757*/
      v16 = *((void **)&v41 + 1); /*0x140872757*/
    v17 = 6; /*0x14087275f*/
    if ( !(_BYTE)v41 ) /*0x140872764*/
      v17 = (__int64)v42; /*0x140872764*/
  }
  else
  {
    v17 = 6; /*0x140872795*/
    v16 = &unk_141798B1F; /*0x14087279a*/
  }
  v29[0] = v16; /*0x1408727a1*/
  v29[1] = v17; /*0x1408727a5*/
  v34[0] = GetCurrentProcessId(); /*0x1408727ae*/
  sub_141356270(&v41); /*0x1408727b8*/
  v38[0] = v41; /*0x1408727c4*/
  *(_QWORD *)&v41 = v29; /*0x1408727cc*/
  *((_QWORD *)&v41 + 1) = sub_14041F680; /*0x1408727da*/
  v42 = v34; /*0x1408727e5*/
  v43 = (__int64)sub_1414AB780; /*0x1408727f3*/
  v44 = (char **)v38; /*0x1408727fe*/
  v45 = sub_140421AE0; /*0x14087280c*/
  sub_14149C0F0(&v30, &unk_141798B25, &v41); /*0x140872825*/
  v47 = v31; /*0x140872841*/
  sub_141473FA0((unsigned int)&v26, v11, v12, v31, v32); /*0x140872848*/
  if ( v30 ) /*0x140872855*/
    sub_140001660(v47, v30, 1); /*0x140872864*/
  v19 = v28; /*0x14087286d*/
  v47 = v27; /*0x140872875*/
  sub_1414734D0(v38, v27, v28); /*0x14087287f*/
  v39 = 0; /*0x140872885*/
  v34[0] = 0; /*0x140872889*/
  v35 = 0; /*0x140872890*/
  v36 = 7; /*0x140872898*/
  *(_QWORD *)v37 = 0; /*0x14087289f*/
  *(_QWORD *)&v37[5] = 0x100000001LL; /*0x1408728a7*/
  v33 = v19; /*0x1408728c2*/
  v20 = sub_141481480(v34, v47, v19); /*0x1408728c9*/
  v13 = v21; /*0x1408728cf*/
  if ( (v20 & 1) != 0 ) /*0x1408728d4*/
  {
LABEL_29:
    sub_140892BD0((__int64)v38); /*0x1408729b7*/
    if ( *(_QWORD *)&v38[0] ) /*0x1408729c8*/
      sub_140001660(*((_QWORD *)&v38[0] + 1), *(_QWORD *)&v38[0], 1); /*0x1408729d4*/
    if ( v26 ) /*0x1408729e7*/
      sub_140001660(v47, v26, 1); /*0x1408729ef*/
    return (__int64)v13; /*0x1408729ef*/
  }
  hObject = v21; /*0x1408728da*/
  v39 = 1; /*0x1408728e1*/
  while ( 1 ) /*0x1408728e5*/
  {
LABEL_15:
    if ( !a4 ) /*0x1408728e8*/
      goto LABEL_27; /*0x1408728e8*/
    v48 = 1; /*0x1408728ee*/
    *(_QWORD *)&v22 = sub_141491C00(&hObject, a3, a4); /*0x140872902*/
    v13 = *((char ***)&v22 + 1); /*0x140872908*/
    v41 = v22; /*0x14087290b*/
    if ( (_QWORD)v22 == 1 ) /*0x14087291d*/
      break; /*0x14087291d*/
    if ( !*((_QWORD *)&v22 + 1) ) /*0x140872943*/
    {
      v13 = &off_141785228; /*0x140872b35*/
      goto LABEL_28; /*0x140872b3c*/
    }
    if ( a4 < *((_QWORD *)&v22 + 1) ) /*0x14087294f*/
    {
      v48 = 1; /*0x140872b41*/
      sub_1416C32F0(*((_QWORD *)&v22 + 1), a4, a4, &off_141785290); /*0x140872b58*/
    }
    a3 += *((_QWORD *)&v22 + 1); /*0x140872955*/
    a4 -= *((_QWORD *)&v22 + 1); /*0x140872958*/
  }
  switch ( BYTE8(v22) & 3 ) /*0x140872933*/
  {
    case 0: /*0x140872933*/
      LOBYTE(v22) = *(_BYTE *)(*((_QWORD *)&v22 + 1) + 16LL); /*0x140872935*/
      goto LABEL_24; /*0x14087293a*/
    case 1: /*0x140872933*/
      LOBYTE(v22) = *(_BYTE *)(*((_QWORD *)&v22 + 1) + 15LL); /*0x14087295d*/
      goto LABEL_24; /*0x140872962*/
    case 2: /*0x140872933*/
      goto LABEL_26;
    case 3: /*0x140872933*/
      *(_QWORD *)&v22 = HIDWORD(*((_QWORD *)&v22 + 1)); /*0x140872967*/
LABEL_24:
      if ( (_BYTE)v22 == 35 ) /*0x14087296d*/
      {
        v48 = 1; /*0x14087296f*/
        sub_140018650((char *)&v41 + 8); /*0x14087297d*/
        goto LABEL_15; /*0x140872983*/
      }
LABEL_26:
      if ( *((_QWORD *)&v22 + 1) ) /*0x14087298b*/
        goto LABEL_28; /*0x14087298b*/
LABEL_27:
      v48 = 1; /*0x14087298d*/
      v13 = (char **)sub_141474A80(&hObject); /*0x1408729a1*/
      if ( v13 ) /*0x1408729a7*/
      {
LABEL_28:
        CloseHandle(hObject); /*0x1408729a9*/
        goto LABEL_29; /*0x1408729b0*/
      }
      CloseHandle(hObject); /*0x140872a12*/
      v48 = 0; /*0x140872a18*/
      v23 = sub_140872290(v47, v33, a1, a2); /*0x140872a30*/
      v13 = (char **)v23; /*0x140872a36*/
      if ( v23 ) /*0x140872a3c*/
      {
        v40 = (char **)v23; /*0x140872a42*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140872a57*/
        {
          v25[0] = a1; /*0x140872a5d*/
          v25[1] = a2; /*0x140872a61*/
          v24[0] = v25; /*0x140872a69*/
          v24[1] = sub_14148F3A0; /*0x140872a74*/
          v24[2] = &v40; /*0x140872a7f*/
          v24[3] = sub_141490720; /*0x140872a8a*/
          *(_QWORD *)&v41 = aCodexmateLibCo_33; /*0x140872a95*/
          *((_QWORD *)&v41 + 1) = 40; /*0x140872a9c*/
          v42 = (DWORD *)aCodexmateLibCo_33; /*0x140872aa7*/
          v43 = 40; /*0x140872aae*/
          v44 = &off_141798B98; /*0x140872ac0*/
          sub_140985BA0(&unk_141798B33, v24, 2, &v41); /*0x140872adf*/
          v13 = v40; /*0x140872ae5*/
        }
        goto LABEL_29; /*0x140872aec*/
      }
      v39 = 0; /*0x140872af1*/
      v48 = 0; /*0x140872af5*/
      sub_1404A3310(v11, v12); /*0x140872b02*/
      sub_1407DB070(v38); /*0x140872b0c*/
      if ( v26 ) /*0x140872b19*/
        sub_140001660(v47, v26, 1); /*0x140872b28*/
      return 0;
  }
}