// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140249bd0 | name sub_140249BD0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140249BD0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+30h] [rbp-50h]
  int v9; // [rsp+38h] [rbp-48h]
  int v10; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v11; // [rsp+4Ch] [rbp-34h]
  int v12; // [rsp+54h] [rbp-2Ch]
  _QWORD v13[2]; // [rsp+58h] [rbp-28h]
  char *v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-10h] BYREF
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp-8h]
  void **v17; // [rsp+80h] [rbp+0h]
  __int64 (__fastcall *v18)(_QWORD, _QWORD); // [rsp+88h] [rbp+8h]
  __int64 v19; // [rsp+90h] [rbp+10h] BYREF
  const char *v20; // [rsp+98h] [rbp+18h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+20h]
  __int64 v22; // [rsp+A8h] [rbp+28h]
  const char *v23; // [rsp+B0h] [rbp+30h]
  __int64 v24; // [rsp+B8h] [rbp+38h]
  __int64 v25; // [rsp+C0h] [rbp+40h]
  const char *v26; // [rsp+C8h] [rbp+48h]
  __int64 v27; // [rsp+D0h] [rbp+50h]
  __int64 v28; // [rsp+D8h] [rbp+58h]
  void *v29; // [rsp+E0h] [rbp+60h]
  __int64 **v30; // [rsp+E8h] [rbp+68h]
  __int64 v31; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+78h]
  HANDLE hObject; // [rsp+100h] [rbp+80h]
  char *v34; // [rsp+108h] [rbp+88h] BYREF
  char v35; // [rsp+117h] [rbp+97h] BYREF
  __int64 v36; // [rsp+118h] [rbp+98h]

  v36 = -2;
  if ( *(_DWORD *)a3 == 1 )
  {
    v7[0] = 0;
    v9 = 0;
    v7[3] = 1;
    v8 = *(_QWORD *)(a3 + 4);
    v10 = 0;
    v11 = 0;
    v12 = 7;
    v13[0] = 0;
    *(_QWORD *)((char *)v13 + 5) = 1;
    if ( (sub_141690E40(&v10) & 1) != 0 )
    {
      v34 = v5;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v31 = a1;
        v32 = a2;
        v15 = &v31;
        v16 = sub_14169F630;
        v17 = (void **)&v34;
        v18 = sub_1416BB0B0;
        v25 = 2;
        v26 = aCodexmateLibCo_0;
        v27 = 51;
        v29 = &unk_1419DF4B6;
        v30 = &v15;
        v19 = 0;
        v20 = aCodexmateLibCo_0;
        v21 = 51;
        v22 = 0;
        v23 = aSrcCoreRelayCo_0;
        v24 = 41;
        v28 = 0x14B300000001LL;
        sub_1414D53A0(&v35, &v19);
        v5 = v34;
      }
      if ( ((unsigned __int8)v5 & 3u) - 2 >= 2 && ((unsigned __int8)v5 & 3) != 0 )
      {
        v20 = v5 - 1;
        LOBYTE(v19) = 3;
        sub_1416BCB00(&v20);
      }
    }
    else
    {
      hObject = v5;
      v14 = v5;
      v6 = sub_141683280(&v14, v7);
      if ( v6 )
      {
        v34 = (char *)v6;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v31 = a1;
          v32 = a2;
          v15 = &v31;
          v16 = sub_14169F630;
          v17 = (void **)&v34;
          v18 = sub_1416BB0B0;
          v25 = 2;
          v26 = aCodexmateLibCo_0;
          v27 = 51;
          v29 = &unk_1419DF479;
          v30 = &v15;
          v19 = 0;
          v20 = aCodexmateLibCo_0;
          v21 = 51;
          v22 = 0;
          v23 = aSrcCoreRelayCo_0;
          v24 = 41;
          v28 = 0x14AC00000001LL;
          sub_1414D53A0(&v35, &v19);
          v6 = (__int64)v34;
        }
        if ( (unsigned int)(v6 & 3) - 2 >= 2 && (v6 & 3) != 0 )
        {
          v20 = (const char *)(v6 - 1);
          LOBYTE(v19) = 3;
          sub_1416BCB00(&v20);
        }
      }
      CloseHandle(hObject);
    }
  }
}
