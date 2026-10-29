// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14022fd20 | name sub_14022FD20
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14022FD20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const WCHAR *v6; // rsi
  int v7; // r13d
  __int64 LastError; // r14
  __int64 v9; // r12
  __int64 v10; // rcx
  _QWORD v12[10]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[3]; // [rsp+78h] [rbp-8h] BYREF
  _QWORD v14[2]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v15[3]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+38h]
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF
  const char *v18; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+50h]
  __int64 v20; // [rsp+D8h] [rbp+58h]
  const char *v21; // [rsp+E0h] [rbp+60h]
  __int64 v22; // [rsp+E8h] [rbp+68h]
  __int64 v23; // [rsp+F0h] [rbp+70h]
  const char *v24; // [rsp+F8h] [rbp+78h]
  __int64 v25; // [rsp+100h] [rbp+80h]
  __int64 v26; // [rsp+108h] [rbp+88h]
  void *v27; // [rsp+110h] [rbp+90h]
  _QWORD *v28; // [rsp+118h] [rbp+98h]
  int v29; // [rsp+124h] [rbp+A4h] BYREF
  __int64 v30; // [rsp+128h] [rbp+A8h] BYREF
  LPCWSTR lpNewFileName; // [rsp+130h] [rbp+B0h]
  char v32; // [rsp+13Fh] [rbp+BFh] BYREF
  __int64 v33; // [rsp+140h] [rbp+C0h]

  v33 = -2;
  v17 = a1;
  v18 = (const char *)(a1 + a2);
  LOWORD(v19) = 0;
  LODWORD(v20) = 1;
  sub_1403E4290(v15, &v17);
  v16 = a4;
  v17 = a3;
  v18 = (const char *)(a3 + a4);
  LOWORD(v19) = 0;
  LODWORD(v20) = 1;
  sub_1403E4290(v13, &v17);
  v6 = (const WCHAR *)v15[1];
  lpNewFileName = (LPCWSTR)v13[1];
  v7 = 0;
  while ( !MoveFileExW(v6, lpNewFileName, 9u) )
  {
    LastError = GetLastError();
    if ( *off_1421E7288 != &off_1419D4060 )
      sub_1419394C0(&off_1419D4060);
    v9 = (LastError << 32) | 2;
    v30 = v9;
    if ( (unsigned int)LastError > 0x21 || (v10 = 0x300000020LL, !_bittest64(&v10, (unsigned int)LastError)) )
    {
      if ( (_DWORD)LastError != 1224 )
        goto LABEL_15;
    }
    if ( v7 == 9 )
      goto LABEL_15;
    ++v7;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v29 = v7;
      v14[0] = a3;
      v14[1] = v16;
      v12[0] = &v29;
      v12[1] = sub_1416BBD00;
      v12[2] = "\n";
      v12[3] = sub_1416BBD00;
      v12[4] = v14;
      v12[5] = sub_14169F630;
      v12[6] = &v30;
      v12[7] = sub_1416BB0B0;
      v12[8] = &unk_1419DE1D0;
      v12[9] = sub_1416BCB10;
      v23 = 2;
      v24 = aCodexmateLibCo_0;
      v25 = 51;
      v27 = &unk_1419DE1D8;
      v28 = v12;
      v17 = 0;
      v18 = aCodexmateLibCo_0;
      v19 = 51;
      v20 = 0;
      v21 = aSrcCoreRelayCo_0;
      v22 = 41;
      v26 = 0x155600000001LL;
      sub_1414D53A0(&v32, &v17);
    }
    sub_141696800(0, 250000000);
    if ( (unsigned int)(v30 & 3) - 2 >= 2 && (v30 & 3) != 0 )
    {
      v18 = (const char *)(v30 - 1);
      LOBYTE(v17) = 3;
      sub_1416BCB00(&v18);
    }
  }
  v9 = 0;
LABEL_15:
  if ( v13[0] )
    sub_140001660(lpNewFileName, 2LL * v13[0], 2);
  if ( v15[0] )
    sub_140001660(v6, 2LL * v15[0], 2);
  return v9;
}
