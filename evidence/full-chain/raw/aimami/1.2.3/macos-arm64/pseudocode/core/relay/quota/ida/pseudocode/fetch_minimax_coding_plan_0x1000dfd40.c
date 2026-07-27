// __ZN13codexmate_lib4core5relay5quota25fetch_minimax_coding_plan28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000dfd40 | 基线 same-set
char __fastcall codexmate_lib::core::relay::quota::fetch_minimax_coding_plan::_$u7b$$u7b$closure$u7d$$u7d$::h8cd829bdc77b0743(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 (__fastcall *_RDX)(),
        double a4)
{
  __int64 (__fastcall *v4)(); // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int128 *v10; // rdx
  __int64 v11; // r14
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 *v15; // r14
  char v16; // r13
  char result; // al
  char v18; // r14
  __int64 (__fastcall *v19)(); // r12
  __int64 (__fastcall *v20)(); // r15
  int v21; // eax
  __int64 *v22; // rdi
  __int64 v23; // rsi
  char v24; // al
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  const char *v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // r14
  __int64 v38; // rax
  unsigned __int8 *v39; // rax
  __int64 *v40; // r12
  __int64 (__fastcall *v41)(); // r13
  __int64 (__fastcall *v42)(); // r14
  _QWORD *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int8 *v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 (__fastcall *v52)(); // rax
  __int64 v53; // rsi
  unsigned __int64 v54; // r14
  unsigned __int64 *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rcx
  bool v59; // zf
  _QWORD *v60; // rdx
  __int64 v61; // rcx
  __int64 (__fastcall *v62)(); // rax
  double v64; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v65; // [rsp+8h] [rbp-D8h] BYREF
  unsigned __int64 *v66; // [rsp+10h] [rbp-D0h]
  __int64 *v67; // [rsp+18h] [rbp-C8h]
  __int64 v68; // [rsp+20h] [rbp-C0h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+28h] [rbp-B8h]
  __int64 (__fastcall *v70)(); // [rsp+30h] [rbp-B0h]
  __int64 (__fastcall *v71)(); // [rsp+38h] [rbp-A8h]
  _QWORD v72[2]; // [rsp+40h] [rbp-A0h] BYREF
  _DWORD v73[2]; // [rsp+50h] [rbp-90h]
  __int64 *v74; // [rsp+58h] [rbp-88h] BYREF
  __int64 v75; // [rsp+60h] [rbp-80h]
  __int64 (__fastcall *v76)(); // [rsp+68h] [rbp-78h]
  __int64 *v77; // [rsp+70h] [rbp-70h] BYREF
  __int64 (__fastcall *v78)(); // [rsp+78h] [rbp-68h] BYREF
  __int64 (__fastcall *v79)(); // [rsp+80h] [rbp-60h]
  __int64 (__fastcall *v80)(); // [rsp+88h] [rbp-58h]
  __int64 (__fastcall *v81)(); // [rsp+90h] [rbp-50h]
  _QWORD *v82; // [rsp+98h] [rbp-48h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-40h]
  _QWORD *v84; // [rsp+A8h] [rbp-38h]
  __int64 (__fastcall *v85)(); // [rsp+B0h] [rbp-30h]

  v4 = (__int64 (__fastcall *)())a2; /*0x1000dfd54*/
  v5 = *(unsigned __int8 *)(a2 + 840); /*0x1000dfd57*/
  v66 = a1; /*0x1000dfd6c*/
  switch ( v5 ) /*0x1000dfd73*/
  {
    case 0LL: /*0x1000dfd73*/
      v85 = _RDX; /*0x1000dfd75*/
      v6 = *(_QWORD *)(a2 + 824); /*0x1000dfd79*/
      v7 = *(_QWORD *)(a2 + 784); /*0x1000dfd80*/
      v8 = *(_QWORD *)(a2 + 792); /*0x1000dfd87*/
      v9 = *(unsigned __int8 *)(a2 + 841); /*0x1000dfd8e*/
      v10 = (__int128 *)&unk_1015DAD76; /*0x1000dfd9c*/
      if ( *(_BYTE *)(a2 + 841) ) /*0x1000dfd8e*/
        v10 = &xmmword_1015DA170; /*0x1000dfda5*/
      v11 = *(_QWORD *)(a2 + 832); /*0x1000dfda9*/
      *(_QWORD *)(a2 + 768) = v10; /*0x1000dfdbc*/
      *(_QWORD *)(a2 + 776) = 2 * v9 + 14; /*0x1000dfdc3*/
      v68 = a2 + 768; /*0x1000dfdca*/
      v69 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1000dfdd8*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1000dfdf1*/
        &v77,
        "\bhttps://\xC0\x28/v1/api/openplatform/coding_plan/remains",
        &v68);
      *(_QWORD *)(a2 + 816) = v79; /*0x1000dfdfa*/
      v12 = v77; /*0x1000dfe01*/
      *(_QWORD *)(a2 + 808) = v78; /*0x1000dfe09*/
      *(_QWORD *)(a2 + 800) = v12; /*0x1000dfe10*/
      v13 = *(_QWORD *)(a2 + 808); /*0x1000dfe17*/
      v14 = *(_QWORD *)(a2 + 816); /*0x1000dfe1e*/
      *(_QWORD *)a2 = v6; /*0x1000dfe25*/
      *(_QWORD *)(a2 + 8) = v13; /*0x1000dfe28*/
      *(_QWORD *)(a2 + 16) = v14; /*0x1000dfe2c*/
      *(_QWORD *)(a2 + 24) = v7; /*0x1000dfe30*/
      *(_QWORD *)(a2 + 32) = v8; /*0x1000dfe34*/
      *(_QWORD *)(a2 + 40) = v11; /*0x1000dfe38*/
      *(_BYTE *)(a2 + 48) = 0; /*0x1000dfe3c*/
      v15 = v66; /*0x1000dfe44*/
      break; /*0x1000dfe4b*/
    case 1LL: /*0x1000dfd73*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019525B8); /*0x1000e06ac*/
    case 2LL: /*0x1000dfd73*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019525B8); /*0x1000e06a0*/
    case 3LL: /*0x1000dfd73*/
      v15 = a1; /*0x1000dfe4d*/
      break; /*0x1000dfe4d*/
    case 4LL: /*0x1000dfd73*/
      __indword(0xF0u); /*0x100922717*/
      __asm { insd } /*0x100922719*/
      JUMPOUT(0x10092271ALL); /*0x10092271a*/
    case 5LL: /*0x1000dfd73*/
      JUMPOUT(0x1000E0808LL); /*0x1000e0808*/
  }
  codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(&v77, a2); /*0x1000dfe57*/
  v16 = (char)v77; /*0x1000dfe5c*/
  if ( v77 != (__int64 *)2 )
  {
    v18 = (char)v78; /*0x1000dfe7d*/
    v73[0] = *(_DWORD *)((char *)&v78 + 1); /*0x1000dfe85*/
    *(_DWORD *)((char *)v73 + 3) = HIDWORD(v78); /*0x1000dfe8e*/
    v19 = v79; /*0x1000dfe94*/
    v20 = v80; /*0x1000dfe98*/
    v85 = v81; /*0x1000dfea0*/
    v21 = *(unsigned __int8 *)(a2 + 48); /*0x1000dfea4*/
    if ( v21 == 4 ) /*0x1000dfeab*/
    {
      if ( *(_BYTE *)(a2 + 760) == 3 ) /*0x1000dfecb*/
      {
        core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a2 + 336); /*0x1000dff27*/
      }
      else if ( !*(_BYTE *)(a2 + 760) ) /*0x1000dfec1*/
      {
        core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(a2 + 200); /*0x1000dfed8*/
        v22 = *(__int64 **)(a2 + 328); /*0x1000dfedd*/
        if ( *v22 ) /*0x1000dfee4*/
        {
          v23 = *v22; /*0x1000dfee4*/
          v67 = *((__int64 **)v4 + 41); /*0x1000dfeec*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[1], v23, 1); /*0x1000dff03*/
          v22 = v67; /*0x1000dff08*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 88, 8); /*0x1000dff19*/
      }
    }
    else if ( v21 == 3 ) /*0x1000dfeb0*/
    {
      core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2( /*0x1000dfeba*/
        *(_QWORD *)(a2 + 56),
        *(_QWORD *)(a2 + 64));
    }
    if ( (v16 & 1) != 0 ) /*0x1000dff30*/
    {
      LOBYTE(v77) = v18; /*0x1000dff36*/
      *(_DWORD *)((char *)&v77 + 1) = v73[0]; /*0x1000dff46*/
      HIDWORD(v77) = *(_DWORD *)((char *)v73 + 3); /*0x1000dff49*/
      v78 = v19; /*0x1000dff50*/
      v79 = v20; /*0x1000dff54*/
      v80 = v85; /*0x1000dff5c*/
      v74 = nullptr; /*0x1000dff60*/
      v75 = 1; /*0x1000dff6b*/
      v76 = nullptr; /*0x1000dff73*/
      if ( (unsigned __int16)v77 == 2 ) /*0x1000dff82*/
      {
        v72[0] = &v78; /*0x1000e0085*/
        v82 = v72; /*0x1000e0093*/
        v83 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1000e009e*/
        v24 = core::fmt::write::h2e5a8157a38fb62d( /*0x1000e00bb*/
                &v74,
                &off_101952F18,
                &anon_10420c9971c21f44d230d15b39fb3fec_1036,
                &v82);
      }
      else if ( (unsigned __int16)v77 == 1 ) /*0x1000dff8b*/
      {
        v72[0] = &v78; /*0x1000dff91*/
        v82 = v72; /*0x1000dff9f*/
        v83 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1000dffaa*/
        v24 = core::fmt::write::h2e5a8157a38fb62d( /*0x1000dffc7*/
                &v74,
                &off_101952F18,
                &anon_10420c9971c21f44d230d15b39fb3fec_1035,
                &v82);
      }
      else
      {
        v72[0] = (char *)&v77 + 2; /*0x1000e00c6*/
        v82 = v72; /*0x1000e00d4*/
        v83 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd492899dc40ca8b8; /*0x1000e00df*/
        v24 = core::fmt::write::h2e5a8157a38fb62d( /*0x1000e00fc*/
                &v74,
                &off_101952F18,
                &anon_10420c9971c21f44d230d15b39fb3fec_652,
                &v82);
      }
      if ( v24 ) /*0x1000e0103*/
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v82, &unk_101952FE0, &off_101952F48); /*0x1000e0692*/
      v25 = (__int64)v74; /*0x1000e0109*/
      v20 = (__int64 (__fastcall *)())v75; /*0x1000e0110*/
      v26 = (__int64)v76; /*0x1000e0114*/
      if ( (_WORD)v77 && v78 ) /*0x1000e012a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v78, 1); /*0x1000e0139*/
LABEL_57:
      v53 = *((_QWORD *)v4 + 100); /*0x1000e0374*/
      v54 = 0x8000000000000000LL; /*0x1000e037b*/
      if ( !v53 ) /*0x1000e0388*/
      {
LABEL_59:
        v55 = v66; /*0x1000e039b*/
        *v66 = v54; /*0x1000e03a2*/
        v55[1] = v25; /*0x1000e03a5*/
        v55[2] = (unsigned __int64)v20; /*0x1000e03a9*/
        v55[3] = v26; /*0x1000e03ad*/
        v55[4] = 19; /*0x1000e03b1*/
        v55[5] = (unsigned __int64)&unk_1015DAE3F; /*0x1000e03c0*/
        v55[6] = 25; /*0x1000e03c4*/
        result = 1; /*0x1000e03cc*/
        goto LABEL_60; /*0x1000e03cc*/
      }
LABEL_58:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v4 + 101), v53, 1); /*0x1000e038a*/
      goto LABEL_59; /*0x1000e0396*/
    }
    v25 = (__int64)v19; /*0x1000dffd5*/
    if ( v18 == 6 ) /*0x1000dffd8*/
    {
      v26 = (__int64)v85; /*0x1000dffda*/
      goto LABEL_57; /*0x1000dffde*/
    }
    HIDWORD(v68) = *(_DWORD *)((char *)v73 + 3); /*0x1000dffef*/
    *(_DWORD *)((char *)&v68 + 1) = v73[0]; /*0x1000dfff5*/
    LOBYTE(v68) = v18; /*0x1000dfffb*/
    v69 = v19; /*0x1000e0002*/
    v70 = v20; /*0x1000e0009*/
    v71 = v85; /*0x1000e0014*/
    v27 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000e002e*/
            &unk_1015DAD84,
            9,
            &v68);
    v28 = v27; /*0x1000e0033*/
    if ( v27 )
    {
      v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000e004e*/
              &unk_1015DAD8D,
              11,
              v27);
      if ( v29 && *(_BYTE *)v29 == 2 && (v30 = *(_QWORD *)(v29 + 8), v30 != 2) )
      {
        if ( (_DWORD)v30 == 1 ) /*0x1000e0076*/
        {
          v31 = *(_QWORD *)(v29 + 16); /*0x1000e007c*/
        }
        else
        {
          v56 = *(_QWORD *)(v29 + 16); /*0x1000e03e6*/
          v31 = 0; /*0x1000e03ea*/
          if ( v56 > 0 ) /*0x1000e03ef*/
            v31 = v56; /*0x1000e03ef*/
        }
        v65 = v31; /*0x1000e03f3*/
        if ( v31 )
        {
          v57 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000e0412*/
                  &unk_1015DAD98,
                  10,
                  v28);
          if ( v57 ) /*0x1000e041a*/
          {
            if ( *(_BYTE *)v57 == 3 ) /*0x1000e041f*/
              v58 = *(_QWORD **)(v57 + 16); /*0x1000e0421*/
            else
              v58 = nullptr; /*0x1000e042b*/
            v57 = *(_QWORD *)(v57 + 24); /*0x1000e042d*/
          }
          else
          {
            v58 = nullptr; /*0x1000e0427*/
          }
          v59 = v58 == nullptr; /*0x1000e0431*/
          v60 = &unk_1015DADA2; /*0x1000e0434*/
          if ( v58 ) /*0x1000e043b*/
            v60 = v58; /*0x1000e043b*/
          v61 = 13; /*0x1000e043f*/
          if ( !v59 ) /*0x1000e0444*/
            v61 = v57; /*0x1000e0444*/
          v82 = v60; /*0x1000e0448*/
          v83 = v61; /*0x1000e044c*/
          v77 = &v65; /*0x1000e0457*/
          v78 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x1000e0462*/
          v79 = (__int64 (__fastcall *)())&v82; /*0x1000e046a*/
          v80 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1000e0475*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(
            &v74,
            "\x1AMiniMax coding plan error \xC0\x02: \xC0src/core/relay/manager.rs",
            &v77);
          v25 = (__int64)v74; /*0x1000e0490*/
          v20 = (__int64 (__fastcall *)())v75; /*0x1000e0497*/
          v26 = (__int64)v76; /*0x1000e049b*/
LABEL_56:
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v68); /*0x1000e0368*/
          goto LABEL_57; /*0x1000e036f*/
        }
      }
      else
      {
        v65 = 0; /*0x1000e0143*/
      }
    }
    v32 = (const char *)&unk_1015DADAF; /*0x1000e014e*/
    v33 = 13; /*0x1000e015c*/
    v34 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000e0161*/
            &unk_1015DADAF,
            13,
            &v68);
    if ( v34 && *(_BYTE *)v34 == 4 && (v35 = *(_QWORD *)(v34 + 24)) != 0 ) /*0x1000e017f*/
    {
      v36 = *(_QWORD *)(v34 + 16); /*0x1000e0185*/
      v37 = 32 * v35; /*0x1000e0189*/
      while ( 1 ) /*0x1000e01ae*/
      {
        v33 = 10; /*0x1000e01ae*/
        v32 = "model_name"; /*0x1000e01b3*/
        v38 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000e01b9*/
                "model_name",
                10,
                v36);
        if ( v38 ) /*0x1000e01c1*/
        {
          if ( *(_BYTE *)v38 == 3 /*0x1000e01e2*/
            && *(_QWORD *)(v38 + 24) == 7
            && !(**(_DWORD **)(v38 + 16) ^ 0x656E6567 | *(_DWORD *)(*(_QWORD *)(v38 + 16) + 3LL) ^ 0x6C617265) )
          {
            break; /*0x1000e01e2*/
          }
        }
        v36 += 32; /*0x1000e01a0*/
        v37 -= 32; /*0x1000e01a4*/
        if ( !v37 ) /*0x1000e01a8*/
          goto LABEL_54; /*0x1000e01a8*/
      }
      v82 = nullptr; /*0x1000e01e6*/
      v83 = 8; /*0x1000e01ee*/
      v84 = nullptr; /*0x1000e01f6*/
      v39 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000e020d*/
                                 &unk_1015DADBC,
                                 34,
                                 v36);
      if ( (codexmate_lib::core::relay::quota::value_to_f64::hc5078ac8837d6d68(v39) & 1) != 0 ) /*0x1000e021c*/
      {
        v85 = v4; /*0x1000e021e*/
        *(double *)v72 = a4; /*0x1000e0222*/
        v74 = v72; /*0x1000e0231*/
        v75 = (__int64)core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h1254124821271e23; /*0x1000e023f*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v77, &unk_1015DADDE, &v74); /*0x1000e0255*/
        v40 = v77; /*0x1000e025a*/
        v41 = v78; /*0x1000e025e*/
        v42 = v79; /*0x1000e0262*/
        v43 = v84; /*0x1000e0266*/
        if ( v84 == v82 ) /*0x1000e026e*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v82); /*0x1000e0274*/
        v44 = v83; /*0x1000e0279*/
        v45 = 3LL * (_QWORD)v43; /*0x1000e027d*/
        *(_QWORD *)(v83 + 8 * v45) = v40; /*0x1000e0281*/
        *(_QWORD *)(v44 + 8 * v45 + 8) = v41; /*0x1000e0285*/
        *(_QWORD *)(v44 + 8 * v45 + 16) = v42; /*0x1000e028a*/
        v84 = (_QWORD *)((char *)v43 + 1); /*0x1000e0292*/
        v4 = v85; /*0x1000e0296*/
      }
      v46 = (unsigned __int8 *)&unk_1015DADEA; /*0x1000e029a*/
      v47 = 21; /*0x1000e02a1*/
      v48 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000e02a9*/
              &unk_1015DADEA,
              21,
              v36);
      if ( v48 ) /*0x1000e02b1*/
      {
        if ( *(_BYTE *)v48 == 2 ) /*0x1000e02ba*/
        {
          v49 = *(_QWORD *)(v48 + 8); /*0x1000e02c0*/
          if ( v49 != 2 ) /*0x1000e02c8*/
          {
            v50 = *(_QWORD *)(v48 + 16); /*0x1000e02d7*/
            if ( ((_DWORD)v49 == 1 || v50 >= 0) && v50 == 1 ) /*0x1000e04ba*/
            {
              v47 = 32; /*0x1000e04c3*/
              v46 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000e04d0*/
                                         &unk_1015DADFF,
                                         32,
                                         v36);
              if ( (codexmate_lib::core::relay::quota::value_to_f64::hc5078ac8837d6d68(v46) & 1) != 0 ) /*0x1000e04da*/
              {
                v64 = a4; /*0x1000e04dc*/
                v72[0] = &v64; /*0x1000e04eb*/
                v72[1] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h1254124821271e23; /*0x1000e04f9*/
                alloc::fmt::format::h69ce1ddff65303f5(&v77, v72); /*0x1000e050b*/
                v74 = v77; /*0x1000e0518*/
                v75 = (__int64)v78; /*0x1000e051f*/
                v76 = v79; /*0x1000e0527*/
                v46 = (unsigned __int8 *)&v82; /*0x1000e052b*/
                v47 = (__int64)&v74; /*0x1000e052f*/
                alloc::vec::Vec$LT$T$C$A$GT$::push::h2f0df24c4c3c22eb(&v82, &v74); /*0x1000e0536*/
              }
            }
          }
        }
      }
      if ( v84 ) /*0x1000e0542*/
      {
        alloc::str::join_generic_copy::heca7a5e86402c6b6(&v77, v83, v84, &unk_1015DAD56, 3); /*0x1000e0559*/
        v54 = (unsigned __int64)v77; /*0x1000e055e*/
        v25 = (__int64)v78; /*0x1000e0562*/
        v20 = v79; /*0x1000e0566*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v82); /*0x1000e056e*/
        if ( v82 ) /*0x1000e057a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, 24LL * (_QWORD)v82, 8); /*0x1000e058d*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v68); /*0x1000e0599*/
        v53 = *((_QWORD *)v4 + 100); /*0x1000e059e*/
        v26 = (__int64)&unk_1015DAE2C; /*0x1000e05a5*/
        if ( !v53 ) /*0x1000e05af*/
          goto LABEL_59; /*0x1000e05af*/
        goto LABEL_58; /*0x1000e05af*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v46, v47); /*0x1000e05ba*/
      v62 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x1000e05c9*/
      if ( !v62 ) /*0x1000e05d1*/
      {
        v85 = v4; /*0x1000e06c6*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 54); /*0x1000e06d4*/
      }
      v20 = v62; /*0x1000e05d7*/
      qmemcpy(v62, "MiniMax coding plan response missing remaining percent", 54); /*0x1000e0638*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v82); /*0x1000e063f*/
      if ( v82 ) /*0x1000e064b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, 24LL * (_QWORD)v82, 8); /*0x1000e065e*/
      v25 = 54; /*0x1000e0663*/
      v26 = 54; /*0x1000e0669*/
    }
    else
    {
LABEL_54:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v33); /*0x1000e02e2*/
      v25 = 50; /*0x1000e02e7*/
      v52 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(50, 1); /*0x1000e02f7*/
      if ( !v52 ) /*0x1000e02ff*/
      {
        v85 = v4; /*0x1000e06b1*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 50); /*0x1000e06bf*/
      }
      v20 = v52; /*0x1000e0305*/
      qmemcpy(v52, "MiniMax coding plan response missing general quota", 50); /*0x1000e0358*/
      v26 = 50; /*0x1000e0362*/
    }
    goto LABEL_56; /*0x1000e066f*/
  }
  result = 3; /*0x1000dfe70*/
  *v15 = 0x8000000000000001LL; /*0x1000dfe73*/
LABEL_60:
  *((_BYTE *)v4 + 840) = result; /*0x1000e03ce*/
  return result; /*0x1000e03d4*/
}