// tauri_app_restart_machinery_sub_1406320F0.c — 0x1406320F0 (922B)
// win 1.2.7 最新 exe | IDA <审计环境> | session <审计会话>
// tauri-2.10.3 app.rs 重启机制（win 侧 request_restart+restart 内联合一，发散 -> !）。
// 输入 a1 = 152B AppHandle（glue 经 state 提取获得）。关键串：'restart triggered on the main thread'@0x141a2dd40 /
// 'restart triggered from a separate thread'@0x141a2dce0 / 'tauri::app'@0x141a2dcb8 / panic 位置 tauri-2.10.3\src\app.rs@0x141a26368。
// 流程：restart flag CAS(v4+16) → terminating(+17) 已置位 panic → 主线程 log+Wake / 非主线程 expect+事件投递(tag 29, sub_140635FB0)
// → exit-requested *(*(v3+136)+5312)=1 → cleanup_before_exit(sub_140632920)+Manager::env(sub_14064C090)+tauri::process::restart(sub_141472630)。
// 投递失败 0xFF → while(1) park。⚠发散：调用方（glue）调用点后 ud2。
void __fastcall __noreturn sub_1406320F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 *v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  bool v10; // al
  PVOID v11; // rcx
  char v12; // al
  _QWORD *v13; // r14
  _QWORD v14[22]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+D8h] [rbp+58h] BYREF
  char *v16; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v17; // [rsp+F0h] [rbp+70h]
  __int64 v18; // [rsp+F8h] [rbp+78h]
  __int64 v19; // [rsp+100h] [rbp+80h]
  char **v20; // [rsp+108h] [rbp+88h]
  __int64 v21; // [rsp+110h] [rbp+90h]
  __int64 v22; // [rsp+118h] [rbp+98h]
  const char *v23; // [rsp+120h] [rbp+A0h]
  __int64 v24; // [rsp+128h] [rbp+A8h]
  __int64 v25; // [rsp+130h] [rbp+B0h]
  void *v26; // [rsp+138h] [rbp+B8h]
  __int64 v27; // [rsp+140h] [rbp+C0h]
  PVOID Address; // [rsp+198h] [rbp+118h]
  char v29; // [rsp+1A3h] [rbp+123h] BYREF
  unsigned int v30; // [rsp+1A4h] [rbp+124h]
  __int64 v31; // [rsp+1A8h] [rbp+128h]

  v31 = -2; /*0x140632105*/
  v3 = a1; /*0x140632110*/
  v4 = *(_QWORD *)(a1 + 144); /*0x140632113*/
  LOBYTE(a1) = 1; /*0x14063211e*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v4 + 16), 1, 0) ) /*0x140632122*/
    sub_141969A30((volatile void *)(v4 + 16)); /*0x1406322b6*/
  v5 = off_142240260; /*0x14063212d*/
  if ( 2 * *off_142240260 ) /*0x140632137*/
  {
    v6 = sub_14196A710(a1, a2, a3); /*0x1406322c0*/
    LOBYTE(v6) = v6 ^ 1; /*0x1406322c5*/
    if ( !*(_BYTE *)(v4 + 17) ) /*0x1406322cd*/
    {
LABEL_5:
      v30 = v6; /*0x140632151*/
      Address = (PVOID)(v4 + 16); /*0x140632157*/
      v16 = (char *)sub_1416C5530(); /*0x140632164*/
      v8 = *(_QWORD *)(v4 + 24); /*0x140632168*/
      v9 = *((_QWORD *)v16 + 2); /*0x14063216c*/
      v10 = _InterlockedDecrement64((volatile signed __int64 *)v16) == 0; /*0x140632174*/
      if ( v8 == v9 ) /*0x14063217a*/
      {
        if ( v10 ) /*0x14063233e*/
          sub_1416C0140(&v16); /*0x140632344*/
        sub_14002B980(Address, v30); /*0x140632357*/
        if ( *(_QWORD *)off_14223FF10 >= 4u ) /*0x14063236a*/
        {
          v16 = aTauriApp; /*0x140632373*/
          v17 = 10; /*0x140632377*/
          v18 = (__int64)aTauriApp; /*0x14063237f*/
          v19 = 10; /*0x140632383*/
          v20 = &off_141A2DD68; /*0x140632395*/
          sub_140AF72B0("restart triggered on the main thread", 73, 4, &v16); /*0x1406323b2*/
        }
        sub_140632920(v3); /*0x1406323ba*/
        sub_14064C090(&v16, v3); /*0x1406323c9*/
        sub_141472630(&v16); /*0x1406323d2*/
      }
      if ( v10 ) /*0x140632182*/
        sub_1416C0140(&v16); /*0x140632188*/
      if ( !(_BYTE)v30 && 2 * *v5 && !(unsigned __int8)sub_14196A710(v8, v9, v7) ) /*0x140632326*/
        *(_BYTE *)(v4 + 17) = 1; /*0x140632333*/
      v11 = Address; /*0x1406321a8*/
      v12 = *(_BYTE *)Address; /*0x1406321af*/
      *(_BYTE *)Address = 0; /*0x1406321af*/
      if ( v12 == 2 ) /*0x1406321b3*/
      {
        WakeByAddressSingle(v11); /*0x140632308*/
        v13 = off_14223FF10; /*0x14063230d*/
        if ( *(_QWORD *)off_14223FF10 < 4u ) /*0x14063231b*/
        {
LABEL_13:
          *(_BYTE *)(*(_QWORD *)(v3 + 136) + 5312LL) = 1; /*0x140632263*/
          HIDWORD(v16) = 0x7FFFFFFF; /*0x140632271*/
          LOBYTE(v16) = 29; /*0x140632278*/
          sub_140635FB0(v14, v3, &v16); /*0x140632287*/
          if ( LOBYTE(v14[0]) == 0xFF ) /*0x140632290*/
          {
            while ( 1 ) /*0x1406322ac*/
              sub_1416C57D0(-1, 999999999); /*0x1406322ac*/
          }
          sub_1419234B0(&v16, v14, 176); /*0x1406323f1*/
          sub_140513CA0(&v16); /*0x1406323f9*/
          v14[0] = 3; /*0x1406323fe*/
          if ( *v13 ) /*0x140632406*/
          {
            v15[0] = v14; /*0x14063240e*/
            v15[1] = sub_14155BF20; /*0x140632419*/
            v16 = aTauriApp; /*0x140632424*/
            v17 = 10; /*0x140632428*/
            v18 = (__int64)aTauriApp; /*0x140632430*/
            v19 = 10; /*0x140632434*/
            v20 = &off_141A2DD28; /*0x140632446*/
            sub_140AF72B0(&unk_141A2DD08, v15, 1, &v16); /*0x140632462*/
          }
          sub_140632920(v3); /*0x14063246b*/
          sub_14064C090(&v16, v3); /*0x140632478*/
          sub_141472630(&v16); /*0x140632482*/
        }
      }
      else
      {
        v13 = off_14223FF10; /*0x1406321b9*/
        if ( *(_QWORD *)off_14223FF10 < 4u ) /*0x1406321c7*/
          goto LABEL_13; /*0x1406321c7*/
      }
      v22 = 4; /*0x1406321cd*/
      v23 = aTauriApp; /*0x1406321df*/
      v24 = 10; /*0x1406321e6*/
      v26 = &unk_141A2DCE0; /*0x1406321f8*/
      v27 = 81; /*0x1406321ff*/
      v16 = nullptr; /*0x14063220a*/
      v17 = (__int64)aTauriApp; /*0x140632212*/
      v18 = 10; /*0x140632216*/
      v19 = 0; /*0x14063221e*/
      v20 = (char **)aCUsersRunnerad_0; /*0x140632230*/
      v21 = 97; /*0x140632237*/
      v25 = 0x22800000001LL; /*0x14063224c*/
      sub_141503E20(&v29, &v16); /*0x14063225e*/
      goto LABEL_13; /*0x14063225e*/
    }
  }
  else
  {
    v6 = 0; /*0x140632143*/
    if ( !*(_BYTE *)(v4 + 17) ) /*0x140632145*/
      goto LABEL_5; /*0x14063214b*/
  }
  v16 = (char *)(v4 + 16); /*0x1406322d3*/
  LOBYTE(v17) = v6; /*0x1406322d7*/
  sub_14196B5F0( /*0x1406322fd*/
    (unsigned int)aCalledResultUn_5,
    43,
    (unsigned int)&v16,
    (unsigned int)&off_141A2CC38,
    (__int64)&off_141A2DCC8);
}
