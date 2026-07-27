// module: codexmate_lib/core/repository
// addr: 0x141486800
// name: sub_141486800
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141486800(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  const WCHAR *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  HANDLE FirstFile; // r15
  void *v11; // r12
  void *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  void *v18; // rdi
  void *v19; // r15
  __int64 v20; // rax
  __int64 FindFileData; // [rsp+30h] [rbp-50h] BYREF
  const WCHAR *v22; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-40h]
  _QWORD v24[3]; // [rsp+280h] [rbp+200h] BYREF
  __int64 v25; // [rsp+298h] [rbp+218h] BYREF
  const WCHAR *v26; // [rsp+2A0h] [rbp+220h]
  __int64 v27; // [rsp+2A8h] [rbp+228h]
  void *v28; // [rsp+2B0h] [rbp+230h]
  __int64 v29; // [rsp+2B8h] [rbp+238h]
  const WCHAR *v30; // [rsp+2C0h] [rbp+240h]
  void *v31; // [rsp+2C8h] [rbp+248h] BYREF
  void *v32; // [rsp+2D0h] [rbp+250h]
  __int128 v33; // [rsp+2D8h] [rbp+258h]
  void *v34; // [rsp+2E8h] [rbp+268h]
  __int64 v35; // [rsp+2F0h] [rbp+270h]
  const WCHAR *v36; // [rsp+2F8h] [rbp+278h]
  HANDLE v37; // [rsp+300h] [rbp+280h]
  char v38; // [rsp+30Eh] [rbp+28Eh]
  char v39; // [rsp+30Fh] [rbp+28Fh]
  __int64 v40; // [rsp+310h] [rbp+290h]

  v40 = -2;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 0x300000002LL;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  sub_14149BB70(&v31, a2, a3);
  v39 = 1;
  sub_14149BB70(&FindFileData, a2, a3);
  sub_141482190(&FindFileData, asc_141A3BA04, 1);
  v35 = FindFileData;
  v38 = 1;
  v36 = v22;
  sub_14148D770(&v25, v22, v23);
  v7 = v26;
  if ( v25 == -1 )
    goto LABEL_12;
  FindFileData = v25;
  v22 = v26;
  v23 = v27;
  v38 = 1;
  LOBYTE(v6) = 1;
  sub_14148A880(v24, &FindFileData, v6);
  v8 = v24[0];
  v7 = (const WCHAR *)v24[1];
  if ( v24[0] == -1 )
  {
LABEL_12:
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 2;
    if ( v35 )
      sub_140001660(v36, v35, 1);
    goto LABEL_14;
  }
  sub_1416848B0(&FindFileData, 0, 592);
  FirstFile = FindFirstFileExW(v7, FindExInfoBasic, &FindFileData, FindExSearchNameMatch, nullptr, 0);
  if ( FirstFile == (HANDLE)-1LL )
  {
    LODWORD(v16) = GetLastError();
    if ( (_DWORD)v16 == 2 )
    {
      v18 = v31;
      v19 = v32;
      nullsub_1(v17);
      v20 = sub_140001650(48, 8);
      if ( !v20 )
      {
        v34 = v19;
        v37 = v18;
        v29 = v8;
        v30 = v7;
        sub_1416C2D31(8, 48);
      }
      *(_QWORD *)v20 = 1;
      *(_QWORD *)(v20 + 8) = 1;
      *(_QWORD *)(v20 + 16) = v18;
      *(_QWORD *)(v20 + 24) = v19;
      *(_OWORD *)(v20 + 32) = v33;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = v20;
      *(_DWORD *)(a1 + 24) = 0;
      if ( v8 )
        sub_140001660(v7, 2 * v8, 2);
      if ( v35 )
        sub_140001660(v36, v35, 1);
      return a1;
    }
    *(_QWORD *)(a1 + 8) = (v16 << 32) | 2;
    *(_QWORD *)a1 = 2;
    if ( v8 )
      goto LABEL_7;
  }
  else
  {
    v11 = v31;
    v12 = v32;
    nullsub_1(v9);
    v13 = sub_140001650(48, 8);
    if ( !v13 )
    {
      v28 = v12;
      v34 = v11;
      v37 = FirstFile;
      v29 = v8;
      v30 = v7;
      sub_1416C2D31(8, 48);
    }
    v14 = v13;
    *(_QWORD *)v13 = 1;
    *(_QWORD *)(v13 + 8) = 1;
    *(_QWORD *)(v13 + 16) = v11;
    *(_QWORD *)(v13 + 24) = v12;
    *(_OWORD *)(v13 + 32) = v33;
    sub_141684120(a1 + 28, &FindFileData, 592);
    *(_QWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = FirstFile;
    *(_QWORD *)(a1 + 16) = v14;
    *(_DWORD *)(a1 + 24) = 1;
    if ( v8 )
LABEL_7:
      sub_140001660(v7, 2 * v8, 2);
  }
  if ( v35 )
    sub_140001660(v36, v35, 1);
  if ( FirstFile == (HANDLE)-1LL )
  {
LABEL_14:
    if ( v31 )
      sub_140001660(v32, v31, 1);
  }
  return a1;
}