// mac 1.1.8 activate_relay_provider node va=0x1005cd8a0 depth=1
// codexmate_lib4core5relay7manager12RelayManager8activate
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::activate::h971fcd34ae9b9a8c(
        void *a1,
        __int64 a2,
        void *a3,
        size_t a4,
        double a5,
        double a6)
{
  char v9; // bl
  void *v10; // rax
  void *v11; // r14
  _QWORD *v12; // r15
  _QWORD *v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // r15
  const void *v16; // rdi
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // r13
  void *v23; // r12
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rbx
  _QWORD *v27; // r14
  void *v28; // rdi
  __int64 v29; // rdx
  __int64 *v30; // r12
  unsigned __int64 v31; // rbx
  __int64 v32; // r14
  signed __int64 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // rdx
  char v36; // r13
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // r12
  size_t v44; // r15
  __int64 v45; // rax
  char v47; // al
  _QWORD v48[43]; // [rsp+8h] [rbp-5D8h] BYREF
  _BYTE v49[344]; // [rsp+160h] [rbp-480h] BYREF
  __int64 v50; // [rsp+2B8h] [rbp-328h] BYREF
  void *__s2[12]; // [rsp+2C0h] [rbp-320h] BYREF
  _BYTE v52[128]; // [rsp+320h] [rbp-2C0h] BYREF
  _DWORD v53[24]; // [rsp+3A0h] [rbp-240h] BYREF
  _QWORD __src[43]; // [rsp+400h] [rbp-1E0h] BYREF
  _QWORD v55[2]; // [rsp+558h] [rbp-88h] BYREF
  _QWORD v56[2]; // [rsp+568h] [rbp-78h] BYREF
  unsigned __int64 v57; // [rsp+578h] [rbp-68h]
  __int64 v58; // [rsp+580h] [rbp-60h]
  void *v59; // [rsp+588h] [rbp-58h]
  size_t v60; // [rsp+590h] [rbp-50h]
  _QWORD *v61; // [rsp+598h] [rbp-48h]
  void *__dst; // [rsp+5A0h] [rbp-40h]
  int v63; // [rsp+5ACh] [rbp-34h]
  __int64 v64; // [rsp+5B0h] [rbp-30h]

  __dst = a1; /*0x1005cd8bd*/
  v56[0] = a3; /*0x1005cd8c1*/
  v56[1] = a4; /*0x1005cd8c5*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(__src, a2); /*0x1005cd8d3*/
  v9 = BYTE4(__src[42]); /*0x1005cd8d8*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(__src); /*0x1005cd8e2*/
  if ( !v9 ) /*0x1005cd8e9*/
  {
    v59 = a3; /*0x1005cd968*/
    codexmate_lib::core::relay::manager::RelayManager::ensure_provider_loaded::h68b217972834b203(__src, a2, a3, a4); /*0x1005cd972*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x1005cd984*/
    {
      v55[0] = v56; /*0x1005cd98e*/
      v55[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1005cd99c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v48[1], "\x0Frelay provider \xC0\x0A not found", v55); /*0x1005cd9b5*/
      v48[0] = 7; /*0x1005cd9ba*/
      qmemcpy(v49, v48, 0x60u); /*0x1005cd9db*/
      qmemcpy(v53, v49, sizeof(v53)); /*0x1005cd9f0*/
      v12 = __dst; /*0x1005cd9f3*/
      qmemcpy((char *)__dst + 8, v53, 0x60u); /*0x1005cda03*/
      *v12 = 0x8000000000000000LL; /*0x1005cda06*/
      return v12; /*0x1005cda09*/
    }
    qmemcpy(v49, &__src[1], 0x60u); /*0x1005cda24*/
    qmemcpy(v52, &__src[13], sizeof(v52)); /*0x1005cda3a*/
    qmemcpy(v53, v49, sizeof(v53)); /*0x1005cda4f*/
    qmemcpy(__s2, v53, sizeof(__s2)); /*0x1005cda61*/
    v13 = __src; /*0x1005cda61*/
    v50 = __src[0]; /*0x1005cda64*/
    v14 = *(_QWORD *)(a2 + 8); /*0x1005cda6b*/
    v15 = (_QWORD *)(v14 + 16); /*0x1005cda6f*/
    v64 = v14; /*0x1005cda73*/
    v16 = *(const void **)(v14 + 16); /*0x1005cda77*/
    if ( !v16 ) /*0x1005cda7e*/
      v16 = (const void *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v14 + 16); /*0x1005cdda9*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005cda84*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005cdaa0*/
    {
      v18 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, __src, v17, a5, a6); /*0x1005cddb1*/
      LOBYTE(v18) = v18 ^ 1; /*0x1005cddb6*/
      v19 = v64; /*0x1005cddb8*/
      v20 = *(unsigned __int8 *)(v64 + 24); /*0x1005cddbc*/
      if ( !(_BYTE)v20 ) /*0x1005cddc2*/
      {
LABEL_10:
        v63 = v18; /*0x1005cdab8*/
        v61 = v15; /*0x1005cdabb*/
        v60 = a4; /*0x1005cdabf*/
        v58 = a2; /*0x1005cdac3*/
        v57 = 0x8000000000000000LL; /*0x1005cdac7*/
        v21 = *(_QWORD *)(v19 + 72); /*0x1005cdacb*/
        if ( v21 ) /*0x1005cdad2*/
        {
          v22 = __s2[0]; /*0x1005cdad8*/
          v23 = __s2[1]; /*0x1005cdadf*/
          v24 = *(_QWORD *)(v64 + 64); /*0x1005cdaea*/
          v25 = 24 * v21; /*0x1005cdaf2*/
          v26 = 0; /*0x1005cdaf6*/
          while ( 1 ) /*0x1005cdb09*/
          {
            if ( *(void **)(v24 + v26 + 16) == v23 ) /*0x1005cdb0e*/
            {
              v16 = *(const void **)(v24 + v26 + 8); /*0x1005cdb10*/
              v13 = v22; /*0x1005cdb15*/
              if ( !memcmp(v16, v22, (size_t)v23) ) /*0x1005cdb1b*/
                break; /*0x1005cdb1b*/
            }
            v26 += 24; /*0x1005cdb00*/
            if ( v25 == v26 ) /*0x1005cdb07*/
              goto LABEL_18; /*0x1005cdb07*/
          }
          v27 = v61; /*0x1005cdb33*/
          codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92(__src, v64 + 32); /*0x1005cdb37*/
          v12 = __dst; /*0x1005cdb48*/
          v28 = __dst; /*0x1005cdb4c*/
          memcpy(__dst, __src, 0x158u); /*0x1005cdb4f*/
          if ( !(_BYTE)v63 /*0x1005cde97*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   v28,
                                   __src,
                                   v29,
                                   a5,
                                   a6) )
          {
            *(_BYTE *)(v64 + 24) = 1; /*0x1005cdea8*/
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v27, __src, v29, a5, a6); /*0x1005cdb7a*/
          goto LABEL_39; /*0x1005cdb7f*/
        }
LABEL_18:
        if ( !(_BYTE)v63 /*0x1005cde5f*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, v13, v20, a5, a6) )
        {
          *(_BYTE *)(v64 + 24) = 1; /*0x1005cde70*/
        }
        v30 = v61; /*0x1005cdba7*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v61, v13, v20, a5, a6); /*0x1005cdbaf*/
        v31 = v57; /*0x1005cdbb4*/
        v32 = v58; /*0x1005cdbb8*/
        v33 = v60; /*0x1005cdbbc*/
        codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hd0b215828faba6dc(v58); /*0x1005cdbc3*/
        v34 = *v30; /*0x1005cdbc8*/
        if ( !*v30 ) /*0x1005cdbc8*/
          v34 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v30); /*0x1005cde05*/
        std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005cdbd5*/
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005cdbf1*/
        {
          v36 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v34, v13, v35, a5, a6) ^ 1; /*0x1005cde15*/
          v37 = v64; /*0x1005cde19*/
          if ( !*(_BYTE *)(v64 + 24) ) /*0x1005cde23*/
            goto LABEL_24; /*0x1005cde23*/
        }
        else
        {
          v36 = 0; /*0x1005cdbf7*/
          v37 = v64; /*0x1005cdbfa*/
          if ( !*(_BYTE *)(v64 + 24) ) /*0x1005cdbfe*/
          {
LABEL_24:
            v38 = v37 + 32; /*0x1005cdc0a*/
            _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::hdc194ad118c67832( /*0x1005cdc15*/
              v49,
              v37 + 32);
            if ( !v36 /*0x1005cdc36*/
              && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
            {
              v47 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v49, v38, v39, a5, a6); /*0x1005cde79*/
              v30 = v61; /*0x1005cde80*/
              if ( !v47 ) /*0x1005cde84*/
                *(_BYTE *)(v64 + 24) = 1; /*0x1005cde8e*/
            }
            v40 = *v30; /*0x1005cdc3c*/
            std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v30, v38, v39, a5, a6); /*0x1005cdc40*/
            if ( v33 < 0 ) /*0x1005cdc48*/
            {
              v41 = 0; /*0x1005cdc4a*/
              goto LABEL_28; /*0x1005cdc4a*/
            }
            if ( v33 ) /*0x1005cdc5e*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40); /*0x1005cdc60*/
              v41 = 1; /*0x1005cdc65*/
              v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v33, 1); /*0x1005cdc73*/
              if ( !v42 ) /*0x1005cdc7b*/
LABEL_28:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v41, v60); /*0x1005cdc4d*/
              v43 = v42; /*0x1005cdc7d*/
            }
            else
            {
              v43 = 1; /*0x1005cdc82*/
            }
            v44 = v60; /*0x1005cdc96*/
            memcpy((void *)v43, v59, v60); /*0x1005cdc9d*/
            __src[0] = v44; /*0x1005cdca2*/
            __src[1] = v43; /*0x1005cdca9*/
            __src[2] = v44; /*0x1005cdcb0*/
            codexmate_lib::core::relay::models::RelayActiveByIde::add::h74790265eadc9c8e(&v49[24], __src); /*0x1005cdcc1*/
            codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92(v48, v49); /*0x1005cdcd4*/
            memcpy(__src, v49, sizeof(__src)); /*0x1005cdcef*/
            v12 = __dst; /*0x1005cdd01*/
            codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(v53, v32, __src); /*0x1005cdd05*/
            if ( v53[0] == 10 ) /*0x1005cdd11*/
            {
              codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9( /*0x1005cdd1d*/
                __src,
                v32);
              v45 = __src[0]; /*0x1005cdd22*/
              if ( __src[0] == 10 ) /*0x1005cdd2d*/
              {
                memcpy(v12, v48, 0x158u); /*0x1005cdd3e*/
LABEL_39:
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(&v50); /*0x1005cdd80*/
                return v12; /*0x1005cdd87*/
              }
              qmemcpy(v12 + 2, &__src[1], 0x58u); /*0x1005cdd6a*/
              v12[1] = v45; /*0x1005cdd6d*/
            }
            else
            {
              qmemcpy(v12 + 1, v53, 0x60u); /*0x1005cdd55*/
            }
            *v12 = v31; /*0x1005cdd71*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v48); /*0x1005cdd7b*/
            goto LABEL_39; /*0x1005cdd7b*/
          }
        }
        __src[0] = v30; /*0x1005cde29*/
        LOBYTE(__src[1]) = v36; /*0x1005cde30*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005cde58*/
          &anon_1f22c03b288e649fafb3d21192ed4cff_595,
          20,
          __src,
          &anon_1f22c03b288e649fafb3d21192ed4cff_853,
          &off_101534570);
      }
    }
    else
    {
      v18 = 0; /*0x1005cdaa6*/
      v19 = v64; /*0x1005cdaa8*/
      v20 = *(unsigned __int8 *)(v64 + 24); /*0x1005cdaac*/
      if ( !(_BYTE)v20 ) /*0x1005cdab2*/
        goto LABEL_10; /*0x1005cdab2*/
    }
    __src[0] = v15; /*0x1005cddc8*/
    LOBYTE(__src[1]) = v18; /*0x1005cddcf*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005cddf6*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      __src,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_101534558);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src); /*0x1005cd8eb*/
  v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(107, 1); /*0x1005cd8fa*/
  if ( !v10 ) /*0x1005cd902*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 107); /*0x1005cdebb*/
  v11 = v10; /*0x1005cd908*/
  memcpy(v10, &unk_1012CBCD4, 0x6Bu); /*0x1005cd91a*/
  v12 = __dst; /*0x1005cd91f*/
  *((_QWORD *)__dst + 1) = 9; /*0x1005cd923*/
  v12[2] = 107; /*0x1005cd92b*/
  v12[3] = v11; /*0x1005cd933*/
  v12[4] = 107; /*0x1005cd937*/
  *v12 = 0x8000000000000000LL; /*0x1005cd94c*/
  return v12; /*0x1005cdd8f*/
}