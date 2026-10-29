// win 1.2.7 latest-exe | module src/platform/system_volume_windows.rs | ea 0x140d4b420 | successor of pre-update 0x14021b9d0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.938, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
void sub_140D4B420()
{
  HRESULT v0; // eax
  __int64 (__fastcall *v1)(LPVOID, _QWORD, _QWORD, __int64 *); // rax
  int v2; // esi
  __int64 (__fastcall *v3)(__int64, void *, __int64, _QWORD, const char **); // rax
  int v4; // esi
  __int64 (__fastcall *v5)(const char *, float *); // rax
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // r8
  const char *v9; // rcx
  int v10; // ebx
  bool v11; // r14
  int v12; // xmm7_4
  __int64 *v13; // rdi
  int v14; // r15d
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  char v23; // al
  const char *v24; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v25[56]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+1F0h] [rbp+170h]
  __int64 v27; // [rsp+1F8h] [rbp+178h]
  __int64 v28; // [rsp+408h] [rbp+388h] BYREF
  __int64 v29; // [rsp+410h] [rbp+390h]
  __int64 v30; // [rsp+418h] [rbp+398h]
  __int64 v31; // [rsp+428h] [rbp+3A8h]
  LPVOID ppv; // [rsp+430h] [rbp+3B0h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+438h] [rbp+3B8h] BYREF
  int v34; // [rsp+440h] [rbp+3C0h]
  float v35; // [rsp+444h] [rbp+3C4h] BYREF
  __int64 v36; // [rsp+448h] [rbp+3C8h]

  v36 = -2;
  CoInitializeEx(nullptr, 0);
  ppv = nullptr;
  v0 = CoCreateInstance(&stru_141A97254, nullptr, 0x17u, &stru_141A97264, &ppv);
  if ( v0 != 0 || ppv == nullptr )
    return;
  v1 = *(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL);
  v28 = 0;
  v2 = v1(ppv, 0, 0, &v28);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v2 != 0 || v28 == 0 )
    return;
  v3 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, const char **))(*(_QWORD *)v28 + 24LL);
  v24 = nullptr;
  v4 = v3(v28, &unk_141A97274, 23, 0, &v24);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v4 != 0 || v24 == nullptr )
    return;
  v5 = *(__int64 (__fastcall **)(const char *, float *))(*(_QWORD *)v24 + 72LL);
  v35 = 0.0;
  v7 = v5(v24, &v35);
  v9 = v24;
  if ( v24 )
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v24 + 16LL))(v24);
  v10 = 0;
  v11 = v7 == 0;
  if ( v7 )
    return;
  v12 = LODWORD(v35);
  if ( v35 < 0.0099999998 )
    return;
  LOBYTE(v9) = 1;
  if ( _InterlockedCompareExchange8(&byte_1422404C8, 1, 0) )
    sub_141969A30(&byte_1422404C8);
  v13 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v14 = sub_14196A710(v9, v6, v8);
    LOBYTE(v14) = v14 ^ 1;
    if ( byte_1422404C9 )
      goto LABEL_17;
LABEL_23:
    if ( !dword_1422404CC )
    {
      v34 = v14;
      LOBYTE(v10) = v11;
      dword_1422404CC = v10;
      dword_1422404D0 = v12;
      v35 = *(float *)&v12;
      sub_140A2EC30(&v24);
      sub_1416B18A0((unsigned int)&v28, v26, v27, (unsigned int)&unk_141A97232, 24);
      sub_140038710(&v24);
      v31 = v29;
      v16 = sub_1416B19D0(v29, v30);
      if ( v16 )
      {
        LOBYTE(v24) = 1;
        v18 = sub_1416B9760(&v24, v16, v17);
        if ( v18 )
        {
          if ( (unsigned int)(v18 & 3) - 2 >= 2 && (v18 & 3) != 0 )
          {
            v25[0] = v18 - 1;
            LOBYTE(v24) = 3;
            sub_1416EBAD0(v25);
          }
        }
      }
      ppv = &v35;
      v33 = sub_1416EA170;
      sub_1416DAFA0(&v24, &unk_141A9724A, &ppv);
      v19 = sub_14077AE80(&v28, &v24);
      if ( v19 && (unsigned int)(v19 & 3) - 2 >= 2 && (v19 & 3) != 0 )
      {
        v33 = (__int64 (__fastcall *)())(v19 - 1);
        LOBYTE(ppv) = 3;
        sub_1416EBAD0(&v33);
      }
      if ( v28 )
        sub_140001660(v31, v28, 1);
      LOBYTE(v14) = v34;
    }
    sub_140D4B050();
    if ( !(_BYTE)v14 && 2 * *v13 && !(unsigned __int8)sub_14196A710(v21, v20, v22) )
      byte_1422404C9 = 1;
    v23 = byte_1422404C8;
    byte_1422404C8 = 0;
    if ( v23 == 2 )
      WakeByAddressSingle(&byte_1422404C8);
    return;
  }
  v14 = 0;
  if ( !byte_1422404C9 )
    goto LABEL_23;
LABEL_17:
  if ( !(_BYTE)v14 && 2 * *v13 && !(unsigned __int8)sub_14196A710(v9, v6, v8) )
    byte_1422404C9 = 1;
  v15 = byte_1422404C8;
  byte_1422404C8 = 0;
  if ( v15 == 2 )
  {
    WakeByAddressSingle(&byte_1422404C8);
    if ( *(_QWORD *)off_14223FF10 >= 2u )
      goto LABEL_21;
  }
  else if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
LABEL_21:
    v24 = aCodexmateLibPl_2;
    v25[0] = 46;
    v25[1] = aCodexmateLibPl_2;
    v25[2] = 46;
    v25[3] = &off_141A972F0;
    sub_140AF72B0(aTypemamiWindow, 133, 2, &v24);
  }
}
