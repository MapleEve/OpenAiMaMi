// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/atomic_write
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::atomic_write::write_atomic_stream::he893f81f88ddc9a3 @ 0x100724760 size=3546 lines=630 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::write_atomic_stream::he893f81f88ddc9a3(
        void *a1,
        size_t a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r15
  _QWORD *v13; // r13
  __int64 v14; // r12
  _QWORD *v15; // r15
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // bl
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // r12
  _QWORD *v28; // r12
  __int64 v29; // r13
  _QWORD *v30; // r15
  unsigned __int64 v31; // rbx
  __int16 v32; // bx
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  char v44; // al
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r12
  bool v48; // dl
  unsigned __int64 v49; // r15
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // r8
  unsigned __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  char v62; // al
  __int64 v63; // rdx
  __int64 v64; // rdx
  char *v65; // rsi
  __int64 v66; // rax
  __int64 v67; // [rsp+8h] [rbp-248h] BYREF
  __int64 v68; // [rsp+10h] [rbp-240h]
  __int64 v69; // [rsp+18h] [rbp-238h]
  _QWORD v70[3]; // [rsp+20h] [rbp-230h] BYREF
  __int64 v71; // [rsp+38h] [rbp-218h] BYREF
  void *v72; // [rsp+40h] [rbp-210h]
  size_t v73; // [rsp+48h] [rbp-208h]
  __int64 v74; // [rsp+50h] [rbp-200h]
  void *__s1; // [rsp+58h] [rbp-1F8h] BYREF
  _BYTE __n[25]; // [rsp+60h] [rbp-1F0h]
  __int64 v77; // [rsp+79h] [rbp-1D7h]
  _BYTE v78[15]; // [rsp+81h] [rbp-1CFh]
  __int16 v79; // [rsp+90h] [rbp-1C0h]
  char v80; // [rsp+92h] [rbp-1BEh]
  _QWORD *v81; // [rsp+98h] [rbp-1B8h] BYREF
  _BYTE v82[48]; // [rsp+A0h] [rbp-1B0h]
  __int16 v83; // [rsp+D0h] [rbp-180h]
  char v84; // [rsp+D2h] [rbp-17Eh]
  _QWORD *v85; // [rsp+130h] [rbp-120h] BYREF
  __int64 v86; // [rsp+138h] [rbp-118h]
  char v87; // [rsp+140h] [rbp-110h]
  _BYTE v88[39]; // [rsp+141h] [rbp-10Fh]
  __int16 v89; // [rsp+168h] [rbp-E8h]
  char v90; // [rsp+16Ah] [rbp-E6h]
  void *__s2; // [rsp+170h] [rbp-E0h] BYREF
  unsigned __int64 v92; // [rsp+178h] [rbp-D8h] BYREF
  _BYTE v93[17]; // [rsp+180h] [rbp-D0h]
  unsigned __int64 v94; // [rsp+191h] [rbp-BFh]
  _BYTE v95[15]; // [rsp+199h] [rbp-B7h]
  __int16 v96; // [rsp+1A8h] [rbp-A8h]
  char v97; // [rsp+1AAh] [rbp-A6h]
  __int128 v98; // [rsp+1B0h] [rbp-A0h] BYREF
  unsigned __int64 v99; // [rsp+1C0h] [rbp-90h]
  _BYTE v100[15]; // [rsp+1C8h] [rbp-88h]
  __int128 v101; // [rsp+1D8h] [rbp-78h] BYREF
  __int64 v102; // [rsp+1E8h] [rbp-68h]
  _BYTE v103[15]; // [rsp+1F0h] [rbp-60h]
  _QWORD *v104; // [rsp+200h] [rbp-50h] BYREF
  size_t v105; // [rsp+208h] [rbp-48h] BYREF
  void *v106; // [rsp+210h] [rbp-40h]
  size_t v107; // [rsp+218h] [rbp-38h]
  _DWORD v108[11]; // [rsp+224h] [rbp-2Ch] BYREF

  v105 = a2;
  v5 = std::path::Path::parent::h4c3ac26770731fbb(a1, a2);
  if ( !v5 )
    return std::io::error::Error::new::h2838dbd593bc6ec9(20, "atomic write: missing parent", 28, v7, v8);
  v9 = v5;
  v10 = v6;
  LOWORD(v81) = 511;
  BYTE2(v81) = 1;
  v11 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v81, v5, v6);
  if ( !v11 )
  {
    v74 = a3;
    codexmate_lib::core::relay::atomic_write::temp_file_stem::h548fc217101373fb(v70, a1, v105);
    LODWORD(__s2) = std::process::id::ha72f58ec62264e78();
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v81);
    v86 = *(_QWORD *)v82;
    v85 = v81;
    v81 = v70;
    *(_QWORD *)v82 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    *(_QWORD *)&v82[8] = &__s2;
    *(_QWORD *)&v82[16] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
    *(_QWORD *)&v82[24] = &v85;
    *(_QWORD *)&v82[32] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v67, &unk_101A33BAD, &v81);
    v12 = v68;
    std::path::Path::_join::hb1a495d4f06b13b8(&v71, v9, v10, v68, v69);
    if ( v67 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v67, 1);
    v106 = v72;
    v107 = v73;
    std::path::Path::components::he8b0f71a48373be5(&__s1, a1, v105);
    std::path::Path::components::he8b0f71a48373be5(&__s2, v106, v107);
    v13 = __s1;
    v14 = *(_QWORD *)__n;
    v15 = __s2;
    v16 = v92;
    if ( *(_QWORD *)__n == v92
      && (_BYTE)v79 == (_BYTE)v96
      && HIBYTE(v79) == 2
      && HIBYTE(v96) == 2
      && !memcmp(__s1, __s2, *(size_t *)__n) )
    {
      goto LABEL_15;
    }
    if ( __n[8] != 6 )
    {
      *(_QWORD *)&v103[7] = *(_QWORD *)&v78[7];
      *(_QWORD *)v103 = *(_QWORD *)v78;
      v102 = v77;
      v101 = *(_OWORD *)&__n[9];
    }
    v85 = v13;
    v86 = v14;
    v87 = __n[8];
    *(_OWORD *)v88 = v101;
    *(_QWORD *)&v88[16] = v102;
    *(_QWORD *)&v88[24] = *(_QWORD *)v103;
    *(_QWORD *)&v88[31] = *(_QWORD *)&v103[7];
    v89 = v79;
    v90 = v80;
    if ( v93[0] != 6 )
    {
      *(_QWORD *)&v100[7] = *(_QWORD *)&v95[7];
      *(_QWORD *)v100 = *(_QWORD *)v95;
      v99 = v94;
      v98 = *(_OWORD *)&v93[1];
    }
    v81 = v15;
    *(_QWORD *)v82 = v16;
    v82[8] = v93[0];
    *(_OWORD *)&v82[9] = v98;
    *(_OWORD *)&v82[25] = __PAIR128__(*(unsigned __int64 *)v100, v99);
    *(_QWORD *)&v82[40] = *(_QWORD *)&v100[7];
    v83 = v96;
    v84 = v97;
    if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v85, &v81) )
      goto LABEL_15;
    v21 = std::path::Path::parent::h4c3ac26770731fbb(a1, v105);
    v23 = v22;
    v24 = std::path::Path::parent::h4c3ac26770731fbb(v106, v107);
    v26 = v24;
    if ( v21 )
    {
      if ( v24 )
      {
        v27 = v25;
        std::path::Path::components::he8b0f71a48373be5(&__s1, v21, v23);
        std::path::Path::components::he8b0f71a48373be5(&__s2, v26, v27);
        v28 = __s1;
        v29 = *(_QWORD *)__n;
        v30 = __s2;
        v31 = v92;
        if ( *(_QWORD *)__n == v92
          && (_BYTE)v79 == (_BYTE)v96
          && HIBYTE(v79) == 2
          && HIBYTE(v96) == 2
          && !memcmp(__s1, __s2, *(size_t *)__n) )
        {
          goto LABEL_38;
        }
        if ( __n[8] != 6 )
        {
          *(_QWORD *)&v103[7] = *(_QWORD *)&v78[7];
          *(_QWORD *)v103 = *(_QWORD *)v78;
          v102 = v77;
          v101 = *(_OWORD *)&__n[9];
        }
        v85 = v28;
        v86 = v29;
        v87 = __n[8];
        *(_OWORD *)v88 = v101;
        *(_QWORD *)&v88[16] = v102;
        *(_QWORD *)&v88[24] = *(_QWORD *)v103;
        *(_QWORD *)&v88[31] = *(_QWORD *)&v103[7];
        v89 = v79;
        v90 = v80;
        if ( v93[0] != 6 )
        {
          *(_QWORD *)&v100[7] = *(_QWORD *)&v95[7];
          *(_QWORD *)v100 = *(_QWORD *)v95;
          v99 = v94;
          v98 = *(_OWORD *)&v93[1];
        }
        v81 = v30;
        *(_QWORD *)v82 = v31;
        v82[8] = v93[0];
        *(_OWORD *)&v82[9] = v98;
        *(_QWORD *)&v82[25] = v99;
        *(_QWORD *)&v82[33] = *(_QWORD *)v100;
        *(_QWORD *)&v82[40] = *(_QWORD *)&v100[7];
        v83 = v96;
        v84 = v97;
        if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v85, &v81) )
        {
LABEL_38:
          std::path::Path::to_path_buf::h73855ce4b54f7174(&v85, v106, v107);
          *(_DWORD *)&v88[7] = 2;
          LODWORD(v101) = 0;
          WORD2(v101) = 438;
          *(_DWORD *)((char *)&v101 + 6) = 256;
          WORD5(v101) = 256;
          std::sys::fs::metadata::h32fa16d3052ea535(&v81, a1, v105);
          if ( (_BYTE)v81 )
          {
            v32 = 438;
            if ( (v82[0] & 3) == 1 )
            {
              v33 = *(_QWORD *)v82 - 1LL;
              v34 = *(_QWORD *)(*(_QWORD *)v82 - 1LL);
              v35 = *(_QWORD *)(*(_QWORD *)v82 + 7LL);
              if ( *(_QWORD *)v35 )
                (*(void (__fastcall **)(__int64))v35)(v34);
              v36 = *(_QWORD *)(v35 + 8);
              if ( v36 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v36, *(_QWORD *)(v35 + 16));
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 24, 8);
            }
          }
          else
          {
            v32 = *(_WORD *)&v82[4] & 0x1FF;
          }
          WORD2(v101) = v32;
          std::fs::OpenOptions::_open::h1dad73452047b8aa(&v81, &v101, v106, v107);
          if ( (_DWORD)v81 == 1 )
          {
            v11 = *(_QWORD *)v82;
            goto LABEL_117;
          }
          v108[0] = HIDWORD(v81);
          codexmate_lib::core::relay::atomic_write::staging::FileIdentity::read::h54a8da684da3cbdd(&v81, v108);
          if ( (_DWORD)v81 == 2 )
          {
            v11 = *(_QWORD *)v82;
            goto LABEL_116;
          }
          __s1 = v81;
          *(_OWORD *)__n = *(_OWORD *)v82;
          *(_QWORD *)&v88[7] = v81;
          *(_OWORD *)&v88[15] = *(_OWORD *)v82;
          std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h4713940a170e673d(&v81, 0x2000, v108);
          codexmate_lib::core::sessions::history::HistoryPlan::export_header::h70eeaf2ab8ea0487(&__s2, v74);
          v104 = &v81;
          switch ( (char)__s2 )
          {
            case 0:
              v37 = *(_QWORD *)&v82[8];
              if ( (unsigned __int64)v81 - *(_QWORD *)&v82[8] >= 5 )
              {
                *(_DWORD *)(*(_QWORD *)v82 + *(_QWORD *)&v82[8]) = 1819047278;
                v38 = v37 + 4;
                goto LABEL_108;
              }
              v40 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h7bb1e9e9c69d9c09(
                      &v81,
                      &anon_4114c41c52614d982439c1a03d06b8ac_12,
                      4);
              goto LABEL_56;
            case 1:
              if ( BYTE1(__s2) )
              {
                v41 = *(_QWORD *)&v82[8];
                if ( (unsigned __int64)v81 - *(_QWORD *)&v82[8] >= 5 )
                {
                  *(_DWORD *)(*(_QWORD *)v82 + *(_QWORD *)&v82[8]) = 1702195828;
                  v38 = v41 + 4;
LABEL_108:
                  *(_QWORD *)&v82[8] = v38;
                  goto LABEL_109;
                }
                v64 = 4;
                v65 = "trueuuidemithideshow";
              }
              else
              {
                v60 = *(_QWORD *)&v82[8];
                if ( (unsigned __int64)v81 - *(_QWORD *)&v82[8] > 5 )
                {
                  v61 = *(_QWORD *)v82;
                  *(_BYTE *)(*(_QWORD *)v82 + *(_QWORD *)&v82[8] + 4LL) = 101;
                  *(_DWORD *)(v61 + v60) = 1936482662;
                  v38 = v60 + 5;
                  goto LABEL_108;
                }
                v64 = 5;
                v65 = (char *)&unk_1018C3B4B;
              }
              v40 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h7bb1e9e9c69d9c09(&v81, v65, v64);
LABEL_56:
              if ( !v40 )
              {
LABEL_109:
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&__s2);
                v11 = std::io::Write::write_fmt::h2b360ed38373f680(&v81, &anon_4114c41c52614d982439c1a03d06b8ac_188, 3);
                if ( !v11 )
                {
                  v11 = codexmate_lib::core::sessions::history::HistoryPlan::visit::hf314bb9a13408ec4(v74, &v81);
                  if ( !v11 )
                  {
                    v11 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::flush_buf::he79988fa54f0ea88(&v81);
                    _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9909fc504166f8f9(&v81);
LABEL_112:
                    if ( v81 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v82, v81, 1);
                    if ( !v11 )
                    {
                      v11 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(v108);
                      if ( !v11 )
                      {
                        close_NOCANCEL(v108[0]);
                        v11 = codexmate_lib::core::relay::atomic_write::staging::verify_owned::hdfab3393db9bec64(
                                v106,
                                v107,
                                &__s1);
                        if ( !v11 )
                        {
                          v62 = codexmate_lib::core::relay::atomic_write::replace_staged_file_report::hc386c7f34da234f0(
                                  v106,
                                  v107,
                                  a1,
                                  v105);
                          v11 = v63;
                          if ( (v62 & 1) == 0 )
                          {
                            *(_DWORD *)&v88[7] = 2;
                            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$GT$::hbf0780ad94c5f5f0(&v85);
                            v19 = 0;
                            goto LABEL_16;
                          }
                        }
LABEL_117:
                        _$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$u20$as$u20$core..ops..drop..Drop$GT$::drop::h132b19376813665f(&v85);
                        v19 = 1;
                        if ( v85 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v85, 1);
                        goto LABEL_16;
                      }
                    }
LABEL_116:
                    close_NOCANCEL(v108[0]);
                    goto LABEL_117;
                  }
                }
LABEL_111:
                _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9909fc504166f8f9(&v81);
                goto LABEL_112;
              }
LABEL_57:
              v39 = serde_json::error::Error::io::h4df820d482c0c826(v40);
              goto LABEL_105;
            case 2:
              v39 = _$LT$serde_json..number..Number$u20$as$u20$serde_core..ser..Serialize$GT$::serialize::h7f3f40656e57e40f(
                      &v92,
                      &v104);
              goto LABEL_104;
            case 3:
              v40 = serde_json::ser::format_escaped_str::h08ddebe5857b824d(
                      &v104,
                      &v105,
                      *(_QWORD *)v93,
                      *(_QWORD *)&v93[8]);
              goto LABEL_56;
            case 4:
              v39 = serde_core::ser::Serializer::collect_seq::haf2341e3e76b7bcd(&v104, &v92);
              goto LABEL_104;
            case 5:
              v42 = *(_QWORD *)&v93[8];
              v43 = *(_QWORD *)&v82[8];
              if ( (unsigned __int64)v81 - *(_QWORD *)&v82[8] < 2 )
              {
                v40 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h7bb1e9e9c69d9c09(
                        &v81,
                        &anon_4114c41c52614d982439c1a03d06b8ac_13,
                        1);
                if ( v40 )
                  goto LABEL_57;
              }
              else
              {
                *(_BYTE *)(*(_QWORD *)v82 + *(_QWORD *)&v82[8]) = 123;
                *(_QWORD *)&v82[8] = v43 + 1;
              }
              v44 = 1;
              if ( v42 )
                goto LABEL_67;
              v45 = *(_QWORD *)&v82[8];
              if ( (unsigned __int64)v81 - *(_QWORD *)&v82[8] < 2 )
              {
                v40 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h7bb1e9e9c69d9c09(
                        &v81,
                        &anon_4114c41c52614d982439c1a03d06b8ac_9,
                        1);
                if ( v40 )
                  goto LABEL_57;
              }
              else
              {
                *(_BYTE *)(*(_QWORD *)v82 + *(_QWORD *)&v82[8]) = 125;
                *(_QWORD *)&v82[8] = v45 + 1;
              }
              v44 = 0;
LABEL_67:
              LOBYTE(v98) = 0;
              BYTE1(v98) = v44;
              *((_QWORD *)&v98 + 1) = &v104;
              v46 = v92;
              v47 = *(_QWORD *)v93;
              v48 = v92 != 0;
              if ( !v92 )
                v42 = 0;
              v49 = 0;
              while ( v42-- != 0 )
              {
                if ( !v48 )
                  core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_4);
                if ( !v49 )
                {
                  if ( v47 )
                  {
                    v49 = v46;
                    if ( (v47 & 7) != 0 )
                    {
                      v51 = 0;
                      do
                      {
                        v49 = *(_QWORD *)(v49 + 632);
                        ++v51;
                      }
                      while ( (v47 & 7) != v51 );
                      v52 = v47 - v51;
                    }
                    else
                    {
                      v52 = v47;
                    }
                    if ( v47 >= 8 )
                    {
                      do
                      {
                        v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 632) + 632LL) + 632LL)
                                                                                        + 632LL)
                                                                            + 632LL)
                                                                + 632LL)
                                                    + 632LL)
                                        + 632LL);
                        v52 -= 8LL;
                      }
                      while ( v52 );
                    }
                  }
                  else
                  {
                    v49 = v46;
                  }
                  v47 = 0;
                  v46 = 0;
                }
                if ( v47 >= *(unsigned __int16 *)(v49 + 626) )
                {
                  do
                  {
                    v53 = *(_QWORD *)(v49 + 352);
                    if ( !v53 )
                      core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_745);
                    ++v46;
                    v54 = *(unsigned __int16 *)(v49 + 624);
                    v49 = *(_QWORD *)(v49 + 352);
                  }
                  while ( (unsigned __int16)v54 >= *(_WORD *)(v53 + 626) );
                }
                else
                {
                  v53 = v49;
                  v54 = v47;
                }
                if ( v46 )
                {
                  v55 = v53 + 8 * v54 + 640;
                  if ( (v46 & 7) != 0 )
                  {
                    v56 = 0;
                    do
                    {
                      v49 = *(_QWORD *)v55;
                      v55 = *(_QWORD *)v55 + 632LL;
                      ++v56;
                    }
                    while ( (v46 & 7) != v56 );
                    v57 = v46 - v56;
                  }
                  else
                  {
                    v57 = v46;
                  }
                  if ( v46 >= 8 )
                  {
                    do
                    {
                      v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v55 + 632LL)
                                                                                                  + 632LL)
                                                                                      + 632LL)
                                                                          + 632LL)
                                                              + 632LL)
                                                  + 632LL)
                                      + 632LL);
                      v55 = v49 + 632;
                      v57 -= 8LL;
                    }
                    while ( v57 );
                  }
                  v47 = 0;
                }
                else
                {
                  v47 = v54 + 1;
                  v49 = v53;
                }
                v39 = serde_core::ser::SerializeMap::serialize_entry::hab6d5083a48f0a48(
                        &v98,
                        v53 + 24 * v54 + 360,
                        v53 + 32 * v54);
                v48 = 1;
                v46 = 0;
                if ( v39 )
                  goto LABEL_105;
              }
              if ( (v98 & 1) != 0 )
                core::panicking::panic::h286e2dd5eab048be(&unk_1018C9E2A, 40, &off_101C01728);
              if ( !BYTE1(v98) )
                goto LABEL_103;
              v58 = **((_QWORD **)&v98 + 1);
              v59 = *(_QWORD *)(**((_QWORD **)&v98 + 1) + 16LL);
              if ( (unsigned __int64)(***((_QWORD ***)&v98 + 1) - v59) < 2 )
              {
                v66 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h7bb1e9e9c69d9c09(
                        v58,
                        &anon_4114c41c52614d982439c1a03d06b8ac_9,
                        1);
                if ( v66 )
                {
                  v39 = serde_json::error::Error::io::h4df820d482c0c826(v66);
LABEL_104:
                  if ( !v39 )
                    goto LABEL_109;
LABEL_105:
                  v11 = serde_json::error::_$LT$impl$u20$core..convert..From$LT$serde_json..error..Error$GT$$u20$for$u20$std..io..error..Error$GT$::from::ha95300ca2ad45b96(v39);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&__s2);
                  goto LABEL_111;
                }
              }
              else
              {
                *(_BYTE *)(*(_QWORD *)(v58 + 8) + v59) = 125;
                *(_QWORD *)(v58 + 16) = v59 + 1;
              }
LABEL_103:
              v39 = 0;
              goto LABEL_104;
          }
        }
      }
    }
    else if ( !v24 )
    {
      goto LABEL_38;
    }
LABEL_15:
    v11 = std::io::error::Error::new::h2838dbd593bc6ec9(20, &unk_1018C484F, 34, v17, v18);
    v19 = 1;
LABEL_16:
    if ( v71 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v71, 1);
    if ( v70[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70[1], v70[0], 1);
    if ( !v19 )
    {
      codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hb1198e95828e3009(v11);
      return 0;
    }
  }
  return v11;
}

// ===== codexmate_lib::core::relay::atomic_write::write_atomic_stream::hb022b0ac9fef4914 @ 0x100723ce0 size=2404 lines=363 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::write_atomic_stream::hb022b0ac9fef4914(
        void *a1,
        size_t a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rbx
  _QWORD *v11; // r13
  size_t v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r8
  char v17; // al
  size_t v18; // r14
  char v19; // r14
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  _QWORD *v27; // r12
  size_t v28; // r13
  _QWORD *v29; // rbx
  __int64 v30; // r14
  char v31; // al
  __int16 v32; // r14
  __int64 v33; // r13
  __int64 v34; // rbx
  __int64 v35; // r12
  __int64 v36; // rsi
  size_t v37; // r14
  _QWORD *v38; // r12
  __int64 v39; // rcx
  __int64 v40; // r8
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // [rsp+0h] [rbp-240h] BYREF
  __int64 v44; // [rsp+8h] [rbp-238h]
  __int64 v45; // [rsp+10h] [rbp-230h]
  _QWORD v46[3]; // [rsp+18h] [rbp-228h] BYREF
  _QWORD v47[3]; // [rsp+30h] [rbp-210h] BYREF
  __int64 v48; // [rsp+48h] [rbp-1F8h]
  __int64 v49; // [rsp+50h] [rbp-1F0h]
  _QWORD *v50; // [rsp+58h] [rbp-1E8h] BYREF
  _BYTE v51[48]; // [rsp+60h] [rbp-1E0h]
  __int16 v52; // [rsp+90h] [rbp-1B0h]
  char v53; // [rsp+92h] [rbp-1AEh]
  void *__s1; // [rsp+F0h] [rbp-150h] BYREF
  size_t __n; // [rsp+F8h] [rbp-148h]
  char v56; // [rsp+100h] [rbp-140h]
  __int64 v57; // [rsp+101h] [rbp-13Fh]
  __int64 v58; // [rsp+109h] [rbp-137h]
  __int64 v59; // [rsp+111h] [rbp-12Fh]
  _BYTE v60[15]; // [rsp+119h] [rbp-127h]
  __int16 v61; // [rsp+128h] [rbp-118h]
  char v62; // [rsp+12Ah] [rbp-116h]
  void *__s2; // [rsp+130h] [rbp-110h] BYREF
  _BYTE v64[25]; // [rsp+138h] [rbp-108h]
  unsigned __int64 v65; // [rsp+151h] [rbp-EFh]
  _BYTE v66[15]; // [rsp+159h] [rbp-E7h]
  __int16 v67; // [rsp+168h] [rbp-D8h]
  char v68; // [rsp+16Ah] [rbp-D6h]
  _QWORD *v69; // [rsp+170h] [rbp-D0h] BYREF
  size_t v70; // [rsp+178h] [rbp-C8h]
  char v71; // [rsp+180h] [rbp-C0h]
  _BYTE v72[39]; // [rsp+181h] [rbp-BFh]
  __int16 v73; // [rsp+1A8h] [rbp-98h]
  char v74; // [rsp+1AAh] [rbp-96h]
  size_t v75; // [rsp+1B0h] [rbp-90h]
  __int64 v76; // [rsp+1B8h] [rbp-88h] BYREF
  __int64 v77; // [rsp+1C0h] [rbp-80h]
  __int64 v78; // [rsp+1C8h] [rbp-78h]
  _BYTE v79[15]; // [rsp+1D0h] [rbp-70h]
  __int128 v80; // [rsp+1E0h] [rbp-60h] BYREF
  unsigned __int64 v81; // [rsp+1F0h] [rbp-50h]
  _BYTE v82[15]; // [rsp+1F8h] [rbp-48h]
  size_t v83; // [rsp+208h] [rbp-38h]
  void *v84; // [rsp+210h] [rbp-30h]

  v49 = a3;
  v3 = std::path::Path::parent::h4c3ac26770731fbb(a1, a2);
  if ( !v3 )
    return std::io::error::Error::new::h2838dbd593bc6ec9(20, "atomic write: missing parent", 28, v5, v6);
  v7 = v3;
  v8 = v4;
  LOWORD(v50) = 511;
  BYTE2(v50) = 1;
  v9 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v50, v3, v4);
  if ( !v9 )
  {
    codexmate_lib::core::relay::atomic_write::temp_file_stem::h548fc217101373fb(v47, a1, a2);
    LODWORD(__s2) = std::process::id::ha72f58ec62264e78();
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v50);
    v70 = *(_QWORD *)v51;
    v69 = v50;
    v50 = v47;
    *(_QWORD *)v51 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    *(_QWORD *)&v51[8] = &__s2;
    *(_QWORD *)&v51[16] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
    *(_QWORD *)&v51[24] = &v69;
    *(_QWORD *)&v51[32] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v43, &unk_101A33BAD, &v50);
    v10 = v44;
    std::path::Path::_join::hb1a495d4f06b13b8(v46, v7, v8, v44, v45);
    if ( v43 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v43, 1);
    v84 = (void *)v46[1];
    v83 = v46[2];
    std::path::Path::components::he8b0f71a48373be5(&__s1, a1, a2);
    std::path::Path::components::he8b0f71a48373be5(&__s2, v84, v83);
    v75 = a2;
    v11 = __s1;
    v12 = __n;
    v13 = __s2;
    v14 = *(_QWORD *)v64;
    if ( __n == *(_QWORD *)v64
      && (_BYTE)v61 == (_BYTE)v67
      && HIBYTE(v61) == 2
      && HIBYTE(v67) == 2
      && !memcmp(__s1, __s2, __n) )
    {
      goto LABEL_15;
    }
    if ( v56 != 6 )
    {
      *(_QWORD *)&v79[7] = *(_QWORD *)&v60[7];
      *(_QWORD *)v79 = *(_QWORD *)v60;
      v78 = v59;
      v77 = v58;
      v76 = v57;
    }
    v69 = v11;
    v70 = v12;
    v71 = v56;
    *(_QWORD *)v72 = v76;
    *(_QWORD *)&v72[8] = v77;
    *(_QWORD *)&v72[16] = v78;
    *(_QWORD *)&v72[24] = *(_QWORD *)v79;
    *(_QWORD *)&v72[31] = *(_QWORD *)&v79[7];
    v73 = v61;
    v74 = v62;
    if ( v64[8] != 6 )
    {
      *(_QWORD *)&v82[7] = *(_QWORD *)&v66[7];
      *(_QWORD *)v82 = *(_QWORD *)v66;
      v81 = v65;
      v80 = *(_OWORD *)&v64[9];
    }
    v50 = v13;
    *(_QWORD *)v51 = v14;
    v51[8] = v64[8];
    *(_OWORD *)&v51[9] = v80;
    *(_OWORD *)&v51[25] = __PAIR128__(*(unsigned __int64 *)v82, v81);
    *(_QWORD *)&v51[40] = *(_QWORD *)&v82[7];
    v52 = v67;
    v53 = v68;
    v17 = core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v69, &v50);
    v18 = v75;
    if ( v17 )
      goto LABEL_15;
    v21 = std::path::Path::parent::h4c3ac26770731fbb(a1, v75);
    v23 = v22;
    v24 = std::path::Path::parent::h4c3ac26770731fbb(v84, v83);
    v48 = v25;
    v26 = v24;
    if ( v21 )
    {
      if ( v24 )
      {
        std::path::Path::components::he8b0f71a48373be5(&__s1, v21, v23);
        std::path::Path::components::he8b0f71a48373be5(&__s2, v26, v48);
        v27 = __s1;
        v28 = __n;
        v29 = __s2;
        v30 = *(_QWORD *)v64;
        if ( __n == *(_QWORD *)v64
          && (_BYTE)v61 == (_BYTE)v67
          && HIBYTE(v61) == 2
          && HIBYTE(v67) == 2
          && !memcmp(__s1, __s2, __n) )
        {
          v18 = v75;
          goto LABEL_40;
        }
        if ( v56 != 6 )
        {
          *(_QWORD *)&v79[7] = *(_QWORD *)&v60[7];
          *(_QWORD *)v79 = *(_QWORD *)v60;
          v78 = v59;
          v77 = v58;
          v76 = v57;
        }
        v69 = v27;
        v70 = v28;
        v71 = v56;
        *(_QWORD *)v72 = v76;
        *(_QWORD *)&v72[8] = v77;
        *(_QWORD *)&v72[16] = v78;
        *(_QWORD *)&v72[24] = *(_QWORD *)v79;
        *(_QWORD *)&v72[31] = *(_QWORD *)&v79[7];
        v73 = v61;
        v74 = v62;
        if ( v64[8] != 6 )
        {
          *(_QWORD *)&v82[7] = *(_QWORD *)&v66[7];
          *(_QWORD *)v82 = *(_QWORD *)v66;
          v81 = v65;
          v80 = *(_OWORD *)&v64[9];
        }
        v50 = v29;
        *(_QWORD *)v51 = v30;
        v51[8] = v64[8];
        *(_OWORD *)&v51[9] = v80;
        *(_QWORD *)&v51[25] = v81;
        *(_QWORD *)&v51[33] = *(_QWORD *)v82;
        *(_QWORD *)&v51[40] = *(_QWORD *)&v82[7];
        v52 = v67;
        v53 = v68;
        v31 = core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v69, &v50);
        v18 = v75;
        if ( v31 )
        {
LABEL_40:
          std::path::Path::to_path_buf::h73855ce4b54f7174(&v69, v84, v83);
          *(_DWORD *)&v72[7] = 2;
          LODWORD(v80) = 0;
          WORD2(v80) = 438;
          *(_DWORD *)((char *)&v80 + 6) = 256;
          WORD5(v80) = 256;
          std::sys::fs::metadata::h32fa16d3052ea535(&v50, a1, v18);
          if ( (_BYTE)v50 )
          {
            v32 = 438;
            if ( (v51[0] & 3) == 1 )
            {
              v33 = *(_QWORD *)v51 - 1LL;
              v34 = *(_QWORD *)(*(_QWORD *)v51 - 1LL);
              v35 = *(_QWORD *)(*(_QWORD *)v51 + 7LL);
              if ( *(_QWORD *)v35 )
                (*(void (__fastcall **)(__int64))v35)(v34);
              v36 = *(_QWORD *)(v35 + 8);
              if ( v36 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v36, *(_QWORD *)(v35 + 16));
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 24, 8);
            }
          }
          else
          {
            v32 = *(_WORD *)&v51[4] & 0x1FF;
          }
          WORD2(v80) = v32;
          std::fs::OpenOptions::_open::h1dad73452047b8aa(&v50, &v80, v84, v83);
          v37 = v75;
          if ( (_DWORD)v50 == 1 )
          {
            v9 = *(_QWORD *)v51;
            goto LABEL_60;
          }
          LODWORD(v76) = HIDWORD(v50);
          codexmate_lib::core::relay::atomic_write::staging::FileIdentity::read::h54a8da684da3cbdd(&v50, &v76);
          if ( (_DWORD)v50 == 2 )
          {
            v9 = *(_QWORD *)v51;
            goto LABEL_59;
          }
          __s2 = v50;
          *(_OWORD *)v64 = *(_OWORD *)v51;
          *(_QWORD *)&v72[7] = v50;
          *(_OWORD *)&v72[15] = *(_OWORD *)v51;
          std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h4713940a170e673d(&v50, 0x2000, &v76);
          __s1 = *(void **)v49;
          __n = (size_t)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          v9 = std::io::default_write_fmt::h90528101cc2b8ee4(&v50, &unk_101A380ED, &__s1);
          if ( !v9 )
          {
            v38 = *(_QWORD **)(v49 + 16);
            v9 = codexmate_lib::core::sessions::history::HistoryPlan::visit::h62f7c18baf8de588(
                   *(_QWORD *)(v49 + 8),
                   &v50,
                   v38);
            if ( !v9 )
            {
              if ( *v38 )
              {
                v9 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::flush_buf::he79988fa54f0ea88(&v50);
                _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9909fc504166f8f9(&v50);
LABEL_55:
                if ( v50 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v51, v50, 1);
                if ( !v9 )
                {
                  v9 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v76);
                  if ( !v9 )
                  {
                    close_NOCANCEL((unsigned int)v76);
                    v9 = codexmate_lib::core::relay::atomic_write::staging::verify_owned::hdfab3393db9bec64(
                           v84,
                           v83,
                           &__s2);
                    if ( !v9 )
                    {
                      v41 = codexmate_lib::core::relay::atomic_write::replace_staged_file_report::hc386c7f34da234f0(
                              v84,
                              v83,
                              a1,
                              v37);
                      v9 = v42;
                      if ( (v41 & 1) == 0 )
                      {
                        *(_DWORD *)&v72[7] = 2;
                        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$GT$::hbf0780ad94c5f5f0(&v69);
                        v19 = 0;
                        goto LABEL_16;
                      }
                    }
LABEL_60:
                    _$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$u20$as$u20$core..ops..drop..Drop$GT$::drop::h132b19376813665f(&v69);
                    v19 = 1;
                    if ( v69 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1);
                    goto LABEL_16;
                  }
                }
LABEL_59:
                close_NOCANCEL((unsigned int)v76);
                goto LABEL_60;
              }
              v9 = std::io::error::Error::new::h2838dbd593bc6ec9(21, &unk_1018C90B3, 42, v39, v40);
            }
          }
          _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9909fc504166f8f9(&v50);
          goto LABEL_55;
        }
      }
    }
    else if ( !v24 )
    {
      goto LABEL_40;
    }
LABEL_15:
    v9 = std::io::error::Error::new::h2838dbd593bc6ec9(20, &unk_1018C484F, 34, v15, v16);
    v19 = 1;
LABEL_16:
    if ( v46[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v46[0], 1);
    if ( v47[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47[1], v47[0], 1);
    if ( !v19 )
    {
      codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hb1198e95828e3009(v9);
      return 0;
    }
  }
  return v9;
}

// ===== codexmate_lib::core::relay::atomic_write::write_atomic_report::hf58adb6e14d92ad5 @ 0x100723360 size=2219 lines=318 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::write_atomic_report::hf58adb6e14d92ad5(
        void *a1,
        size_t a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rbx
  __int128 v11; // kr00_16
  void *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // al
  size_t v17; // r14
  __int64 result; // rax
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int128 v28; // kr10_16
  void *v29; // rbx
  __int64 v30; // r14
  char v31; // al
  __int16 v32; // r14
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // r13
  __int64 v36; // rsi
  size_t v37; // r14
  unsigned int v38; // r12d
  __int64 v39; // rbx
  __int64 v40; // [rsp+8h] [rbp-248h] BYREF
  __int64 v41; // [rsp+10h] [rbp-240h]
  __int64 v42; // [rsp+18h] [rbp-238h]
  _QWORD v43[3]; // [rsp+20h] [rbp-230h] BYREF
  _QWORD v44[3]; // [rsp+38h] [rbp-218h] BYREF
  __int64 v45; // [rsp+50h] [rbp-200h]
  __int64 v46; // [rsp+58h] [rbp-1F8h]
  __int64 v47; // [rsp+60h] [rbp-1F0h]
  _BYTE v48[56]; // [rsp+68h] [rbp-1E8h] BYREF
  __int16 v49; // [rsp+A0h] [rbp-1B0h]
  char v50; // [rsp+A2h] [rbp-1AEh]
  __int64 v51; // [rsp+100h] [rbp-150h]
  __int64 v52; // [rsp+108h] [rbp-148h]
  __int64 v53; // [rsp+110h] [rbp-140h]
  _BYTE v54[15]; // [rsp+118h] [rbp-138h]
  void *__s2; // [rsp+128h] [rbp-128h] BYREF
  _BYTE v56[25]; // [rsp+130h] [rbp-120h]
  unsigned __int64 v57; // [rsp+149h] [rbp-107h]
  _BYTE v58[15]; // [rsp+151h] [rbp-FFh]
  __int16 v59; // [rsp+160h] [rbp-F0h]
  char v60; // [rsp+162h] [rbp-EEh]
  __int128 __s1; // [rsp+168h] [rbp-E8h] BYREF
  char v62; // [rsp+178h] [rbp-D8h]
  __int64 v63; // [rsp+179h] [rbp-D7h]
  __int64 v64; // [rsp+181h] [rbp-CFh]
  __int64 v65; // [rsp+189h] [rbp-C7h]
  _BYTE v66[15]; // [rsp+191h] [rbp-BFh]
  __int16 v67; // [rsp+1A0h] [rbp-B0h]
  char v68; // [rsp+1A2h] [rbp-AEh]
  __int128 v69; // [rsp+1A8h] [rbp-A8h] BYREF
  char v70; // [rsp+1B8h] [rbp-98h]
  _BYTE v71[39]; // [rsp+1B9h] [rbp-97h]
  __int16 v72; // [rsp+1E0h] [rbp-70h]
  char v73; // [rsp+1E2h] [rbp-6Eh]
  size_t v74; // [rsp+1E8h] [rbp-68h]
  __int128 v75; // [rsp+1F0h] [rbp-60h] BYREF
  unsigned __int64 v76; // [rsp+200h] [rbp-50h]
  _BYTE v77[15]; // [rsp+208h] [rbp-48h]
  size_t v78; // [rsp+218h] [rbp-38h]
  void *v79; // [rsp+220h] [rbp-30h]

  v45 = a4;
  v46 = a3;
  v4 = std::path::Path::parent::h4c3ac26770731fbb(a1, a2);
  if ( !v4 )
  {
    std::io::error::Error::new::h2838dbd593bc6ec9(20, "atomic write: missing parent", 28, v6, v7);
    return 1;
  }
  v8 = v4;
  v9 = v5;
  *(_WORD *)v48 = 511;
  v48[2] = 1;
  if ( std::fs::DirBuilder::_create::h099c6e2853c95452(v48, v4, v5) )
    return 1;
  codexmate_lib::core::relay::atomic_write::temp_file_stem::h548fc217101373fb(v44, a1, a2);
  LODWORD(__s2) = std::process::id::ha72f58ec62264e78();
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v48);
  v69 = *(_OWORD *)v48;
  *(_QWORD *)v48 = v44;
  *(_QWORD *)&v48[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v48[16] = &__s2;
  *(_QWORD *)&v48[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
  *(_QWORD *)&v48[32] = &v69;
  *(_QWORD *)&v48[40] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v40, &unk_101A33BAD, v48);
  v10 = v41;
  std::path::Path::_join::hb1a495d4f06b13b8(v43, v8, v9, v41, v42);
  if ( v40 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v40, 1);
  v79 = (void *)v43[1];
  v78 = v43[2];
  std::path::Path::components::he8b0f71a48373be5(&__s1, a1, a2);
  std::path::Path::components::he8b0f71a48373be5(&__s2, v79, v78);
  v74 = a2;
  v11 = __s1;
  v12 = __s2;
  v13 = *(_QWORD *)v56;
  if ( *((_QWORD *)&__s1 + 1) == *(_QWORD *)v56
    && (_BYTE)v67 == (_BYTE)v59
    && HIBYTE(v67) == 2
    && HIBYTE(v59) == 2
    && !memcmp((const void *)__s1, __s2, *((size_t *)&__s1 + 1)) )
  {
    goto LABEL_15;
  }
  if ( v62 != 6 )
  {
    *(_QWORD *)&v54[7] = *(_QWORD *)&v66[7];
    *(_QWORD *)v54 = *(_QWORD *)v66;
    v53 = v65;
    v52 = v64;
    v51 = v63;
  }
  v69 = v11;
  v70 = v62;
  *(_QWORD *)v71 = v51;
  *(_QWORD *)&v71[8] = v52;
  *(_QWORD *)&v71[16] = v53;
  *(_QWORD *)&v71[24] = *(_QWORD *)v54;
  *(_QWORD *)&v71[31] = *(_QWORD *)&v54[7];
  v72 = v67;
  v73 = v68;
  if ( v56[8] != 6 )
  {
    *(_QWORD *)&v77[7] = *(_QWORD *)&v58[7];
    *(_QWORD *)v77 = *(_QWORD *)v58;
    v76 = v57;
    v75 = *(_OWORD *)&v56[9];
  }
  *(_QWORD *)v48 = v12;
  *(_QWORD *)&v48[8] = v13;
  v48[16] = v56[8];
  *(_OWORD *)&v48[17] = v75;
  *(_OWORD *)&v48[33] = __PAIR128__(*(unsigned __int64 *)v77, v76);
  *(_QWORD *)&v48[48] = *(_QWORD *)&v77[7];
  v49 = v59;
  v50 = v60;
  v16 = core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v69, v48);
  v17 = v74;
  if ( v16 )
    goto LABEL_15;
  v22 = std::path::Path::parent::h4c3ac26770731fbb(a1, v74);
  v24 = v23;
  v25 = std::path::Path::parent::h4c3ac26770731fbb(v79, v78);
  v47 = v26;
  v27 = v25;
  if ( !v22 )
  {
    if ( !v25 )
      goto LABEL_39;
LABEL_15:
    std::io::error::Error::new::h2838dbd593bc6ec9(20, &unk_1018C484F, 34, v14, v15);
    goto LABEL_16;
  }
  if ( !v25 )
    goto LABEL_15;
  std::path::Path::components::he8b0f71a48373be5(&__s1, v22, v24);
  std::path::Path::components::he8b0f71a48373be5(&__s2, v27, v47);
  v28 = __s1;
  v29 = __s2;
  v30 = *(_QWORD *)v56;
  if ( *((_QWORD *)&__s1 + 1) == *(_QWORD *)v56
    && (_BYTE)v67 == (_BYTE)v59
    && HIBYTE(v67) == 2
    && HIBYTE(v59) == 2
    && !memcmp((const void *)__s1, __s2, *((size_t *)&__s1 + 1)) )
  {
    v17 = v74;
    goto LABEL_39;
  }
  if ( v62 != 6 )
  {
    *(_QWORD *)&v54[7] = *(_QWORD *)&v66[7];
    *(_QWORD *)v54 = *(_QWORD *)v66;
    v53 = v65;
    v52 = v64;
    v51 = v63;
  }
  v69 = v28;
  v70 = v62;
  *(_QWORD *)v71 = v51;
  *(_QWORD *)&v71[8] = v52;
  *(_QWORD *)&v71[16] = v53;
  *(_QWORD *)&v71[24] = *(_QWORD *)v54;
  *(_QWORD *)&v71[31] = *(_QWORD *)&v54[7];
  v72 = v67;
  v73 = v68;
  if ( v56[8] != 6 )
  {
    *(_QWORD *)&v77[7] = *(_QWORD *)&v58[7];
    *(_QWORD *)v77 = *(_QWORD *)v58;
    v76 = v57;
    v75 = *(_OWORD *)&v56[9];
  }
  *(_QWORD *)v48 = v29;
  *(_QWORD *)&v48[8] = v30;
  v48[16] = v56[8];
  *(_OWORD *)&v48[17] = v75;
  *(_QWORD *)&v48[33] = v76;
  *(_QWORD *)&v48[41] = *(_QWORD *)v77;
  *(_QWORD *)&v48[48] = *(_QWORD *)&v77[7];
  v49 = v59;
  v50 = v60;
  v31 = core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v69, v48);
  v17 = v74;
  if ( !v31 )
    goto LABEL_15;
LABEL_39:
  std::path::Path::to_path_buf::h73855ce4b54f7174(&v69, v79, v78);
  *(_DWORD *)&v71[7] = 2;
  LODWORD(__s1) = 0;
  WORD2(__s1) = 438;
  *(_DWORD *)((char *)&__s1 + 6) = 256;
  WORD5(__s1) = 256;
  std::sys::fs::metadata::h32fa16d3052ea535(v48, a1, v17);
  if ( v48[0] )
  {
    v32 = 438;
    if ( (v48[8] & 3) == 1 )
    {
      v33 = *(_QWORD *)&v48[8] - 1LL;
      v34 = *(_QWORD *)(*(_QWORD *)&v48[8] - 1LL);
      v35 = *(_QWORD *)(*(_QWORD *)&v48[8] + 7LL);
      if ( *(_QWORD *)v35 )
        (*(void (__fastcall **)(__int64))v35)(v34);
      v36 = *(_QWORD *)(v35 + 8);
      if ( v36 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v36, *(_QWORD *)(v35 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 24, 8);
    }
  }
  else
  {
    v32 = *(_WORD *)&v48[12] & 0x1FF;
  }
  WORD2(__s1) = v32;
  std::fs::OpenOptions::_open::h1dad73452047b8aa(v48, &__s1, v79, v78);
  v37 = v74;
  if ( *(_DWORD *)v48 == 1 )
    goto LABEL_53;
  v38 = *(_DWORD *)&v48[4];
  LODWORD(v75) = *(_DWORD *)&v48[4];
  codexmate_lib::core::relay::atomic_write::staging::FileIdentity::read::h54a8da684da3cbdd(v48, &v75);
  if ( *(_DWORD *)v48 == 2 )
    goto LABEL_52;
  __s2 = *(void **)v48;
  *(_OWORD *)v56 = *(_OWORD *)&v48[8];
  *(_QWORD *)&v71[7] = *(_QWORD *)v48;
  *(_OWORD *)&v71[15] = *(_OWORD *)&v48[8];
  if ( std::io::Write::write_all::hd103f1d0f39942d7(&v75, v46, v45) )
  {
    v38 = v75;
LABEL_52:
    close_NOCANCEL(v38);
    goto LABEL_53;
  }
  v39 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v75);
  v38 = v75;
  if ( v39 )
    goto LABEL_52;
  close_NOCANCEL((unsigned int)v75);
  if ( codexmate_lib::core::relay::atomic_write::staging::verify_owned::hdfab3393db9bec64(v79, v78, &__s2)
    || (codexmate_lib::core::relay::atomic_write::replace_staged_file_report::hc386c7f34da234f0(v79, v78, a1, v37) & 1) != 0 )
  {
LABEL_53:
    _$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$u20$as$u20$core..ops..drop..Drop$GT$::drop::h132b19376813665f(&v69);
    if ( (_QWORD)v69 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v69 + 1), v69, 1);
LABEL_16:
    result = 1;
    v19 = v43[0];
    if ( !v43[0] )
      goto LABEL_18;
    goto LABEL_17;
  }
  *(_DWORD *)&v71[7] = 2;
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$GT$::hbf0780ad94c5f5f0(&v69);
  result = 0;
  v19 = v43[0];
  if ( v43[0] )
  {
LABEL_17:
    v20 = result;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v19, 1);
    result = v20;
  }
LABEL_18:
  if ( v44[0] )
  {
    v21 = result;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44[1], v44[0], 1);
    return v21;
  }
  return result;
}

// ===== codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hcd723884b82d3047 @ 0x1007259c0 size=2200 lines=309 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hcd723884b82d3047(
        void *a1,
        size_t a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rbx
  __int128 v11; // kr00_16
  void *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // al
  size_t v17; // r14
  __int64 result; // rax
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int128 v28; // kr10_16
  void *v29; // rbx
  __int64 v30; // r14
  char v31; // al
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // r13
  __int64 v35; // rsi
  unsigned int v36; // r12d
  __int64 v37; // rbx
  __int64 v38; // [rsp+8h] [rbp-248h] BYREF
  __int64 v39; // [rsp+10h] [rbp-240h]
  __int64 v40; // [rsp+18h] [rbp-238h]
  _QWORD v41[3]; // [rsp+20h] [rbp-230h] BYREF
  _QWORD v42[3]; // [rsp+38h] [rbp-218h] BYREF
  __int64 v43; // [rsp+50h] [rbp-200h]
  __int64 v44; // [rsp+58h] [rbp-1F8h]
  __int64 v45; // [rsp+60h] [rbp-1F0h]
  _BYTE v46[56]; // [rsp+68h] [rbp-1E8h] BYREF
  __int16 v47; // [rsp+A0h] [rbp-1B0h]
  char v48; // [rsp+A2h] [rbp-1AEh]
  size_t v49; // [rsp+100h] [rbp-150h]
  __int64 v50; // [rsp+108h] [rbp-148h]
  __int64 v51; // [rsp+110h] [rbp-140h]
  __int64 v52; // [rsp+118h] [rbp-138h]
  _BYTE v53[15]; // [rsp+120h] [rbp-130h]
  void *__s2; // [rsp+130h] [rbp-120h] BYREF
  _BYTE v55[25]; // [rsp+138h] [rbp-118h]
  unsigned __int64 v56; // [rsp+151h] [rbp-FFh]
  _BYTE v57[15]; // [rsp+159h] [rbp-F7h]
  __int16 v58; // [rsp+168h] [rbp-E8h]
  char v59; // [rsp+16Ah] [rbp-E6h]
  __int128 __s1; // [rsp+170h] [rbp-E0h] BYREF
  char v61; // [rsp+180h] [rbp-D0h]
  __int64 v62; // [rsp+181h] [rbp-CFh]
  __int64 v63; // [rsp+189h] [rbp-C7h]
  __int64 v64; // [rsp+191h] [rbp-BFh]
  _BYTE v65[15]; // [rsp+199h] [rbp-B7h]
  __int16 v66; // [rsp+1A8h] [rbp-A8h]
  char v67; // [rsp+1AAh] [rbp-A6h]
  __int128 v68; // [rsp+1B0h] [rbp-A0h] BYREF
  char v69; // [rsp+1C0h] [rbp-90h]
  _BYTE v70[39]; // [rsp+1C1h] [rbp-8Fh]
  __int16 v71; // [rsp+1E8h] [rbp-68h]
  char v72; // [rsp+1EAh] [rbp-66h]
  __int128 v73; // [rsp+1F0h] [rbp-60h] BYREF
  unsigned __int64 v74; // [rsp+200h] [rbp-50h]
  _BYTE v75[15]; // [rsp+208h] [rbp-48h]
  size_t v76; // [rsp+218h] [rbp-38h]
  void *v77; // [rsp+220h] [rbp-30h]

  v43 = a4;
  v44 = a3;
  v4 = std::path::Path::parent::h4c3ac26770731fbb(a1, a2);
  if ( !v4 )
  {
    std::io::error::Error::new::h2838dbd593bc6ec9(20, "atomic write: missing parent", 28, v6, v7);
    return 1;
  }
  v8 = v4;
  v9 = v5;
  *(_WORD *)v46 = 511;
  v46[2] = 1;
  if ( std::fs::DirBuilder::_create::h099c6e2853c95452(v46, v4, v5) )
    return 1;
  codexmate_lib::core::relay::atomic_write::temp_file_stem::h548fc217101373fb(v42, a1, a2);
  LODWORD(__s2) = std::process::id::ha72f58ec62264e78();
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v46);
  v68 = *(_OWORD *)v46;
  *(_QWORD *)v46 = v42;
  *(_QWORD *)&v46[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v46[16] = &__s2;
  *(_QWORD *)&v46[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
  *(_QWORD *)&v46[32] = &v68;
  *(_QWORD *)&v46[40] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v38, &unk_101A33BAD, v46);
  v10 = v39;
  std::path::Path::_join::hb1a495d4f06b13b8(v41, v8, v9, v39, v40);
  if ( v38 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v38, 1);
  v77 = (void *)v41[1];
  v76 = v41[2];
  std::path::Path::components::he8b0f71a48373be5(&__s1, a1, a2);
  std::path::Path::components::he8b0f71a48373be5(&__s2, v77, v76);
  v49 = a2;
  v11 = __s1;
  v12 = __s2;
  v13 = *(_QWORD *)v55;
  if ( *((_QWORD *)&__s1 + 1) == *(_QWORD *)v55
    && (_BYTE)v66 == (_BYTE)v58
    && HIBYTE(v66) == 2
    && HIBYTE(v58) == 2
    && !memcmp((const void *)__s1, __s2, *((size_t *)&__s1 + 1)) )
  {
    goto LABEL_15;
  }
  if ( v61 != 6 )
  {
    *(_QWORD *)&v53[7] = *(_QWORD *)&v65[7];
    *(_QWORD *)v53 = *(_QWORD *)v65;
    v52 = v64;
    v51 = v63;
    v50 = v62;
  }
  v68 = v11;
  v69 = v61;
  *(_QWORD *)v70 = v50;
  *(_QWORD *)&v70[8] = v51;
  *(_QWORD *)&v70[16] = v52;
  *(_QWORD *)&v70[24] = *(_QWORD *)v53;
  *(_QWORD *)&v70[31] = *(_QWORD *)&v53[7];
  v71 = v66;
  v72 = v67;
  if ( v55[8] != 6 )
  {
    *(_QWORD *)&v75[7] = *(_QWORD *)&v57[7];
    *(_QWORD *)v75 = *(_QWORD *)v57;
    v74 = v56;
    v73 = *(_OWORD *)&v55[9];
  }
  *(_QWORD *)v46 = v12;
  *(_QWORD *)&v46[8] = v13;
  v46[16] = v55[8];
  *(_OWORD *)&v46[17] = v73;
  *(_OWORD *)&v46[33] = __PAIR128__(*(unsigned __int64 *)v75, v74);
  *(_QWORD *)&v46[48] = *(_QWORD *)&v75[7];
  v47 = v58;
  v48 = v59;
  v16 = core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v68, v46);
  v17 = v49;
  if ( v16 )
    goto LABEL_15;
  v22 = std::path::Path::parent::h4c3ac26770731fbb(a1, v49);
  v24 = v23;
  v25 = std::path::Path::parent::h4c3ac26770731fbb(v77, v76);
  v45 = v26;
  v27 = v25;
  if ( !v22 )
  {
    if ( !v25 )
      goto LABEL_39;
    goto LABEL_15;
  }
  if ( !v25 )
    goto LABEL_15;
  std::path::Path::components::he8b0f71a48373be5(&__s1, v22, v24);
  std::path::Path::components::he8b0f71a48373be5(&__s2, v27, v45);
  v28 = __s1;
  v29 = __s2;
  v30 = *(_QWORD *)v55;
  if ( *((_QWORD *)&__s1 + 1) == *(_QWORD *)v55
    && (_BYTE)v66 == (_BYTE)v58
    && HIBYTE(v66) == 2
    && HIBYTE(v58) == 2
    && !memcmp((const void *)__s1, __s2, *((size_t *)&__s1 + 1)) )
  {
    v17 = v49;
    goto LABEL_39;
  }
  if ( v61 != 6 )
  {
    *(_QWORD *)&v53[7] = *(_QWORD *)&v65[7];
    *(_QWORD *)v53 = *(_QWORD *)v65;
    v52 = v64;
    v51 = v63;
    v50 = v62;
  }
  v68 = v28;
  v69 = v61;
  *(_QWORD *)v70 = v50;
  *(_QWORD *)&v70[8] = v51;
  *(_QWORD *)&v70[16] = v52;
  *(_QWORD *)&v70[24] = *(_QWORD *)v53;
  *(_QWORD *)&v70[31] = *(_QWORD *)&v53[7];
  v71 = v66;
  v72 = v67;
  if ( v55[8] != 6 )
  {
    *(_QWORD *)&v75[7] = *(_QWORD *)&v57[7];
    *(_QWORD *)v75 = *(_QWORD *)v57;
    v74 = v56;
    v73 = *(_OWORD *)&v55[9];
  }
  *(_QWORD *)v46 = v29;
  *(_QWORD *)&v46[8] = v30;
  v46[16] = v55[8];
  *(_OWORD *)&v46[17] = v73;
  *(_QWORD *)&v46[33] = v74;
  *(_QWORD *)&v46[41] = *(_QWORD *)v75;
  *(_QWORD *)&v46[48] = *(_QWORD *)&v75[7];
  v47 = v58;
  v48 = v59;
  v31 = core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v68, v46);
  v17 = v49;
  if ( !v31 )
  {
LABEL_15:
    std::io::error::Error::new::h2838dbd593bc6ec9(20, &unk_1018C484F, 34, v14, v15);
    goto LABEL_16;
  }
LABEL_39:
  std::path::Path::to_path_buf::h73855ce4b54f7174(&v68, v77, v76);
  *(_DWORD *)&v70[7] = 2;
  LODWORD(__s1) = 0;
  WORD2(__s1) = 438;
  *(_DWORD *)((char *)&__s1 + 6) = 256;
  WORD5(__s1) = 256;
  std::sys::fs::metadata::h32fa16d3052ea535(v46, a1, v17);
  if ( v46[0] && (v46[8] & 3) == 1 )
  {
    v32 = *(_QWORD *)&v46[8] - 1LL;
    v33 = *(_QWORD *)(*(_QWORD *)&v46[8] - 1LL);
    v34 = *(_QWORD *)(*(_QWORD *)&v46[8] + 7LL);
    if ( *(_QWORD *)v34 )
      (*(void (__fastcall **)(__int64))v34)(v33);
    v35 = *(_QWORD *)(v34 + 8);
    if ( v35 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v35, *(_QWORD *)(v34 + 16));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 24, 8);
  }
  WORD2(__s1) = 384;
  std::fs::OpenOptions::_open::h1dad73452047b8aa(v46, &__s1, v77, v76);
  if ( *(_DWORD *)v46 == 1 )
    goto LABEL_52;
  v36 = *(_DWORD *)&v46[4];
  LODWORD(v73) = *(_DWORD *)&v46[4];
  codexmate_lib::core::relay::atomic_write::staging::FileIdentity::read::h54a8da684da3cbdd(v46, &v73);
  if ( *(_DWORD *)v46 == 2 )
    goto LABEL_51;
  __s2 = *(void **)v46;
  *(_OWORD *)v55 = *(_OWORD *)&v46[8];
  *(_QWORD *)&v70[7] = *(_QWORD *)v46;
  *(_OWORD *)&v70[15] = *(_OWORD *)&v46[8];
  if ( std::io::Write::write_all::hd103f1d0f39942d7(&v73, v44, v43) )
  {
    v36 = v73;
LABEL_51:
    close_NOCANCEL(v36);
    goto LABEL_52;
  }
  v37 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v73);
  v36 = v73;
  if ( v37 )
    goto LABEL_51;
  close_NOCANCEL((unsigned int)v73);
  if ( codexmate_lib::core::relay::atomic_write::staging::verify_owned::hdfab3393db9bec64(v77, v76, &__s2)
    || (codexmate_lib::core::relay::atomic_write::replace_staged_file_report::hc386c7f34da234f0(v77, v76, a1, v17) & 1) != 0 )
  {
LABEL_52:
    _$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$u20$as$u20$core..ops..drop..Drop$GT$::drop::h132b19376813665f(&v68);
    if ( (_QWORD)v68 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v68 + 1), v68, 1);
LABEL_16:
    result = 1;
    v19 = v41[0];
    if ( !v41[0] )
      goto LABEL_18;
    goto LABEL_17;
  }
  *(_DWORD *)&v70[7] = 2;
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$GT$::hbf0780ad94c5f5f0(&v68);
  result = 0;
  v19 = v41[0];
  if ( v41[0] )
  {
LABEL_17:
    v20 = result;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v19, 1);
    result = v20;
  }
LABEL_18:
  if ( v42[0] )
  {
    v21 = result;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42[1], v42[0], 1);
    return v21;
  }
  return result;
}

// ===== codexmate_lib::core::relay::atomic_write::confirm_existing_sync::h1a5d96fb8a7894a3 @ 0x100725690 size=552 lines=114 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::confirm_existing_sync::h1a5d96fb8a7894a3(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  void *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // [rsp+0h] [rbp-F0h] BYREF
  unsigned int v18; // [rsp+4h] [rbp-ECh]
  unsigned __int64 v19; // [rsp+8h] [rbp-E8h]
  __int64 v20; // [rsp+10h] [rbp-E0h]
  int v21; // [rsp+98h] [rbp-58h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-50h]
  __int64 v23; // [rsp+A8h] [rbp-48h]
  int v24; // [rsp+B4h] [rbp-3Ch] BYREF
  __int16 v25; // [rsp+B8h] [rbp-38h]
  int v26; // [rsp+BAh] [rbp-36h]
  __int16 v27; // [rsp+BEh] [rbp-32h]
  unsigned int v28; // [rsp+C0h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+C4h] [rbp-2Ch]

  std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v17, a1, a2);
  result = v19;
  if ( v17 != 1 )
  {
    v5 = v19 & 0xF00000000000LL;
    if ( (v19 & 0xF00000000000LL) == 0x800000000000LL )
    {
      v5 = HIWORD(v19);
      if ( HIWORD(v19) == 1 )
      {
        v6 = v20;
        v7 = v19;
        v21 = 0;
        v22 = (int)v19;
        v23 = v20;
        v24 = 0;
        v25 = 438;
        v26 = 1;
        v27 = 0;
        std::fs::OpenOptions::_open::h1dad73452047b8aa(&v17, &v24, a1, a2);
        if ( v17 == 1 )
          return v19;
        v29 = v18;
        v28 = v18;
        std::fs::File::metadata::h408606eff73040af(&v17, &v28);
        v9 = v19;
        if ( v17 == 1 )
          goto LABEL_20;
        v10 = v19 & 0xFFFF000000000000LL;
        LOBYTE(v10) = (v19 & 0xFFFF000000000000LL) == 0x1000000000000LL;
        if ( ((unsigned __int8)v10 & ((WORD2(v19) & 0xF000) != 40960 && SWORD2(v19) < -28672)) != 0 )
        {
          v11 = 19;
          v12 = &unk_1018C488B;
          LOBYTE(v10) = 21;
          if ( v7 << 32 == v19 << 32 && v20 == v6 )
          {
            v9 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v28);
            if ( v9 )
              goto LABEL_20;
            v9 = codexmate_lib::core::relay::atomic_write::staging::verify_owned::hdfab3393db9bec64(a1, a2, &v21);
            if ( v9 )
              goto LABEL_20;
            v13 = std::path::Path::parent::h4c3ac26770731fbb(a1, a2);
            if ( v13 )
            {
              v15 = codexmate_lib::core::relay::atomic_write::sync_parent_dir::h2c0464b5b468f30a(v13, v14);
              close_NOCANCEL(v29);
              return v15;
            }
            v11 = 26;
            v12 = &unk_1018C4871;
            LOBYTE(v10) = 20;
          }
          v16 = std::io::error::Error::new::h2838dbd593bc6ec9((unsigned __int8)v10, v12, v11, v10, v8);
        }
        else
        {
          v16 = std::io::error::Error::new::h2838dbd593bc6ec9(
                  21,
                  "file identity changed or is not a single regular filex-api-keyanthropic-version2023-06-01last_idmodel "
                  "list pagination did not advance",
                  53,
                  v10,
                  v8);
        }
        v9 = v16;
LABEL_20:
        close_NOCANCEL(v29);
        return v9;
      }
    }
    return std::io::error::Error::new::h2838dbd593bc6ec9(
             21,
             "file identity changed or is not a single regular filex-api-keyanthropic-version2023-06-01last_idmodel list "
             "pagination did not advance",
             53,
             v5,
             v3);
  }
  return result;
}

// ===== codexmate_lib::core::relay::atomic_write::removal::remove_file_report::he4acf789bf0d185c @ 0x100b6c130 size=346 lines=76 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::removal::remove_file_report::he4acf789bf0d185c(
        void *__src,
        size_t __n)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r15
  char v9; // cl
  __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // r14d
  unsigned int v18; // [rsp+8h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+Ch] [rbp-44h]
  int v20; // [rsp+1Ch] [rbp-34h] BYREF
  __int16 v21; // [rsp+20h] [rbp-30h]
  int v22; // [rsp+22h] [rbp-2Eh]
  __int16 v23; // [rsp+26h] [rbp-2Ah]

  v3 = std::path::Path::parent::h4c3ac26770731fbb(__src, __n);
  LOBYTE(v6) = v3 == 0 || v5 == 0;
  if ( (_BYTE)v6 == 1 )
    goto LABEL_11;
  v7 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n);
  if ( v7 )
  {
    v8 = v7;
    v9 = std::io::error::Error::kind::hbe3dd139aa56fd1b(v7);
    result = 1;
    if ( v9 )
      return result;
    if ( (v8 & 3) == 1 )
    {
      v11 = v8 - 1;
      v12 = *(_QWORD *)(v8 - 1);
      v13 = *(_QWORD *)(v8 + 7);
      if ( *(_QWORD *)v13 )
        (*(void (__fastcall **)(__int64))v13)(v12);
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24, 8);
    }
  }
  v15 = std::path::Path::parent::h4c3ac26770731fbb(__src, __n);
  v6 = v16;
  if ( v15 == 0 || v16 == 0 )
  {
LABEL_11:
    std::io::error::Error::new::h2838dbd593bc6ec9(20, &anon_74e223d3d0fe38e0d3241a6bd44aa3e1_126, 35, v6, v4);
    return 1;
  }
  else
  {
    v20 = 0;
    v21 = 438;
    v22 = 1;
    v23 = 0;
    std::fs::OpenOptions::_open::h1dad73452047b8aa(&v18, &v20, v15, v16);
    if ( v18 != 1 )
    {
      v17 = v19;
      v18 = v19;
      std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v18);
      close_NOCANCEL(v17);
    }
    return 0;
  }
}

// ===== codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hb1198e95828e3009 @ 0x100722ea0 size=312 lines=46 =====
void __fastcall codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hb1198e95828e3009(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rsi
  _QWORD v5[12]; // [rsp+0h] [rbp-A0h] BYREF
  _QWORD v6[3]; // [rsp+60h] [rbp-40h] BYREF
  char v7; // [rsp+7Eh] [rbp-22h] BYREF
  char v8; // [rsp+7Fh] [rbp-21h] BYREF

  if ( a1 )
  {
    v6[2] = a1;
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v8 = std::io::error::Error::kind::hbe3dd139aa56fd1b(a1);
      v6[0] = &v8;
      v6[1] = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Debug$GT$::fmt::hc444154466c62606;
      v5[6] = 2;
      v5[7] = &anon_4114c41c52614d982439c1a03d06b8ac_296;
      v5[8] = 40;
      v5[10] = &anon_4114c41c52614d982439c1a03d06b8ac_293;
      v5[11] = v6;
      v5[0] = 0;
      v5[1] = &anon_4114c41c52614d982439c1a03d06b8ac_296;
      v5[2] = 40;
      v5[3] = 0;
      v5[4] = "src/core/relay/atomic_write.rs";
      v5[5] = 30;
      v5[9] = 0x2300000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v7, v5, v1);
    }
    if ( (a1 & 3) == 1 )
    {
      v2 = *(_QWORD *)(a1 - 1);
      v3 = *(_QWORD *)(a1 + 7);
      if ( *(_QWORD *)v3 )
        (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(a1 - 1));
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v4, *(_QWORD *)(v3 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1 - 1, 24, 8);
    }
  }
}

// ===== codexmate_lib::core::relay::atomic_write::staging::remove_owned::h0544457268e8d2ae @ 0x100b6c410 size=278 lines=52 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::staging::remove_owned::h0544457268e8d2ae(
        void *__src,
        size_t __n,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  _BYTE v11[8]; // [rsp+8h] [rbp-B8h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-B0h]
  __int64 v13; // [rsp+18h] [rbp-A8h]

  std::sys::fs::symlink_metadata::hd69903fe66faddbd(v11, __src, __n);
  v6 = v12;
  if ( v11[0] )
  {
    if ( v12 )
    {
      if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v12) )
        return v6;
      goto LABEL_11;
    }
    return std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n);
  }
  if ( v12 >> 44 == 24 && !*(_BYTE *)a3 && (int)v12 == *(_QWORD *)(a3 + 8) && v13 == *(_QWORD *)(a3 + 16) )
    return std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n);
  v6 = std::io::error::Error::new::h2838dbd593bc6ec9(
         21,
         "file identity changed or is not a single regular filex-api-keyanthropic-version2023-06-01last_idmodel list pagi"
         "nation did not advance",
         53,
         v4,
         v5);
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v6) )
    return v6;
LABEL_11:
  if ( (v6 & 3) == 1 )
  {
    v7 = *(_QWORD *)(v6 - 1);
    v8 = *(_QWORD *)(v6 + 7);
    if ( *(_QWORD *)v8 )
      (*(void (__fastcall **)(_QWORD))v8)(*(_QWORD *)(v6 - 1));
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6 - 1, 24, 8);
  }
  return 0;
}

// ===== codexmate_lib::core::relay::atomic_write::temp_file_stem::h548fc217101373fb @ 0x100723120 size=250 lines=62 =====
_QWORD *__fastcall codexmate_lib::core::relay::atomic_write::temp_file_stem::h548fc217101373fb(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v9; // [rsp+8h] [rbp-38h] BYREF
  char *v10; // [rsp+10h] [rbp-30h]
  __int64 v11; // [rsp+18h] [rbp-28h]
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h]
  __int64 v14; // [rsp+30h] [rbp-10h]

  v3 = std::path::Path::file_name::hf6c2daad91e50ebf(a2, a3);
  if ( v3 )
  {
    core::str::converts::from_utf8::hb32deb9559450f6e(&v9, v3);
    v4 = 6;
    if ( !(_BYTE)v9 )
      v4 = v11;
    v5 = (char *)&unk_1018C4849;
    if ( !(_BYTE)v9 )
      v5 = v10;
  }
  else
  {
    v5 = (char *)&unk_1018C4849;
    v4 = 6;
  }
  v9 = v5;
  v10 = &v5[v4];
  v11 = 48;
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hc0af177ec59ff14e(
    &v12,
    &v9);
  if ( v14 )
  {
    a1[2] = v14;
    v6 = v12;
    a1[1] = v13;
    *a1 = v6;
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v12);
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v7 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
    *(_WORD *)(v7 + 4) = 26989;
    *(_DWORD *)v7 = 1634560353;
    *a1 = 6;
    a1[1] = v7;
    a1[2] = 6;
    if ( v12 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1);
  }
  return a1;
}

// ===== codexmate_lib::core::relay::atomic_write::replace_staged_file_report::hc386c7f34da234f0 @ 0x1007258d0 size=218 lines=49 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::replace_staged_file_report::hc386c7f34da234f0(
        void *__src,
        size_t __n,
        void *a3,
        size_t a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  unsigned int v12; // r14d
  __int64 v13; // [rsp+0h] [rbp-50h]
  unsigned int v14; // [rsp+8h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+Ch] [rbp-44h]
  int v16; // [rsp+1Ch] [rbp-34h] BYREF
  __int16 v17; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+22h] [rbp-2Eh]
  __int16 v19; // [rsp+26h] [rbp-2Ah]

  v6 = std::path::Path::parent::h4c3ac26770731fbb(a3, a4);
  if ( !v6 )
  {
    std::io::error::Error::new::h2838dbd593bc6ec9(
      20,
      "atomic replace: missing parentatomic write: missing parent",
      30,
      v8,
      v9);
    return 1;
  }
  v10 = v6;
  v13 = v7;
  if ( std::sys::fs::rename::h7934e6142c921014(__src, __n, a3, a4) )
    return 1;
  v16 = 0;
  v17 = 438;
  v18 = 1;
  v19 = 0;
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v14, &v16, v10, v13);
  if ( v14 != 1 )
  {
    v12 = v15;
    v14 = v15;
    std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v14);
    close_NOCANCEL(v12);
  }
  return 0;
}

// ===== codexmate_lib::core::relay::atomic_write::staging::FileIdentity::read::h54a8da684da3cbdd @ 0x100b6c360 size=163 lines=40 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::staging::FileIdentity::read::h54a8da684da3cbdd(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+0h] [rbp-A0h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-98h]
  __int64 v10; // [rsp+10h] [rbp-90h]

  std::fs::File::metadata::h408606eff73040af(&v8, a2);
  v3 = v9;
  if ( v8 == 1 )
    goto LABEL_6;
  v4 = WORD2(v9) & 0xF000;
  LOBYTE(v4) = (_DWORD)v4 != 40960;
  if ( ((unsigned __int8)v4 & (SWORD2(v9) < -28672)) == 0 || (v4 = HIWORD(v9), HIWORD(v9) != 1) )
  {
    v3 = std::io::error::Error::new::h2838dbd593bc6ec9(
           21,
           "file identity changed or is not a single regular filex-api-keyanthropic-version2023-06-01last_idmodel list pa"
           "gination did not advance",
           53,
           v4,
           v2);
LABEL_6:
    *(_QWORD *)(a1 + 8) = v3;
    *(_DWORD *)a1 = 2;
    return a1;
  }
  v5 = v10;
  v6 = v9;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v5;
  return a1;
}

// ===== codexmate_lib::core::relay::atomic_write::staging::verify_owned::hdfab3393db9bec64 @ 0x100b6c560 size=159 lines=38 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::staging::verify_owned::hdfab3393db9bec64(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // [rsp+0h] [rbp-A0h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-98h]
  __int64 v9; // [rsp+10h] [rbp-90h]

  std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v7, a1, a2);
  result = v8;
  if ( v7 != 1 )
  {
    v6 = v8 & 0xF00000000000LL;
    if ( (v8 & 0xF00000000000LL) == 0x800000000000LL
      && (v6 = HIWORD(v8), HIWORD(v8) == 1)
      && !*(_BYTE *)a3
      && (int)v8 == *(_QWORD *)(a3 + 8)
      && v9 == *(_QWORD *)(a3 + 16) )
    {
      return 0;
    }
    else
    {
      return std::io::error::Error::new::h2838dbd593bc6ec9(
               21,
               "file identity changed or is not a single regular filex-api-keyanthropic-version2023-06-01last_idmodel lis"
               "t pagination did not advance",
               53,
               v6,
               v4);
    }
  }
  return result;
}

// ===== codexmate_lib::core::relay::atomic_write::Publication::require_sync::hb09f8d8c93f5e10a @ 0x100723030 size=150 lines=27 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::Publication::require_sync::hb09f8d8c93f5e10a(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rsi

  if ( !a1 )
    return 0;
  v1 = std::io::error::Error::kind::hbe3dd139aa56fd1b(a1);
  v4 = std::io::error::Error::new::h2838dbd593bc6ec9(v1, &anon_4114c41c52614d982439c1a03d06b8ac_297, 83, v2, v3);
  if ( (a1 & 3) == 1 )
  {
    v5 = *(_QWORD *)(a1 - 1);
    v6 = *(_QWORD *)(a1 + 7);
    if ( *(_QWORD *)v6 )
      (*(void (__fastcall **)(__int64))v6)(v5);
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1 - 1, 24, 8);
  }
  return v4;
}

// ===== codexmate_lib::core::relay::atomic_write::staging::FileIdentity::read_directory::h2e40971802767f80 @ 0x100b6c2d0 size=141 lines=38 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::staging::FileIdentity::read_directory::h2e40971802767f80(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+8h] [rbp-98h]
  __int64 v10; // [rsp+10h] [rbp-90h]

  std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v8, a2, a3);
  v4 = v9;
  if ( v8 == 1 )
    goto LABEL_5;
  if ( (v9 & 0xF00000000000LL) != 0x400000000000LL )
  {
    v4 = std::io::error::Error::new::h2838dbd593bc6ec9(
           21,
           "file identity changed or is not a single regular filex-api-keyanthropic-version2023-06-01last_idmodel list pa"
           "gination did not advance",
           53,
           v9 & 0xF00000000000LL,
           v3);
LABEL_5:
    *(_QWORD *)(a1 + 8) = v4;
    *(_DWORD *)a1 = 2;
    return a1;
  }
  v5 = v10;
  v6 = v9;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v5;
  return a1;
}

// ===== codexmate_lib::core::relay::atomic_write::sync_parent_dir::h2c0464b5b468f30a @ 0x100723240 size=109 lines=25 =====
__int64 __fastcall codexmate_lib::core::relay::atomic_write::sync_parent_dir::h2c0464b5b468f30a(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  unsigned int v5; // [rsp+0h] [rbp-30h] BYREF
  unsigned int v6; // [rsp+4h] [rbp-2Ch]
  __int64 v7; // [rsp+8h] [rbp-28h]
  int v8; // [rsp+14h] [rbp-1Ch] BYREF
  __int16 v9; // [rsp+18h] [rbp-18h]
  int v10; // [rsp+1Ah] [rbp-16h]
  __int16 v11; // [rsp+1Eh] [rbp-12h]

  v8 = 0;
  v9 = 438;
  v10 = 1;
  v11 = 0;
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v5, &v8, a1, a2);
  if ( v5 == 1 )
    return v7;
  v3 = v6;
  v5 = v6;
  v4 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v5);
  close_NOCANCEL(v3);
  return v4;
}

