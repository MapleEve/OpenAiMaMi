// mac 1.2.2 NEW codexmate_lib8platform7process21open_macos_app_bun 0x10135b680 d=2
int __fastcall std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::spawn::h4159ca6cfa5ce011(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v7; // rcx
  _UNKNOWN **v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r15
  pid_t v19; // eax
  pid_t v20; // r13d
  unsigned int v21; // r12d
  ssize_t v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  char **v25; // rdx
  char *v26; // rdi
  char v27; // bl
  unsigned int v28; // r14d
  __int64 v29; // rdi
  int v30; // r13d
  pid_t v31; // r15d
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int16 v34; // r13
  char v35; // r15
  unsigned int v36; // eax
  __int64 v37; // rdx
  char ***v38; // rax
  char *const *v39; // r9
  unsigned int v40; // eax
  int v41; // r15d
  __int64 v42; // r12
  char **v43; // rdx
  __int64 v44; // rsi
  char *v45; // rdi
  __int64 *v46; // rdx
  unsigned __int32 v47; // ecx
  unsigned int v48; // eax
  __int64 v49; // rdx
  _QWORD v51[2]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v52; // [rsp+10h] [rbp-F0h] BYREF
  char v53; // [rsp+18h] [rbp-E8h] BYREF
  int v54; // [rsp+28h] [rbp-D8h] BYREF
  int v55; // [rsp+2Ch] [rbp-D4h]
  pid_t v56; // [rsp+30h] [rbp-D0h]
  unsigned int v57; // [rsp+34h] [rbp-CCh]
  unsigned int v58; // [rsp+38h] [rbp-C8h]
  unsigned int v59; // [rsp+3Ch] [rbp-C4h]
  __int128 v60; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h]
  _BYTE v63[12]; // [rsp+60h] [rbp-A0h]
  char v64; // [rsp+6Fh] [rbp-91h] BYREF
  int v65[2]; // [rsp+70h] [rbp-90h] BYREF
  int v66[2]; // [rsp+78h] [rbp-88h]
  int v67[2]; // [rsp+80h] [rbp-80h]
  sigset_t v68[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v69; // [rsp+90h] [rbp-70h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  int v72[2]; // [rsp+B0h] [rbp-50h]
  __int64 v73; // [rsp+B8h] [rbp-48h]
  posix_spawnattr_t v74; // [rsp+C0h] [rbp-40h] BYREF
  posix_spawn_file_actions_t v75; // [rsp+C8h] [rbp-38h] BYREF
  pid_t v76; // [rsp+D0h] [rbp-30h]

  std::sys::process::unix::common::Command::capture_env::hbf0e6a4162d79768(&v52); /*0x10135b6b1*/
  if ( !*(_BYTE *)(a2 + 192) )
  {
    std::sys::process::unix::common::Command::setup_io::hc7b4407b1be9bdec(v68, a2, a3, v7, a4); /*0x10135b706*/
    if ( v68[0] == 1 ) /*0x10135b70f*/
    {
      LODWORD(v8) = v69; /*0x10135b711*/
      *(_QWORD *)(a1 + 8) = v69; /*0x10135b715*/
      *(_DWORD *)a1 = 2; /*0x10135b719*/
      if ( v52 == 0x8000000000000000LL ) /*0x10135b726*/
        return (int)v8; /*0x10135b726*/
      goto LABEL_3; /*0x10135b726*/
    }
    *(_QWORD *)v65 = *((_QWORD *)&v69 + 1); /*0x10135b735*/
    *(_QWORD *)v66 = v70; /*0x10135b740*/
    *(_QWORD *)v67 = v71; /*0x10135b74b*/
    *(_DWORD *)v63 = v68[1]; /*0x10135b74f*/
    *(_QWORD *)&v63[4] = v69; /*0x10135b755*/
    if ( *(_DWORD *)(a2 + 56) | *(_DWORD *)(a2 + 48) ) /*0x10135b760*/
      goto LABEL_30; /*0x10135b760*/
    v9 = v52; /*0x10135b76a*/
    if ( *(_BYTE *)(a2 + 121) || *(_BYTE *)(a2 + 120) ) /*0x10135b77c*/
    {
      v12 = *(_QWORD *)(a2 + 128); /*0x10135b86c*/
      v13 = *(_QWORD *)(a2 + 136) - 1LL; /*0x10135b87a*/
      if ( v13 > 0xF ) /*0x10135b881*/
      {
        if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(0x2Fu, v12, v13) != 1 ) /*0x10135b8b2*/
          goto LABEL_30; /*0x10135b8b2*/
      }
      else
      {
        if ( *(_QWORD *)(a2 + 136) == 1 ) /*0x10135b886*/
          goto LABEL_30; /*0x10135b886*/
        v14 = 0; /*0x10135b888*/
        while ( *(_BYTE *)(v12 + v14) != 47 ) /*0x10135b894*/
        {
          if ( v13 == ++v14 ) /*0x10135b8a0*/
            goto LABEL_30; /*0x10135b8a0*/
        }
      }
    }
    if ( *(_QWORD *)(a2 + 40) || *(_QWORD *)(a2 + 176) || *(_QWORD *)(a2 + 160) )
    {
LABEL_30:
      LODWORD(v8) = std::sys::pipe::unix::pipe::h1edaba1ec22a53e1(v68); /*0x10135b8b8*/
      if ( v68[0] == 1 ) /*0x10135b8c5*/
      {
        v15 = v69; /*0x10135b8c7*/
        goto LABEL_32; /*0x10135b8c7*/
      }
      v72[0] = v68[1]; /*0x10135b90b*/
      LODWORD(v73) = v69; /*0x10135b911*/
      v54 = v69; /*0x10135b914*/
      v16 = std::sys::env::unix::env_read_lock::hf14baef26d24c6e3(); /*0x10135b91f*/
      v18 = v17; /*0x10135b922*/
      *(_QWORD *)&v60 = v16; /*0x10135b925*/
      *((_QWORD *)&v60 + 1) = v17; /*0x10135b92c*/
      v19 = fork(); /*0x10135b933*/
      if ( v19 == -1 ) /*0x10135b93b*/
      {
        *(_QWORD *)(a1 + 8) = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x10135ba57*/
        *(_DWORD *)a1 = 2; /*0x10135ba5b*/
        core::ptr::drop_in_place$LT$std..sync..poison..rwlock..RwLockReadGuard$LT$$LP$$RP$$GT$$GT$::h54c183a434cdc661(&v60); /*0x10135ba68*/
        close_NOCANCEL((unsigned int)v73); /*0x10135ba70*/
        v27 = 1; /*0x10135ba75*/
        LODWORD(v8) = close_NOCANCEL((unsigned int)v72[0]); /*0x10135ba88*/
        if ( v65[0] >= 2u ) /*0x10135ba94*/
          goto LABEL_53; /*0x10135ba94*/
        goto LABEL_58; /*0x10135ba94*/
      }
      v20 = v19; /*0x10135b941*/
      if ( !v19 )
      {
        _InterlockedOr64(&std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6, 0x8000000000000000LL); /*0x10135bfa0*/
        close_NOCANCEL((unsigned int)v72[0]); /*0x10135bfab*/
        v46 = &v52; /*0x10135bfb9*/
        if ( v52 == 0x8000000000000000LL ) /*0x10135bfc0*/
          v46 = nullptr; /*0x10135bfc0*/
        v74 = (posix_spawnattr_t)std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::do_exec::h976183eb51629ece( /*0x10135bfd3*/
                                   a2,
                                   v65,
                                   v46);
        std::io::error::repr_bitpacked::decode_repr::h56b0ddf9c5f40854(v68, v74); /*0x10135bfde*/
        v47 = _byteswap_ulong(v68[1]); /*0x10135bfea*/
        v48 = 369098752; /*0x10135bfec*/
        if ( !LOBYTE(v68[0]) ) /*0x10135bff1*/
          v48 = v47; /*0x10135bff1*/
        v75 = (posix_spawn_file_actions_t)(v48 | 0x58454F4E00000000LL); /*0x10135bff6*/
        *(_QWORD *)v68 = std::sys::fd::unix::FileDesc::write::h2c5e3832a7da28ba(&v54, &v75, 8); /*0x10135c024*/
        *(_QWORD *)&v69 = v49; /*0x10135c028*/
        if ( !*(_QWORD *)v68 ) /*0x10135c02f*/
        {
          core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h057e2c4a0bb0e477(v68); /*0x10135c035*/
          _exit(1); /*0x10135c03f*/
        }
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330(&v69); /*0x10135c05d*/
        *(_QWORD *)v68 = std::io::Write::write_fmt::h210f0dd61642ec64(
                           &v64,
                           "fatal runtime error: assertion failed: output.write(&bytes).is_ok(), aborting\nwait() should either return Ok or panicshort read on the CLOEXEC pipestack backtrace:\nnote: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.\n__rust_end_short_backtrace__rust_begin_short_backtraces");
        if ( *(_QWORD *)v68 ) /*0x10135c081*/
          core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330(v68); /*0x10135c087*/
        std::process::abort::h38b4a24325fecca0(); /*0x10135c08c*/
      }
      *(_QWORD *)v68 = v16; /*0x10135b94c*/
      *(_QWORD *)&v69 = v18; /*0x10135b950*/
      core::ptr::drop_in_place$LT$std..sync..poison..rwlock..RwLockReadGuard$LT$$LP$$RP$$GT$$GT$::h54c183a434cdc661(v68); /*0x10135b958*/
      close_NOCANCEL((unsigned int)v73); /*0x10135b960*/
      v76 = v20; /*0x10135b965*/
      LODWORD(v75) = 0; /*0x10135b969*/
      v61 = 0; /*0x10135b970*/
      v21 = v72[0]; /*0x10135b98c*/
      while ( 1 )
      {
        v22 = read(v21, &v61, 8u); /*0x10135b99b*/
        if ( v22 != -1 ) /*0x10135b9a4*/
          break; /*0x10135b9a4*/
        v23 = *__error(); /*0x10135b9af*/
        if ( v23 != 4 )
        {
          v74 = (posix_spawnattr_t)((v23 << 32) | 2); /*0x10135b9c0*/
          v24 = (__int64)v68; /*0x10135b9c4*/
          std::sys::process::unix::unix::Process::wait::h98092d72b7bc0bee(v68, &v75); /*0x10135b9cf*/
          if ( v68[0] )
          {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330(&v69); /*0x10135bf51*/
            v25 = &off_1019263B0; /*0x10135bf56*/
            v24 = 79; /*0x10135bf5d*/
            v26 = "wait() should either return Ok or panicshort read on the CLOEXEC pipestack backtrace:\nnote: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.\n__rust_end_short_backtrace__rust_begin_short_backtraces";
          }
          else
          {
            *(_QWORD *)v68 = &v74; /*0x10135b9e2*/
            *(_QWORD *)&v69 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::h528ffc6c2c4a75e3; /*0x10135b9ed*/
            v25 = &off_101926398; /*0x10135b9f1*/
            v26 = (char *)&unk_101729ED2; /*0x10135b9f8*/
          }
          core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)v26, v24, (__int64)v25); /*0x10135bf6c*/
        }
      }
      if ( !v22 ) /*0x10135baa2*/
      {
        LODWORD(v69) = v76; /*0x10135bb5b*/
        *(_QWORD *)v68 = v75; /*0x10135bb62*/
        HIDWORD(v69) = *(_DWORD *)&v63[8]; /*0x10135bb6c*/
        *(_QWORD *)((char *)&v69 + 4) = *(_QWORD *)v63; /*0x10135bb76*/
        *(_QWORD *)a1 = v75; /*0x10135bb7a*/
        *(_OWORD *)(a1 + 8) = v69; /*0x10135bb89*/
        v27 = 0; /*0x10135bb8d*/
        LODWORD(v8) = close_NOCANCEL(v21); /*0x10135bb92*/
        if ( v65[0] >= 2u ) /*0x10135bb9e*/
        {
LABEL_53:
          LODWORD(v8) = close_NOCANCEL((unsigned int)v65[1]); /*0x10135bb21*/
          if ( v66[0] >= 2u ) /*0x10135bb33*/
            goto LABEL_54; /*0x10135bb33*/
          goto LABEL_59; /*0x10135bb33*/
        }
LABEL_58:
        if ( v66[0] >= 2u ) /*0x10135bba7*/
        {
LABEL_54:
          LODWORD(v8) = close_NOCANCEL((unsigned int)v66[1]); /*0x10135bb35*/
          if ( v67[0] >= 2u ) /*0x10135bb44*/
            goto LABEL_55; /*0x10135bb44*/
          goto LABEL_60; /*0x10135bb44*/
        }
LABEL_59:
        if ( v67[0] >= 2u ) /*0x10135bbad*/
        {
LABEL_55:
          LODWORD(v8) = close_NOCANCEL((unsigned int)v67[1]); /*0x10135bb46*/
          if ( !v27 ) /*0x10135bb50*/
            goto LABEL_67; /*0x10135bb50*/
          goto LABEL_61; /*0x10135bb50*/
        }
LABEL_60:
        if ( !v27 ) /*0x10135bbb1*/
          goto LABEL_67; /*0x10135bbb1*/
LABEL_61:
        if ( *(_DWORD *)v63 != -1 ) /*0x10135bbbc*/
          LODWORD(v8) = close_NOCANCEL(*(unsigned int *)v63); /*0x10135bbbe*/
        if ( *(_DWORD *)&v63[4] != -1 ) /*0x10135bbcc*/
          LODWORD(v8) = close_NOCANCEL(*(unsigned int *)&v63[4]); /*0x10135bbce*/
        v29 = *(unsigned int *)&v63[8]; /*0x10135bbd3*/
        if ( *(_DWORD *)&v63[8] != -1 ) /*0x10135bbdc*/
          goto LABEL_66; /*0x10135bbdc*/
LABEL_67:
        if ( v52 == 0x8000000000000000LL ) /*0x10135bbea*/
          return (int)v8; /*0x10135bbea*/
        goto LABEL_3; /*0x10135bbea*/
      }
      if ( v22 == 8 )
      {
        v51[0] = (char *)&v61 + 4; /*0x10135bab9*/
        v51[1] = 4; /*0x10135bac0*/
        if ( HIDWORD(v61) != 1480937294 ) /*0x10135bad5*/
        {
          *(_QWORD *)v68 = &v61; /*0x10135beac*/
          *(_QWORD *)&v69 = core::array::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$$u5b$T$u3b$$u20$N$u5d$$GT$::fmt::h01053e290551e0c5; /*0x10135beb7*/
          ((void (__fastcall __noreturn *)(_QWORD, void *, _QWORD *, void *, sigset_t *, char **))core::panicking::assert_failed::ha6eea04c6f932cd1)( /*0x10135bedd*/
            0,
            &unk_1016DFF70,
            v51,
            &unk_101729EA8,
            v68,
            &off_101926350);
        }
        v28 = v61; /*0x10135badb*/
        std::sys::process::unix::unix::Process::wait::h98092d72b7bc0bee(v68, &v75); /*0x10135baea*/
        if ( !v68[0] ) /*0x10135baf3*/
        {
          *(_QWORD *)(a1 + 8) = ((unsigned __int64)_byteswap_ulong(v28) << 32) | 2; /*0x10135bb04*/
          *(_DWORD *)a1 = 2; /*0x10135bb08*/
          v27 = 1; /*0x10135bb0e*/
          LODWORD(v8) = close_NOCANCEL(v21); /*0x10135bb13*/
          if ( v65[0] >= 2u ) /*0x10135bb1f*/
            goto LABEL_53; /*0x10135bb1f*/
          goto LABEL_58; /*0x10135bb1f*/
        }
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330(&v69); /*0x10135c048*/
        v43 = &off_101926338; /*0x10135c04d*/
      }
      else
      {
        std::sys::process::unix::unix::Process::wait::h98092d72b7bc0bee(v68, &v75); /*0x10135bf2d*/
        if ( !v68[0] )
        {
          v43 = &off_101926368; /*0x10135bf38*/
          v44 = 61; /*0x10135bf3f*/
          v45 = "short read on the CLOEXEC pipestack backtrace:\nnote: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.\n__rust_end_short_backtrace__rust_begin_short_backtraces";
          goto LABEL_119; /*0x10135bf4b*/
        }
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330(&v69); /*0x10135bf77*/
        v43 = &off_101926380; /*0x10135bf7c*/
      }
      v44 = 79; /*0x10135bf83*/
      v45 = "wait() should either return Ok or panicshort read on the CLOEXEC pipestack backtrace:\nnote: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.\n__rust_end_short_backtrace__rust_begin_short_backtraces";
LABEL_119:
      core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)v45, v44, (__int64)v43); /*0x10135bf8f*/
    }
    v10 = *(_QWORD *)(a2 + 144); /*0x10135b7ae*/
    if ( v10 ) /*0x10135b7b8*/
    {
      if ( *(_BYTE *)(a2 + 194) == 1 ) /*0x10135b7c6*/
        goto LABEL_30; /*0x10135b7c6*/
      if ( std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h497ecc96202fe6a6 ) /*0x10135b7d6*/
      {
        v73 = *(_QWORD *)(a2 + 144); /*0x10135b7d8*/
        v62 = v9; /*0x10135b7dc*/
        *(_QWORD *)v72 = std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h497ecc96202fe6a6; /*0x10135b7e3*/
        if ( std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h497ecc96202fe6a6 != 1 ) /*0x10135b7eb*/
          goto LABEL_70; /*0x10135b7eb*/
        v11 = dlsym((void *)0xFFFFFFFFFFFFFFFELL, "posix_spawn_file_actions_addchdir_np"); /*0x10135b7ff*/
        std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h497ecc96202fe6a6 = (__int64)v11; /*0x10135b804*/
        v9 = v62; /*0x10135b80e*/
        v10 = v73; /*0x10135b815*/
        if ( v11 ) /*0x10135b819*/
          goto LABEL_22; /*0x10135b819*/
      }
      if ( !std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h5412a99f64799224 ) /*0x10135b825*/
        goto LABEL_30; /*0x10135b825*/
      v73 = v10; /*0x10135b82b*/
      v62 = v9; /*0x10135b82f*/
      *(_QWORD *)v72 = std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h5412a99f64799224; /*0x10135b836*/
      if ( std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h5412a99f64799224 == 1 ) /*0x10135b83e*/
      {
        v11 = dlsym((void *)0xFFFFFFFFFFFFFFFELL, "posix_spawn_file_actions_addchdir"); /*0x10135b852*/
        std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h5412a99f64799224 = (__int64)v11; /*0x10135b857*/
        if ( !v11 ) /*0x10135b861*/
          goto LABEL_30; /*0x10135b861*/
LABEL_22:
        *(_QWORD *)v72 = v11; /*0x10135b863*/
      }
    }
    else
    {
      v73 = 0; /*0x10135bbf5*/
      v62 = v9; /*0x10135bbf9*/
      *(_QWORD *)v72 = 0; /*0x10135bc00*/
    }
LABEL_70:
    v30 = *(_DWORD *)(a2 + 64); /*0x10135bc08*/
    v31 = *(_DWORD *)(a2 + 68); /*0x10135bc0c*/
    LODWORD(v8) = posix_spawnattr_init(&v74); /*0x10135bc14*/
    v15 = (unsigned int)v8; /*0x10135bc19*/
    if ( (_DWORD)v8 ) /*0x10135bc1e*/
    {
LABEL_73:
      v15 = (v15 << 32) | 2; /*0x10135bc47*/
      goto LABEL_32; /*0x10135bc4f*/
    }
    v55 = v30; /*0x10135bc20*/
    v56 = v31; /*0x10135bc27*/
    v32 = posix_spawn_file_actions_init(&v75); /*0x10135bc32*/
    if ( v32 ) /*0x10135bc39*/
    {
      v15 = v32; /*0x10135bc3b*/
      LODWORD(v8) = posix_spawnattr_destroy(&v74); /*0x10135bc42*/
      goto LABEL_73; /*0x10135bc42*/
    }
    v57 = v65[0]; /*0x10135bc5a*/
    if ( v65[0] ) /*0x10135bc62*/
    {
      v33 = posix_spawn_file_actions_adddup2(&v75, v65[1], 0); /*0x10135bc70*/
      if ( v33 ) /*0x10135bc77*/
        goto LABEL_94; /*0x10135bc77*/
    }
    v58 = v66[0]; /*0x10135bc83*/
    if ( v66[0] ) /*0x10135bc8b*/
    {
      v33 = posix_spawn_file_actions_adddup2(&v75, v66[1], 1); /*0x10135bc9c*/
      if ( v33 ) /*0x10135bca3*/
        goto LABEL_94; /*0x10135bca3*/
    }
    v59 = v67[0]; /*0x10135bcac*/
    if ( v67[0] ) /*0x10135bcb4*/
    {
      v33 = posix_spawn_file_actions_adddup2(&v75, v67[1], 2); /*0x10135bcc2*/
      if ( v33 ) /*0x10135bcc9*/
        goto LABEL_94; /*0x10135bcc9*/
    }
    if ( *(_QWORD *)v72 ) /*0x10135bcd6*/
    {
      v33 = (*(__int64 (__fastcall **)(posix_spawn_file_actions_t *, __int64))v72)(&v75, v73); /*0x10135bce0*/
      if ( v33 ) /*0x10135bce4*/
        goto LABEL_94; /*0x10135bce4*/
    }
    if ( v55 ) /*0x10135bcf1*/
    {
      v33 = posix_spawnattr_setpgroup(&v74, v56); /*0x10135bcfd*/
      if ( v33 ) /*0x10135bd04*/
        goto LABEL_94; /*0x10135bd04*/
      v34 = 2; /*0x10135bd06*/
    }
    else
    {
      v34 = 0; /*0x10135bd0d*/
    }
    if ( std::sys::pal::unix::ON_BROKEN_PIPE_FLAG_USED::h400ba948a5d9c250 ) /*0x10135bd19*/
    {
      if ( *(_BYTE *)(a2 + 193) ) /*0x10135bd1b*/
      {
LABEL_88:
        v35 = 0; /*0x10135bd25*/
        goto LABEL_96; /*0x10135bd28*/
      }
    }
    else
    {
      if ( sigemptyset(v68) == -1 || sigaddset(v68, 13) == -1 ) /*0x10135bd49*/
      {
        v15 = (unsigned int)*__error(); /*0x10135bdb5*/
        goto LABEL_95; /*0x10135bdb8*/
      }
      v36 = posix_spawnattr_setsigdefault(&v74, v68); /*0x10135bd53*/
      v15 = v36; /*0x10135bd58*/
      if ( v36 ) /*0x10135bd5d*/
      {
LABEL_95:
        v15 = (v15 << 32) | 2; /*0x10135bd85*/
        v35 = 1; /*0x10135bd8d*/
LABEL_96:
        posix_spawn_file_actions_destroy(&v75); /*0x10135bd90*/
        LODWORD(v8) = posix_spawnattr_destroy(&v74); /*0x10135bd9d*/
        if ( v35 ) /*0x10135bda5*/
        {
LABEL_32:
          *(_QWORD *)(a1 + 8) = v15; /*0x10135b8cb*/
          *(_DWORD *)a1 = 2; /*0x10135b8cf*/
          if ( v65[0] >= 2u ) /*0x10135b8dc*/
          {
            LODWORD(v8) = close_NOCANCEL((unsigned int)v65[1]); /*0x10135ba0a*/
            if ( v66[0] < 2u ) /*0x10135ba20*/
            {
LABEL_34:
              if ( v67[0] < 2u ) /*0x10135b8fd*/
                goto LABEL_61; /*0x10135b8fd*/
LABEL_45:
              LODWORD(v8) = close_NOCANCEL((unsigned int)v67[1]); /*0x10135ba3b*/
              goto LABEL_61; /*0x10135ba43*/
            }
          }
          else if ( v66[0] < 2u ) /*0x10135b8f3*/
          {
            goto LABEL_34; /*0x10135b8f3*/
          }
          LODWORD(v8) = close_NOCANCEL((unsigned int)v66[1]); /*0x10135ba2c*/
          if ( v67[0] < 2u ) /*0x10135ba35*/
            goto LABEL_61; /*0x10135ba35*/
          goto LABEL_45; /*0x10135ba35*/
        }
        goto LABEL_30; /*0x10135bda5*/
      }
      v34 |= 4u; /*0x10135bd63*/
      if ( *(_BYTE *)(a2 + 193) ) /*0x10135bd67*/
        goto LABEL_88; /*0x10135bd6f*/
    }
    v33 = posix_spawnattr_setflags(&v74, v34); /*0x10135bd79*/
    if ( v33 ) /*0x10135bd80*/
    {
LABEL_94:
      v15 = v33; /*0x10135bd82*/
      goto LABEL_95; /*0x10135bd82*/
    }
    *(_QWORD *)v68 = std::sys::env::unix::env_read_lock::hf14baef26d24c6e3(); /*0x10135bdbf*/
    *(_QWORD *)&v69 = v37; /*0x10135bdc3*/
    if ( v62 == 0x8000000000000000LL ) /*0x10135bdd8*/
      v38 = _NSGetEnviron(); /*0x10135bdda*/
    else
      v38 = (char ***)&v53; /*0x10135bde1*/
    v39 = *v38; /*0x10135bde8*/
    DWORD2(v60) = 0; /*0x10135bdf2*/
    LODWORD(v60) = 0; /*0x10135bdfc*/
    v40 = posix_spawnp((pid_t *)&v60 + 2, *(const char **)(a2 + 128), &v75, &v74, *(char *const **)(a2 + 8), v39); /*0x10135be19*/
    if ( v40 ) /*0x10135be20*/
    {
      v15 = v40; /*0x10135be22*/
      core::ptr::drop_in_place$LT$std..sync..poison..rwlock..RwLockReadGuard$LT$$LP$$RP$$GT$$GT$::h54c183a434cdc661(v68); /*0x10135be29*/
      goto LABEL_95; /*0x10135be2e*/
    }
    v41 = v60; /*0x10135be33*/
    v42 = *(_QWORD *)((char *)&v60 + 4); /*0x10135be3a*/
    core::ptr::drop_in_place$LT$std..sync..poison..rwlock..RwLockReadGuard$LT$$LP$$RP$$GT$$GT$::h54c183a434cdc661(v68); /*0x10135be45*/
    posix_spawn_file_actions_destroy(&v75); /*0x10135be4e*/
    posix_spawnattr_destroy(&v74); /*0x10135be57*/
    if ( v41 == 2 ) /*0x10135be60*/
      goto LABEL_30; /*0x10135be60*/
    *(_DWORD *)(a1 + 20) = *(_DWORD *)&v63[8]; /*0x10135be6c*/
    LODWORD(v8) = *(_DWORD *)v63; /*0x10135be6f*/
    *(_QWORD *)(a1 + 12) = *(_QWORD *)v63; /*0x10135be76*/
    *(_DWORD *)a1 = v41; /*0x10135be7a*/
    *(_QWORD *)(a1 + 4) = v42; /*0x10135be7d*/
    if ( v57 >= 2 ) /*0x10135be88*/
    {
      LODWORD(v8) = close_NOCANCEL((unsigned int)v65[1]); /*0x10135beed*/
      if ( v58 < 2 ) /*0x10135bef9*/
      {
LABEL_107:
        if ( v59 < 2 ) /*0x10135bea4*/
          goto LABEL_67; /*0x10135bea4*/
        goto LABEL_112; /*0x10135bea4*/
      }
    }
    else if ( v58 < 2 ) /*0x10135be91*/
    {
      goto LABEL_107; /*0x10135be91*/
    }
    LODWORD(v8) = close_NOCANCEL((unsigned int)v66[1]); /*0x10135bf01*/
    if ( v59 < 2 ) /*0x10135bf17*/
      goto LABEL_67; /*0x10135bf17*/
LABEL_112:
    v29 = (unsigned int)v67[1]; /*0x10135bf1d*/
LABEL_66:
    LODWORD(v8) = close_NOCANCEL(v29); /*0x10135bbde*/
    goto LABEL_67; /*0x10135bbde*/
  }
  v8 = &off_101926320; /*0x10135b6c0*/
  *(_QWORD *)(a1 + 8) = &off_101926320; /*0x10135b6c7*/
  *(_DWORD *)a1 = 2; /*0x10135b6cb*/
  if ( v52 != 0x8000000000000000LL ) /*0x10135b6d8*/
LABEL_3:
    LODWORD(v8) = core::ptr::drop_in_place$LT$std..sys..process..unix..common..cstring_array..CStringArray$GT$::hb064a43e4fd31baa(&v52); /*0x10135b6da*/
  return (int)v8; /*0x10135b6e6*/
}