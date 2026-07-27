// __ZN13codexmate_lib4core6skills22backup_skill_directory @ 0x100350d20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::skills::backup_skill_directory::hadcafe7a62e8ba58(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        signed __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rbx
  __int64 v14; // rsi
  void *v15; // rax
  __int64 result; // rax
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 *v19; // rsi
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  size_t v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r14
  const void *v31; // r12
  void *v32; // rax
  __int64 *v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rbx
  size_t v36; // rbx
  void *v37; // r12
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // r14
  __int64 v41; // rsi
  _BYTE *v42; // rax
  __int64 v43; // r13
  __int64 v44; // r14
  unsigned __int64 v45; // r14
  size_t v46; // rsi
  size_t v47; // rbx
  unsigned __int64 v48; // r14
  __int64 v49; // r12
  __int64 v50; // r13
  __int128 v51; // [rsp+0h] [rbp-340h]
  _QWORD v52[2]; // [rsp+10h] [rbp-330h] BYREF
  __int64 v53; // [rsp+20h] [rbp-320h] BYREF
  __int64 v54; // [rsp+28h] [rbp-318h]
  __int64 v55; // [rsp+30h] [rbp-310h]
  _QWORD v56[3]; // [rsp+38h] [rbp-308h] BYREF
  __int64 v57; // [rsp+50h] [rbp-2F0h] BYREF
  __int128 v58; // [rsp+58h] [rbp-2E8h] BYREF
  __int64 v59; // [rsp+68h] [rbp-2D8h]
  __int64 v60; // [rsp+70h] [rbp-2D0h]
  __int64 v61; // [rsp+78h] [rbp-2C8h] BYREF
  __int64 v62; // [rsp+80h] [rbp-2C0h]
  __int128 v63; // [rsp+88h] [rbp-2B8h] BYREF
  __int64 v64; // [rsp+98h] [rbp-2A8h]
  __int64 v65; // [rsp+A0h] [rbp-2A0h]
  __int64 v66; // [rsp+A8h] [rbp-298h]
  unsigned __int64 v67; // [rsp+B0h] [rbp-290h]
  _QWORD v68[10]; // [rsp+B8h] [rbp-288h] BYREF
  __int64 v69; // [rsp+108h] [rbp-238h] BYREF
  unsigned __int64 v70; // [rsp+110h] [rbp-230h]
  __int64 v71; // [rsp+118h] [rbp-228h]
  __int64 v72; // [rsp+120h] [rbp-220h] BYREF
  unsigned __int64 v73; // [rsp+128h] [rbp-218h]
  __int64 v74; // [rsp+130h] [rbp-210h]
  __int64 v75; // [rsp+138h] [rbp-208h] BYREF
  void *v76; // [rsp+140h] [rbp-200h]
  size_t v77; // [rsp+148h] [rbp-1F8h]
  __int64 v78; // [rsp+150h] [rbp-1F0h]
  _QWORD v79[3]; // [rsp+158h] [rbp-1E8h] BYREF
  char v80; // [rsp+170h] [rbp-1D0h]
  _QWORD v81[12]; // [rsp+178h] [rbp-1C8h] BYREF
  unsigned __int64 v82; // [rsp+1D8h] [rbp-168h] BYREF
  _QWORD v83[10]; // [rsp+1E0h] [rbp-160h] BYREF
  __int64 v84; // [rsp+230h] [rbp-110h] BYREF
  __int64 v85; // [rsp+238h] [rbp-108h]
  unsigned __int64 v86; // [rsp+240h] [rbp-100h]
  size_t v87; // [rsp+248h] [rbp-F8h] BYREF
  __int64 v88; // [rsp+250h] [rbp-F0h]
  size_t v89; // [rsp+258h] [rbp-E8h]
  __int64 v90; // [rsp+260h] [rbp-E0h] BYREF
  __int64 v91; // [rsp+268h] [rbp-D8h]
  __int64 v92; // [rsp+270h] [rbp-D0h]
  __int64 v93; // [rsp+278h] [rbp-C8h]
  __int64 v94; // [rsp+280h] [rbp-C0h]
  __int64 v95; // [rsp+288h] [rbp-B8h]
  unsigned __int64 v96; // [rsp+290h] [rbp-B0h]
  __int64 v97; // [rsp+298h] [rbp-A8h]
  __int16 v98; // [rsp+2A0h] [rbp-A0h] BYREF
  __int64 **v99; // [rsp+2A8h] [rbp-98h]
  __int64 v100; // [rsp+2B0h] [rbp-90h]
  __int64 v101; // [rsp+2B8h] [rbp-88h]
  __int64 v102; // [rsp+2C0h] [rbp-80h]
  __int64 v103; // [rsp+2C8h] [rbp-78h] BYREF
  __int128 v104; // [rsp+2D0h] [rbp-70h]
  __int64 *v105; // [rsp+2E0h] [rbp-60h] BYREF
  __int64 v106; // [rsp+2E8h] [rbp-58h]
  unsigned __int64 v107; // [rsp+2F0h] [rbp-50h]
  __int64 v108; // [rsp+2F8h] [rbp-48h]
  char v109; // [rsp+300h] [rbp-40h]
  __int64 v110; // [rsp+308h] [rbp-38h]
  __int64 *v111; // [rsp+310h] [rbp-30h]

  v111 = a6; /*0x100350d34*/
  v52[0] = a8; /*0x100350d4c*/
  v52[1] = a9; /*0x100350d53*/
  v101 = a2; /*0x100350d6b*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v105, a2, a3, &unk_1015E3AD8, 8); /*0x100350d72*/
  v13 = v106; /*0x100350d77*/
  v14 = v106; /*0x100350d86*/
  codexmate_lib::core::skills::load_skill_summary::h78677cb906cb96ee(v81, v106, v107, a4, a5); /*0x100350d8f*/
  if ( v81[0] != 2 ) /*0x100350d9f*/
  {
    v102 = a3; /*0x100350e2c*/
    v17 = v81[3]; /*0x100350e30*/
    v18 = v81[4]; /*0x100350e37*/
    v61 = v81[5]; /*0x100350e45*/
    v62 = v81[6]; /*0x100350e53*/
    v63 = *(_OWORD *)&v81[7]; /*0x100350e61*/
    v64 = v81[9]; /*0x100350e7d*/
    v65 = v81[10]; /*0x100350e8b*/
    v66 = v81[11]; /*0x100350e99*/
    v67 = v82; /*0x100350ea7*/
    qmemcpy(v68, v83, sizeof(v68)); /*0x100350ec1*/
    v110 = v81[2]; /*0x100350ecb*/
    v57 = v81[0]; /*0x100350ed6*/
    v58 = *(_OWORD *)&v81[1]; /*0x100350edd*/
    v59 = v81[3]; /*0x100350ee4*/
    v60 = v81[4]; /*0x100350eeb*/
    if ( v105 ) /*0x100350ef9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v105, 1); /*0x100350f03*/
    LOWORD(v81[0]) = 511; /*0x100350f12*/
    BYTE2(v81[0]) = 1; /*0x100350f1b*/
    v19 = v111; /*0x100350f29*/
    v20 = std::fs::DirBuilder::_create::h099c6e2853c95452(v81, v111, a7); /*0x100350f31*/
    if ( v20 ) /*0x100350f39*/
    {
      *(_QWORD *)(a1 + 8) = 2; /*0x100350f3b*/
      *(_QWORD *)(a1 + 16) = v20; /*0x100350f43*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100350f47*/
      return core::ptr::drop_in_place$LT$codexmate_lib..core..models..InstalledSkillSummary$GT$::h0804303e95cd6d63(&v57); /*0x100351465*/
    }
    v105 = (__int64 *)std::time::SystemTime::now::h1fe79e41f9d5677f(v81, v19); /*0x100350f54*/
    LODWORD(v106) = v21; /*0x100350f58*/
    std::time::SystemTime::duration_since::had059553cab94f96(v81, &v105, 0, 0); /*0x100350f6a*/
    if ( LOBYTE(v81[0]) ) /*0x100350f76*/
      v22 = 0; /*0x100350f81*/
    else
      v22 = v81[1]; /*0x100350f78*/
    v90 = v22; /*0x100350f83*/
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h45c21d4596478245( /*0x100350fa2*/
      v81,
      v64,
      v64 + v65);
    v100 = v17; /*0x100350fa7*/
    v23 = v81[1]; /*0x100350fae*/
    v24 = v81[2]; /*0x100350fb5*/
    v96 = v81[1]; /*0x100350fbc*/
    v25 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h7b3d4ff2d798cf27(v81[1], v81[2]); /*0x100350fc3*/
    v27 = v26; /*0x100350fc8*/
    if ( v26 ) /*0x100350fce*/
    {
      if ( v26 < 0 ) /*0x100350fd3*/
      {
        v28 = 0; /*0x100350fd5*/
        goto LABEL_16; /*0x100350fd5*/
      }
      v31 = (const void *)v25; /*0x100351022*/
      v78 = v18; /*0x100351025*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v24); /*0x10035102c*/
      v28 = 1; /*0x100351031*/
      v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1); /*0x10035103f*/
      if ( v32 ) /*0x100351047*/
      {
        v30 = (__int64)v32; /*0x100351049*/
        memcpy(v32, v31, v27); /*0x100351055*/
        goto LABEL_21; /*0x100351055*/
      }
    }
    else
    {
      v78 = v18; /*0x100350fe8*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v24); /*0x100350fef*/
      v27 = 5; /*0x100350ff4*/
      v28 = 1; /*0x100350ff9*/
      v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100351009*/
      if ( v29 ) /*0x100351011*/
      {
        v30 = v29; /*0x100351013*/
        *(_BYTE *)(v29 + 4) = 108; /*0x100351016*/
        *(_DWORD *)v29 = 1818848115; /*0x10035101a*/
LABEL_21:
        v87 = v27; /*0x10035105a*/
        v88 = v30; /*0x100351061*/
        v89 = v27; /*0x100351068*/
        if ( v81[0] ) /*0x100351079*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v81[0], 1); /*0x100351087*/
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v79); /*0x100351093*/
        v105 = nullptr; /*0x10035109c*/
        v106 = 1; /*0x1003510a4*/
        v107 = 0; /*0x1003510ac*/
        v81[2] = 1610612768; /*0x1003510b4*/
        v81[0] = &v105; /*0x1003510bf*/
        v81[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003510cd*/
        if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x1003510e2*/
                                v79,
                                v81) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100351a88*/
            &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
            55,
            &v103,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
        v33 = v105; /*0x1003510ef*/
        v34 = v106; /*0x1003510f3*/
        if ( v107 <= 8 ) /*0x1003510ff*/
        {
          if ( v107 != 8 ) /*0x100351122*/
LABEL_26:
            core::str::slice_error_fail::h480e51fbd8b15eba(v106, v107, 0, 8, &off_101961750); /*0x100351107*/
        }
        else if ( *(char *)(v106 + 8) <= -65 ) /*0x100351105*/
        {
          goto LABEL_26; /*0x100351105*/
        }
        v103 = v106; /*0x100351124*/
        *(_QWORD *)&v104 = 8; /*0x100351128*/
        v81[0] = &v90; /*0x100351137*/
        v81[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x100351145*/
        v81[2] = &v87; /*0x100351153*/
        v81[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100351161*/
        v81[4] = v52; /*0x10035116f*/
        v81[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10035117d*/
        v81[6] = &v103; /*0x100351188*/
        v81[7] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10035118f*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v105, &unk_1017BC92D, v81); /*0x1003511ab*/
        if ( v33 ) /*0x1003511b3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x1003511c0*/
        v84 = (__int64)v105; /*0x1003511cd*/
        v85 = v106; /*0x1003511d4*/
        v86 = v107; /*0x1003511df*/
        std::path::Path::_join::hb1a495d4f06b13b8(&v75, v111, a7, v106, v107); /*0x1003511f5*/
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v81); /*0x100351201*/
        v106 = v81[1]; /*0x100351214*/
        v105 = (__int64 *)v81[0]; /*0x100351218*/
        v81[0] = &v105; /*0x10035121c*/
        v81[1] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x10035122a*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v53, &unk_1017BC938, v81); /*0x100351246*/
        v35 = v54; /*0x10035124b*/
        std::path::Path::_join::hb1a495d4f06b13b8(v81, v111, a7, v54, v55); /*0x10035126b*/
        if ( v53 ) /*0x10035127a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v53, 1); /*0x100351284*/
        v36 = v81[2]; /*0x100351289*/
        v79[2] = v81[2]; /*0x100351290*/
        v37 = (void *)v81[1]; /*0x10035129e*/
        v79[1] = v81[1]; /*0x1003512a5*/
        v79[0] = v81[0]; /*0x1003512ac*/
        v80 = 0; /*0x1003512b3*/
        std::path::Path::_join::hb1a495d4f06b13b8(&v72, v81[1], v81[2], &anon_b0ee9adff4519c22b647af231a5a39fa_736, 5); /*0x1003512d4*/
        LOWORD(v81[0]) = 511; /*0x1003512d9*/
        BYTE2(v81[0]) = 1; /*0x1003512e2*/
        v38 = std::fs::DirBuilder::_create::h099c6e2853c95452(v81, v37, v36); /*0x1003512f6*/
        if ( v38 ) /*0x1003512fe*/
        {
          *(_QWORD *)(a1 + 8) = 2; /*0x100351300*/
          *(_QWORD *)(a1 + 16) = v38; /*0x100351308*/
          goto LABEL_38; /*0x10035130c*/
        }
        v39 = v73; /*0x100351311*/
        codexmate_lib::core::skills::copy_dir_all::h12d01093dac5602f(v81, v101, v102, v73, v74); /*0x100351334*/
        if ( LODWORD(v81[0]) != 11 ) /*0x100351340*/
        {
          qmemcpy((void *)(a1 + 8), v81, 0x60u); /*0x1003513b5*/
LABEL_38:
          *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1003513b8*/
          v41 = v72; /*0x1003513c5*/
          if ( !v72 ) /*0x1003513cf*/
          {
LABEL_40:
            _$LT$codexmate_lib..core..skills..StagedDirectory$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2f1fafacce2d5901(v79); /*0x1003513e2*/
            if ( v79[0] ) /*0x1003513f8*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v79[0], 1); /*0x100351402*/
            if ( v75 ) /*0x100351411*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v75, 1); /*0x10035141f*/
            if ( v84 ) /*0x10035142e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v84, 1); /*0x10035143c*/
            if ( v87 ) /*0x10035144b*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x100351459*/
            return core::ptr::drop_in_place$LT$codexmate_lib..core..models..InstalledSkillSummary$GT$::h0804303e95cd6d63(&v57); /*0x100351459*/
          }
LABEL_39:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v41, 1); /*0x1003513d1*/
          goto LABEL_40; /*0x1003513dd*/
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v56, &v84); /*0x100351350*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v69, (char *)&v58 + 8); /*0x100351363*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v103, &v61); /*0x100351373*/
        v40 = 0x8000000000000000LL; /*0x10035137f*/
        v101 = v68[4]; /*0x100351389*/
        v96 = v39; /*0x100351393*/
        if ( v68[4] != 0x8000000000000000LL ) /*0x10035139a*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v105, &v68[4]); /*0x100351487*/
          v40 = (unsigned __int64)v105; /*0x10035148c*/
          v111 = (__int64 *)v106; /*0x100351494*/
          v39 = v107; /*0x100351498*/
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v105, (char *)&v63 + 8); /*0x1003514a7*/
        v81[2] = v56[2]; /*0x1003514b3*/
        v81[1] = v56[1]; /*0x1003514c8*/
        v81[0] = v56[0]; /*0x1003514cf*/
        v81[3] = v69; /*0x1003514e4*/
        v81[4] = v70; /*0x1003514eb*/
        v81[5] = v71; /*0x1003514f9*/
        v81[6] = v103; /*0x100351508*/
        *(_OWORD *)&v81[7] = v104; /*0x10035150f*/
        v82 = v40; /*0x100351521*/
        v83[0] = v111; /*0x10035152c*/
        v83[1] = v39; /*0x100351533*/
        v81[9] = v105; /*0x100351542*/
        v81[10] = v106; /*0x100351549*/
        v81[11] = v107; /*0x100351554*/
        v83[2] = v90; /*0x100351562*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v105, (char *)&v63 + 8); /*0x100351569*/
        v42 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100351578*/
        if ( !v42 ) /*0x100351580*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100351aaa*/
        v103 = 128; /*0x100351586*/
        *(_QWORD *)&v104 = v42; /*0x10035158e*/
        v105 = &v103; /*0x100351596*/
        v106 = (__int64)&unk_1015E3B85; /*0x1003515a1*/
        v107 = 2; /*0x1003515a5*/
        v108 = 1; /*0x1003515ad*/
        v109 = 0; /*0x1003515b5*/
        *v42 = 123; /*0x1003515b9*/
        *((_QWORD *)&v104 + 1) = 1; /*0x1003515bc*/
        v98 = 256; /*0x1003515c4*/
        v99 = &v105; /*0x1003515d1*/
        v43 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(&v98, "backupID", 8, v81); /*0x1003515f7*/
        if ( v43 ) /*0x1003515fd*/
          goto LABEL_56; /*0x1003515fd*/
        if ( (_BYTE)v98 ) /*0x100351606*/
          goto LABEL_54; /*0x100351606*/
        v43 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100351631*/
                &v98,
                &anon_b0ee9adff4519c22b647af231a5a39fa_732,
                7,
                &v81[3]);
        if ( v43 ) /*0x100351637*/
          goto LABEL_56; /*0x100351637*/
        if ( (_BYTE)v98 ) /*0x100351693*/
          goto LABEL_54; /*0x100351693*/
        v43 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x1003516b8*/
                &v98,
                &anon_b0ee9adff4519c22b647af231a5a39fa_55,
                4,
                &v81[6]);
        if ( v43 ) /*0x1003516be*/
          goto LABEL_56; /*0x1003516be*/
        if ( (_BYTE)v98 ) /*0x1003516cb*/
          goto LABEL_54; /*0x1003516cb*/
        v43 = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x1003516f0*/
                &v98,
                &anon_b0ee9adff4519c22b647af231a5a39fa_733,
                5,
                &v82);
        if ( v43 ) /*0x1003516f6*/
          goto LABEL_56; /*0x1003516f6*/
        if ( (_BYTE)v98 ) /*0x100351703*/
          goto LABEL_54; /*0x100351703*/
        v43 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100351728*/
                &v98,
                &anon_b0ee9adff4519c22b647af231a5a39fa_734,
                12,
                &v81[9]);
        if ( v43 ) /*0x10035172e*/
          goto LABEL_56; /*0x10035172e*/
        if ( (_BYTE)v98 ) /*0x10035173b*/
        {
LABEL_54:
          v43 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10035160d*/
        }
        else
        {
          v43 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100351760*/
                  &v98,
                  &anon_b0ee9adff4519c22b647af231a5a39fa_422,
                  9,
                  &v83[2]);
          if ( !v43 ) /*0x100351766*/
          {
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v98); /*0x100351773*/
            v43 = v104; /*0x10035177c*/
            v44 = 3; /*0x100351780*/
            v111 = (__int64 *)v103; /*0x100351790*/
            if ( v103 != 0x8000000000000000LL ) /*0x100351797*/
            {
              v45 = *((_QWORD *)&v104 + 1); /*0x10035179d*/
              std::path::Path::_join::hb1a495d4f06b13b8(&v103, v37, v36, "metadata.json", 13); /*0x1003517b8*/
              v105 = v111; /*0x1003517c1*/
              v106 = v43; /*0x1003517c5*/
              v107 = v45; /*0x1003517c9*/
              v43 = std::fs::write::h9a280959a10bfe6a(&v103, &v105); /*0x1003517da*/
              v44 = 2; /*0x1003517dd*/
              if ( !v43 ) /*0x1003517e6*/
              {
                v46 = v36; /*0x1003517fd*/
                v111 = (__int64 *)v76; /*0x100351800*/
                v47 = v77; /*0x100351804*/
                v43 = std::sys::fs::rename::h7934e6142c921014(v37, v46, v76, v77); /*0x10035180c*/
                if ( !v43 ) /*0x100351812*/
                {
                  v80 = 1; /*0x100351818*/
                  v102 = v84; /*0x100351826*/
                  v92 = v85; /*0x100351831*/
                  v48 = v86; /*0x100351838*/
                  v97 = v61; /*0x100351846*/
                  v93 = v62; /*0x100351854*/
                  v94 = v68[5]; /*0x100351862*/
                  v49 = v68[6]; /*0x100351869*/
                  v95 = *((_QWORD *)&v63 + 1); /*0x100351877*/
                  v51 = v63; /*0x100351885*/
                  v91 = v64; /*0x100351893*/
                  v50 = v65; /*0x10035189a*/
                  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1003518b9*/
                    &v105,
                    v111,
                    v47,
                    &anon_b0ee9adff4519c22b647af231a5a39fa_736,
                    5);
                  v13 = v106; /*0x1003518be*/
                  v69 = v106; /*0x1003518c6*/
                  v70 = v107; /*0x1003518cd*/
                  _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0f1adfeb5dc2dd29(&v103, &v69); /*0x1003518df*/
                  *(_OWORD *)(a1 + 104) = v104; /*0x1003518f0*/
                  *(_QWORD *)(a1 + 96) = v103; /*0x1003518f8*/
                  *(_QWORD *)a1 = v102; /*0x100351900*/
                  *(_QWORD *)(a1 + 8) = v92; /*0x10035190a*/
                  *(_QWORD *)(a1 + 16) = v48; /*0x10035190e*/
                  *(_QWORD *)(a1 + 24) = v110; /*0x100351916*/
                  *(_QWORD *)(a1 + 32) = v100; /*0x100351921*/
                  *(_QWORD *)(a1 + 40) = v78; /*0x10035192c*/
                  *(_QWORD *)(a1 + 48) = v97; /*0x100351937*/
                  *(_QWORD *)(a1 + 56) = v93; /*0x100351942*/
                  *(_OWORD *)(a1 + 64) = v51; /*0x10035194d*/
                  *(_QWORD *)(a1 + 80) = v91; /*0x100351959*/
                  *(_QWORD *)(a1 + 88) = v50; /*0x10035195d*/
                  *(_QWORD *)(a1 + 120) = v101; /*0x100351968*/
                  *(_QWORD *)(a1 + 128) = v94; /*0x100351973*/
                  *(_QWORD *)(a1 + 136) = v49; /*0x10035197a*/
                  *(_QWORD *)(a1 + 144) = v90; /*0x100351988*/
                  core::ptr::drop_in_place$LT$codexmate_lib..core..skills..SkillBackupMetadata$GT$::h2827b73f829b851f(v81); /*0x100351996*/
                  if ( v72 ) /*0x1003519a5*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v72, 1); /*0x1003519b3*/
                  core::ptr::drop_in_place$LT$codexmate_lib..core..skills..StagedDirectory$GT$::h6511e99f7a62b940(v79); /*0x1003519bf*/
                  if ( v75 ) /*0x1003519ce*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v75, 1); /*0x1003519d9*/
                  if ( v87 ) /*0x1003519e8*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x1003519f6*/
                  result = 0x8000000000000000LL; /*0x100351a02*/
                  if ( v68[7] != 0x8000000000000000LL && v68[7] ) /*0x100351a14*/
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68[8], v68[7], 1); /*0x100351a22*/
                  if ( v66 ) /*0x100351a31*/
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x100351a3f*/
                  if ( v68[1] ) /*0x100351a4e*/
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68[2], v68[1], 1); /*0x100351a60*/
                  goto LABEL_4; /*0x100351a65*/
                }
              }
            }
LABEL_59:
            *(_QWORD *)(a1 + 8) = v44; /*0x100351656*/
            *(_QWORD *)(a1 + 16) = v43; /*0x10035165a*/
            *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100351668*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..skills..SkillBackupMetadata$GT$::h2827b73f829b851f(v81); /*0x100351672*/
            v41 = v72; /*0x100351677*/
            if ( !v72 ) /*0x100351681*/
              goto LABEL_40; /*0x100351681*/
            goto LABEL_39; /*0x100351681*/
          }
        }
LABEL_56:
        if ( v103 ) /*0x100351640*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v103, 1); /*0x10035164b*/
        v44 = 3; /*0x100351650*/
        goto LABEL_59; /*0x100351650*/
      }
    }
LABEL_16:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, v27); /*0x100350fd8*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v81, v14); /*0x100350da5*/
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x100350db4*/
  if ( !v15 ) /*0x100350dbc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x100351a99*/
  qmemcpy(v15, "Invalid skill source", 20); /*0x100350dda*/
  *(_QWORD *)(a1 + 8) = 9; /*0x100350de4*/
  *(_QWORD *)(a1 + 16) = 20; /*0x100350dec*/
  *(_QWORD *)(a1 + 24) = v15; /*0x100350df4*/
  *(_QWORD *)(a1 + 32) = 20; /*0x100350df8*/
  result = 0x8000000000000000LL; /*0x100350e00*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100350e0a*/
LABEL_4:
  if ( v105 ) /*0x100350e14*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v105, 1); /*0x100350e22*/
  return result; /*0x10035146a*/
}