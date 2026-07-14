// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_installed_skills node 0x100711690 depth=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::heeaae4f844003ab0(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r12
  size_t v10; // rcx
  size_t v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 *result; // rax
  unsigned __int64 v15; // rdx
  size_t v16[3]; // [rsp+0h] [rbp-170h] BYREF
  size_t v17[3]; // [rsp+18h] [rbp-158h] BYREF
  size_t v18[3]; // [rsp+30h] [rbp-140h] BYREF
  size_t v19[3]; // [rsp+48h] [rbp-128h] BYREF
  size_t v20; // [rsp+60h] [rbp-110h]
  size_t v21; // [rsp+68h] [rbp-108h]
  size_t v22; // [rsp+70h] [rbp-100h]
  size_t v23; // [rsp+78h] [rbp-F8h]
  size_t v24; // [rsp+80h] [rbp-F0h]
  size_t v25; // [rsp+88h] [rbp-E8h]
  size_t v26; // [rsp+90h] [rbp-E0h]
  size_t v27; // [rsp+98h] [rbp-D8h]
  size_t v28; // [rsp+A0h] [rbp-D0h]
  size_t v29; // [rsp+A8h] [rbp-C8h]
  size_t v30; // [rsp+B0h] [rbp-C0h]
  size_t v31; // [rsp+B8h] [rbp-B8h]
  size_t v32; // [rsp+C0h] [rbp-B0h]
  __int64 v33; // [rsp+C8h] [rbp-A8h]
  __int64 v34; // [rsp+D0h] [rbp-A0h]
  __int64 v35; // [rsp+D8h] [rbp-98h]
  __int64 v36; // [rsp+E0h] [rbp-90h]
  __int64 v37; // [rsp+E8h] [rbp-88h]
  unsigned __int64 *v38; // [rsp+F0h] [rbp-80h]
  unsigned __int64 v39; // [rsp+F8h] [rbp-78h]
  __int64 v40; // [rsp+100h] [rbp-70h]
  __int64 v41; // [rsp+110h] [rbp-60h]
  __int64 v42; // [rsp+118h] [rbp-58h]
  unsigned __int64 v43; // [rsp+120h] [rbp-50h]
  size_t v44; // [rsp+128h] [rbp-48h] BYREF
  __int64 v45; // [rsp+130h] [rbp-40h]
  __int64 v46; // [rsp+138h] [rbp-38h]
  size_t v47; // [rsp+140h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 16); /*0x1007116a4*/
  v3 = 184 * v2; /*0x1007116a8*/
  if ( v2 > 0xB21642C8590B21LL ) /*0x1007116bc*/
  {
    v4 = 0; /*0x1007116be*/
    goto LABEL_3; /*0x1007116be*/
  }
  v38 = a1; /*0x1007116cb*/
  if ( v3 ) /*0x1007116d2*/
  {
    v43 = v2; /*0x1007116d8*/
    v5 = *(_QWORD *)(a2 + 8); /*0x1007116dc*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1007116e0*/
    v4 = 8; /*0x1007116e5*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 8u); /*0x1007116f2*/
    if ( !v6 ) /*0x1007116fa*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v3); /*0x1007116c0*/
    v37 = v3; /*0x1007116ff*/
    v2 = v43; /*0x100711706*/
    v39 = v43; /*0x10071170a*/
    v40 = v6; /*0x10071170e*/
    if ( v43 ) /*0x100711715*/
    {
      v7 = v6 + 176; /*0x10071171b*/
      v8 = 0; /*0x100711722*/
      v9 = 0; /*0x100711725*/
      do /*0x1007119fc*/
      {
        if ( v37 == v8 ) /*0x100711737*/
          break; /*0x100711737*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v19, v5 + v8 + 16); /*0x100711749*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v18, v5 + v8 + 40); /*0x10071175a*/
        v10 = 0x8000000000000000LL; /*0x100711769*/
        if ( *(_QWORD *)(v5 + v8 + 136) != 0x8000000000000000LL ) /*0x100711774*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v44, v5 + v8 + 136); /*0x100711782*/
          v10 = v44; /*0x100711787*/
          v41 = v45; /*0x10071178f*/
          v35 = v46; /*0x100711797*/
        }
        v47 = v10; /*0x10071179e*/
        v11 = 0x8000000000000000LL; /*0x1007117ac*/
        if ( *(_QWORD *)(v5 + v8 + 160) != 0x8000000000000000LL ) /*0x1007117b7*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v44, v5 + v8 + 160); /*0x1007117c5*/
          v11 = v44; /*0x1007117ca*/
          v42 = v45; /*0x1007117d2*/
          v36 = v46; /*0x1007117da*/
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v17, v5 + v8 + 64); /*0x1007117ed*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v16, v5 + v8 + 88); /*0x1007117fe*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v44, v5 + v8 + 112); /*0x10071180c*/
        v12 = *(_QWORD *)(v5 + v8); /*0x100711811*/
        v13 = *(_QWORD *)(v5 + v8 + 8); /*0x100711815*/
        v22 = v19[2]; /*0x100711821*/
        v21 = v19[1]; /*0x10071182f*/
        v20 = v19[0]; /*0x10071183d*/
        v25 = v18[2]; /*0x10071184b*/
        v24 = v18[1]; /*0x100711859*/
        v23 = v18[0]; /*0x100711867*/
        v28 = v17[2]; /*0x100711875*/
        v27 = v17[1]; /*0x100711883*/
        v26 = v17[0]; /*0x100711891*/
        v31 = v16[2]; /*0x10071189f*/
        v30 = v16[1]; /*0x1007118ad*/
        v29 = v16[0]; /*0x1007118bb*/
        v34 = v46; /*0x1007118c6*/
        v33 = v45; /*0x1007118d1*/
        v32 = v44; /*0x1007118dc*/
        *(_QWORD *)(v7 + v8 - 176) = v12; /*0x1007118e3*/
        *(_QWORD *)(v7 + v8 - 168) = v13; /*0x1007118eb*/
        *(_QWORD *)(v7 + v8 - 144) = v22; /*0x1007118fa*/
        *(_QWORD *)(v7 + v8 - 152) = v21; /*0x100711909*/
        *(_QWORD *)(v7 + v8 - 160) = v20; /*0x100711918*/
        *(_QWORD *)(v7 + v8 - 120) = v25; /*0x100711927*/
        *(_QWORD *)(v7 + v8 - 128) = v24; /*0x100711933*/
        *(_QWORD *)(v7 + v8 - 136) = v23; /*0x10071193f*/
        *(_QWORD *)(v7 + v8 - 96) = v28; /*0x10071194e*/
        *(_QWORD *)(v7 + v8 - 104) = v27; /*0x10071195a*/
        *(_QWORD *)(v7 + v8 - 112) = v26; /*0x100711966*/
        *(_QWORD *)(v7 + v8 - 88) = v29; /*0x100711972*/
        *(_QWORD *)(v7 + v8 - 80) = v30; /*0x10071197e*/
        *(_QWORD *)(v7 + v8 - 72) = v31; /*0x10071198a*/
        *(_QWORD *)(v7 + v8 - 56) = v33; /*0x100711996*/
        *(_QWORD *)(v7 + v8 - 48) = v34; /*0x1007119a2*/
        *(_QWORD *)(v7 + v8 - 64) = v32; /*0x1007119ae*/
        *(_QWORD *)(v7 + v8 - 40) = v47; /*0x1007119b7*/
        *(_QWORD *)(v7 + v8 - 32) = v41; /*0x1007119c0*/
        *(_QWORD *)(v7 + v8 - 24) = v35; /*0x1007119cc*/
        *(_QWORD *)(v7 + v8 - 16) = v11; /*0x1007119d1*/
        ++v9; /*0x1007119d6*/
        *(_QWORD *)(v7 + v8 - 8) = v42; /*0x1007119dd*/
        *(_QWORD *)(v7 + v8) = v36; /*0x1007119e9*/
        v8 += 184; /*0x1007119ee*/
        v2 = v43; /*0x1007119f5*/
      }
      while ( v43 != v9 ); /*0x1007119fc*/
    }
  }
  else
  {
    v39 = 0; /*0x100711a04*/
    v40 = 8; /*0x100711a0c*/
  }
  result = v38; /*0x100711a18*/
  v38[2] = v2; /*0x100711a1c*/
  v15 = v39; /*0x100711a20*/
  result[1] = v40; /*0x100711a28*/
  *result = v15; /*0x100711a2c*/
  return result; /*0x100711a2f*/
}