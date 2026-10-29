// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::router_reconciler::run_config_mutation_with_windows_retry::h01ba1cfe8e34db1e; addr: 0x10031b690; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::run_config_mutation_with_windows_retry::h01ba1cfe8e34db1e(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rbx
  __int64 v11; // rdx
  char v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD v17[8]; // [rsp+0h] [rbp-60h] BYREF
  char v18; // [rsp+40h] [rbp-20h]
  char v19; // [rsp+41h] [rbp-1Fh]

  v3 = *a2; /*0x10031b6a0*/
  v4 = (_QWORD *)a2[1]; /*0x10031b6a3*/
  v5 = a2[2]; /*0x10031b6a7*/
  v6 = v4[12]; /*0x10031b6ab*/
  v7 = v4[13]; /*0x10031b6af*/
  v8 = v4[15]; /*0x10031b6b3*/
  v9 = v4[16]; /*0x10031b6b7*/
  v10 = *(_QWORD *)(v5 + 8); /*0x10031b6be*/
  v11 = *(_QWORD *)(v5 + 16); /*0x10031b6c2*/
  v12 = *(_BYTE *)a2[3]; /*0x10031b6ca*/
  v13 = v4[18]; /*0x10031b6ce*/
  v14 = v4[19]; /*0x10031b6d5*/
  v17[2] = v6; /*0x10031b6dc*/
  v17[3] = v7; /*0x10031b6e0*/
  v17[4] = v8; /*0x10031b6e4*/
  v17[5] = v9; /*0x10031b6e8*/
  v17[0] = v10; /*0x10031b6ec*/
  v17[1] = v11; /*0x10031b6f0*/
  v18 = 1; /*0x10031b6f4*/
  v19 = v12; /*0x10031b6f8*/
  v17[6] = v13; /*0x10031b6fc*/
  v17[7] = v14; /*0x10031b700*/
  v15 = a2[4]; /*0x10031b704*/
  if ( *(_DWORD *)v15 == 3 ) /*0x10031b70b*/
    v15 = *(_QWORD *)(v15 + 8); /*0x10031b70d*/
  return codexmate_lib::core::relay::codex_config_reconciler::reconcile_inner::h53380281c7d914e1(a1, v3, v17, v15); /*0x10031b71a*/
}
