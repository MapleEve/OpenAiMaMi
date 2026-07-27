// __ZN13codexmate_lib4core5relay10translator30strip_relay_unsupported_fields @ 0x10086ef20 | 基线 same-set
char __fastcall codexmate_lib::core::relay::translator::strip_relay_unsupported_fields::hace19d0b224ad6a6(
        unsigned __int8 *a1)
{
  unsigned __int64 v1; // rax
  __int64 *v2; // r14
  __int64 v3; // rax
  bool v4; // zf
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int8 *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r15
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  bool v14; // r15
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rsi
  _QWORD v24[4]; // [rsp+8h] [rbp-E8h] BYREF
  __int128 v25; // [rsp+28h] [rbp-C8h]
  __int128 v26; // [rsp+38h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-A8h]
  __int64 v28; // [rsp+50h] [rbp-A0h]
  __int64 v29; // [rsp+58h] [rbp-98h]
  __int64 v30; // [rsp+60h] [rbp-90h]
  __int64 v31; // [rsp+68h] [rbp-88h]
  unsigned __int64 *v32; // [rsp+70h] [rbp-80h]
  __int64 *v33; // [rsp+78h] [rbp-78h]
  __int128 v34; // [rsp+80h] [rbp-70h] BYREF
  __int64 v35; // [rsp+90h] [rbp-60h]
  _QWORD v36[5]; // [rsp+98h] [rbp-58h] BYREF
  char v37; // [rsp+C7h] [rbp-29h] BYREF

  LODWORD(v1) = *a1; /*0x10086ef37*/
  if ( (_DWORD)v1 == 4 ) /*0x10086ef3d*/
  {
    v8 = a1 + 8; /*0x10086f007*/
    v9 = *((_QWORD *)a1 + 3); /*0x10086f00b*/
    if ( v9 ) /*0x10086f012*/
    {
      v10 = *((_QWORD *)a1 + 2); /*0x10086f014*/
      v11 = 32 * v9; /*0x10086f018*/
      do /*0x10086f030*/
      {
        codexmate_lib::core::relay::translator::strip_relay_unsupported_fields::hace19d0b224ad6a6(v10); /*0x10086f024*/
        v10 += 32; /*0x10086f029*/
        v11 -= 32; /*0x10086f02c*/
      }
      while ( v11 ); /*0x10086f030*/
    }
    LOBYTE(v1) = alloc::vec::Vec$LT$T$C$A$GT$::retain::h41f46360afd12cf5(v8); /*0x10086f046*/
    return v1; /*0x10086f046*/
  }
  if ( (_DWORD)v1 != 5 ) /*0x10086ef46*/
    return v1; /*0x10086ef46*/
  v2 = (__int64 *)(a1 + 8); /*0x10086ef4c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d( /*0x10086ef63*/
    &v34,
    a1 + 8,
    "cache_control",
    13);
  if ( (_BYTE)v34 != 6 ) /*0x10086ef6c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v34); /*0x10086ef72*/
  v3 = *v2; /*0x10086ef77*/
  v4 = *v2 == 0; /*0x10086ef7a*/
  v32 = (unsigned __int64 *)(a1 + 8); /*0x10086ef7d*/
  if ( !v4 ) /*0x10086ef81*/
  {
    v5 = *((_QWORD *)a1 + 2); /*0x10086ef87*/
    if ( v5 ) /*0x10086ef8e*/
    {
      if ( (v5 & 7) != 0 ) /*0x10086ef97*/
      {
        v6 = 0; /*0x10086ef9d*/
        do /*0x10086efad*/
        {
          v3 = *(_QWORD *)(v3 + 632); /*0x10086efa0*/
          ++v6; /*0x10086efa7*/
        }
        while ( (*((_QWORD *)a1 + 2) & 7LL) != v6 ); /*0x10086efad*/
        v7 = v5 - v6; /*0x10086efb2*/
        if ( v5 < 8 ) /*0x10086efb9*/
          goto LABEL_12; /*0x10086efb9*/
        goto LABEL_11; /*0x10086efb9*/
      }
      v7 = *((_QWORD *)a1 + 2); /*0x10086f365*/
      if ( v5 >= 8 ) /*0x10086f36c*/
      {
        do /*0x10086effc*/
        {
LABEL_11:
          v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 632) /*0x10086efc0*/
                                                                                                 + 632LL)
                                                                                     + 632LL)
                                                                         + 632LL)
                                                             + 632LL)
                                                 + 632LL)
                                     + 632LL)
                         + 632LL);
          v7 -= 8; /*0x10086eff8*/
        }
        while ( v7 ); /*0x10086effc*/
      }
    }
LABEL_12:
    v34 = 0; /*0x10086effe*/
    goto LABEL_18; /*0x10086f005*/
  }
  v2 = nullptr; /*0x10086f04b*/
  v3 = 0; /*0x10086f04e*/
LABEL_18:
  v24[0] = &v37; /*0x10086f050*/
  v33 = (__int64 *)(a1 + 24); /*0x10086f05f*/
  v24[1] = a1 + 24; /*0x10086f063*/
  v24[2] = v2; /*0x10086f06a*/
  v24[3] = v3; /*0x10086f071*/
  v25 = v34; /*0x10086f080*/
  _$LT$alloc..collections..btree..map..ExtractIf$LT$K$C$V$C$R$C$F$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4c889e0115a8744b( /*0x10086f09c*/
    &v26,
    v24);
  if ( !__OFSUB__(0, (_QWORD)v26) ) /*0x10086f0aa*/
  {
    do /*0x10086f2fa*/
    {
      v36[3] = v31; /*0x10086f307*/
      v36[2] = v30; /*0x10086f312*/
      v36[1] = v29; /*0x10086f31d*/
      v36[0] = v28; /*0x10086f328*/
      v35 = v27; /*0x10086f333*/
      v34 = v26; /*0x10086f349*/
      if ( (_QWORD)v26 ) /*0x10086f350*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v34 + 1), v26, 1); /*0x10086f35b*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v36); /*0x10086f2e3*/
      _$LT$alloc..collections..btree..map..ExtractIf$LT$K$C$V$C$R$C$F$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4c889e0115a8744b( /*0x10086f2ee*/
        &v26,
        v24);
    }
    while ( (_QWORD)v26 != 0x8000000000000000LL ); /*0x10086f2fa*/
  }
  v12 = *v32; /*0x10086f0b4*/
  LOBYTE(v1) = *v32 != 0; /*0x10086f0ba*/
  v13 = *v33; /*0x10086f0c1*/
  if ( ((unsigned __int8)v1 & (*v33 != 0)) == 1 ) /*0x10086f0cf*/
  {
    v14 = v12 != 0; /*0x10086f0db*/
    v1 = *((_QWORD *)a1 + 2); /*0x10086f0df*/
    v15 = 0; /*0x10086f0e3*/
    while ( v15 || !v14 ) /*0x10086f120*/
    {
      if ( !v14 ) /*0x10086f164*/
        core::option::unwrap_failed::h44626cade04bbf1e(&off_10196D588); /*0x10086f37e*/
      if ( v1 < *(unsigned __int16 *)(v15 + 626) ) /*0x10086f174*/
      {
LABEL_33:
        v19 = v15; /*0x10086f176*/
        goto LABEL_40; /*0x10086f179*/
      }
      do /*0x10086f204*/
      {
LABEL_38:
        v19 = *(_QWORD *)(v15 + 352); /*0x10086f1e0*/
        if ( !v19 ) /*0x10086f1ea*/
          core::option::unwrap_failed::h44626cade04bbf1e(&off_10196D570); /*0x10086f38a*/
        ++v12; /*0x10086f1f0*/
        v1 = *(unsigned __int16 *)(v15 + 624); /*0x10086f1f3*/
        v15 = *(_QWORD *)(v15 + 352); /*0x10086f1fa*/
      }
      while ( (unsigned __int16)v1 >= *(_WORD *)(v19 + 626) ); /*0x10086f204*/
LABEL_40:
      if ( v12 ) /*0x10086f209*/
      {
        v20 = v19 + 8 * v1 + 640; /*0x10086f20f*/
        if ( (v12 & 7) != 0 ) /*0x10086f21e*/
        {
          v21 = 0; /*0x10086f224*/
          do /*0x10086f240*/
          {
            v15 = *(_QWORD *)v20; /*0x10086f230*/
            v20 = *(_QWORD *)v20 + 632LL; /*0x10086f233*/
            ++v21; /*0x10086f23a*/
          }
          while ( (v12 & 7) != v21 ); /*0x10086f240*/
          v22 = v12 - v21; /*0x10086f245*/
          if ( v12 >= 8 ) /*0x10086f24c*/
          {
            do /*0x10086f28f*/
            {
LABEL_45:
              v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 632LL) /*0x10086f250*/
                                                                                          + 632LL)
                                                                              + 632LL)
                                                                  + 632LL)
                                                      + 632LL)
                                          + 632LL)
                              + 632LL);
              v20 = v15 + 632; /*0x10086f284*/
              v22 -= 8LL; /*0x10086f28b*/
            }
            while ( v22 ); /*0x10086f28f*/
          }
        }
        else
        {
          v22 = v12; /*0x10086f2a0*/
          if ( v12 >= 8 ) /*0x10086f2a7*/
            goto LABEL_45; /*0x10086f2a7*/
        }
        v16 = 0; /*0x10086f291*/
        goto LABEL_22; /*0x10086f294*/
      }
      v16 = v1 + 1; /*0x10086f0f0*/
      v15 = v19; /*0x10086f0f4*/
LABEL_22:
      --v13; /*0x10086f0f7*/
      codexmate_lib::core::relay::translator::strip_relay_unsupported_fields::hace19d0b224ad6a6(32 * v1 + v19); /*0x10086f101*/
      v12 = 0; /*0x10086f106*/
      v1 = v16; /*0x10086f10b*/
      if ( !v13 ) /*0x10086f111*/
        return v1; /*0x10086f111*/
    }
    v14 = 1; /*0x10086f122*/
    if ( !v1 ) /*0x10086f12b*/
    {
      v15 = v12; /*0x10086f17e*/
      goto LABEL_37; /*0x10086f181*/
    }
    v15 = v12; /*0x10086f130*/
    if ( (v1 & 7) != 0 ) /*0x10086f137*/
    {
      v17 = 0; /*0x10086f139*/
      do /*0x10086f14d*/
      {
        v15 = *(_QWORD *)(v15 + 632); /*0x10086f140*/
        ++v17; /*0x10086f147*/
      }
      while ( (v1 & 7) != v17 ); /*0x10086f14d*/
      v18 = v1 - v17; /*0x10086f152*/
      if ( v1 < 8 ) /*0x10086f159*/
      {
LABEL_37:
        v1 = 0; /*0x10086f1ce*/
        v12 = 0; /*0x10086f1d0*/
        if ( *(_WORD *)(v15 + 626) ) /*0x10086f1d2*/
          goto LABEL_33; /*0x10086f1dc*/
        goto LABEL_38; /*0x10086f1dc*/
      }
    }
    else
    {
      v18 = v1; /*0x10086f183*/
      if ( v1 < 8 ) /*0x10086f18a*/
        goto LABEL_37; /*0x10086f18a*/
    }
    do /*0x10086f1cc*/
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 632) /*0x10086f1c1*/
                                                                                              + 632LL)
                                                                                  + 632LL)
                                                                      + 632LL)
                                                          + 632LL)
                                              + 632LL)
                                  + 632LL)
                      + 632LL);
      v18 -= 8LL; /*0x10086f1c8*/
    }
    while ( v18 ); /*0x10086f1cc*/
    goto LABEL_37; /*0x10086f1cc*/
  }
  return v1; /*0x10086f035*/
}