// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::h8677cb2fa0458f57; addr: 0x10049c560; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
void __fastcall codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::h8677cb2fa0458f57(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // r15
  char v4; // r14
  char *v5; // rcx
  __int64 v6; // r14
  unsigned __int64 *v7; // rax
  __int64 (__fastcall *v8)(); // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  unsigned __int64 *v15; // r12
  __int64 (__fastcall *v16)(); // r14
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  _QWORD v19[4]; // [rsp+8h] [rbp-228h] BYREF
  _QWORD v20[3]; // [rsp+28h] [rbp-208h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-1F0h] BYREF
  _QWORD v22[7]; // [rsp+50h] [rbp-1E0h] BYREF
  sqlite3_stmt *v23; // [rsp+88h] [rbp-1A8h]
  __int64 v24; // [rsp+90h] [rbp-1A0h] BYREF
  __int64 v25; // [rsp+98h] [rbp-198h]
  __int64 v26; // [rsp+A0h] [rbp-190h]
  unsigned __int64 v27; // [rsp+A8h] [rbp-188h] BYREF
  _BYTE __src[88]; // [rsp+B0h] [rbp-180h] BYREF
  unsigned __int64 *v29; // [rsp+108h] [rbp-128h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+110h] [rbp-120h]
  __int64 v31; // [rsp+118h] [rbp-118h]
  __int64 v32; // [rsp+120h] [rbp-110h]
  __int64 v33; // [rsp+128h] [rbp-108h]
  __int64 v34; // [rsp+130h] [rbp-100h]
  __int64 v35; // [rsp+138h] [rbp-F8h]
  __int64 v36; // [rsp+140h] [rbp-F0h]
  unsigned __int64 *v37; // [rsp+148h] [rbp-E8h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+150h] [rbp-E0h]
  __int64 v39; // [rsp+158h] [rbp-D8h]
  __int64 v40; // [rsp+160h] [rbp-D0h]
  __int64 v41; // [rsp+168h] [rbp-C8h]
  __int64 v42; // [rsp+170h] [rbp-C0h]
  __int64 v43; // [rsp+178h] [rbp-B8h]
  __int64 v44; // [rsp+180h] [rbp-B0h]
  unsigned __int64 *v45; // [rsp+188h] [rbp-A8h]
  __int64 (__fastcall *v46)(); // [rsp+190h] [rbp-A0h]
  __int64 v47; // [rsp+198h] [rbp-98h]
  __int64 v48; // [rsp+1A0h] [rbp-90h]
  __int64 v49; // [rsp+1A8h] [rbp-88h]
  __int64 v50; // [rsp+1B0h] [rbp-80h]
  __int64 v51; // [rsp+1B8h] [rbp-78h]
  __int64 v52; // [rsp+1C0h] [rbp-70h]
  unsigned __int64 *v53; // [rsp+1C8h] [rbp-68h] BYREF
  __int64 (__fastcall *v54)(); // [rsp+1D0h] [rbp-60h]
  __int64 v55; // [rsp+1D8h] [rbp-58h]
  __int64 v56; // [rsp+1E0h] [rbp-50h]
  __int64 v57; // [rsp+1E8h] [rbp-48h]
  __int64 v58; // [rsp+1F0h] [rbp-40h]
  __int64 v59; // [rsp+1F8h] [rbp-38h]
  __int64 v60; // [rsp+200h] [rbp-30h]

  codexmate_lib::core::relay::codex_thread_visibility::read_thread_columns::h0a67f0752ba13f6c(&v27, a2); /*0x10049c581*/
  v3 = v27; /*0x10049c586*/
  v4 = __src[0]; /*0x10049c58d*/
  if ( v27 != 11 ) /*0x10049c599*/
  {
    memcpy((void *)(a1 + 9), &__src[1], 0x57u); /*0x10049c807*/
    *(_QWORD *)a1 = v3; /*0x10049c80c*/
    *(_BYTE *)(a1 + 8) = v4; /*0x10049c80f*/
    return; /*0x10049c813*/
  }
  v5 = "NULL"; /*0x10049c5a6*/
  if ( (__src[0] & 1) != 0 ) /*0x10049c5b1*/
    v5 = "model"; /*0x10049c5b1*/
  v21[0] = v5; /*0x10049c5bd*/
  v21[1] = __src[0] | 4LL; /*0x10049c5c4*/
  v53 = v21; /*0x10049c5d2*/
  v54 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x10049c5dd*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v24, &unk_1018F87D0, &v53); /*0x10049c5f6*/
  v6 = v25; /*0x10049c5fb*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v27, a2, v25, v26); /*0x10049c619*/
  if ( (_DWORD)v27 != 1 ) /*0x10049c62c*/
  {
    v44 = *(_QWORD *)&__src[56]; /*0x10049c81c*/
    v43 = *(_QWORD *)&__src[48]; /*0x10049c827*/
    v42 = *(_QWORD *)&__src[40]; /*0x10049c832*/
    v41 = *(_QWORD *)&__src[32]; /*0x10049c83d*/
    v45 = *(unsigned __int64 **)__src; /*0x10049c853*/
    v46 = *(__int64 (__fastcall **)())&__src[8]; /*0x10049c85a*/
    v47 = *(_QWORD *)&__src[16]; /*0x10049c861*/
    v48 = *(_QWORD *)&__src[24]; /*0x10049c868*/
    v49 = *(_QWORD *)&__src[32]; /*0x10049c86f*/
    v50 = *(_QWORD *)&__src[40]; /*0x10049c876*/
    v51 = *(_QWORD *)&__src[48]; /*0x10049c87a*/
    v52 = *(_QWORD *)&__src[56]; /*0x10049c87e*/
    v23 = *(sqlite3_stmt **)&__src[56]; /*0x10049c886*/
    v22[6] = *(_QWORD *)&__src[48]; /*0x10049c891*/
    v22[5] = *(_QWORD *)&__src[40]; /*0x10049c89c*/
    v22[4] = *(_QWORD *)&__src[32]; /*0x10049c8aa*/
    v22[3] = *(_QWORD *)&__src[24]; /*0x10049c8b8*/
    v22[2] = *(_QWORD *)&__src[16]; /*0x10049c8c6*/
    v22[1] = *(_QWORD *)&__src[8]; /*0x10049c8db*/
    v22[0] = *(_QWORD *)__src; /*0x10049c8e2*/
    if ( v24 ) /*0x10049c8f3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v24, 1); /*0x10049c8fd*/
    v14 = sqlite3_bind_parameter_count(v23); /*0x10049c909*/
    if ( v14 ) /*0x10049c913*/
    {
      v27 = 0x8000000000000013LL; /*0x10049c91f*/
      *(_QWORD *)__src = 0; /*0x10049c926*/
      *(_QWORD *)&__src[8] = v14; /*0x10049c931*/
      v29 = &v27; /*0x10049c938*/
      v30 = (__int64 (__fastcall *)())_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10049c946*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v53, &unk_1018F886C, &v29); /*0x10049c95f*/
      v15 = v53; /*0x10049c964*/
      v16 = v54; /*0x10049c968*/
      v17 = v55; /*0x10049c96c*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v27); /*0x10049c977*/
    }
    else
    {
      core::iter::adapters::try_process::h376c135c218fd90a(&v53, v22, 0); /*0x10049c98c*/
      if ( v53 == (unsigned __int64 *)0x8000000000000016LL ) /*0x10049c9a3*/
      {
        v19[0] = v55; /*0x10049c9b5*/
        v19[1] = v55; /*0x10049c9bc*/
        v19[2] = v54; /*0x10049c9c3*/
        v19[3] = v55 + 120 * v56; /*0x10049c9ca*/
        alloc::vec::in_place_collect::from_iter_in_place::h34aeb29924a7e17a(&v27, v19); /*0x10049c9df*/
        *(_QWORD *)(a1 + 24) = *(_QWORD *)&__src[8]; /*0x10049c9eb*/
        v18 = v27; /*0x10049c9ef*/
        *(_QWORD *)(a1 + 16) = *(_QWORD *)__src; /*0x10049c9fd*/
        *(_QWORD *)(a1 + 8) = v18; /*0x10049ca01*/
        *(_QWORD *)a1 = 11; /*0x10049ca05*/
LABEL_16:
        core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(v22); /*0x10049cacc*/
        return; /*0x10049cad3*/
      }
      *(_QWORD *)&__src[48] = v60; /*0x10049ca15*/
      *(_QWORD *)&__src[40] = v59; /*0x10049ca20*/
      *(_QWORD *)&__src[32] = v58; /*0x10049ca2b*/
      *(_QWORD *)&__src[24] = v57; /*0x10049ca36*/
      *(_QWORD *)&__src[16] = v56; /*0x10049ca41*/
      *(_QWORD *)&__src[8] = v55; /*0x10049ca4c*/
      *(_QWORD *)__src = v54; /*0x10049ca5b*/
      v27 = (unsigned __int64)v53; /*0x10049ca62*/
      v37 = &v27; /*0x10049ca69*/
      v38 = (__int64 (__fastcall *)())_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10049ca77*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v29, &unk_1018F884C, &v37); /*0x10049ca93*/
      v15 = v29; /*0x10049ca98*/
      v16 = v30; /*0x10049ca9f*/
      v17 = v31; /*0x10049caa6*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v27); /*0x10049cab4*/
    }
    *(_QWORD *)a1 = 10; /*0x10049cab9*/
    *(_QWORD *)(a1 + 8) = v15; /*0x10049cac0*/
    *(_QWORD *)(a1 + 16) = v16; /*0x10049cac4*/
    *(_QWORD *)(a1 + 24) = v17; /*0x10049cac8*/
    goto LABEL_16; /*0x10049cac8*/
  }
  v60 = *(_QWORD *)&__src[56]; /*0x10049c636*/
  v59 = *(_QWORD *)&__src[48]; /*0x10049c63e*/
  v58 = *(_QWORD *)&__src[40]; /*0x10049c646*/
  v57 = *(_QWORD *)&__src[32]; /*0x10049c64e*/
  v56 = *(_QWORD *)&__src[24]; /*0x10049c656*/
  v55 = *(_QWORD *)&__src[16]; /*0x10049c65e*/
  v54 = *(__int64 (__fastcall **)())&__src[8]; /*0x10049c669*/
  v53 = *(unsigned __int64 **)__src; /*0x10049c66d*/
  v29 = (unsigned __int64 *)&v53; /*0x10049c671*/
  v30 = (__int64 (__fastcall *)())_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10049c67f*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v20, &unk_1018F888E, &v29); /*0x10049c69b*/
  v29 = (unsigned __int64 *)v20[0]; /*0x10049c6ae*/
  v30 = (__int64 (__fastcall *)())v20[1]; /*0x10049c6b5*/
  v31 = v20[2]; /*0x10049c6c3*/
  core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v53); /*0x10049c6ce*/
  v37 = v29; /*0x10049c6e1*/
  v38 = v30; /*0x10049c6e8*/
  v39 = v31; /*0x10049c6f6*/
  v40 = v32; /*0x10049c704*/
  v41 = v33; /*0x10049c712*/
  v42 = v34; /*0x10049c720*/
  v43 = v35; /*0x10049c72e*/
  v44 = v36; /*0x10049c73c*/
  v7 = v29; /*0x10049c743*/
  v8 = v30; /*0x10049c74a*/
  v45 = v29; /*0x10049c751*/
  v46 = v30; /*0x10049c758*/
  v9 = v31; /*0x10049c75f*/
  v47 = v31; /*0x10049c766*/
  v10 = v32; /*0x10049c76d*/
  v48 = v32; /*0x10049c774*/
  v11 = v33; /*0x10049c77b*/
  v49 = v33; /*0x10049c782*/
  v12 = v34; /*0x10049c789*/
  v50 = v34; /*0x10049c790*/
  v13 = v35; /*0x10049c794*/
  v51 = v35; /*0x10049c79b*/
  v52 = v36; /*0x10049c7a6*/
  *(_QWORD *)(a1 + 64) = v36; /*0x10049c7ae*/
  *(_QWORD *)(a1 + 56) = v13; /*0x10049c7b2*/
  *(_QWORD *)(a1 + 48) = v12; /*0x10049c7b6*/
  *(_QWORD *)(a1 + 40) = v11; /*0x10049c7ba*/
  *(_QWORD *)(a1 + 32) = v10; /*0x10049c7be*/
  *(_QWORD *)(a1 + 24) = v9; /*0x10049c7c2*/
  *(_QWORD *)(a1 + 16) = v8; /*0x10049c7c6*/
  *(_QWORD *)(a1 + 8) = v7; /*0x10049c7ca*/
  *(_QWORD *)a1 = 10; /*0x10049c7ce*/
  if ( v24 ) /*0x10049c7df*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v24, 1); /*0x10049c7ed*/
}
