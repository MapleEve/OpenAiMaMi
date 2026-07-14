// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x10070f140 depth=3
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7af1916271c065d2(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // r12
  size_t v10; // rcx
  char v11; // r12
  size_t v12; // r14
  unsigned __int64 *result; // rax
  unsigned __int64 v14; // rdx
  _QWORD __src[21]; // [rsp+8h] [rbp-208h] BYREF
  __int128 v16; // [rsp+B0h] [rbp-160h]
  __int128 v17; // [rsp+C0h] [rbp-150h]
  _QWORD v18[3]; // [rsp+D0h] [rbp-140h] BYREF
  size_t v19; // [rsp+E8h] [rbp-128h]
  size_t v20; // [rsp+F0h] [rbp-120h]
  size_t v21[3]; // [rsp+F8h] [rbp-118h] BYREF
  size_t v22[3]; // [rsp+110h] [rbp-100h] BYREF
  size_t v23[3]; // [rsp+128h] [rbp-E8h] BYREF
  size_t v24[3]; // [rsp+140h] [rbp-D0h] BYREF
  size_t v25[3]; // [rsp+158h] [rbp-B8h] BYREF
  size_t v26[3]; // [rsp+170h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+188h] [rbp-88h]
  unsigned __int64 *v28; // [rsp+190h] [rbp-80h]
  size_t v29; // [rsp+198h] [rbp-78h] BYREF
  size_t v30; // [rsp+1A0h] [rbp-70h]
  size_t v31; // [rsp+1A8h] [rbp-68h]
  unsigned __int64 v32; // [rsp+1B0h] [rbp-60h]
  __int64 v33; // [rsp+1B8h] [rbp-58h]
  unsigned __int64 v34; // [rsp+1C8h] [rbp-48h]
  int v35; // [rsp+1D4h] [rbp-3Ch]
  __int64 v36; // [rsp+1D8h] [rbp-38h]
  char v37; // [rsp+1E5h] [rbp-2Bh]
  char v38; // [rsp+1E6h] [rbp-2Ah]
  char v39; // [rsp+1E7h] [rbp-29h]

  v2 = *(_QWORD *)(a2 + 16); /*0x10070f154*/
  v3 = 232 * v2; /*0x10070f158*/
  if ( v2 > 0x8D3DCB08D3DCB0LL ) /*0x10070f16c*/
  {
    v4 = 0; /*0x10070f16e*/
    goto LABEL_3; /*0x10070f16e*/
  }
  v28 = a1; /*0x10070f17f*/
  if ( v3 ) /*0x10070f183*/
  {
    v34 = v2; /*0x10070f189*/
    v5 = *(_QWORD *)(a2 + 8); /*0x10070f18d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10070f191*/
    v4 = 8; /*0x10070f196*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 8u); /*0x10070f1a4*/
    if ( !v6 ) /*0x10070f1ac*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v3); /*0x10070f171*/
    v27 = v3; /*0x10070f1b1*/
    v2 = v34; /*0x10070f1b8*/
    v32 = v34; /*0x10070f1bc*/
    v33 = v6; /*0x10070f1c0*/
    if ( v34 ) /*0x10070f1c7*/
    {
      v7 = v6 + 231; /*0x10070f1cd*/
      v8 = 0; /*0x10070f1d4*/
      v36 = 0; /*0x10070f1d7*/
      do /*0x10070f3b9*/
      {
        if ( v27 == v8 ) /*0x10070f3c6*/
          break; /*0x10070f3c6*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v26, v5 + v8); /*0x10070f3d7*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v25, v5 + v8 + 24); /*0x10070f3e8*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v24, v5 + v8 + 48); /*0x10070f3f9*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v23, v5 + v8 + 72); /*0x10070f40a*/
        v11 = *(_BYTE *)(v5 + v8 + 228); /*0x10070f40f*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, v5 + v8 + 96); /*0x10070f424*/
        v37 = *(_BYTE *)(v5 + v8 + 230); /*0x10070f432*/
        v38 = *(_BYTE *)(v5 + v8 + 231); /*0x10070f43e*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h68c58a439707a4f3( /*0x10070f44d*/
          v18,
          v5 + v8 + 120);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v21, v5 + v8 + 144); /*0x10070f461*/
        v39 = v11; /*0x10070f466*/
        v35 = *(_DWORD *)(v5 + v8 + 224); /*0x10070f472*/
        v16 = *(_OWORD *)(v5 + v8 + 192); /*0x10070f47e*/
        v17 = *(_OWORD *)(v5 + v8 + 208); /*0x10070f48e*/
        v12 = 0x8000000000000000LL; /*0x10070f49f*/
        if ( *(_QWORD *)(v5 + v8 + 168) != 0x8000000000000000LL ) /*0x10070f4aa*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v29, v5 + v8 + 168); /*0x10070f4bc*/
          v12 = v29; /*0x10070f1f0*/
          v19 = v30; /*0x10070f1ff*/
          v20 = v31; /*0x10070f206*/
        }
        v9 = v36 + 1; /*0x10070f211*/
        LOBYTE(v36) = *(_BYTE *)(v5 + v8 + 229); /*0x10070f21d*/
        __src[2] = v26[2]; /*0x10070f227*/
        __src[1] = v26[1]; /*0x10070f23c*/
        __src[0] = v26[0]; /*0x10070f243*/
        __src[5] = v25[2]; /*0x10070f258*/
        __src[4] = v25[1]; /*0x10070f26a*/
        __src[3] = v25[0]; /*0x10070f26e*/
        __src[8] = v24[2]; /*0x10070f278*/
        __src[7] = v24[1]; /*0x10070f28a*/
        __src[6] = v24[0]; /*0x10070f28e*/
        __src[11] = v23[2]; /*0x10070f299*/
        __src[10] = v23[1]; /*0x10070f2ab*/
        __src[9] = v23[0]; /*0x10070f2af*/
        __src[14] = v22[2]; /*0x10070f2ba*/
        __src[13] = v22[1]; /*0x10070f2cc*/
        __src[12] = v22[0]; /*0x10070f2d0*/
        __src[17] = v18[2]; /*0x10070f2db*/
        __src[16] = v18[1]; /*0x10070f2ed*/
        __src[15] = v18[0]; /*0x10070f2f1*/
        __src[20] = v21[2]; /*0x10070f2fc*/
        __src[19] = v21[1]; /*0x10070f311*/
        __src[18] = v21[0]; /*0x10070f318*/
        v30 = v20; /*0x10070f32a*/
        v29 = v19; /*0x10070f32e*/
        memcpy((void *)(v7 + v8 - 231), __src, 0xA8u); /*0x10070f346*/
        *(_QWORD *)(v7 + v8 - 63) = v12; /*0x10070f34b*/
        v10 = v30; /*0x10070f354*/
        *(_QWORD *)(v7 + v8 - 55) = v29; /*0x10070f358*/
        *(_QWORD *)(v7 + v8 - 47) = v10; /*0x10070f35d*/
        *(_OWORD *)(v7 + v8 - 39) = v16; /*0x10070f369*/
        *(_OWORD *)(v7 + v8 - 23) = v17; /*0x10070f376*/
        *(_DWORD *)(v7 + v8 - 7) = v35; /*0x10070f37f*/
        *(_BYTE *)(v7 + v8 - 3) = v39; /*0x10070f388*/
        *(_BYTE *)(v7 + v8 - 2) = v36; /*0x10070f391*/
        *(_BYTE *)(v7 + v8 - 1) = v37; /*0x10070f39a*/
        *(_BYTE *)(v7 + v8) = v38; /*0x10070f3a3*/
        v8 += 232; /*0x10070f3a7*/
        v36 = v9; /*0x10070f3ae*/
        v2 = v34; /*0x10070f3b2*/
      }
      while ( v34 != v9 ); /*0x10070f3b9*/
    }
  }
  else
  {
    v32 = 0; /*0x10070f4c6*/
    v33 = 8; /*0x10070f4ce*/
  }
  result = v28; /*0x10070f4da*/
  v28[2] = v2; /*0x10070f4de*/
  v14 = v32; /*0x10070f4e2*/
  result[1] = v33; /*0x10070f4ea*/
  *result = v14; /*0x10070f4ee*/
  return result; /*0x10070f4f1*/
}