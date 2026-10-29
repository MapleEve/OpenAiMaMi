// win 1.2.7 | module src/platform/process.rs | ea 0x140eed2b0 | name sub_140EED2B0
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EED2B0(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r12
  HANDLE v10; // r13
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v13; // r14
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r14
  unsigned int v26; // r15d
  unsigned __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rsi
  HANDLE v30; // r14
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // r15
  unsigned int v43; // r12d
  unsigned __int64 v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rdx
  _QWORD v47[21]; // [rsp+30h] [rbp-50h] BYREF
  int v48; // [rsp+DCh] [rbp+5Ch]
  __int128 v49; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v50; // [rsp+F8h] [rbp+78h]
  __int64 *v51; // [rsp+100h] [rbp+80h] BYREF
  __int64 (__fastcall *v52)(_QWORD, _QWORD, _QWORD); // [rsp+108h] [rbp+88h]
  __int64 v53; // [rsp+110h] [rbp+90h]
  int v54; // [rsp+1ACh] [rbp+12Ch]
  __int64 v55; // [rsp+1B8h] [rbp+138h] BYREF
  HANDLE v56; // [rsp+1C0h] [rbp+140h]
  __int64 v57; // [rsp+1C8h] [rbp+148h]
  void *v58; // [rsp+1D0h] [rbp+150h]
  __int64 v59; // [rsp+1D8h] [rbp+158h]
  void *v60; // [rsp+1E0h] [rbp+160h]
  HANDLE hObject; // [rsp+1E8h] [rbp+168h]
  HANDLE v62; // [rsp+1F0h] [rbp+170h]
  _QWORD *v63; // [rsp+1F8h] [rbp+178h]
  __int64 v64; // [rsp+200h] [rbp+180h]
  HANDLE v65; // [rsp+208h] [rbp+188h]
  HANDLE v66; // [rsp+210h] [rbp+190h]
  _QWORD v67[3]; // [rsp+218h] [rbp+198h] BYREF
  __int64 v68; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 (__fastcall *v69)(_QWORD, _QWORD, _QWORD); // [rsp+238h] [rbp+1B8h]
  __int64 v70; // [rsp+240h] [rbp+1C0h]
  char *v71; // [rsp+248h] [rbp+1C8h] BYREF
  HANDLE *v72; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 (__fastcall *v73)(); // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v74; // [rsp+260h] [rbp+1E0h]
  __int64 (__fastcall *v75)(_QWORD, _QWORD, _QWORD); // [rsp+268h] [rbp+1E8h]
  __int64 v76; // [rsp+270h] [rbp+1F0h]

  v76 = -2;
  if ( !(unsigned __int8)sub_140EF1B70(a2, a3) )
  {
    v47[0] = a2;
    v47[1] = a3;
    v51 = v47;
    v52 = sub_14169F630;
    result = sub_1416ABFD0(a1 + 1, &unk_141A5AEFF, &v51);
    *a1 = 9;
    return result;
  }
  sub_14168A510(v47, a2, a3);
  v48 = 0x8000000;
  v6 = sub_141682A00(a2, a3);
  if ( v6 )
    sub_14168A4C0(v47, v6, v7);
  sub_14168DB10(&v51, v47);
  if ( (_DWORD)v51 != 2 )
  {
    sub_140E95780((__int64 *)&v51);
    v19 = sub_14167FC00(v16, v15, v17, v18);
    v25 = sub_1416A1240(v19, v20, 10, 0, (__int64)&off_141A5A680);
    v26 = v21;
    while ( 1 )
    {
      v27 = sub_14167FC00(v22, v21, v23, v24);
      if ( v27 == v25 )
      {
        if ( v28 >= v26 )
          goto LABEL_6;
      }
      else if ( v27 >= v25 )
      {
        goto LABEL_6;
      }
      if ( (unsigned int)sub_141040BC0((__int64)aChatgpt, 7) == 1 )
        break;
      sub_141696800(0, 80000000);
    }
    *a1 = -1;
    return sub_14029BE30(v47);
  }
  sub_140E95780((__int64 *)&v51);
LABEL_6:
  sub_1416AB5A0(&v51, a2, a3);
  v75 = v52;
  sub_140E94CD0((unsigned int)v67, (_DWORD)v52, v53, 39, (__int64)asc_141A5AA88, 2);
  if ( (__int64)v51 > 0 )
    sub_140001660(v75, v51, 1);
  sub_14168A510(&v51, aPowershell, 10);
  v54 = 0x8000000;
  v72 = (HANDLE *)v67;
  v73 = sub_1400015F0;
  sub_1416ABFD0(&v68, &unk_141A5AF31, &v72);
  v74 = v68;
  v75 = v69;
  v8 = v70;
  sub_14168A3F0(&v51, aNoprofile, 10);
  sub_14168A3F0(&v51, aWindowstyle, 12);
  sub_14168A3F0(&v51, aHidden_3, 6);
  sub_14168A3F0(&v51, aCommand_2, 8);
  sub_14168A3F0(&v51, v75, v8);
  sub_14168DB10(&v55, &v51);
  v9 = v55;
  v10 = v56;
  if ( v55 == 2 )
  {
    v71 = (char *)v56;
    v72 = (HANDLE *)&v71;
    v73 = (__int64 (__fastcall *)())sub_1416BB0B0;
    sub_1416ABFD0(&v68, &unk_141A5767F, &v72);
    v11 = v68;
    v12 = v69;
    v13 = v70;
    if ( ((unsigned __int8)v71 & 3u) - 2 >= 2 && ((unsigned __int8)v71 & 3) != 0 )
    {
      v73 = (__int64 (__fastcall *)())(v71 - 1);
      LOBYTE(v72) = 3;
      sub_1416BCB00(&v73);
    }
    *a1 = 10;
    a1[1] = v11;
    a1[2] = v12;
    a1[3] = v13;
    if ( v74 )
      sub_140001660(v75, v74, 1);
    sub_14029BE30(&v51);
LABEL_40:
    v46 = v67[0];
    if ( !v67[0] )
      return sub_14029BE30(v47);
  }
  else
  {
    v63 = a1;
    v29 = v57;
    v66 = v58;
    v64 = v59;
    v65 = v60;
    v30 = v62;
    CloseHandle(hObject);
    CloseHandle(v30);
    if ( v9 )
      CloseHandle(v10);
    if ( v29 )
      CloseHandle(v66);
    v31 = v63;
    if ( v64 )
      CloseHandle(v65);
    if ( v74 )
      sub_140001660(v75, v74, 1);
    sub_14029BE30(&v51);
    v36 = sub_14167FC00(v33, v32, v34, v35);
    v42 = sub_1416A1240(v36, v37, 10, 0, (__int64)&off_141A5A680);
    v43 = v38;
    while ( 1 )
    {
      v44 = sub_14167FC00(v39, v38, v40, v41);
      if ( v44 == v42 )
      {
        if ( v45 >= v43 )
          goto LABEL_39;
      }
      else if ( v44 >= v42 )
      {
LABEL_39:
        v55 = a2;
        v56 = a3;
        v51 = &v55;
        v52 = sub_14169F630;
        sub_1416ABFD0(&v49, &unk_141A5AF73, &v51);
        v31[3] = v50;
        *(_OWORD *)(v31 + 1) = v49;
        *v31 = 10;
        goto LABEL_40;
      }
      if ( (unsigned int)sub_141040BC0((__int64)aChatgpt, 7) == 1 )
        break;
      sub_141696800(0, 80000000);
    }
    *v31 = -1;
    v46 = v67[0];
    if ( !v67[0] )
      return sub_14029BE30(v47);
  }
  sub_140001660(v67[1], v46, 1);
  return sub_14029BE30(v47);
}
