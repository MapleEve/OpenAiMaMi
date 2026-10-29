// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f; addr: 0x100897360; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:19Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r15
  __int64 v7; // rax
  __int64 v9; // rdi
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // r9
  bool v12; // cf
  unsigned int v13; // ecx
  int v14; // edx
  _BYTE *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int8 *v18; // r15
  unsigned __int8 *v19; // r8
  unsigned __int64 v20; // rdx
  int v21; // r10d
  unsigned __int8 *v22; // r11
  int v23; // r12d
  int v24; // r15d
  int v25; // r13d
  int v26; // r12d
  int v27; // r13d
  char v28; // si
  int v29; // edi
  int v30; // edi
  int v31; // r9d
  int v32; // r8d
  int v33; // edi
  _BYTE v34[104]; // [rsp+0h] [rbp-B0h] BYREF
  int v35; // [rsp+68h] [rbp-48h] BYREF
  __int64 v36; // [rsp+70h] [rbp-40h]
  unsigned int v37; // [rsp+84h] [rbp-2Ch]

  v4 = a4; /*0x100897374*/
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v34, a1, a2, a3, a4); /*0x100897393*/
  v7 = _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x10089739f*/
         &v35,
         v34);
  if ( v35 != 1 ) /*0x1008973a8*/
    return 0; /*0x1008973aa*/
  while ( 1 ) /*0x1008973ed*/
  {
    if ( v36 ) /*0x1008973ed*/
    {
      v9 = v36 - 1; /*0x1008973ef*/
      if ( v36 - 1 >= a2 ) /*0x1008973f6*/
        core::panicking::panic_bounds_check::h56740b1198b22635(v9, a2, &off_101AB6980); /*0x1008976f8*/
      v10 = *(_BYTE *)(a1 + v9) - 45; /*0x100897401*/
      if ( v10 >= 0x14u ) /*0x100897407*/
      {
        LODWORD(v7) = 0; /*0x100897430*/
        v11 = v4 + v36; /*0x100897432*/
        v12 = v4 + v36 < a2; /*0x100897435*/
        if ( v4 + v36 == a2 ) /*0x100897438*/
          goto LABEL_16; /*0x100897438*/
      }
      else
      {
        LODWORD(v7) = 0x82005u >> v10; /*0x10089740e*/
        v11 = v4 + v36; /*0x100897410*/
        v12 = v4 + v36 < a2; /*0x100897413*/
        if ( v4 + v36 == a2 ) /*0x100897416*/
          goto LABEL_16; /*0x100897416*/
      }
    }
    else
    {
      LOBYTE(v7) = 1; /*0x100897420*/
      v11 = v4; /*0x100897422*/
      v12 = v4 < a2; /*0x100897425*/
      if ( v4 == a2 ) /*0x100897428*/
        goto LABEL_16; /*0x100897428*/
    }
    if ( !v12 ) /*0x10089743a*/
      core::panicking::panic_bounds_check::h56740b1198b22635(v11, a2, &off_101AB6998); /*0x10089770a*/
    v13 = *(unsigned __int8 *)(a1 + v11) - 45; /*0x100897445*/
    if ( v13 > 0x13 ) /*0x10089744b*/
      goto LABEL_4; /*0x10089744b*/
    v14 = 532485; /*0x10089744d*/
    if ( !_bittest(&v14, v13) ) /*0x100897452*/
      goto LABEL_4; /*0x100897455*/
LABEL_16:
    if ( (v7 & 1) == 0 ) /*0x10089745d*/
      goto LABEL_4; /*0x10089745d*/
    if ( v11 ) /*0x100897466*/
      break; /*0x100897466*/
LABEL_20:
    LOBYTE(v7) = 1; /*0x10089747c*/
    if ( v11 == a2 ) /*0x100897481*/
      return (unsigned int)v7; /*0x1008976c6*/
    v37 = v7; /*0x100897487*/
    v15 = (_BYTE *)(a1 + v11); /*0x10089748a*/
    if ( *(_BYTE *)(a1 + v11) != 45 ) /*0x100897491*/
      return v37; /*0x100897491*/
    v16 = v4; /*0x100897497*/
    v17 = a2 + ~v11; /*0x10089749d*/
    v18 = nullptr; /*0x1008974a9*/
    v19 = v15 + 1; /*0x1008974ac*/
    while ( v19 != &v15[v17 + 1] ) /*0x1008974b3*/
    {
      v20 = (unsigned __int64)v18; /*0x1008974b9*/
      v21 = *v19; /*0x1008974bc*/
      if ( (v21 & 0x80u) != 0 ) /*0x1008974c3*/
      {
        v23 = v21 & 0x1F; /*0x1008974f3*/
        v24 = v19[1] & 0x3F; /*0x1008974fc*/
        if ( (unsigned __int8)v21 <= 0xDFu ) /*0x100897504*/
        {
          v22 = v19 + 2; /*0x10089754d*/
          v21 = v24 | (v23 << 6); /*0x100897558*/
          if ( (v21 & 0x1FFFFD) == 0x2D ) /*0x100897569*/
            goto LABEL_38; /*0x100897569*/
        }
        else
        {
          v25 = (v24 << 6) | v19[2] & 0x3F; /*0x100897513*/
          if ( (unsigned __int8)v21 < 0xF0u ) /*0x10089751a*/
          {
            v22 = v19 + 3; /*0x10089756d*/
            v21 = (v23 << 12) | v25; /*0x100897578*/
            if ( (v21 & 0x1FFFFD) == 0x2D ) /*0x100897589*/
              goto LABEL_38; /*0x100897589*/
          }
          else
          {
            v22 = v19 + 4; /*0x10089751c*/
            v26 = (v21 & 7) << 18; /*0x100897529*/
            v27 = v25 << 6; /*0x10089752d*/
            v21 = v26 | v27 | v19[3] & 0x3F; /*0x100897538*/
            if ( (v26 & 0x1FFFFD | v27 & 0x1FFFFD | v19[3] & 0x3D) == 0x2D ) /*0x100897549*/
              goto LABEL_38; /*0x100897549*/
          }
        }
      }
      else
      {
        v22 = v19 + 1; /*0x1008974c5*/
        if ( (v21 & 0x1FFFFD) == 0x2D ) /*0x1008974d7*/
          goto LABEL_38; /*0x1008974d7*/
      }
      if ( v21 != 64 ) /*0x100897594*/
      {
        v18 = &v22[v20 - (_QWORD)v19]; /*0x10089759c*/
        v19 = v22; /*0x10089759f*/
        if ( v21 != 58 ) /*0x1008975a6*/
          continue; /*0x1008975a6*/
      }
      goto LABEL_38; /*0x1008975a6*/
    }
    v20 = v17; /*0x1008975ae*/
LABEL_38:
    if ( !v20 ) /*0x1008975b4*/
      return v37; /*0x1008975b4*/
    v28 = v15[1]; /*0x1008975ba*/
    v29 = (unsigned __int8)v28; /*0x1008975bd*/
    v4 = v16; /*0x1008975c2*/
    if ( v28 >= 0 ) /*0x1008975c5*/
      goto LABEL_45; /*0x1008975c5*/
    v30 = v28 & 0x1F; /*0x1008975c9*/
    v31 = v15[2] & 0x3F; /*0x1008975d1*/
    if ( (unsigned __int8)v28 <= 0xDFu ) /*0x1008975d9*/
    {
      v33 = v30 << 6; /*0x10089760d*/
      goto LABEL_44; /*0x10089760d*/
    }
    v32 = (v31 << 6) | v15[3] & 0x3F; /*0x1008975e8*/
    if ( (unsigned __int8)v28 >= 0xF0u ) /*0x1008975ef*/
    {
      v33 = (v28 & 7) << 18; /*0x1008975fd*/
      v31 = (v32 << 6) | v15[4] & 0x3F; /*0x100897608*/
LABEL_44:
      v29 = v31 | v33; /*0x100897610*/
LABEL_45:
      if ( (unsigned int)(v29 - 48) > 9 ) /*0x100897619*/
        return v37; /*0x100897619*/
      goto LABEL_46; /*0x100897619*/
    }
    if ( (v32 | (unsigned int)(v30 << 12)) - 48 > 9 ) /*0x1008976b8*/
      return v37; /*0x1008976b8*/
LABEL_46:
    if ( v20 == 8 /*0x1008976a1*/
      && (unsigned __int8)(v28 - 58) >= 0xF6u
      && (unsigned __int8)(v15[2] - 58) >= 0xF6u
      && (unsigned __int8)(v15[3] - 58) >= 0xF6u
      && (unsigned __int8)(v15[4] - 58) >= 0xF6u
      && (unsigned __int8)(v15[5] - 58) >= 0xF6u
      && (unsigned __int8)(v15[6] - 58) >= 0xF6u
      && (unsigned __int8)(v15[7] - 58) >= 0xF6u
      && (unsigned __int8)(v15[8] - 48) < 0xAu )
    {
      return v37; /*0x1008976a1*/
    }
LABEL_4:
    v7 = _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x1008973d0*/
           &v35,
           v34);
    if ( !(_BYTE)v35 ) /*0x1008973e4*/
      return 0; /*0x1008973e4*/
  }
  if ( v11 < a2 ) /*0x10089746b*/
  {
    if ( *(char *)(a1 + v11) < -64 ) /*0x100897476*/
      goto LABEL_60; /*0x100897476*/
    goto LABEL_20; /*0x100897476*/
  }
  LOBYTE(v7) = 1; /*0x1008976cb*/
  v37 = v7; /*0x1008976cd*/
  if ( v11 != a2 ) /*0x1008976d0*/
LABEL_60:
    core::str::slice_error_fail::h480e51fbd8b15eba(a1, a2, v11, a2, &off_101AB69B0); /*0x1008976d6*/
  return v37; /*0x1008973b4*/
}