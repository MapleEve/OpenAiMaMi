// mac 1.1.8 BEHAVIORAL-BACKEND single_instance_acquire node 0x10109a6b0 depth=1
// std2fs10DirBuilder7_create
_UNKNOWN **__fastcall std::fs::DirBuilder::_create::h099c6e2853c95452(__int64 a1, _BYTE *a2, char *a3)
{
  char *v3; // r15
  __int64 v4; // r14
  bool v5; // al
  unsigned __int64 v6; // rbx
  char *v7; // r13
  _BYTE *v8; // rcx
  bool v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r12
  size_t v15; // r12
  bool v16; // al
  char *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  bool v22; // al
  char *p_dst; // rdi
  __int64 v24; // rcx
  bool v25; // al
  __int64 v26; // r15
  int v27; // r14d
  char v28; // al
  char v29; // al
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // rsi
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r12
  __int64 v37; // r13
  _BYTE *v38; // r15
  char *v39; // rcx
  _BYTE *v40; // rbx
  _BYTE *v41; // rcx
  bool v42; // al
  __int64 v43; // r14
  const void *v44; // rsi
  size_t v45; // rbx
  char v46; // al
  __int64 v47; // r15
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 __dst; // [rsp+0h] [rbp-240h] BYREF
  char *v52; // [rsp+8h] [rbp-238h]
  char v53; // [rsp+10h] [rbp-230h]
  __int16 v54; // [rsp+38h] [rbp-208h]
  bool v55; // [rsp+3Ah] [rbp-206h]
  _BYTE *v56; // [rsp+180h] [rbp-C0h]
  __int64 v57; // [rsp+188h] [rbp-B8h]
  char *v58; // [rsp+190h] [rbp-B0h] BYREF
  char *v59; // [rsp+198h] [rbp-A8h]
  char v60; // [rsp+1A0h] [rbp-A0h]
  __int16 v61; // [rsp+1C8h] [rbp-78h]
  bool v62; // [rsp+1CAh] [rbp-76h]
  unsigned __int64 v63; // [rsp+1D0h] [rbp-70h] BYREF
  char *v64; // [rsp+1D8h] [rbp-68h]
  char *v65; // [rsp+1E0h] [rbp-60h]
  __int64 v66; // [rsp+1E8h] [rbp-58h] BYREF
  __int64 v67; // [rsp+1F0h] [rbp-50h]
  __int64 v68; // [rsp+1F8h] [rbp-48h]
  unsigned __int64 v69; // [rsp+200h] [rbp-40h]
  mode_t v70; // [rsp+20Eh] [rbp-32h]
  mode_t v71[24]; // [rsp+210h] [rbp-30h]

  v3 = a3; /*0x10109a6c4*/
  v4 = a1; /*0x10109a6c7*/
  if ( !*(_BYTE *)(a1 + 2) ) /*0x10109a6ce*/
  {
    v66 = a1; /*0x10109a6e4*/
    if ( (unsigned __int64)a3 > 0x17F ) /*0x10109a6ef*/
      return (_UNKNOWN **)std::sys::helpers::small_c_string::run_with_cstr_allocating::h1e1d7c70f80a53e9( /*0x10109af36*/
                            a2,
                            a3,
                            &v66,
                            &std::sys::fs::unix::DirBuilder::mkdir::_$u7b$$u7b$closure$u7d$$u7d$::h3f420bbd64925c7e);
    memcpy(&__dst, a2, (size_t)a3); /*0x10109a702*/
    *((_BYTE *)&__dst + (_QWORD)v3) = 0; /*0x10109a707*/
    core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v58, &__dst, v3 + 1); /*0x10109a720*/
    if ( (_BYTE)v58 ) /*0x10109a72c*/
      return &off_1015AE3E8; /*0x10109a735*/
    if ( mkdir(v59, *(_WORD *)a1) == -1 ) /*0x10109a74d*/
      return (_UNKNOWN **)(((unsigned __int64)(unsigned int)*__error() << 32) | 2); /*0x10109a762*/
    return nullptr; /*0x10109a74d*/
  }
  if ( a3 ) /*0x10109a6d3*/
    v5 = *a2 == 47; /*0x10109a6dc*/
  else
    v5 = 0; /*0x10109a767*/
  v7 = a2; /*0x10109a769*/
  v58 = a2; /*0x10109a76c*/
  v59 = a3; /*0x10109a773*/
  v60 = 6; /*0x10109a77a*/
  v62 = v5; /*0x10109a781*/
  v61 = 513; /*0x10109a784*/
  __dst = 1; /*0x10109a78a*/
  v52 = nullptr; /*0x10109a795*/
  v53 = 6; /*0x10109a7a0*/
  v55 = 0; /*0x10109a7a7*/
  v54 = 513; /*0x10109a7ae*/
  if ( (unsigned __int8)((__int64 (__fastcall *)(char **, __int64 *))_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5193f8baacc9df8f)( /*0x10109a7c5*/
                          &v58,
                          &__dst) )
    return nullptr; /*0x10109a7c5*/
  if ( v3 ) /*0x10109a7d5*/
  {
    v8 = a2; /*0x10109a7d7*/
    v9 = *a2 == 47; /*0x10109a7df*/
  }
  else
  {
    v9 = 0; /*0x10109a7e4*/
    v8 = a2; /*0x10109a7e6*/
  }
  __dst = (__int64)v8; /*0x10109a7e9*/
  v52 = v3; /*0x10109a7f0*/
  v53 = 6; /*0x10109a7f7*/
  v55 = v9; /*0x10109a7fe*/
  v54 = 513; /*0x10109a804*/
  ((void (__fastcall *)(char **, __int64 *))_$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84)( /*0x10109a81b*/
    &v58,
    &__dst);
  if ( (unsigned __int8)((_BYTE)v58 - 7) >= 3u || !std::path::Components::as_path::he4876f57fa839c0b(&__dst) ) /*0x10109a838*/
    return nullptr; /*0x10109a840*/
  v70 = *(_WORD *)a1; /*0x10109a84a*/
  v14 = 0; /*0x10109a84e*/
  v56 = a2; /*0x10109a851*/
  *(_QWORD *)v71 = v3; /*0x10109a858*/
  while ( 2 ) /*0x10109a886*/
  {
    v69 = v14; /*0x10109a886*/
    v15 = (size_t)v3; /*0x10109a88a*/
    if ( v3 ) /*0x10109a890*/
      v16 = *v7 == 47; /*0x10109a897*/
    else
      v16 = 0; /*0x10109a89c*/
    __dst = (__int64)v7; /*0x10109a8ac*/
    v52 = v3; /*0x10109a8b3*/
    v53 = 6; /*0x10109a8ba*/
    v55 = v16; /*0x10109a8c1*/
    v54 = 513; /*0x10109a8c7*/
    ((void (__fastcall *)(char **, __int64 *, __int64, __int64, __int64, __int64))_$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84)( /*0x10109a8d6*/
      &v58,
      &__dst,
      v10,
      v11,
      v12,
      v13);
    if ( (unsigned __int8)((_BYTE)v58 - 7) > 2u ) /*0x10109a8e6*/
    {
      v65 = nullptr; /*0x10109a912*/
      if ( v3 ) /*0x10109a919*/
      {
LABEL_24:
        v22 = *v7 == 47; /*0x10109a8fd*/
        goto LABEL_27; /*0x10109a905*/
      }
    }
    else
    {
      v21 = std::path::Components::as_path::he4876f57fa839c0b(&__dst); /*0x10109a8eb*/
      v64 = v17; /*0x10109a8f0*/
      v65 = (char *)v21; /*0x10109a8f4*/
      if ( v3 ) /*0x10109a8fb*/
        goto LABEL_24; /*0x10109a8fb*/
    }
    v22 = 0; /*0x10109a91b*/
LABEL_27:
    v58 = v7; /*0x10109a91d*/
    v59 = v3; /*0x10109a924*/
    v60 = 6; /*0x10109a92b*/
    v62 = v22; /*0x10109a932*/
    v61 = 513; /*0x10109a935*/
    __dst = 1; /*0x10109a93b*/
    v52 = nullptr; /*0x10109a946*/
    v53 = 6; /*0x10109a951*/
    v55 = 0; /*0x10109a958*/
    v54 = 513; /*0x10109a95f*/
    p_dst = (char *)&v58; /*0x10109a968*/
    if ( (unsigned __int8)((__int64 (__fastcall *)(char **, __int64 *, char *, __int64, __int64, __int64))_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5193f8baacc9df8f)( /*0x10109a96e*/
                            &v58,
                            &__dst,
                            v17,
                            v18,
                            v19,
                            v20) )
      goto LABEL_62; /*0x10109a96e*/
    v25 = v3 && *v7 == 47; /*0x10109a97e*/
    __dst = (__int64)v7; /*0x10109a98c*/
    v52 = v3; /*0x10109a993*/
    v53 = 6; /*0x10109a99a*/
    v55 = v25; /*0x10109a9a1*/
    v54 = 513; /*0x10109a9a7*/
    p_dst = (char *)&v58; /*0x10109a9b0*/
    ((void (__fastcall *)(char **, __int64 *, __int64, __int64, __int64, __int64))_$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84)( /*0x10109a9b6*/
      &v58,
      &__dst,
      v10,
      v24,
      v12,
      v13);
    if ( (unsigned __int8)((_BYTE)v58 - 7) >= 3u ) /*0x10109a9c6*/
      goto LABEL_62; /*0x10109a9c6*/
    p_dst = (char *)&__dst; /*0x10109a9cc*/
    if ( !std::path::Components::as_path::he4876f57fa839c0b(&__dst) ) /*0x10109a9cf*/
      goto LABEL_62; /*0x10109a9d7*/
    v66 = v4; /*0x10109a9dd*/
    if ( (unsigned __int64)v3 > 0x17F ) /*0x10109a9e8*/
    {
      p_dst = v7; /*0x10109aaff*/
      v6 = std::sys::helpers::small_c_string::run_with_cstr_allocating::h1e1d7c70f80a53e9( /*0x10109ab15*/
             v7,
             v3,
             &v66,
             &std::sys::fs::unix::DirBuilder::mkdir::_$u7b$$u7b$closure$u7d$$u7d$::h3f420bbd64925c7e);
      v63 = v6; /*0x10109ab18*/
      if ( !v6 ) /*0x10109ab1f*/
        goto LABEL_62; /*0x10109ab1f*/
    }
    else
    {
      memcpy(&__dst, v7, (size_t)v3); /*0x10109a9f7*/
      *((_BYTE *)&__dst + (_QWORD)v3) = 0; /*0x10109a9fc*/
      p_dst = (char *)&v58; /*0x10109aa0a*/
      core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v58, &__dst, v3 + 1); /*0x10109aa10*/
      v6 = (unsigned __int64)&off_1015AE3E8; /*0x10109aa1c*/
      if ( !(_BYTE)v58 ) /*0x10109aa23*/
      {
        p_dst = v59; /*0x10109aa25*/
        if ( mkdir(v59, v70) != -1 ) /*0x10109aa38*/
        {
          v63 = 0; /*0x10109aa3c*/
LABEL_62:
          v14 = v69; /*0x10109ab7e*/
LABEL_63:
          if ( v14 >> 60 != 0 || 16 * v14 > 0x7FFFFFFFFFFFFFF8LL ) /*0x10109aba0*/
          {
            v4 = 0; /*0x10109aba7*/
            goto LABEL_65; /*0x10109aba7*/
          }
          v64 = (char *)v4; /*0x10109abb5*/
          if ( 16 * v14 ) /*0x10109ab85*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(p_dst); /*0x10109abbe*/
            v4 = 8; /*0x10109abc3*/
            v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16 * v14, 8); /*0x10109abd1*/
            v35 = v14; /*0x10109abd6*/
            if ( !v34 ) /*0x10109abdc*/
LABEL_65:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, 16 * v14); /*0x10109abaa*/
          }
          else
          {
            v34 = 8; /*0x10109abe0*/
            v35 = 0; /*0x10109abe5*/
          }
          v66 = v35; /*0x10109abe7*/
          v67 = v34; /*0x10109abeb*/
          v68 = 0; /*0x10109abef*/
          if ( !v14 ) /*0x10109abfa*/
            goto LABEL_109; /*0x10109abfa*/
          v65 = (char *)v34; /*0x10109ac00*/
          v57 = 16 * v14; /*0x10109ac04*/
          v69 = v14; /*0x10109ac0b*/
          v36 = 0; /*0x10109ac0f*/
          v37 = 0; /*0x10109ac12*/
          v38 = v56; /*0x10109ac15*/
          while ( 1 ) /*0x10109ac6c*/
          {
            if ( !v38 ) /*0x10109ac6f*/
            {
              if ( v36 ) /*0x10109ad0d*/
              {
                v43 = v67; /*0x10109ad13*/
                goto LABEL_86; /*0x10109ad17*/
              }
LABEL_109:
              if ( v66 ) /*0x10109aed5*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 16 * v66, 8); /*0x10109aee4*/
              return nullptr; /*0x10109aee9*/
            }
            v40 = v38; /*0x10109ac75*/
            if ( *(_QWORD *)v71 ) /*0x10109ac7d*/
            {
              v41 = v38; /*0x10109ac7f*/
              v42 = *v38 == 47; /*0x10109ac85*/
            }
            else
            {
              v42 = 0; /*0x10109ac8a*/
              v41 = v38; /*0x10109ac8c*/
            }
            __dst = (__int64)v41; /*0x10109ac8f*/
            v52 = *(char **)v71; /*0x10109ac9a*/
            v53 = 6; /*0x10109aca1*/
            v55 = v42; /*0x10109aca8*/
            v54 = 513; /*0x10109acae*/
            ((void (__fastcall *)(char **, __int64 *, __int64, _QWORD, __int64, __int64))_$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84)( /*0x10109acc5*/
              &v58,
              &__dst,
              v10,
              *(_QWORD *)v71,
              v12,
              v13);
            if ( (unsigned __int8)((_BYTE)v58 - 7) > 2u ) /*0x10109acd5*/
            {
              v38 = nullptr; /*0x10109acf8*/
              if ( v37 != v66 ) /*0x10109acff*/
                goto LABEL_73; /*0x10109acff*/
            }
            else
            {
              v38 = (_BYTE *)std::path::Components::as_path::he4876f57fa839c0b(&__dst); /*0x10109ace3*/
              v4 = v10; /*0x10109ace6*/
              if ( v37 != v66 ) /*0x10109aced*/
                goto LABEL_73; /*0x10109aced*/
            }
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01(&v66, v37, 1, 8, 16); /*0x10109ac35*/
            v65 = (char *)v67; /*0x10109ac3e*/
LABEL_73:
            v39 = v65; /*0x10109ac42*/
            *(_QWORD *)&v65[v36] = v40; /*0x10109ac46*/
            *(_QWORD *)&v39[v36 + 8] = *(_QWORD *)v71; /*0x10109ac4e*/
            v68 = ++v37; /*0x10109ac56*/
            v36 += 16; /*0x10109ac5a*/
            *(_QWORD *)v71 = v4; /*0x10109ac5e*/
            if ( v69 == v37 ) /*0x10109ac66*/
            {
              v43 = v67; /*0x10109ad19*/
              v36 = v57; /*0x10109ad1d*/
LABEL_86:
              *(_DWORD *)v71 = v70; /*0x10109ad24*/
              while ( 2 ) /*0x10109ad5a*/
              {
                v44 = *(const void **)(v43 + v36 - 16); /*0x10109ad5a*/
                v45 = *(_QWORD *)(v43 + v36 - 8); /*0x10109ad5f*/
                v63 = (unsigned __int64)v64; /*0x10109ad68*/
                if ( v45 > 0x17F ) /*0x10109ad73*/
                {
                  v6 = std::sys::helpers::small_c_string::run_with_cstr_allocating::h1e1d7c70f80a53e9( /*0x10109aebd*/
                         v44,
                         v45,
                         &v63,
                         &std::sys::fs::unix::DirBuilder::mkdir::_$u7b$$u7b$closure$u7d$$u7d$::h3f420bbd64925c7e);
                  if ( v6 ) /*0x10109aec3*/
                    goto LABEL_94; /*0x10109aec3*/
                }
                else
                {
                  memcpy(&__dst, v44, v45); /*0x10109ad7f*/
                  *((_BYTE *)&__dst + v45) = 0; /*0x10109ad84*/
                  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v58, &__dst, v45 + 1); /*0x10109ad9c*/
                  v6 = (unsigned __int64)&off_1015AE3E8; /*0x10109ada8*/
                  if ( (_BYTE)v58 ) /*0x10109adaf*/
                    goto LABEL_93; /*0x10109adaf*/
                  if ( mkdir(v59, v71[0]) == -1 ) /*0x10109adc3*/
                  {
                    v6 = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x10109add9*/
LABEL_93:
                    if ( v6 ) /*0x10109ade3*/
                    {
LABEL_94:
                      __dst = v6; /*0x10109ade9*/
                      switch ( v6 & 3 ) /*0x10109ae05*/
                      {
                        case 0uLL: /*0x10109ae05*/
                          v46 = *(_BYTE *)(v6 + 16); /*0x10109ae07*/
                          goto LABEL_100; /*0x10109ae0b*/
                        case 1uLL: /*0x10109ae05*/
                          v46 = *(_BYTE *)(v6 + 15); /*0x10109ae3f*/
                          goto LABEL_100; /*0x10109ae3f*/
                        case 2uLL: /*0x10109ae05*/
                          v46 = std::sys::io::error::unix::decode_error_kind::h142c2d37be665936(HIDWORD(v6)); /*0x10109ae14*/
LABEL_100:
                          if ( v46 == 12 ) /*0x10109ae45*/
                            goto LABEL_101; /*0x10109ae45*/
                          goto LABEL_113; /*0x10109ae45*/
                        case 3uLL: /*0x10109ae05*/
                          if ( (v6 & 0xFFFFFFFF00000000LL) != 0xC00000000LL ) /*0x10109ae38*/
                            goto LABEL_113; /*0x10109ae38*/
LABEL_101:
                          if ( !(unsigned __int8)std::path::Path::is_dir::h7ca012509d3e379e( /*0x10109ae5c*/
                                                   *(void **)(v43 + v36 - 16),
                                                   *(_QWORD *)(v43 + v36 - 8)) )
                          {
LABEL_113:
                            if ( v66 ) /*0x10109af07*/
                              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 16 * v66, 8); /*0x10109af16*/
                            return (_UNKNOWN **)v6; /*0x10109af1b*/
                          }
                          if ( (v6 & 3) == 1 ) /*0x10109ae66*/
                          {
                            v69 = v6 - 1; /*0x10109ae70*/
                            v47 = *(_QWORD *)(v6 - 1); /*0x10109ae74*/
                            v48 = *(_QWORD *)(v6 + 7); /*0x10109ae78*/
                            if ( *(_QWORD *)v48 ) /*0x10109ae7c*/
                              (*(void (__fastcall **)(__int64))v48)(v47); /*0x10109ae87*/
                            v49 = *(_QWORD *)(v48 + 8); /*0x10109ae89*/
                            if ( v49 ) /*0x10109ae90*/
                              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v49, *(_QWORD *)(v48 + 16)); /*0x10109ae9d*/
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, 24, 8); /*0x10109ad42*/
                          }
                          break; /*0x10109ad42*/
                      }
                    }
                  }
                }
                v36 -= 16; /*0x10109ad50*/
                if ( !v36 ) /*0x10109ad54*/
                  goto LABEL_109; /*0x10109ad54*/
                continue; /*0x10109ad54*/
              }
            }
          }
        }
        v6 = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x10109aa55*/
      }
      v63 = v6; /*0x10109aa60*/
      if ( !v6 ) /*0x10109aa67*/
        goto LABEL_62; /*0x10109aa67*/
    }
    v26 = v4; /*0x10109aa6d*/
    v27 = v6 & 3; /*0x10109aa73*/
    switch ( v6 & 3 ) /*0x10109aa85*/
    {
      case 0uLL: /*0x10109aa85*/
        v28 = *(_BYTE *)(v6 + 16); /*0x10109aa87*/
        goto LABEL_42; /*0x10109aa8b*/
      case 1uLL: /*0x10109aa85*/
        v29 = *(_BYTE *)(v6 + 15); /*0x10109aaad*/
        if ( !v29 ) /*0x10109aab3*/
          goto LABEL_46; /*0x10109aab3*/
        goto LABEL_58; /*0x10109aab3*/
      case 2uLL: /*0x10109aa85*/
        p_dst = (char *)HIDWORD(v6); /*0x10109aa90*/
        v28 = std::sys::io::error::unix::decode_error_kind::h142c2d37be665936(HIDWORD(v6)); /*0x10109aa94*/
LABEL_42:
        if ( !v28 ) /*0x10109aa9b*/
        {
          if ( v27 == 1 ) /*0x10109aaa5*/
          {
LABEL_46:
            v30 = *(_QWORD *)(v6 - 1); /*0x10109aab9*/
            v31 = *(_QWORD *)(v6 + 7); /*0x10109aac1*/
            if ( *(_QWORD *)v31 ) /*0x10109aac5*/
              (*(void (__fastcall **)(_QWORD))v31)(*(_QWORD *)(v6 - 1)); /*0x10109aad1*/
            v32 = *(_QWORD *)(v31 + 8); /*0x10109aad3*/
            if ( v32 ) /*0x10109aada*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16)); /*0x10109aae3*/
            p_dst = (char *)(v6 - 1); /*0x10109aaf2*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6 - 1, 24, 8); /*0x10109aaf5*/
          }
LABEL_18:
          v14 = v69 + 1; /*0x10109a86b*/
          v7 = v65; /*0x10109a872*/
          v4 = v26; /*0x10109a879*/
          v3 = v64; /*0x10109a87c*/
          if ( !v65 ) /*0x10109a880*/
            goto LABEL_63; /*0x10109a880*/
          continue; /*0x10109a880*/
        }
        if ( (v6 & 3) != 0 ) /*0x10109ab2a*/
        {
          if ( v27 == 2 ) /*0x10109ab30*/
            v29 = std::sys::io::error::unix::decode_error_kind::h142c2d37be665936(HIDWORD(v6)); /*0x10109ab3d*/
          else
            v29 = *(_BYTE *)(v6 + 15); /*0x10109af38*/
        }
        else
        {
          v29 = *(_BYTE *)(v6 + 16); /*0x10109ab49*/
        }
LABEL_58:
        v33 = v29 == 12; /*0x10109ab4d*/
LABEL_59:
        v4 = v26; /*0x10109ab4f*/
        if ( v33 && (unsigned __int8)std::path::Path::is_dir::h7ca012509d3e379e(v7, v15) ) /*0x10109ab5e*/
        {
          __dst = v6; /*0x10109ab6b*/
          p_dst = (char *)&__dst; /*0x10109ab72*/
          core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330(&__dst); /*0x10109ab79*/
          goto LABEL_62; /*0x10109ab79*/
        }
        return (_UNKNOWN **)v6;
      case 3uLL: /*0x10109aa85*/
        if ( !HIDWORD(v6) ) /*0x10109a861*/
          goto LABEL_18; /*0x10109a865*/
        v33 = HIDWORD(v6) == 12; /*0x10109ab44*/
        goto LABEL_59; /*0x10109ab47*/
    }
  }
}