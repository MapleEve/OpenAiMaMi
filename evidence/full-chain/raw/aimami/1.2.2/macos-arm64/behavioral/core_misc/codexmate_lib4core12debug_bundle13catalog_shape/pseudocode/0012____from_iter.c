// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13catalog_shape 0x10089fe90 d=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h2dd54e77a6ab8d72(
        unsigned __int64 *a1,
        _QWORD *a2)
{
  unsigned __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _BOOL8 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // r13
  bool v14; // cf
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 i; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  _BOOL8 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  _QWORD __dst[20]; // [rsp+8h] [rbp-148h] BYREF
  _QWORD v37[2]; // [rsp+A8h] [rbp-A8h] BYREF
  _QWORD v38[2]; // [rsp+B8h] [rbp-98h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-88h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-80h]
  __int64 v41; // [rsp+D8h] [rbp-78h]
  __int64 v42; // [rsp+E0h] [rbp-70h]
  unsigned __int64 *v43; // [rsp+E8h] [rbp-68h]
  __int64 v44; // [rsp+F0h] [rbp-60h]
  __int64 v45; // [rsp+F8h] [rbp-58h] BYREF
  unsigned __int64 v46; // [rsp+100h] [rbp-50h]
  __int64 v47; // [rsp+108h] [rbp-48h]
  unsigned __int64 v48; // [rsp+110h] [rbp-40h] BYREF
  __int64 v49; // [rsp+118h] [rbp-38h]
  __int64 v50; // [rsp+120h] [rbp-30h]

  v3 = a1; /*0x10089fea7*/
  v4 = _$LT$alloc..collections..btree..set..Difference$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7c19e9ffd7976392(a2); /*0x10089fead*/
  if ( v4 ) /*0x10089feb5*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v39, v4); /*0x10089fec1*/
    if ( !__OFSUB__(-v39, 1) ) /*0x10089fed3*/
    {
      v7 = 0; /*0x10089ff08*/
      if ( *a2 ) /*0x10089ff05*/
        v7 = *a2 - 1LL; /*0x10089ff0e*/
      v43 = a1; /*0x10089ff15*/
      v42 = v39; /*0x10089ff19*/
      v44 = v40; /*0x10089ff1d*/
      if ( v7 ) /*0x10089ff21*/
      {
        v8 = a2[9]; /*0x10089ff29*/
        if ( v7 == 1 ) /*0x10089ff27*/
          v9 = *(_QWORD *)(a2[10] + 16LL); /*0x10089ff31*/
        else
          v9 = 0; /*0x10089ff5a*/
LABEL_20:
        v13 = 0; /*0x10089ffaf*/
        v14 = v8 < v9; /*0x10089ffb2*/
        v15 = v8 - v9; /*0x10089ffb2*/
        if ( v14 ) /*0x10089ffb5*/
          v15 = 0; /*0x10089ffb5*/
        v16 = v15 + 1; /*0x10089ffb9*/
        v17 = -1; /*0x10089ffbc*/
        if ( v16 ) /*0x10089ffc3*/
          v17 = v16; /*0x10089ffc3*/
        v18 = 4; /*0x10089ffcb*/
        if ( v17 >= 5 ) /*0x10089ffd0*/
          v18 = v17; /*0x10089ffd0*/
        if ( v17 > 0x555555555555555LL ) /*0x10089ffed*/
LABEL_27:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13); /*0x10089ffef*/
        if ( 24 * v18 ) /*0x10089ffdc*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008a0004*/
          v13 = 8; /*0x1008a0009*/
          v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v18, 8u); /*0x1008a0017*/
          if ( !v19 ) /*0x1008a001f*/
            goto LABEL_27; /*0x1008a001f*/
          v20 = v19; /*0x1008a0021*/
        }
        else
        {
          v20 = 8; /*0x1008a0026*/
          v18 = 0; /*0x1008a002c*/
        }
        *(_QWORD *)(v20 + 16) = v41; /*0x1008a0032*/
        v21 = v39; /*0x1008a0037*/
        *(_QWORD *)(v20 + 8) = v40; /*0x1008a0042*/
        *(_QWORD *)v20 = v21; /*0x1008a0047*/
        v48 = v18; /*0x1008a004b*/
        v49 = v20; /*0x1008a004f*/
        v50 = 1; /*0x1008a0053*/
        memcpy(__dst, a2, sizeof(__dst)); /*0x1008a006d*/
        v22 = 1; /*0x1008a0072*/
        for ( i = 24; ; i += 24 ) /*0x1008a0078*/
        {
          v25 = _$LT$alloc..collections..btree..set..Difference$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7c19e9ffd7976392(__dst); /*0x1008a00a8*/
          if ( !v25 /*0x1008a00d3*/
            || (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v45, v25),
                v45 == 0x8000000000000000LL) )
          {
            v3 = v43; /*0x1008a01d3*/
            v43[2] = v50; /*0x1008a01d7*/
            v35 = v48; /*0x1008a01db*/
            v3[1] = v49; /*0x1008a01e3*/
            *v3 = v35; /*0x1008a01e7*/
            return v3; /*0x1008a01ea*/
          }
          if ( v22 == v48 ) /*0x1008a00dd*/
            break; /*0x1008a00dd*/
LABEL_33:
          *(_QWORD *)(v20 + i + 16) = v47; /*0x1008a0080*/
          v24 = v45; /*0x1008a0089*/
          *(_QWORD *)(v20 + i + 8) = v46; /*0x1008a0091*/
          *(_QWORD *)(v20 + i) = v24; /*0x1008a0096*/
          v50 = ++v22; /*0x1008a009d*/
        }
        v27 = __dst[0] - 1LL; /*0x1008a00ea*/
        if ( !__dst[0] ) /*0x1008a00f3*/
          v27 = 0; /*0x1008a00f3*/
        if ( v27 == 2 ) /*0x1008a00fb*/
        {
          v28 = __dst[9]; /*0x1008a0117*/
          v29 = 0; /*0x1008a011e*/
          goto LABEL_52; /*0x1008a0120*/
        }
        if ( v27 == 1 ) /*0x1008a0101*/
        {
          v28 = __dst[9]; /*0x1008a0103*/
          v29 = *(_QWORD *)(__dst[10] + 16LL); /*0x1008a0111*/
LABEL_52:
          v14 = v28 < v29; /*0x1008a0195*/
          v32 = v28 - v29; /*0x1008a0195*/
          v33 = 0; /*0x1008a0198*/
          if ( !v14 ) /*0x1008a019d*/
            v33 = v32; /*0x1008a019d*/
          v34 = v33 + 1; /*0x1008a01a1*/
          if ( !v34 ) /*0x1008a01ab*/
            v34 = -1; /*0x1008a01ab*/
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e( /*0x1008a01c1*/
            &v48,
            v22,
            v34,
            8,
            0x18u);
          v20 = v49; /*0x1008a01c6*/
          goto LABEL_33; /*0x1008a01ca*/
        }
        if ( LODWORD(__dst[18]) == 1 ) /*0x1008a0129*/
        {
          v30 = 1; /*0x1008a012b*/
          if ( !__dst[19] ) /*0x1008a0138*/
          {
            v29 = 0; /*0x1008a013a*/
            v31 = 0; /*0x1008a013c*/
LABEL_50:
            v28 = __dst[8]; /*0x1008a0165*/
            v38[0] = v30; /*0x1008a016c*/
            v38[1] = v31; /*0x1008a0173*/
            v37[1] = v29; /*0x1008a017a*/
            v37[0] = 1; /*0x1008a0181*/
            if ( v31 != v29 || !v30 ) /*0x1008a0193*/
              core::panicking::assert_failed::h6c21bfef3d5a1999( /*0x1008a0208*/
                0,
                v38,
                v37,
                0,
                v26,
                &anon_f7eb15af4f65309b05b1b96532dfcdc2_8);
            goto LABEL_52; /*0x1008a0193*/
          }
        }
        else
        {
          v30 = 0; /*0x1008a0140*/
        }
        v31 = __dst[17] + v30; /*0x1008a014c*/
        v29 = __dst[17] + v30; /*0x1008a014f*/
        if ( __CFADD__(__dst[17], v30) ) /*0x1008a014c*/
          v29 = -1; /*0x1008a0159*/
        v30 = v31 >= __dst[17]; /*0x1008a0162*/
        goto LABEL_50; /*0x1008a0162*/
      }
      if ( *((_DWORD *)a2 + 36) == 1 ) /*0x10089ff3f*/
      {
        v10 = 1; /*0x10089ff41*/
        if ( !a2[19] ) /*0x10089ff46*/
        {
          v9 = 0; /*0x10089ff50*/
          v11 = 0; /*0x10089ff52*/
LABEL_18:
          v8 = a2[8]; /*0x10089ff80*/
          v45 = v10; /*0x10089ff84*/
          v46 = v11; /*0x10089ff88*/
          __dst[1] = v9; /*0x10089ff8c*/
          __dst[0] = 1; /*0x10089ff93*/
          if ( v11 != v9 || !v10 ) /*0x10089ffa9*/
            core::panicking::assert_failed::h6c21bfef3d5a1999( /*0x1008a0225*/
              0,
              &v45,
              __dst,
              0,
              v5,
              &anon_f7eb15af4f65309b05b1b96532dfcdc2_8);
          goto LABEL_20; /*0x10089ffa9*/
        }
      }
      else
      {
        v10 = 0; /*0x10089ff5e*/
      }
      v12 = a2[17]; /*0x10089ff60*/
      v11 = v12 + v10; /*0x10089ff6a*/
      v9 = -1; /*0x10089ff6d*/
      if ( !__CFADD__(v12, v10) ) /*0x10089ff74*/
        v9 = v12 + v10; /*0x10089ff74*/
      v10 = v11 >= v12; /*0x10089ff7d*/
      goto LABEL_18; /*0x10089ff7d*/
    }
  }
  *a1 = 0; /*0x10089fed5*/
  a1[1] = 8; /*0x10089fedc*/
  a1[2] = 0; /*0x10089fee4*/
  return v3; /*0x10089feef*/
}