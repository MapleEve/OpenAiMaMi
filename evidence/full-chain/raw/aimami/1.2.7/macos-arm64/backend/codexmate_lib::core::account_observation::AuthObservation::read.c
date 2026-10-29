// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_observation::AuthObservation::read::hee36ca1fcea17c52; addr: 0x100986bb0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
_QWORD *__fastcall codexmate_lib::core::account_observation::AuthObservation::read::hee36ca1fcea17c52(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r12
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rsi
  void *v14; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r14
  void *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  _BYTE v29[96]; // [rsp+0h] [rbp-3E0h] BYREF
  _BYTE v30[96]; // [rsp+60h] [rbp-380h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-320h] BYREF
  _BYTE v32[96]; // [rsp+C8h] [rbp-318h] BYREF
  _BYTE v33[72]; // [rsp+128h] [rbp-2B8h] BYREF
  __int64 v34; // [rsp+170h] [rbp-270h] BYREF
  _BYTE v35[96]; // [rsp+178h] [rbp-268h] BYREF
  _BYTE v36[72]; // [rsp+1D8h] [rbp-208h] BYREF
  _QWORD __src[22]; // [rsp+220h] [rbp-1C0h] BYREF
  _QWORD __dsta[25]; // [rsp+2D0h] [rbp-110h] BYREF
  int v39; // [rsp+39Ch] [rbp-44h] BYREF
  __int64 v40; // [rsp+3A0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+3A8h] [rbp-38h]
  unsigned __int64 v42; // [rsp+3B0h] [rbp-30h]

  LODWORD(__src[0]) = 0; /*0x100986bcd*/
  WORD2(__src[0]) = 438; /*0x100986bd7*/
  *(_DWORD *)((char *)__src + 6) = 1; /*0x100986be0*/
  WORD1(__src[1]) = 0; /*0x100986bea*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(__dsta, __src, a2, a3); /*0x100986c0e*/
  if ( LODWORD(__dsta[0]) == 1 ) /*0x100986c1a*/
  {
    v5 = __dsta[1]; /*0x100986c1c*/
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(__dsta[1]) ) /*0x100986c26*/
    {
      __dst[1] = 2; /*0x100986c33*/
      __dst[2] = v5; /*0x100986c3b*/
      *__dst = 3; /*0x100986c3f*/
    }
    else
    {
      *__dst = 2; /*0x100986d19*/
      __dst[22] = 0x8000000000000000LL; /*0x100986d2a*/
      *((_BYTE *)__dst + 200) = 0; /*0x100986d31*/
      if ( (v5 & 3) == 1 ) /*0x100986d41*/
      {
        v10 = v5 - 1; /*0x100986d47*/
        v11 = *(_QWORD *)(v5 - 1); /*0x100986d4c*/
        v12 = *(_QWORD *)(v5 + 7); /*0x100986d51*/
        if ( *(_QWORD *)v12 ) /*0x100986d56*/
          (*(void (__fastcall **)(__int64))v12)(v11); /*0x100986d62*/
        v13 = *(_QWORD *)(v12 + 8); /*0x100986d64*/
        if ( v13 ) /*0x100986d6c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x100986d76*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24, 8); /*0x100986d88*/
      }
    }
    return __dst; /*0x100986c46*/
  }
  v6 = HIDWORD(__dsta[0]); /*0x100986c4b*/
  v39 = HIDWORD(__dsta[0]); /*0x100986c52*/
  std::fs::File::metadata::h408606eff73040af(__dsta, &v39); /*0x100986c61*/
  v8 = __dsta[1]; /*0x100986c66*/
  if ( LODWORD(__dsta[0]) == 1 ) /*0x100986c74*/
  {
    __dst[1] = 2; /*0x100986c76*/
    __dst[2] = v8; /*0x100986c7e*/
LABEL_17:
    *__dst = 3; /*0x100986e10*/
    close_NOCANCEL(v6); /*0x100986e1a*/
    return __dst; /*0x100986e1a*/
  }
  if ( (__dsta[1] & 0xF00000000000LL) != 0x800000000000LL ) /*0x100986ca1*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dsta, &v39, v7); /*0x100986d92*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x100986da1*/
    if ( !v14 ) /*0x100986da9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x1009872ff*/
    qmemcpy(v14, "Auth observation requires a regular file", 40); /*0x100986df1*/
    __dst[1] = 9; /*0x100986df4*/
    __dst[2] = 40; /*0x100986dfc*/
    __dst[3] = v14; /*0x100986e04*/
    __dst[4] = 40; /*0x100986e08*/
    goto LABEL_17; /*0x100986e08*/
  }
  v40 = 0; /*0x100986ca7*/
  v41 = 1; /*0x100986caf*/
  v42 = 0; /*0x100986cb7*/
  LODWORD(__dsta[2]) = v6; /*0x100986cbf*/
  __dsta[0] = 262145; /*0x100986cc6*/
  __dsta[1] = 262145; /*0x100986cd1*/
  if ( (std::io::default_read_to_end::hafa22a3fcaeb84c1(__dsta, &v40, 0) & 1) != 0 ) /*0x100986cf0*/
  {
    __dst[1] = 2; /*0x100986cf6*/
    __dst[2] = v9; /*0x100986cfe*/
    *__dst = 3; /*0x100986d02*/
    close_NOCANCEL(LODWORD(__dsta[2])); /*0x100986d0f*/
    goto LABEL_35; /*0x100986d14*/
  }
  v16 = LODWORD(__dsta[2]); /*0x100986e34*/
  close_NOCANCEL(LODWORD(__dsta[2])); /*0x100986e3a*/
  if ( v42 > 0x40000 ) /*0x100986e49*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, &v40, v17); /*0x100986e4f*/
    v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x100986e5e*/
    if ( !v18 ) /*0x100986e66*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35); /*0x100987310*/
    qmemcpy(v18, "Auth observation exceeds size limit", 35); /*0x100986ea0*/
    __dst[1] = 9; /*0x100986eaa*/
    __dst[2] = 35; /*0x100986eb2*/
    __dst[3] = v18; /*0x100986eba*/
    __dst[4] = 35; /*0x100986ebe*/
    *__dst = 3; /*0x100986ec6*/
    goto LABEL_35; /*0x100986ecd*/
  }
  __src[0] = v41; /*0x100986ed6*/
  __src[1] = v42; /*0x100986edd*/
  __src[2] = 0; /*0x100986ee4*/
  __src[3] = 0; /*0x100986eef*/
  serde_json::de::from_trait::h5e79430ffdcb9680(__dsta, __src); /*0x100986f08*/
  if ( __dsta[0] == 0x8000000000000001LL ) /*0x100986f26*/
  {
    codexmate_lib::core::account_observation::AuthObservation::read::_$u7b$$u7b$closure$u7d$$u7d$::h85d6262b9b97bd79( /*0x100986f36*/
      __src,
      __dsta[1],
      v19);
    qmemcpy(v29, __src, sizeof(v29)); /*0x100986f51*/
    qmemcpy(v30, v29, sizeof(v30)); /*0x100986f66*/
    qmemcpy(__dst + 1, v30, 0x60u); /*0x100986f75*/
    *__dst = 3; /*0x100986f78*/
    goto LABEL_35; /*0x100986f7f*/
  }
  qmemcpy(v29, &__dsta[1], sizeof(v29)); /*0x100986f9a*/
  qmemcpy(v36, &__dsta[13], sizeof(v36)); /*0x100986fb0*/
  qmemcpy(v30, v29, sizeof(v30)); /*0x100986fc5*/
  qmemcpy(v35, v30, sizeof(v35)); /*0x100986fd7*/
  v34 = __dsta[0]; /*0x100986fda*/
  if ( !(unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h5bcda0a67c51943b(&v34) ) /*0x100986fef*/
  {
    v24 = 2; /*0x1009870cb*/
    if ( !(unsigned __int8)codexmate_lib::core::auth::is_api_key_auth::hdca1762ad2027169(&v34) /*0x1009870e0*/
      && !(unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::hd38d41c44ff05d4c(&v34) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v34, &v31, v25); /*0x1009870ed*/
      v22 = 54; /*0x1009870f2*/
      v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x100987102*/
      if ( v26 ) /*0x10098710a*/
      {
        qmemcpy(v26, "Auth observation has no recognized authentication mode", 54); /*0x10098716e*/
        __dst[1] = 9; /*0x100987171*/
        __dst[2] = 54; /*0x100987179*/
        __dst[3] = v26; /*0x100987181*/
        __dst[4] = 54; /*0x100987185*/
        goto LABEL_34; /*0x10098718d*/
      }
LABEL_41:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v22); /*0x100987317*/
    }
LABEL_38:
    __src[0] = v24; /*0x100987247*/
    _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::hd5cf4fa73f15ba9c(__dsta, v41, v42); /*0x10098725d*/
    *(_QWORD *)((char *)__dst + 225) = __dsta[3]; /*0x100987269*/
    *(_QWORD *)((char *)__dst + 217) = __dsta[2]; /*0x100987277*/
    v28 = __dsta[0]; /*0x10098727e*/
    *(_QWORD *)((char *)__dst + 209) = __dsta[1]; /*0x10098728c*/
    *(_QWORD *)((char *)__dst + 201) = v28; /*0x100987293*/
    __dsta[22] = v40; /*0x1009872a2*/
    __dsta[23] = v41; /*0x1009872a6*/
    __dsta[24] = v42; /*0x1009872ae*/
    memcpy(__dsta, __src, 0xB0u); /*0x1009872c8*/
    memcpy(__dst, __dsta, 0xC8u); /*0x1009872d8*/
    *((_BYTE *)__dst + 200) = 1; /*0x1009872dd*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hbff2ffc481245f9b(&v34); /*0x1009872eb*/
    return __dst; /*0x1009872f0*/
  }
  codexmate_lib::core::auth::make_api_request_context::ha24e84aaeca56c81(__dsta, &v34); /*0x100987003*/
  v20 = __dsta[0]; /*0x100987008*/
  core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..auth..ApiRequestContext$GT$$GT$::h1122f8384eb26e0a(__dsta); /*0x100987016*/
  if ( v20 != 0x8000000000000000LL ) /*0x10098701e*/
  {
    codexmate_lib::core::auth::make_auth_snapshot::h98aef96aa710f77f(&v31, &v34, a2, a3); /*0x1009871a3*/
    v24 = v31; /*0x1009871a8*/
    if ( v31 == 2 ) /*0x1009871ba*/
    {
      codexmate_lib::core::account_observation::AuthObservation::read::_$u7b$$u7b$closure$u7d$$u7d$::ha618ce58400bbc46( /*0x1009871c6*/
        __dsta,
        (__int64)v32,
        v27);
      qmemcpy(v32, __dsta, sizeof(v32)); /*0x1009871da*/
      qmemcpy(__dst + 1, v32, 0x60u); /*0x1009871e9*/
      goto LABEL_34; /*0x1009871e9*/
    }
    qmemcpy(&__src[13], v33, 0x48u); /*0x100987232*/
    qmemcpy(&__src[1], v32, 0x60u); /*0x100987244*/
    goto LABEL_38; /*0x100987244*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dsta, &v34, v21); /*0x100987024*/
  v22 = 49; /*0x100987029*/
  v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x100987039*/
  if ( !v23 ) /*0x100987041*/
    goto LABEL_41; /*0x100987041*/
  qmemcpy(v23, "Auth observation has incomplete OAuth credentials", 49); /*0x100987097*/
  __dst[1] = 9; /*0x10098709e*/
  __dst[2] = 49; /*0x1009870a6*/
  __dst[3] = v23; /*0x1009870ae*/
  __dst[4] = 49; /*0x1009870b2*/
LABEL_34:
  *__dst = 3; /*0x1009871ec*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hbff2ffc481245f9b(&v34); /*0x1009871fa*/
LABEL_35:
  if ( v40 ) /*0x100987206*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x100987215*/
  return __dst; /*0x100986e22*/
}