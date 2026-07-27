// __ZN13codexmate_lib4core5relay12image_compat20replace_image_blocks @ 0x100323d60 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::image_compat::replace_image_blocks::h897a652ad53a8f18(_QWORD *a1)
{
  int v1; // eax
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r13
  const void *v12; // rsi
  size_t v13; // rdx
  size_t v14; // rbx
  __int64 v15; // rbx
  int v16; // eax
  char v17; // cl
  __int64 v19; // rax
  _DWORD *v20; // rax
  _QWORD *v21; // rbx
  _DWORD *v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // [rsp+38h] [rbp-C8h]
  __int64 v36; // [rsp+40h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-B8h]
  __int64 v38; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int128 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int128 v45; // [rsp+98h] [rbp-68h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-58h]
  __m512i v47; // [rsp+B8h] [rbp-48h] BYREF

  v1 = *(unsigned __int8 *)a1; /*0x100323d74*/
  if ( v1 != 5 ) /*0x100323d7a*/
  {
    if ( v1 == 4 ) /*0x100323d7f*/
    {
      v2 = a1[3]; /*0x100323d85*/
      if ( v2 ) /*0x100323d8c*/
      {
        v3 = a1[2]; /*0x100323d92*/
        v4 = 0; /*0x100323d96*/
        do /*0x100323db2*/
        {
          v4 += codexmate_lib::core::relay::image_compat::replace_image_blocks::h897a652ad53a8f18(v3); /*0x100323da8*/
          v3 += 32; /*0x100323dab*/
          --v2; /*0x100323daf*/
        }
        while ( v2 ); /*0x100323db2*/
        return v4; /*0x100323db2*/
      }
    }
    return 0; /*0x100323ec3*/
  }
  v5 = a1[1]; /*0x100323db9*/
  if ( !v5 ) /*0x100323dc0*/
    return 0; /*0x100323dc0*/
  v6 = a1[2]; /*0x100323dcd*/
  v39 = v6; /*0x100323dd1*/
  v7 = a1[1]; /*0x100323dd8*/
LABEL_9:
  v8 = v7 + 360; /*0x100323ddb*/
  v37 = v7; /*0x100323de9*/
  v9 = (_QWORD *)(v7 - 8); /*0x100323df0*/
  v38 = *(unsigned __int16 *)(v7 + 626); /*0x100323df4*/
  v10 = 3LL * (unsigned int)(8 * v38); /*0x100323e02*/
  v11 = -1; /*0x100323e06*/
  do /*0x100323e7d*/
  {
    if ( !v10 ) /*0x100323e13*/
    {
      v11 = v38; /*0x100323e90*/
LABEL_19:
      if ( !v39 ) /*0x100323ea2*/
        goto LABEL_37; /*0x100323ea2*/
      --v39; /*0x100323ea8*/
      v7 = *(_QWORD *)(v37 + 8 * v11 + 632); /*0x100323eb6*/
      goto LABEL_9; /*0x100323ebe*/
    }
    v36 = v8 + 24; /*0x100323e19*/
    v12 = *(const void **)(v8 + 8); /*0x100323e20*/
    v35 = v9; /*0x100323e24*/
    v13 = *(_QWORD *)(v8 + 16); /*0x100323e2b*/
    v14 = v13 - 4; /*0x100323e32*/
    if ( v13 >= 4 ) /*0x100323e3b*/
      v13 = 4; /*0x100323e3b*/
    v15 = -(__int64)v14; /*0x100323e3f*/
    v16 = memcmp("typefullargsopenwithkindsavetrueuuidemitshowhide", v12, v13); /*0x100323e49*/
    if ( v16 ) /*0x100323e59*/
      v15 = v16; /*0x100323e59*/
    v17 = (v15 > 0) - (v15 < 0); /*0x100323e66*/
    v9 = v35 + 4; /*0x100323e68*/
    ++v11; /*0x100323e6c*/
    v10 -= 24; /*0x100323e6f*/
    v8 = v36; /*0x100323e73*/
  }
  while ( v17 == 1 ); /*0x100323e7d*/
  if ( v17 ) /*0x100323e84*/
    goto LABEL_19; /*0x100323e84*/
  if ( *((_BYTE *)v35 + 8) != 3 ) /*0x100323ede*/
    goto LABEL_37; /*0x100323ede*/
  v19 = v35[3]; /*0x100323ee4*/
  if ( *v9 != 11 ) /*0x100323eef*/
  {
    if ( *v9 == 9 && !(*(_QWORD *)v19 ^ 0x72755F6567616D69LL | *(unsigned __int8 *)(v19 + 8) ^ 0x6CLL) ) /*0x100323f14*/
    {
      *(_QWORD *)&v43 = 0; /*0x100323f1d*/
      v44 = 0; /*0x100323f25*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100323f2d*/
        "typefullargsopenwithkindsavetrueuuidemitshowhide",
        v12);
      v20 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100323f3c*/
      v21 = a1; /*0x100323f44*/
      if ( !v20 ) /*0x100323f4b*/
        goto LABEL_79; /*0x100323f4b*/
      *v20 = 1701869940; /*0x100323f54*/
      v40 = 4; /*0x100323f5a*/
      v41 = v20; /*0x100323f65*/
      v42 = 4; /*0x100323f6c*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v47, &off_1019609B8); /*0x100323f82*/
      if ( v47.i8[0] == 6 ) /*0x100323f8b*/
      {
        *(_QWORD *)&v45 = v47.i64[1]; /*0x10032447f*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003244a1*/
          "called `Result::unwrap()` on an `Err` value",
          43,
          &v45,
          &off_101962108,
          &off_1019609C8);
      }
      v46 = v47.i128[1]; /*0x100323f9d*/
      v45 = v47.i128[0]; /*0x100323fad*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v47, &v43, &v40, &v45); /*0x100323fc4*/
      if ( v47.i8[0] != 6 ) /*0x100323fcd*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v47); /*0x100323fd3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v47, &v43); /*0x100323fd8*/
      v22 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100323fe7*/
      if ( !v22 ) /*0x100323fef*/
LABEL_79:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10032453c*/
      *v22 = 1954047348; /*0x100323ff8*/
      v40 = 4; /*0x100323ffe*/
      v41 = v22; /*0x100324009*/
      v42 = 4; /*0x100324010*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v47, &off_1019609A8); /*0x100324026*/
      if ( v47.i8[0] == 6 ) /*0x10032402f*/
      {
        *(_QWORD *)&v45 = v47.i64[1]; /*0x1003244dc*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003244fe*/
          "called `Result::unwrap()` on an `Err` value",
          43,
          &v45,
          &off_101962108,
          &off_1019609C8);
      }
      v46 = v47.i128[1]; /*0x100324041*/
      v45 = v47.i128[0]; /*0x100324051*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v47, &v43, &v40, &v45); /*0x10032406b*/
      if ( v47.i8[0] != 6 ) /*0x100324074*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v47); /*0x10032407a*/
      goto LABEL_73; /*0x10032407a*/
    }
    goto LABEL_37; /*0x100323f17*/
  }
  if ( *(_QWORD *)v19 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v19 + 3) ^ 0x6567616D695F7475LL ) /*0x1003240bf*/
  {
LABEL_37:
    v23 = a1[3]; /*0x1003240c8*/
    v4 = 0; /*0x1003240d3*/
    if ( !v23 ) /*0x1003240d8*/
      return v4; /*0x1003240d8*/
    v24 = 0; /*0x1003240de*/
    while ( 1 ) /*0x10032411b*/
    {
      if ( v24 ) /*0x10032411e*/
      {
        if ( v6 < *(unsigned __int16 *)(v24 + 626) ) /*0x10032412b*/
          goto LABEL_43; /*0x10032412b*/
        goto LABEL_54; /*0x10032412b*/
      }
      if ( !v6 ) /*0x100324143*/
      {
        v24 = v5; /*0x10032417d*/
        goto LABEL_53; /*0x100324180*/
      }
      v24 = v5; /*0x100324148*/
      if ( (v6 & 7) == 0 ) /*0x10032414f*/
        break; /*0x10032414f*/
      v27 = 0; /*0x100324151*/
      do /*0x10032416d*/
      {
        v24 = *(_QWORD *)(v24 + 632); /*0x100324160*/
        ++v27; /*0x100324167*/
      }
      while ( (v6 & 7) != v27 ); /*0x10032416d*/
      v28 = v6 - v27; /*0x100324172*/
      if ( v6 >= 8 ) /*0x100324179*/
        goto LABEL_52; /*0x100324179*/
LABEL_53:
      v5 = 0; /*0x1003241ce*/
      v6 = 0; /*0x1003241d1*/
      if ( *(_WORD *)(v24 + 626) ) /*0x1003241d4*/
      {
LABEL_43:
        v26 = v24; /*0x100324131*/
        goto LABEL_56; /*0x100324134*/
      }
      do /*0x100324216*/
      {
LABEL_54:
        v26 = *(_QWORD *)(v24 + 352); /*0x1003241f0*/
        if ( !v26 ) /*0x1003241fa*/
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_839); /*0x100324471*/
        ++v5; /*0x100324200*/
        v6 = *(unsigned __int16 *)(v24 + 624); /*0x100324203*/
        v24 = *(_QWORD *)(v24 + 352); /*0x10032420b*/
      }
      while ( (unsigned __int16)v6 >= *(_WORD *)(v26 + 626) ); /*0x100324216*/
LABEL_56:
      if ( v5 ) /*0x10032421b*/
      {
        v29 = v26 + 8 * v6 + 640; /*0x100324221*/
        if ( (v5 & 7) != 0 ) /*0x100324230*/
        {
          v30 = 0; /*0x100324232*/
          do /*0x100324250*/
          {
            v24 = *(_QWORD *)v29; /*0x100324240*/
            v29 = *(_QWORD *)v29 + 632LL; /*0x100324243*/
            ++v30; /*0x10032424a*/
          }
          while ( (v5 & 7) != v30 ); /*0x100324250*/
          v31 = v5 - v30; /*0x100324255*/
          if ( v5 >= 8 ) /*0x10032425c*/
          {
            do /*0x10032429f*/
            {
LABEL_61:
              v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 632LL) /*0x100324260*/
                                                                                          + 632LL)
                                                                              + 632LL)
                                                                  + 632LL)
                                                      + 632LL)
                                          + 632LL)
                              + 632LL);
              v29 = v24 + 632; /*0x100324294*/
              v31 -= 8LL; /*0x10032429b*/
            }
            while ( v31 ); /*0x10032429f*/
          }
        }
        else
        {
          v31 = v5; /*0x1003242b0*/
          if ( v5 >= 8 ) /*0x1003242b7*/
            goto LABEL_61; /*0x1003242b7*/
        }
        v25 = 0; /*0x1003242a1*/
        goto LABEL_40; /*0x1003242a4*/
      }
      v25 = v6 + 1; /*0x1003240f0*/
      v24 = v26; /*0x1003240f4*/
LABEL_40:
      --v23; /*0x1003240f7*/
      v4 += codexmate_lib::core::relay::image_compat::replace_image_blocks::h897a652ad53a8f18(32 * v6 + v26); /*0x100324106*/
      v6 = v25; /*0x100324109*/
      v5 = 0; /*0x10032410c*/
      if ( !v23 ) /*0x100324115*/
        return v4; /*0x100324115*/
    }
    v28 = v6; /*0x100324182*/
    if ( v6 < 8 ) /*0x100324189*/
      goto LABEL_53; /*0x100324189*/
    do /*0x1003241cc*/
    {
LABEL_52:
      v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 632) /*0x100324190*/
                                                                                              + 632LL)
                                                                                  + 632LL)
                                                                      + 632LL)
                                                          + 632LL)
                                              + 632LL)
                                  + 632LL)
                      + 632LL);
      v28 -= 8LL; /*0x1003241c8*/
    }
    while ( v28 ); /*0x1003241cc*/
    goto LABEL_53; /*0x1003241cc*/
  }
  *(_QWORD *)&v43 = 0; /*0x1003242bb*/
  v44 = 0; /*0x1003242c3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x1003242cb*/
    "typefullargsopenwithkindsavetrueuuidemitshowhide",
    v12);
  v32 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1003242da*/
  v21 = a1; /*0x1003242e2*/
  if ( !v32 ) /*0x1003242e9*/
    goto LABEL_80; /*0x1003242e9*/
  *v32 = 1701869940; /*0x1003242f2*/
  v40 = 4; /*0x1003242f8*/
  v41 = v32; /*0x100324303*/
  v42 = 4; /*0x10032430a*/
  serde_json::value::to_value::h29e3c39dc75a9151(&v47, &off_101960980); /*0x100324320*/
  if ( v47.i8[0] == 6 ) /*0x100324329*/
  {
    *(_QWORD *)&v45 = v47.i64[1]; /*0x1003244af*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003244d1*/
      "called `Result::unwrap()` on an `Err` value",
      43,
      &v45,
      &off_101962108,
      &off_101960990);
  }
  v46 = v47.i128[1]; /*0x10032433b*/
  v45 = v47.i128[0]; /*0x10032434b*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v47, &v43, &v40, &v45); /*0x100324362*/
  if ( v47.i8[0] != 6 ) /*0x10032436b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v47); /*0x100324371*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v47, &v43); /*0x100324376*/
  v33 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100324385*/
  if ( !v33 ) /*0x10032438d*/
LABEL_80:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10032454d*/
  *v33 = 1954047348; /*0x100324396*/
  v40 = 4; /*0x10032439c*/
  v41 = v33; /*0x1003243a7*/
  v42 = 4; /*0x1003243ae*/
  serde_json::value::to_value::h29e3c39dc75a9151(&v47, &off_1019609A8); /*0x1003243c4*/
  if ( v47.i8[0] == 6 ) /*0x1003243cd*/
  {
    *(_QWORD *)&v45 = v47.i64[1]; /*0x100324509*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10032452b*/
      "called `Result::unwrap()` on an `Err` value",
      43,
      &v45,
      &off_101962108,
      &off_101960990);
  }
  v46 = v47.i128[1]; /*0x1003243df*/
  v45 = v47.i128[0]; /*0x1003243ef*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v47, &v43, &v40, &v45); /*0x100324409*/
  if ( v47.i8[0] != 6 ) /*0x100324412*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v47); /*0x100324418*/
LABEL_73:
  *(__int128 *)((char *)v47.i128 + 7) = v43; /*0x10032441d*/
  *(__int64 *)((char *)&v47.i64[2] + 7) = v44; /*0x100324431*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v21); /*0x100324438*/
  *(_BYTE *)v21 = 5; /*0x10032443d*/
  v34 = v47.i64[1]; /*0x100324444*/
  *(_QWORD *)((char *)v21 + 1) = v47.i64[0]; /*0x100324448*/
  *(_OWORD *)((char *)v21 + 9) = __PAIR128__(v47.u64[2], v34); /*0x10032444c*/
  v21[3] = *(__int64 *)((char *)&v47.i64[2] + 7); /*0x10032445c*/
  return 1; /*0x100323ec8*/
}