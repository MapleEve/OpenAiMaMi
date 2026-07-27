// __ZN13codexmate_lib4core5relay23codex_thread_visibility25find_session_meta_anchors @ 0x100ad2f40 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::find_session_meta_anchors::hea544617b47f60bc(
        _QWORD *a1,
        void *a2,
        __int64 a3)
{
  char *v6; // rax
  size_t v7; // rbx
  void *v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(_QWORD, _QWORD); // rax
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // r14
  size_t v16; // rdx
  __int64 v17; // rcx
  double result; // xmm0_8
  char *v19; // rax
  char *v20; // rax
  unsigned __int64 v21; // rdx
  size_t v22; // rcx
  __int64 (__fastcall *v23)(_QWORD, _QWORD); // rdx
  __int64 v24; // rax
  size_t v25; // rsi
  char *v26; // r8
  size_t v27; // r9
  size_t v28; // rcx
  char *v29; // rax
  __int64 v30; // rbx
  char *v31; // r14
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // rax
  char *v35; // rsi
  size_t v36; // r14
  int v37; // eax
  size_t v38; // rax
  size_t v39; // rdi
  __int64 v40; // rdi
  void *v41; // rax
  __int64 v42; // r9
  size_t v43; // rdi
  size_t v44; // rdx
  void *v45; // rcx
  __int64 v46; // rdx
  void *v47; // rcx
  __int64 v48; // rdx
  void *v49; // rcx
  _QWORD v50[2]; // [rsp+8h] [rbp-298h] BYREF
  char *v51; // [rsp+18h] [rbp-288h]
  __int64 v52; // [rsp+20h] [rbp-280h]
  __int64 v53; // [rsp+28h] [rbp-278h]
  __int64 v54; // [rsp+30h] [rbp-270h]
  char *v55; // [rsp+38h] [rbp-268h]
  __int64 v56; // [rsp+40h] [rbp-260h]
  unsigned __int64 v57; // [rsp+48h] [rbp-258h]
  char *v58; // [rsp+50h] [rbp-250h]
  unsigned __int64 v59; // [rsp+58h] [rbp-248h]
  _QWORD v60[4]; // [rsp+60h] [rbp-240h] BYREF
  __int64 v61; // [rsp+80h] [rbp-220h]
  __int64 v62; // [rsp+88h] [rbp-218h]
  __int64 v63; // [rsp+90h] [rbp-210h]
  __int64 v64; // [rsp+98h] [rbp-208h]
  __int64 v65; // [rsp+A0h] [rbp-200h]
  char *v66; // [rsp+A8h] [rbp-1F8h] BYREF
  size_t v67; // [rsp+B0h] [rbp-1F0h] BYREF
  void *__dst; // [rsp+B8h] [rbp-1E8h]
  _QWORD v69[9]; // [rsp+C0h] [rbp-1E0h] BYREF
  unsigned __int64 v70; // [rsp+110h] [rbp-190h]
  int v71; // [rsp+144h] [rbp-15Ch] BYREF
  __int16 v72; // [rsp+148h] [rbp-158h]
  int v73; // [rsp+14Ah] [rbp-156h]
  __int16 v74; // [rsp+14Eh] [rbp-152h]
  void *v75; // [rsp+150h] [rbp-150h]
  __int64 v76; // [rsp+158h] [rbp-148h]
  __int64 v77; // [rsp+160h] [rbp-140h]
  __int64 v78; // [rsp+168h] [rbp-138h]
  __int64 v79; // [rsp+170h] [rbp-130h]
  void *v80; // [rsp+178h] [rbp-128h]
  unsigned __int64 v81; // [rsp+180h] [rbp-120h]
  void *v82; // [rsp+188h] [rbp-118h] BYREF
  __int64 v83; // [rsp+190h] [rbp-110h]
  __int64 v84; // [rsp+198h] [rbp-108h]
  __int64 v85; // [rsp+1A0h] [rbp-100h]
  __int64 v86; // [rsp+1A8h] [rbp-F8h]
  void **v87; // [rsp+1B0h] [rbp-F0h] BYREF
  __int64 (__fastcall *v88)(_QWORD, _QWORD); // [rsp+1B8h] [rbp-E8h]
  void *v89; // [rsp+1C0h] [rbp-E0h]
  __int64 v90; // [rsp+1C8h] [rbp-D8h]
  __int64 v91; // [rsp+1D0h] [rbp-D0h]
  __int64 v92; // [rsp+1D8h] [rbp-C8h]
  __int64 v93; // [rsp+1E0h] [rbp-C0h]
  __int64 v94; // [rsp+1E8h] [rbp-B8h]
  __int64 v95; // [rsp+1F0h] [rbp-B0h]
  __int64 v96; // [rsp+1F8h] [rbp-A8h]
  __int64 v97; // [rsp+200h] [rbp-A0h]
  __int64 v98; // [rsp+208h] [rbp-98h]
  size_t v99; // [rsp+210h] [rbp-90h]
  char *v100; // [rsp+218h] [rbp-88h]
  char *v101; // [rsp+220h] [rbp-80h]
  unsigned __int64 v102; // [rsp+228h] [rbp-78h]
  size_t __n; // [rsp+230h] [rbp-70h]
  size_t v104; // [rsp+238h] [rbp-68h]
  size_t v105; // [rsp+240h] [rbp-60h]
  char *v106; // [rsp+248h] [rbp-58h]
  char *v107; // [rsp+250h] [rbp-50h]
  void *v108; // [rsp+258h] [rbp-48h]
  void *__src; // [rsp+260h] [rbp-40h]
  size_t v110; // [rsp+268h] [rbp-38h]
  _DWORD v111[11]; // [rsp+274h] [rbp-2Ch] BYREF

  codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hbef333d2a75f746a(&v66, a2, a3); /*0x100ad2f64*/
  v6 = v66; /*0x100ad2f69*/
  v7 = v67; /*0x100ad2f70*/
  v8 = __dst; /*0x100ad2f77*/
  v9 = v69[0]; /*0x100ad2f7e*/
  v61 = v69[1]; /*0x100ad2f8c*/
  v62 = v69[2]; /*0x100ad2f9a*/
  v63 = v69[3]; /*0x100ad2fa8*/
  if ( v66 != (char *)11 ) /*0x100ad2fb3*/
  {
    a1[12] = v69[8]; /*0x100ad2fe2*/
    a1[11] = v69[7]; /*0x100ad2fed*/
    a1[10] = v69[6]; /*0x100ad2ff8*/
    v10 = v69[4]; /*0x100ad2ffc*/
    a1[9] = v69[5]; /*0x100ad300d*/
    a1[8] = v10; /*0x100ad3011*/
    a1[3] = v8; /*0x100ad3015*/
    a1[4] = v9; /*0x100ad3019*/
    v11 = v62; /*0x100ad3024*/
    a1[5] = v61; /*0x100ad302b*/
    a1[6] = v11; /*0x100ad302f*/
    a1[7] = v63; /*0x100ad303a*/
    a1[1] = v6; /*0x100ad303e*/
    a1[2] = v7; /*0x100ad3042*/
    *a1 = 1; /*0x100ad3046*/
    return result; /*0x100ad304d*/
  }
  if ( __OFSUB__(-(__int64)v67, 1) ) /*0x100ad2fc2*/
  {
    a1[1] = 0x8000000000000000LL; /*0x100ad2fcb*/
    *a1 = 0; /*0x100ad2fcf*/
    return result; /*0x100ad2fd6*/
  }
  v54 = v63; /*0x100ad3059*/
  v53 = v62; /*0x100ad306e*/
  v52 = v61; /*0x100ad3075*/
  v66 = (char *)__dst; /*0x100ad307c*/
  v67 = v69[0]; /*0x100ad3083*/
  __dst = nullptr; /*0x100ad308a*/
  v69[0] = 0; /*0x100ad3095*/
  v80 = v8; /*0x100ad30a0*/
  v69[1] = v8; /*0x100ad30a7*/
  v69[2] = v9; /*0x100ad30ae*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v87, &v66); /*0x100ad30c3*/
  if ( (_BYTE)v87 == 6 ) /*0x100ad30d1*/
  {
    v12 = v88; /*0x100ad30d3*/
    a1[1] = 3; /*0x100ad30da*/
    a1[2] = v12; /*0x100ad30e2*/
    *a1 = 1; /*0x100ad30e6*/
    goto LABEL_14; /*0x100ad30ed*/
  }
  v60[0] = v87; /*0x100ad30fe*/
  v60[2] = v89; /*0x100ad3118*/
  v60[3] = v90; /*0x100ad3126*/
  v60[1] = v88; /*0x100ad3133*/
  v13 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v60, "/payload/idfirstrouter_model_restore.json", 11); /*0x100ad314d*/
  if ( v13 && *(_BYTE *)v13 == 3 && *(_QWORD *)(v13 + 24) ) /*0x100ad3164*/
  {
    v65 = *(_QWORD *)(v13 + 24); /*0x100ad316d*/
    v64 = *(_QWORD *)(v13 + 16); /*0x100ad3178*/
    v71 = 0; /*0x100ad317f*/
    v72 = 438; /*0x100ad3189*/
    v73 = 1; /*0x100ad3192*/
    v74 = 0; /*0x100ad319c*/
    std::fs::OpenOptions::_open::h1dad73452047b8aa(&v66, &v71, a2, a3); /*0x100ad31c0*/
    if ( (_DWORD)v66 == 1 ) /*0x100ad31cc*/
    {
      v14 = (void *)v67; /*0x100ad31d2*/
      v15 = 2; /*0x100ad31d9*/
LABEL_67:
      v79 = v93; /*0x100ad3a06*/
      v78 = v92; /*0x100ad3a1b*/
      v77 = v91; /*0x100ad3a29*/
      v76 = v90; /*0x100ad3a3e*/
      v75 = v89; /*0x100ad3a45*/
      a1[12] = v98; /*0x100ad3a53*/
      a1[11] = v97; /*0x100ad3a5e*/
      a1[10] = v96; /*0x100ad3a69*/
      a1[9] = v95; /*0x100ad3a74*/
      a1[8] = v94; /*0x100ad3a7f*/
      a1[7] = v79; /*0x100ad3a8a*/
      a1[6] = v78; /*0x100ad3a95*/
      a1[5] = v77; /*0x100ad3aa0*/
      v49 = v75; /*0x100ad3aa4*/
      a1[4] = v76; /*0x100ad3ab2*/
      a1[3] = v49; /*0x100ad3ab6*/
LABEL_68:
      a1[1] = v15; /*0x100ad3aba*/
      v17 = 2; /*0x100ad3abe*/
      goto LABEL_13; /*0x100ad3ac3*/
    }
    v111[0] = HIDWORD(v66); /*0x100ad32a2*/
    std::fs::File::metadata::h408606eff73040af(&v66, v111); /*0x100ad32b0*/
    v56 = v9; /*0x100ad32bc*/
    if ( (_DWORD)v66 == 1 ) /*0x100ad32c3*/
    {
      v88 = (__int64 (__fastcall *)(_QWORD, _QWORD))v67; /*0x100ad32cc*/
      v15 = 2; /*0x100ad32d3*/
    }
    else
    {
      v102 = v70; /*0x100ad32e5*/
      if ( v70 ) /*0x100ad32ec*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v66, v111); /*0x100ad32f2*/
        __src = (void *)1; /*0x100ad32fc*/
        v19 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed(0x10000, 1); /*0x100ad330a*/
        v110 = v7; /*0x100ad3312*/
        if ( !v19 ) /*0x100ad3316*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x10000); /*0x100ad3c21*/
        v108 = v19; /*0x100ad331c*/
        v55 = v19 + 1; /*0x100ad3323*/
        v107 = nullptr; /*0x100ad332e*/
        v20 = nullptr; /*0x100ad3336*/
        v99 = 0; /*0x100ad3338*/
        v21 = v102; /*0x100ad3343*/
        while ( 2 ) /*0x100ad3347*/
        {
          v101 = v20; /*0x100ad3347*/
          v22 = 0x10000; /*0x100ad3352*/
          v106 = (char *)v21; /*0x100ad3357*/
          if ( v21 < 0x10000 ) /*0x100ad335b*/
            v22 = v21; /*0x100ad335b*/
          v105 = v22; /*0x100ad335f*/
          v81 = v21 - v22; /*0x100ad3368*/
          if ( (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h9f4cbd6fbcee8df4(v111, 0, v21 - v22) & 1) != 0 ) /*0x100ad3376*/
          {
            v88 = v23; /*0x100ad3937*/
          }
          else
          {
            v24 = std::io::default_read_exact::haa83ade3829e94a3(v111, v108, v105); /*0x100ad3388*/
            if ( !v24 ) /*0x100ad3390*/
            {
              v25 = v105; /*0x100ad339a*/
              v26 = &v106[-v105]; /*0x100ad339e*/
              v27 = (size_t)v107; /*0x100ad33a1*/
              v21 = v81; /*0x100ad33a5*/
              while ( 2 ) /*0x100ad33ac*/
              {
                v28 = v25; /*0x100ad33ac*/
                v29 = v55; /*0x100ad33af*/
                v30 = 0; /*0x100ad33b6*/
                do /*0x100ad33d4*/
                {
                  if ( v25 == v30 ) /*0x100ad33bf*/
                  {
                    if ( v25 ) /*0x100ad35e8*/
                    {
                      v104 = v27; /*0x100ad35ee*/
                      v105 = v25; /*0x100ad35f6*/
                      v107 = (char *)(v25 + v27); /*0x100ad360c*/
                      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v66, v25 + v27, 0, 1, 1); /*0x100ad3612*/
                      v40 = v67; /*0x100ad3617*/
                      v7 = v110; /*0x100ad3625*/
                      if ( (_BYTE)v66 ) /*0x100ad3629*/
                      {
                        v100 = (char *)__dst; /*0x100ad3c0b*/
                        goto LABEL_55; /*0x100ad3c12*/
                      }
                      v41 = __dst; /*0x100ad362f*/
                      v66 = (char *)v67; /*0x100ad3636*/
                      v67 = (size_t)__dst; /*0x100ad363d*/
                      __dst = nullptr; /*0x100ad3644*/
                      v106 = (char *)v40; /*0x100ad365a*/
                      if ( v105 >= 0x10001 ) /*0x100ad365e*/
                        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v105, 0x10000, &off_101974928); /*0x100ad3bcf*/
                      __n = (size_t)v41; /*0x100ad3664*/
                      memcpy(v41, v108, v105); /*0x100ad366f*/
                      v43 = v105; /*0x100ad3674*/
                      __dst = (void *)v105; /*0x100ad3678*/
                      v44 = v104; /*0x100ad3686*/
                      if ( v104 > (unsigned __int64)&v106[-v105] ) /*0x100ad368d*/
                      {
                        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100ad3706*/
                          &v66,
                          v105,
                          v104,
                          1,
                          1,
                          v42);
                        v43 = (size_t)__dst; /*0x100ad370b*/
                        v106 = v66; /*0x100ad3719*/
                        __n = v67; /*0x100ad3724*/
                        v44 = v104; /*0x100ad3728*/
                        v107 = (char *)__dst + v104; /*0x100ad3730*/
                        v7 = v110; /*0x100ad3734*/
                      }
                      memcpy((void *)(__n + v43), __src, v44); /*0x100ad3697*/
                      __dst = v107; /*0x100ad36a0*/
                      if ( v101 ) /*0x100ad36ae*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v101, 1); /*0x100ad36b9*/
                      __src = (void *)__n; /*0x100ad36c2*/
                      v20 = v106; /*0x100ad36c6*/
                      v21 = v81; /*0x100ad36ce*/
                    }
                    else
                    {
                      v107 = (char *)v27; /*0x100ad36d7*/
                      v7 = v110; /*0x100ad36db*/
                      v20 = v101; /*0x100ad36df*/
                    }
                    goto LABEL_52; /*0x100ad36d5*/
                  }
                  ++v30; /*0x100ad33c5*/
                  v31 = v29 - 1; /*0x100ad33c8*/
                  v32 = v29[v25 - 2] == 10; /*0x100ad33cc*/
                  --v29; /*0x100ad33d1*/
                }
                while ( !v32 ); /*0x100ad33d4*/
                v33 = v27 + v30 - 1; /*0x100ad33dd*/
                if ( v33 < 0 ) /*0x100ad33e0*/
                {
                  v40 = 0; /*0x100ad373d*/
                  goto LABEL_55; /*0x100ad373d*/
                }
                __n = v30 - 1; /*0x100ad33e6*/
                v105 = v25; /*0x100ad33ea*/
                v106 = v26; /*0x100ad33ee*/
                v104 = v27; /*0x100ad33f2*/
                v107 = (char *)(v27 + v30 - 1); /*0x100ad33f6*/
                if ( v107 ) /*0x100ad33fa*/
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v111, v25); /*0x100ad33fc*/
                  v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v107, 1); /*0x100ad340a*/
                  if ( v34 ) /*0x100ad3412*/
                  {
                    v28 = v105; /*0x100ad3418*/
                    v26 = v106; /*0x100ad341c*/
                    v33 = (__int64)v107; /*0x100ad3420*/
                    goto LABEL_35; /*0x100ad3424*/
                  }
                  v100 = (char *)(v104 + v30 - 1); /*0x100ad3c31*/
                  v40 = 1; /*0x100ad3c38*/
LABEL_55:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v40, v100); /*0x100ad373f*/
                }
                v34 = 1; /*0x100ad3426*/
LABEL_35:
                v50[0] = v33; /*0x100ad342b*/
                v50[1] = v34; /*0x100ad3432*/
                v51 = nullptr; /*0x100ad3439*/
                if ( v28 >= 0x10001 ) /*0x100ad344b*/
                  core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v28 - v30 + 1, v28, 0x10000, &off_101974958); /*0x100ad3bfd*/
                v58 = &v26[v28]; /*0x100ad3455*/
                v59 = (unsigned __int64)&v26[v28 - v30]; /*0x100ad345f*/
                v57 = v59 + 1; /*0x100ad3469*/
                v100 = (char *)v34; /*0x100ad3476*/
                v35 = &v31[v28]; /*0x100ad347d*/
                v36 = __n; /*0x100ad3480*/
                memcpy((void *)v34, v35, __n); /*0x100ad3487*/
                v51 = (char *)v36; /*0x100ad348c*/
                memcpy(&v100[v30 - 1], __src, v104); /*0x100ad34a7*/
                v51 = v107; /*0x100ad34b0*/
                v37 = 0; /*0x100ad34c5*/
                if ( v102 >= v57 ) /*0x100ad34ca*/
                  v37 = v102 - v57; /*0x100ad34ca*/
                codexmate_lib::core::relay::codex_thread_visibility::matching_session_meta_from_bytes::h2d80e74c2ffa6ebb( /*0x100ad34fa*/
                  (unsigned int)&v66,
                  (unsigned int)v50,
                  v57,
                  (unsigned __int8)v99 + v37,
                  (unsigned __int8)v99,
                  v64,
                  v65);
                v15 = (__int64)v66; /*0x100ad34ff*/
                v38 = v67; /*0x100ad3506*/
                v82 = __dst; /*0x100ad351b*/
                v83 = v69[0]; /*0x100ad3522*/
                v84 = v69[1]; /*0x100ad352d*/
                v85 = v69[2]; /*0x100ad3538*/
                v86 = v69[3]; /*0x100ad3543*/
                if ( v66 != (char *)11 ) /*0x100ad354e*/
                {
                  v98 = v69[8]; /*0x100ad3acf*/
                  v97 = v69[7]; /*0x100ad3add*/
                  v96 = v69[6]; /*0x100ad3aeb*/
                  v95 = v69[5]; /*0x100ad3b00*/
                  v94 = v69[4]; /*0x100ad3b07*/
                  v89 = v82; /*0x100ad3b1c*/
                  v90 = v83; /*0x100ad3b23*/
                  v91 = v84; /*0x100ad3b31*/
                  v92 = v85; /*0x100ad3b3f*/
                  v93 = v86; /*0x100ad3b4d*/
                  v88 = (__int64 (__fastcall *)(_QWORD, _QWORD))v67; /*0x100ad3b54*/
                  v7 = v110; /*0x100ad3b5b*/
                  goto LABEL_64; /*0x100ad3b5f*/
                }
                v26 = v106; /*0x100ad3561*/
                if ( v67 != 0x8000000000000000LL ) /*0x100ad3565*/
                {
                  v88 = (__int64 (__fastcall *)(_QWORD, _QWORD))v67; /*0x100ad3b64*/
                  v89 = v82; /*0x100ad3b79*/
                  v90 = v83; /*0x100ad3b80*/
                  v91 = v84; /*0x100ad3b8e*/
                  v92 = v85; /*0x100ad3b9c*/
                  v93 = v86; /*0x100ad3baa*/
                  v7 = v110; /*0x100ad3bb1*/
                  goto LABEL_64; /*0x100ad3bb5*/
                }
                v25 = v105 - v30; /*0x100ad357c*/
                v39 = v105 + ~v30; /*0x100ad3585*/
                LOBYTE(v38) = 1; /*0x100ad3588*/
                v99 = v38; /*0x100ad358a*/
                v27 = 0; /*0x100ad3591*/
                v102 = (unsigned __int64)&v58[-v30]; /*0x100ad3597*/
                v21 = v81; /*0x100ad35a2*/
                if ( v39 <= 0xFFFF ) /*0x100ad35a9*/
                  continue; /*0x100ad35a9*/
                break;
              }
              if ( v105 != v30 ) /*0x100ad35b2*/
                core::panicking::panic_bounds_check::h56740b1198b22635(v39, 0x10000, &off_101974940, v105); /*0x100ad3c5a*/
              LOBYTE(v38) = 1; /*0x100ad35b8*/
              v99 = v38; /*0x100ad35ba*/
              v107 = nullptr; /*0x100ad35c1*/
              v102 = v59; /*0x100ad35d0*/
              v7 = v110; /*0x100ad35d4*/
              v20 = v101; /*0x100ad35d8*/
LABEL_52:
              if ( v21 ) /*0x100ad36e6*/
                continue; /*0x100ad36e6*/
              v66 = v20; /*0x100ad398f*/
              v67 = (size_t)__src; /*0x100ad399a*/
              __dst = v107; /*0x100ad39a5*/
              codexmate_lib::core::relay::codex_thread_visibility::matching_session_meta_from_bytes::h2d80e74c2ffa6ebb( /*0x100ad39ce*/
                (unsigned int)&v87,
                (unsigned int)&v66,
                0,
                (unsigned __int8)v99 + (_DWORD)v102,
                (unsigned __int8)v99,
                v64,
                v65);
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, 0x10000, 1); /*0x100ad39e1*/
              close_NOCANCEL(v111[0]); /*0x100ad39e9*/
              v15 = (__int64)v87; /*0x100ad39ee*/
              v14 = v88; /*0x100ad39f5*/
              if ( v87 != (void **)11 ) /*0x100ad3a00*/
                goto LABEL_67; /*0x100ad3a00*/
              goto LABEL_58; /*0x100ad3a00*/
            }
            v88 = (__int64 (__fastcall *)(_QWORD, _QWORD))v24; /*0x100ad3940*/
          }
          break;
        }
        v15 = 2; /*0x100ad3947*/
LABEL_64:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, 0x10000, 1); /*0x100ad394d*/
        if ( v101 ) /*0x100ad3967*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v101, 1); /*0x100ad3976*/
      }
      else
      {
        v88 = (__int64 (__fastcall *)(_QWORD, _QWORD))0x8000000000000000LL; /*0x100ad3766*/
        v15 = 11; /*0x100ad376d*/
      }
    }
    close_NOCANCEL(v111[0]); /*0x100ad3776*/
    v14 = v88; /*0x100ad377b*/
    if ( v15 != 11 ) /*0x100ad3786*/
      goto LABEL_67; /*0x100ad3786*/
LABEL_58:
    v79 = v93; /*0x100ad378c*/
    v78 = v92; /*0x100ad37a1*/
    v77 = v91; /*0x100ad37af*/
    v76 = v90; /*0x100ad37c4*/
    v75 = v89; /*0x100ad37cb*/
    if ( v14 != (void *)0x8000000000000000LL ) /*0x100ad37df*/
    {
      a1[12] = v79; /*0x100ad38b0*/
      a1[11] = v78; /*0x100ad38bb*/
      a1[10] = v77; /*0x100ad38c6*/
      v47 = v75; /*0x100ad38ca*/
      a1[9] = v76; /*0x100ad38d8*/
      a1[8] = v47; /*0x100ad38dc*/
      a1[1] = v7; /*0x100ad38e0*/
      a1[2] = v80; /*0x100ad38eb*/
      a1[3] = v56; /*0x100ad38f6*/
      v48 = v53; /*0x100ad3901*/
      a1[4] = v52; /*0x100ad3908*/
      a1[5] = v48; /*0x100ad390c*/
      a1[6] = v54; /*0x100ad3917*/
      a1[7] = v14; /*0x100ad391b*/
      *a1 = 0; /*0x100ad391f*/
      return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v60); /*0x100ad3932*/
    }
    v82 = a2; /*0x100ad37e5*/
    v83 = a3; /*0x100ad37ec*/
    v87 = &v82; /*0x100ad37fa*/
    v88 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad3808*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v67, &unk_1017CA989, &v87); /*0x100ad3824*/
    v14 = (void *)v67; /*0x100ad3829*/
    v45 = __dst; /*0x100ad3830*/
    a1[7] = v69[3]; /*0x100ad383e*/
    a1[6] = v69[2]; /*0x100ad3849*/
    a1[5] = v69[1]; /*0x100ad3854*/
    a1[4] = v69[0]; /*0x100ad385f*/
    a1[3] = v45; /*0x100ad3863*/
    v46 = v69[5]; /*0x100ad386e*/
    a1[8] = v69[4]; /*0x100ad3875*/
    a1[9] = v46; /*0x100ad3879*/
    a1[10] = v69[6]; /*0x100ad3884*/
    a1[11] = v69[7]; /*0x100ad388f*/
    a1[12] = v69[8]; /*0x100ad389a*/
    v15 = 9; /*0x100ad389e*/
    goto LABEL_68; /*0x100ad38a4*/
  }
  v82 = a2; /*0x100ad31e4*/
  v83 = a3; /*0x100ad31eb*/
  v87 = &v82; /*0x100ad31f9*/
  v88 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad3207*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v67, &unk_1017CA95E, &v87); /*0x100ad3223*/
  v16 = v67; /*0x100ad3228*/
  v14 = __dst; /*0x100ad322f*/
  qmemcpy(a1 + 4, v69, 0x48u); /*0x100ad3246*/
  a1[1] = 9; /*0x100ad3249*/
  a1[2] = v16; /*0x100ad3251*/
  v17 = 3; /*0x100ad3255*/
LABEL_13:
  a1[v17] = v14; /*0x100ad325a*/
  *a1 = 1; /*0x100ad325e*/
  result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v60); /*0x100ad326c*/
LABEL_14:
  if ( v7 ) /*0x100ad3274*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v7, 1); /*0x100ad3285*/
  return result; /*0x100ad328a*/
}