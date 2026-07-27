// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404A2FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const WCHAR *v6; // rsi
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  _QWORD v12[10]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[3]; // [rsp+78h] [rbp-8h] BYREF
  _QWORD v14[2]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v15[3]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF
  const char *v17; // [rsp+C0h] [rbp+40h]
  __int64 v18; // [rsp+C8h] [rbp+48h]
  __int64 v19; // [rsp+D0h] [rbp+50h]
  const char *v20; // [rsp+D8h] [rbp+58h]
  __int64 v21; // [rsp+E0h] [rbp+60h]
  __int64 v22; // [rsp+E8h] [rbp+68h]
  const char *v23; // [rsp+F0h] [rbp+70h]
  __int64 v24; // [rsp+F8h] [rbp+78h]
  __int64 v25; // [rsp+100h] [rbp+80h]
  void *v26; // [rsp+108h] [rbp+88h]
  _QWORD *v27; // [rsp+110h] [rbp+90h]
  __int64 v28; // [rsp+118h] [rbp+98h]
  __int64 v29; // [rsp+120h] [rbp+A0h] BYREF
  int v30; // [rsp+12Ch] [rbp+ACh] BYREF
  LPCWSTR lpNewFileName; // [rsp+130h] [rbp+B0h]
  char v32; // [rsp+13Fh] [rbp+BFh] BYREF
  __int64 v33; // [rsp+140h] [rbp+C0h]

  v33 = -2; /*0x1404a2fbb*/
  v16 = a1; /*0x1404a2fcf*/
  v17 = (const char *)(a1 + a2); /*0x1404a2fd3*/
  LOWORD(v18) = 0; /*0x1404a2fd7*/
  LODWORD(v19) = 1; /*0x1404a2fdd*/
  sub_14031FB40(v15, &v16); /*0x1404a2fec*/
  v28 = a4; /*0x1404a2ff1*/
  v16 = a3; /*0x1404a2ffc*/
  v17 = (const char *)(a3 + a4); /*0x1404a3000*/
  LOWORD(v18) = 0; /*0x1404a3004*/
  LODWORD(v19) = 1; /*0x1404a300a*/
  sub_14031FB40(v13, &v16); /*0x1404a3019*/
  v6 = (const WCHAR *)v15[1]; /*0x1404a301f*/
  lpNewFileName = (LPCWSTR)v13[1]; /*0x1404a3027*/
  v7 = 0; /*0x1404a3043*/
  while ( !MoveFileExW(v6, lpNewFileName, 9u) ) /*0x1404a3067*/
  {
    LODWORD(v8) = GetLastError(); /*0x1404a306d*/
    v9 = (v8 << 32) | 2; /*0x1404a307a*/
    v29 = v9; /*0x1404a307e*/
    if ( (unsigned int)v8 > 0x21 || (v10 = 0x300000020LL, !_bittest64(&v10, (unsigned int)v8)) ) /*0x1404a309a*/
    {
      if ( (_DWORD)v8 != 1224 ) /*0x1404a30a5*/
        goto LABEL_11; /*0x1404a30a5*/
    }
    if ( v7 == 9 ) /*0x1404a30af*/
      goto LABEL_11; /*0x1404a30af*/
    ++v7; /*0x1404a30b5*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404a30c6*/
    {
      v30 = v7; /*0x1404a30cc*/
      v14[0] = a3; /*0x1404a30d3*/
      v14[1] = v28; /*0x1404a30de*/
      v12[0] = &v30; /*0x1404a30e9*/
      v12[1] = sub_1414AB780; /*0x1404a30ed*/
      v12[2] = &unk_14175AFE0; /*0x1404a30f8*/
      v12[3] = sub_1414AB780; /*0x1404a30fc*/
      v12[4] = v14; /*0x1404a3104*/
      v12[5] = sub_14148F3A0; /*0x1404a310f*/
      v12[6] = &v29; /*0x1404a3113*/
      v12[7] = sub_141490720; /*0x1404a311e*/
      v12[8] = &unk_14175AFE8; /*0x1404a3129*/
      v12[9] = sub_1414AC520; /*0x1404a3134*/
      v16 = 0; /*0x1404a3138*/
      v17 = aCodexmateLibCo_0; /*0x1404a3140*/
      v18 = 51; /*0x1404a3144*/
      v19 = 0; /*0x1404a314c*/
      v20 = aSrcCoreRelayCo_0; /*0x1404a315b*/
      v21 = 41; /*0x1404a315f*/
      v22 = 2; /*0x1404a3167*/
      v23 = aCodexmateLibCo_0; /*0x1404a316f*/
      v24 = 51; /*0x1404a3173*/
      v25 = 0xE6600000001LL; /*0x1404a3185*/
      v26 = &unk_14175AFF0; /*0x1404a3193*/
      v27 = v12; /*0x1404a319e*/
      sub_1412C36A0(&v32, &v16); /*0x1404a31b0*/
    }
    sub_141487490(0, 250000000); /*0x1404a31bd*/
    sub_140018650(&v29); /*0x1404a31c6*/
  }
  v9 = 0; /*0x1404a31d1*/
LABEL_11:
  if ( v13[0] ) /*0x1404a31db*/
    sub_140001660(lpNewFileName, 2LL * v13[0], 2); /*0x1404a31ed*/
  if ( v15[0] ) /*0x1404a31f9*/
    sub_140001660(v6, 2LL * v15[0], 2); /*0x1404a3207*/
  return v9; /*0x1404a320f*/
}