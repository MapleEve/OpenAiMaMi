// __ZN13codexmate_lib8platform6update27check_update_installability @ 0x10035d650 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::update::check_update_installability::h7d75525da3e76202(
        __int64 a1,
        __int64 a2)
{
  size_t v2; // r13
  void **v3; // rdi
  void **v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  const void *v8; // r12
  size_t v9; // r15
  unsigned __int64 v10; // r14
  void *v11; // rax
  void *v12; // rbx
  size_t v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // r14
  void *v26; // rbx
  char v27; // al
  char v28; // bl
  void *v29; // rsi
  void *v30; // r14
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rdi
  void *v34; // rdi
  char v35; // bl
  char v36; // al
  void *v37; // r14
  bool v38; // r14
  __int64 v39; // rax
  void *v40; // rax
  __int64 v41; // rsi
  void *v42; // rsi
  void *v43; // rsi
  void *v44; // r13
  __int64 v45; // r13
  __int64 v46; // rax
  unsigned __int64 v47; // rsi
  char v48; // cl
  char v49; // dl
  __int64 result; // rax
  size_t v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // r14
  int v55; // r12d
  void *v56; // rax
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 v59; // r12
  __int64 v60; // rsi
  __int64 v61; // [rsp+0h] [rbp-180h] BYREF
  __int64 v62; // [rsp+8h] [rbp-178h]
  __int64 v63; // [rsp+18h] [rbp-168h]
  __int64 v64; // [rsp+20h] [rbp-160h]
  int v65; // [rsp+30h] [rbp-150h]
  __int64 v66; // [rsp+38h] [rbp-148h] BYREF
  void *__src; // [rsp+40h] [rbp-140h]
  size_t __n; // [rsp+48h] [rbp-138h]
  __int64 v69; // [rsp+100h] [rbp-80h]
  __int64 v70; // [rsp+108h] [rbp-78h]
  size_t v71; // [rsp+110h] [rbp-70h]
  size_t v72; // [rsp+118h] [rbp-68h]
  size_t v73; // [rsp+120h] [rbp-60h]
  void *v74; // [rsp+128h] [rbp-58h]
  int v75; // [rsp+134h] [rbp-4Ch]
  void *v76; // [rsp+138h] [rbp-48h]
  void *v77; // [rsp+140h] [rbp-40h]
  int v78; // [rsp+14Ch] [rbp-34h]
  unsigned __int64 v79; // [rsp+150h] [rbp-30h]

  v69 = a1; /*0x10035d664*/
  v3 = (void **)&v66; /*0x10035d672*/
  std::env::current_exe::h29d0ba355065eb9c(&v66); /*0x10035d679*/
  v77 = (void *)v66; /*0x10035d685*/
  v72 = 0x8000000000000000LL; /*0x10035d68c*/
  if ( __OFSUB__(-v66, 1) ) /*0x10035d689*/
  {
    if ( ((unsigned __int8)__src & 3) == 1 ) /*0x10035d6a5*/
    {
      v4 = (void **)((char *)__src - 1); /*0x10035d6a7*/
      v5 = *(_QWORD *)((char *)__src - 1); /*0x10035d6ab*/
      v6 = *(_QWORD *)((char *)__src + 7); /*0x10035d6af*/
      if ( *(_QWORD *)v6 ) /*0x10035d6b3*/
        (*(void (__fastcall **)(__int64))v6)(v5); /*0x10035d6be*/
      v7 = *(_QWORD *)(v6 + 8); /*0x10035d6c0*/
      if ( v7 ) /*0x10035d6c7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x10035d6d0*/
      a2 = 24; /*0x10035d6d5*/
      v3 = v4; /*0x10035d6df*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x10035d6e2*/
    }
    v8 = &anon_b0ee9adff4519c22b647af231a5a39fa_429; /*0x10035d6e7*/
    v9 = 2; /*0x10035d6ee*/
    LODWORD(v73) = 0; /*0x10035d6f4*/
    v10 = 0x8000000000000000LL; /*0x10035d6fb*/
    v78 = 0; /*0x10035d705*/
    goto LABEL_9; /*0x10035d705*/
  }
  v2 = __n; /*0x10035d76b*/
  v74 = __src; /*0x10035d772*/
  v14 = std::path::Path::parent::h4c3ac26770731fbb(__src, __n); /*0x10035d779*/
  if ( !v14 ) /*0x10035d781*/
    goto LABEL_20; /*0x10035d781*/
  v16 = std::path::Path::parent::h4c3ac26770731fbb(v14, v15); /*0x10035d789*/
  if ( !v16 ) /*0x10035d791*/
    goto LABEL_20; /*0x10035d791*/
  v18 = std::path::Path::parent::h4c3ac26770731fbb(v16, v17); /*0x10035d799*/
  v20 = v18; /*0x10035d79e*/
  if ( !v18 ) /*0x10035d7a4*/
    goto LABEL_20; /*0x10035d7a4*/
  v21 = v19; /*0x10035d7a6*/
  v22 = std::path::Path::extension::hbb56a39ecf8d3771(v18, v19); /*0x10035d7af*/
  if ( v22 == 0 || v23 != 3 ) /*0x10035d7be*/
    goto LABEL_20; /*0x10035d7c6*/
  v24 = __ROL2__(*(_WORD *)v22, 8); /*0x10035d7cf*/
  if ( v24 == 24944 ) /*0x10035d7d8*/
  {
    if ( *(_BYTE *)(v22 + 2) != 112 ) /*0x10035d7e7*/
    {
LABEL_20:
      v25 = 0x8000000000000000LL; /*0x10035d7ed*/
      goto LABEL_21; /*0x10035d7ed*/
    }
  }
  else if ( 2 * (v24 >= 0x6170u) != 1 ) /*0x10035de04*/
  {
    goto LABEL_20; /*0x10035de04*/
  }
  std::path::Path::to_path_buf::h73855ce4b54f7174(&v66, v20, v21); /*0x10035de17*/
  v25 = v66; /*0x10035de1c*/
  v76 = __src; /*0x10035de2a*/
  v71 = __n; /*0x10035de35*/
LABEL_21:
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v66, v74, v2); /*0x10035d7f0*/
  v26 = __src; /*0x10035d803*/
  v79 = v25; /*0x10035d820*/
  v27 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10035d824*/
          &unk_1015F7BC3,
          0x12u,
          __src);
  if ( 2 * v66 ) /*0x10035d830*/
  {
    v34 = v26; /*0x10035d8b9*/
    v35 = v27; /*0x10035d8bc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v66, 1); /*0x10035d8be*/
    v36 = v35; /*0x10035d8c3*/
    v28 = 1; /*0x10035d8c5*/
    if ( v36 ) /*0x10035d8c9*/
      goto LABEL_35; /*0x10035d8c9*/
  }
  else
  {
    v28 = 1; /*0x10035d83d*/
    if ( v27 ) /*0x10035d841*/
      goto LABEL_35; /*0x10035d841*/
  }
  if ( v25 == 0x8000000000000000LL ) /*0x10035d8ce*/
  {
    v28 = 0; /*0x10035d8d0*/
  }
  else
  {
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v66, v76, v71); /*0x10035d8e3*/
    v37 = __src; /*0x10035d8e8*/
    v28 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10035d90a*/
            &unk_1015F7BC3,
            0x12u,
            __src);
    if ( 2 * v66 ) /*0x10035d913*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v66, 1); /*0x10035d928*/
  }
LABEL_35:
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v66, v74, v2); /*0x10035d931*/
  v3 = (void **)__src; /*0x10035d944*/
  if ( __n < 9 ) /*0x10035d953*/
  {
    v38 = 0; /*0x10035d955*/
    a2 = v66; /*0x10035d958*/
    LODWORD(v39) = 2 * v66; /*0x10035d95f*/
    if ( 2 * v66 ) /*0x10035d95f*/
      goto LABEL_37; /*0x10035d96a*/
LABEL_41:
    if ( !v38 ) /*0x10035d9c4*/
      goto LABEL_38; /*0x10035d9c4*/
LABEL_42:
    LOBYTE(v39) = 1; /*0x10035d9c6*/
    v78 = v39; /*0x10035d9c8*/
    v10 = v79; /*0x10035d9cb*/
    if ( v79 == 0x8000000000000000LL ) /*0x10035d9d2*/
      goto LABEL_43; /*0x10035d9d2*/
    goto LABEL_73; /*0x10035d9d2*/
  }
  v38 = (*(_QWORD *)__src ^ 0x73656D756C6F562FLL | *((unsigned __int8 *)__src + 8) ^ 0x2FLL) == 0; /*0x10035d9a9*/
  a2 = v66; /*0x10035d9ad*/
  LODWORD(v39) = 2 * v66; /*0x10035d9b4*/
  if ( !(2 * v66) ) /*0x10035d9b4*/
    goto LABEL_41; /*0x10035d9bf*/
LABEL_37:
  v39 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, a2, 1); /*0x10035d96c*/
  if ( v38 ) /*0x10035d979*/
    goto LABEL_42; /*0x10035d979*/
LABEL_38:
  v10 = v79; /*0x10035d97b*/
  if ( v79 == 0x8000000000000000LL ) /*0x10035d982*/
  {
    v78 = 0; /*0x10035d988*/
LABEL_43:
    v40 = &unk_1015F7BD5; /*0x10035d9d8*/
    v8 = &anon_b0ee9adff4519c22b647af231a5a39fa_429; /*0x10035d9df*/
    if ( (_BYTE)v78 ) /*0x10035d9eb*/
      v8 = &unk_1015F7BD5; /*0x10035d9eb*/
    LODWORD(v73) = 0; /*0x10035d9ef*/
    if ( v28 ) /*0x10035d9f8*/
    {
      v9 = 17; /*0x10035d9fa*/
      LOBYTE(v40) = 1; /*0x10035da00*/
      v75 = (int)v40; /*0x10035da02*/
      v8 = &unk_1015F7BE7; /*0x10035da05*/
      v10 = 0x8000000000000000LL; /*0x10035da0c*/
      goto LABEL_10; /*0x10035da16*/
    }
    v9 = (16 * (unsigned int)(unsigned __int8)v78) | 2LL; /*0x10035da70*/
    v10 = 0x8000000000000000LL; /*0x10035da74*/
LABEL_9:
    v75 = 0; /*0x10035d70c*/
    goto LABEL_10; /*0x10035d70c*/
  }
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v66, v76, v71); /*0x10035da2a*/
  if ( __n >= 9 ) /*0x10035da3e*/
  {
    v52 = *(_QWORD *)__src ^ 0x73656D756C6F562FLL; /*0x10035dc1d*/
    LOBYTE(v52) = (v52 | *((unsigned __int8 *)__src + 8) ^ 0x2FLL) == 0; /*0x10035dc2b*/
    v78 = v52; /*0x10035dc2e*/
    v41 = v66; /*0x10035dc31*/
    if ( !(2 * v66) ) /*0x10035dc43*/
      goto LABEL_73; /*0x10035dc43*/
  }
  else
  {
    v78 = 0; /*0x10035da44*/
    v41 = v66; /*0x10035da4b*/
    if ( !(2 * v66) ) /*0x10035da5d*/
      goto LABEL_73; /*0x10035da5d*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v41, 1); /*0x10035dc4a*/
LABEL_73:
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v66, "xattr-pcom.apple.quarantine", 5); /*0x10035dc4f*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v66, "-pcom.apple.quarantine", 2); /*0x10035dc7a*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v66, "com.apple.quarantine", 20); /*0x10035dc92*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v66, v76, v71); /*0x10035dca6*/
  std::process::Command::output::h737eedd4de2ee22e(&v61, &v66); /*0x10035dcb9*/
  a2 = v61; /*0x10035dcbe*/
  if ( v61 == 0x8000000000000000LL ) /*0x10035dcc8*/
  {
    if ( (v62 & 3) == 1 ) /*0x10035dcd9*/
    {
      v73 = v2; /*0x10035dda1*/
      v57 = v62 - 1; /*0x10035dda5*/
      v58 = *(_QWORD *)(v62 - 1); /*0x10035dda9*/
      v59 = *(_QWORD *)(v62 + 7); /*0x10035ddad*/
      if ( *(_QWORD *)v59 ) /*0x10035ddb1*/
        (*(void (__fastcall **)(__int64))v59)(v58); /*0x10035ddbd*/
      v60 = *(_QWORD *)(v59 + 8); /*0x10035ddbf*/
      if ( v60 ) /*0x10035ddc7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v60, *(_QWORD *)(v59 + 16)); /*0x10035ddd1*/
      a2 = 24; /*0x10035ddd6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, 24, 8); /*0x10035dde3*/
      LODWORD(v53) = 0; /*0x10035dde8*/
      v10 = v79; /*0x10035ddeb*/
      v2 = v73; /*0x10035ddef*/
    }
    else
    {
      LODWORD(v53) = 0; /*0x10035dcdf*/
    }
  }
  else
  {
    v54 = v63; /*0x10035dce4*/
    v53 = v64; /*0x10035dceb*/
    v55 = v65; /*0x10035dcf2*/
    if ( v61 ) /*0x10035dcfc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v61, 1); /*0x10035dd0a*/
    if ( v54 ) /*0x10035dd12*/
    {
      a2 = v54; /*0x10035dd1c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v54, 1); /*0x10035dd1f*/
    }
    LOBYTE(v53) = v55 == 0; /*0x10035dd27*/
    v10 = v79; /*0x10035dd2b*/
  }
  v3 = (void **)&v66; /*0x10035dd2f*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v66); /*0x10035dd36*/
  LODWORD(v73) = v53; /*0x10035dd3b*/
  v56 = &unk_1015F7BD5; /*0x10035dd3f*/
  v8 = &anon_b0ee9adff4519c22b647af231a5a39fa_429; /*0x10035dd46*/
  if ( (_BYTE)v78 ) /*0x10035dd52*/
    v8 = &unk_1015F7BD5; /*0x10035dd52*/
  if ( !v28 ) /*0x10035dd58*/
  {
    v9 = (16 * (unsigned int)(unsigned __int8)v78) | 2LL; /*0x10035dd79*/
    goto LABEL_9; /*0x10035dd7d*/
  }
  v9 = 17; /*0x10035dd5a*/
  LOBYTE(v56) = 1; /*0x10035dd60*/
  v75 = (int)v56; /*0x10035dd62*/
  v8 = &unk_1015F7BE7; /*0x10035dd65*/
LABEL_10:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, a2); /*0x10035d713*/
  v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x10035d720*/
  if ( !v11 ) /*0x10035d728*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v9); /*0x10035de46*/
  v12 = v11; /*0x10035d72e*/
  memcpy(v11, v8, v9); /*0x10035d73a*/
  if ( v77 != (void *)0x8000000000000000LL ) /*0x10035d74d*/
  {
    v79 = v10; /*0x10035d84c*/
    v29 = v74; /*0x10035d857*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v66, v74, v2); /*0x10035d85e*/
    v30 = __src; /*0x10035d863*/
    v13 = __n; /*0x10035d86a*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10035d874*/
    {
      v31 = 0; /*0x10035d876*/
      goto LABEL_26; /*0x10035d876*/
    }
    if ( __n ) /*0x10035d889*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v66, v29); /*0x10035d88f*/
      v31 = 1; /*0x10035d894*/
      v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v13, 1); /*0x10035d8a2*/
      if ( !v32 ) /*0x10035d8aa*/
LABEL_26:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v13); /*0x10035d879*/
      v33 = v32; /*0x10035d8ac*/
    }
    else
    {
      v33 = 1; /*0x10035da83*/
    }
    v70 = v33; /*0x10035da88*/
    memcpy((void *)v33, v30, v13); /*0x10035da92*/
    if ( 2 * v66 ) /*0x10035da9e*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v66, 1); /*0x10035db59*/
      v42 = v77; /*0x10035db5e*/
      if ( !v77 ) /*0x10035db65*/
      {
LABEL_55:
        v10 = v79; /*0x10035dac6*/
        if ( v79 == 0x8000000000000000LL ) /*0x10035dad7*/
          goto LABEL_68; /*0x10035dad7*/
        goto LABEL_56; /*0x10035dad7*/
      }
    }
    else
    {
      v42 = v77; /*0x10035daaf*/
      if ( !v77 ) /*0x10035dab6*/
        goto LABEL_55; /*0x10035dab6*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v42, 1); /*0x10035dac1*/
    goto LABEL_55; /*0x10035dac1*/
  }
  v13 = 0x8000000000000000LL; /*0x10035d753*/
  if ( v10 == 0x8000000000000000LL ) /*0x10035d759*/
    goto LABEL_68; /*0x10035d759*/
LABEL_56:
  v43 = v76; /*0x10035dadd*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v66, v76, v71); /*0x10035daec*/
  v44 = __src; /*0x10035daf1*/
  v72 = __n; /*0x10035daff*/
  v79 = v10; /*0x10035db06*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10035db0a*/
  {
    v77 = __src; /*0x10035db0c*/
    v45 = 0; /*0x10035db10*/
    goto LABEL_58; /*0x10035db10*/
  }
  if ( __n ) /*0x10035db24*/
  {
    v77 = __src; /*0x10035db26*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v66, v43); /*0x10035db2a*/
    v45 = 1; /*0x10035db2f*/
    v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v72, 1); /*0x10035db3e*/
    if ( !v46 ) /*0x10035db46*/
LABEL_58:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v45, v72); /*0x10035db13*/
    v10 = v46; /*0x10035db48*/
    v44 = v77; /*0x10035db4b*/
  }
  else
  {
    v10 = 1; /*0x10035db70*/
  }
  memcpy((void *)v10, v44, v72); /*0x10035db80*/
  if ( !(2 * v66) ) /*0x10035db8c*/
  {
    v47 = v79; /*0x10035db9d*/
    if ( !v79 ) /*0x10035dba4*/
      goto LABEL_68; /*0x10035dba4*/
    goto LABEL_67; /*0x10035dba4*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v66, 1); /*0x10035dd8a*/
  v47 = v79; /*0x10035dd8f*/
  if ( v79 ) /*0x10035dd96*/
LABEL_67:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v47, 1); /*0x10035dba6*/
LABEL_68:
  v48 = 0; /*0x10035dbb4*/
  v49 = v75; /*0x10035dbbe*/
  if ( !(_BYTE)v75 ) /*0x10035dbc3*/
    v48 = v78 ^ 1; /*0x10035dbc3*/
  result = v69; /*0x10035dbc6*/
  *(_BYTE *)(v69 + 72) = v48; /*0x10035dbca*/
  *(_QWORD *)result = v9; /*0x10035dbcd*/
  *(_QWORD *)(result + 8) = v12; /*0x10035dbd0*/
  *(_QWORD *)(result + 16) = v9; /*0x10035dbd4*/
  *(_QWORD *)(result + 24) = v13; /*0x10035dbd8*/
  *(_QWORD *)(result + 32) = v70; /*0x10035dbe0*/
  *(_QWORD *)(result + 40) = v13; /*0x10035dbe4*/
  v51 = v72; /*0x10035dbe8*/
  *(_QWORD *)(result + 48) = v72; /*0x10035dbec*/
  *(_QWORD *)(result + 56) = v10; /*0x10035dbf0*/
  *(_QWORD *)(result + 64) = v51; /*0x10035dbf4*/
  *(_BYTE *)(result + 73) = v49; /*0x10035dbf8*/
  *(_BYTE *)(result + 74) = v73; /*0x10035dbfe*/
  return result; /*0x10035dc01*/
}