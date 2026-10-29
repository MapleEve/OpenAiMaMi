// tauri_process_restart_sub_141472630.c — 0x141472630 (727B)
// win 1.2.7 最新 exe | IDA <审计环境> | session <审计会话>
// tauri::process::restart（win，tauri-2.10.3 src\process.rs:101）——relaunch 执行体：
// current_exe + 原 argv（env 参数）构造 std::process::Command → spawn（经 std 库 sub_1416B4650 → CreateProcessW）
// → CloseHandle 子进程句柄 → std::process::exit(0)；spawn 失败 panic 'failed to restart app: '（0x141c48fd8，len 23）。
// ⚠先 spawn 新进程再退旧进程（无 launcher/退出码协议）。
void __fastcall __noreturn sub_141472630(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  char *v10; // rax
  HANDLE v11; // rsi
  _BYTE v12[184]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+E0h] [rbp+60h] BYREF
  _QWORD v14[22]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v15; // [rsp+198h] [rbp+118h] BYREF
  HANDLE v16; // [rsp+1A0h] [rbp+120h]
  __int64 v17; // [rsp+1A8h] [rbp+128h]
  HANDLE v18; // [rsp+1B0h] [rbp+130h]
  __int64 v19; // [rsp+1B8h] [rbp+138h]
  HANDLE v20; // [rsp+1C0h] [rbp+140h]
  HANDLE hObject; // [rsp+1C8h] [rbp+148h]
  HANDLE v22; // [rsp+1D0h] [rbp+150h]
  __int64 v23; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v24; // [rsp+1E0h] [rbp+160h]
  __int64 v25; // [rsp+1E8h] [rbp+168h]
  _QWORD v26[2]; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v27; // [rsp+208h] [rbp+188h]
  __int64 v28; // [rsp+210h] [rbp+190h]
  char *v29; // [rsp+218h] [rbp+198h] BYREF
  char v30; // [rsp+227h] [rbp+1A7h] BYREF
  __int64 v31; // [rsp+228h] [rbp+1A8h]

  v31 = -2; /*0x141472645*/
  sub_1415713E0(&v23); /*0x14147265a*/
  if ( v23 == -1 ) /*0x14147266a*/
  {
    if ( (unsigned int)(v24 & 3) - 2 >= 2 && (v24 & 3) != 0 ) /*0x141472683*/
    {
      v14[0] = v24 - 1; /*0x14147268c*/
      LOBYTE(v13) = 3; /*0x141472690*/
      sub_1416EBAD0(v14); /*0x141472694*/
    }
    sub_1416C30D0(0); /*0x14147269b*/
  }
  v27 = v23; /*0x1414726a2*/
  v28 = v24; /*0x1414726bb*/
  sub_1416B94E0(&v13, v24, v25); /*0x1414726c2*/
  sub_1419234B0(v12, &v13, 184); /*0x1414726d6*/
  if ( v27 ) /*0x1414726e5*/
    sub_140001660(v28, v27, 1); /*0x1414726f4*/
  v2 = *(_QWORD *)(a1 + 16); /*0x1414726f9*/
  if ( v2 >= 2 ) /*0x141472701*/
  {
    v3 = *(_QWORD *)(a1 + 8); /*0x141472703*/
    sub_1416B93C0(v12, *(_QWORD *)(v3 + 40), *(_QWORD *)(v3 + 48)); /*0x141472713*/
    if ( v2 != 2 ) /*0x14147271d*/
    {
      v4 = v3 + 32 * v2; /*0x141472723*/
      v5 = v3 + 32; /*0x141472726*/
      v6 = v3 + 64; /*0x14147272a*/
      do /*0x14147275b*/
      {
        v7 = *(_QWORD *)(v5 + 40); /*0x141472740*/
        v8 = *(_QWORD *)(v5 + 48); /*0x141472748*/
        v5 = v6; /*0x141472748*/
        sub_1416B93C0(v12, v7, v8); /*0x14147274e*/
        v6 += 32; /*0x141472754*/
      }
      while ( v5 + 32 != v4 ); /*0x14147275b*/
    }
  }
  sub_1416BCAE0(&v15, v12); /*0x141472768*/
  v9 = v15; /*0x14147276e*/
  if ( v15 == 2 ) /*0x141472779*/
  {
    v10 = (char *)v16; /*0x14147277f*/
    v29 = (char *)v16; /*0x141472786*/
    if ( *(_QWORD *)off_14223FF10 ) /*0x141472794*/
    {
      v26[0] = &v29; /*0x1414727a7*/
      v26[1] = sub_1416EA080; /*0x1414727b5*/
      v14[5] = 1; /*0x1414727bc*/
      v14[6] = aTauriProcess; /*0x1414727ce*/
      v14[7] = 14; /*0x1414727d5*/
      v14[9] = &unk_141C48FD8; /*0x1414727e7*/
      v14[10] = v26; /*0x1414727f5*/
      v13 = 0; /*0x1414727fc*/
      v14[0] = aTauriProcess; /*0x141472804*/
      v14[1] = 14; /*0x141472808*/
      v14[2] = 0; /*0x141472810*/
      v14[3] = aCUsersRunnerad_39; /*0x14147281f*/
      v14[4] = 101; /*0x141472826*/
      v14[8] = 0x5400000001LL; /*0x14147283b*/
      sub_141503E20(&v30, &v13); /*0x14147284d*/
      v10 = v29; /*0x141472853*/
    }
    if ( ((unsigned __int8)v10 & 3u) - 2 >= 2 && ((unsigned __int8)v10 & 3) != 0 ) /*0x14147286a*/
    {
      v14[0] = v10 - 1; /*0x141472873*/
      LOBYTE(v13) = 3; /*0x141472877*/
      sub_1416EBAD0(v14); /*0x14147287b*/
    }
LABEL_22:
    sub_14146F310(v12); /*0x1414728c5*/
    sub_1416C30D0(0); /*0x1414728d0*/
  }
  v11 = v22; /*0x14147288a*/
  CloseHandle(hObject); /*0x141472898*/
  CloseHandle(v11); /*0x14147289d*/
  if ( v9 ) /*0x1414728a2*/
  {
    CloseHandle(v16); /*0x1414728de*/
    if ( !v17 ) /*0x1414728ec*/
    {
LABEL_20:
      if ( !v19 ) /*0x1414728b6*/
        goto LABEL_22; /*0x1414728b6*/
      goto LABEL_21; /*0x1414728b6*/
    }
  }
  else if ( !v17 ) /*0x1414728ac*/
  {
    goto LABEL_20; /*0x1414728ac*/
  }
  CloseHandle(v18); /*0x1414728f5*/
  if ( !v19 ) /*0x141472903*/
    goto LABEL_22; /*0x141472903*/
LABEL_21:
  CloseHandle(v20); /*0x1414728b8*/
  goto LABEL_22; /*0x1414728bf*/
}
