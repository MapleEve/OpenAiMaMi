// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::manager::RelayManager::reveal_api_key::hddd93882a5c908f2; addr: 0x100257510; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::reveal_api_key::hddd93882a5c908f2(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int128 v3; // kr00_16
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r13
  signed __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // r15
  _QWORD *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  _OWORD __dst[6]; // [rsp+0h] [rbp-1A0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-140h]
  __int64 v25; // [rsp+68h] [rbp-138h]
  __int64 v26; // [rsp+78h] [rbp-128h]
  __int64 v27; // [rsp+80h] [rbp-120h]
  __int64 v28; // [rsp+88h] [rbp-118h]
  __int64 v29; // [rsp+90h] [rbp-110h]
  __int64 v30; // [rsp+98h] [rbp-108h]
  __int64 v31; // [rsp+A8h] [rbp-F8h]
  __int64 v32; // [rsp+B0h] [rbp-F0h]
  signed __int64 v33; // [rsp+C0h] [rbp-E0h]
  __int64 v34; // [rsp+C8h] [rbp-D8h]
  __int64 v35; // [rsp+100h] [rbp-A0h]
  __int64 v36; // [rsp+108h] [rbp-98h]
  __int64 v37; // [rsp+110h] [rbp-90h]
  __int64 v38; // [rsp+118h] [rbp-88h]
  __int64 v39; // [rsp+120h] [rbp-80h]
  __int64 v40; // [rsp+128h] [rbp-78h]
  __int64 v41; // [rsp+130h] [rbp-70h]
  __int64 v42; // [rsp+138h] [rbp-68h]
  __int64 v43; // [rsp+140h] [rbp-60h]
  signed __int64 v44; // [rsp+148h] [rbp-58h]
  __int64 v45; // [rsp+150h] [rbp-50h]
  __int128 v46; // [rsp+158h] [rbp-48h]
  __int128 v47; // [rsp+168h] [rbp-38h]

  v2 = *(_QWORD *)(a2 + 16); /*0x100257527*/
  if ( !__OFSUB__(0, *(_QWORD *)(v2 + 16)) ) /*0x100257531*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1((char *)__dst + 8, v2 + 16); /*0x1002575fd*/
    *(_QWORD *)&__dst[0] = 9; /*0x100257602*/
    qmemcpy(a1, __dst, 0x60u); /*0x10025761c*/
    return a1; /*0x10025761c*/
  }
  codexmate_lib::core::relay::manager::RelayManager::ensure_provider_loaded::h868f47b60b36ba24(__dst); /*0x100257548*/
  v3 = __dst[0]; /*0x100257554*/
  if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL ) /*0x10025755e*/
  {
    v4 = *(_QWORD *)&__dst[2]; /*0x100257564*/
    v5 = *((_QWORD *)&__dst[3] + 1); /*0x10025756b*/
    v46 = __dst[4]; /*0x100257579*/
    v47 = __dst[5]; /*0x10025758f*/
    v6 = v24; /*0x10025759e*/
    v7 = __dst[1]; /*0x1002575a5*/
    v8 = *(_OWORD *)((char *)&__dst[2] + 8); /*0x1002575ac*/
    *a1 = *((_QWORD *)&__dst[0] + 1); /*0x1002575b3*/
    *(_OWORD *)(a1 + 1) = v7; /*0x1002575b6*/
    a1[3] = v4; /*0x1002575ba*/
    *((_OWORD *)a1 + 2) = v8; /*0x1002575be*/
    a1[6] = v5; /*0x1002575c2*/
    v9 = *((_QWORD *)&v46 + 1); /*0x1002575ca*/
    a1[7] = v46; /*0x1002575ce*/
    a1[8] = v9; /*0x1002575d2*/
    *(_OWORD *)(a1 + 9) = v47; /*0x1002575da*/
    a1[11] = v6; /*0x1002575e6*/
    return a1; /*0x1002575ea*/
  }
  v10 = *((_QWORD *)&__dst[1] + 1); /*0x100257624*/
  v11 = *(_QWORD *)&__dst[2]; /*0x10025762b*/
  v42 = *((_QWORD *)&__dst[3] + 1); /*0x100257640*/
  v12 = *(_QWORD *)&__dst[3]; /*0x100257640*/
  v46 = __dst[4]; /*0x10025764b*/
  v47 = __dst[5]; /*0x100257661*/
  v39 = v24; /*0x100257677*/
  v41 = v25; /*0x100257682*/
  v38 = v26; /*0x10025768d*/
  v37 = v27; /*0x10025769b*/
  v13 = v28; /*0x1002576a2*/
  v36 = v29; /*0x1002576b0*/
  v40 = v30; /*0x1002576be*/
  v35 = v31; /*0x1002576c9*/
  a1[3] = *((_QWORD *)&__dst[5] + 1); /*0x1002576d4*/
  a1[2] = v47; /*0x1002576dc*/
  a1[1] = *((_QWORD *)&v46 + 1); /*0x1002576e4*/
  v43 = v32; /*0x1002576ef*/
  *a1 = 11; /*0x1002576f3*/
  v14 = v33; /*0x1002576fa*/
  v45 = v34; /*0x100257708*/
  if ( (_QWORD)v3 ) /*0x10025770f*/
  {
    v44 = v33; /*0x100257716*/
    v15 = v12; /*0x10025771a*/
    v16 = v11; /*0x10025771d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v3 + 1), v3, 1); /*0x100257720*/
    v11 = v16; /*0x100257725*/
    v12 = v15; /*0x100257728*/
    v14 = v44; /*0x10025772b*/
  }
  if ( v10 ) /*0x100257732*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x10025773f*/
  if ( v12 ) /*0x100257747*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v12, 1); /*0x100257755*/
  if ( v14 >= (__int64)0x8000000000000002LL && v14 ) /*0x10025776c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v14, 1); /*0x10025777a*/
  if ( v39 ) /*0x100257786*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v39, 1); /*0x100257791*/
  v17 = v37; /*0x100257799*/
  if ( v13 ) /*0x1002577a0*/
  {
    v18 = (_QWORD *)(v37 + 72); /*0x1002577a2*/
    while ( 1 ) /*0x1002577b9*/
    {
      v19 = *(v18 - 7); /*0x1002577b9*/
      if ( v19 ) /*0x1002577c0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v18 - 6), v19, 1); /*0x1002577cb*/
      v20 = *(v18 - 1); /*0x1002577d0*/
      if ( !(2 * v20) ) /*0x1002577d4*/
        break; /*0x1002577d4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v18, v20, 1); /*0x1002577f8*/
      v21 = *(v18 - 4); /*0x1002577fd*/
      if ( v21 ) /*0x100257804*/
        goto LABEL_25; /*0x100257804*/
LABEL_18:
      v18 += 12; /*0x1002577b0*/
      if ( !--v13 ) /*0x1002577b7*/
        goto LABEL_26; /*0x1002577b7*/
    }
    v21 = *(v18 - 4); /*0x1002577e1*/
    if ( !v21 ) /*0x1002577e8*/
      goto LABEL_18; /*0x1002577e8*/
LABEL_25:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v18 - 3), v21, 1); /*0x100257806*/
    goto LABEL_18; /*0x100257814*/
  }
LABEL_26:
  if ( v38 ) /*0x100257820*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 96 * v38, 8); /*0x100257832*/
  if ( v36 ) /*0x100257841*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v36, 1); /*0x10025784c*/
  if ( 2 * v35 ) /*0x100257858*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v35, 1); /*0x10025786e*/
  return a1; /*0x100257876*/
}
