// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006f6dc0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::h3a548888382fb0e1(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        double a4,
        double a5)
{
  __int64 v6; // r14
  char v7; // r12
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  char v15; // r12
  double v16; // xmm0_8
  _QWORD *v17; // rax
  char v18; // of
  volatile signed __int64 *v19; // r15
  __int64 v20; // rt0
  volatile signed __int64 *v21; // r12
  __int64 v22; // rt0
  void *v23; // rax
  void *v24; // r15
  char **v26; // rdi
  _QWORD __dst[36]; // [rsp+8h] [rbp-288h] BYREF
  char v28; // [rsp+12Ch] [rbp-164h]
  _QWORD __src[37]; // [rsp+130h] [rbp-160h] BYREF
  _QWORD v30[7]; // [rsp+258h] [rbp-38h] BYREF

  v6 = (__int64)a2; /*0x1006f6dd5*/
  if ( *a3 == 6 && !a3[32] && !codexmate_lib::EXIT_APPROVED::h7d8393eb9503152a ) /*0x1006f6def*/
  {
    v13 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*(_QWORD *)(a2[17] + 4872LL) + 16LL); /*0x1006f6eb0*/
    v14 = v13; /*0x1006f6eb5*/
    if ( v13 ) /*0x1006f6ebb*/
    {
      if ( codexmate_lib::core::relay::manager::RelayManager::router_transition_in_progress::ha887099746f9e103( /*0x1006f6f12*/
             v13,
             (__int64)a2)
        || (codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555((__int64)__src, v14),
            a2 = __src,
            codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(__dst, __src),
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(__src),
            v15 = v28,
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(__dst),
            v15) )
      {
        v16 = tauri::app::ExitRequestApi::prevent_exit::hafe3176ac7bfeeec(a3 + 8); /*0x1006f6f1c*/
        codexmate_lib::request_user_quit::h1f24750a32dd88a5(v6, (__int64)a2, v16, a5); /*0x1006f6f24*/
        return core::ptr::drop_in_place$LT$tauri..app..RunEvent$GT$::hb5035833aa806cd7(a3); /*0x1006f6f29*/
      }
    }
  }
  v7 = *a3; /*0x1006f6df5*/
  if ( (unsigned __int8)(*a3 - 5) < 2u ) /*0x1006f6e00*/
    codexmate_lib::core::voice::runtime::shutdown_runtime::hd8b62254798f4fd4(v6, (__int64)a2); /*0x1006f6e05*/
  if ( v7 == 5 ) /*0x1006f6e0e*/
  {
    v8 = *a1; /*0x1006f6e14*/
    if ( *(_QWORD *)(*a1 + 16LL) ) /*0x1006f6e17*/
    {
      v26 = &off_1019691D8; /*0x1006f7095*/
    }
    else
    {
      *(_QWORD *)(v8 + 16) = -1; /*0x1006f6e23*/
      __src[0] = *(_QWORD *)(v8 + 24); /*0x1006f6e31*/
      v9 = __src[0]; /*0x1006f6e2c*/
      *(_QWORD *)(v8 + 24) = 0; /*0x1006f6e38*/
      if ( v9 ) /*0x1006f6e44*/
      {
        *(_BYTE *)(v9 + 16) = 1; /*0x1006f6e46*/
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v9) ) /*0x1006f6e4a*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(__src); /*0x1006f6e57*/
      }
      ++*(_QWORD *)(v8 + 16); /*0x1006f6e5c*/
      v10 = a1[1]; /*0x1006f6e61*/
      if ( !*(_QWORD *)(v10 + 16) ) /*0x1006f6e65*/
      {
        *(_QWORD *)(v10 + 16) = -1; /*0x1006f6e70*/
        v11 = *(unsigned int *)(v10 + 24); /*0x1006f6e78*/
        *(_DWORD *)(v10 + 24) = -1; /*0x1006f6e7c*/
        if ( (_DWORD)v11 == -1 ) /*0x1006f6e87*/
        {
          v12 = 0; /*0x1006f6f2e*/
        }
        else
        {
          close_NOCANCEL(v11); /*0x1006f6e8d*/
          v12 = *(_QWORD *)(v10 + 16) + 1LL; /*0x1006f6e96*/
        }
        *(_QWORD *)(v10 + 16) = v12; /*0x1006f6f30*/
        v17 = (_QWORD *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*(_QWORD *)(*(_QWORD *)(v6 + 136) + 4872LL) + 16LL); /*0x1006f6f46*/
        if ( v17 ) /*0x1006f6f4e*/
          codexmate_lib::core::relay::manager::RelayManager::stop_proxy_if_running::hc1aaf5623ac85e67(v17, (__int64)a2); /*0x1006f6f53*/
        v7 = *a3; /*0x1006f6f58*/
        goto LABEL_22; /*0x1006f6f58*/
      }
      v26 = &off_1019691C0; /*0x1006f709e*/
    }
    core::cell::panic_already_borrowed::hd7c6a6bf28ec0022(v26); /*0x1006f70a5*/
  }
LABEL_22:
  if ( v7 == 15 ) /*0x1006f6f60*/
  {
    _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, v6); /*0x1006f6f70*/
    v19 = *(volatile signed __int64 **)(v6 + 136); /*0x1006f6f75*/
    v20 = _InterlockedIncrement64(v19); /*0x1006f6f7c*/
    if ( (v20 < 0) ^ v18 | (v20 == 0) /*0x1006f6f92*/
      || (v21 = *(volatile signed __int64 **)(v6 + 144), v22 = _InterlockedIncrement64(v21),
                                                         (v22 < 0) ^ v18 | (v22 == 0)) )
    {
      BUG(); /*0x1006f70aa*/
    }
    memcpy(__dst, __src, 0x88u); /*0x1006f6fab*/
    __dst[17] = v19; /*0x1006f6fb0*/
    __dst[18] = v21; /*0x1006f6fb7*/
    LOBYTE(__dst[19]) = 1; /*0x1006f6fbe*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1006f6fc5*/
    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(160, 8); /*0x1006f6fd4*/
    if ( !v23 ) /*0x1006f6fdc*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 160); /*0x1006f708e*/
    v24 = v23; /*0x1006f6fe2*/
    memcpy(v23, __dst, 0xA0u); /*0x1006f6ff4*/
    __src[1] = v24; /*0x1006f6ff9*/
    __src[2] = &anon_0df76e0cec988e6dc281ac0519b88803_1168; /*0x1006f7007*/
    LOBYTE(__src[0]) = 28; /*0x1006f700e*/
    tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(v30, v6, __src, a4, a5); /*0x1006f7023*/
    if ( LODWORD(v30[0]) != 19 ) /*0x1006f702c*/
    {
      __src[3] = v30[2]; /*0x1006f7032*/
      __src[2] = v30[1]; /*0x1006f7041*/
      __src[1] = v30[0]; /*0x1006f7048*/
      __src[0] = 0x8000000000000000LL; /*0x1006f7059*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x1006f7067*/
    }
  }
  return core::ptr::drop_in_place$LT$tauri..app..RunEvent$GT$::hb5035833aa806cd7(a3); /*0x1006f7074*/
}