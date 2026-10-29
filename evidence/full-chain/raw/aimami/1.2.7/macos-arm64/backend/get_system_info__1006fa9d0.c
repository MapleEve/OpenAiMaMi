// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6436384cfa2fea73; addr: 0x1006fa9d0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6436384cfa2fea73(
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
  _BYTE v16[400]; // [rsp+20h] [rbp-880h] BYREF
  _BYTE __dst[520]; // [rsp+1B0h] [rbp-6F0h] BYREF
  _BYTE v18[360]; // [rsp+3B8h] [rbp-4E8h] BYREF
  _QWORD v19[50]; // [rsp+520h] [rbp-380h] BYREF
  _QWORD v20[12]; // [rsp+6B0h] [rbp-1F0h] BYREF
  __int64 v21; // [rsp+710h] [rbp-190h] BYREF
  __int64 v22; // [rsp+718h] [rbp-188h]
  void *__srca; // [rsp+720h] [rbp-180h]
  size_t __n; // [rsp+728h] [rbp-178h]
  __int64 v25; // [rsp+730h] [rbp-170h]
  __int64 v26; // [rsp+738h] [rbp-168h]
  __int64 v27; // [rsp+740h] [rbp-160h]
  __int64 v28; // [rsp+748h] [rbp-158h]
  __int64 v29; // [rsp+750h] [rbp-150h]
  __int64 v30; // [rsp+758h] [rbp-148h]
  __int64 v31; // [rsp+760h] [rbp-140h]
  __int64 v32; // [rsp+768h] [rbp-138h]
  _QWORD v33[3]; // [rsp+770h] [rbp-130h] BYREF
  __int64 v34; // [rsp+788h] [rbp-118h] BYREF
  __m256i v35; // [rsp+790h] [rbp-110h]
  __int64 v36; // [rsp+7B0h] [rbp-F0h]
  _BYTE v37[31]; // [rsp+7B9h] [rbp-E7h]
  __int64 v38; // [rsp+7D8h] [rbp-C8h] BYREF
  __m256i v39; // [rsp+7E0h] [rbp-C0h]
  __int64 v40; // [rsp+800h] [rbp-A0h]
  __int64 v41; // [rsp+808h] [rbp-98h]
  __int64 v42; // [rsp+810h] [rbp-90h]
  __int64 v43; // [rsp+818h] [rbp-88h]
  __int64 v44; // [rsp+820h] [rbp-80h] BYREF
  __int64 v45; // [rsp+828h] [rbp-78h]
  __int64 v46; // [rsp+830h] [rbp-70h]
  __int64 v47; // [rsp+838h] [rbp-68h]
  __int64 v48; // [rsp+840h] [rbp-60h] BYREF
  __m256i v49; // [rsp+848h] [rbp-58h]
  __int64 v50; // [rsp+868h] [rbp-38h]
  _BYTE v51[41]; // [rsp+877h] [rbp-29h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fa9f6*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1006faa11*/
  v43 = *((_QWORD *)__src + 117); /*0x1006faa1d*/
  v2 = *((_QWORD *)__src + 115); /*0x1006faa24*/
  v42 = *((_QWORD *)__src + 116); /*0x1006faa32*/
  v41 = v2; /*0x1006faa39*/
  codexmate_lib::commands::system::get_system_info::h452b8ed2c157c746(&v21); /*0x1006faa47*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1006faa65*/
  if ( __OFSUB__(-v21, 1) ) /*0x1006faa74*/
  {
    v4 = v22; /*0x1006faa79*/
    v5 = __srca; /*0x1006faa80*/
    v6 = __n; /*0x1006faa87*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006faa91*/
    {
      v7 = 0; /*0x1006faa97*/
      goto LABEL_4; /*0x1006faa97*/
    }
    if ( __n ) /*0x1006faccd*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, __src + 520, v3); /*0x1006faccf*/
      v7 = 1; /*0x1006facd4*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006face2*/
      if ( !v10 ) /*0x1006facea*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006faa9a*/
    }
    else
    {
      v10 = 1; /*0x1006facf1*/
    }
    v50 = v10; /*0x1006facf6*/
    memcpy((void *)v10, v5, v6); /*0x1006fad03*/
    if ( v4 ) /*0x1006fad0b*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1006fad18*/
    memcpy(v18, __src + 520, sizeof(v18)); /*0x1006fad2c*/
    v8 = v19[48]; /*0x1006fad31*/
    v47 = v19[48]; /*0x1006fad38*/
    v49.i8[0] = 3; /*0x1006fad3c*/
    v49.i64[1] = v6; /*0x1006fad40*/
    v49.i64[2] = v50; /*0x1006fad48*/
    v49.i64[3] = v6; /*0x1006fad4c*/
    v48 = 1; /*0x1006fad50*/
  }
  else
  {
    v20[11] = v32; /*0x1006faab8*/
    v20[10] = v31; /*0x1006faac6*/
    v20[9] = v30; /*0x1006faad4*/
    v20[8] = v29; /*0x1006faae2*/
    v20[7] = v28; /*0x1006faaf0*/
    v20[6] = v27; /*0x1006fab05*/
    v20[5] = v26; /*0x1006fab0c*/
    memcpy(v18, __src + 520, sizeof(v18)); /*0x1006fab22*/
    v8 = v19[48]; /*0x1006fab27*/
    v47 = v19[48]; /*0x1006fab2e*/
    v20[0] = v21; /*0x1006fab32*/
    v20[1] = v22; /*0x1006fab40*/
    v20[2] = __srca; /*0x1006fab47*/
    v20[3] = __n; /*0x1006fab52*/
    v20[4] = v25; /*0x1006fab5d*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h6ac457f0245a4c77(&v38, v20); /*0x1006fab72*/
    if ( v38 == 0x8000000000000025LL ) /*0x1006fab82*/
    {
      v49 = v39; /*0x1006fab96*/
      v9 = 0; /*0x1006fabb0*/
    }
    else
    {
      v36 = v40; /*0x1006fabbe*/
      v35 = v39; /*0x1006fabda*/
      v34 = v38; /*0x1006fac04*/
      v44 = 0; /*0x1006fac0b*/
      v45 = 1; /*0x1006fac13*/
      v46 = 0; /*0x1006fac1b*/
      v33[2] = 1610612768; /*0x1006fac23*/
      v33[0] = &v44; /*0x1006fac32*/
      v33[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x1006fac40*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006fac55*/
                              &v34,
                              v33) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006fae1d*/
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
          55,
          v51,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
          &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
      *(_QWORD *)&v37[7] = v44; /*0x1006fac6e*/
      *(_QWORD *)&v37[15] = v45; /*0x1006fac75*/
      *(_QWORD *)&v37[23] = v46; /*0x1006fac7c*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v34); /*0x1006fac8a*/
      v49.i8[0] = 3; /*0x1006fac8f*/
      *(__int128 *)((char *)v49.i128 + 1) = *(_OWORD *)v37; /*0x1006faca1*/
      *(__int64 *)((char *)&v49.i64[2] + 1) = *(_QWORD *)&v37[16]; /*0x1006facb0*/
      v49.i64[3] = *(_QWORD *)&v37[23]; /*0x1006facbb*/
      v9 = 1; /*0x1006facbf*/
    }
    v48 = v9; /*0x1006facc4*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006fad85*/
    v18,
    v8,
    &v48,
    &v19[45],
    LODWORD(v19[49]),
    HIDWORD(v19[49]));
  v11 = v41; /*0x1006fad8a*/
  if ( v41 != 0x8000000000000000LL ) /*0x1006fad94*/
  {
    v12 = v42; /*0x1006fad96*/
    v13 = v43 + 1; /*0x1006fada4*/
    v14 = v42; /*0x1006fada7*/
    while ( v13 != 1 ) /*0x1006fadb4*/
    {
      --v13; /*0x1006fadba*/
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006fadbd*/
      v14 += 96; /*0x1006fadc2*/
    }
    if ( v11 ) /*0x1006fadca*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 96 * v11, 8); /*0x1006faddc*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006faded*/
}