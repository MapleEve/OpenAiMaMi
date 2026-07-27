// __ZN13codexmate_lib4core5voice9workspace15upsert_template @ 0x100afe500 | 基线 same-set
void *__fastcall codexmate_lib::core::voice::workspace::upsert_template::h83a8d18a12d05669(
        void *a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  char v6; // r13
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rax
  char *v10; // rdi
  __int64 *v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rbx
  int v14; // edx
  signed __int64 v15; // rdx
  signed __int64 v16; // rbx
  size_t v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  void *v20; // rax
  size_t v21; // rdx
  size_t v22; // r12
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // r13
  size_t v27; // r12
  const void *v28; // rdi
  void *v29; // rsi
  __int64 v30; // r14
  __int64 v31; // r13
  void *v32; // rax
  _QWORD *v33; // rcx
  void *v34; // rax
  void *v35; // r14
  _QWORD *v36; // r13
  void *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rsi
  void *v42; // rsi
  _QWORD *v43; // rdi
  __int64 v44; // r12
  signed __int64 v45; // rdx
  signed __int64 v46; // r13
  void *v47; // rax
  void *v48; // r14
  void *v49; // rdi
  void *v50; // rsi
  __int64 v51; // rax
  _QWORD *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdi
  void *v55; // rsi
  __int64 v56; // rdi
  void *v57; // rax
  void *v58; // r12
  __int64 v59; // r14
  _BYTE *v60; // rdi
  _QWORD *v61; // rsi
  __int64 v62; // r12
  __int64 v63; // rsi
  size_t v64; // rbx
  __int64 v65; // r12
  __int64 v66; // rsi
  size_t v67; // rbx
  __int64 v68; // r12
  __int64 v69; // rsi
  int v70; // edx
  __int64 v71; // rax
  _QWORD *v72; // rdx
  _QWORD v73[14]; // [rsp+0h] [rbp-320h] BYREF
  _BYTE v74[16]; // [rsp+70h] [rbp-2B0h] BYREF
  __int64 v75; // [rsp+80h] [rbp-2A0h] BYREF
  _QWORD v76[12]; // [rsp+88h] [rbp-298h] BYREF
  _QWORD v77[3]; // [rsp+E8h] [rbp-238h] BYREF
  __int64 v78; // [rsp+100h] [rbp-220h]
  __int64 v79; // [rsp+108h] [rbp-218h]
  _QWORD v80[30]; // [rsp+110h] [rbp-210h] BYREF
  _QWORD v81[2]; // [rsp+200h] [rbp-120h] BYREF
  __int64 v82; // [rsp+210h] [rbp-110h] BYREF
  __int64 v83; // [rsp+218h] [rbp-108h]
  _QWORD v84[16]; // [rsp+220h] [rbp-100h] BYREF
  void *v85; // [rsp+2A0h] [rbp-80h]
  void *v86; // [rsp+2A8h] [rbp-78h]
  __int64 v87; // [rsp+2B0h] [rbp-70h]
  __int64 v88; // [rsp+2B8h] [rbp-68h]
  void *v89; // [rsp+2C0h] [rbp-60h]
  size_t v90; // [rsp+2C8h] [rbp-58h]
  size_t __n; // [rsp+2D0h] [rbp-50h]
  void *__dst; // [rsp+2D8h] [rbp-48h]
  void *__s2; // [rsp+2E0h] [rbp-40h]
  __int64 v94; // [rsp+2E8h] [rbp-38h]
  char v95; // [rsp+2F7h] [rbp-29h]

  v94 = a3; /*0x100afe514*/
  __dst = a1; /*0x100afe51b*/
  codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119(v80); /*0x100afe526*/
  v4 = v80[0]; /*0x100afe535*/
  v5 = v80[1]; /*0x100afe53c*/
  v6 = v80[2]; /*0x100afe543*/
  if ( v80[0] == 11 ) /*0x100afe54f*/
  {
    v95 = v80[2]; /*0x100afe551*/
    v88 = v80[1]; /*0x100afe555*/
    codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v80, a2); /*0x100afe566*/
    qmemcpy(v84, &v80[1], 0x60u); /*0x100afe585*/
    v8 = 0x8000000000000000LL; /*0x100afe588*/
    if ( v80[0] == 0x8000000000000000LL ) /*0x100afe595*/
    {
      v9 = __dst; /*0x100afe597*/
      v10 = (char *)__dst + 8; /*0x100afe59b*/
      qmemcpy((char *)__dst + 8, v84, 0x60u); /*0x100afe5ab*/
      v12 = (__int64)&v84[12]; /*0x100afe5ab*/
      v11 = (__int64 *)(v10 + 96); /*0x100afe5ab*/
      *v9 = 0x8000000000000000LL; /*0x100afe5ae*/
LABEL_30:
      if ( (v95 & 1) != 0 /*0x100afea15*/
        || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
      {
LABEL_32:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v88); /*0x100afea1b*/
        goto LABEL_33; /*0x100afea22*/
      }
LABEL_90:
      if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x100aff0d2*/
                               v11,
                               v12,
                               v8,
                               0x7FFFFFFFFFFFFFFFLL) )
        *(_BYTE *)(v88 + 8) = 1; /*0x100aff0e3*/
      goto LABEL_32; /*0x100aff0e7*/
    }
    v79 = v80[17]; /*0x100afe5ea*/
    v78 = v80[16]; /*0x100afe5f8*/
    v77[2] = v80[15]; /*0x100afe606*/
    v77[1] = v80[14]; /*0x100afe61b*/
    v77[0] = v80[13]; /*0x100afe622*/
    qmemcpy(v76, v84, sizeof(v76)); /*0x100afe63c*/
    v75 = v80[0]; /*0x100afe63f*/
    v84[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v77, &v84[12]); /*0x100afe64b*/
    LODWORD(v84[1]) = v14; /*0x100afe652*/
    std::time::SystemTime::duration_since::had059553cab94f96(v80, v84, 0, 0); /*0x100afe66d*/
    if ( LOBYTE(v80[0]) ) /*0x100afe679*/
      v87 = 0; /*0x100afe688*/
    else
      v87 = v80[1]; /*0x100afe682*/
    v89 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x100afe6a1*/
                    *(_QWORD *)(v94 + 8),
                    *(_QWORD *)(v94 + 16));
    v16 = v15; /*0x100afe6a5*/
    v85 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x100afe6b9*/
                    *(_QWORD *)(v94 + 32),
                    *(_QWORD *)(v94 + 40));
    __n = v17; /*0x100afe6bd*/
    v18 = *(_QWORD *)(v94 + 56); /*0x100afe6c5*/
    v19 = *(_QWORD *)(v94 + 64); /*0x100afe6c9*/
    v20 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v18, v19); /*0x100afe6cd*/
    if ( !v16 ) /*0x100afe6d5*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v19); /*0x100afe82a*/
      v30 = 30; /*0x100afe82f*/
      v31 = 1; /*0x100afe835*/
      v12 = 1; /*0x100afe840*/
      v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100afe845*/
      if ( v34 ) /*0x100afe84d*/
      {
        qmemcpy(v34, "Template title cannot be empty", 30); /*0x100afe887*/
        v33 = __dst; /*0x100afe88a*/
        *((_QWORD *)__dst + 1) = 9; /*0x100afe88e*/
        v33[2] = 30; /*0x100afe896*/
        v33[3] = v34; /*0x100afe89e*/
        v33[4] = 30; /*0x100afe8a2*/
        goto LABEL_28; /*0x100afe8aa*/
      }
LABEL_95:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v30); /*0x100aff128*/
    }
    v22 = v21; /*0x100afe6db*/
    if ( !v21 ) /*0x100afe6e1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v19); /*0x100afe95c*/
      v30 = 32; /*0x100afe961*/
      v31 = 1; /*0x100afe967*/
      v12 = 1; /*0x100afe972*/
      v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x100afe977*/
      if ( v37 ) /*0x100afe97f*/
      {
        qmemcpy(v37, "Template content cannot be empty", 32); /*0x100afe9b9*/
        v33 = __dst; /*0x100afe9bc*/
        *((_QWORD *)__dst + 1) = 9; /*0x100afe9c0*/
        v33[2] = 32; /*0x100afe9c8*/
        v33[3] = v37; /*0x100afe9d0*/
        v33[4] = 32; /*0x100afe9d4*/
        goto LABEL_28; /*0x100afe9d4*/
      }
      goto LABEL_95; /*0x100afe97f*/
    }
    v23 = *(_QWORD *)(v94 + 72) == 0x8000000000000000LL; /*0x100afe6f8*/
    v86 = v20; /*0x100afe6fc*/
    if ( !v23 ) /*0x100afe700*/
    {
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(v94 + 80), *(_QWORD *)(v94 + 88)); /*0x100afe712*/
      if ( v24 ) /*0x100afe71a*/
      {
        v90 = v22; /*0x100afe720*/
        v82 = v94 + 72; /*0x100afe72c*/
        if ( !v76[1] ) /*0x100afe73d*/
        {
LABEL_53:
          v84[0] = &v82; /*0x100afebbd*/
          v84[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x100afebd2*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v80[1], &unk_1017CBF28, v84); /*0x100afebee*/
          v80[0] = 8; /*0x100afebf3*/
          v51 = v80[1]; /*0x100afebfe*/
          v52 = __dst; /*0x100afec0c*/
          qmemcpy((char *)__dst + 24, &v80[2], 0x50u); /*0x100afec19*/
          v12 = (__int64)&v80[12]; /*0x100afec19*/
          v52[1] = 8; /*0x100afec1c*/
          v52[2] = v51; /*0x100afec24*/
          *v52 = 0x8000000000000000LL; /*0x100afec32*/
          goto LABEL_29; /*0x100afec35*/
        }
        v25 = v76[0]; /*0x100afe743*/
        v26 = 112LL * v76[1]; /*0x100afe74a*/
        __s2 = *(void **)(v94 + 80); /*0x100afe756*/
        v27 = *(_QWORD *)(v94 + 88); /*0x100afe75a*/
        while ( 1 ) /*0x100afe76e*/
        {
          if ( *(_QWORD *)(v25 + 16) == v27 ) /*0x100afe772*/
          {
            v28 = *(const void **)(v25 + 8); /*0x100afe774*/
            v29 = __s2; /*0x100afe778*/
            if ( !memcmp(v28, __s2, v27) ) /*0x100afe77f*/
              break; /*0x100afe77f*/
          }
          v25 += 112; /*0x100afe760*/
          v26 -= 112; /*0x100afe764*/
          if ( !v26 ) /*0x100afe768*/
            goto LABEL_53; /*0x100afe768*/
        }
        if ( *(_BYTE *)(v25 + 104) ) /*0x100afe788*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v29); /*0x100afe793*/
          v30 = 41; /*0x100afe798*/
          v31 = 1; /*0x100afe79e*/
          v12 = 1; /*0x100afe7a9*/
          v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(41, 1); /*0x100afe7ae*/
          if ( v32 ) /*0x100afe7b6*/
          {
            qmemcpy(v32, "Built-in voice templates cannot be edited", 41); /*0x100afe7fe*/
            v33 = __dst; /*0x100afe805*/
            *((_QWORD *)__dst + 1) = 9; /*0x100afe809*/
            v33[2] = 41; /*0x100afe811*/
            v33[3] = v32; /*0x100afe819*/
            v33[4] = 41; /*0x100afe81d*/
LABEL_28:
            *v33 = 0x8000000000000000LL; /*0x100afe9dc*/
LABEL_29:
            v11 = &v75; /*0x100afe9e9*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v75); /*0x100afe9f0*/
            goto LABEL_30; /*0x100afe9f0*/
          }
          goto LABEL_95; /*0x100afe7b6*/
        }
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v80, v16, 0, 1, 1); /*0x100afedbc*/
        __s2 = (void *)v80[1]; /*0x100afedc8*/
        if ( LOBYTE(v80[0]) ) /*0x100afedd3*/
          goto LABEL_93; /*0x100afedd3*/
        v62 = v80[2]; /*0x100afedd9*/
        memcpy((void *)v80[2], v89, v16); /*0x100afedea*/
        v63 = *(_QWORD *)(v25 + 24); /*0x100afedef*/
        if ( v63 ) /*0x100afedf6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v25 + 32), v63, 1); /*0x100afee01*/
        *(_QWORD *)(v25 + 24) = __s2; /*0x100afee0a*/
        *(_QWORD *)(v25 + 32) = v62; /*0x100afee0e*/
        *(_QWORD *)(v25 + 40) = v16; /*0x100afee12*/
        v64 = __n; /*0x100afee28*/
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v80, __n, 0, 1, 1); /*0x100afee31*/
        __s2 = (void *)v80[1]; /*0x100afee3d*/
        if ( LODWORD(v80[0]) == 1 ) /*0x100afee48*/
        {
LABEL_93:
          v30 = v80[2]; /*0x100aff114*/
          v31 = (__int64)__s2; /*0x100aff11b*/
          goto LABEL_95; /*0x100aff11f*/
        }
        v65 = v80[2]; /*0x100afee4e*/
        memcpy((void *)v80[2], v85, v64); /*0x100afee5f*/
        v66 = *(_QWORD *)(v25 + 48); /*0x100afee64*/
        if ( v66 ) /*0x100afee6b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v25 + 56), v66, 1); /*0x100afee76*/
        *(_QWORD *)(v25 + 48) = __s2; /*0x100afee7f*/
        *(_QWORD *)(v25 + 56) = v65; /*0x100afee83*/
        *(_QWORD *)(v25 + 64) = v64; /*0x100afee87*/
        v67 = v90; /*0x100afee9d*/
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v80, v90, 0, 1, 1); /*0x100afeea6*/
        v31 = v80[1]; /*0x100afeeab*/
        if ( LODWORD(v80[0]) == 1 ) /*0x100afeeb9*/
        {
          v30 = v80[2]; /*0x100aff121*/
          goto LABEL_95; /*0x100aff121*/
        }
        v68 = v80[2]; /*0x100afeebf*/
        memcpy((void *)v80[2], v86, v67); /*0x100afeed0*/
        v69 = *(_QWORD *)(v25 + 72); /*0x100afeed5*/
        if ( v69 ) /*0x100afeedc*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v25 + 80), v69, 1); /*0x100afeee7*/
        *(_QWORD *)(v25 + 72) = v31; /*0x100afeeec*/
        *(_QWORD *)(v25 + 80) = v68; /*0x100afeef0*/
        *(_QWORD *)(v25 + 88) = v90; /*0x100afeef8*/
        *(_QWORD *)(v25 + 96) = v87; /*0x100afef00*/
        v60 = v73; /*0x100afef04*/
        v61 = (_QWORD *)v25; /*0x100afef0b*/
        _$LT$codexmate_lib..core..models..VoicePromptTemplate$u20$as$u20$core..clone..Clone$GT$::clone::hd33e9bd87df1e3d3( /*0x100afef0e*/
          v73,
          v25);
LABEL_75:
        LODWORD(v79) = 1; /*0x100afef13*/
        v84[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v60, v61); /*0x100afef22*/
        LODWORD(v84[1]) = v70; /*0x100afef29*/
        std::time::SystemTime::duration_since::had059553cab94f96(v80, v84, 0, 0); /*0x100afef41*/
        if ( LOBYTE(v80[0]) ) /*0x100afef4d*/
          v71 = 0; /*0x100afef58*/
        else
          v71 = v80[1]; /*0x100afef4f*/
        v78 = v71; /*0x100afef5a*/
        codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(&v75); /*0x100afef68*/
        codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v80, a2, &v75); /*0x100afef7e*/
        if ( LODWORD(v80[0]) == 11 ) /*0x100afef8a*/
        {
          codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47( /*0x100afefac*/
            v84,
            *(_QWORD *)(a2 + 536),
            *(_QWORD *)(a2 + 544),
            (__int64)&v75);
          qmemcpy(&v80[16], v73, 0x70u); /*0x100afefc4*/
          qmemcpy(v80, v84, 0x80u); /*0x100afefdd*/
          v12 = (__int64)v80; /*0x100afefe9*/
          memcpy(__dst, v80, 0xF0u); /*0x100afefec*/
          v11 = &v75; /*0x100afeff1*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v75); /*0x100afeff8*/
          if ( (v95 & 1) != 0 /*0x100aff021*/
            || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
          {
            goto LABEL_32; /*0x100aff021*/
          }
          goto LABEL_90; /*0x100aff021*/
        }
        v72 = __dst; /*0x100aff031*/
        qmemcpy((char *)__dst + 8, v80, 0x60u); /*0x100aff045*/
        *v72 = 0x8000000000000000LL; /*0x100aff052*/
        if ( v73[0] ) /*0x100aff05f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[1], v73[0], 1); /*0x100aff06d*/
        if ( v73[3] ) /*0x100aff07c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[4], v73[3], 1); /*0x100aff08a*/
        if ( v73[6] ) /*0x100aff099*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[7], v73[6], 1); /*0x100aff0a7*/
        v12 = v73[9]; /*0x100aff0ac*/
        if ( v73[9] ) /*0x100aff0b6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[10], v73[9], 1); /*0x100aff0c8*/
        goto LABEL_29; /*0x100aff0cd*/
      }
    }
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v74); /*0x100afe8b6*/
    v84[0] = 0; /*0x100afe8bb*/
    v84[1] = 1; /*0x100afe8c6*/
    v84[2] = 0; /*0x100afe8d1*/
    v80[2] = 1610612768; /*0x100afe8dc*/
    v80[0] = v84; /*0x100afe8e7*/
    v80[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100afe8f5*/
    if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x100afe90a*/
                            v74,
                            v80) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100aff10d*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v81,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v35 = (void *)v84[0]; /*0x100afe917*/
    v36 = (_QWORD *)v84[1]; /*0x100afe91e*/
    if ( v84[2] <= 8u ) /*0x100afe930*/
    {
      if ( v84[2] != 8 ) /*0x100afeac7*/
LABEL_25:
        core::str::slice_error_fail::h480e51fbd8b15eba(v84[1], v84[2], 0, 8, &off_101974A08); /*0x100afe941*/
    }
    else if ( *(char *)(v84[1] + 8LL) < -64 ) /*0x100afe93b*/
    {
      goto LABEL_25; /*0x100afe93b*/
    }
    v81[0] = v84[1]; /*0x100afeacd*/
    v81[1] = 8; /*0x100afead4*/
    v84[0] = v81; /*0x100afeae6*/
    v84[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100afeaf4*/
    v42 = &unk_1017CBF45; /*0x100afeafb*/
    v43 = v80; /*0x100afeb02*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v80, &unk_1017CBF45, v84); /*0x100afeb10*/
    if ( v35 ) /*0x100afeb18*/
    {
      v43 = v36; /*0x100afeb1f*/
      v42 = v35; /*0x100afeb22*/
      a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x100afeb25*/
    }
    __s2 = (void *)v80[0]; /*0x100afeb31*/
    v90 = v80[1]; /*0x100afeb3c*/
    if ( v16 < 0 ) /*0x100afeb46*/
    {
      v44 = 0; /*0x100afeb48*/
      v45 = v16; /*0x100afeb4b*/
      goto LABEL_48; /*0x100afeb4b*/
    }
    v46 = v22; /*0x100afeb5e*/
    v83 = v80[2]; /*0x100afeb68*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v42); /*0x100afeb6f*/
    v44 = 1; /*0x100afeb74*/
    v47 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x100afeb82*/
    v45 = v16; /*0x100afeb87*/
    if ( !v47 ) /*0x100afeb8d*/
LABEL_48:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v44, v45); /*0x100afeb4e*/
    v48 = v47; /*0x100afeb8f*/
    v49 = v47; /*0x100afeb92*/
    v50 = v89; /*0x100afeb95*/
    memcpy(v47, v89, v16); /*0x100afeb99*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100afeba3*/
    {
      v44 = 0; /*0x100afeba9*/
      goto LABEL_52; /*0x100afeba9*/
    }
    if ( __n ) /*0x100afec3a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v50); /*0x100afec3c*/
      v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100afec4a*/
      if ( !v53 ) /*0x100afec52*/
LABEL_52:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v44, __n); /*0x100afebac*/
      v54 = v53; /*0x100afec58*/
    }
    else
    {
      v54 = 1; /*0x100afec5d*/
    }
    v89 = (void *)v54; /*0x100afec62*/
    v55 = v85; /*0x100afec66*/
    memcpy((void *)v54, v85, __n); /*0x100afec6e*/
    if ( v46 >= 0 ) /*0x100afec76*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v55); /*0x100afec87*/
      v57 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v46, 1); /*0x100afec94*/
      v56 = 1; /*0x100afec99*/
      if ( v57 ) /*0x100afeca1*/
      {
        v58 = v57; /*0x100afeca3*/
        memcpy(v57, v86, v46); /*0x100afecb0*/
        v84[0] = __s2; /*0x100afecb9*/
        v84[1] = v90; /*0x100afecc4*/
        v84[2] = v83; /*0x100afecd2*/
        v84[3] = v16; /*0x100afecd9*/
        v84[4] = v48; /*0x100afece0*/
        v84[5] = v16; /*0x100afece7*/
        v84[6] = __n; /*0x100afecf2*/
        v84[7] = v89; /*0x100afecfd*/
        v84[8] = __n; /*0x100afed04*/
        v84[9] = v46; /*0x100afed0b*/
        v84[10] = v58; /*0x100afed12*/
        v84[11] = v46; /*0x100afed19*/
        LOWORD(v84[13]) = 1280; /*0x100afed20*/
        v84[12] = v87; /*0x100afed2d*/
        _$LT$codexmate_lib..core..models..VoicePromptTemplate$u20$as$u20$core..clone..Clone$GT$::clone::hd33e9bd87df1e3d3( /*0x100afed42*/
          v80,
          v84);
        v59 = v76[1]; /*0x100afed47*/
        if ( v76[1] == v75 ) /*0x100afed55*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::ha12118a19a989fe2(&v75, a4); /*0x100afed5e*/
        qmemcpy((void *)(v76[0] + 112 * v59), v80, 0x70u); /*0x100afed7a*/
        v76[1] = v59 + 1; /*0x100afed80*/
        qmemcpy(v73, v84, sizeof(v73)); /*0x100afed9a*/
        v61 = &v84[14]; /*0x100afed9a*/
        v60 = v74; /*0x100afed9a*/
        goto LABEL_75; /*0x100afed9a*/
      }
    }
    else
    {
      v56 = 0; /*0x100afec78*/
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v56, v46); /*0x100afec7d*/
  }
  v13 = __dst; /*0x100afe5bd*/
  memcpy((char *)__dst + 25, (char *)&v80[2] + 1, 0x4Fu); /*0x100afe5ca*/
  v13[1] = v4; /*0x100afe5cf*/
  v13[2] = v5; /*0x100afe5d3*/
  *((_BYTE *)v13 + 24) = v6; /*0x100afe5d7*/
  *v13 = 0x8000000000000000LL; /*0x100afe5db*/
LABEL_33:
  v38 = *(_QWORD *)(v94 + 72); /*0x100afea31*/
  if ( v38 != 0x8000000000000000LL && v38 ) /*0x100afea41*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v94 + 80), v38, 1); /*0x100afea50*/
  if ( *(_QWORD *)v94 ) /*0x100afea59*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v94 + 8), *(_QWORD *)v94, 1); /*0x100afea6e*/
  v39 = *(_QWORD *)(v94 + 24); /*0x100afea77*/
  if ( v39 ) /*0x100afea7e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v94 + 32), v39, 1); /*0x100afea8d*/
  v40 = *(_QWORD *)(v94 + 48); /*0x100afea96*/
  if ( v40 ) /*0x100afea9d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v94 + 56), v40, 1); /*0x100afeaac*/
  return __dst; /*0x100afeab5*/
}