// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_rollout::_$u7b$$u7b$closure$u7d$$u7d$::h0725d64867bc32db; addr: 0x1004b2090; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_rollout::_$u7b$$u7b$closure$u7d$$u7d$::h0725d64867bc32db(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64, __int64 *),
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  char v11; // r12
  __int64 v12; // rax
  char *v13; // rdi
  __int64 v14; // rdx
  const char *v15; // rsi
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 **v19; // rdi
  __int64 v20; // rdx
  __int64 *v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  __int64 v25; // rax
  _BYTE *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // rax
  double result; // xmm0_8
  _QWORD *v35; // rax
  __int64 *v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rbx
  __int64 v41; // r15
  int v42; // ecx
  __int64 *v43; // r14
  _QWORD *v44; // rcx
  _QWORD *v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // r8
  __int64 *v50; // rdi
  __int64 v51; // rcx
  _QWORD *v52; // rax
  void *v53; // rax
  _QWORD *v54; // rcx
  _QWORD v55[3]; // [rsp+0h] [rbp-190h] BYREF
  _QWORD v56[3]; // [rsp+18h] [rbp-178h] BYREF
  _BYTE *v57; // [rsp+30h] [rbp-160h]
  __int64 *v58; // [rsp+38h] [rbp-158h]
  __int64 v59; // [rsp+40h] [rbp-150h]
  _QWORD v60[2]; // [rsp+48h] [rbp-148h] BYREF
  __int64 *v61; // [rsp+58h] [rbp-138h]
  _QWORD v62[4]; // [rsp+60h] [rbp-130h] BYREF
  __int64 v63; // [rsp+80h] [rbp-110h]
  __int64 v64; // [rsp+88h] [rbp-108h]
  __int64 *v65; // [rsp+90h] [rbp-100h] BYREF
  __int64 *v66; // [rsp+98h] [rbp-F8h]
  __int64 *v67; // [rsp+A0h] [rbp-F0h]
  __int64 *v68; // [rsp+A8h] [rbp-E8h]
  __int64 v69; // [rsp+B0h] [rbp-E0h] BYREF
  _BYTE __src[88]; // [rsp+B8h] [rbp-D8h] BYREF
  __int64 (__fastcall *v71)(__int64, __int64, __int64); // [rsp+110h] [rbp-80h]
  __int64 v72; // [rsp+118h] [rbp-78h]
  __int64 v73; // [rsp+120h] [rbp-70h] BYREF
  __int64 v74; // [rsp+128h] [rbp-68h]
  __int64 v75; // [rsp+130h] [rbp-60h]
  const char *v76; // [rsp+138h] [rbp-58h]
  __int64 v77; // [rsp+140h] [rbp-50h] BYREF
  __int64 v78; // [rsp+148h] [rbp-48h]
  unsigned __int64 v79; // [rsp+150h] [rbp-40h]
  __int64 v80; // [rsp+158h] [rbp-38h]
  _QWORD *v81; // [rsp+160h] [rbp-30h]

  v71 = a6; /*0x1004b20a4*/
  v72 = a5; /*0x1004b20a8*/
  v81 = a1; /*0x1004b20b2*/
  v77 = 0; /*0x1004b20b6*/
  v78 = 1; /*0x1004b20be*/
  v63 = *a2; /*0x1004b20c9*/
  v8 = a2[1]; /*0x1004b20d0*/
  v58 = a2; /*0x1004b20d4*/
  v57 = (_BYTE *)a2[2]; /*0x1004b20df*/
  v64 = 0; /*0x1004b20e6*/
  while ( 1 ) /*0x1004b2100*/
  {
    v79 = 0; /*0x1004b2100*/
    if ( (a4(a3, 10, &v77) & 1) != 0 ) /*0x1004b2119*/
    {
      v35 = v81; /*0x1004b25a0*/
      *v81 = 2; /*0x1004b25a4*/
      v35[1] = v9; /*0x1004b25ab*/
      goto LABEL_72; /*0x1004b25af*/
    }
    if ( !v9 ) /*0x1004b2122*/
      break; /*0x1004b2122*/
    codexmate_lib::core::relay::codex_thread_visibility::line_is_unusable_reasoning_response_item::h37eacd04c43f9926( /*0x1004b2141*/
      &v69,
      (unsigned __int8 *)v78,
      v79,
      v63,
      v8);
    v10 = v69; /*0x1004b2146*/
    v11 = __src[0]; /*0x1004b214d*/
    if ( v69 != 11 ) /*0x1004b2159*/
    {
      v43 = v81; /*0x1004b266b*/
      memcpy((char *)v81 + 9, &__src[1], 0x57u); /*0x1004b2678*/
      *v43 = v10; /*0x1004b267d*/
      *((_BYTE *)v43 + 8) = v11; /*0x1004b2680*/
      goto LABEL_72; /*0x1004b2684*/
    }
    if ( (__src[0] & 1) != 0 ) /*0x1004b2163*/
    {
      v69 = v78; /*0x1004b2186*/
      *(_QWORD *)__src = v79; /*0x1004b218d*/
      *(_QWORD *)&__src[16] = 0; /*0x1004b219b*/
      *(_QWORD *)&__src[8] = 0; /*0x1004b21a3*/
      serde_json::de::from_trait::h89c510e88e63bfb2(&v73, &v69); /*0x1004b21b5*/
      if ( (_BYTE)v73 == 6 ) /*0x1004b21c0*/
      {
        v46 = v74; /*0x1004b26ca*/
        v47 = v81; /*0x1004b26ce*/
        *v81 = 3; /*0x1004b26d2*/
        v47[1] = v46; /*0x1004b26d9*/
        goto LABEL_72; /*0x1004b26dd*/
      }
      v13 = (char *)v62 + 1; /*0x1004b21cf*/
      v62[0] = v73; /*0x1004b21d6*/
      v14 = v75; /*0x1004b21df*/
      v15 = v76; /*0x1004b21e3*/
      v62[3] = v76; /*0x1004b21e7*/
      v62[2] = v75; /*0x1004b21eb*/
      v62[1] = v74; /*0x1004b21f5*/
      if ( !*v57 ) /*0x1004b2203*/
      {
        v15 = (const char *)7; /*0x1004b2208*/
        v13 = (char *)&anon_19faa30eef2c8845dad92cc05fa4a600_842; /*0x1004b220d*/
        if ( !_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004b221b*/
                &anon_19faa30eef2c8845dad92cc05fa4a600_842,
                7,
                v62) )
        {
          v13 = (char *)v62; /*0x1004b23ee*/
          v15 = "/payload/history_mode"; /*0x1004b23f5*/
          v25 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v62, "/payload/history_mode", 21); /*0x1004b23fc*/
          if ( !v25 /*0x1004b242e*/
            || *(_BYTE *)v25 != 3
            || *(_QWORD *)(v25 + 24) != 9
            || (v14 = 0x6574616E69676170LL,
                **(_QWORD **)(v25 + 16) ^ 0x6574616E69676170LL
              | *(unsigned __int8 *)(*(_QWORD *)(v25 + 16) + 8LL) ^ 0x64LL) )
          {
            v13 = (char *)v62; /*0x1004b243c*/
            v15 = "/payload/history_baserollout is missing"; /*0x1004b2443*/
            v26 = (_BYTE *)serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1004b244a*/
                             v62,
                             "/payload/history_baserollout is missing",
                             21);
            if ( !v26 || !*v26 ) /*0x1004b2458*/
              goto LABEL_39; /*0x1004b245b*/
          }
        }
      }
      v60[0] = 0; /*0x1004b2229*/
      v61 = nullptr; /*0x1004b2234*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v15, v14); /*0x1004b223f*/
      v16 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1004b224e*/
      if ( !v16 ) /*0x1004b2256*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1004b2930*/
      *v16 = 1701869940; /*0x1004b225f*/
      v56[0] = 4; /*0x1004b2265*/
      v56[1] = v16; /*0x1004b2270*/
      v56[2] = 4; /*0x1004b2277*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v17); /*0x1004b2282*/
      v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004b2291*/
      if ( !v18 ) /*0x1004b2299*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004b291f*/
      *(_BYTE *)(v18 + 4) = 114; /*0x1004b229f*/
      *(_DWORD *)v18 = 1701344367; /*0x1004b22a3*/
      LOBYTE(v69) = 3; /*0x1004b22a9*/
      *(_QWORD *)__src = 5; /*0x1004b22b0*/
      *(_QWORD *)&__src[8] = v18; /*0x1004b22bb*/
      *(_QWORD *)&__src[16] = 5; /*0x1004b22c2*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v73, v60, v56, &v69); /*0x1004b22e6*/
      if ( (_BYTE)v73 != 6 ) /*0x1004b22ef*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v73); /*0x1004b22f5*/
      v68 = v61; /*0x1004b2308*/
      v67 = (__int64 *)v60[1]; /*0x1004b231a*/
      v66 = (__int64 *)v60[0]; /*0x1004b231e*/
      LOBYTE(v65) = 5; /*0x1004b2321*/
      v19 = (__int64 **)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1004b2343*/
                          &unk_1016F35FF,
                          7u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v19); /*0x1004b2346*/
      v19[3] = v68; /*0x1004b2352*/
      v19[2] = v67; /*0x1004b235e*/
      v21 = v65; /*0x1004b2363*/
      v19[1] = v66; /*0x1004b2371*/
      *v19 = v21; /*0x1004b2376*/
      v22 = v79; /*0x1004b237e*/
      if ( v79 >= 2 ) /*0x1004b2386*/
      {
        if ( *(_WORD *)(v78 + v79 - 2) != 2573 ) /*0x1004b23a6*/
        {
LABEL_19:
          v24 = *(_BYTE *)(v78 + v79 - 1); /*0x1004b23ac*/
          v80 = 1; /*0x1004b23b6*/
          v23 = (__int64)"\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for key"; /*0x1004b23ba*/
          if ( v24 != 10 ) /*0x1004b23c3*/
          {
            v80 = v24 == 13; /*0x1004b23d0*/
            v23 = 1; /*0x1004b23d4*/
            if ( v24 == 13 ) /*0x1004b23e0*/
              v23 = (__int64)"\r\"reasoning\"state.sqlite"; /*0x1004b23e0*/
          }
          goto LABEL_31; /*0x1004b23e0*/
        }
        v80 = 2; /*0x1004b246b*/
        v23 = (__int64)"\r\n\r\"reasoning\"state.sqlite"; /*0x1004b246f*/
      }
      else
      {
        if ( v79 ) /*0x1004b238b*/
          goto LABEL_19; /*0x1004b238b*/
        v23 = 1; /*0x1004b238d*/
        v80 = 0; /*0x1004b2392*/
      }
LABEL_31:
      v59 = v23; /*0x1004b2476*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, 7, v20); /*0x1004b247d*/
      v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1004b248c*/
      if ( !v27 ) /*0x1004b2494*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1004b290e*/
      v73 = 128; /*0x1004b249a*/
      v74 = v27; /*0x1004b24a2*/
      v75 = 0; /*0x1004b24a6*/
      v65 = &v73; /*0x1004b24b2*/
      v28 = serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::h962bd8f95bd57a14( /*0x1004b24cc*/
              v62,
              &v65);
      if ( v28 ) /*0x1004b24d2*/
      {
        if ( v73 ) /*0x1004b26e9*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v73, 1); /*0x1004b26f4*/
LABEL_55:
        v48 = v81; /*0x1004b26f9*/
        *v81 = 3; /*0x1004b26fd*/
        v48[1] = v28; /*0x1004b2704*/
LABEL_57:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v62); /*0x1004b2778*/
        goto LABEL_72; /*0x1004b2784*/
      }
      v28 = v74; /*0x1004b24dc*/
      if ( __OFSUB__(-v73, 1) ) /*0x1004b24e6*/
        goto LABEL_55; /*0x1004b24e6*/
      v55[0] = v73; /*0x1004b24f4*/
      v55[1] = v74; /*0x1004b24fb*/
      v55[2] = v75; /*0x1004b2502*/
      ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD *))codexmate_lib::core::relay::codex_thread_visibility::rollout_history::pad_record::h58a602803da9eddf)( /*0x1004b251a*/
        &v69,
        v22 - v80,
        v55);
      v29 = v69; /*0x1004b251f*/
      v30 = *(_QWORD *)__src; /*0x1004b2526*/
      v31 = *(_QWORD *)&__src[16]; /*0x1004b2534*/
      if ( v69 != 11 ) /*0x1004b253f*/
      {
        v49 = *(_QWORD *)&__src[8]; /*0x1004b270a*/
        v50 = v81; /*0x1004b2714*/
        v81[11] = *(_QWORD *)&__src[80]; /*0x1004b2718*/
        v50[10] = *(_QWORD *)&__src[72]; /*0x1004b2723*/
        v50[9] = *(_QWORD *)&__src[64]; /*0x1004b272e*/
        v50[8] = *(_QWORD *)&__src[56]; /*0x1004b2739*/
        v50[7] = *(_QWORD *)&__src[48]; /*0x1004b2744*/
        v50[6] = *(_QWORD *)&__src[40]; /*0x1004b274f*/
        v51 = *(_QWORD *)&__src[24]; /*0x1004b2753*/
        v50[5] = *(_QWORD *)&__src[32]; /*0x1004b2761*/
        v50[4] = v51; /*0x1004b2765*/
        v50[1] = v30; /*0x1004b2769*/
        v50[2] = v49; /*0x1004b276d*/
        v50[3] = v31; /*0x1004b2771*/
        *v50 = v29; /*0x1004b2775*/
        goto LABEL_57; /*0x1004b2775*/
      }
      v32 = *(_QWORD *)&__src[8]; /*0x1004b2549*/
      v33 = v71(v72, *(_QWORD *)&__src[8], *(_QWORD *)&__src[16]); /*0x1004b254c*/
      if ( v33 || (v33 = v71(v72, v59, v80)) != 0 ) /*0x1004b256d*/
      {
        v45 = v81; /*0x1004b269d*/
        *v81 = 2; /*0x1004b26a1*/
        v45[1] = v33; /*0x1004b26a8*/
        if ( v30 ) /*0x1004b26af*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v30, 1); /*0x1004b26c0*/
        goto LABEL_57; /*0x1004b26c5*/
      }
      if ( v30 ) /*0x1004b2576*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v30, 1); /*0x1004b2583*/
LABEL_39:
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v62); /*0x1004b2588*/
      ++v64; /*0x1004b2594*/
    }
    else
    {
      v12 = v71(v72, v78, v79); /*0x1004b2171*/
      if ( v12 ) /*0x1004b2177*/
      {
        v44 = v81; /*0x1004b2689*/
        *v81 = 2; /*0x1004b268d*/
        v44[1] = v12; /*0x1004b2694*/
        goto LABEL_72; /*0x1004b2698*/
      }
    }
  }
  v36 = &v69; /*0x1004b25b4*/
  v37 = v63; /*0x1004b25bb*/
  codexmate_lib::core::relay::codex_thread_visibility::RolloutReadStamp::read::h92ad3bb2d9025d9d(&v69, v63, v8); /*0x1004b25c5*/
  v39 = v69; /*0x1004b25ca*/
  if ( __OFSUB__(-v69, 1) ) /*0x1004b25d7*/
    goto LABEL_70; /*0x1004b25d7*/
  v40 = v58[3]; /*0x1004b25e4*/
  if ( *(_QWORD *)&__src[48] != *(_QWORD *)(v40 + 56) ) /*0x1004b25f3*/
    goto LABEL_68; /*0x1004b25f3*/
  v41 = *(_QWORD *)__src; /*0x1004b25f9*/
  v37 = *(_QWORD *)&__src[8]; /*0x1004b2600*/
  v36 = *(__int64 **)__src; /*0x1004b260f*/
  if ( !(unsigned __int8)_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff( /*0x1004b2639*/
                           *(_QWORD *)__src,
                           *(_QWORD *)&__src[8],
                           *(_QWORD *)(v40 + 8),
                           *(_QWORD *)(v40 + 16))
    || *(_QWORD *)&__src[16] != *(_QWORD *)(v40 + 24)
    || *(_DWORD *)&__src[24] != *(_DWORD *)(v40 + 32) )
  {
    goto LABEL_68; /*0x1004b2639*/
  }
  v42 = *(_DWORD *)(v40 + 48); /*0x1004b2645*/
  if ( *(_DWORD *)&__src[40] != 1000000000 ) /*0x1004b264d*/
  {
    if ( v42 == 1000000000 || *(_DWORD *)&__src[40] != v42 || *(_QWORD *)&__src[32] != *(_QWORD *)(v40 + 40) ) /*0x1004b27a0*/
      goto LABEL_68; /*0x1004b27a0*/
    goto LABEL_61; /*0x1004b27a0*/
  }
  if ( v42 == 1000000000 ) /*0x1004b2659*/
  {
LABEL_61:
    if ( *(_QWORD *)&__src[56] != *(_QWORD *)(v40 + 64) /*0x1004b27d4*/
      || *(_QWORD *)&__src[64] != *(_QWORD *)(v40 + 72)
      || *(_QWORD *)&__src[72] != *(_QWORD *)(v40 + 80)
      || *(_QWORD *)&__src[80] != *(_QWORD *)(v40 + 88) )
    {
      goto LABEL_68; /*0x1004b27d4*/
    }
    if ( v39 ) /*0x1004b27d9*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v39, 1); /*0x1004b27e6*/
    v52 = v81; /*0x1004b27eb*/
    v81[1] = v64; /*0x1004b27f6*/
    *v52 = 11; /*0x1004b27fa*/
    goto LABEL_72; /*0x1004b2801*/
  }
LABEL_68:
  if ( v39 ) /*0x1004b2809*/
  {
    v36 = *(__int64 **)__src; /*0x1004b280b*/
    v37 = v39; /*0x1004b2817*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)__src, v39, 1); /*0x1004b281a*/
  }
LABEL_70:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v37, v38); /*0x1004b281f*/
  v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(61, 1); /*0x1004b282e*/
  if ( !v53 ) /*0x1004b2836*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 61); /*0x1004b28fd*/
  qmemcpy(v53, "rollout changed before cleanup publication; history preserved", 61); /*0x1004b28a8*/
  v54 = v81; /*0x1004b28ab*/
  *v81 = 10; /*0x1004b28af*/
  v54[1] = 61; /*0x1004b28b6*/
  v54[2] = v53; /*0x1004b28be*/
  v54[3] = 61; /*0x1004b28c2*/
LABEL_72:
  if ( v77 ) /*0x1004b28d1*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v77, 1); /*0x1004b28dc*/
  return result; /*0x1004b28e1*/
}
