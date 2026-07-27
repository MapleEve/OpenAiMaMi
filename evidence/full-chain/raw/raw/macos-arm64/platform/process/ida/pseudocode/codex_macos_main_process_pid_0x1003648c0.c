// __ZN13codexmate_lib8platform7process28codex_macos_main_process_pid @ 0x1003648c0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::codex_macos_main_process_pid::h13b6413f2058df0a(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // r15d
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned __int8 *v16; // rax
  unsigned __int8 *v17; // r8
  unsigned __int8 *v18; // rcx
  char v19; // si
  unsigned __int8 *v20; // rdi
  unsigned __int8 *v21; // r14
  unsigned int v22; // esi
  int v23; // r8d
  int v24; // r10d
  int v25; // r9d
  unsigned int v26; // edi
  unsigned __int8 *v27; // rax
  size_t v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  _BYTE *v32; // r13
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // edx
  unsigned int v37; // esi
  __int64 v38; // rcx
  __int64 v39; // rsi
  unsigned int v40; // eax
  int v41; // eax
  unsigned int v42; // kr00_4
  unsigned int v43; // edi
  bool v44; // cf
  __int64 v45; // rsi
  __int64 v46; // [rsp+8h] [rbp-198h] BYREF
  __int64 v47; // [rsp+10h] [rbp-190h]
  _QWORD v48[5]; // [rsp+18h] [rbp-188h] BYREF
  char v49; // [rsp+40h] [rbp-160h]
  __int16 v50; // [rsp+48h] [rbp-158h]
  __int64 v51; // [rsp+D0h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-C8h]
  __int64 v53; // [rsp+E0h] [rbp-C0h]
  __int64 v54; // [rsp+E8h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-B0h]
  __int64 v56; // [rsp+F8h] [rbp-A8h]
  __int64 v57; // [rsp+100h] [rbp-A0h]
  __int64 v58; // [rsp+108h] [rbp-98h]
  __int64 v59; // [rsp+110h] [rbp-90h]
  __int64 v60; // [rsp+118h] [rbp-88h]
  __int64 v61; // [rsp+120h] [rbp-80h]
  __int64 v62; // [rsp+128h] [rbp-78h]
  __int64 v63; // [rsp+130h] [rbp-70h]
  __int64 v64; // [rsp+138h] [rbp-68h]
  __int64 v65; // [rsp+140h] [rbp-60h]
  __int64 v66; // [rsp+148h] [rbp-58h]
  __int64 v67; // [rsp+150h] [rbp-50h]
  __int64 v68; // [rsp+158h] [rbp-48h]
  __int64 v69; // [rsp+160h] [rbp-40h]
  __int64 v70; // [rsp+168h] [rbp-38h]
  __int64 v71; // [rsp+170h] [rbp-30h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v46, "ps-ocodexmate_lib::platform::process", 2); /*0x1003648f0*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v46, &unk_1015F7F1C, 3); /*0x100364904*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v46, "-ocodexmate_lib::platform::process", 2); /*0x10036491c*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v46, &unk_1015F7F1F, 13); /*0x100364934*/
  std::process::Command::output::h737eedd4de2ee22e(&v54, &v46); /*0x100364947*/
  if ( __OFSUB__(0, v54) ) /*0x10036494e*/
  {
    if ( (v55 & 3) == 1 ) /*0x100364966*/
    {
      v2 = v55 - 1; /*0x100364968*/
      v3 = *(_QWORD *)(v55 - 1); /*0x10036496c*/
      v4 = *(_QWORD *)(v55 + 7); /*0x100364970*/
      if ( *(_QWORD *)v4 ) /*0x100364974*/
        (*(void (__fastcall **)(__int64))v4)(v3); /*0x100364980*/
      v5 = *(_QWORD *)(v4 + 8); /*0x100364982*/
      if ( v5 ) /*0x10036498a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16)); /*0x100364994*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24, 8); /*0x1003649a6*/
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v46); /*0x1003649b2*/
    return 0; /*0x100364a49*/
  }
  v70 = v60; /*0x1003649c3*/
  v69 = v59; /*0x1003649ce*/
  v68 = v58; /*0x1003649d9*/
  v67 = v57; /*0x1003649e4*/
  v66 = v56; /*0x1003649ef*/
  v65 = v55; /*0x100364a01*/
  v64 = v54; /*0x100364a05*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v46); /*0x100364a10*/
  if ( (_DWORD)v70 ) /*0x100364a19*/
  {
    if ( v64 ) /*0x100364a22*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v64, 1); /*0x100364a2d*/
    if ( v67 ) /*0x100364a39*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v67, 1); /*0x100364a44*/
    return 0; /*0x100364a44*/
  }
  v63 = v65; /*0x100364a73*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v51, v65, v66); /*0x100364a77*/
  v62 = a1; /*0x100364a7c*/
  v61 = a2; /*0x100364a80*/
  v46 = 0; /*0x100364a92*/
  v47 = v53; /*0x100364a9d*/
  v71 = v52; /*0x100364aa4*/
  v48[0] = v52; /*0x100364aa8*/
  v48[1] = v53; /*0x100364aaf*/
  v48[2] = 0; /*0x100364ab6*/
  v48[3] = v53; /*0x100364ac1*/
  v48[4] = 0xA0000000ALL; /*0x100364ad2*/
  v49 = 1; /*0x100364ad9*/
  v50 = 0; /*0x100364ae0*/
  v8 = 0x100003E00LL; /*0x100364ae9*/
  while ( 2 ) /*0x100364b13*/
  {
    v9 = v48[0]; /*0x100364b13*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100364b28*/
      &v54,
      v48);
    if ( (_DWORD)v54 == 1 ) /*0x100364b34*/
    {
      v10 = v46; /*0x100364b3d*/
      v46 = v56; /*0x100364b44*/
      v11 = v56 - v10; /*0x100364b4b*/
      v12 = v10 + v9; /*0x100364b4e*/
      if ( v56 == v10 ) /*0x100364b54*/
        goto LABEL_30; /*0x100364b54*/
    }
    else
    {
      if ( HIBYTE(v50) || (HIBYTE(v50) = 1, v11 = v47 - v46, ((unsigned __int8)v50 | (v47 != v46)) != 1) ) /*0x100364b90*/
      {
        v6 = 0; /*0x100364e6b*/
        v45 = v64; /*0x100364e6e*/
        if ( v64 ) /*0x100364e75*/
          goto LABEL_81; /*0x100364e75*/
        goto LABEL_82; /*0x100364e75*/
      }
      v12 = v48[0] + v46; /*0x100364b96*/
      if ( !v11 ) /*0x100364ba0*/
        goto LABEL_30; /*0x100364ba0*/
    }
    if ( *(_BYTE *)(v12 + v11 - 1) == 10 ) /*0x100364ba8*/
    {
      if ( v11 != 1 ) /*0x100364bb0*/
      {
        if ( *(_BYTE *)(v12 + v11 - 2) == 13 ) /*0x100364bb8*/
        {
          v11 -= 2; /*0x100364bbe*/
          if ( !v12 ) /*0x100364bc8*/
            goto LABEL_78; /*0x100364bc8*/
        }
        else
        {
          --v11; /*0x100364dac*/
          if ( !v12 ) /*0x100364db5*/
          {
LABEL_78:
            v6 = 0; /*0x100364e79*/
            v45 = v64; /*0x100364e7c*/
            if ( v64 ) /*0x100364e83*/
              goto LABEL_81; /*0x100364e83*/
            goto LABEL_82; /*0x100364e83*/
          }
        }
        goto LABEL_31; /*0x100364bc8*/
      }
      v11 = 0; /*0x100364bcf*/
    }
LABEL_30:
    if ( !v12 ) /*0x100364be6*/
      goto LABEL_78; /*0x100364be6*/
LABEL_31:
    v13 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(v12, v11); /*0x100364bec*/
    if ( !v14 ) /*0x100364bf7*/
      goto LABEL_17; /*0x100364bf7*/
    v15 = v13; /*0x100364bfd*/
    v16 = (unsigned __int8 *)(v14 + v13); /*0x100364c00*/
    v17 = nullptr; /*0x100364c03*/
    v18 = (unsigned __int8 *)v15; /*0x100364c06*/
    while ( 1 ) /*0x100364c30*/
    {
      v20 = v18; /*0x100364c30*/
      v21 = v17; /*0x100364c33*/
      v22 = *v18; /*0x100364c36*/
      if ( (v22 & 0x80u) != 0 ) /*0x100364c3c*/
      {
        v23 = v22 & 0x1F; /*0x100364c53*/
        v24 = v18[1] & 0x3F; /*0x100364c5c*/
        if ( (unsigned __int8)v22 <= 0xDFu ) /*0x100364c64*/
        {
          v18 += 2; /*0x100364c9b*/
          v22 = v24 | (v23 << 6); /*0x100364ca6*/
        }
        else
        {
          v25 = (v24 << 6) | v18[2] & 0x3F; /*0x100364c73*/
          if ( (unsigned __int8)v22 < 0xF0u ) /*0x100364c7a*/
          {
            v18 += 3; /*0x100364cab*/
            v22 = (v23 << 12) | v25; /*0x100364cb6*/
          }
          else
          {
            v18 += 4; /*0x100364c7c*/
            v22 = ((v22 & 7) << 18) | (v25 << 6) | v20[3] & 0x3F; /*0x100364c96*/
          }
        }
      }
      else
      {
        ++v18; /*0x100364c3e*/
      }
      v17 = &v21[v18 - v20]; /*0x100364cc6*/
      if ( v22 <= 0x20 ) /*0x100364ccc*/
      {
        if ( _bittest64(&v8, v22) ) /*0x100364cd4*/
          break; /*0x100364cd4*/
      }
      if ( v22 >= 0x80 ) /*0x100364cdc*/
      {
        v26 = v22 >> 8; /*0x100364ce4*/
        if ( v22 >> 8 > 0x1F ) /*0x100364cea*/
        {
          if ( v26 == 32 ) /*0x100364d13*/
          {
            v19 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v22] >> 1; /*0x100364c1a*/
          }
          else
          {
            if ( v26 != 48 ) /*0x100364d1c*/
              goto LABEL_35; /*0x100364d1c*/
            v19 = v22 == 12288; /*0x100364d28*/
          }
        }
        else if ( v26 ) /*0x100364cee*/
        {
          if ( v26 != 22 ) /*0x100364cf3*/
            goto LABEL_35; /*0x100364cf3*/
          v19 = v22 == 5760; /*0x100364cff*/
        }
        else
        {
          v19 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v22]; /*0x100364d3c*/
        }
        if ( (v19 & 1) != 0 ) /*0x100364c21*/
          break; /*0x100364c21*/
      }
LABEL_35:
      if ( v18 == v16 ) /*0x100364c2a*/
        goto LABEL_17; /*0x100364c2a*/
    }
    if ( !v15 ) /*0x100364d53*/
      goto LABEL_17; /*0x100364d53*/
    v27 = (unsigned __int8 *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x100364d64*/
                               &v17[v15],
                               v14 - (_QWORD)v17);
    if ( !(unsigned __int8)codexmate_lib::platform::process::command_runs_executable::h592cda2c9961586f( /*0x100364d87*/
                             v27,
                             v28,
                             v62,
                             v61)
      || !v21 )
    {
      goto LABEL_17; /*0x100364d87*/
    }
    if ( v21 != (unsigned __int8 *)1 ) /*0x100364d91*/
    {
      LOBYTE(v29) = *(_BYTE *)v15; /*0x100364dc0*/
      break; /*0x100364dc0*/
    }
    v29 = *(unsigned __int8 *)v15; /*0x100364d93*/
    if ( v29 == 43 || v29 == 45 ) /*0x100364da4*/
    {
LABEL_17:
      v6 = 0; /*0x100364b00*/
      if ( HIBYTE(v50) ) /*0x100364b0d*/
        goto LABEL_80; /*0x100364b0d*/
      continue; /*0x100364b0d*/
    }
    break;
  }
  v30 = (_BYTE)v29 == 43; /*0x100364dc5*/
  v31 = (unsigned __int64)&v21[-v30]; /*0x100364dcf*/
  v32 = (_BYTE *)(v30 + v15); /*0x100364dd2*/
  v33 = -v30; /*0x100364dd5*/
  if ( v31 >= 9 ) /*0x100364ddc*/
  {
    v38 = -(__int64)&v21[v33]; /*0x100364e28*/
    v39 = 0; /*0x100364e2b*/
    v40 = 0; /*0x100364e2d*/
    while ( v39 + v38 ) /*0x100364e35*/
    {
      v42 = v40; /*0x100364e40*/
      v41 = 10 * v40; /*0x100364e40*/
      if ( is_mul_ok(0xAu, v42) ) /*0x100364e40*/
      {
        v43 = (unsigned __int8)v32[v39] - 48; /*0x100364e4e*/
        v44 = __CFADD__(v43, v41); /*0x100364e51*/
        v40 = v43 + v41; /*0x100364e51*/
        if ( v43 <= 9 ) /*0x100364e59*/
        {
          ++v39; /*0x100364e5f*/
          if ( !v44 ) /*0x100364e64*/
            continue; /*0x100364e64*/
        }
      }
      goto LABEL_17; /*0x100364e64*/
    }
    v6 = 1; /*0x100364ee3*/
    v45 = v64; /*0x100364eec*/
    if ( v64 ) /*0x100364ef3*/
      goto LABEL_81; /*0x100364ef3*/
  }
  else
  {
    v6 = 1; /*0x100364dde*/
    if ( v31 ) /*0x100364de7*/
    {
      v34 = -(__int64)&v21[v33]; /*0x100364df0*/
      v35 = 0; /*0x100364df3*/
      v36 = 0; /*0x100364df5*/
      do /*0x100364e06*/
      {
        v37 = (unsigned __int8)v32[v35] - 48; /*0x100364e06*/
        if ( v37 > 9 ) /*0x100364e0c*/
          goto LABEL_17; /*0x100364e0c*/
        v36 = v37 + 10 * v36; /*0x100364e15*/
      }
      while ( ++v35 + v34 ); /*0x100364e06*/
    }
LABEL_80:
    v45 = v64; /*0x100364e8a*/
    if ( v64 ) /*0x100364e91*/
LABEL_81:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v45, 1); /*0x100364e93*/
  }
LABEL_82:
  if ( v67 ) /*0x100364ea8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v67, 1); /*0x100364eb3*/
  if ( 2 * v51 ) /*0x100364ebf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, v51, 1); /*0x100364ed9*/
  return v6; /*0x100364a52*/
}