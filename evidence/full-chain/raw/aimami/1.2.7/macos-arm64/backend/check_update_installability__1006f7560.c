// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h4ae808ecb5c76dbf; addr: 0x1006f7560; session: <审计会话>; decompiled_at: 2026-10-26T03:22:22Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h4ae808ecb5c76dbf(
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
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdi
  _BYTE v16[400]; // [rsp+20h] [rbp-860h] BYREF
  _BYTE __dst[520]; // [rsp+1B0h] [rbp-6D0h] BYREF
  _BYTE v18[360]; // [rsp+3B8h] [rbp-4C8h] BYREF
  _QWORD v19[50]; // [rsp+520h] [rbp-360h] BYREF
  _QWORD v20[10]; // [rsp+6B0h] [rbp-1D0h] BYREF
  __int64 v21; // [rsp+700h] [rbp-180h] BYREF
  __int64 v22; // [rsp+708h] [rbp-178h]
  void *__srca; // [rsp+710h] [rbp-170h]
  size_t __n; // [rsp+718h] [rbp-168h]
  __int64 v25; // [rsp+720h] [rbp-160h]
  __int64 v26; // [rsp+728h] [rbp-158h]
  __int64 v27; // [rsp+730h] [rbp-150h]
  __int64 v28; // [rsp+738h] [rbp-148h]
  __int64 v29; // [rsp+740h] [rbp-140h]
  __int64 v30; // [rsp+748h] [rbp-138h]
  _QWORD v31[3]; // [rsp+750h] [rbp-130h] BYREF
  __int64 v32; // [rsp+768h] [rbp-118h] BYREF
  __m256i v33; // [rsp+770h] [rbp-110h]
  __int64 v34; // [rsp+790h] [rbp-F0h]
  _BYTE v35[31]; // [rsp+799h] [rbp-E7h]
  __int64 v36; // [rsp+7B8h] [rbp-C8h] BYREF
  __m256i v37; // [rsp+7C0h] [rbp-C0h]
  __int64 v38; // [rsp+7E0h] [rbp-A0h]
  __int64 v39; // [rsp+7E8h] [rbp-98h]
  __int64 v40; // [rsp+7F0h] [rbp-90h]
  __int64 v41; // [rsp+7F8h] [rbp-88h]
  __int64 v42; // [rsp+800h] [rbp-80h] BYREF
  __int64 v43; // [rsp+808h] [rbp-78h]
  __int64 v44; // [rsp+810h] [rbp-70h]
  __int64 v45; // [rsp+818h] [rbp-68h]
  __int64 v46; // [rsp+820h] [rbp-60h] BYREF
  __m256i v47; // [rsp+828h] [rbp-58h]
  __int64 v48; // [rsp+848h] [rbp-38h]
  _BYTE v49[41]; // [rsp+857h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f7586*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1006f75a1*/
  v41 = *((_QWORD *)__src + 117); /*0x1006f75ad*/
  v2 = *((_QWORD *)__src + 115); /*0x1006f75b4*/
  v40 = *((_QWORD *)__src + 116); /*0x1006f75c2*/
  v39 = v2; /*0x1006f75c9*/
  codexmate_lib::platform::update::check_update_installability::h357d5674365e5a33(&v21); /*0x1006f75d7*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1006f75f5*/
  if ( __OFSUB__(-v21, 1) ) /*0x1006f7604*/
  {
    v4 = v22; /*0x1006f7609*/
    v5 = __srca; /*0x1006f7610*/
    v6 = __n; /*0x1006f7617*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f7621*/
    {
      v7 = 0; /*0x1006f7627*/
      goto LABEL_4; /*0x1006f7627*/
    }
    if ( __n ) /*0x1006f7841*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, __src + 520, v3); /*0x1006f7843*/
      v7 = 1; /*0x1006f7848*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006f7856*/
      if ( !v10 ) /*0x1006f785e*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006f762a*/
    }
    else
    {
      v10 = 1; /*0x1006f7865*/
    }
    v48 = v10; /*0x1006f786a*/
    memcpy((void *)v10, v5, v6); /*0x1006f7877*/
    if ( v4 ) /*0x1006f787f*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1006f788c*/
    memcpy(v18, __src + 520, sizeof(v18)); /*0x1006f78a0*/
    v8 = v19[48]; /*0x1006f78a5*/
    v45 = v19[48]; /*0x1006f78ac*/
    v47.i8[0] = 3; /*0x1006f78b0*/
    v47.i64[1] = v6; /*0x1006f78b4*/
    v47.i64[2] = v48; /*0x1006f78bc*/
    v47.i64[3] = v6; /*0x1006f78c0*/
    v46 = 1; /*0x1006f78c4*/
  }
  else
  {
    v20[9] = v30; /*0x1006f7648*/
    v20[8] = v29; /*0x1006f7656*/
    v20[7] = v28; /*0x1006f7664*/
    v20[6] = v27; /*0x1006f7679*/
    v20[5] = v26; /*0x1006f7680*/
    memcpy(v18, __src + 520, sizeof(v18)); /*0x1006f7696*/
    v8 = v19[48]; /*0x1006f769b*/
    v45 = v19[48]; /*0x1006f76a2*/
    v20[0] = v21; /*0x1006f76a6*/
    v20[1] = v22; /*0x1006f76b4*/
    v20[2] = __srca; /*0x1006f76bb*/
    v20[3] = __n; /*0x1006f76c6*/
    v20[4] = v25; /*0x1006f76d1*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hb0611d14f8643581(&v36, v20); /*0x1006f76e6*/
    if ( v36 == 0x8000000000000025LL ) /*0x1006f76f6*/
    {
      v47 = v37; /*0x1006f770a*/
      v9 = 0; /*0x1006f7724*/
    }
    else
    {
      v34 = v38; /*0x1006f7732*/
      v33 = v37; /*0x1006f774e*/
      v32 = v36; /*0x1006f7778*/
      v42 = 0; /*0x1006f777f*/
      v43 = 1; /*0x1006f7787*/
      v44 = 0; /*0x1006f778f*/
      v31[2] = 1610612768; /*0x1006f7797*/
      v31[0] = &v42; /*0x1006f77a6*/
      v31[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006f77b4*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006f77c9*/
                              &v32,
                              v31) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f798d*/
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
          55,
          v49,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
      *(_QWORD *)&v35[7] = v42; /*0x1006f77e2*/
      *(_QWORD *)&v35[15] = v43; /*0x1006f77e9*/
      *(_QWORD *)&v35[23] = v44; /*0x1006f77f0*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v32); /*0x1006f77fe*/
      v47.i8[0] = 3; /*0x1006f7803*/
      *(__int128 *)((char *)v47.i128 + 1) = *(_OWORD *)v35; /*0x1006f7815*/
      *(__int64 *)((char *)&v47.i64[2] + 1) = *(_QWORD *)&v35[16]; /*0x1006f7824*/
      v47.i64[3] = *(_QWORD *)&v35[23]; /*0x1006f782f*/
      v9 = 1; /*0x1006f7833*/
    }
    v46 = v9; /*0x1006f7838*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f78f9*/
    v18,
    v8,
    &v46,
    &v19[45],
    LODWORD(v19[49]),
    HIDWORD(v19[49]));
  v11 = v39; /*0x1006f78fe*/
  if ( v39 != 0x8000000000000000LL ) /*0x1006f7908*/
  {
    v12 = v40; /*0x1006f790a*/
    v13 = v41 + 1; /*0x1006f7918*/
    v14 = v40; /*0x1006f791b*/
    while ( v13 != 1 ) /*0x1006f7924*/
    {
      --v13; /*0x1006f792a*/
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f792d*/
      v14 += 96; /*0x1006f7932*/
    }
    if ( v11 ) /*0x1006f793a*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 96 * v11, 8); /*0x1006f794c*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f795d*/
}