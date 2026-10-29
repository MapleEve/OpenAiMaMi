// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_{{closure}}::_{{closure}}::hd4db6ac3230664ec; addr: 0x100702360; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:32Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hd4db6ac3230664ec(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  void *v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+20h] [rbp-A10h] BYREF
  _QWORD __dst[65]; // [rsp+188h] [rbp-8A8h] BYREF
  _QWORD v16[50]; // [rsp+390h] [rbp-6A0h] BYREF
  _QWORD v17[45]; // [rsp+520h] [rbp-510h] BYREF
  _QWORD v18[50]; // [rsp+688h] [rbp-3A8h] BYREF
  _QWORD v19[5]; // [rsp+818h] [rbp-218h] BYREF
  _BYTE v20[72]; // [rsp+840h] [rbp-1F0h] BYREF
  __int64 v21; // [rsp+888h] [rbp-1A8h] BYREF
  __int64 v22; // [rsp+890h] [rbp-1A0h]
  void *__srca; // [rsp+898h] [rbp-198h]
  size_t __n; // [rsp+8A0h] [rbp-190h]
  __int64 v25; // [rsp+8A8h] [rbp-188h]
  _BYTE v26[72]; // [rsp+8B0h] [rbp-180h] BYREF
  _QWORD v27[3]; // [rsp+8F8h] [rbp-138h] BYREF
  __int64 v28; // [rsp+910h] [rbp-120h] BYREF
  __m256i v29; // [rsp+918h] [rbp-118h]
  __int64 v30; // [rsp+938h] [rbp-F8h]
  _BYTE v31[31]; // [rsp+941h] [rbp-EFh]
  __int64 v32; // [rsp+960h] [rbp-D0h] BYREF
  __m256i v33; // [rsp+968h] [rbp-C8h]
  __int64 v34; // [rsp+988h] [rbp-A8h]
  __int64 v35; // [rsp+990h] [rbp-A0h]
  __int64 v36; // [rsp+998h] [rbp-98h] BYREF
  __int64 v37; // [rsp+9A0h] [rbp-90h]
  __int64 v38; // [rsp+9A8h] [rbp-88h]
  __int64 v39; // [rsp+9B0h] [rbp-80h]
  __int64 v40; // [rsp+9B8h] [rbp-78h]
  __int64 v41; // [rsp+9C0h] [rbp-70h] BYREF
  __m256i v42; // [rsp+9C8h] [rbp-68h]
  __int64 v43; // [rsp+9E8h] [rbp-48h] BYREF
  __int64 v44; // [rsp+9F0h] [rbp-40h]
  __int64 v45; // [rsp+9F8h] [rbp-38h]
  _BYTE v46[41]; // [rsp+A07h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x100702389*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1007023a4*/
  v45 = *((_QWORD *)__src + 117); /*0x1007023b0*/
  v2 = *((_QWORD *)__src + 115); /*0x1007023b4*/
  v44 = *((_QWORD *)__src + 116); /*0x1007023c2*/
  v43 = v2; /*0x1007023c6*/
  v18[6] = 0; /*0x1007023ca*/
  v18[0] = &xmmword_1016FFBE0; /*0x1007023dc*/
  v18[1] = 16; /*0x1007023e3*/
  v18[2] = &unk_1016E98EC; /*0x1007023f5*/
  v18[3] = 4; /*0x1007023fc*/
  v18[4] = __dst; /*0x100702407*/
  v18[5] = &v43; /*0x100702412*/
  v3 = tauri::state::StateManager::try_get::h8e5dc1ea73807325(__dst[64] + 16LL); /*0x100702427*/
  if ( !v3 ) /*0x10070242f*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x100702446*/
      v17,
      v18,
      &v18[2]);
    if ( LOBYTE(v17[0]) != 6 ) /*0x100702452*/
    {
      v18[4] = v17[3]; /*0x1007026fa*/
      v18[3] = v17[2]; /*0x100702708*/
      v18[2] = v17[1]; /*0x10070271d*/
      v18[1] = v17[0]; /*0x100702724*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x10070273d*/
      v18[0] = 1; /*0x10070275e*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100702779*/
        v14,
        v16[48],
        v18,
        __src + 880,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_22; /*0x10070277e*/
    }
    v3 = v17[1]; /*0x100702458*/
  }
  codexmate_lib::commands::system::rebuild_registry::h41082cb25bdbe6af(&v21, v3); /*0x100702469*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x10070247d*/
  if ( v21 == 0x8000000000000000LL ) /*0x100702496*/
  {
    v40 = v22; /*0x10070249f*/
    v5 = __srca; /*0x1007024a3*/
    v6 = __n; /*0x1007024aa*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1007024b4*/
    {
      v7 = 0; /*0x1007024ba*/
      goto LABEL_7; /*0x1007024ba*/
    }
    if ( __n ) /*0x1007026c7*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __src + 520, v4); /*0x1007026cd*/
      v7 = 1; /*0x1007026d2*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1007026e0*/
      if ( !v10 ) /*0x1007026e8*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1007024bd*/
    }
    else
    {
      v10 = 1; /*0x100702783*/
    }
    v35 = v10; /*0x100702788*/
    memcpy((void *)v10, v5, v6); /*0x100702798*/
    if ( v40 ) /*0x1007027a4*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v40, 1); /*0x1007027ae*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1007027c2*/
    v8 = v18[48]; /*0x1007027c7*/
    v39 = v18[48]; /*0x1007027ce*/
    v42.i8[0] = 3; /*0x1007027d2*/
    v42.i64[1] = v6; /*0x1007027d6*/
    v42.i64[2] = v35; /*0x1007027e1*/
    v42.i64[3] = v6; /*0x1007027e5*/
    v41 = 1; /*0x1007027e9*/
  }
  else
  {
    qmemcpy(v20, v26, sizeof(v20)); /*0x1007024e7*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1007024f9*/
    v8 = v18[48]; /*0x1007024fe*/
    v39 = v18[48]; /*0x100702505*/
    v19[0] = v21; /*0x100702509*/
    v19[1] = v22; /*0x100702519*/
    v19[2] = __srca; /*0x100702520*/
    v19[3] = __n; /*0x10070252c*/
    v19[4] = v25; /*0x100702538*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h05f90ec418334f3c(&v32, v19); /*0x10070254d*/
    if ( v32 == 0x8000000000000025LL ) /*0x100702567*/
    {
      v42 = v33; /*0x10070257b*/
      v9 = 0; /*0x100702595*/
    }
    else
    {
      v30 = v34; /*0x1007025a3*/
      v29 = v33; /*0x1007025bf*/
      v28 = v32; /*0x1007025e9*/
      v36 = 0; /*0x1007025f0*/
      v37 = 1; /*0x1007025fb*/
      v38 = 0; /*0x100702606*/
      v27[2] = 1610612768; /*0x100702611*/
      v27[0] = &v36; /*0x100702623*/
      v27[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x100702631*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x100702646*/
                              &v28,
                              v27) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007028b2*/
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
          55,
          v46,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
      *(_QWORD *)&v31[7] = v36; /*0x100702668*/
      *(_QWORD *)&v31[15] = v37; /*0x10070266f*/
      *(_QWORD *)&v31[23] = v38; /*0x100702676*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v28); /*0x100702684*/
      v42.i8[0] = 3; /*0x100702689*/
      *(__int128 *)((char *)v42.i128 + 1) = *(_OWORD *)v31; /*0x10070269b*/
      *(__int64 *)((char *)&v42.i64[2] + 1) = *(_QWORD *)&v31[16]; /*0x1007026aa*/
      v42.i64[3] = *(_QWORD *)&v31[23]; /*0x1007026b5*/
      v9 = 1; /*0x1007026b9*/
    }
    v41 = v9; /*0x1007026be*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100702817*/
    v17,
    v8,
    &v41,
    __src + 880,
    LODWORD(v18[49]),
    HIDWORD(v18[49]));
LABEL_22:
  if ( v43 != 0x8000000000000000LL ) /*0x10070282a*/
  {
    v11 = v44; /*0x10070282c*/
    for ( i = v45 + 1; i != 1; --i ) /*0x100702834*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x10070284d*/
      v11 += 96; /*0x100702852*/
    }
    if ( v43 ) /*0x10070285e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 96 * v43, 8); /*0x100702871*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100702882*/
}