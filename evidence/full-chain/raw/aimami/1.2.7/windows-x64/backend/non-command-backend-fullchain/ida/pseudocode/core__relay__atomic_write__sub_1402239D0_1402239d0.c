// win 1.2.7 | module src/core/relay/atomic_write.rs | ea 0x1402239d0 | name sub_1402239D0
// win 1.2.7 | module src/core/relay/atomic_write.rs | attributed via panic-Location xref (win-native)
_BOOL8 __fastcall sub_1402239D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  const WCHAR *v9; // rbx
  int v10; // r15d
  __int64 LastError; // r14
  __int64 v12; // r12
  __int64 v13; // rcx
  _QWORD v15[10]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v16[3]; // [rsp+70h] [rbp-10h] BYREF
  _QWORD v17[2]; // [rsp+88h] [rbp+8h] BYREF
  _QWORD v18[3]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+30h] BYREF
  const char *v20; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+40h]
  __int64 v22; // [rsp+C8h] [rbp+48h]
  const char *v23; // [rsp+D0h] [rbp+50h]
  __int64 v24; // [rsp+D8h] [rbp+58h]
  __int64 v25; // [rsp+E0h] [rbp+60h]
  const char *v26; // [rsp+E8h] [rbp+68h]
  __int64 v27; // [rsp+F0h] [rbp+70h]
  __int64 v28; // [rsp+F8h] [rbp+78h]
  void *v29; // [rsp+100h] [rbp+80h]
  _QWORD *v30; // [rsp+108h] [rbp+88h]
  int v31; // [rsp+114h] [rbp+94h] BYREF
  __int64 v32; // [rsp+118h] [rbp+98h] BYREF
  LPCWSTR lpNewFileName; // [rsp+120h] [rbp+A0h]
  char v34; // [rsp+12Fh] [rbp+AFh] BYREF
  __int64 v35; // [rsp+130h] [rbp+B0h]

  v35 = -2;
  if ( sub_141682A00(a3, a4) )
  {
    v19 = a1;
    v20 = (const char *)(a1 + a2);
    LOWORD(v21) = 0;
    LODWORD(v22) = 1;
    sub_1403E4290(v18, &v19);
    v19 = a3;
    v20 = (const char *)(a3 + a4);
    LOWORD(v21) = 0;
    LODWORD(v22) = 1;
    sub_1403E4290(v16, &v19);
    v9 = (const WCHAR *)v18[1];
    lpNewFileName = (LPCWSTR)v16[1];
    v10 = 0;
    while ( !MoveFileExW(v9, lpNewFileName, 9u) )
    {
      LastError = GetLastError();
      if ( *off_1421E7288 != &off_1419D4060 )
        sub_1419394C0(&off_1419D4060);
      v12 = (LastError << 32) | 2;
      v32 = v12;
      if ( (unsigned int)LastError > 0x21 || (v13 = 0x300000020LL, !_bittest64(&v13, (unsigned int)LastError)) )
      {
        if ( (_DWORD)LastError != 1224 )
          goto LABEL_17;
      }
      if ( v10 == 9 )
        goto LABEL_17;
      ++v10;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v31 = v10;
        v17[0] = a3;
        v17[1] = a4;
        v15[0] = &v31;
        v15[1] = sub_1416BBD00;
        v15[2] = "\n";
        v15[3] = sub_1416BBD00;
        v15[4] = v17;
        v15[5] = sub_14169F630;
        v15[6] = &v32;
        v15[7] = sub_1416BB0B0;
        v15[8] = &unk_1419DBAA0;
        v15[9] = sub_1416BCB10;
        v25 = 2;
        v26 = aCodexmateLibCo_20;
        v27 = 40;
        v29 = &unk_1419DCE78;
        v30 = v15;
        v19 = 0;
        v20 = aCodexmateLibCo_20;
        v21 = 40;
        v22 = 0;
        v23 = aSrcCoreRelayAt;
        v24 = 30;
        v28 = 0x16700000001LL;
        sub_1414D53A0(&v34, &v19);
      }
      sub_141696800(0, 500000000);
      if ( (unsigned int)(v32 & 3) - 2 >= 2 && (v32 & 3) != 0 )
      {
        v20 = (const char *)(v32 - 1);
        LOBYTE(v19) = 3;
        sub_1416BCB00(&v20);
      }
    }
    v12 = 0;
LABEL_17:
    if ( v16[0] )
      sub_140001660(lpNewFileName, 2LL * v16[0], 2);
    if ( v18[0] )
      sub_140001660(v9, 2LL * v18[0], 2);
    return v12 != 0;
  }
  else
  {
    LOBYTE(v8) = 20;
    sub_1416793A0(v8, aAtomicReplaceM, 30);
    return 1;
  }
}
