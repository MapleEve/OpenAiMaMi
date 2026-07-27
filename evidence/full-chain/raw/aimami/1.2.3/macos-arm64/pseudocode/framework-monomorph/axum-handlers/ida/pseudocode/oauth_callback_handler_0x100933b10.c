/* addr=0x100933b10 cleanname=oauth_callback_handler group=axum-handlers
 * n_lines=344 brace_balanced=True truncation_markers=[]
 */
_QWORD *__fastcall _$LT$F$u20$as$u20$axum..handler..Handler$LT$$LP$M$C$T1$C$T2$RP$$C$S$GT$$GT$::call::_$u7b$$u7b$closure$u7d$$u7d$::hecaff22c9e2ef958(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // r13
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 (__fastcall **v9)(); // rax
  void *v10; // r12
  __int64 (__fastcall **v11)(); // rax
  int v12; // eax
  __int64 *v13; // r8
  char v14; // al
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 v27; // r13
  void *v28; // r12
  __int16 v29; // r14
  volatile signed __int64 *v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  bool v34; // r15
  bool v35; // al
  __int64 v36; // rsi
  char v38; // al
  _BYTE v39[120]; // [rsp+8h] [rbp-4D8h] BYREF
  _BYTE v40[128]; // [rsp+80h] [rbp-460h] BYREF
  _BYTE v41[88]; // [rsp+100h] [rbp-3E0h] BYREF
  _BYTE v42[88]; // [rsp+158h] [rbp-388h] BYREF
  _OWORD __dst[31]; // [rsp+1B0h] [rbp-330h] BYREF
  _QWORD v44[3]; // [rsp+3A0h] [rbp-140h] BYREF
  _QWORD v45[6]; // [rsp+3B8h] [rbp-128h] BYREF
  __int16 v46; // [rsp+3E8h] [rbp-F8h]
  void *v47; // [rsp+3F0h] [rbp-F0h]
  __int64 v48; // [rsp+3F8h] [rbp-E8h]
  __int128 v49; // [rsp+400h] [rbp-E0h]
  __int128 v50; // [rsp+410h] [rbp-D0h]
  _QWORD *v51; // [rsp+420h] [rbp-C0h]
  __int64 v52; // [rsp+428h] [rbp-B8h]
  unsigned __int64 v53; // [rsp+430h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+438h] [rbp-A8h]
  __int64 v55; // [rsp+440h] [rbp-A0h]
  __int64 v56; // [rsp+448h] [rbp-98h]
  __int64 v57; // [rsp+450h] [rbp-90h]
  __int64 v58; // [rsp+458h] [rbp-88h]
  __int64 v59; // [rsp+460h] [rbp-80h]
  __int64 *v60; // [rsp+468h] [rbp-78h]
  __int64 v61; // [rsp+470h] [rbp-70h]
  __int64 v62; // [rsp+478h] [rbp-68h]
  __int64 v63; // [rsp+480h] [rbp-60h]
  void *v64; // [rsp+488h] [rbp-58h]
  size_t v65; // [rsp+490h] [rbp-50h]
  volatile signed __int64 *v66; // [rsp+498h] [rbp-48h] BYREF
  volatile signed __int64 *v67; // [rsp+4A0h] [rbp-40h]
  __int64 v68; // [rsp+4A8h] [rbp-38h]
  _BYTE *v69; // [rsp+4B0h] [rbp-30h]

  v5 = a1;
  switch ( *(_BYTE *)(a2 + 536) )
  {
    case 0:
      *(_BYTE *)(a2 + 541) = 0;
      memcpy((void *)(a2 + 272), (const void *)a2, 0xE0u);
      *(_DWORD *)(a2 + 537) = 16777473;
      *(_OWORD *)(a2 + 544) = *(_OWORD *)(a2 + 224);
      v6 = a2 + 240;
      *(_QWORD *)(a2 + 496) = a2 + 240;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2 + 272, a2);
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
      if ( !v7 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
      v8 = v7;
      *(_QWORD *)v7 = v6;
      *(_BYTE *)(v7 + 8) = 0;
      *(_QWORD *)(a2 + 560) = v7;
      v9 = &anon_d5f9baf1d57b89a47eac516e8e9e0ea5_77;
      *(_QWORD *)(a2 + 568) = &anon_d5f9baf1d57b89a47eac516e8e9e0ea5_77;
      goto LABEL_9;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10196E9E0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10196E9E0);
    case 3:
      v8 = *(_QWORD *)(a2 + 560);
      v9 = *(__int64 (__fastcall ***)())(a2 + 568);
LABEL_9:
      ((void (__fastcall *)(_OWORD *, __int64, __int64))v9[3])(__dst, v8, a3);
      if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
      {
        *a1 = 3;
        v14 = 3;
        goto LABEL_61;
      }
      v50 = __dst[1];
      v49 = __dst[0];
      v15 = *(_QWORD *)(a2 + 560);
      v16 = *(_QWORD *)(a2 + 568);
      if ( *(_QWORD *)v16 )
        (*(void (__fastcall **)(_QWORD))v16)(*(_QWORD *)(a2 + 560));
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16));
      *(_BYTE *)(a2 + 539) = 1;
      v18 = *((_QWORD *)&v49 + 1);
      *(_QWORD *)(a2 + 504) = v49;
      *(_QWORD *)(a2 + 512) = v18;
      *(_OWORD *)(a2 + 520) = v50;
      *(_BYTE *)(a2 + 538) = 0;
      memcpy(__dst, (const void *)(a2 + 272), 0xE0u);
      *(_BYTE *)(a2 + 537) = 0;
      v19 = *(_QWORD *)(a2 + 496);
      __dst[14] = *(_OWORD *)(a2 + 544);
      *(_QWORD *)&__dst[15] = v19;
      BYTE8(__dst[30]) = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2 + 272);
      v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(496, 8);
      if ( !v20 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 496);
      v10 = v20;
      memcpy(v20, __dst, 0x1F0u);
      *(_QWORD *)(a2 + 544) = v10;
      v11 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_16;
      *(_QWORD *)(a2 + 552) = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_16;
      v5 = a1;
LABEL_17:
      ((void (__fastcall *)(_OWORD *, void *, __int64))v11[3])(__dst, v10, a3);
      if ( LOBYTE(__dst[0]) == 3 )
      {
        *v5 = 3;
        v14 = 4;
        goto LABEL_61;
      }
      qmemcpy(v41, __dst, sizeof(v41));
      v21 = *(_QWORD *)(a2 + 544);
      v22 = *(_QWORD *)(a2 + 552);
      if ( *(_QWORD *)v22 )
        (*(void (__fastcall **)(_QWORD))v22)(*(_QWORD *)(a2 + 544));
      v13 = (__int64 *)(a2 + 544);
      v23 = *(_QWORD *)(v22 + 8);
      if ( v23 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v23, *(_QWORD *)(v22 + 16));
        v13 = (__int64 *)(a2 + 544);
      }
      qmemcpy(v42, v41, sizeof(v42));
      *(_WORD *)(a2 + 539) = 0;
      *(_BYTE *)(a2 + 541) = 0;
      __dst[1] = *(_OWORD *)(a2 + 520);
      v24 = *(_QWORD *)(a2 + 504);
      *((_QWORD *)&__dst[0] + 1) = *(_QWORD *)(a2 + 512);
      *(_QWORD *)&__dst[0] = v24;
      qmemcpy(&__dst[2], v41, 0x58u);
      qmemcpy(v39, __dst, sizeof(v39));
      qmemcpy(v13, v39, 0x78u);
      *(_BYTE *)(a2 + 664) = 0;
LABEL_24:
      v51 = v5;
      v66 = (volatile signed __int64 *)v13[3];
      v65 = v13[2];
      v25 = *v13;
      v60 = v13;
      v64 = (void *)v13[1];
      v63 = v25;
      qmemcpy(__dst, (const void *)(a2 + 576), 0x58u);
      codexmate_lib::core::oauth_login::resolve_callback::hae5d803d688d4700(&v53, (__int64)__dst, v64, v65);
      v26 = v53;
      if ( v53 != 0x8000000000000001LL )
      {
        v68 = v54;
        v52 = v55;
        v30 = v66;
        v67 = v66 + 2;
        v31 = *((_QWORD *)v66 + 2);
        if ( !v31 )
          v31 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v67);
        std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v31);
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          v38 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v31, __dst, v32, v33);
          v69 = v30 + 3;
          v33 = *((unsigned __int8 *)v30 + 24);
          if ( (_BYTE)v33 )
          {
            if ( !v38 )
            {
LABEL_34:
              std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v67);
              goto LABEL_42;
            }
LABEL_33:
            if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
              && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                     v31,
                                     __dst,
                                     v32,
                                     v33) )
            {
              *v69 = 1;
            }
            goto LABEL_34;
          }
          v61 = *((_QWORD *)v30 + 4);
          v33 = *((_QWORD *)v30 + 5);
          v62 = v33;
          *((_QWORD *)v30 + 4) = 0;
          if ( !v38 )
          {
LABEL_37:
            std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v67);
            if ( v61 )
            {
              v53 = v26;
              v54 = v68;
              v55 = v52;
              tokio::sync::oneshot::Sender$LT$T$GT$::send::h69704cec50813dfa(v44, v62, &v53);
              if ( v44[0] < (__int64)0x8000000000000002LL )
              {
                v34 = v44[0] == 0x8000000000000001LL;
                v29 = 410;
                if ( v44[0] == 0x8000000000000001LL )
                  v29 = 200;
LABEL_48:
                v59 = 0;
                v58 = 0;
                v57 = 20;
                v56 = 0;
                core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h245bcdd64568d23f(__dst);
                v35 = v26 != 0x8000000000000000LL;
                v28 = &unk_1016769A5;
                if ( v34 && v35 )
                  v28 = &unk_101676C22;
                v27 = 637;
                if ( v34 && v35 )
                  v27 = 643;
                if ( v63 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v63, 1);
                if ( !_InterlockedDecrement64(v66) )
                  goto LABEL_55;
                goto LABEL_56;
              }
              if ( v44[0] )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44[1], v44[0], 1);
              v29 = 410;
LABEL_47:
              v34 = 0;
              goto LABEL_48;
            }
LABEL_42:
            v29 = 410;
            if ( 2 * v26 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v26, 1);
            goto LABEL_47;
          }
        }
        else
        {
          v69 = v30 + 3;
          if ( *((_BYTE *)v30 + 24) )
            goto LABEL_33;
          v61 = *((_QWORD *)v30 + 4);
          v62 = *((_QWORD *)v30 + 5);
          *((_QWORD *)v30 + 4) = 0;
        }
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v31, __dst, v32, v33) )
        {
          *v69 = 1;
        }
        goto LABEL_37;
      }
      v59 = 0;
      v58 = 0;
      v57 = 20;
      v56 = 0;
      core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h245bcdd64568d23f(__dst);
      if ( v63 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v63, 1);
      v27 = 637;
      v28 = &unk_1016769A5;
      v29 = 400;
      if ( !_InterlockedDecrement64(v66) )
LABEL_55:
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h774894ededf8408c(&v66);
LABEL_56:
      v45[0] = v56;
      v45[1] = v57;
      v45[2] = v58;
      v45[3] = v59;
      *(_BYTE *)(a2 + 664) = 1;
      v45[4] = &unk_1016769A0;
      v45[5] = 5;
      v46 = v29;
      v47 = v28;
      v48 = v27;
      _$LT$$LP$http..status..StatusCode$C$T1$C$R$RP$$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::hf87b2c6c632e4c50(
        v40,
        v45);
      *(_BYTE *)(a2 + 541) = 0;
      *(_BYTE *)(a2 + 539) = 0;
      *(_WORD *)(a2 + 537) = 0;
      v36 = *(_QWORD *)(a2 + 240);
      v5 = v51;
      if ( v36 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 248), v36, 1);
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 264)) )
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h774894ededf8408c(a2 + 264);
      qmemcpy(v5, v40, 0x80u);
      v14 = 1;
LABEL_61:
      *(_BYTE *)(a2 + 536) = v14;
      return v5;
    case 4:
      v10 = *(void **)(a2 + 544);
      v11 = *(__int64 (__fastcall ***)())(a2 + 552);
      goto LABEL_17;
    case 5:
      v12 = *(unsigned __int8 *)(a2 + 664);
      v13 = (__int64 *)(a2 + 544);
      if ( *(_BYTE *)(a2 + 664) )
      {
        v60 = (__int64 *)(a2 + 544);
        if ( v12 == 1 )
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10196D950);
        core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10196D950);
      }
      goto LABEL_24;
    case 6:
      JUMPOUT(0x100D36413LL);
  }
}
