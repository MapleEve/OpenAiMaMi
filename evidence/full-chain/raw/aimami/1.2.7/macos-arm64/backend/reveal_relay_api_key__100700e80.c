// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbe080fc07cb5953b; addr: 0x100700e80; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbe080fc07cb5953b(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r14
  void *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 i; // r15
  _BYTE v18[360]; // [rsp+18h] [rbp-B78h] BYREF
  _BYTE v19[360]; // [rsp+180h] [rbp-A10h] BYREF
  _QWORD __dst[65]; // [rsp+2E8h] [rbp-8A8h] BYREF
  _QWORD v21[50]; // [rsp+4F0h] [rbp-6A0h] BYREF
  _QWORD v22[45]; // [rsp+680h] [rbp-510h] BYREF
  _QWORD v23[50]; // [rsp+7E8h] [rbp-3A8h] BYREF
  __int64 v24; // [rsp+978h] [rbp-218h] BYREF
  __int64 v25; // [rsp+980h] [rbp-210h]
  void *v26; // [rsp+988h] [rbp-208h]
  size_t __n; // [rsp+990h] [rbp-200h]
  __int64 v28; // [rsp+998h] [rbp-1F8h]
  __int64 v29; // [rsp+9A0h] [rbp-1F0h]
  __int64 v30; // [rsp+9A8h] [rbp-1E8h]
  __int64 v31; // [rsp+9B0h] [rbp-1E0h]
  __int64 v32; // [rsp+9B8h] [rbp-1D8h]
  __int64 v33; // [rsp+9C0h] [rbp-1D0h]
  __int64 v34; // [rsp+9C8h] [rbp-1C8h]
  __int64 v35; // [rsp+9D0h] [rbp-1C0h]
  __int64 v36; // [rsp+9D8h] [rbp-1B8h]
  _QWORD v37[3]; // [rsp+9E0h] [rbp-1B0h] BYREF
  _QWORD v38[3]; // [rsp+9F8h] [rbp-198h] BYREF
  __int64 v39; // [rsp+A10h] [rbp-180h] BYREF
  __m256i v40; // [rsp+A18h] [rbp-178h]
  __int64 v41; // [rsp+A38h] [rbp-158h]
  __int64 v42; // [rsp+A40h] [rbp-150h] BYREF
  __int64 v43; // [rsp+A48h] [rbp-148h]
  void *v44; // [rsp+A50h] [rbp-140h]
  size_t v45; // [rsp+A58h] [rbp-138h]
  __int64 v46; // [rsp+A60h] [rbp-130h]
  __int64 v47; // [rsp+A68h] [rbp-128h]
  __int64 v48; // [rsp+A70h] [rbp-120h]
  __int64 v49; // [rsp+A78h] [rbp-118h]
  __int64 v50; // [rsp+A80h] [rbp-110h]
  __int64 v51; // [rsp+A88h] [rbp-108h]
  __int64 v52; // [rsp+A90h] [rbp-100h]
  __int64 v53; // [rsp+A98h] [rbp-F8h]
  __int64 v54; // [rsp+AA0h] [rbp-F0h]
  _BYTE v55[31]; // [rsp+AA9h] [rbp-E7h]
  __int64 v56; // [rsp+AC8h] [rbp-C8h] BYREF
  __m256i v57; // [rsp+AD0h] [rbp-C0h]
  __int64 v58; // [rsp+AF0h] [rbp-A0h]
  __int64 v59; // [rsp+AF8h] [rbp-98h] BYREF
  __int64 v60; // [rsp+B00h] [rbp-90h]
  __int64 v61; // [rsp+B08h] [rbp-88h]
  __int64 v62; // [rsp+B10h] [rbp-80h]
  __int64 v63; // [rsp+B18h] [rbp-78h] BYREF
  __m256i v64; // [rsp+B20h] [rbp-70h]
  __int64 v65; // [rsp+B40h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B48h] [rbp-48h]
  __int64 v67; // [rsp+B50h] [rbp-40h]
  void *__srca; // [rsp+B58h] [rbp-38h]
  char v69; // [rsp+B63h] [rbp-2Dh] BYREF
  int v70; // [rsp+B64h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x100700ea9*/
  __srca = __src + 520; /*0x100700ec1*/
  memcpy(v21, __src + 520, sizeof(v21)); /*0x100700ec5*/
  v67 = *((_QWORD *)__src + 117); /*0x100700ed1*/
  v2 = *((_QWORD *)__src + 115); /*0x100700ed5*/
  v66 = *((_QWORD *)__src + 116); /*0x100700ee3*/
  v65 = v2; /*0x100700ee7*/
  v23[6] = 0; /*0x100700eeb*/
  v23[0] = "reveal_relay_api_key"; /*0x100700efd*/
  v23[1] = 20; /*0x100700f04*/
  v3 = &unk_1017832C8; /*0x100700f0f*/
  v23[2] = &unk_1017832C8; /*0x100700f16*/
  v23[3] = 7; /*0x100700f1d*/
  v23[4] = __dst; /*0x100700f28*/
  v23[5] = &v65; /*0x100700f33*/
  LOBYTE(v3) = 1; /*0x100700f45*/
  v70 = (int)v3; /*0x100700f47*/
  v4 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(__dst[64] + 16LL); /*0x100700f4a*/
  v5 = v4; /*0x100700f4f*/
  if ( v4 ) /*0x100700f55*/
  {
    v43 = v4; /*0x100700f57*/
    LOBYTE(v42) = 6; /*0x100700f5e*/
  }
  else
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hfaf0c739a5537847( /*0x100700f7c*/
      &v42,
      v23,
      &v23[2]);
    if ( (_BYTE)v42 != 6 ) /*0x100700f88*/
    {
      v23[4] = v45; /*0x100701258*/
      v23[3] = v44; /*0x100701266*/
      v23[2] = v43; /*0x10070127b*/
      v23[1] = v42; /*0x100701282*/
      memcpy(v19, __srca, sizeof(v19)); /*0x10070129c*/
      v23[0] = 1; /*0x1007012bd*/
      v70 = 0; /*0x1007012c8*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1007012dc*/
        v19,
        v21[48],
        v23,
        __src + 880,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      goto LABEL_26; /*0x1007012dc*/
    }
    v5 = v43; /*0x100700f8e*/
  }
  v23[6] = 0; /*0x100700f95*/
  v23[0] = "reveal_relay_api_key"; /*0x100700fa0*/
  v23[1] = 20; /*0x100700fa7*/
  v23[2] = &unk_1017832FF; /*0x100700fb9*/
  v23[3] = 10; /*0x100700fc0*/
  v23[4] = __dst; /*0x100700fcb*/
  v23[5] = &v65; /*0x100700fd2*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8f850073ee97edf6(v22, v23); /*0x100700fe7*/
  if ( LOBYTE(v22[0]) == 6 ) /*0x100700ff3*/
  {
    v38[2] = v22[3]; /*0x100701000*/
    v38[1] = v22[2]; /*0x100701015*/
    v38[0] = v22[1]; /*0x10070101c*/
    codexmate_lib::commands::relay::reveal_relay_api_key::hcef2d56b673e7bea(&v24, v5, v38); /*0x100701034*/
    memcpy(v23, __srca, sizeof(v23)); /*0x10070104c*/
    if ( v24 == 0x8000000000000000LL ) /*0x100701065*/
    {
      v7 = v25; /*0x10070106b*/
      v8 = v26; /*0x100701072*/
      v9 = __n; /*0x100701079*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100701083*/
      {
        v10 = 0; /*0x100701089*/
        goto LABEL_9; /*0x100701089*/
      }
      if ( __n ) /*0x10070141b*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, __srca, v6); /*0x10070141d*/
        v10 = 1; /*0x100701422*/
        v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x100701430*/
        if ( !v13 ) /*0x100701438*/
LABEL_9:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x10070108c*/
        v14 = v13; /*0x10070143e*/
      }
      else
      {
        v14 = 1; /*0x10070144d*/
      }
      memcpy((void *)v14, v8, v9); /*0x10070145c*/
      if ( v7 ) /*0x100701464*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x100701471*/
      memcpy(v22, __srca, sizeof(v22)); /*0x100701486*/
      v11 = v23[48]; /*0x10070148b*/
      v62 = v23[48]; /*0x100701492*/
      v64.i8[0] = 3; /*0x100701496*/
      v64.i64[1] = v9; /*0x10070149a*/
      v64.i64[2] = v14; /*0x10070149e*/
      v64.i64[3] = v9; /*0x1007014a2*/
      v63 = 1; /*0x1007014a6*/
    }
    else
    {
      v54 = v36; /*0x10070113f*/
      v53 = v35; /*0x10070114d*/
      v52 = v34; /*0x10070115b*/
      v51 = v33; /*0x100701169*/
      v50 = v32; /*0x100701177*/
      v49 = v31; /*0x100701185*/
      v48 = v30; /*0x10070119a*/
      v47 = v29; /*0x1007011a1*/
      memcpy(v22, __srca, sizeof(v22)); /*0x1007011b7*/
      v11 = v23[48]; /*0x1007011bc*/
      v62 = v23[48]; /*0x1007011c3*/
      v42 = v24; /*0x1007011c7*/
      v43 = v25; /*0x1007011d5*/
      v44 = v26; /*0x1007011dc*/
      v45 = __n; /*0x1007011e7*/
      v46 = v28; /*0x1007011f2*/
      _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h7547acf916206997(&v56, &v42); /*0x100701207*/
      if ( v56 == 0x8000000000000025LL ) /*0x100701218*/
      {
        v64 = v57; /*0x100701230*/
        v12 = 0; /*0x10070124a*/
      }
      else
      {
        v41 = v58; /*0x1007012f7*/
        v40 = v57; /*0x100701313*/
        v39 = v56; /*0x10070133d*/
        v59 = 0; /*0x100701344*/
        v60 = 1; /*0x10070134f*/
        v61 = 0; /*0x10070135a*/
        v37[2] = 1610612768; /*0x100701365*/
        v37[0] = &v59; /*0x100701377*/
        v37[1] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1328; /*0x100701385*/
        if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x10070139a*/
                                &v39,
                                v37) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100701562*/
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1329,
            55,
            &v69,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1342,
            &anon_1d5e2ba954832094e55fcdce7f3204cb_1331);
        *(_QWORD *)&v55[7] = v59; /*0x1007013bc*/
        *(_QWORD *)&v55[15] = v60; /*0x1007013c3*/
        *(_QWORD *)&v55[23] = v61; /*0x1007013ca*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v39); /*0x1007013d8*/
        v64.i8[0] = 3; /*0x1007013dd*/
        *(__int128 *)((char *)v64.i128 + 1) = *(_OWORD *)v55; /*0x1007013ef*/
        *(__int64 *)((char *)&v64.i64[2] + 1) = *(_QWORD *)&v55[16]; /*0x1007013fe*/
        v64.i64[3] = *(_QWORD *)&v55[23]; /*0x100701409*/
        v12 = 1; /*0x10070140d*/
      }
      v63 = v12; /*0x100701412*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1007014d1*/
      v22,
      v11,
      &v63,
      &v23[45],
      LODWORD(v23[49]),
      HIDWORD(v23[49]));
  }
  else
  {
    v23[4] = v22[3]; /*0x1007010a3*/
    v23[3] = v22[2]; /*0x1007010b1*/
    v23[2] = v22[1]; /*0x1007010c6*/
    v23[1] = v22[0]; /*0x1007010cd*/
    memcpy(v18, __srca, sizeof(v18)); /*0x1007010e7*/
    v23[0] = 1; /*0x100701108*/
    v70 = 0; /*0x100701113*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100701127*/
      v18,
      v21[48],
      v23,
      __src + 880,
      LODWORD(v21[49]),
      HIDWORD(v21[49]));
  }
LABEL_26:
  if ( v65 != 0x8000000000000000LL ) /*0x1007014da*/
  {
    v15 = v66; /*0x1007014dc*/
    for ( i = v67 + 1; i != 1; --i ) /*0x1007014e4*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1007014fd*/
      v15 += 96; /*0x100701502*/
    }
    if ( v65 ) /*0x10070150e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, 96 * v65, 8); /*0x100701521*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x100701532*/
}