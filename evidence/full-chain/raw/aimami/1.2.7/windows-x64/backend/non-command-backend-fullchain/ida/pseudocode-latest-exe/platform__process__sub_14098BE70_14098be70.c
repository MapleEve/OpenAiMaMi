// win 1.2.7 latest-exe | module src/platform/process.rs | ea 0x14098be70 | successor of pre-update 0x140eec140 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.968, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_14098BE70(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 *v15; // rcx
  __int64 v16; // rdx
  __m128 v17; // xmm2
  unsigned __int64 v18; // rcx
  __int64 v19; // r9
  _QWORD *v20; // rax
  DWORD List; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  RM_PROCESS_INFO *v26; // r15
  _QWORD *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  WCHAR strSessionKey[8]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v33; // [rsp+50h] [rbp-30h]
  __int128 v34; // [rsp+60h] [rbp-20h]
  __int128 v35; // [rsp+70h] [rbp-10h]
  __int16 v36; // [rsp+80h] [rbp+0h]
  _QWORD v37[2]; // [rsp+90h] [rbp+10h] BYREF
  UINT nFiles[2]; // [rsp+A0h] [rbp+20h]
  __int64 v39; // [rsp+A8h] [rbp+28h]
  _OWORD v40[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v41; // [rsp+D0h] [rbp+50h]
  __int64 v42; // [rsp+D8h] [rbp+58h]
  const char *v43; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v44; // [rsp+E8h] [rbp+68h]
  __int64 v45; // [rsp+F0h] [rbp+70h]
  __int64 v46; // [rsp+F8h] [rbp+78h]
  char **v47; // [rsp+100h] [rbp+80h]
  __int64 p_CurrentProcessId; // [rsp+108h] [rbp+88h]
  __int64 v49; // [rsp+110h] [rbp+90h]
  const char *v50; // [rsp+118h] [rbp+98h]
  __int64 v51; // [rsp+120h] [rbp+A0h]
  __int64 v52; // [rsp+128h] [rbp+A8h]
  void *v53; // [rsp+130h] [rbp+B0h]
  _OWORD *v54; // [rsp+138h] [rbp+B8h]
  DWORD CurrentProcessId; // [rsp+140h] [rbp+C0h] BYREF
  DWORD v56; // [rsp+144h] [rbp+C4h] BYREF
  DWORD v57; // [rsp+148h] [rbp+C8h] BYREF
  DWORD dwRebootReasons; // [rsp+14Ch] [rbp+CCh] BYREF
  DWORD v59; // [rsp+150h] [rbp+D0h] BYREF
  DWORD started; // [rsp+154h] [rbp+D4h] BYREF
  RM_PROCESS_INFO *v61; // [rsp+158h] [rbp+D8h]
  __int64 v62; // [rsp+160h] [rbp+E0h]
  __int64 v63; // [rsp+168h] [rbp+E8h]
  UINT pnProcInfo; // [rsp+170h] [rbp+F0h] BYREF
  UINT pnProcInfoNeeded; // [rsp+174h] [rbp+F4h] BYREF
  unsigned __int64 v66; // [rsp+178h] [rbp+F8h]
  __int64 v67; // [rsp+180h] [rbp+100h]
  DWORD pSessionHandle; // [rsp+188h] [rbp+108h] BYREF
  char v69; // [rsp+18Eh] [rbp+10Eh] BYREF
  char v70; // [rsp+18Fh] [rbp+10Fh]
  __int64 v71; // [rsp+190h] [rbp+110h]

  v71 = -2;
  if ( !a3 )
    goto LABEL_5;
  pSessionHandle = 0;
  v35 = 0;
  v34 = 0;
  v33 = 0;
  *(_OWORD *)strSessionKey = 0;
  v36 = 0;
  started = RmStartSession(&pSessionHandle, 0, strSessionKey);
  if ( started )
  {
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v40[0] = &started;
      *((_QWORD *)&v40[0] + 1) = sub_1416EACD0;
      v49 = 2;
      v50 = aCodexmateLibPl_1;
      v51 = 32;
      v53 = &unk_141A5D84C;
      v54 = v40;
      v43 = nullptr;
      v44 = (__int64)aCodexmateLibPl_1;
      v45 = 32;
      v46 = 0;
      v47 = (char **)aSrcPlatformPro_0;
      p_CurrentProcessId = 23;
      v52 = 0x3E600000001LL;
      sub_141503E20(&v69, &v43);
    }
LABEL_5:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    return;
  }
  sub_140225D10(v37, a2, a2 + 32 * a3);
  v8 = v37[1];
  v9 = *(_QWORD *)nFiles;
  v10 = 8LL * *(_QWORD *)nFiles;
  if ( *(_QWORD *)nFiles )
  {
    nullsub_1(v7, v6);
    v11 = sub_140001650(v10, 8);
    if ( !v11 )
      sub_14196B2DB(8, v10);
    v12 = v11;
    if ( v9 <= 0x12 || v8 + 8 < v11 + 8 * v9 && v11 < v8 + 24 * v9 - 8 )
    {
      v13 = 0;
    }
    else
    {
      v14 = 4;
      if ( (v9 & 3) != 0 )
        v14 = v9 & 3;
      v13 = v9 - v14;
      v15 = (unsigned __int64 *)(v8 + 80);
      v16 = 0;
      do
      {
        v17 = _mm_movelh_ps((__m128)*(v15 - 3), (__m128)*v15);
        *(__m128 *)(v12 + 8 * v16) = _mm_movelh_ps((__m128)*(v15 - 9), (__m128)*(v15 - 6));
        *(__m128 *)(v12 + 8 * v16 + 16) = v17;
        v16 += 4;
        v15 += 12;
      }
      while ( v13 != v16 );
    }
    v18 = v13;
    if ( (((_BYTE)v9 - (_BYTE)v13) & 3) != 0 )
    {
      v19 = 0;
      v18 = v13;
      do
      {
        *(_QWORD *)(v12 + 8 * v18++) = *(_QWORD *)(v8 + 24 * v13 + 8 + 8 * v19);
        v19 += 3;
      }
      while ( 3LL * (((_BYTE)v9 - (_BYTE)v13) & 3) != v19 );
    }
    if ( v13 - v9 <= 0xFFFFFFFFFFFFFFFCuLL )
    {
      v20 = (_QWORD *)(v8 + 24 * v18 + 80);
      do
      {
        *(_QWORD *)(v12 + 8 * v18) = *(v20 - 9);
        *(_QWORD *)(v12 + 8 * v18 + 8) = *(v20 - 6);
        *(_QWORD *)(v12 + 8 * v18 + 16) = *(v20 - 3);
        *(_QWORD *)(v12 + 8 * v18 + 24) = *v20;
        v18 += 4LL;
        v20 += 12;
      }
      while ( v9 != v18 );
    }
  }
  else
  {
    v12 = 8;
  }
  v59 = RmRegisterResources(pSessionHandle, v9, (LPCWSTR *)v12, 0, nullptr, 0, nullptr);
  if ( v59 )
  {
    if ( *(_QWORD *)off_14223FF10 < 2u )
    {
LABEL_36:
      *a1 = 0;
      a1[1] = 8;
      a1[2] = 0;
      goto LABEL_37;
    }
    v63 = v12;
    v67 = v10;
    v66 = v9;
    *(_QWORD *)&v40[0] = &v59;
    *((_QWORD *)&v40[0] + 1) = sub_1416EACD0;
    v49 = 2;
    v50 = aCodexmateLibPl_1;
    v51 = 32;
    v53 = &unk_141A59A50;
    v54 = v40;
    v43 = nullptr;
    v44 = (__int64)aCodexmateLibPl_1;
    v45 = 32;
    v46 = 0;
    v47 = (char **)aSrcPlatformPro_0;
    p_CurrentProcessId = 23;
    v52 = 0x3F900000001LL;
    sub_141503E20(&v69, &v43);
LABEL_25:
    v9 = v66;
    v10 = v67;
    v12 = v63;
    goto LABEL_36;
  }
  pnProcInfoNeeded = 0;
  pnProcInfo = 0;
  dwRebootReasons = 0;
  List = RmGetList(pSessionHandle, &pnProcInfoNeeded, &pnProcInfo, nullptr, &dwRebootReasons);
  v57 = List;
  if ( !List )
    goto LABEL_36;
  v24 = pnProcInfoNeeded;
  if ( !pnProcInfoNeeded )
    goto LABEL_36;
  if ( List != 234 )
  {
    if ( *(_QWORD *)off_14223FF10 < 2u )
      goto LABEL_36;
    v63 = v12;
    v67 = v10;
    v66 = v9;
    *(_QWORD *)&v40[0] = &v57;
    *((_QWORD *)&v40[0] + 1) = sub_1416EACD0;
    v43 = aCodexmateLibPl_1;
    v44 = 32;
    v45 = (__int64)aCodexmateLibPl_1;
    v46 = 32;
    v47 = &off_141A59A38;
    sub_140AF72B0(&unk_141A59A00, v40, 2, &v43);
    goto LABEL_25;
  }
  v63 = v12;
  nullsub_1(v23, v22);
  v62 = 668 * v24;
  v25 = sub_140001650(668 * v24, 4);
  if ( !v25 )
  {
    v67 = v10;
    v66 = v9;
    sub_14196B2DB(4, v62);
  }
  v26 = (RM_PROCESS_INFO *)v25;
  v39 = 668LL * (unsigned int)(v24 - 1);
  sub_141923C40(v25, 0, v39 + 668);
  pnProcInfo = pnProcInfoNeeded;
  v61 = v26;
  v56 = RmGetList(pSessionHandle, &pnProcInfoNeeded, &pnProcInfo, v26, &dwRebootReasons);
  if ( !v56 )
  {
    v29 = v39;
    v67 = v10;
    v66 = v9;
    v70 = 1;
    CurrentProcessId = GetCurrentProcessId();
    v70 = 1;
    v30 = sub_140AA0D00(&off_141A57960);
    v40[1] = xmmword_141A57990;
    v40[0] = *(_OWORD *)&off_141A57980;
    v41 = v30;
    v42 = v31;
    v43 = (const char *)v61;
    v44 = (__int64)v61;
    v45 = v24;
    v46 = (__int64)&v61[1] + v29;
    v47 = (char **)pnProcInfo;
    p_CurrentProcessId = (__int64)&CurrentProcessId;
    v49 = (__int64)v40;
    sub_140218C30(a1, &v43);
    sub_140191040(v40);
    if ( v66 )
      sub_140001660(v63, v67, 8);
    sub_140234150(v37);
    goto LABEL_45;
  }
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    v67 = v10;
    v66 = v9;
    *(_QWORD *)&v40[0] = &v56;
    *((_QWORD *)&v40[0] + 1) = sub_1416EACD0;
    v43 = aCodexmateLibPl_1;
    v44 = 32;
    v45 = (__int64)aCodexmateLibPl_1;
    v46 = 32;
    v47 = &off_141A599E8;
    v70 = 1;
    sub_140AF72B0(&unk_141A599BB, v40, 2, &v43);
    v9 = v66;
    v10 = v67;
  }
  *a1 = 0;
  a1[1] = 8;
  a1[2] = 0;
  sub_140001660(v61, v62, 4);
  v12 = v63;
LABEL_37:
  if ( v9 )
  {
    sub_140001660(v12, v10, 8);
    v27 = (_QWORD *)(v8 + 8);
    do
    {
      v28 = *(v27 - 1);
      if ( v28 )
        sub_140001660(*v27, 2 * v28, 2);
      v27 += 3;
      --v9;
    }
    while ( v9 );
  }
LABEL_45:
  if ( v37[0] )
    sub_140001660(v8, 24LL * v37[0], 8);
  RmEndSession(pSessionHandle);
}
