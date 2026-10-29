// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h589c4618dea6ecd9; addr: 0x1006f8200; session: <审计会话>; decompiled_at: 2026-10-26T03:22:34Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h589c4618dea6ecd9(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  void *v5; // r13
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+20h] [rbp-AD0h] BYREF
  _BYTE __dst[520]; // [rsp+188h] [rbp-968h] BYREF
  _QWORD v16[50]; // [rsp+390h] [rbp-760h] BYREF
  _QWORD v17[5]; // [rsp+520h] [rbp-5D0h] BYREF
  _BYTE v18[160]; // [rsp+548h] [rbp-5A8h] BYREF
  __int64 v19; // [rsp+5E8h] [rbp-508h] BYREF
  __int64 v20; // [rsp+5F0h] [rbp-500h]
  void *v21; // [rsp+5F8h] [rbp-4F8h]
  size_t __n; // [rsp+600h] [rbp-4F0h]
  __int64 v23; // [rsp+608h] [rbp-4E8h]
  _BYTE __srca[160]; // [rsp+610h] [rbp-4E0h] BYREF
  _QWORD v25[45]; // [rsp+6B0h] [rbp-440h] BYREF
  _QWORD v26[50]; // [rsp+818h] [rbp-2D8h] BYREF
  _QWORD v27[3]; // [rsp+9A8h] [rbp-148h] BYREF
  _QWORD v28[3]; // [rsp+9C0h] [rbp-130h] BYREF
  __int64 v29; // [rsp+9D8h] [rbp-118h] BYREF
  __m256i v30; // [rsp+9E0h] [rbp-110h]
  __int64 v31; // [rsp+A00h] [rbp-F0h]
  _BYTE v32[31]; // [rsp+A09h] [rbp-E7h]
  __int64 v33; // [rsp+A28h] [rbp-C8h] BYREF
  __m256i v34; // [rsp+A30h] [rbp-C0h]
  __int64 v35; // [rsp+A50h] [rbp-A0h]
  __int64 v36; // [rsp+A58h] [rbp-98h]
  __int64 v37; // [rsp+A60h] [rbp-90h] BYREF
  __int64 v38; // [rsp+A68h] [rbp-88h]
  __int64 v39; // [rsp+A70h] [rbp-80h]
  __int64 v40; // [rsp+A78h] [rbp-78h]
  __int64 v41; // [rsp+A80h] [rbp-70h] BYREF
  __m256i v42; // [rsp+A88h] [rbp-68h]
  __int64 v43; // [rsp+AA8h] [rbp-48h] BYREF
  __int64 v44; // [rsp+AB0h] [rbp-40h]
  __int64 v45; // [rsp+AB8h] [rbp-38h]
  _BYTE v46[41]; // [rsp+AC7h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f8229*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1006f8244*/
  v45 = *((_QWORD *)__src + 117); /*0x1006f8250*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f8254*/
  v44 = *((_QWORD *)__src + 116); /*0x1006f8262*/
  v43 = v2; /*0x1006f8266*/
  v26[6] = 0; /*0x1006f826a*/
  v26[0] = "parse_aimami_deeplinkAiMaMi"; /*0x1006f827c*/
  v26[1] = 21; /*0x1006f8283*/
  v26[2] = &unk_1017832FC; /*0x1006f8295*/
  v26[3] = 3; /*0x1006f829c*/
  v26[4] = __dst; /*0x1006f82a7*/
  v26[5] = &v43; /*0x1006f82b2*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8f850073ee97edf6(v25, v26); /*0x1006f82ca*/
  if ( LOBYTE(v25[0]) == 6 ) /*0x1006f82e0*/
  {
    v28[2] = v25[3]; /*0x1006f82ed*/
    v28[1] = v25[2]; /*0x1006f8302*/
    v28[0] = v25[1]; /*0x1006f8309*/
    codexmate_lib::commands::deeplink::parse_aimami_deeplink::he11e0cf6c885714c(&v19, v28); /*0x1006f831e*/
    memcpy(v26, __src + 520, sizeof(v26)); /*0x1006f8332*/
    if ( v19 == 0x8000000000000000LL ) /*0x1006f8341*/
    {
      v4 = v20; /*0x1006f8347*/
      v5 = v21; /*0x1006f834e*/
      v6 = __n; /*0x1006f8355*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f835f*/
      {
        v7 = 0; /*0x1006f8365*/
        goto LABEL_5; /*0x1006f8365*/
      }
      if ( __n ) /*0x1006f85f0*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, __src + 520, v3); /*0x1006f85f2*/
        v7 = 1; /*0x1006f85f7*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006f8605*/
        if ( !v10 ) /*0x1006f860d*/
LABEL_5:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006f8368*/
      }
      else
      {
        v10 = 1; /*0x1006f8614*/
      }
      v36 = v10; /*0x1006f8619*/
      memcpy((void *)v10, v5, v6); /*0x1006f8629*/
      if ( v4 ) /*0x1006f8631*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1006f863e*/
      memcpy(v25, __src + 520, sizeof(v25)); /*0x1006f8652*/
      v8 = v26[48]; /*0x1006f8657*/
      v40 = v26[48]; /*0x1006f865e*/
      v42.i8[0] = 3; /*0x1006f8662*/
      v42.i64[1] = v6; /*0x1006f8666*/
      v42.i64[2] = v36; /*0x1006f8671*/
      v42.i64[3] = v6; /*0x1006f8675*/
      v41 = 1; /*0x1006f8679*/
    }
    else
    {
      memcpy(v18, __srca, sizeof(v18)); /*0x1006f8422*/
      memcpy(v25, __src + 520, sizeof(v25)); /*0x1006f8436*/
      v8 = v26[48]; /*0x1006f843b*/
      v40 = v26[48]; /*0x1006f8442*/
      v17[0] = v19; /*0x1006f8446*/
      v17[1] = v20; /*0x1006f8454*/
      v17[2] = v21; /*0x1006f845b*/
      v17[3] = __n; /*0x1006f8466*/
      v17[4] = v23; /*0x1006f8471*/
      _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hff54e93bd586f3e7(&v33, v17); /*0x1006f8486*/
      if ( v33 == 0x8000000000000025LL ) /*0x1006f8496*/
      {
        v42 = v34; /*0x1006f84aa*/
        v9 = 0; /*0x1006f84c4*/
      }
      else
      {
        v31 = v35; /*0x1006f84d2*/
        v30 = v34; /*0x1006f84ee*/
        v29 = v33; /*0x1006f8518*/
        v37 = 0; /*0x1006f851f*/
        v38 = 1; /*0x1006f852a*/
        v39 = 0; /*0x1006f8535*/
        v27[2] = 1610612768; /*0x1006f853d*/
        v27[0] = &v37; /*0x1006f854f*/
        v27[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006f855d*/
        if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006f8572*/
                                &v29,
                                v27) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f8742*/
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
            55,
            v46,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
        *(_QWORD *)&v32[7] = v37; /*0x1006f8591*/
        *(_QWORD *)&v32[15] = v38; /*0x1006f8598*/
        *(_QWORD *)&v32[23] = v39; /*0x1006f859f*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v29); /*0x1006f85ad*/
        v42.i8[0] = 3; /*0x1006f85b2*/
        *(__int128 *)((char *)v42.i128 + 1) = *(_OWORD *)v32; /*0x1006f85c4*/
        *(__int64 *)((char *)&v42.i64[2] + 1) = *(_QWORD *)&v32[16]; /*0x1006f85d3*/
        v42.i64[3] = *(_QWORD *)&v32[23]; /*0x1006f85de*/
        v9 = 1; /*0x1006f85e2*/
      }
      v41 = v9; /*0x1006f85e7*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f86ae*/
      v25,
      v8,
      &v41,
      &v26[45],
      LODWORD(v26[49]),
      HIDWORD(v26[49]));
  }
  else
  {
    v26[4] = v25[3]; /*0x1006f837f*/
    v26[3] = v25[2]; /*0x1006f838d*/
    v26[2] = v25[1]; /*0x1006f83a2*/
    v26[1] = v25[0]; /*0x1006f83a9*/
    memcpy(v14, __src + 520, sizeof(v14)); /*0x1006f83c2*/
    v26[0] = 1; /*0x1006f83e3*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f83fe*/
      v14,
      v16[48],
      v26,
      __src + 880,
      LODWORD(v16[49]),
      HIDWORD(v16[49]));
  }
  if ( v43 != 0x8000000000000000LL ) /*0x1006f86b7*/
  {
    v11 = v44; /*0x1006f86b9*/
    for ( i = v45 + 1; i != 1; --i ) /*0x1006f86c1*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f86dd*/
      v11 += 96; /*0x1006f86e2*/
    }
    if ( v43 ) /*0x1006f86ee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 96 * v43, 8); /*0x1006f8701*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f8712*/
}