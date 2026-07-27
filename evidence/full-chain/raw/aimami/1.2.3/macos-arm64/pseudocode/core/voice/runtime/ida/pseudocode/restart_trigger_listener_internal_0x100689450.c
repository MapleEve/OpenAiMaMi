// __ZN13codexmate_lib4core5voice7runtime33restart_trigger_listener_internal @ 0x100689450 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::restart_trigger_listener_internal::hbf9d14de69187c5e(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r12
  char v13; // r13
  __int64 v14; // r14
  int v15; // ecx
  char v16; // r12
  char v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // rsi
  char v21; // al
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r13
  const __m128i *v26; // r14
  __int64 v28; // r14
  __int64 v29; // r15
  const __m128i *v30; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v36; // rbx
  __int128 v37; // kr00_16
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v43; // rbx
  __int128 v44; // kr10_16
  __int64 v45; // rbx
  void *v46; // rax
  void *v47; // r14
  __int64 v48; // r14
  __int64 v49; // r13
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // r15
  char v58; // r12
  int v59; // eax
  signed __int64 v60; // rt0
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // r14
  char v65; // of
  volatile signed __int64 *v66; // rbx
  __int64 v67; // rt0
  volatile signed __int64 *v68; // r14
  __int64 v69; // rt0
  _QWORD *v70; // [rsp+38h] [rbp-470h]
  __int64 v71; // [rsp+38h] [rbp-470h]
  __int64 v72; // [rsp+38h] [rbp-470h]
  char v73; // [rsp+38h] [rbp-470h]
  char v74; // [rsp+40h] [rbp-468h]
  unsigned __int64 v75; // [rsp+40h] [rbp-468h]
  unsigned __int64 v76; // [rsp+40h] [rbp-468h]
  _QWORD *v77; // [rsp+40h] [rbp-468h]
  __int64 v78; // [rsp+48h] [rbp-460h]
  __int64 v79; // [rsp+50h] [rbp-458h] BYREF
  __int64 v80; // [rsp+58h] [rbp-450h]
  __int64 v81; // [rsp+60h] [rbp-448h]
  __int64 v82; // [rsp+68h] [rbp-440h]
  __int64 v83; // [rsp+70h] [rbp-438h]
  unsigned __int64 v84; // [rsp+78h] [rbp-430h]
  __m128i v85; // [rsp+80h] [rbp-428h] BYREF
  _DWORD v86[2]; // [rsp+90h] [rbp-418h]
  __int64 v87; // [rsp+98h] [rbp-410h]
  __int64 v88; // [rsp+A0h] [rbp-408h]
  __int64 v89; // [rsp+A8h] [rbp-400h]
  __int128 v90; // [rsp+B0h] [rbp-3F8h] BYREF
  volatile signed __int64 *v91; // [rsp+C0h] [rbp-3E8h] BYREF
  int v92[2]; // [rsp+C8h] [rbp-3E0h] BYREF
  __int64 (__fastcall *v93)(); // [rsp+D0h] [rbp-3D8h]
  __int64 v94; // [rsp+E0h] [rbp-3C8h]
  __int128 v95; // [rsp+E8h] [rbp-3C0h] BYREF
  int v96[34]; // [rsp+F8h] [rbp-3B0h] BYREF
  __int128 v97; // [rsp+180h] [rbp-328h] BYREF
  __int128 v98; // [rsp+190h] [rbp-318h]
  __int128 v99; // [rsp+1A0h] [rbp-308h]
  __int64 v100; // [rsp+1B0h] [rbp-2F8h]
  __int64 v101; // [rsp+1B8h] [rbp-2F0h]
  __int64 v102; // [rsp+1C0h] [rbp-2E8h]
  __int64 v103; // [rsp+1C8h] [rbp-2E0h]
  __int128 v104; // [rsp+1D0h] [rbp-2D8h]
  __int128 v105; // [rsp+1E0h] [rbp-2C8h]
  __int128 v106; // [rsp+1F0h] [rbp-2B8h]
  _OWORD __src[35]; // [rsp+200h] [rbp-2A8h] BYREF
  _BYTE v108[120]; // [rsp+430h] [rbp-78h] BYREF

  codexmate_lib::core::voice::runtime::stop_trigger_listener_internal::h7b6e46b2a32015f3(a2); /*0x100689471*/
  v3 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x100689479*/
  v4 = v3; /*0x10068947e*/
  v5 = (_QWORD *)(v3 + 32); /*0x100689481*/
  v6 = *(_QWORD *)(v3 + 32); /*0x100689485*/
  if ( !v6 ) /*0x10068948c*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 32); /*0x1006895d0*/
  v70 = v5; /*0x100689492*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x1006894a1*/
  v9 = 0x7FFFFFFFFFFFFFFFLL; /*0x1006894b0*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v74 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8) ^ 1; /*0x1006895df*/
    if ( *(_BYTE *)(v4 + 40) ) /*0x1006895e3*/
      goto LABEL_5; /*0x1006895ea*/
  }
  else
  {
    v74 = 0; /*0x1006894bd*/
    if ( *(_BYTE *)(v4 + 40) )
    {
LABEL_5:
      *(_QWORD *)v96 = 0; /*0x1006894d2*/
      *(_QWORD *)&v96[2] = 1; /*0x1006894de*/
      *(_QWORD *)&v96[4] = 0; /*0x1006894ea*/
      *(_QWORD *)&__src[1] = 1610612768; /*0x1006894f6*/
      *(_QWORD *)&__src[0] = v96; /*0x10068950a*/
      *((_QWORD *)&__src[0] + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100689519*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10068a01a*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          v92,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v11 = *(_QWORD *)v96; /*0x100689545*/
      v12 = *(_QWORD *)&v96[2]; /*0x10068954d*/
      v13 = v96[4]; /*0x100689555*/
      v86[0] = *(int *)((char *)&v96[4] + 1); /*0x100689565*/
      *(_DWORD *)((char *)v86 + 3) = v96[5]; /*0x100689573*/
      if ( !v74
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v10,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v4 + 40) = 1; /*0x10068a031*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v70); /*0x10068959c*/
      *(_QWORD *)a1 = v11; /*0x1006895a1*/
      v14 = a1; /*0x1006895a4*/
      *(_QWORD *)(a1 + 8) = v12; /*0x1006895a7*/
      *(_BYTE *)(a1 + 16) = v13; /*0x1006895ab*/
      v15 = *(_DWORD *)((char *)v86 + 3); /*0x1006895b6*/
      *(_DWORD *)(a1 + 17) = v86[0]; /*0x1006895bd*/
      *(_DWORD *)(a1 + 20) = v15; /*0x1006895c0*/
      return v14; /*0x1006895c3*/
    }
  }
  v88 = a2; /*0x1006895f0*/
  v82 = a1; /*0x1006895f8*/
  v16 = *(_BYTE *)(v4 + 898); /*0x1006895fd*/
  v84 = *(_QWORD *)(v4 + 824); /*0x10068960c*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v96, v4 + 112); /*0x10068961d*/
  v17 = *(_BYTE *)(v4 + 899); /*0x100689622*/
  v83 = *(_QWORD *)(v4 + 832); /*0x100689631*/
  v103 = *(_QWORD *)(v4 + 888); /*0x10068963d*/
  v85 = _mm_loadu_si128((const __m128i *)(v4 + 808)); /*0x100689658*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h08697cf7f9d0479a( /*0x100689669*/
    __src,
    v4 + 776);
  __src[2] = _mm_load_si128(&v85); /*0x100689677*/
  v104 = __src[0]; /*0x100689690*/
  v105 = __src[1]; /*0x1006896a8*/
  v106 = __src[2]; /*0x1006896d0*/
  v85.i64[0] = *(_QWORD *)v96; /*0x1006896e8*/
  v89 = *(_QWORD *)&v96[2]; /*0x1006896f8*/
  v102 = *(_QWORD *)&v96[4]; /*0x100689708*/
  if ( !v74 /*0x10068a03b*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           __src,
                           v4 + 776,
                           v18,
                           *((_QWORD *)&__src[2] + 1)) )
  {
    *(_BYTE *)(v4 + 40) = 1; /*0x10068a048*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v70); /*0x100689732*/
  v99 = v106; /*0x10068974f*/
  v98 = v105; /*0x10068976f*/
  v97 = v104; /*0x10068978f*/
  if ( !v16 ) /*0x10068979a*/
  {
    v14 = v82; /*0x10068985f*/
    *(_QWORD *)v82 = 0x8000000000000000LL; /*0x10068986e*/
    v22 = v85.i64[0]; /*0x100689871*/
    goto LABEL_57; /*0x100689879*/
  }
  v19 = v84; /*0x1006897a0*/
  v20 = v83; /*0x1006897a5*/
  v21 = codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d(v84, v83); /*0x1006897aa*/
  v79 = 0; /*0x1006897af*/
  v80 = 8; /*0x1006897b8*/
  v81 = 0; /*0x1006897c1*/
  v22 = v85.i64[0]; /*0x1006897cc*/
  if ( v21 ) /*0x1006897d4*/
  {
    v19 = (unsigned __int64)&v79; /*0x1006897da*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v79); /*0x1006897df*/
    v23 = v80; /*0x1006897e4*/
    *(_QWORD *)v80 = 0; /*0x1006897e9*/
    *(_QWORD *)(v23 + 8) = 1; /*0x1006897f0*/
    *(_QWORD *)(v23 + 16) = 0; /*0x1006897f8*/
    *(_QWORD *)(v23 + 24) = v84; /*0x100689805*/
    *(_QWORD *)(v23 + 32) = v83; /*0x10068980e*/
    *(_BYTE *)(v23 + 40) = v17; /*0x100689812*/
    v81 = 1; /*0x100689816*/
    v24 = *((_QWORD *)&v98 + 1); /*0x10068981f*/
    if ( !*((_QWORD *)&v98 + 1) ) /*0x10068982a*/
      goto LABEL_41; /*0x10068982a*/
    v94 = 0x7FFFFFFFFFFFFFFFLL; /*0x100689830*/
    v25 = v97; /*0x100689838*/
    v26 = (const __m128i *)(v97 + 16); /*0x100689840*/
    _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v97)); /*0x10068984e*/
    v78 = 1; /*0x100689855*/
    do /*0x100689a9b*/
    {
      if ( !(_WORD)_RAX ) /*0x100689aa4*/
      {
        do /*0x100689ac9*/
        {
          v41 = _mm_movemask_epi8(_mm_load_si128(v26)); /*0x100689ab5*/
          v25 -= 1536; /*0x100689ab9*/
          ++v26; /*0x100689ac0*/
        }
        while ( v41 == 0xFFFF ); /*0x100689ac9*/
        _RAX = (unsigned int)~v41; /*0x100689acb*/
      }
      _R12D = _RAX; /*0x100689acd*/
      __asm { tzcnt eax, r12d } /*0x100689ad0*/
      v43 = -96 * _RAX; /*0x100689adc*/
      if ( *(_QWORD *)(v25 - 96 * _RAX - 80) >= 0x10u ) /*0x100689ae6*/
      {
        v20 = v25 - 96 * _RAX; /*0x100689ae8*/
        if ( !(*(_QWORD *)(*(_QWORD *)(v20 - 88) + 8LL) ^ 0x5F6E6F697463615FLL /*0x100689b12*/
             | **(_QWORD **)(v20 - 88) ^ 0x696D616D69615F5FLL) )
        {
          v19 = *(_QWORD *)(v20 - 24); /*0x100689b1b*/
          v72 = v25 - 96 * _RAX; /*0x100689b1f*/
          v20 = *(_QWORD *)(v20 - 16); /*0x100689b24*/
          if ( v84 ^ v19 | v83 ^ v20 ) /*0x100689b38*/
          {
            v76 = v19; /*0x100689b41*/
            if ( (unsigned __int8)codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d( /*0x100689b46*/
                                    v19,
                                    v20) )
            {
              v20 = v25 + v43 - 96; /*0x100689b53*/
              v19 = (unsigned __int64)__src; /*0x100689b58*/
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v20); /*0x100689b60*/
              LOBYTE(v87) = *(_BYTE *)(v72 - 8); /*0x100689b6e*/
              v101 = *(_QWORD *)(v72 - 16); /*0x100689b79*/
              v44 = __src[0]; /*0x100689b96*/
              v100 = *(_QWORD *)&__src[1]; /*0x100689ba3*/
              v45 = v81; /*0x100689bb0*/
              if ( v81 == v79 ) /*0x100689bb8*/
              {
                v19 = (unsigned __int64)&v79; /*0x100689bbe*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v79); /*0x100689bc3*/
              }
              v39 = v80; /*0x100689a2e*/
              v40 = 48 * v45; /*0x100689a37*/
              *(_OWORD *)(v80 + v40) = v44; /*0x100689a40*/
              *(_QWORD *)(v39 + v40 + 16) = v100; /*0x100689a56*/
              *(_QWORD *)(v39 + v40 + 24) = v76; /*0x100689a60*/
              *(_QWORD *)(v39 + v40 + 32) = v101; /*0x100689a6d*/
              *(_BYTE *)(v39 + v40 + 40) = v87; /*0x100689a7a*/
              v78 = v45 + 1; /*0x100689a81*/
              v81 = v45 + 1; /*0x100689a86*/
            }
          }
        }
      }
      _RAX = _R12D & (unsigned int)(_R12D - 1); /*0x100689a95*/
      --v24; /*0x100689a98*/
    }
    while ( v24 ); /*0x100689a9b*/
  }
  else
  {
    v28 = *((_QWORD *)&v98 + 1); /*0x10068987e*/
    if ( !*((_QWORD *)&v98 + 1) ) /*0x100689889*/
      goto LABEL_45; /*0x100689889*/
    v94 = 0x7FFFFFFFFFFFFFFFLL; /*0x10068988f*/
    v29 = v97; /*0x100689897*/
    v30 = (const __m128i *)(v97 + 16); /*0x10068989f*/
    _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v97)); /*0x1006898ac*/
    v78 = 0; /*0x1006898ae*/
    do /*0x10068991b*/
    {
      if ( !(_WORD)_RAX ) /*0x100689924*/
      {
        do /*0x10068994a*/
        {
          v34 = _mm_movemask_epi8(_mm_load_si128(v30)); /*0x100689936*/
          v29 -= 1536; /*0x10068993a*/
          ++v30; /*0x100689941*/
        }
        while ( v34 == 0xFFFF ); /*0x10068994a*/
        _RAX = (unsigned int)~v34; /*0x10068994c*/
      }
      _R12D = _RAX; /*0x10068994e*/
      __asm { tzcnt eax, r12d } /*0x100689951*/
      v36 = -96 * _RAX; /*0x10068995d*/
      if ( *(_QWORD *)(v29 - 96 * _RAX - 80) >= 0x10u ) /*0x100689967*/
      {
        v20 = v29 - 96 * _RAX; /*0x100689969*/
        if ( !(*(_QWORD *)(*(_QWORD *)(v20 - 88) + 8LL) ^ 0x5F6E6F697463615FLL /*0x100689992*/
             | **(_QWORD **)(v20 - 88) ^ 0x696D616D69615F5FLL) )
        {
          v19 = *(_QWORD *)(v20 - 24); /*0x10068999b*/
          v71 = v29 - 96 * _RAX; /*0x10068999f*/
          v20 = *(_QWORD *)(v20 - 16); /*0x1006899a4*/
          v75 = v19; /*0x1006899a8*/
          if ( (unsigned __int8)codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d( /*0x1006899ad*/
                                  v19,
                                  v20) )
          {
            v20 = v29 + v36 - 96; /*0x1006899ba*/
            v19 = (unsigned __int64)__src; /*0x1006899bf*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v20); /*0x1006899c7*/
            LOBYTE(v84) = *(_BYTE *)(v71 - 8); /*0x1006899d5*/
            v83 = *(_QWORD *)(v71 - 16); /*0x1006899dd*/
            v37 = __src[0]; /*0x1006899f7*/
            v87 = *(_QWORD *)&__src[1]; /*0x100689a04*/
            v38 = v81; /*0x100689a11*/
            if ( v81 == v79 ) /*0x100689a19*/
            {
              v19 = (unsigned __int64)&v79; /*0x100689a1f*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v79); /*0x100689a24*/
            }
            v32 = v80; /*0x1006898b9*/
            v33 = 48 * v38; /*0x1006898c2*/
            *(_OWORD *)(v80 + v33) = v37; /*0x1006898cb*/
            *(_QWORD *)(v32 + v33 + 16) = v87; /*0x1006898e1*/
            *(_QWORD *)(v32 + v33 + 24) = v75; /*0x1006898eb*/
            *(_QWORD *)(v32 + v33 + 32) = v83; /*0x1006898f5*/
            *(_BYTE *)(v32 + v33 + 40) = v84; /*0x1006898ff*/
            v78 = v38 + 1; /*0x100689906*/
            v81 = v38 + 1; /*0x10068990b*/
          }
        }
      }
      _RAX = _R12D & (unsigned int)(_R12D - 1); /*0x100689915*/
      --v28; /*0x100689918*/
    }
    while ( v28 ); /*0x10068991b*/
  }
  v22 = v85.i64[0]; /*0x100689bd3*/
  v9 = v94; /*0x100689bdb*/
  if ( !v78 ) /*0x100689be3*/
  {
LABEL_45:
    v14 = v82; /*0x100689dc4*/
    *(_QWORD *)v82 = 0x8000000000000000LL; /*0x100689dd3*/
    if ( v79 ) /*0x100689dde*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, 48 * v79, 8); /*0x100689df6*/
    goto LABEL_57; /*0x100689dfb*/
  }
LABEL_41:
  *(_QWORD *)&__src[24] = 1; /*0x100689be9*/
  *((_QWORD *)&__src[24] + 1) = 1; /*0x100689bf5*/
  LOBYTE(__src[25]) = 0; /*0x100689c01*/
  *(_QWORD *)&__src[16] = 0; /*0x100689c09*/
  BYTE8(__src[16]) = 0; /*0x100689c15*/
  *(_QWORD *)&__src[17] = 0; /*0x100689c1d*/
  __src[0] = 0; /*0x100689c2d*/
  __src[8] = 0; /*0x100689c36*/
  *((_QWORD *)&__src[17] + 1) = 8; /*0x100689c3f*/
  __src[18] = 0; /*0x100689c4b*/
  __src[19] = 8u; /*0x100689c54*/
  LOBYTE(__src[20]) = 1; /*0x100689c6c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v20); /*0x100689c74*/
  v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 128); /*0x100689c83*/
  if ( !v46 ) /*0x100689c8b*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x10068a05c*/
  v47 = v46; /*0x100689c91*/
  memcpy(v46, __src, 0x200u); /*0x100689ca4*/
  *(_QWORD *)&v95 = 1; /*0x100689ca9*/
  *((_QWORD *)&v95 + 1) = v47; /*0x100689cb5*/
  *(_QWORD *)&v96[4] = v81; /*0x100689cc2*/
  *(_QWORD *)&v96[2] = v80; /*0x100689cd4*/
  *(_QWORD *)v96 = v79; /*0x100689cdc*/
  codexmate_lib::platform::voice_trigger_macos::start_trigger_listener_multi::h664df626b9157521(__src, v96, 1, v47); /*0x100689cff*/
  v14 = v82; /*0x100689d04*/
  if ( LOBYTE(__src[0]) ) /*0x100689d11*/
  {
    *(_OWORD *)&v96[2] = __src[1]; /*0x100689d37*/
    *(_QWORD *)v96 = *((_QWORD *)&__src[0] + 1); /*0x100689d3f*/
    *(_QWORD *)v92 = v96; /*0x100689d47*/
    v93 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100689d56*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v108, &unk_1017C313E, v92); /*0x100689d75*/
    codexmate_lib::core::voice::runtime::update_runtime_error::h31b8c40ccc1e9f87(v88, v108); /*0x100689d8a*/
    *(_QWORD *)v14 = 0x8000000000000000LL; /*0x100689d99*/
    if ( *(_QWORD *)v96 ) /*0x100689da7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v96[2], *(_QWORD *)v96, 1); /*0x100689dba*/
LABEL_56:
    _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc874c961085b598a(&v95); /*0x100689fb2*/
LABEL_57:
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd743cfc519763180(&v97); /*0x100689fbf*/
    if ( v22 ) /*0x100689fcf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, v22, 1); /*0x100689fe1*/
    return v14; /*0x100689fe1*/
  }
  v48 = v9; /*0x100689e00*/
  v91 = *((volatile signed __int64 **)&__src[1] + 1); /*0x100689e0b*/
  v90 = *(_OWORD *)((char *)__src + 8); /*0x100689e2b*/
  v49 = tauri::Manager::state::hb5ba04dc9da9798f(v88); /*0x100689e4a*/
  v77 = (_QWORD *)(v49 + 32); /*0x100689e51*/
  v50 = *(_QWORD *)(v49 + 32); /*0x100689e56*/
  if ( !v50 ) /*0x100689e5d*/
    v50 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v77); /*0x10068a070*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v50); /*0x100689e63*/
  if ( (v48 & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0 )
  {
    v73 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v50, v96, v51, v52) ^ 1; /*0x10068a087*/
    v53 = v85.i64[0]; /*0x10068a08b*/
    if ( *(_BYTE *)(v49 + 40) ) /*0x10068a093*/
      goto LABEL_51; /*0x10068a09a*/
  }
  else
  {
    v73 = 0; /*0x100689e7b*/
    v53 = v85.i64[0]; /*0x100689e83*/
    if ( *(_BYTE *)(v49 + 40) )
    {
LABEL_51:
      *(_QWORD *)v96 = 0; /*0x100689e98*/
      *(_QWORD *)&v96[2] = 1; /*0x100689ea4*/
      *(_QWORD *)&v96[4] = 0; /*0x100689eb0*/
      *(_QWORD *)&__src[1] = 1610612768; /*0x100689ebc*/
      *(_QWORD *)&__src[0] = v96; /*0x100689ec8*/
      *((_QWORD *)&__src[0] + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100689ed7*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10068a2db*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          v92,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v56 = *(_QWORD *)v96; /*0x100689f00*/
      v57 = *(_QWORD *)&v96[2]; /*0x100689f08*/
      v58 = v96[4]; /*0x100689f10*/
      v92[0] = *(int *)((char *)&v96[4] + 1); /*0x100689f20*/
      *(int *)((char *)v92 + 3) = v96[5]; /*0x100689f2e*/
      if ( !v73
        && (v48 & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v54,
                               v55) )
      {
        *(_BYTE *)(v49 + 40) = 1; /*0x10068a2ef*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v77); /*0x100689f57*/
      v59 = v92[0]; /*0x100689f5c*/
      v14 = v82; /*0x100689f6a*/
      *(_DWORD *)(v82 + 20) = *(int *)((char *)v92 + 3); /*0x100689f6f*/
      *(_DWORD *)(v14 + 17) = v59; /*0x100689f73*/
      *(_QWORD *)v14 = v56; /*0x100689f77*/
      *(_QWORD *)(v14 + 8) = v57; /*0x100689f7a*/
      *(_BYTE *)(v14 + 16) = v58; /*0x100689f7e*/
      _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfc457547a7b90080(&v90); /*0x100689f8a*/
      v60 = _InterlockedDecrement64(v91); /*0x100689f97*/
      v22 = v85.i64[0]; /*0x100689f9b*/
      if ( !v60 ) /*0x100689fa3*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(&v91); /*0x100689fad*/
      goto LABEL_56; /*0x100689fad*/
    }
  }
  *(_QWORD *)&__src[1] = v91; /*0x10068a0a8*/
  __src[0] = v90; /*0x10068a0c8*/
  if ( *(_DWORD *)(v49 + 64) != 3 ) /*0x10068a0d9*/
  {
    v50 = v49 + 64; /*0x10068a0db*/
    _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfc457547a7b90080(v49 + 64); /*0x10068a0de*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v49 + 80)) ) /*0x10068a0e7*/
    {
      v50 = v49 + 80; /*0x10068a0f0*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(v49 + 80); /*0x10068a0f4*/
    }
  }
  *(_QWORD *)(v49 + 80) = *(_QWORD *)&__src[1]; /*0x10068a101*/
  v62 = *((_QWORD *)&__src[0] + 1); /*0x10068a10d*/
  *(_OWORD *)(v49 + 64) = __src[0]; /*0x10068a119*/
  v63 = *(_QWORD *)(v49 + 664); /*0x10068a11c*/
  if ( v63 != 0x8000000000000000LL && v63 ) /*0x10068a12b*/
  {
    v50 = *(_QWORD *)(v49 + 672); /*0x10068a12d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v63, 1); /*0x10068a139*/
  }
  *(_QWORD *)(v49 + 664) = 0x8000000000000000LL; /*0x10068a13e*/
  if ( !v73 /*0x10068a2f9*/
    && (v48 & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v50, v63, v51, v62) )
  {
    *(_BYTE *)(v49 + 40) = 1; /*0x10068a306*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v77); /*0x10068a167*/
  v64 = v88; /*0x10068a16c*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(v96, v88); /*0x10068a17f*/
  v66 = *(volatile signed __int64 **)(v64 + 136); /*0x10068a184*/
  v67 = _InterlockedIncrement64(v66); /*0x10068a18b*/
  if ( (v67 < 0) ^ v65 | (v67 == 0) /*0x10068a1a0*/
    || (v68 = *(volatile signed __int64 **)(v64 + 144), v69 = _InterlockedIncrement64(v68), (v69 < 0) ^ v65 | (v69 == 0)) )
  {
    BUG(); /*0x10068a33f*/
  }
  memcpy(&__src[1], v96, 0x88u); /*0x10068a1bb*/
  *((_QWORD *)&__src[10] + 1) = v53; /*0x10068a1d0*/
  *(_QWORD *)&__src[11] = v89; /*0x10068a1e0*/
  *((_QWORD *)&__src[11] + 1) = v102; /*0x10068a1f0*/
  __src[0] = v95; /*0x10068a1f8*/
  *((_QWORD *)&__src[9] + 1) = v66; /*0x10068a208*/
  *(_QWORD *)&__src[10] = v68; /*0x10068a210*/
  *(_QWORD *)&__src[12] = v103; /*0x10068a220*/
  *(_QWORD *)v92 = 0x8000000000000000LL; /*0x10068a228*/
  std::thread::lifecycle::spawn_unchecked::h0eaf30910e81602c((int)v96, (int)v92, 0, SDWORD2(v95), 0, 0, __src); /*0x10068a254*/
  v14 = v82; /*0x10068a259*/
  if ( !*(_QWORD *)v96 ) /*0x10068a271*/
  {
    *(_QWORD *)v96 = *(_QWORD *)&v96[2]; /*0x10068a310*/
    core::result::unwrap_failed::h855bccc0ecc45c4f("failed to spawn thread", 22, v96, &off_101968498, &off_101967AA0); /*0x10068a33a*/
  }
  core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(v96); /*0x10068a29f*/
  *(_QWORD *)v14 = 0x8000000000000000LL; /*0x10068a2a4*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd743cfc519763180(&v97); /*0x10068a2af*/
  return v14; /*0x100689fe9*/
}