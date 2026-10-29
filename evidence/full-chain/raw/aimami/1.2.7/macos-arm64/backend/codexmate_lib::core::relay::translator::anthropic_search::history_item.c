// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_search::history_item::hc7ff5108c81bed4b; addr: 0x100ac7270; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:18Z
__int64 *__fastcall codexmate_lib::core::relay::translator::anthropic_search::history_item::hc7ff5108c81bed4b(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // r12
  _DWORD *v5; // rax
  size_t v6; // rax
  _WORD *v7; // rax
  __int64 *v8; // r12
  size_t v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm1
  _QWORD *v17; // rax
  __int64 *v18; // rbx
  __int64 v20; // rax
  size_t v21; // r14
  __int64 **v22; // rdi
  __int64 v23; // rax
  size_t v24; // rax
  _DWORD *v25; // rax
  __int64 v26; // r12
  _DWORD *v27; // rax
  void *v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-D8h] BYREF
  size_t v32; // [rsp+10h] [rbp-D0h]
  __int64 v33; // [rsp+18h] [rbp-C8h]
  __int64 v34; // [rsp+20h] [rbp-C0h]
  __int64 *v35; // [rsp+28h] [rbp-B8h]
  void *__src; // [rsp+30h] [rbp-B0h]
  __int64 v37; // [rsp+38h] [rbp-A8h]
  __int64 v38; // [rsp+40h] [rbp-A0h] BYREF
  _DWORD *v39; // [rsp+48h] [rbp-98h]
  __int64 v40; // [rsp+50h] [rbp-90h]
  __int64 *v41; // [rsp+58h] [rbp-88h] BYREF
  __int64 (__fastcall *v42)(); // [rsp+60h] [rbp-80h]
  size_t v43; // [rsp+68h] [rbp-78h]
  __int64 v44; // [rsp+70h] [rbp-70h]
  __int64 v45; // [rsp+78h] [rbp-68h] BYREF
  _DWORD *v46; // [rsp+80h] [rbp-60h]
  __int64 v47; // [rsp+88h] [rbp-58h]
  __int64 v48; // [rsp+90h] [rbp-50h]
  __int64 *v49; // [rsp+98h] [rbp-48h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-40h]
  size_t __n; // [rsp+A8h] [rbp-38h]
  __int64 v52; // [rsp+B0h] [rbp-30h]

  v37 = a3; /*0x100ac7284*/
  v34 = a2; /*0x100ac728b*/
  v35 = a1; /*0x100ac7292*/
  if ( !a4 ) /*0x100ac729b*/
  {
    if ( !v37 ) /*0x100ac744c*/
      goto LABEL_27; /*0x100ac744c*/
    v11 = 32 * v37; /*0x100ac7459*/
    v12 = v34; /*0x100ac7472*/
    while ( 1 ) /*0x100ac7499*/
    {
      v13 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7499*/
                        "typereasoningcompleted",
                        4,
                        v12);
      if ( !v13 ) /*0x100ac74a1*/
        v13 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac74a3*/
      if ( *(_BYTE *)v13 == 3 ) /*0x100ac74a9*/
      {
        v14 = v13[2]; /*0x100ac74ab*/
        v15 = v13[3]; /*0x100ac74af*/
        if ( v15 == 22 ) /*0x100ac74b7*/
        {
          v16 = _mm_or_si128( /*0x100ac7503*/
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v14 + 6)), (__m128i)xmmword_10181FD70),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v14), (__m128i)xmmword_10181FD80));
          if ( _mm_testz_si128(v16, v16) ) /*0x100ac750c*/
            break; /*0x100ac750c*/
        }
        else if ( v15 == 15 && !(*(_QWORD *)v14 ^ 0x745F726576726573LL | *(_QWORD *)(v14 + 7) ^ 0x6573755F6C6F6F74LL) ) /*0x100ac74e0*/
        {
          break; /*0x100ac74e3*/
        }
      }
      v17 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac752b*/
                        &unk_1018D64EF,
                        9,
                        v12);
      if ( !v17 ) /*0x100ac7533*/
        v17 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7535*/
      if ( *(_BYTE *)v17 == 4 && v17[3] ) /*0x100ac7541*/
        break; /*0x100ac7541*/
      v12 += 32; /*0x100ac7480*/
      v11 -= 32; /*0x100ac7484*/
      if ( !v11 ) /*0x100ac7488*/
        goto LABEL_27; /*0x100ac7488*/
    }
  }
  if ( !codexmate_lib::core::relay::translator::anthropic_search::valid_content::h9394c8404f8502a0(v34, v37) ) /*0x100ac72b6*/
  {
LABEL_27:
    v18 = v35; /*0x100ac7551*/
    *(_BYTE *)v35 = 6; /*0x100ac7558*/
    return v18; /*0x100ac7558*/
  }
  v38 = 0; /*0x100ac72bc*/
  v40 = 0; /*0x100ac72c7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34); /*0x100ac72d2*/
  v4 = 4; /*0x100ac72d7*/
  v5 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100ac72e7*/
  if ( !v5 ) /*0x100ac72ef*/
    goto LABEL_54; /*0x100ac72ef*/
  *v5 = 1701869940; /*0x100ac72f8*/
  v45 = 4; /*0x100ac72fe*/
  v46 = v5; /*0x100ac7306*/
  v47 = 4; /*0x100ac730a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x100ac7312*/
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100ac7321*/
  if ( !v6 ) /*0x100ac7329*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100ac79ce*/
  *(_QWORD *)v6 = 0x6E696E6F73616572LL; /*0x100ac7339*/
  *(_BYTE *)(v6 + 8) = 103; /*0x100ac733c*/
  LOBYTE(v49) = 3; /*0x100ac7340*/
  v50 = 9; /*0x100ac7344*/
  __n = v6; /*0x100ac734c*/
  v52 = 9; /*0x100ac7350*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v41, &v38, &v45, &v49); /*0x100ac736e*/
  if ( (_BYTE)v41 != 6 ) /*0x100ac737a*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v41); /*0x100ac7383*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v41); /*0x100ac7388*/
  v4 = 2; /*0x100ac738d*/
  v7 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100ac739d*/
  if ( !v7 ) /*0x100ac73a5*/
    goto LABEL_54; /*0x100ac73a5*/
  *v7 = 25705; /*0x100ac73ae*/
  v45 = 2; /*0x100ac73b3*/
  v46 = v7; /*0x100ac73bb*/
  v47 = 2; /*0x100ac73bf*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v49); /*0x100ac73cb*/
  v32 = v50; /*0x100ac73d8*/
  v31 = (__int64)v49; /*0x100ac73df*/
  v41 = &v31; /*0x100ac73ed*/
  v42 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x100ac73fb*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v49, &unk_101A2CBC4, &v41); /*0x100ac7411*/
  v8 = v49; /*0x100ac7416*/
  __src = (void *)v50; /*0x100ac741e*/
  v9 = __n; /*0x100ac7425*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100ac742c*/
  {
    v10 = 0; /*0x100ac7432*/
    goto LABEL_10; /*0x100ac7432*/
  }
  if ( __n ) /*0x100ac7570*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v49); /*0x100ac7572*/
    v10 = 1; /*0x100ac7577*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x100ac7584*/
    if ( !v20 ) /*0x100ac758c*/
LABEL_10:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x100ac7434*/
    v21 = v20; /*0x100ac7592*/
  }
  else
  {
    v21 = 1; /*0x100ac7597*/
  }
  memcpy((void *)v21, __src, v9); /*0x100ac75aa*/
  LOBYTE(v49) = 3; /*0x100ac75af*/
  v50 = v9; /*0x100ac75b3*/
  __n = v21; /*0x100ac75b7*/
  v52 = v9; /*0x100ac75bb*/
  v22 = &v41; /*0x100ac75bf*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v41, &v38, &v45, &v49); /*0x100ac75d5*/
  if ( (_BYTE)v41 != 6 ) /*0x100ac75e1*/
  {
    v22 = &v41; /*0x100ac75e3*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v41); /*0x100ac75ea*/
  }
  if ( v8 ) /*0x100ac75f2*/
  {
    v22 = (__int64 **)__src; /*0x100ac75f9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v8, 1); /*0x100ac7603*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22); /*0x100ac7608*/
  v4 = 6; /*0x100ac760d*/
  v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ac761d*/
  if ( !v23 ) /*0x100ac7625*/
    goto LABEL_54; /*0x100ac7625*/
  *(_WORD *)(v23 + 4) = 29557; /*0x100ac762e*/
  *(_DWORD *)v23 = 1952543859; /*0x100ac7634*/
  v45 = 6; /*0x100ac763a*/
  v46 = (_DWORD *)v23; /*0x100ac7642*/
  v47 = 6; /*0x100ac7646*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6); /*0x100ac764e*/
  v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100ac765d*/
  if ( !v24 ) /*0x100ac7665*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100ac79ee*/
  *(_QWORD *)v24 = 0x6574656C706D6F63LL; /*0x100ac7675*/
  *(_BYTE *)(v24 + 8) = 100; /*0x100ac7678*/
  LOBYTE(v49) = 3; /*0x100ac767c*/
  v50 = 9; /*0x100ac7680*/
  __n = v24; /*0x100ac7688*/
  v52 = 9; /*0x100ac768c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v41, &v38, &v45, &v49); /*0x100ac76aa*/
  if ( (_BYTE)v41 != 6 ) /*0x100ac76b6*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v41); /*0x100ac76bf*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v41); /*0x100ac76c4*/
  v4 = 7; /*0x100ac76c9*/
  v25 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100ac76d9*/
  if ( !v25 ) /*0x100ac76e1*/
LABEL_54:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x100ac79bd*/
  *(_DWORD *)((char *)v25 + 3) = 2037539181; /*0x100ac76e7*/
  *v25 = 1835890035; /*0x100ac76ee*/
  v45 = 7; /*0x100ac76f4*/
  v46 = v25; /*0x100ac76fc*/
  v47 = 7; /*0x100ac7700*/
  v50 = 0; /*0x100ac7708*/
  __n = 8; /*0x100ac7710*/
  v52 = 0; /*0x100ac7718*/
  LOBYTE(v49) = 4; /*0x100ac7720*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v41, &v38, &v45, &v49); /*0x100ac773a*/
  if ( (_BYTE)v41 != 6 ) /*0x100ac7746*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v41); /*0x100ac774f*/
  v46 = (_DWORD *)v38; /*0x100ac7762*/
  v47 = (__int64)v39; /*0x100ac7766*/
  v48 = v40; /*0x100ac7771*/
  LOBYTE(v45) = 5; /*0x100ac7775*/
  v31 = 0; /*0x100ac7779*/
  v33 = 0; /*0x100ac7784*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v41); /*0x100ac778f*/
  v26 = 4; /*0x100ac7794*/
  v27 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100ac77a4*/
  if ( !v27 ) /*0x100ac77ac*/
    goto LABEL_56; /*0x100ac77ac*/
  *v27 = 1701869940; /*0x100ac77b5*/
  v38 = 4; /*0x100ac77bb*/
  v39 = v27; /*0x100ac77c6*/
  v40 = 4; /*0x100ac77cd*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x100ac77d8*/
  v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x100ac77e7*/
  if ( !v28 ) /*0x100ac77ef*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x100ac79ff*/
  qmemcpy(v28, "server_message", 14); /*0x100ac780d*/
  LOBYTE(v49) = 3; /*0x100ac7810*/
  v50 = 14; /*0x100ac7814*/
  __n = (size_t)v28; /*0x100ac781c*/
  v52 = 14; /*0x100ac7820*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v41, &v31, &v38, &v49); /*0x100ac7841*/
  if ( (_BYTE)v41 != 6 ) /*0x100ac784d*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v41); /*0x100ac7856*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v41); /*0x100ac785b*/
  v26 = 7; /*0x100ac7860*/
  v29 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100ac7870*/
  if ( !v29 ) /*0x100ac7878*/
LABEL_56:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v26); /*0x100ac79dd*/
  *(_DWORD *)((char *)v29 + 3) = 1953391988; /*0x100ac7881*/
  *v29 = 1953394531; /*0x100ac7888*/
  v38 = 7; /*0x100ac788e*/
  v39 = v29; /*0x100ac7899*/
  v40 = 7; /*0x100ac78a0*/
  serde_core::ser::Serializer::collect_seq::h951360482a62495e(&v49, v34, v37); /*0x100ac78bd*/
  if ( (_BYTE)v49 == 6 )
  {
    v41 = (__int64 *)v50; /*0x100ac7986*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueNot a MenuNot a SubmenuErrorByteCountNotDivisibleBy4byte_countDimension"
      "sVsPixelCountwidth_x_heightpixel_countOsErrorIoInvalidArchiveUnsupportedArchiveFileNotFoundInvalidPasswordassertio"
      "n failed: self.is_char_boundary(new_len)EventTargetinternally tagged enum EventTarget***",
      43,
      &v41,
      &off_101C0A248,
      &off_101C08AF0);
  }
  v44 = v52; /*0x100ac78d0*/
  v43 = __n; /*0x100ac78d8*/
  v42 = (__int64 (__fastcall *)())v50; /*0x100ac78e4*/
  v41 = v49; /*0x100ac78e8*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v49, &v31, &v38, &v41); /*0x100ac7908*/
  if ( (_BYTE)v49 != 6 ) /*0x100ac7911*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v49); /*0x100ac7917*/
  v50 = v31; /*0x100ac792a*/
  __n = v32; /*0x100ac792e*/
  v52 = v33; /*0x100ac7939*/
  LOBYTE(v49) = 5; /*0x100ac793d*/
  codexmate_lib::core::relay::translator::set_anthropic_thinking_carrier::hc88e604b2a3caac1(&v45, &v49); /*0x100ac7949*/
  v18 = v35; /*0x100ac794e*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v49); /*0x100ac7959*/
  v18[3] = v48; /*0x100ac7962*/
  v18[2] = v47; /*0x100ac796a*/
  v30 = v45; /*0x100ac796e*/
  v18[1] = (__int64)v46; /*0x100ac7976*/
  *v18 = v30; /*0x100ac797a*/
  return v18; /*0x100ac755e*/
}