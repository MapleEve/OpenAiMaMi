// __ZN13codexmate_lib4core10repository27remove_account_backup_files @ 0x100a7e720
// 1.2.3 NEW-delta | codexmate_lib::core::repository::remove_account_backup_files | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::remove_account_backup_files::hc91690ea17e0d058(
        __int64 a1,
        volatile signed __int64 **a2,
        __int64 a3,
        void *a4,
        size_t a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  char *v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rsi
  volatile signed __int64 **v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // r14
  void *v19; // rax
  void *v20; // r15
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rsi
  volatile signed __int64 **v26; // rdi
  volatile signed __int64 **v27; // rsi
  __int64 v28; // rbx
  void *v29; // r14
  __int64 v30; // r15
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rsi
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rbx
  size_t v40; // r12
  void *v41; // r13
  __int64 v42; // rax
  __int64 v43; // r14
  void *v44; // rax
  void *v45; // r15
  __int64 v46; // rax
  volatile signed __int64 *v47; // [rsp+0h] [rbp-970h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+8h] [rbp-968h]
  _QWORD __dst[130]; // [rsp+10h] [rbp-960h] BYREF
  volatile signed __int64 *v50; // [rsp+420h] [rbp-550h] BYREF
  char *v51; // [rsp+428h] [rbp-548h]
  __int64 v52; // [rsp+430h] [rbp-540h]
  _QWORD __src[130]; // [rsp+438h] [rbp-538h] BYREF
  _QWORD v54[3]; // [rsp+848h] [rbp-128h] BYREF
  _QWORD v55[3]; // [rsp+860h] [rbp-110h] BYREF
  __int64 v56; // [rsp+878h] [rbp-F8h]
  size_t __n; // [rsp+880h] [rbp-F0h]
  void *v58; // [rsp+888h] [rbp-E8h]
  _QWORD *v59; // [rsp+890h] [rbp-E0h] BYREF
  __int64 (__fastcall *v60)(); // [rsp+898h] [rbp-D8h]
  __int64 *v61; // [rsp+8A0h] [rbp-D0h]
  __int64 (__fastcall *v62)(); // [rsp+8A8h] [rbp-C8h]
  __int64 v63; // [rsp+8B0h] [rbp-C0h] BYREF
  void *v64; // [rsp+8B8h] [rbp-B8h]
  size_t v65; // [rsp+8C0h] [rbp-B0h]
  __int64 v66; // [rsp+8C8h] [rbp-A8h]
  const char *v67; // [rsp+8D0h] [rbp-A0h]
  __int64 v68; // [rsp+8D8h] [rbp-98h]
  __int64 v69; // [rsp+8E0h] [rbp-90h]
  char *v70; // [rsp+8E8h] [rbp-88h]
  __int64 v71; // [rsp+8F0h] [rbp-80h]
  __int64 v72; // [rsp+8F8h] [rbp-78h]
  void *v73; // [rsp+900h] [rbp-70h]
  _QWORD *v74; // [rsp+908h] [rbp-68h]
  volatile signed __int64 *v75; // [rsp+910h] [rbp-60h] BYREF
  char v76; // [rsp+918h] [rbp-58h]
  _QWORD v77[2]; // [rsp+920h] [rbp-50h] BYREF
  int v78; // [rsp+934h] [rbp-3Ch]
  __int64 v79; // [rsp+938h] [rbp-38h] BYREF
  int v80; // [rsp+940h] [rbp-30h] BYREF
  _BYTE v81[41]; // [rsp+947h] [rbp-29h] BYREF

  v77[0] = a6; /*0x100a7e747*/
  v77[1] = a7; /*0x100a7e74b*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v50, a2, a3); /*0x100a7e756*/
  if ( (_DWORD)v50 == 1 ) /*0x100a7e762*/
  {
    result = (__int64)v51; /*0x100a7e764*/
    if ( ((unsigned __int8)v51 & 3) == 1 ) /*0x100a7e773*/
    {
      v12 = v51 - 1; /*0x100a7e775*/
      v13 = *(_QWORD *)(v51 - 1); /*0x100a7e779*/
      v14 = *(_QWORD *)(v51 + 7); /*0x100a7e77d*/
      if ( *(_QWORD *)v14 ) /*0x100a7e781*/
        (*(void (__fastcall **)(__int64))v14)(v13); /*0x100a7e78d*/
      v15 = *(_QWORD *)(v14 + 8); /*0x100a7e78f*/
      if ( v15 ) /*0x100a7e797*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x100a7e7a1*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 24, 8); /*0x100a7e7b3*/
    }
    *(_DWORD *)a1 = 0; /*0x100a7e7b8*/
    *(_QWORD *)(a1 + 8) = 0; /*0x100a7e7be*/
    *(_QWORD *)(a1 + 16) = 8; /*0x100a7e7c6*/
    *(_QWORD *)(a1 + 24) = 0; /*0x100a7e7ce*/
  }
  else
  {
    v16 = &v50; /*0x100a7e7db*/
    std::sys::fs::read_dir::h768dda1fe4336014(&v50, a2, a3); /*0x100a7e7e8*/
    if ( (_BYTE)v51 == 2 ) /*0x100a7e7fd*/
    {
      v63 = (__int64)v50; /*0x100a7e803*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100a7e818*/
      {
        v47 = v77; /*0x100a7e822*/
        v48 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a7e830*/
        __dst[0] = &v63; /*0x100a7e83e*/
        __dst[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100a7e84c*/
        __src[3] = 2; /*0x100a7e853*/
        __src[4] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7e865*/
        __src[5] = 31; /*0x100a7e86c*/
        __src[7] = &unk_1017C9D1A; /*0x100a7e87e*/
        __src[8] = &v47; /*0x100a7e88c*/
        v50 = nullptr; /*0x100a7e893*/
        v51 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7e89e*/
        v52 = 31; /*0x100a7e8a5*/
        __src[0] = 0; /*0x100a7e8b0*/
        __src[1] = "src/core/repository.rs"; /*0x100a7e8c2*/
        __src[2] = 22; /*0x100a7e8c9*/
        __src[6] = 0x1C200000001LL; /*0x100a7e8de*/
        v16 = (volatile signed __int64 **)v81; /*0x100a7e8e5*/
        a2 = &v50; /*0x100a7e8e9*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v81, &v50); /*0x100a7e8f0*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, a2); /*0x100a7e8f5*/
      v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8); /*0x100a7e904*/
      if ( !v17 ) /*0x100a7e90c*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x100a7eed9*/
      v18 = (_QWORD *)v17; /*0x100a7e912*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(48, 8); /*0x100a7e915*/
      v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x100a7e922*/
      if ( !v19 ) /*0x100a7e92a*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a5); /*0x100a7eef7*/
      v20 = v19; /*0x100a7e930*/
      memcpy(v19, a4, a5); /*0x100a7e93c*/
      v50 = v77; /*0x100a7e945*/
      v51 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a7e953*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v55, &unk_1017C9D4B, &v50); /*0x100a7e96f*/
      v18[5] = v55[2]; /*0x100a7e97b*/
      v21 = v55[0]; /*0x100a7e97f*/
      v18[4] = v55[1]; /*0x100a7e98d*/
      v18[3] = v21; /*0x100a7e991*/
      *v18 = a5; /*0x100a7e995*/
      v18[1] = v20; /*0x100a7e998*/
      v18[2] = a5; /*0x100a7e99c*/
      *(_DWORD *)a1 = 0; /*0x100a7e9a0*/
      *(_QWORD *)(a1 + 8) = 1; /*0x100a7e9a6*/
      *(_QWORD *)(a1 + 16) = v18; /*0x100a7e9ae*/
      *(_QWORD *)(a1 + 24) = 1; /*0x100a7e9b2*/
      result = v63; /*0x100a7e9ba*/
      if ( (v63 & 3) == 1 ) /*0x100a7e9c9*/
      {
        v22 = v63 - 1; /*0x100a7e9cf*/
        v23 = *(_QWORD *)(v63 - 1); /*0x100a7e9d3*/
        v24 = *(_QWORD *)(v63 + 7); /*0x100a7e9d7*/
        if ( *(_QWORD *)v24 ) /*0x100a7e9db*/
          (*(void (__fastcall **)(__int64))v24)(v23); /*0x100a7e9e6*/
        v25 = *(_QWORD *)(v24 + 8); /*0x100a7e9e8*/
        if ( v25 ) /*0x100a7e9ef*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v25, *(_QWORD *)(v24 + 16)); /*0x100a7e9f8*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24, 8); /*0x100a7ea0a*/
      }
    }
    else
    {
      v58 = a4; /*0x100a7ea14*/
      __n = a5; /*0x100a7ea1b*/
      v56 = a1; /*0x100a7ea22*/
      v80 = 0; /*0x100a7ea29*/
      v75 = v50; /*0x100a7ea30*/
      v76 = (char)v51; /*0x100a7ea34*/
      v78 = 0; /*0x100a7ea37*/
      while ( 1 ) /*0x100a7ea7e*/
      {
        v26 = &v50; /*0x100a7ea7e*/
        v27 = &v75; /*0x100a7ea81*/
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(&v50); /*0x100a7ea84*/
        if ( (_DWORD)v50 != 1 ) /*0x100a7ea90*/
          break; /*0x100a7ea90*/
        v28 = v52; /*0x100a7ea9d*/
        if ( v51 ) /*0x100a7eaa7*/
        {
          memcpy(__dst, __src, sizeof(__dst)); /*0x100a7eba1*/
          v47 = (volatile signed __int64 *)v51; /*0x100a7eba6*/
          v48 = (__int64 (__fastcall *)())v52; /*0x100a7ebad*/
          std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v63, &v47); /*0x100a7ebc2*/
          v29 = v64; /*0x100a7ebc7*/
          v30 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v64, v65); /*0x100a7ebdd*/
          if ( v63 ) /*0x100a7ebea*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v63, 1); /*0x100a7ebf4*/
          if ( v30 ) /*0x100a7ebfc*/
          {
            ++v80; /*0x100a7ec02*/
            v79 = v30; /*0x100a7ec05*/
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a7ec17*/
            {
              v59 = v77; /*0x100a7ec21*/
              v60 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a7ec2f*/
              v61 = &v79; /*0x100a7ec3a*/
              v62 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100a7ec48*/
              v69 = 2; /*0x100a7ec4f*/
              v70 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7ec61*/
              v71 = 31; /*0x100a7ec68*/
              v73 = &unk_1017C9CB1; /*0x100a7ec77*/
              v74 = &v59; /*0x100a7ec82*/
              v63 = 0; /*0x100a7ec86*/
              v64 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7ec91*/
              v65 = 31; /*0x100a7ec98*/
              v66 = 0; /*0x100a7eca3*/
              v67 = "src/core/repository.rs"; /*0x100a7ecb5*/
              v68 = 22; /*0x100a7ecbc*/
              v72 = 0x1DC00000001LL; /*0x100a7ecd1*/
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v81, &v63); /*0x100a7ece0*/
              v30 = v79; /*0x100a7ece5*/
            }
            if ( (v30 & 3) == 1 ) /*0x100a7ecf2*/
            {
              v31 = v30 - 1; /*0x100a7ecf4*/
              v32 = *(_QWORD *)(v30 - 1); /*0x100a7ecf8*/
              v33 = *(_QWORD *)(v30 + 7); /*0x100a7ecfc*/
              if ( *(_QWORD *)v33 ) /*0x100a7ed00*/
                (*(void (__fastcall **)(__int64))v33)(v32); /*0x100a7ed0b*/
              v34 = *(_QWORD *)(v33 + 8); /*0x100a7ed0d*/
              if ( v34 ) /*0x100a7ed14*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v34, *(_QWORD *)(v33 + 16)); /*0x100a7ed1d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24, 8); /*0x100a7ed2f*/
            }
          }
          else
          {
            ++v78; /*0x100a7ed36*/
          }
          if ( !_InterlockedDecrement64(v47) ) /*0x100a7ed40*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v47); /*0x100a7ed58*/
        }
        else
        {
          ++v80; /*0x100a7eaad*/
          v79 = v52; /*0x100a7eab0*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a7eabb*/
          {
            v59 = v77; /*0x100a7eac1*/
            v60 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a7eacf*/
            v61 = &v79; /*0x100a7eada*/
            v62 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100a7eae8*/
            v69 = 2; /*0x100a7eaef*/
            v70 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7eb01*/
            v71 = 31; /*0x100a7eb08*/
            v73 = &unk_1017C9CE5; /*0x100a7eb17*/
            v74 = &v59; /*0x100a7eb22*/
            v63 = 0; /*0x100a7eb26*/
            v64 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7eb31*/
            v65 = 31; /*0x100a7eb38*/
            v66 = 0; /*0x100a7eb43*/
            v67 = "src/core/repository.rs"; /*0x100a7eb55*/
            v68 = 22; /*0x100a7eb5c*/
            v72 = 0x1D400000001LL; /*0x100a7eb71*/
            v27 = (volatile signed __int64 **)&v63; /*0x100a7eb79*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v81, &v63); /*0x100a7eb80*/
            v28 = v79; /*0x100a7eb85*/
          }
          if ( (v28 & 3) == 1 ) /*0x100a7ea78*/
          {
            v35 = v28 - 1; /*0x100a7ed70*/
            v36 = *(_QWORD *)(v28 - 1); /*0x100a7ed74*/
            v37 = *(_QWORD *)(v28 + 7); /*0x100a7ed78*/
            if ( *(_QWORD *)v37 ) /*0x100a7ed7c*/
              (*(void (__fastcall **)(__int64, volatile signed __int64 **))v37)(v36, v27); /*0x100a7ed87*/
            v38 = *(_QWORD *)(v37 + 8); /*0x100a7ed89*/
            if ( v38 ) /*0x100a7ed90*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v38, *(_QWORD *)(v37 + 16)); /*0x100a7ed9d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 24, 8); /*0x100a7ea5d*/
          }
        }
      }
      if ( !_InterlockedDecrement64(v75) ) /*0x100a7edab*/
      {
        v26 = &v75; /*0x100a7edb1*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v75); /*0x100a7edb5*/
      }
      v39 = v56; /*0x100a7edbe*/
      v40 = __n; /*0x100a7edc5*/
      v41 = v58; /*0x100a7edcc*/
      if ( v80 ) /*0x100a7edd3*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, &v75); /*0x100a7edd9*/
        v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8); /*0x100a7ede8*/
        if ( !v42 ) /*0x100a7edf0*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x100a7eeea*/
        v43 = v42; /*0x100a7edf6*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(48, 8); /*0x100a7edf9*/
        v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v40, 1); /*0x100a7ee06*/
        if ( !v44 ) /*0x100a7ee0e*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v40); /*0x100a7ef06*/
        v45 = v44; /*0x100a7ee14*/
        memcpy(v44, v41, v40); /*0x100a7ee20*/
        v50 = (volatile signed __int64 *)&v80; /*0x100a7ee29*/
        v51 = (char *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x100a7ee37*/
        v52 = (__int64)v77; /*0x100a7ee42*/
        __src[0] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a7ee50*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v54, &unk_1017C9C8B, &v50); /*0x100a7ee6c*/
        *(_QWORD *)(v43 + 40) = v54[2]; /*0x100a7ee78*/
        v46 = v54[0]; /*0x100a7ee7c*/
        *(_QWORD *)(v43 + 32) = v54[1]; /*0x100a7ee8a*/
        *(_QWORD *)(v43 + 24) = v46; /*0x100a7ee8e*/
        *(_QWORD *)v43 = v40; /*0x100a7ee92*/
        *(_QWORD *)(v43 + 8) = v45; /*0x100a7ee95*/
        *(_QWORD *)(v43 + 16) = v40; /*0x100a7ee99*/
        result = 1; /*0x100a7ee9d*/
      }
      else
      {
        v43 = 8; /*0x100a7eea4*/
        result = 0; /*0x100a7eeaa*/
      }
      *(_DWORD *)v39 = v78; /*0x100a7eeaf*/
      *(_QWORD *)(v39 + 8) = result; /*0x100a7eeb1*/
      *(_QWORD *)(v39 + 16) = v43; /*0x100a7eeb5*/
      *(_QWORD *)(v39 + 24) = result; /*0x100a7eeb9*/
    }
  }
  return result; /*0x100a7eebd*/
}