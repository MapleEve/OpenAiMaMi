// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h473a0b534632832d; addr: 0x1006f64d0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:32Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h473a0b534632832d(
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
  _BYTE v14[360]; // [rsp+20h] [rbp-D10h] BYREF
  _QWORD __dst[65]; // [rsp+188h] [rbp-BA8h] BYREF
  _BYTE v16[360]; // [rsp+390h] [rbp-9A0h] BYREF
  _QWORD v17[50]; // [rsp+4F8h] [rbp-838h] BYREF
  __int64 v18; // [rsp+688h] [rbp-6A8h] BYREF
  __int64 v19; // [rsp+690h] [rbp-6A0h]
  void *v20; // [rsp+698h] [rbp-698h]
  size_t __n; // [rsp+6A0h] [rbp-690h]
  _QWORD *v22; // [rsp+6A8h] [rbp-688h]
  _BYTE __srca[456]; // [rsp+6B0h] [rbp-680h] BYREF
  _QWORD v24[50]; // [rsp+878h] [rbp-4B8h] BYREF
  __int64 v25; // [rsp+A08h] [rbp-328h] BYREF
  __int64 v26; // [rsp+A10h] [rbp-320h]
  void *v27; // [rsp+A18h] [rbp-318h] BYREF
  size_t v28; // [rsp+A20h] [rbp-310h]
  _QWORD *v29; // [rsp+A28h] [rbp-308h]
  _QWORD v30[57]; // [rsp+A30h] [rbp-300h] BYREF
  _QWORD v31[3]; // [rsp+BF8h] [rbp-138h] BYREF
  __int64 v32; // [rsp+C10h] [rbp-120h] BYREF
  __m256i v33; // [rsp+C18h] [rbp-118h]
  __int64 v34; // [rsp+C38h] [rbp-F8h]
  _BYTE v35[31]; // [rsp+C41h] [rbp-EFh]
  __int64 v36; // [rsp+C60h] [rbp-D0h] BYREF
  __m256i v37; // [rsp+C68h] [rbp-C8h]
  __int64 v38; // [rsp+C88h] [rbp-A8h]
  __int64 v39; // [rsp+C90h] [rbp-A0h]
  __int64 v40; // [rsp+C98h] [rbp-98h] BYREF
  __int64 v41; // [rsp+CA0h] [rbp-90h]
  __int64 v42; // [rsp+CA8h] [rbp-88h]
  __int64 v43; // [rsp+CB0h] [rbp-80h]
  __int64 v44; // [rsp+CB8h] [rbp-78h]
  __int64 v45; // [rsp+CC0h] [rbp-70h] BYREF
  __m256i v46; // [rsp+CC8h] [rbp-68h]
  __int64 v47; // [rsp+CE8h] [rbp-48h] BYREF
  __int64 v48; // [rsp+CF0h] [rbp-40h]
  __int64 v49; // [rsp+CF8h] [rbp-38h]
  char v50[41]; // [rsp+D07h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f64f9*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1006f6514*/
  v49 = *((_QWORD *)__src + 117); /*0x1006f6520*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f6524*/
  v48 = *((_QWORD *)__src + 116); /*0x1006f6532*/
  v47 = v2; /*0x1006f6536*/
  v30[1] = 0; /*0x1006f653a*/
  v25 = (__int64)&xmmword_1016FFD80; /*0x1006f654c*/
  v26 = 16; /*0x1006f6553*/
  v27 = &unk_1017832C8; /*0x1006f6565*/
  v28 = 7; /*0x1006f656c*/
  v29 = __dst; /*0x1006f6577*/
  v30[0] = &v47; /*0x1006f6582*/
  v3 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x1006f6597*/
  if ( !v3 ) /*0x1006f659f*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x1006f65b6*/
      v24,
      &v25,
      &v27);
    if ( LOBYTE(v24[0]) != 6 ) /*0x1006f65c2*/
    {
      v29 = (_QWORD *)v24[3]; /*0x1006f6868*/
      v28 = v24[2]; /*0x1006f6876*/
      v27 = (void *)v24[1]; /*0x1006f688b*/
      v26 = v24[0]; /*0x1006f6892*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1006f68ab*/
      v25 = 1; /*0x1006f68cc*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f68e7*/
        v14,
        v17[48],
        &v25,
        __src + 880,
        LODWORD(v17[49]),
        HIDWORD(v17[49]));
      goto LABEL_22; /*0x1006f68ec*/
    }
    v3 = v24[1]; /*0x1006f65c8*/
  }
  codexmate_lib::commands::relay::load_relay_state::hbbeb3f6d03becc04(&v18, v3); /*0x1006f65d9*/
  memcpy(v24, __src + 520, sizeof(v24)); /*0x1006f65ed*/
  if ( v18 == 0x8000000000000000LL ) /*0x1006f6606*/
  {
    v44 = v19; /*0x1006f660f*/
    v5 = v20; /*0x1006f6613*/
    v6 = __n; /*0x1006f661a*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f6624*/
    {
      v7 = 0; /*0x1006f662a*/
      goto LABEL_7; /*0x1006f662a*/
    }
    if ( __n ) /*0x1006f6835*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, __src + 520, v4); /*0x1006f683b*/
      v7 = 1; /*0x1006f6840*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006f684e*/
      if ( !v10 ) /*0x1006f6856*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006f662d*/
    }
    else
    {
      v10 = 1; /*0x1006f68f1*/
    }
    v39 = v10; /*0x1006f68f6*/
    memcpy((void *)v10, v5, v6); /*0x1006f6906*/
    if ( v44 ) /*0x1006f6912*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v44, 1); /*0x1006f691c*/
    memcpy(v16, __src + 520, sizeof(v16)); /*0x1006f6930*/
    v8 = v24[48]; /*0x1006f6935*/
    v43 = v24[48]; /*0x1006f693c*/
    v46.i8[0] = 3; /*0x1006f6940*/
    v46.i64[1] = v6; /*0x1006f6944*/
    v46.i64[2] = v39; /*0x1006f694f*/
    v46.i64[3] = v6; /*0x1006f6953*/
    v45 = 1; /*0x1006f6957*/
  }
  else
  {
    memcpy(v30, __srca, sizeof(v30)); /*0x1006f6657*/
    memcpy(v16, __src + 520, sizeof(v16)); /*0x1006f666b*/
    v8 = v24[48]; /*0x1006f6670*/
    v43 = v24[48]; /*0x1006f6677*/
    v25 = v18; /*0x1006f667b*/
    v26 = v19; /*0x1006f6689*/
    v27 = v20; /*0x1006f6690*/
    v28 = __n; /*0x1006f669b*/
    v29 = v22; /*0x1006f66a6*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h1f45d1e277c5271e(&v36, &v25); /*0x1006f66bb*/
    if ( v36 == 0x8000000000000025LL ) /*0x1006f66d5*/
    {
      v46 = v37; /*0x1006f66e9*/
      v9 = 0; /*0x1006f6703*/
    }
    else
    {
      v34 = v38; /*0x1006f6711*/
      v33 = v37; /*0x1006f672d*/
      v32 = v36; /*0x1006f6757*/
      v40 = 0; /*0x1006f675e*/
      v41 = 1; /*0x1006f6769*/
      v42 = 0; /*0x1006f6774*/
      v31[2] = 1610612768; /*0x1006f677f*/
      v31[0] = &v40; /*0x1006f6791*/
      v31[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006f679f*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006f67b4*/
                              &v32,
                              v31) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f6a22*/
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
          55,
          v50,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
      *(_QWORD *)&v35[7] = v40; /*0x1006f67d6*/
      *(_QWORD *)&v35[15] = v41; /*0x1006f67dd*/
      *(_QWORD *)&v35[23] = v42; /*0x1006f67e4*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v32); /*0x1006f67f2*/
      v46.i8[0] = 3; /*0x1006f67f7*/
      *(__int128 *)((char *)v46.i128 + 1) = *(_OWORD *)v35; /*0x1006f6809*/
      *(__int64 *)((char *)&v46.i64[2] + 1) = *(_QWORD *)&v35[16]; /*0x1006f6818*/
      v46.i64[3] = *(_QWORD *)&v35[23]; /*0x1006f6823*/
      v9 = 1; /*0x1006f6827*/
    }
    v45 = v9; /*0x1006f682c*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f6985*/
    v16,
    v8,
    &v45,
    __src + 880,
    LODWORD(v24[49]),
    HIDWORD(v24[49]));
LABEL_22:
  if ( v47 != 0x8000000000000000LL ) /*0x1006f6998*/
  {
    v11 = v48; /*0x1006f699a*/
    for ( i = v49 + 1; i != 1; --i ) /*0x1006f69a2*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f69bd*/
      v11 += 96; /*0x1006f69c2*/
    }
    if ( v47 ) /*0x1006f69ce*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 96 * v47, 8); /*0x1006f69e1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f69f2*/
}