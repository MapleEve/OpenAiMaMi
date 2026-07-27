// __ZN13codexmate_lib4core10api_client11http_client @ 0x1007b6600 | 基线 same-set
__int64 __fastcall codexmate_lib::core::api_client::http_client::hd6199412cc486f7f(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4)
{
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  int v10; // r14d
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r12
  void *v21; // rax
  __int64 v22; // r13
  volatile signed __int64 *v23; // r13
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rt0
  __int64 v28; // rsi
  char v29; // r14
  __int64 v30; // r12
  volatile signed __int64 *v31; // rax
  __int64 v32; // rcx
  _BYTE __dst[952]; // [rsp+8h] [rbp-D18h] BYREF
  _QWORD v34[135]; // [rsp+3C0h] [rbp-960h] BYREF
  char v35; // [rsp+7F8h] [rbp-528h]
  __int64 v36; // [rsp+800h] [rbp-520h]
  __int64 v37; // [rsp+808h] [rbp-518h]
  __int64 v38; // [rsp+810h] [rbp-510h]
  _BYTE v39[72]; // [rsp+818h] [rbp-508h] BYREF
  unsigned __int64 v40; // [rsp+860h] [rbp-4C0h]
  _QWORD __src[119]; // [rsp+878h] [rbp-4A8h] BYREF
  _QWORD v42[4]; // [rsp+C30h] [rbp-F0h] BYREF
  __int64 v43; // [rsp+C50h] [rbp-D0h]
  __int64 v44; // [rsp+C58h] [rbp-C8h]
  __int64 v45; // [rsp+C60h] [rbp-C0h]
  __int64 v46; // [rsp+C68h] [rbp-B8h]
  __int64 v47; // [rsp+C70h] [rbp-B0h]
  __int64 v48; // [rsp+C78h] [rbp-A8h]
  __int64 v49; // [rsp+C80h] [rbp-A0h]
  unsigned __int64 v50; // [rsp+C88h] [rbp-98h]
  volatile signed __int64 *v51; // [rsp+C90h] [rbp-90h]
  __int64 v52; // [rsp+C98h] [rbp-88h]
  __int64 v53; // [rsp+CA0h] [rbp-80h]
  __int64 v54; // [rsp+CA8h] [rbp-78h]
  __int64 v55; // [rsp+CB0h] [rbp-70h] BYREF
  __int64 *v56; // [rsp+CB8h] [rbp-68h]
  __int64 v57; // [rsp+CC0h] [rbp-60h]
  void *__s2; // [rsp+CC8h] [rbp-58h]
  __int64 v59; // [rsp+CD0h] [rbp-50h]
  __int64 v60; // [rsp+CD8h] [rbp-48h]
  __int64 v61; // [rsp+CE0h] [rbp-40h]
  int v62; // [rsp+CECh] [rbp-34h]
  __int64 v63; // [rsp+CF0h] [rbp-30h]

  codexmate_lib::core::api_client::sanitize_proxy_config::h442c99beeb88638a(__src); /*0x1007b661e*/
  v5 = __src[0]; /*0x1007b6623*/
  v34[0] = __src[1]; /*0x1007b6631*/
  v34[1] = __src[2]; /*0x1007b663f*/
  v34[2] = __src[3]; /*0x1007b664d*/
  v34[3] = __src[4]; /*0x1007b665b*/
  if ( __src[0] != 11 ) /*0x1007b6666*/
  {
    *(_QWORD *)(a1 + 88) = __src[11]; /*0x1007b67af*/
    *(_QWORD *)(a1 + 80) = __src[10]; /*0x1007b67ba*/
    *(_QWORD *)(a1 + 72) = __src[9]; /*0x1007b67c5*/
    *(_QWORD *)(a1 + 64) = __src[8]; /*0x1007b67d0*/
    *(_QWORD *)(a1 + 56) = __src[7]; /*0x1007b67db*/
    v15 = __src[5]; /*0x1007b67df*/
    *(_QWORD *)(a1 + 48) = __src[6]; /*0x1007b67ed*/
    *(_QWORD *)(a1 + 40) = v15; /*0x1007b67f1*/
    *(_QWORD *)(a1 + 32) = v34[3]; /*0x1007b67fc*/
    *(_QWORD *)(a1 + 24) = v34[2]; /*0x1007b6807*/
    v16 = v34[0]; /*0x1007b680b*/
    *(_QWORD *)(a1 + 16) = v34[1]; /*0x1007b6819*/
    *(_QWORD *)(a1 + 8) = v16; /*0x1007b681d*/
    *(_QWORD *)a1 = v5; /*0x1007b6821*/
    return a1; /*0x1007b6824*/
  }
  v57 = v34[0]; /*0x1007b667a*/
  __s2 = (void *)v34[1]; /*0x1007b667e*/
  v59 = v34[2]; /*0x1007b6689*/
  v60 = v34[3]; /*0x1007b6694*/
  if ( codexmate_lib::core::api_client::http_client::CLIENT::h14b644dfed54ff6a ) /*0x1007b66a2*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h49c013063bd424db(&codexmate_lib::core::api_client::http_client::CLIENT::h14b644dfed54ff6a); /*0x1007b6830*/
  v6 = (__int64 *)qword_1019FF150; /*0x1007b66a8*/
  if ( !qword_1019FF150 ) /*0x1007b66b2*/
    v6 = (__int64 *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&qword_1019FF150); /*0x1007b6846*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x1007b66b8*/
  v9 = 0x7FFFFFFFFFFFFFFFLL; /*0x1007b66d1*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1007b66d8*/
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x1007b6853*/
    LOBYTE(v10) = v10 ^ 1; /*0x1007b6856*/
    if ( byte_1019FF158 ) /*0x1007b6863*/
      goto LABEL_8; /*0x1007b6863*/
  }
  else
  {
    v10 = 0; /*0x1007b66de*/
    if ( byte_1019FF158 ) /*0x1007b66ea*/
    {
LABEL_8:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, a2); /*0x1007b66f0*/
      v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(31, 1); /*0x1007b66ff*/
      if ( !v11 ) /*0x1007b6707*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 31); /*0x1007b6ee5*/
      v14 = (unsigned __int64)v11; /*0x1007b670d*/
      qmemcpy(v11, "failed to lock API client cache", 31); /*0x1007b6744*/
      if ( !(_BYTE)v10 /*0x1007b6e97*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(31, 1, v12, v13) )
      {
        byte_1019FF158 = 1; /*0x1007b6ea4*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(qword_1019FF150); /*0x1007b6766*/
      *(_QWORD *)a1 = 10; /*0x1007b6772*/
      *(_QWORD *)(a1 + 8) = 31; /*0x1007b6779*/
      *(_BYTE *)(a1 + 16) = v14; /*0x1007b6781*/
      *(_BYTE *)(a1 + 23) = HIBYTE(v14); /*0x1007b678c*/
      *(_WORD *)(a1 + 21) = HIDWORD(v14) >> 8; /*0x1007b6793*/
      *(_DWORD *)(a1 + 17) = v14 >> 8; /*0x1007b6798*/
      *(_QWORD *)(a1 + 24) = 31; /*0x1007b679b*/
      goto LABEL_36; /*0x1007b67a3*/
    }
  }
  if ( qword_1019FF160 != 0x8000000000000001LL && (_BYTE)qword_1019FF178 == (_BYTE)v60 ) /*0x1007b6883*/
  {
    LOBYTE(a2) = qword_1019FF160 == 0x8000000000000000LL || v57 == 0x8000000000000000LL; /*0x1007b6896*/
    if ( (_BYTE)a2 ) /*0x1007b6899*/
    {
      if ( !(v57 ^ 0x8000000000000000LL | qword_1019FF160 ^ 0x8000000000000000LL) ) /*0x1007b68a1*/
        goto LABEL_39; /*0x1007b68a4*/
    }
    else if ( _n == v59 ) /*0x1007b68b6*/
    {
      a2 = (__int64)__s2; /*0x1007b68b8*/
      v6 = (__int64 *)_s1; /*0x1007b68bc*/
      if ( !memcmp(_s1, __s2, _n) ) /*0x1007b68ca*/
      {
LABEL_39:
        v26 = qword_1019FF188; /*0x1007b6bf2*/
        v24 = (unsigned int)dword_1019FF190; /*0x1007b6bf9*/
        if ( _InterlockedIncrement64((volatile signed __int64 *)qword_1019FF180) > 0 ) /*0x1007b6c0a*/
        {
          v19 = qword_1019FF180; /*0x1007b6c10*/
          *(_QWORD *)(a1 + 8) = qword_1019FF180; /*0x1007b6c17*/
          *(_QWORD *)(a1 + 16) = v26; /*0x1007b6c1b*/
          *(_DWORD *)(a1 + 24) = v24; /*0x1007b6c1f*/
          *(_QWORD *)a1 = 11; /*0x1007b6c22*/
          if ( (_BYTE)v10 ) /*0x1007b6c2c*/
            goto LABEL_35; /*0x1007b6c2c*/
          goto LABEL_34; /*0x1007b6c2c*/
        }
LABEL_67:
        BUG(); /*0x1007b6efb*/
      }
    }
  }
  v50 = 0x8000000000000001LL; /*0x1007b68d0*/
  v54 = 0x7FFFFFFFFFFFFFFFLL; /*0x1007b68d7*/
  v62 = v10; /*0x1007b68db*/
  v6 = __src; /*0x1007b68df*/
  codexmate_lib::core::api_client::sanitize_proxy_config::h442c99beeb88638a(__src); /*0x1007b68ea*/
  v17 = __src[0]; /*0x1007b68ef*/
  v18 = __src[1]; /*0x1007b68f6*/
  v19 = __src[2]; /*0x1007b68fd*/
  a2 = __src[3]; /*0x1007b6904*/
  v20 = __src[4]; /*0x1007b690b*/
  if ( __src[0] != 11 ) /*0x1007b6916*/
  {
    v49 = __src[11]; /*0x1007b6a11*/
    v48 = __src[10]; /*0x1007b6a1f*/
    v47 = __src[9]; /*0x1007b6a2d*/
    v46 = __src[8]; /*0x1007b6a3b*/
    v45 = __src[7]; /*0x1007b6a49*/
    v44 = __src[6]; /*0x1007b6a5e*/
    v43 = __src[5]; /*0x1007b6a65*/
LABEL_32:
    v23 = (volatile signed __int64 *)v18; /*0x1007b6b2c*/
    v18 = v19; /*0x1007b6b2f*/
    goto LABEL_33; /*0x1007b6b2f*/
  }
  v61 = __src[1]; /*0x1007b691c*/
  v42[0] = __src[1]; /*0x1007b6920*/
  v56 = (__int64 *)__src[2]; /*0x1007b6927*/
  v42[1] = __src[2]; /*0x1007b692b*/
  v42[2] = __src[3]; /*0x1007b6932*/
  v42[3] = __src[4]; /*0x1007b6939*/
  _$LT$reqwest..blocking..client..ClientBuilder$u20$as$u20$core..default..Default$GT$::default::hcdeb91c9f4bc265f( /*0x1007b6947*/
    __src,
    a3,
    a4);
  __src[117] = 5; /*0x1007b694c*/
  LODWORD(__src[118]) = 0; /*0x1007b6957*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1007b6974*/
  if ( (v20 & 1) != 0 ) /*0x1007b6981*/
  {
    if ( v61 == 0x8000000000000000LL ) /*0x1007b698a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1007b6990*/
      v63 = 38; /*0x1007b699a*/
      v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1); /*0x1007b69a8*/
      if ( !v21 ) /*0x1007b69b0*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 38); /*0x1007b6ef6*/
      v22 = (__int64)v21; /*0x1007b69b6*/
      qmemcpy(v21, "Manual proxy mode requires a proxy URL", 38); /*0x1007b69fb*/
      v18 = 38; /*0x1007b69ff*/
      goto LABEL_29; /*0x1007b6a05*/
    }
    _$LT$S$u20$as$u20$reqwest..proxy..IntoProxy$GT$::into_proxy::h151399e6fdae7957(__src, v42); /*0x1007b6a7f*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x1007b6a95*/
    {
      v55 = __src[1]; /*0x1007b6a9b*/
      v34[0] = &v55; /*0x1007b6aa3*/
      v34[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x1007b6ab1*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C4D93, v34); /*0x1007b6acd*/
      v18 = __src[0]; /*0x1007b6ad2*/
      v22 = __src[1]; /*0x1007b6ad9*/
      v63 = __src[2]; /*0x1007b6ae7*/
      core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v55); /*0x1007b6aef*/
LABEL_29:
      v6 = (__int64 *)__dst; /*0x1007b6af4*/
      core::ptr::drop_in_place$LT$reqwest..blocking..client..ClientBuilder$GT$::hf0ce97af4a12b912(__dst); /*0x1007b6afb*/
      v17 = 9; /*0x1007b6b00*/
      if ( 2 * v61 ) /*0x1007b6b0a*/
      {
        v6 = v56; /*0x1007b6b1c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v61, 1); /*0x1007b6b20*/
      }
      v19 = v22; /*0x1007b6b25*/
      a2 = v63; /*0x1007b6b28*/
      goto LABEL_32; /*0x1007b6b28*/
    }
    qmemcpy(v39, &__src[2], sizeof(v39)); /*0x1007b6c4a*/
    v35 = 2; /*0x1007b6c4d*/
    v36 = 0; /*0x1007b6c54*/
    v37 = __src[0]; /*0x1007b6c5f*/
    v38 = __src[1]; /*0x1007b6c66*/
    v40 = 0x8000000000000000LL; /*0x1007b6c6d*/
    v34[119] = 3; /*0x1007b6c74*/
    memcpy(__src, __dst, sizeof(__src)); /*0x1007b6c95*/
    reqwest::blocking::client::ClientBuilder::proxy::hc852cd939a7cd708(v34, __src); /*0x1007b6cab*/
    memcpy(__dst, v34, sizeof(__dst)); /*0x1007b6cc3*/
  }
  memcpy(__src, __dst, sizeof(__src)); /*0x1007b6cde*/
  v6 = v34; /*0x1007b6ce3*/
  reqwest::blocking::client::ClientBuilder::build::h8f43bce474d3a935(v34, __src); /*0x1007b6ced*/
  v20 = LODWORD(v34[2]); /*0x1007b6cf2*/
  v23 = (volatile signed __int64 *)v34[0]; /*0x1007b6d02*/
  if ( LODWORD(v34[2]) == 1000000001 ) /*0x1007b6d00*/
  {
    v17 = 6; /*0x1007b6d09*/
  }
  else
  {
    v18 = v34[1]; /*0x1007b6d18*/
    v17 = 11; /*0x1007b6d1f*/
    v63 = v34[2]; /*0x1007b6d2c*/
  }
  if ( 2 * v61 ) /*0x1007b6d34*/
  {
    v6 = v56; /*0x1007b6d46*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v61, 1); /*0x1007b6d4a*/
  }
  if ( (_DWORD)v20 == 1000000001 ) /*0x1007b6d56*/
  {
    a2 = v63; /*0x1007b6d58*/
LABEL_33:
    *(_QWORD *)a1 = v17; /*0x1007b6b32*/
    *(_QWORD *)(a1 + 8) = v23; /*0x1007b6b35*/
    *(_QWORD *)(a1 + 16) = v18; /*0x1007b6b39*/
    *(_QWORD *)(a1 + 24) = a2; /*0x1007b6b3d*/
    *(_QWORD *)(a1 + 32) = v20; /*0x1007b6b41*/
    v24 = v44; /*0x1007b6b4c*/
    *(_QWORD *)(a1 + 40) = v43; /*0x1007b6b53*/
    *(_QWORD *)(a1 + 48) = v24; /*0x1007b6b57*/
    *(_QWORD *)(a1 + 56) = v45; /*0x1007b6b62*/
    *(_QWORD *)(a1 + 64) = v46; /*0x1007b6b6d*/
    *(_QWORD *)(a1 + 72) = v47; /*0x1007b6b78*/
    *(_QWORD *)(a1 + 80) = v48; /*0x1007b6b83*/
    *(_QWORD *)(a1 + 88) = v49; /*0x1007b6b8e*/
    v9 = v54; /*0x1007b6b96*/
    if ( (_BYTE)v62 ) /*0x1007b6b9d*/
    {
LABEL_35:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(qword_1019FF150); /*0x1007b6bb2*/
LABEL_36:
      if ( 2 * v57 ) /*0x1007b6bc2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v57, 1); /*0x1007b6bd8*/
      return a1; /*0x1007b6bd8*/
    }
LABEL_34:
    if ( (v9 & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0 /*0x1007b6eb0*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v19, v24) )
    {
      byte_1019FF158 = 1; /*0x1007b6ebd*/
    }
    goto LABEL_35; /*0x1007b6ec4*/
  }
  v51 = v23; /*0x1007b6d61*/
  v52 = v18; /*0x1007b6d68*/
  v53 = v63; /*0x1007b6d73*/
  v27 = _InterlockedIncrement64(v23); /*0x1007b6d77*/
  if ( (v27 < 0) ^ __OFSUB__((_DWORD)v20, 1000000001) | (v27 == 0) ) /*0x1007b6d7c*/
    goto LABEL_67; /*0x1007b6d7c*/
  __src[3] = v60; /*0x1007b6d86*/
  __src[2] = v59; /*0x1007b6d91*/
  __src[1] = __s2; /*0x1007b6da0*/
  __src[0] = v57; /*0x1007b6da7*/
  v28 = qword_1019FF160; /*0x1007b6dae*/
  v29 = v62; /*0x1007b6dbc*/
  v30 = v54; /*0x1007b6dc0*/
  if ( qword_1019FF160 != v50 ) /*0x1007b6dc4*/
  {
    if ( 2 * qword_1019FF160 ) /*0x1007b6dc6*/
    {
      v6 = (__int64 *)_s1; /*0x1007b6dd3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(_s1, qword_1019FF160, 1); /*0x1007b6ddf*/
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)qword_1019FF180) ) /*0x1007b6deb*/
    {
      v6 = &qword_1019FF180; /*0x1007b6df1*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&qword_1019FF180); /*0x1007b6df8*/
    }
  }
  qword_1019FF178 = __src[3]; /*0x1007b6e04*/
  _n = __src[2]; /*0x1007b6e12*/
  _s1 = (void *)__src[1]; /*0x1007b6e27*/
  qword_1019FF160 = __src[0]; /*0x1007b6e2e*/
  qword_1019FF180 = (__int64)v23; /*0x1007b6e35*/
  qword_1019FF188 = v18; /*0x1007b6e3c*/
  dword_1019FF190 = v63; /*0x1007b6e47*/
  *(_QWORD *)(a1 + 24) = v53; /*0x1007b6e51*/
  v31 = v51; /*0x1007b6e55*/
  v32 = v52; /*0x1007b6e5c*/
  *(_QWORD *)(a1 + 16) = v52; /*0x1007b6e63*/
  *(_QWORD *)(a1 + 8) = v31; /*0x1007b6e67*/
  *(_QWORD *)a1 = 11; /*0x1007b6e6b*/
  if ( !v29 /*0x1007b6ec9*/
    && (v30 & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, v28, v19, v32) )
  {
    byte_1019FF158 = 1; /*0x1007b6ed2*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(qword_1019FF150); /*0x1007b6e8d*/
  return a1; /*0x1007b6be0*/
}