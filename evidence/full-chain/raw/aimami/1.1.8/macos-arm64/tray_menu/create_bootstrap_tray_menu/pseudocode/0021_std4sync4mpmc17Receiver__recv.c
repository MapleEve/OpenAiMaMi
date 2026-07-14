// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x100450ea0 depth=2
// std4sync4mpmc17Receiver::recv
_QWORD *__fastcall std::sync::mpmc::Receiver$LT$T$GT$::recv::h5ab5096e8c1f5faa(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r12
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // ecx
  unsigned int v8; // r15d
  signed __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // eax
  int v17; // ecx
  int k; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // eax
  int v23; // ecx
  int i; // eax
  int v25; // eax
  unsigned int v26; // ecx
  int j; // eax
  unsigned int v28; // ebx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 *v31; // r12
  __int64 v32; // r13
  volatile signed __int64 *v33; // rax
  pthread_mutex_t *v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rbx
  unsigned __int64 v39; // r13
  __int64 v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // r15
  volatile signed __int64 **v43; // rdi
  volatile signed __int64 *v44; // r12
  volatile signed __int64 *v45; // rdx
  volatile signed __int64 v46; // rdi
  __int64 *v47; // r14
  __int64 v48; // rbx
  void (**v49)(void); // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *v53; // r14
  __int64 v54; // r13
  volatile signed __int64 *v55; // rax
  char v56; // al
  __int64 v57; // rbx
  int v59; // r15d
  unsigned int v60; // r12d
  int v61; // eax
  unsigned int v62; // eax
  int v63; // eax
  int v64; // eax
  char **v65; // rdi
  signed __int32 v66[18]; // [rsp+0h] [rbp-330h] BYREF
  volatile signed __int64 *v67[23]; // [rsp+48h] [rbp-2E8h] BYREF
  _OWORD __dst[12]; // [rsp+100h] [rbp-230h] BYREF
  _QWORD __src[24]; // [rsp+1C0h] [rbp-170h] BYREF
  _OWORD v70[2]; // [rsp+280h] [rbp-B0h] BYREF
  __int64 *v71; // [rsp+2A0h] [rbp-90h]
  volatile signed __int64 *v72; // [rsp+2B0h] [rbp-80h] BYREF
  int v73; // [rsp+2B8h] [rbp-78h]
  __int128 v74; // [rsp+2C0h] [rbp-70h] BYREF
  __int128 v75; // [rsp+2D0h] [rbp-60h]
  __int64 v76; // [rsp+2E0h] [rbp-50h]
  void *v77; // [rsp+2F0h] [rbp-40h]
  volatile signed __int64 *v78; // [rsp+2F8h] [rbp-38h]
  __int64 v79; // [rsp+300h] [rbp-30h]

  v3 = a1; /*0x100450eb4*/
  v4 = a2[1]; /*0x100450eba*/
  if ( *a2 ) /*0x100450eb7*/
  {
    if ( (unsigned int)*a2 == 1 ) /*0x100450ec6*/
    {
      std::sync::mpmc::list::Channel$LT$T$GT$::recv::hce1084fb33000d62(__src, a2[1], a3, 1000000000); /*0x100450edb*/
LABEL_104:
      if ( __src[0] != 3 ) /*0x1004517d2*/
        goto LABEL_83; /*0x1004517d2*/
LABEL_105:
      *v3 = 3; /*0x1004517d8*/
      return v3; /*0x1004517d8*/
    }
    v78 = (volatile signed __int64 *)(v4 + 16); /*0x100451262*/
    v73 = 1000000000; /*0x100451266*/
    memset(v70, 0, sizeof(v70)); /*0x100451277*/
    v71 = nullptr; /*0x10045127e*/
    v34 = *(pthread_mutex_t **)(v4 + 16); /*0x100451289*/
    if ( !v34 ) /*0x100451290*/
      v34 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v78); /*0x10045187d*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v34); /*0x100451296*/
    if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1004512a5*/
    {
      LOBYTE(v64) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x10045188a*/
      LODWORD(v79) = v64; /*0x10045188c*/
      if ( !*(_BYTE *)(v4 + 24) ) /*0x100451896*/
      {
LABEL_60:
        v35 = *(_QWORD *)(v4 + 48); /*0x1004512c5*/
        if ( !v35 ) /*0x1004512cc*/
        {
LABEL_78:
          if ( *(_BYTE *)(v4 + 128) ) /*0x1004514f2*/
          {
            LOBYTE(__src[1]) = 1; /*0x100451500*/
            __src[0] = 3; /*0x100451507*/
            if ( !(_BYTE)v79 /*0x100451963*/
              && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
              && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
            {
              *(_BYTE *)(v4 + 24) = 1; /*0x100451970*/
            }
            std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v78); /*0x10045153c*/
            goto LABEL_104; /*0x100451541*/
          }
          *(_QWORD *)&v74 = v70; /*0x10045158f*/
          *((_QWORD *)&v74 + 1) = &v72; /*0x100451597*/
          *(_QWORD *)&v75 = v78; /*0x10045159f*/
          *((_QWORD *)&v75 + 1) = v78; /*0x1004515a3*/
          LOBYTE(v76) = v79; /*0x1004515aa*/
          v49 = &std::sync::mpmc::context::Context::with::CONTEXT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::hbb99d357da22c147; /*0x1004515ad*/
          std::sync::mpmc::context::Context::with::CONTEXT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::hbb99d357da22c147(); /*0x1004515b4*/
          v53 = (__int64 *)v50; /*0x1004515b6*/
          if ( *(_BYTE *)(v50 + 8) != 1 ) /*0x1004515bd*/
          {
            v49 = (void (**)(void))v50; /*0x1004518db*/
            v35 = 0; /*0x1004518de*/
            v53 = (__int64 *)std::sys::thread_local::native::lazy::Storage$LT$T$C$D$GT$::get_or_init_slow::h338f99ef86e502f7( /*0x1004518e5*/
                               v50,
                               0);
            if ( !v53 ) /*0x1004518eb*/
              goto LABEL_91; /*0x1004518eb*/
          }
          v54 = *v53; /*0x1004515c3*/
          *v53 = 0; /*0x1004515c6*/
          if ( v54 ) /*0x1004515d0*/
          {
            v67[0] = (volatile signed __int64 *)v54; /*0x1004515da*/
            *(_QWORD *)(v54 + 24) = 0; /*0x1004515e1*/
            *(_QWORD *)(v54 + 32) = 0; /*0x1004515e9*/
            LOBYTE(v76) = 2; /*0x1004515f1*/
            __dst[0] = v74; /*0x1004515fd*/
            __dst[1] = v75; /*0x10045160f*/
            LOBYTE(__dst[2]) = v79; /*0x100451624*/
            *(_DWORD *)((char *)&__dst[2] + 1) = *(_DWORD *)((char *)&v76 + 1); /*0x10045162f*/
            DWORD1(__dst[2]) = HIDWORD(v76); /*0x100451635*/
            std::sync::mpmc::zero::Channel$LT$T$GT$::recv::_$u7b$$u7b$closure$u7d$$u7d$::hdba8fea36a7abcbb( /*0x10045164c*/
              __src,
              __dst,
              v54);
            *(_QWORD *)&__dst[0] = *v53; /*0x100451654*/
            v55 = *(volatile signed __int64 **)&__dst[0]; /*0x100451651*/
            *v53 = v54; /*0x10045165b*/
            if ( v55 && !_InterlockedDecrement64(v55) ) /*0x100451663*/
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6036cb1fe8b33fb0(__dst); /*0x100451670*/
            memcpy(__dst, __src, sizeof(__dst)); /*0x100451688*/
          }
          else
          {
            v67[0] = (volatile signed __int64 *)std::sync::mpmc::context::Context::new::heb7d068a98349351( /*0x1004518fe*/
                                                  v49,
                                                  v35,
                                                  v51,
                                                  v52);
            LOBYTE(v76) = 2; /*0x100451905*/
            __src[0] = v70; /*0x100451909*/
            __src[1] = &v72; /*0x100451910*/
            __src[2] = v78; /*0x10045191b*/
            __src[3] = v78; /*0x100451922*/
            LOBYTE(__src[4]) = v79; /*0x10045192c*/
            std::sync::mpmc::zero::Channel$LT$T$GT$::recv::_$u7b$$u7b$closure$u7d$$u7d$::hdba8fea36a7abcbb( /*0x100451943*/
              __dst,
              __src,
              v67[0]);
            if ( !_InterlockedDecrement64(v67[0]) ) /*0x100451948*/
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6036cb1fe8b33fb0(v67); /*0x100451959*/
          }
          memcpy(v67, (char *)__dst + 8, sizeof(v67)); /*0x1004516a7*/
          if ( *(_QWORD *)&__dst[0] != 4 ) /*0x1004516b0*/
          {
            __src[0] = *(_QWORD *)&__dst[0]; /*0x1004516cf*/
            memcpy(&__src[1], v67, 0xB8u); /*0x1004516e9*/
            v56 = v76; /*0x1004516ee*/
            if ( (_BYTE)v76 == 2 ) /*0x1004516f4*/
              goto LABEL_104; /*0x1004516f4*/
          }
          else
          {
LABEL_91:
            std::sync::mpmc::context::Context::with::_$u7b$$u7b$closure$u7d$$u7d$::h4a42595edb7c3cfc(__src, &v74); /*0x1004516bd*/
            v56 = v76; /*0x1004516c2*/
            if ( (_BYTE)v76 == 2 ) /*0x1004516c8*/
              goto LABEL_104; /*0x1004516c8*/
          }
          v57 = *((_QWORD *)&v75 + 1); /*0x1004516fa*/
          if ( (v56 & 1) == 0 /*0x100451991*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
          {
            *(_BYTE *)(v57 + 8) = 1; /*0x10045199e*/
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v57); /*0x100451722*/
          goto LABEL_104; /*0x100451727*/
        }
        std::sync::mpmc::waker::current_thread_id::DUMMY::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::hde0054422645dbc3(); /*0x1004512d9*/
        v37 = *(_QWORD *)(v4 + 40); /*0x1004512de*/
        v35 *= 24; /*0x1004512e6*/
        v38 = 0; /*0x1004512ea*/
        v39 = 0; /*0x1004512ec*/
        while ( 1 ) /*0x100451310*/
        {
          v40 = *(_QWORD *)(v37 + v38); /*0x100451310*/
          if ( *(_QWORD *)(v40 + 40) != v36 /*0x100451321*/
            && !_InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 24), *(_QWORD *)(v37 + v38 + 8), 0) )
          {
            break; /*0x100451321*/
          }
          ++v39; /*0x100451300*/
          v38 += 24; /*0x100451303*/
          if ( v35 == v38 ) /*0x10045130a*/
            goto LABEL_78; /*0x10045130a*/
        }
        v41 = *(_QWORD *)(v37 + v38 + 16); /*0x100451329*/
        if ( v41 ) /*0x100451331*/
          *(_QWORD *)(v40 + 32) = v41; /*0x100451333*/
        std::sys::sync::thread_parking::darwin::Parker::unpark::h1af052e81cf3059c(*(_QWORD *)(v40 + 16) + 40LL); /*0x10045133f*/
        v77 = v3; /*0x100451344*/
        v42 = *(_QWORD *)(v4 + 48); /*0x100451348*/
        if ( v42 <= v39 ) /*0x100451352*/
          goto LABEL_134; /*0x100451352*/
        v43 = (volatile signed __int64 **)(*(_QWORD *)(v4 + 40) + v38); /*0x10045135c*/
        v44 = *v43; /*0x100451360*/
        v45 = v43[1]; /*0x100451364*/
        __src[1] = v43[2]; /*0x10045136e*/
        __src[0] = v45; /*0x100451375*/
        memmove(v43, v43 + 3, 24 * (v42 - v39) - 24); /*0x10045138d*/
        *(_QWORD *)(v4 + 48) = --v42; /*0x100451395*/
        if ( !v44 ) /*0x10045139c*/
LABEL_134:
          alloc::vec::Vec$LT$T$C$A$GT$::remove::assert_failed::h08ec7ef24832c20e(v39, v42, &off_101530208); /*0x1004519cb*/
        v67[2] = (volatile signed __int64 *)__src[1]; /*0x1004513b0*/
        v67[1] = (volatile signed __int64 *)__src[0]; /*0x1004513b7*/
        v67[0] = v44; /*0x1004513be*/
        v71 = (__int64 *)__src[1]; /*0x1004513c5*/
        if ( !(_BYTE)v79 /*0x10045197a*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
        {
          *(_BYTE *)(v4 + 24) = 1; /*0x100451987*/
        }
        v46 = *v78; /*0x1004513f3*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v78); /*0x1004513f6*/
        v3 = v77; /*0x1004513fb*/
        v47 = v71; /*0x1004513ff*/
        if ( !v71 ) /*0x100451409*/
        {
          LOBYTE(__src[1]) = 1; /*0x10045172c*/
          __src[0] = 3; /*0x100451733*/
          goto LABEL_102; /*0x10045173e*/
        }
        if ( *((_BYTE *)v71 + 193) ) /*0x10045140f*/
        {
          v48 = *v71; /*0x10045141d*/
          *v71 = 3; /*0x100451420*/
          if ( v48 != 3 ) /*0x10045142b*/
          {
            memcpy(__dst, v47 + 1, 0xB8u); /*0x100451441*/
            *((_BYTE *)v47 + 192) = 1; /*0x100451446*/
LABEL_101:
            __src[0] = v48; /*0x10045178f*/
            memcpy(&__src[1], __dst, 0xB8u); /*0x1004517a9*/
LABEL_102:
            if ( !_InterlockedDecrement64(v67[0]) ) /*0x1004517b5*/
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6036cb1fe8b33fb0(v67); /*0x1004517c2*/
            goto LABEL_104; /*0x1004517c2*/
          }
          v65 = &off_10152FFF8; /*0x1004519a7*/
        }
        else
        {
          if ( !*((_BYTE *)v71 + 192) ) /*0x10045174a*/
          {
            v59 = 0; /*0x1004517f5*/
            v60 = 0; /*0x1004517f8*/
            do /*0x10045180a*/
            {
              if ( v60 >= 7 ) /*0x100451821*/
              {
                std::thread::functions::yield_now::hd3ad5505c790d718(v46); /*0x1004517fd*/
              }
              else if ( v60 ) /*0x100451826*/
              {
                if ( (unsigned int)(v59 - 1) >= 7 ) /*0x10045182f*/
                {
                  v62 = v59 & 0xFFFFFFF8; /*0x100451834*/
                  do /*0x100451853*/
                  {
                    _mm_pause(); /*0x100451840*/
                    _mm_pause(); /*0x100451842*/
                    _mm_pause(); /*0x100451844*/
                    _mm_pause(); /*0x100451846*/
                    _mm_pause(); /*0x100451848*/
                    _mm_pause(); /*0x10045184a*/
                    _mm_pause(); /*0x10045184c*/
                    _mm_pause(); /*0x10045184e*/
                    v62 -= 8; /*0x100451850*/
                  }
                  while ( v62 ); /*0x100451853*/
                }
                v63 = v59 & 7; /*0x100451858*/
                if ( (v59 & 7) != 0 ) /*0x10045185b*/
                {
                  do /*0x100451864*/
                  {
                    _mm_pause(); /*0x100451860*/
                    --v63; /*0x100451862*/
                  }
                  while ( v63 ); /*0x100451864*/
                }
              }
              v61 = 2 * v60++ + 1; /*0x100451802*/
              v59 += v61; /*0x100451812*/
            }
            while ( !*((_BYTE *)v71 + 192) ); /*0x10045180a*/
          }
          v48 = *v71; /*0x100451750*/
          *v71 = 3; /*0x100451753*/
          if ( v48 != 3 ) /*0x10045175e*/
          {
            memcpy(__dst, v47 + 1, 0xB8u); /*0x100451774*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100451786*/
            v3 = v77; /*0x10045178b*/
            goto LABEL_101; /*0x10045178b*/
          }
          v65 = &off_10152FFE0; /*0x1004519b0*/
        }
        core::option::unwrap_failed::h44626cade04bbf1e((__int64)v65); /*0x1004519b7*/
      }
    }
    else
    {
      LODWORD(v79) = 0; /*0x1004512b1*/
      if ( !*(_BYTE *)(v4 + 24) ) /*0x1004512b8*/
        goto LABEL_60; /*0x1004512bf*/
    }
    __src[0] = v78; /*0x1004518a0*/
    LOBYTE(__src[1]) = v79; /*0x1004518aa*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004518d1*/
      (__int64)&anon_fa700c1a43d52b7c25cc5c59994db220_159,
      43,
      (__int64)__src,
      (__int64)&off_1015305B8,
      (__int64)&off_101530010);
  }
  v77 = a1; /*0x100450ee5*/
  DWORD2(v70[0]) = 1000000000; /*0x100450ee9*/
  std::sync::mpmc::context::Context::with::CONTEXT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::hbb99d357da22c147(); /*0x100450efa*/
  v6 = v5; /*0x100450efc*/
  v75 = 0; /*0x100450f02*/
  v74 = 0; /*0x100450f06*/
  v76 = 0; /*0x100450f0a*/
LABEL_5:
  v7 = 0; /*0x100450f12*/
  while ( 1 ) /*0x100450f5f*/
  {
    while ( 1 ) /*0x100450f26*/
    {
      v8 = v7; /*0x100450f26*/
      v9 = *(_QWORD *)v4; /*0x100450f29*/
      v10 = *(_QWORD *)(v4 + 424); /*0x100450f33*/
      v11 = *(_QWORD *)v4 & (*(_QWORD *)(v4 + 272) - 1LL); /*0x100450f3d*/
      v12 = 200 * v11; /*0x100450f49*/
      v13 = *(_QWORD *)(v10 + 200 * v11 + 192); /*0x100450f50*/
      v14 = *(_QWORD *)v4 + 1LL; /*0x100450f58*/
      if ( v14 == v13 ) /*0x100450f5f*/
        break; /*0x100450f5f*/
      if ( v13 == v9 ) /*0x100450fe3*/
      {
        _InterlockedOr(v66, 0); /*0x100450fe9*/
        v19 = *(_QWORD *)(v4 + 128); /*0x100450fef*/
        v20 = v19 & ~*(_QWORD *)(v4 + 272); /*0x100451003*/
        if ( v20 == v9 ) /*0x100451009*/
        {
          v3 = v77; /*0x1004510ce*/
          if ( (v19 & *(_QWORD *)(v4 + 272)) != 0 ) /*0x1004510d2*/
            goto LABEL_76; /*0x1004510d2*/
          v79 = v6; /*0x1004510d8*/
          v28 = DWORD2(v70[0]); /*0x1004510dc*/
          if ( DWORD2(v70[0]) != 1000000000 ) /*0x1004510e8*/
          {
            v29 = *(_QWORD *)&v70[0]; /*0x1004510ea*/
            v30 = std::time::Instant::now::hda76af2c3a449055(); /*0x1004510f1*/
            if ( v30 == v29 ) /*0x1004510f9*/
            {
              if ( (unsigned int)v20 >= v28 ) /*0x1004510fd*/
                goto LABEL_118; /*0x1004510fd*/
            }
            else if ( v30 >= v29 ) /*0x100451104*/
            {
LABEL_118:
              LOBYTE(__src[1]) = 0; /*0x100451868*/
              goto LABEL_77; /*0x10045186f*/
            }
          }
          *(_QWORD *)&__dst[0] = &v74; /*0x10045110e*/
          *((_QWORD *)&__dst[0] + 1) = v4; /*0x100451115*/
          *(_QWORD *)&__dst[1] = v70; /*0x100451123*/
          v6 = v79; /*0x10045112a*/
          v31 = (__int64 *)v79; /*0x100451132*/
          if ( *(_BYTE *)(v79 + 8) == 1 /*0x1004511e8*/
            || (v14 = v79,
                v13 = 0,
                (v31 = (__int64 *)std::sys::thread_local::native::lazy::Storage$LT$T$C$D$GT$::get_or_init_slow::h338f99ef86e502f7(
                                    v79,
                                    0)) != nullptr) )
          {
            v32 = *v31; /*0x10045113b*/
            *v31 = 0; /*0x10045113f*/
            if ( v32 ) /*0x100451151*/
            {
              v72 = (volatile signed __int64 *)v32; /*0x100451157*/
              *(_QWORD *)(v32 + 24) = 0; /*0x10045115b*/
              *(_QWORD *)(v32 + 32) = 0; /*0x100451163*/
              *(_QWORD *)&__dst[0] = 0; /*0x10045116b*/
              __src[0] = &v74; /*0x10045117a*/
              __src[2] = *(_QWORD *)&__dst[1]; /*0x10045118f*/
              __src[1] = *((_QWORD *)&__dst[0] + 1); /*0x100451193*/
              std::sync::mpmc::array::Channel$LT$T$GT$::recv::_$u7b$$u7b$closure$u7d$$u7d$::h01271db1d1a77cda( /*0x1004511a0*/
                __src,
                v32);
              __src[0] = *v31; /*0x1004511a9*/
              v33 = (volatile signed __int64 *)__src[0]; /*0x1004511a5*/
              *v31 = v32; /*0x1004511b0*/
              if ( v33 && !_InterlockedDecrement64(v33) ) /*0x1004511bd*/
                alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6036cb1fe8b33fb0(__src); /*0x1004511ce*/
            }
            else
            {
              v72 = (volatile signed __int64 *)std::sync::mpmc::context::Context::new::heb7d068a98349351( /*0x100451204*/
                                                 v14,
                                                 v13,
                                                 v20,
                                                 (char *)__dst + 8);
              *(_QWORD *)&__dst[0] = 0; /*0x100451208*/
              __src[0] = &v74; /*0x100451217*/
              __src[1] = v4; /*0x10045121e*/
              __src[2] = v70; /*0x10045122c*/
              std::sync::mpmc::array::Channel$LT$T$GT$::recv::_$u7b$$u7b$closure$u7d$$u7d$::h01271db1d1a77cda( /*0x10045123d*/
                __src,
                v72);
              if ( !_InterlockedDecrement64(v72) ) /*0x100451246*/
                alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6036cb1fe8b33fb0(&v72); /*0x100451250*/
              v6 = v79; /*0x100451255*/
            }
          }
          else
          {
            std::sync::mpmc::context::Context::with::_$u7b$$u7b$closure$u7d$$u7d$::h06c7816478c098df(__dst); /*0x1004511f5*/
          }
          goto LABEL_5; /*0x1004511fa*/
        }
        v21 = 6; /*0x100451013*/
        if ( v8 < 6 ) /*0x100451018*/
          v21 = v8; /*0x100451018*/
        v7 = 1; /*0x10045101c*/
        if ( v8 ) /*0x100451024*/
        {
          v22 = v21 * v21; /*0x10045102a*/
          if ( v22 >= 8 ) /*0x100451030*/
          {
            v23 = v22 & 0x38; /*0x100451034*/
            do /*0x100451053*/
            {
              _mm_pause(); /*0x100451040*/
              _mm_pause(); /*0x100451042*/
              _mm_pause(); /*0x100451044*/
              _mm_pause(); /*0x100451046*/
              _mm_pause(); /*0x100451048*/
              _mm_pause(); /*0x10045104a*/
              _mm_pause(); /*0x10045104c*/
              _mm_pause(); /*0x10045104e*/
              v23 -= 8; /*0x100451050*/
            }
            while ( v23 ); /*0x100451053*/
          }
          for ( i = v22 & 5; i; --i ) /*0x100451058*/
            _mm_pause(); /*0x100451060*/
          goto LABEL_7; /*0x100451064*/
        }
      }
      else
      {
        if ( v8 >= 7 ) /*0x100451074*/
        {
          std::thread::functions::yield_now::hd3ad5505c790d718(v14); /*0x100450f16*/
        }
        else if ( v8 ) /*0x10045107d*/
        {
          v25 = v8 * v8; /*0x100451086*/
          if ( v8 * v8 - 1 >= 7 ) /*0x10045108f*/
          {
            v26 = v25 & 0xFFFFFFF8; /*0x100451093*/
            do /*0x1004510b3*/
            {
              _mm_pause(); /*0x1004510a0*/
              _mm_pause(); /*0x1004510a2*/
              _mm_pause(); /*0x1004510a4*/
              _mm_pause(); /*0x1004510a6*/
              _mm_pause(); /*0x1004510a8*/
              _mm_pause(); /*0x1004510aa*/
              _mm_pause(); /*0x1004510ac*/
              _mm_pause(); /*0x1004510ae*/
              v26 -= 8; /*0x1004510b0*/
            }
            while ( v26 ); /*0x1004510b3*/
          }
          for ( j = v25 & 5; j; --j ) /*0x1004510b8*/
            _mm_pause(); /*0x1004510c0*/
        }
LABEL_7:
        v7 = v8 + 1; /*0x100450f20*/
      }
    }
    if ( (unsigned __int64)(v11 + 1) >= *(_QWORD *)(v4 + 256) ) /*0x100450f6b*/
      v13 = *(_QWORD *)(v4 + 264) + (v9 & -*(_QWORD *)(v4 + 264)); /*0x100450f77*/
    if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)v4, v13, v9) ) /*0x100450f82*/
      break; /*0x100450f82*/
    v15 = 6; /*0x100450f8c*/
    if ( v8 < 6 ) /*0x100450f91*/
      v15 = v8; /*0x100450f91*/
    v7 = 1; /*0x100450f95*/
    if ( v8 ) /*0x100450f9d*/
    {
      v16 = v15 * v15; /*0x100450f9f*/
      if ( v16 >= 8 ) /*0x100450fa5*/
      {
        v17 = v16 & 0x38; /*0x100450fa9*/
        do /*0x100450fc3*/
        {
          _mm_pause(); /*0x100450fb0*/
          _mm_pause(); /*0x100450fb2*/
          _mm_pause(); /*0x100450fb4*/
          _mm_pause(); /*0x100450fb6*/
          _mm_pause(); /*0x100450fb8*/
          _mm_pause(); /*0x100450fba*/
          _mm_pause(); /*0x100450fbc*/
          _mm_pause(); /*0x100450fbe*/
          v17 -= 8; /*0x100450fc0*/
        }
        while ( v17 ); /*0x100450fc3*/
      }
      for ( k = v16 & 5; k; --k ) /*0x100450fc8*/
        _mm_pause(); /*0x100450fd0*/
      goto LABEL_7; /*0x100450fd4*/
    }
  }
  *(_QWORD *)&v74 = v12 + v10; /*0x100451456*/
  *((_QWORD *)&v74 + 1) = *(_QWORD *)(v4 + 264) + v9; /*0x100451461*/
  memcpy(__src, (const void *)(v12 + v10), sizeof(__src)); /*0x100451477*/
  *(_QWORD *)(v74 + 192) = *((_QWORD *)&v74 + 1); /*0x10045147c*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x100451493*/
  std::sync::mpmc::waker::SyncWaker::notify::h519feeca8f1fd411(v4 + 280); /*0x1004514a2*/
  memcpy(v67, (char *)__dst + 8, sizeof(v67)); /*0x1004514c1*/
  v3 = v77; /*0x1004514ca*/
  if ( *(_QWORD *)&__dst[0] == 3 ) /*0x1004514ce*/
  {
LABEL_76:
    LOBYTE(__src[1]) = 1; /*0x1004514d0*/
LABEL_77:
    __src[0] = 3; /*0x1004514d7*/
    goto LABEL_105; /*0x1004514ed*/
  }
  memcpy(&__src[1], v67, 0xB8u); /*0x100451559*/
  __src[0] = *(_QWORD *)&__dst[0]; /*0x10045155e*/
LABEL_83:
  memcpy(v3, __src, 0xC0u); /*0x10045156f*/
  return v3; /*0x1004517e3*/
}