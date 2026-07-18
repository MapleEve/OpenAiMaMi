// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13process_shape 0x1009ad600 d=2
__int64 __fastcall codexmate_lib::platform::process::codex_macos_main_process_pid::h9d83424917c4220f(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // r15d
  char *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // r8
  unsigned __int8 *v15; // rcx
  char v16; // si
  unsigned __int8 *v17; // rdi
  unsigned __int8 *v18; // r14
  unsigned int v19; // esi
  int v20; // r8d
  int v21; // r10d
  int v22; // r9d
  unsigned int v23; // edi
  unsigned __int8 *v24; // rax
  size_t v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  _BYTE *v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // esi
  __int64 v35; // rcx
  __int64 v36; // rsi
  unsigned int v37; // eax
  int v38; // eax
  unsigned int v39; // kr00_4
  unsigned int v40; // edi
  bool v41; // cf
  __int64 v42; // [rsp+8h] [rbp-198h] BYREF
  __int64 v43; // [rsp+10h] [rbp-190h]
  _QWORD v44[5]; // [rsp+18h] [rbp-188h] BYREF
  char v45; // [rsp+40h] [rbp-160h]
  __int16 v46; // [rsp+48h] [rbp-158h]
  __int64 v47; // [rsp+D0h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-C8h]
  __int64 v49; // [rsp+E0h] [rbp-C0h]
  __int64 v50; // [rsp+E8h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-B0h]
  __int64 v52; // [rsp+F8h] [rbp-A8h]
  __int64 v53; // [rsp+100h] [rbp-A0h]
  __int64 v54; // [rsp+108h] [rbp-98h]
  __int64 v55; // [rsp+110h] [rbp-90h]
  __int64 v56; // [rsp+118h] [rbp-88h]
  __int64 v57; // [rsp+120h] [rbp-80h]
  __int64 v58; // [rsp+128h] [rbp-78h]
  __int64 v59; // [rsp+130h] [rbp-70h]
  __int64 v60; // [rsp+138h] [rbp-68h]
  __int64 v61; // [rsp+140h] [rbp-60h]
  __int64 v62; // [rsp+148h] [rbp-58h]
  __int64 v63; // [rsp+150h] [rbp-50h]
  __int64 v64; // [rsp+158h] [rbp-48h]
  __int64 v65; // [rsp+160h] [rbp-40h]
  __int64 v66; // [rsp+168h] [rbp-38h]
  __int64 v67; // [rsp+170h] [rbp-30h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v42, &unk_10159DE2C, 2); /*0x1009ad630*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v42, &unk_10159E62D, 3); /*0x1009ad644*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v42, "-ocodexmate_lib::platform::process", 2); /*0x1009ad65c*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v42, &unk_10159E630, 13); /*0x1009ad674*/
  std::process::Command::output::h737eedd4de2ee22e(&v50, &v42); /*0x1009ad687*/
  if ( __OFSUB__(0, v50) ) /*0x1009ad68e*/
  {
    if ( (v51 & 3) == 1 ) /*0x1009ad6a6*/
    {
      v2 = *(_QWORD *)(v51 + 7); /*0x1009ad6b0*/
      if ( *(_QWORD *)v2 ) /*0x1009ad6b4*/
        (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(v51 - 1)); /*0x1009ad6c0*/
      if ( *(_QWORD *)(v2 + 8) ) /*0x1009ad6c2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad6d4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad6e6*/
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758(&v42); /*0x1009ad6f2*/
    return 0; /*0x1009ad789*/
  }
  v66 = v56; /*0x1009ad703*/
  v65 = v55; /*0x1009ad70e*/
  v64 = v54; /*0x1009ad719*/
  v63 = v53; /*0x1009ad724*/
  v62 = v52; /*0x1009ad72f*/
  v61 = v51; /*0x1009ad741*/
  v60 = v50; /*0x1009ad745*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758(&v42); /*0x1009ad750*/
  if ( (_DWORD)v66 ) /*0x1009ad759*/
  {
    if ( v60 ) /*0x1009ad762*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad76d*/
    if ( v63 ) /*0x1009ad779*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad784*/
    return 0; /*0x1009ad784*/
  }
  v59 = v61; /*0x1009ad7b3*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v47, v61, v62); /*0x1009ad7b7*/
  v58 = a1; /*0x1009ad7bc*/
  v57 = a2; /*0x1009ad7c0*/
  v42 = 0; /*0x1009ad7d2*/
  v43 = v49; /*0x1009ad7dd*/
  v67 = v48; /*0x1009ad7e4*/
  v44[0] = v48; /*0x1009ad7e8*/
  v44[1] = v49; /*0x1009ad7ef*/
  v44[2] = 0; /*0x1009ad7f6*/
  v44[3] = v49; /*0x1009ad801*/
  v44[4] = 0xA0000000ALL; /*0x1009ad812*/
  v45 = 1; /*0x1009ad819*/
  v46 = 0; /*0x1009ad820*/
  v5 = (char *)&loc_100003DFD + 3; /*0x1009ad829*/
  while ( 2 ) /*0x1009ad853*/
  {
    v6 = v44[0]; /*0x1009ad853*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1009ad868*/
      &v50,
      v44);
    if ( (_DWORD)v50 == 1 ) /*0x1009ad874*/
    {
      v7 = v42; /*0x1009ad87d*/
      v42 = v52; /*0x1009ad884*/
      v8 = v52 - v7; /*0x1009ad88b*/
      v9 = v7 + v6; /*0x1009ad88e*/
      if ( v52 == v7 ) /*0x1009ad894*/
        goto LABEL_30; /*0x1009ad894*/
    }
    else
    {
      if ( HIBYTE(v46) || (HIBYTE(v46) = 1, v8 = v43 - v42, ((unsigned __int8)v46 | (v43 != v42)) != 1) ) /*0x1009ad8d0*/
      {
        v3 = 0; /*0x1009adbab*/
        if ( v60 ) /*0x1009adbb5*/
          goto LABEL_81; /*0x1009adbb5*/
        goto LABEL_82; /*0x1009adbb5*/
      }
      v9 = v44[0] + v42; /*0x1009ad8d6*/
      if ( !v8 ) /*0x1009ad8e0*/
        goto LABEL_30; /*0x1009ad8e0*/
    }
    if ( *(_BYTE *)(v9 + v8 - 1) == 10 ) /*0x1009ad8e8*/
    {
      if ( v8 != 1 ) /*0x1009ad8f0*/
      {
        if ( *(_BYTE *)(v9 + v8 - 2) == 13 ) /*0x1009ad8f8*/
        {
          v8 -= 2; /*0x1009ad8fe*/
          if ( !v9 ) /*0x1009ad908*/
            goto LABEL_78; /*0x1009ad908*/
        }
        else
        {
          --v8; /*0x1009adaec*/
          if ( !v9 ) /*0x1009adaf5*/
          {
LABEL_78:
            v3 = 0; /*0x1009adbb9*/
            if ( v60 ) /*0x1009adbc3*/
              goto LABEL_81; /*0x1009adbc3*/
            goto LABEL_82; /*0x1009adbc3*/
          }
        }
        goto LABEL_31; /*0x1009ad908*/
      }
      v8 = 0; /*0x1009ad90f*/
    }
LABEL_30:
    if ( !v9 ) /*0x1009ad926*/
      goto LABEL_78; /*0x1009ad926*/
LABEL_31:
    v10 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h7f5c56882de3df6e(v9, v8); /*0x1009ad92c*/
    if ( !v11 ) /*0x1009ad937*/
      goto LABEL_17; /*0x1009ad937*/
    v12 = v10; /*0x1009ad93d*/
    v13 = (unsigned __int8 *)(v11 + v10); /*0x1009ad940*/
    v14 = nullptr; /*0x1009ad943*/
    v15 = (unsigned __int8 *)v12; /*0x1009ad946*/
    while ( 1 ) /*0x1009ad970*/
    {
      v17 = v15; /*0x1009ad970*/
      v18 = v14; /*0x1009ad973*/
      v19 = *v15; /*0x1009ad976*/
      if ( (v19 & 0x80u) != 0 ) /*0x1009ad97c*/
      {
        v20 = v19 & 0x1F; /*0x1009ad993*/
        v21 = v15[1] & 0x3F; /*0x1009ad99c*/
        if ( (unsigned __int8)v19 <= 0xDFu ) /*0x1009ad9a4*/
        {
          v15 += 2; /*0x1009ad9db*/
          v19 = v21 | (v20 << 6); /*0x1009ad9e6*/
        }
        else
        {
          v22 = (v21 << 6) | v15[2] & 0x3F; /*0x1009ad9b3*/
          if ( (unsigned __int8)v19 < 0xF0u ) /*0x1009ad9ba*/
          {
            v15 += 3; /*0x1009ad9eb*/
            v19 = (v20 << 12) | v22; /*0x1009ad9f6*/
          }
          else
          {
            v15 += 4; /*0x1009ad9bc*/
            v19 = ((v19 & 7) << 18) | (v22 << 6) | v17[3] & 0x3F; /*0x1009ad9d6*/
          }
        }
      }
      else
      {
        ++v15; /*0x1009ad97e*/
      }
      v14 = &v18[v15 - v17]; /*0x1009ada06*/
      if ( v19 <= 0x20 ) /*0x1009ada0c*/
      {
        if ( _bittest64((const __int64 *)&v5, v19) ) /*0x1009ada14*/
          break; /*0x1009ada14*/
      }
      if ( v19 >= 0x80 ) /*0x1009ada1c*/
      {
        v23 = v19 >> 8; /*0x1009ada24*/
        if ( v19 >> 8 > 0x1F ) /*0x1009ada2a*/
        {
          if ( v23 == 32 ) /*0x1009ada53*/
          {
            v16 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v19] >> 1; /*0x1009ad95a*/
          }
          else
          {
            if ( v23 != 48 ) /*0x1009ada5c*/
              goto LABEL_35; /*0x1009ada5c*/
            v16 = v19 == 12288; /*0x1009ada68*/
          }
        }
        else if ( v23 ) /*0x1009ada2e*/
        {
          if ( v23 != 22 ) /*0x1009ada33*/
            goto LABEL_35; /*0x1009ada33*/
          v16 = v19 == 5760; /*0x1009ada3f*/
        }
        else
        {
          v16 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v19]; /*0x1009ada7c*/
        }
        if ( (v16 & 1) != 0 ) /*0x1009ad961*/
          break; /*0x1009ad961*/
      }
LABEL_35:
      if ( v15 == v13 ) /*0x1009ad96a*/
        goto LABEL_17; /*0x1009ad96a*/
    }
    if ( !v12 ) /*0x1009ada93*/
      goto LABEL_17; /*0x1009ada93*/
    v24 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(&v14[v12], v11 - (_QWORD)v14); /*0x1009adaa4*/
    if ( !(unsigned __int8)codexmate_lib::platform::process::command_runs_executable::h37eb99acf4ffd5d5(v24, v25) /*0x1009adac7*/
      || !v18 )
    {
      goto LABEL_17; /*0x1009adac7*/
    }
    if ( v18 != (unsigned __int8 *)1 ) /*0x1009adad1*/
    {
      LOBYTE(v26) = *(_BYTE *)v12; /*0x1009adb00*/
      break; /*0x1009adb00*/
    }
    v26 = *(unsigned __int8 *)v12; /*0x1009adad3*/
    if ( v26 == 43 || v26 == 45 ) /*0x1009adae4*/
    {
LABEL_17:
      v3 = 0; /*0x1009ad840*/
      if ( HIBYTE(v46) ) /*0x1009ad84d*/
        goto LABEL_80; /*0x1009ad84d*/
      continue; /*0x1009ad84d*/
    }
    break;
  }
  v27 = (_BYTE)v26 == 43; /*0x1009adb05*/
  v28 = (unsigned __int64)&v18[-v27]; /*0x1009adb0f*/
  v29 = (_BYTE *)(v27 + v12); /*0x1009adb12*/
  v30 = -v27; /*0x1009adb15*/
  if ( v28 >= 9 ) /*0x1009adb1c*/
  {
    v35 = -(__int64)&v18[v30]; /*0x1009adb68*/
    v36 = 0; /*0x1009adb6b*/
    v37 = 0; /*0x1009adb6d*/
    while ( v36 + v35 ) /*0x1009adb75*/
    {
      v39 = v37; /*0x1009adb80*/
      v38 = 10 * v37; /*0x1009adb80*/
      if ( is_mul_ok(0xAu, v39) ) /*0x1009adb80*/
      {
        v40 = (unsigned __int8)v29[v36] - 48; /*0x1009adb8e*/
        v41 = __CFADD__(v40, v38); /*0x1009adb91*/
        v37 = v40 + v38; /*0x1009adb91*/
        if ( v40 <= 9 ) /*0x1009adb99*/
        {
          ++v36; /*0x1009adb9f*/
          if ( !v41 ) /*0x1009adba4*/
            continue; /*0x1009adba4*/
        }
      }
      goto LABEL_17; /*0x1009adba4*/
    }
    v3 = 1; /*0x1009adc23*/
    if ( v60 ) /*0x1009adc33*/
      goto LABEL_81; /*0x1009adc33*/
  }
  else
  {
    v3 = 1; /*0x1009adb1e*/
    if ( v28 ) /*0x1009adb27*/
    {
      v31 = -(__int64)&v18[v30]; /*0x1009adb30*/
      v32 = 0; /*0x1009adb33*/
      v33 = 0; /*0x1009adb35*/
      do /*0x1009adb46*/
      {
        v34 = (unsigned __int8)v29[v32] - 48; /*0x1009adb46*/
        if ( v34 > 9 ) /*0x1009adb4c*/
          goto LABEL_17; /*0x1009adb4c*/
        v33 = v34 + 10 * v33; /*0x1009adb55*/
      }
      while ( ++v32 + v31 ); /*0x1009adb46*/
    }
LABEL_80:
    if ( v60 ) /*0x1009adbd1*/
LABEL_81:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009adbd3*/
  }
LABEL_82:
  if ( v63 ) /*0x1009adbe8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009adbf3*/
  if ( 2 * v47 ) /*0x1009adbff*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009adc19*/
  return v3; /*0x1009ad792*/
}