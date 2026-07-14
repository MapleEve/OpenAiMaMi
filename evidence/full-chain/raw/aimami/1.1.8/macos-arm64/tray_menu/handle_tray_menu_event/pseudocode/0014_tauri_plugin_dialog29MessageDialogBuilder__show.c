// mac 1.1.8 BACKEND-ONLY handle_tray_menu_event node 0x100430790 depth=1
// tauri_plugin_dialog29MessageDialogBuilder::show
__int64 __fastcall tauri_plugin_dialog::MessageDialogBuilder$LT$R$GT$::show::hecea754baedafc99(_QWORD *__src, void *a2)
{
  unsigned __int64 v2; // rax
  size_t v3; // r13
  char v4; // of
  volatile signed __int64 *v5; // r14
  __int64 v6; // rt0
  volatile signed __int64 *v7; // r15
  __int64 v8; // rt0
  void *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  volatile signed __int64 *__dst[41]; // [rsp+8h] [rbp-588h] BYREF
  _BYTE v14[152]; // [rsp+150h] [rbp-440h] BYREF
  size_t v15; // [rsp+1E8h] [rbp-3A8h]
  size_t v16; // [rsp+1F0h] [rbp-3A0h]
  size_t v17; // [rsp+1F8h] [rbp-398h]
  _BYTE v18[136]; // [rsp+200h] [rbp-390h] BYREF
  volatile signed __int64 *v19; // [rsp+288h] [rbp-308h]
  volatile signed __int64 *v20; // [rsp+290h] [rbp-300h]
  size_t __srca[63]; // [rsp+298h] [rbp-2F8h] BYREF
  unsigned __int64 v22; // [rsp+490h] [rbp-100h] BYREF
  __int64 v23; // [rsp+498h] [rbp-F8h]
  __int64 (__fastcall **v24)(); // [rsp+4A0h] [rbp-F0h]
  __int64 v25; // [rsp+4A8h] [rbp-E8h]
  __int64 v26; // [rsp+540h] [rbp-50h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+548h] [rbp-48h]
  __int64 v28; // [rsp+550h] [rbp-40h]
  size_t v29; // [rsp+558h] [rbp-38h]
  size_t v30; // [rsp+560h] [rbp-30h]

  v2 = 6; /*0x1004307c4*/
  if ( (__int64)__src[25] < 0 ) /*0x1004307c9*/
    v2 = __src[25] ^ 0x8000000000000000LL; /*0x1004307c9*/
  if ( v2 == 6 ) /*0x1004307d1*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10043081a*/
      __srca,
      (__int64)(__src + 25));
    goto LABEL_9; /*0x10043081a*/
  }
  if ( v2 == 5 || (v3 = 0x8000000000000000LL, v2 == 4) ) /*0x1004307e0*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1004307f0*/
      __srca,
      (__int64)(__src + 26));
LABEL_9:
    v3 = __srca[0]; /*0x10043081f*/
    v29 = __srca[1]; /*0x10043082d*/
    v30 = __srca[2]; /*0x100430838*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x10043083c*/
  memcpy(v14, a2, sizeof(v14)); /*0x100430862*/
  v15 = v3; /*0x100430867*/
  v16 = v29; /*0x100430876*/
  v17 = v30; /*0x10043087d*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51( /*0x10043088e*/
    (__int64)__srca,
    (__int64)__dst);
  v5 = __dst[17]; /*0x100430893*/
  v6 = _InterlockedIncrement64(__dst[17]); /*0x10043089a*/
  if ( (v6 < 0) ^ v4 | (v6 == 0) || (v7 = __dst[18], v8 = _InterlockedIncrement64(__dst[18]), (v8 < 0) ^ v4 | (v8 == 0)) ) /*0x1004308af*/
    BUG(); /*0x1004309f2*/
  memcpy(v18, __srca, sizeof(v18)); /*0x1004308c8*/
  v19 = v5; /*0x1004308cd*/
  v20 = v7; /*0x1004308d4*/
  memcpy(__srca, __dst, 0x148u); /*0x1004308ee*/
  memcpy(&__srca[41], a2, 0x98u); /*0x100430902*/
  __srca[60] = v3; /*0x100430907*/
  __srca[61] = v29; /*0x100430916*/
  __srca[62] = v30; /*0x10043091d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100430924*/
  v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x1F8u, 8u); /*0x100430933*/
  if ( !v9 ) /*0x10043093b*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 504); /*0x1004309ed*/
  v10 = (__int64)v9; /*0x100430941*/
  memcpy(v9, __srca, 0x1F8u); /*0x100430953*/
  v23 = v10; /*0x100430958*/
  v24 = &anon_fdfbeb4f975d8e02b9c40da81dc33589_805; /*0x100430966*/
  LOBYTE(v22) = 28; /*0x10043096d*/
  tauri_runtime_wry::send_user_message::h77ed2756619c4a08(&v26, (__int64)v18, &v22); /*0x100430986*/
  if ( (_DWORD)v26 != 19 ) /*0x10043098f*/
  {
    v25 = v28; /*0x100430995*/
    v24 = v27; /*0x1004309a4*/
    v23 = v26; /*0x1004309ab*/
    v22 = 0x8000000000000000LL; /*0x1004309b2*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v22, v18, v11, v27); /*0x1004309c0*/
  }
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(v18); /*0x1004309d1*/
}