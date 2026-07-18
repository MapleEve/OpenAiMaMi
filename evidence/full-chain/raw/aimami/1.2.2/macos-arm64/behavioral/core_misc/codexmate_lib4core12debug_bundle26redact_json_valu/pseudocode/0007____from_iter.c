// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x1008a6200 d=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::ha03c0a6f20cc1cef(
        unsigned __int64 *a1,
        __int64 *a2)
{
  unsigned __int64 *v2; // r14
  __int64 v3; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r10
  __int64 v25; // r8
  unsigned __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  _QWORD v31[3]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v32; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-68h]
  __int64 v34; // [rsp+30h] [rbp-60h]
  unsigned __int64 *v35; // [rsp+38h] [rbp-58h]
  __int64 v36; // [rsp+40h] [rbp-50h]
  unsigned __int64 v37; // [rsp+48h] [rbp-48h] BYREF
  __int64 v38; // [rsp+50h] [rbp-40h]
  __int64 v39; // [rsp+58h] [rbp-38h]
  unsigned __int64 v40; // [rsp+60h] [rbp-30h]

  v2 = a1; /*0x1008a6214*/
  v3 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d82edc8d74cbf51(a2); /*0x1008a621a*/
  if ( v3 ) /*0x1008a6222*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v32, v3); /*0x1008a622b*/
    if ( !__OFSUB__(-v32, 1) ) /*0x1008a623a*/
    {
      v40 = v33; /*0x1008a6269*/
      v5 = a2[8]; /*0x1008a626d*/
      v6 = -1; /*0x1008a6277*/
      if ( v5 != -1 ) /*0x1008a627e*/
        v6 = a2[8] + 1; /*0x1008a627e*/
      v7 = 4; /*0x1008a6286*/
      if ( v6 >= 5 ) /*0x1008a628b*/
        v7 = v6; /*0x1008a628b*/
      if ( v6 > 0x555555555555555LL ) /*0x1008a62a8*/
      {
        v8 = 0; /*0x1008a62aa*/
        goto LABEL_11; /*0x1008a62aa*/
      }
      v35 = a1; /*0x1008a62b9*/
      if ( 24 * v7 ) /*0x1008a6297*/
      {
        v9 = v5; /*0x1008a62c2*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008a62c5*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v7, 8u); /*0x1008a62d2*/
        v8 = 8; /*0x1008a62d7*/
        if ( !v10 ) /*0x1008a62df*/
LABEL_11:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8); /*0x1008a62ac*/
        v11 = v10; /*0x1008a62e1*/
        v5 = v9; /*0x1008a62e4*/
      }
      else
      {
        v11 = 8; /*0x1008a62e9*/
        v7 = 0; /*0x1008a62ee*/
      }
      v36 = v11; /*0x1008a62f0*/
      *(_QWORD *)(v11 + 16) = v34; /*0x1008a62f8*/
      v12 = v32; /*0x1008a62fc*/
      *(_QWORD *)(v11 + 8) = v33; /*0x1008a6304*/
      *(_QWORD *)v11 = v12; /*0x1008a6308*/
      v37 = v7; /*0x1008a630b*/
      v38 = v11; /*0x1008a630f*/
      v39 = 1; /*0x1008a6313*/
      if ( !v5 ) /*0x1008a631e*/
      {
LABEL_49:
        v2 = v35; /*0x1008a65d4*/
        v35[2] = v39; /*0x1008a65dc*/
        v30 = v37; /*0x1008a65e0*/
        v2[1] = v38; /*0x1008a65e8*/
        *v2 = v30; /*0x1008a65ec*/
        return v2; /*0x1008a65ef*/
      }
      v13 = *a2; /*0x1008a6324*/
      v14 = a2[1]; /*0x1008a6327*/
      v15 = a2[2]; /*0x1008a632b*/
      v40 = a2[3]; /*0x1008a6333*/
      v16 = 1; /*0x1008a6337*/
      while ( 1 ) /*0x1008a638a*/
      {
        if ( (v13 & 1) == 0 ) /*0x1008a638d*/
          core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_df65db1ba7ce9569a15dc8c2d6b586ae_11); /*0x1008a6609*/
        v19 = v40; /*0x1008a6396*/
        if ( v14 ) /*0x1008a639a*/
        {
          if ( v40 < *(unsigned __int16 *)(v14 + 626) ) /*0x1008a63a8*/
            goto LABEL_22; /*0x1008a63a8*/
          goto LABEL_32; /*0x1008a63a8*/
        }
        if ( v40 ) /*0x1008a63c3*/
          break; /*0x1008a63c3*/
        v19 = 0; /*0x1008a6444*/
        v14 = v15; /*0x1008a6447*/
LABEL_31:
        v15 = 0; /*0x1008a644a*/
        if ( *(_WORD *)(v14 + 626) ) /*0x1008a644c*/
        {
LABEL_22:
          v20 = v14; /*0x1008a63ae*/
          v21 = v19; /*0x1008a63b1*/
          goto LABEL_34; /*0x1008a63b4*/
        }
        do /*0x1008a6487*/
        {
LABEL_32:
          v20 = *(_QWORD *)(v14 + 352); /*0x1008a6460*/
          if ( !v20 ) /*0x1008a646b*/
            core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_df65db1ba7ce9569a15dc8c2d6b586ae_806); /*0x1008a65fb*/
          ++v15; /*0x1008a6471*/
          v21 = *(unsigned __int16 *)(v14 + 624); /*0x1008a6474*/
          v14 = *(_QWORD *)(v14 + 352); /*0x1008a647d*/
        }
        while ( (unsigned __int16)v21 >= *(_WORD *)(v20 + 626) ); /*0x1008a6487*/
LABEL_34:
        if ( v15 ) /*0x1008a648c*/
        {
          v24 = v20 + 8 * v21 + 640; /*0x1008a6492*/
          if ( (v15 & 7) != 0 ) /*0x1008a64a1*/
          {
            v25 = 0; /*0x1008a64a7*/
            do /*0x1008a64c1*/
            {
              v14 = *(_QWORD *)v24; /*0x1008a64b0*/
              v24 = *(_QWORD *)v24 + 632LL; /*0x1008a64b3*/
              ++v25; /*0x1008a64bb*/
            }
            while ( (v15 & 7) != v25 ); /*0x1008a64c1*/
            v26 = v15 - v25; /*0x1008a64c6*/
            if ( v15 >= 8 ) /*0x1008a64cd*/
            {
              do /*0x1008a6510*/
              {
LABEL_39:
                v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 632LL) /*0x1008a64d0*/
                                                                                            + 632LL)
                                                                                + 632LL)
                                                                    + 632LL)
                                                        + 632LL)
                                            + 632LL)
                                + 632LL);
                v24 = v14 + 632; /*0x1008a6504*/
                v26 -= 8LL; /*0x1008a650c*/
              }
              while ( v26 ); /*0x1008a6510*/
            }
          }
          else
          {
            v26 = v15; /*0x1008a65b0*/
            if ( v15 >= 8 ) /*0x1008a65b7*/
              goto LABEL_39; /*0x1008a65b7*/
          }
          v27 = v16; /*0x1008a6512*/
          v28 = v5; /*0x1008a6515*/
          v29 = 0; /*0x1008a6518*/
          goto LABEL_42; /*0x1008a651a*/
        }
        v27 = v16; /*0x1008a6520*/
        v28 = v5; /*0x1008a6523*/
        v29 = v21 + 1; /*0x1008a6526*/
        v14 = v20; /*0x1008a652a*/
LABEL_42:
        v40 = v29; /*0x1008a652d*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1008a6544*/
          v31,
          v20 + 24 * v21 + 360);
        if ( v31[0] != 0x8000000000000000LL ) /*0x1008a655d*/
        {
          v5 = v28 - 1; /*0x1008a6565*/
          if ( v27 == v37 ) /*0x1008a656c*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e( /*0x1008a659c*/
              &v37,
              v27,
              v28,
              8,
              0x18u);
            v36 = v38; /*0x1008a6344*/
            v5 = v28 - 1; /*0x1008a6348*/
          }
          v17 = 3 * v27; /*0x1008a634e*/
          v18 = v36; /*0x1008a6356*/
          *(_QWORD *)(v36 + 8 * v17 + 16) = v31[2]; /*0x1008a635a*/
          v13 = v31[0]; /*0x1008a635f*/
          *(_QWORD *)(v18 + 8 * v17 + 8) = v31[1]; /*0x1008a636a*/
          *(_QWORD *)(v18 + 8 * v17) = v13; /*0x1008a636f*/
          v16 = v27 + 1; /*0x1008a6373*/
          v39 = v27 + 1; /*0x1008a6376*/
          LOBYTE(v13) = 1; /*0x1008a637a*/
          v15 = 0; /*0x1008a637c*/
          if ( v5 ) /*0x1008a6384*/
            continue; /*0x1008a6384*/
        }
        goto LABEL_49; /*0x1008a6384*/
      }
      v14 = v15; /*0x1008a63c8*/
      if ( (v40 & 7) != 0 ) /*0x1008a63cf*/
      {
        v22 = 0; /*0x1008a63d5*/
        do /*0x1008a63ee*/
        {
          v14 = *(_QWORD *)(v14 + 632); /*0x1008a63e0*/
          ++v22; /*0x1008a63e8*/
        }
        while ( (v40 & 7) != v22 ); /*0x1008a63ee*/
        v23 = v40 - v22; /*0x1008a63f3*/
        if ( v40 < 8 ) /*0x1008a63fa*/
          goto LABEL_29; /*0x1008a63fa*/
      }
      else
      {
        v23 = v40; /*0x1008a65c2*/
        if ( v40 < 8 ) /*0x1008a65c9*/
        {
LABEL_29:
          v19 = 0; /*0x1008a643f*/
          goto LABEL_31; /*0x1008a6442*/
        }
      }
      do /*0x1008a643d*/
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 632) /*0x1008a6432*/
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v23 -= 8LL; /*0x1008a6439*/
      }
      while ( v23 ); /*0x1008a643d*/
      goto LABEL_29; /*0x1008a643d*/
    }
  }
  *a1 = 0; /*0x1008a623c*/
  a1[1] = 8; /*0x1008a6243*/
  a1[2] = 0; /*0x1008a624b*/
  return v2; /*0x1008a6256*/
}