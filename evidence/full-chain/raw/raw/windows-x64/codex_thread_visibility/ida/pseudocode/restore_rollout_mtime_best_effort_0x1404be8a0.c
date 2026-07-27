// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::restore_rollout_mtime_best_effort | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall restore_rollout_mtime_best_effort(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rdx
  __int64 v6; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+30h] [rbp-50h]
  int v9; // [rsp+38h] [rbp-48h]
  int v10; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v11; // [rsp+4Ch] [rbp-34h]
  int v12; // [rsp+54h] [rbp-2Ch]
  _QWORD v13[2]; // [rsp+58h] [rbp-28h]
  void *v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF
  const char *v16; // [rsp+78h] [rbp-8h]
  __int64 v17; // [rsp+80h] [rbp+0h]
  __int64 v18; // [rsp+88h] [rbp+8h]
  const char *v19; // [rsp+90h] [rbp+10h]
  __int64 v20; // [rsp+98h] [rbp+18h]
  __int64 v21; // [rsp+A0h] [rbp+20h]
  const char *v22; // [rsp+A8h] [rbp+28h]
  __int64 v23; // [rsp+B0h] [rbp+30h]
  __int64 v24; // [rsp+B8h] [rbp+38h]
  void *v25; // [rsp+C0h] [rbp+40h]
  __int64 **v26; // [rsp+C8h] [rbp+48h]
  __int64 *v27; // [rsp+D0h] [rbp+50h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+D8h] [rbp+58h]
  void **v29; // [rsp+E0h] [rbp+60h]
  __int64 (__fastcall *v30)(); // [rsp+E8h] [rbp+68h]
  __int64 v31; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+78h]
  HANDLE hObject; // [rsp+100h] [rbp+80h]
  void *v34; // [rsp+108h] [rbp+88h] BYREF
  char v35; // [rsp+117h] [rbp+97h] BYREF
  __int64 v36; // [rsp+118h] [rbp+98h]

  v36 = -2; /*0x1404be8b2*/
  if ( *(_DWORD *)a3 == 1 ) /*0x1404be8c1*/
  {
    v7[0] = 0; /*0x1404be8cd*/
    v9 = 0; /*0x1404be8d4*/
    v7[3] = 1; /*0x1404be8db*/
    v8 = *(_QWORD *)(a3 + 4); /*0x1404be8e6*/
    v10 = 0; /*0x1404be8ea*/
    v11 = 0; /*0x1404be8f1*/
    v12 = 7; /*0x1404be8f9*/
    v13[0] = 0; /*0x1404be900*/
    *(_QWORD *)((char *)v13 + 5) = 1; /*0x1404be908*/
    if ( (sub_141481480(&v10, a1, a2) & 1) != 0 ) /*0x1404be925*/
    {
      v34 = v5; /*0x1404be92b*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404be940*/
      {
        v31 = a1; /*0x1404be946*/
        v32 = a2; /*0x1404be94a*/
        v27 = &v31; /*0x1404be952*/
        v28 = sub_14148F3A0; /*0x1404be95d*/
        v29 = &v34; /*0x1404be968*/
        v30 = sub_141490720; /*0x1404be973*/
        v15 = 0; /*0x1404be977*/
        v16 = aCodexmateLibCo_0; /*0x1404be986*/
        v17 = 51; /*0x1404be98a*/
        v18 = 0; /*0x1404be992*/
        v19 = aSrcCoreRelayCo_0; /*0x1404be9a1*/
        v20 = 41; /*0x1404be9a5*/
        v21 = 2; /*0x1404be9ad*/
        v22 = aCodexmateLibCo_0; /*0x1404be9b5*/
        v23 = 51; /*0x1404be9b9*/
        v24 = 0xDC700000001LL; /*0x1404be9cb*/
        v25 = &unk_14175C3F9; /*0x1404be9d6*/
        v26 = &v27; /*0x1404be9de*/
        sub_1412C36A0(&v35, &v15); /*0x1404be9ed*/
      }
      sub_140018650(&v34); /*0x1404be9fa*/
    }
    else
    {
      hObject = v5; /*0x1404bea04*/
      v14 = v5; /*0x1404bea0b*/
      v6 = sub_141474AC0(&v14, v7); /*0x1404bea17*/
      if ( v6 ) /*0x1404bea20*/
      {
        v34 = (void *)v6; /*0x1404bea26*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404bea3b*/
        {
          v31 = a1; /*0x1404bea41*/
          v32 = a2; /*0x1404bea45*/
          v27 = &v31; /*0x1404bea4d*/
          v28 = sub_14148F3A0; /*0x1404bea58*/
          v29 = &v34; /*0x1404bea63*/
          v30 = sub_141490720; /*0x1404bea6e*/
          v15 = 0; /*0x1404bea72*/
          v16 = aCodexmateLibCo_0; /*0x1404bea81*/
          v17 = 51; /*0x1404bea85*/
          v18 = 0; /*0x1404bea8d*/
          v19 = aSrcCoreRelayCo_0; /*0x1404bea9c*/
          v20 = 41; /*0x1404beaa0*/
          v21 = 2; /*0x1404beaa8*/
          v22 = aCodexmateLibCo_0; /*0x1404beab0*/
          v23 = 51; /*0x1404beab4*/
          v24 = 0xDC000000001LL; /*0x1404beac6*/
          v25 = &unk_14175C3BC; /*0x1404bead1*/
          v26 = &v27; /*0x1404bead9*/
          sub_1412C36A0(&v35, &v15); /*0x1404beae8*/
        }
        sub_140018650(&v34); /*0x1404beaf5*/
      }
      CloseHandle(hObject); /*0x1404beb02*/
    }
  }
}