// mac 1.1.8 BEHAVIORAL-BACKEND uninstall_daemon node 0x1010a50a0 depth=2
// std3sys7process4unix4unix58_::spawn
int __fastcall std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::spawn::h4159ca6cfa5ce011(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v7; // rcx
  char **v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  void *v16; // r12
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

  std::sys::process::unix::common::Command::capture_env::hbf0e6a4162d79768(&v52); /*0x1010a50d1*/
  if ( !*(_BYTE *)(a2 + 192) )
  {
    std::sys::process::unix::common::Command::setup_io::hc7b4407b1be9bdec(v68, a2, a3, v7, a4); /*0x1010a5126*/
    if ( v68[0] == 1 ) /*0x1010a512f*/
    {
      LODWORD(v8) = v69; /*0x1010a5131*/
      *(_QWORD *)(a1 + 8) = v69; /*0x1010a5135*/
      *(_DWORD *)a1 = 2; /*0x1010a5139*/
      if ( v52 == 0x8000000000000000LL ) /*0x1010a5146*/
        return (int)v8; /*0x1010a5146*/
      goto LABEL_3; /*0x1010a5146*/
    }
    *(_QWORD *)v65 = *((_QWORD *)&v69 + 1); /*0x1010a5155*/
    *(_QWORD *)v66 = v70; /*0x1010a5160*/
    *(_QWORD *)v67 = v71; /*0x1010a516b*/
    *(_DWORD *)v63 = v68[1]; /*0x1010a516f*/
    *(_QWORD *)&v63[4] = v69; /*0x1010a5175*/
    if ( *(_DWORD *)(a2 + 56) | *(_DWORD *)(a2 + 48) ) /*0x1010a5180*/
      goto LABEL_30; /*0x1010a5180*/
    v9 = v52; /*0x1010a518a*/
    if ( *(_BYTE *)(a2 + 121) || *(_BYTE *)(a2 + 120) ) /*0x1010a519c*/
    {
      v12 = *(_QWORD *)(a2 + 128); /*0x1010a528c*/
      v13 = *(_QWORD *)(a2 + 136) - 1LL; /*0x1010a529a*/
      if ( v13 > 0xF ) /*0x1010a52a1*/
      {
        if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(0x2Fu, v12, v13) != 1 ) /*0x1010a52d2*/
          goto LABEL_30; /*0x1010a52d2*/
      }
      else
      {
        if ( *(_QWORD *)(a2 + 136) == 1 ) /*0x1010a52a6*/
          goto LABEL_30; /*0x1010a52a6*/
        v14 = 0; /*0x1010a52a8*/
        while ( *(_BYTE *)(v12 + v14) != 47 ) /*0x1010a52b4*/
        {
          if ( v13 == ++v14 ) /*0x1010a52c0*/
            goto LABEL_30; /*0x1010a52c0*/
        }
      }
    }
    if ( *(_QWORD *)(a2 + 40) || *(_QWORD *)(a2 + 176) || *(_QWORD *)(a2 + 160) )
    {
LABEL_30:
      LODWORD(v8) = std::sys::pipe::unix::pipe::h1edaba1ec22a53e1(v68); /*0x1010a52d8*/
      if ( v68[0] == 1 ) /*0x1010a52e5*/
      {
        v15 = v69; /*0x1010a52e7*/
        goto LABEL_32; /*0x1010a52e7*/
      }
      v72[0] = v68[1]; /*0x1010a532b*/
      LODWORD(v73) = v69; /*0x1010a5331*/
      v54 = v69; /*0x1010a5334*/
      v16 = std::sys::env::unix::env_read_lock::hf14baef26d24c6e3(); /*0x1010a533f*/
      v18 = v17; /*0x1010a5342*/
      *(_QWORD *)&v60 = v16; /*0x1010a5345*/
      *((_QWORD *)&v60 + 1) = v17; /*0x1010a534c*/
      v19 = fork(); /*0x1010a5353*/
      if ( v19 == -1 ) /*0x1010a535b*/
      {
        *(_QWORD *)(a1 + 8) = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x1010a5477*/
        *(_DWORD *)a1 = 2; /*0x1010a547b*/
        core::ptr::drop_in_place$LT$std..sync..poison..rwlock..RwLockReadGuard$LT$$LP$$RP$$GT$$GT$::h54c183a434cdc661(&v60); /*0x1010a5488*/
        close_NOCANCEL((unsigned int)v73); /*0x1010a5490*/
        v27 = 1; /*0x1010a5495*/
        LODWORD(v8) = close_NOCANCEL((unsigned int)v72[0]); /*0x1010a54a8*/
        if ( v65[0] >= 2u ) /*0x1010a54b4*/
          goto LABEL_53; /*0x1010a54b4*/
        goto LABEL_58; /*0x1010a54b4*/
      }
      v20 = v19; /*0x1010a5361*/
      if ( !v19 )
      {
        _InterlockedOr64(&std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6, 0x8000000000000000LL); /*0x1010a59c0*/
        close_NOCANCEL((unsigned int)v72[0]); /*0x1010a59cb*/
        v46 = &v52; /*0x1010a59d9*/
        if ( v52 == 0x8000000000000000LL ) /*0x1010a59e0*/
          v46 = nullptr; /*0x1010a59e0*/
        v74 = (posix_spawnattr_t)std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::do_exec::h976183eb51629ece( /*0x1010a59f3*/
                                   a2,
                                   v65,
                                   v46);
        std::io::error::repr_bitpacked::decode_repr::h56b0ddf9c5f40854(v68, v74); /*0x1010a59fe*/
        v47 = _byteswap_ulong(v68[1]); /*0x1010a5a0a*/
        v48 = 369098752; /*0x1010a5a0c*/
        if ( !LOBYTE(v68[0]) ) /*0x1010a5a11*/
          v48 = v47; /*0x1010a5a11*/
        v75 = (posix_spawn_file_actions_t)(v48 | 0x58454F4E00000000LL); /*0x1010a5a16*/
        *(_QWORD *)v68 = std::sys::fd::unix::FileDesc::write::h2c5e3832a7da28ba(&v54, &v75, 8); /*0x1010a5a44*/
        *(_QWORD *)&v69 = v49; /*0x1010a5a48*/
        if ( !*(_QWORD *)v68 ) /*0x1010a5a4f*/
        {
          core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h057e2c4a0bb0e477(v68); /*0x1010a5a55*/
          _exit(1); /*0x1010a5a5f*/
        }
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330((__int64 *)&v69); /*0x1010a5a7d*/
        *(_QWORD *)v68 = std::io::Write::write_fmt::h210f0dd61642ec64(
                           &v64,
                           "fatal runtime error: assertion failed: output.write(&bytes).is_ok(), aborting\nwait() should either return Ok or panicshort read on the CLOEXEC pipestack backtrace:\nnote: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.\n__rust_end_short_backtrace__rust_begin_short_backtraces");
        if ( *(_QWORD *)v68 ) /*0x1010a5aa1*/
          core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330((__int64 *)v68); /*0x1010a5aa7*/
        std::process::abort::h38b4a24325fecca0(); /*0x1010a5aac*/
      }
      *(_QWORD *)v68 = v16; /*0x1010a536c*/
      *(_QWORD *)&v69 = v18; /*0x1010a5370*/
      core::ptr::drop_in_place$LT$std..sync..poison..rwlock..RwLockReadGuard$LT$$LP$$RP$$GT$$GT$::h54c183a434cdc661(v68); /*0x1010a5378*/
      close_NOCANCEL((unsigned int)v73); /*0x1010a5380*/
      v76 = v20; /*0x1010a5385*/
      LODWORD(v75) = 0; /*0x1010a5389*/
      v61 = 0; /*0x1010a5390*/
      v21 = v72[0]; /*0x1010a53ac*/
      while ( 1 )
      {
        v22 = read(v21, &v61, 8u); /*0x1010a53bb*/
        if ( v22 != -1 ) /*0x1010a53c4*/
          break; /*0x1010a53c4*/
        v23 = *__error(); /*0x1010a53cf*/
        if ( v23 != 4 )
        {
          v74 = (posix_spawnattr_t)((v23 << 32) | 2); /*0x1010a53e0*/
          v24 = (__int64)v68; /*0x1010a53e4*/
          std::sys::process::unix::unix::Process::wait::h98092d72b7bc0bee(v68, &v75); /*0x1010a53ef*/
          if ( v68[0] )
          {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330((__int64 *)&v69); /*0x1010a5971*/
            v25 = &off_1015AE490; /*0x1010a5976*/
            v24 = 79; /*0x1010a597d*/
            v26 = "wait() should either return Ok or panicshort read on the CLOEXEC pipestack backtrace:\nnote: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.\n__rust_end_short_backtrace__rust_begin_short_backtraces";
          }
          else
          {
            *(_QWORD *)v68 = &v74; /*0x1010a5402*/
            *(_QWORD *)&v69 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::h528ffc6c2c4a75e3; /*0x1010a540d*/
            v25 = &off_1015AE478; /*0x1010a5411*/
            v26 = (char *)&unk_101258A68; /*0x1010a5418*/
          }
          core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)v26, v24, (__int64)v25); /*0x1010a598c*/
        }
      }
      if ( !v22 ) /*0x1010a54c2*/
      {
        LODWORD(v69) = v76; /*0x1010a557b*/
        *(_QWORD *)v68 = v75; /*0x1010a5582*/
        HIDWORD(v69) = *(_DWORD *)&v63[8]; /*0x1010a558c*/
        *(_QWORD *)((char *)&v69 + 4) = *(_QWORD *)v63; /*0x1010a5596*/
        *(_QWORD *)a1 = v75; /*0x1010a559a*/
        *(_OWORD *)(a1 + 8) = v69; /*0x1010a55a9*/
        v27 = 0; /*0x1010a55ad*/
        LODWORD(v8) = close_NOCANCEL(v21); /*0x1010a55b2*/
        if ( v65[0] >= 2u ) /*0x1010a55be*/
        {
LABEL_53:
          LODWORD(v8) = close_NOCANCEL((unsigned int)v65[1]); /*0x1010a5541*/
          if ( v66[0] >= 2u ) /*0x1010a5553*/
            goto LABEL_54; /*0x1010a5553*/
          goto LABEL_59; /*0x1010a5553*/
        }
LABEL_58:
        if ( v66[0] >= 2u ) /*0x1010a55c7*/
        {
LABEL_54:
          LODWORD(v8) = close_NOCANCEL((unsigned int)v66[1]); /*0x1010a5555*/
          if ( v67[0] >= 2u ) /*0x1010a5564*/
            goto LABEL_55; /*0x1010a5564*/
          goto LABEL_60; /*0x1010a5564*/
        }
LABEL_59:
        if ( v67[0] >= 2u ) /*0x1010a55cd*/
        {
LABEL_55:
          LODWORD(v8) = close_NOCANCEL((unsigned int)v67[1]); /*0x1010a5566*/
          if ( !v27 ) /*0x1010a5570*/
            goto LABEL_67; /*0x1010a5570*/
          goto LABEL_61; /*0x1010a5570*/
        }
LABEL_60:
        if ( !v27 ) /*0x1010a55d1*/
          goto LABEL_67; /*0x1010a55d1*/
LABEL_61:
        if ( *(_DWORD *)v63 != -1 ) /*0x1010a55dc*/
          LODWORD(v8) = close_NOCANCEL(*(unsigned int *)v63); /*0x1010a55de*/
        if ( *(_DWORD *)&v63[4] != -1 ) /*0x1010a55ec*/
          LODWORD(v8) = close_NOCANCEL(*(unsigned int *)&v63[4]); /*0x1010a55ee*/
        v29 = *(unsigned int *)&v63[8]; /*0x1010a55f3*/
        if ( *(_DWORD *)&v63[8] != -1 ) /*0x1010a55fc*/
          goto LABEL_66; /*0x1010a55fc*/
LABEL_67:
        if ( v52 == 0x8000000000000000LL ) /*0x1010a560a*/
          return (int)v8; /*0x1010a560a*/
        goto LABEL_3; /*0x1010a560a*/
      }
      if ( v22 == 8 )
      {
        v51[0] = (char *)&v61 + 4; /*0x1010a54d9*/
        v51[1] = 4; /*0x1010a54e0*/
        if ( HIDWORD(v61) != 1480937294 ) /*0x1010a54f5*/
        {
          *(_QWORD *)v68 = &v61; /*0x1010a58cc*/
          *(_QWORD *)&v69 = core::array::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$$u5b$T$u3b$$u20$N$u5d$$GT$::fmt::h01053e290551e0c5; /*0x1010a58d7*/
          ((void (__fastcall __noreturn *)(_QWORD, void *, _QWORD *, void *, sigset_t *, char **))core::panicking::assert_failed::ha6eea04c6f932cd1)( /*0x1010a58fd*/
            0,
            &unk_1013F6A18,
            v51,
            &unk_101258A3E,
            v68,
            &off_1015AE430);
        }
        v28 = v61; /*0x1010a54fb*/
        std::sys::process::unix::unix::Process::wait::h98092d72b7bc0bee(v68, &v75); /*0x1010a550a*/
        if ( !v68[0] ) /*0x1010a5513*/
        {
          *(_QWORD *)(a1 + 8) = ((unsigned __int64)_byteswap_ulong(v28) << 32) | 2; /*0x1010a5524*/
          *(_DWORD *)a1 = 2; /*0x1010a5528*/
          v27 = 1; /*0x1010a552e*/
          LODWORD(v8) = close_NOCANCEL(v21); /*0x1010a5533*/
          if ( v65[0] >= 2u ) /*0x1010a553f*/
            goto LABEL_53; /*0x1010a553f*/
          goto LABEL_58; /*0x1010a553f*/
        }
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330((__int64 *)&v69); /*0x1010a5a68*/
        v43 = &off_1015AE418; /*0x1010a5a6d*/
      }
      else
      {
        std::sys::process::unix::unix::Process::wait::h98092d72b7bc0bee(v68, &v75); /*0x1010a594d*/
        if ( !v68[0] )
        {
          v43 = &off_1015AE448; /*0x1010a5958*/
          v44 = 61; /*0x1010a595f*/
          v45 = "short read on the CLOEXEC pipestack backtrace:\nnote: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.\n__rust_end_short_backtrace__rust_begin_short_backtraces";
          goto LABEL_119; /*0x1010a596b*/
        }
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330((__int64 *)&v69); /*0x1010a5997*/
        v43 = &off_1015AE460; /*0x1010a599c*/
      }
      v44 = 79; /*0x1010a59a3*/
      v45 = "wait() should either return Ok or panicshort read on the CLOEXEC pipestack backtrace:\nnote: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.\n__rust_end_short_backtrace__rust_begin_short_backtraces";
LABEL_119:
      core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)v45, v44, (__int64)v43); /*0x1010a59af*/
    }
    v10 = *(_QWORD *)(a2 + 144); /*0x1010a51ce*/
    if ( v10 ) /*0x1010a51d8*/
    {
      if ( *(_BYTE *)(a2 + 194) == 1 ) /*0x1010a51e6*/
        goto LABEL_30; /*0x1010a51e6*/
      if ( std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h497ecc96202fe6a6 ) /*0x1010a51f6*/
      {
        v73 = *(_QWORD *)(a2 + 144); /*0x1010a51f8*/
        v62 = v9; /*0x1010a51fc*/
        *(_QWORD *)v72 = std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h497ecc96202fe6a6; /*0x1010a5203*/
        if ( std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h497ecc96202fe6a6 != 1 ) /*0x1010a520b*/
          goto LABEL_70; /*0x1010a520b*/
        v11 = dlsym((void *)0xFFFFFFFFFFFFFFFELL, "posix_spawn_file_actions_addchdir_np"); /*0x1010a521f*/
        std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h497ecc96202fe6a6 = (__int64)v11; /*0x1010a5224*/
        v9 = v62; /*0x1010a522e*/
        v10 = v73; /*0x1010a5235*/
        if ( v11 ) /*0x1010a5239*/
          goto LABEL_22; /*0x1010a5239*/
      }
      if ( !std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h5412a99f64799224 ) /*0x1010a5245*/
        goto LABEL_30; /*0x1010a5245*/
      v73 = v10; /*0x1010a524b*/
      v62 = v9; /*0x1010a524f*/
      *(_QWORD *)v72 = std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h5412a99f64799224; /*0x1010a5256*/
      if ( std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h5412a99f64799224 == 1 ) /*0x1010a525e*/
      {
        v11 = dlsym((void *)0xFFFFFFFFFFFFFFFELL, "posix_spawn_file_actions_addchdir"); /*0x1010a5272*/
        std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::posix_spawn::get_posix_spawn_addchdir::DLSYM::h5412a99f64799224 = (__int64)v11; /*0x1010a5277*/
        if ( !v11 ) /*0x1010a5281*/
          goto LABEL_30; /*0x1010a5281*/
LABEL_22:
        *(_QWORD *)v72 = v11; /*0x1010a5283*/
      }
    }
    else
    {
      v73 = 0; /*0x1010a5615*/
      v62 = v9; /*0x1010a5619*/
      *(_QWORD *)v72 = 0; /*0x1010a5620*/
    }
LABEL_70:
    v30 = *(_DWORD *)(a2 + 64); /*0x1010a5628*/
    v31 = *(_DWORD *)(a2 + 68); /*0x1010a562c*/
    LODWORD(v8) = posix_spawnattr_init(&v74); /*0x1010a5634*/
    v15 = (unsigned int)v8; /*0x1010a5639*/
    if ( (_DWORD)v8 ) /*0x1010a563e*/
    {
LABEL_73:
      v15 = (v15 << 32) | 2; /*0x1010a5667*/
      goto LABEL_32; /*0x1010a566f*/
    }
    v55 = v30; /*0x1010a5640*/
    v56 = v31; /*0x1010a5647*/
    v32 = posix_spawn_file_actions_init(&v75); /*0x1010a5652*/
    if ( v32 ) /*0x1010a5659*/
    {
      v15 = v32; /*0x1010a565b*/
      LODWORD(v8) = posix_spawnattr_destroy(&v74); /*0x1010a5662*/
      goto LABEL_73; /*0x1010a5662*/
    }
    v57 = v65[0]; /*0x1010a567a*/
    if ( v65[0] ) /*0x1010a5682*/
    {
      v33 = posix_spawn_file_actions_adddup2(&v75, v65[1], 0); /*0x1010a5690*/
      if ( v33 ) /*0x1010a5697*/
        goto LABEL_94; /*0x1010a5697*/
    }
    v58 = v66[0]; /*0x1010a56a3*/
    if ( v66[0] ) /*0x1010a56ab*/
    {
      v33 = posix_spawn_file_actions_adddup2(&v75, v66[1], 1); /*0x1010a56bc*/
      if ( v33 ) /*0x1010a56c3*/
        goto LABEL_94; /*0x1010a56c3*/
    }
    v59 = v67[0]; /*0x1010a56cc*/
    if ( v67[0] ) /*0x1010a56d4*/
    {
      v33 = posix_spawn_file_actions_adddup2(&v75, v67[1], 2); /*0x1010a56e2*/
      if ( v33 ) /*0x1010a56e9*/
        goto LABEL_94; /*0x1010a56e9*/
    }
    if ( *(_QWORD *)v72 ) /*0x1010a56f6*/
    {
      v33 = (*(__int64 (__fastcall **)(posix_spawn_file_actions_t *, __int64))v72)(&v75, v73); /*0x1010a5700*/
      if ( v33 ) /*0x1010a5704*/
        goto LABEL_94; /*0x1010a5704*/
    }
    if ( v55 ) /*0x1010a5711*/
    {
      v33 = posix_spawnattr_setpgroup(&v74, v56); /*0x1010a571d*/
      if ( v33 ) /*0x1010a5724*/
        goto LABEL_94; /*0x1010a5724*/
      v34 = 2; /*0x1010a5726*/
    }
    else
    {
      v34 = 0; /*0x1010a572d*/
    }
    if ( std::sys::pal::unix::ON_BROKEN_PIPE_FLAG_USED::h400ba948a5d9c250 ) /*0x1010a5739*/
    {
      if ( *(_BYTE *)(a2 + 193) ) /*0x1010a573b*/
      {
LABEL_88:
        v35 = 0; /*0x1010a5745*/
        goto LABEL_96; /*0x1010a5748*/
      }
    }
    else
    {
      if ( sigemptyset(v68) == -1 || sigaddset(v68, 13) == -1 ) /*0x1010a5769*/
      {
        v15 = (unsigned int)*__error(); /*0x1010a57d5*/
        goto LABEL_95; /*0x1010a57d8*/
      }
      v36 = posix_spawnattr_setsigdefault(&v74, v68); /*0x1010a5773*/
      v15 = v36; /*0x1010a5778*/
      if ( v36 ) /*0x1010a577d*/
      {
LABEL_95:
        v15 = (v15 << 32) | 2; /*0x1010a57a5*/
        v35 = 1; /*0x1010a57ad*/
LABEL_96:
        posix_spawn_file_actions_destroy(&v75); /*0x1010a57b0*/
        LODWORD(v8) = posix_spawnattr_destroy(&v74); /*0x1010a57bd*/
        if ( v35 ) /*0x1010a57c5*/
        {
LABEL_32:
          *(_QWORD *)(a1 + 8) = v15; /*0x1010a52eb*/
          *(_DWORD *)a1 = 2; /*0x1010a52ef*/
          if ( v65[0] >= 2u ) /*0x1010a52fc*/
          {
            LODWORD(v8) = close_NOCANCEL((unsigned int)v65[1]); /*0x1010a542a*/
            if ( v66[0] < 2u ) /*0x1010a5440*/
            {
LABEL_34:
              if ( v67[0] < 2u ) /*0x1010a531d*/
                goto LABEL_61; /*0x1010a531d*/
LABEL_45:
              LODWORD(v8) = close_NOCANCEL((unsigned int)v67[1]); /*0x1010a545b*/
              goto LABEL_61; /*0x1010a5463*/
            }
          }
          else if ( v66[0] < 2u ) /*0x1010a5313*/
          {
            goto LABEL_34; /*0x1010a5313*/
          }
          LODWORD(v8) = close_NOCANCEL((unsigned int)v66[1]); /*0x1010a544c*/
          if ( v67[0] < 2u ) /*0x1010a5455*/
            goto LABEL_61; /*0x1010a5455*/
          goto LABEL_45; /*0x1010a5455*/
        }
        goto LABEL_30; /*0x1010a57c5*/
      }
      v34 |= 4u; /*0x1010a5783*/
      if ( *(_BYTE *)(a2 + 193) ) /*0x1010a5787*/
        goto LABEL_88; /*0x1010a578f*/
    }
    v33 = posix_spawnattr_setflags(&v74, v34); /*0x1010a5799*/
    if ( v33 ) /*0x1010a57a0*/
    {
LABEL_94:
      v15 = v33; /*0x1010a57a2*/
      goto LABEL_95; /*0x1010a57a2*/
    }
    *(_QWORD *)v68 = std::sys::env::unix::env_read_lock::hf14baef26d24c6e3(); /*0x1010a57df*/
    *(_QWORD *)&v69 = v37; /*0x1010a57e3*/
    if ( v62 == 0x8000000000000000LL ) /*0x1010a57f8*/
      v38 = _NSGetEnviron(); /*0x1010a57fa*/
    else
      v38 = (char ***)&v53; /*0x1010a5801*/
    v39 = *v38; /*0x1010a5808*/
    DWORD2(v60) = 0; /*0x1010a5812*/
    LODWORD(v60) = 0; /*0x1010a581c*/
    v40 = posix_spawnp((pid_t *)&v60 + 2, *(const char **)(a2 + 128), &v75, &v74, *(char *const **)(a2 + 8), v39); /*0x1010a5839*/
    if ( v40 ) /*0x1010a5840*/
    {
      v15 = v40; /*0x1010a5842*/
      core::ptr::drop_in_place$LT$std..sync..poison..rwlock..RwLockReadGuard$LT$$LP$$RP$$GT$$GT$::h54c183a434cdc661(v68); /*0x1010a5849*/
      goto LABEL_95; /*0x1010a584e*/
    }
    v41 = v60; /*0x1010a5853*/
    v42 = *(_QWORD *)((char *)&v60 + 4); /*0x1010a585a*/
    core::ptr::drop_in_place$LT$std..sync..poison..rwlock..RwLockReadGuard$LT$$LP$$RP$$GT$$GT$::h54c183a434cdc661(v68); /*0x1010a5865*/
    posix_spawn_file_actions_destroy(&v75); /*0x1010a586e*/
    posix_spawnattr_destroy(&v74); /*0x1010a5877*/
    if ( v41 == 2 ) /*0x1010a5880*/
      goto LABEL_30; /*0x1010a5880*/
    *(_DWORD *)(a1 + 20) = *(_DWORD *)&v63[8]; /*0x1010a588c*/
    LODWORD(v8) = *(_DWORD *)v63; /*0x1010a588f*/
    *(_QWORD *)(a1 + 12) = *(_QWORD *)v63; /*0x1010a5896*/
    *(_DWORD *)a1 = v41; /*0x1010a589a*/
    *(_QWORD *)(a1 + 4) = v42; /*0x1010a589d*/
    if ( v57 >= 2 ) /*0x1010a58a8*/
    {
      LODWORD(v8) = close_NOCANCEL((unsigned int)v65[1]); /*0x1010a590d*/
      if ( v58 < 2 ) /*0x1010a5919*/
      {
LABEL_107:
        if ( v59 < 2 ) /*0x1010a58c4*/
          goto LABEL_67; /*0x1010a58c4*/
        goto LABEL_112; /*0x1010a58c4*/
      }
    }
    else if ( v58 < 2 ) /*0x1010a58b1*/
    {
      goto LABEL_107; /*0x1010a58b1*/
    }
    LODWORD(v8) = close_NOCANCEL((unsigned int)v66[1]); /*0x1010a5921*/
    if ( v59 < 2 ) /*0x1010a5937*/
      goto LABEL_67; /*0x1010a5937*/
LABEL_112:
    v29 = (unsigned int)v67[1]; /*0x1010a593d*/
LABEL_66:
    LODWORD(v8) = close_NOCANCEL(v29); /*0x1010a55fe*/
    goto LABEL_67; /*0x1010a55fe*/
  }
  v8 = &off_1015AE400; /*0x1010a50e0*/
  *(_QWORD *)(a1 + 8) = &off_1015AE400; /*0x1010a50e7*/
  *(_DWORD *)a1 = 2; /*0x1010a50eb*/
  if ( v52 != 0x8000000000000000LL ) /*0x1010a50f8*/
LABEL_3:
    LODWORD(v8) = core::ptr::drop_in_place$LT$std..sys..process..unix..common..cstring_array..CStringArray$GT$::hb064a43e4fd31baa(&v52); /*0x1010a50fa*/
  return (int)v8; /*0x1010a5106*/
}