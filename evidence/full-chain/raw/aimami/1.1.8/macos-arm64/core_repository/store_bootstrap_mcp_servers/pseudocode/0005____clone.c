// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_mcp_servers node 0x100710df0 depth=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd7585f8da36c5de6(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  char v10; // r15
  size_t v11; // rcx
  size_t v12; // r13
  unsigned __int64 *result; // rax
  unsigned __int64 v14; // rdx
  _QWORD v15[9]; // [rsp+8h] [rbp-1F8h] BYREF
  _QWORD v16[3]; // [rsp+50h] [rbp-1B0h] BYREF
  size_t v17[3]; // [rsp+68h] [rbp-198h] BYREF
  size_t v18[3]; // [rsp+80h] [rbp-180h] BYREF
  size_t v19; // [rsp+98h] [rbp-168h]
  __int64 v20; // [rsp+A0h] [rbp-160h]
  __int64 v21; // [rsp+A8h] [rbp-158h]
  __int64 v22; // [rsp+B0h] [rbp-150h]
  __int128 v23; // [rsp+B8h] [rbp-148h]
  size_t v24; // [rsp+C8h] [rbp-138h]
  __int64 v25; // [rsp+D0h] [rbp-130h]
  __int64 v26; // [rsp+D8h] [rbp-128h]
  __int64 v27; // [rsp+E0h] [rbp-120h]
  __int128 v28; // [rsp+E8h] [rbp-118h]
  __int64 v29; // [rsp+F8h] [rbp-108h]
  __int64 v30; // [rsp+100h] [rbp-100h]
  __int64 v31; // [rsp+108h] [rbp-F8h]
  unsigned __int64 v32; // [rsp+110h] [rbp-F0h]
  unsigned __int64 *v33; // [rsp+118h] [rbp-E8h]
  __int128 v34; // [rsp+120h] [rbp-E0h]
  size_t v35; // [rsp+138h] [rbp-C8h]
  __int64 v36; // [rsp+140h] [rbp-C0h]
  __int64 v37; // [rsp+148h] [rbp-B8h]
  __int64 v38; // [rsp+150h] [rbp-B0h]
  __int128 v39; // [rsp+158h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+168h] [rbp-98h]
  __int64 v41; // [rsp+170h] [rbp-90h]
  __int64 v42; // [rsp+180h] [rbp-80h]
  __int64 v43; // [rsp+188h] [rbp-78h]
  __int64 v44; // [rsp+190h] [rbp-70h]
  size_t v45; // [rsp+198h] [rbp-68h] BYREF
  __int64 v46; // [rsp+1A0h] [rbp-60h]
  __int64 v47; // [rsp+1A8h] [rbp-58h]
  __int64 v48; // [rsp+1B0h] [rbp-50h]
  __int128 v49; // [rsp+1B8h] [rbp-48h]
  size_t v50; // [rsp+1C8h] [rbp-38h]
  char v51; // [rsp+1D6h] [rbp-2Ah]
  char v52; // [rsp+1D7h] [rbp-29h]

  v2 = *(_QWORD *)(a2 + 16); /*0x100710e04*/
  v3 = 224 * v2; /*0x100710e08*/
  if ( v2 > 0x92492492492492LL ) /*0x100710e1c*/
  {
    v4 = 0; /*0x100710e1e*/
    goto LABEL_3; /*0x100710e1e*/
  }
  v33 = a1; /*0x100710e2c*/
  if ( v3 ) /*0x100710e36*/
  {
    v5 = *(_QWORD *)(a2 + 8); /*0x100710e3c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100710e40*/
    v4 = 8; /*0x100710e45*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(224 * v2, 8u); /*0x100710e53*/
    if ( !v6 ) /*0x100710e5b*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, 224 * v2); /*0x100710e21*/
    v40 = v2; /*0x100710e60*/
    v41 = v6; /*0x100710e67*/
    if ( v2 ) /*0x100710e71*/
    {
      v7 = v6 + 217; /*0x100710e77*/
      v8 = 0; /*0x100710e7e*/
      v9 = 0; /*0x100710e81*/
      v31 = 224 * v2; /*0x100710e83*/
      v32 = v2; /*0x100710e8a*/
      do /*0x100711226*/
      {
        if ( v3 == v8 ) /*0x100710ea3*/
          break; /*0x100710ea3*/
        v42 = v9; /*0x100710ea9*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v18, v5 + v8); /*0x100710eb8*/
        v51 = *(_BYTE *)(v5 + v8 + 216); /*0x100710ec6*/
        v10 = *(_BYTE *)(v5 + v8 + 217); /*0x100710ec9*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v17, v5 + v8 + 24); /*0x100710ede*/
        v11 = 0x8000000000000000LL; /*0x100710eed*/
        if ( *(_QWORD *)(v5 + v8 + 72) != 0x8000000000000000LL ) /*0x100710ef5*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v45, v5 + v8 + 72); /*0x100710f00*/
          v11 = v45; /*0x100710f05*/
          v43 = v46; /*0x100710f0d*/
          v29 = v47; /*0x100710f15*/
        }
        v50 = v11; /*0x100710f1c*/
        v52 = v10; /*0x100710f20*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd2fe128b4c6cf4cc(v16, v5 + v8 + 48); /*0x100710f30*/
        v12 = 0x8000000000000000LL; /*0x100710f3f*/
        if ( *(_QWORD *)(v5 + v8 + 96) != 0x8000000000000000LL ) /*0x100710f4b*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v45, v5 + v8 + 96); /*0x100710f55*/
          v12 = v45; /*0x100710f5a*/
          v44 = v46; /*0x100710f62*/
          v30 = v47; /*0x100710f6a*/
        }
        v34 = *(_OWORD *)(v5 + v8 + 152); /*0x100710f7f*/
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h6d00c5d5e4f3b162( /*0x100710f89*/
          &v45,
          v5 + v8 + 120);
        v49 = v34; /*0x100710f95*/
        v35 = v45; /*0x100710fa1*/
        v36 = v46; /*0x100710fa8*/
        v37 = v47; /*0x100710fb3*/
        v38 = v48; /*0x100710fbe*/
        v39 = v34; /*0x100710fcd*/
        v34 = *(_OWORD *)(v5 + v8 + 200); /*0x100710fec*/
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h6d00c5d5e4f3b162( /*0x100710ff6*/
          &v45,
          v5 + v8 + 168);
        v49 = v34; /*0x100711002*/
        v24 = v45; /*0x10071100e*/
        v25 = v46; /*0x100711015*/
        v26 = v47; /*0x100711020*/
        v27 = v48; /*0x10071102b*/
        v28 = v34; /*0x10071103a*/
        v15[0] = v18[0]; /*0x100711056*/
        v15[1] = v18[1]; /*0x10071105d*/
        v15[2] = v18[2]; /*0x10071106b*/
        v15[5] = v17[2]; /*0x100711080*/
        v15[4] = v17[1]; /*0x100711092*/
        v15[3] = v17[0]; /*0x100711096*/
        v15[8] = v16[2]; /*0x1007110a0*/
        v15[7] = v16[1]; /*0x1007110b2*/
        v15[6] = v16[0]; /*0x1007110b6*/
        v23 = v39; /*0x1007110cf*/
        v22 = v38; /*0x1007110dd*/
        v21 = v37; /*0x1007110eb*/
        v20 = v36; /*0x100711100*/
        v19 = v35; /*0x100711107*/
        qmemcpy((void *)(v7 + v8 - 217), v15, 0x48u); /*0x100711122*/
        *(_QWORD *)(v7 + v8 - 145) = v50; /*0x100711129*/
        *(_QWORD *)(v7 + v8 - 137) = v43; /*0x100711135*/
        *(_QWORD *)(v7 + v8 - 129) = v29; /*0x100711144*/
        *(_QWORD *)(v7 + v8 - 121) = v12; /*0x10071114c*/
        *(_QWORD *)(v7 + v8 - 113) = v44; /*0x100711155*/
        *(_QWORD *)(v7 + v8 - 105) = v30; /*0x100711161*/
        *(_QWORD *)(v7 + v8 - 97) = v19; /*0x10071116d*/
        *(_QWORD *)(v7 + v8 - 89) = v20; /*0x100711179*/
        *(_QWORD *)(v7 + v8 - 81) = v21; /*0x100711185*/
        *(_QWORD *)(v7 + v8 - 73) = v22; /*0x100711191*/
        *(_OWORD *)(v7 + v8 - 65) = v23; /*0x10071119d*/
        *(_QWORD *)(v7 + v8 - 49) = v24; /*0x1007111b5*/
        *(_QWORD *)(v7 + v8 - 41) = v25; /*0x1007111c1*/
        *(_QWORD *)(v7 + v8 - 33) = v26; /*0x1007111cd*/
        *(_QWORD *)(v7 + v8 - 25) = v27; /*0x1007111d9*/
        *(_OWORD *)(v7 + v8 - 17) = v28; /*0x1007111e5*/
        *(_BYTE *)(v7 + v8 - 1) = v51; /*0x1007111fa*/
        *(_BYTE *)(v7 + v8) = v52; /*0x100711203*/
        v9 = v42 + 1; /*0x10071120b*/
        v8 += 224; /*0x10071120e*/
        v2 = v32; /*0x100711215*/
        v3 = v31; /*0x10071121f*/
      }
      while ( v32 != v42 + 1 ); /*0x100711226*/
    }
  }
  else
  {
    v40 = 0; /*0x10071122e*/
    v41 = 8; /*0x100711239*/
  }
  result = v33; /*0x10071124b*/
  v33[2] = v2; /*0x100711252*/
  v14 = v40; /*0x100711256*/
  result[1] = v41; /*0x100711264*/
  *result = v14; /*0x100711268*/
  return result; /*0x10071126b*/
}