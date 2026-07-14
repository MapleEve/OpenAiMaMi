// callee: codexmate_lib::core::relay::manager::relay_ids_in_config::h31d02734d7dd2440
// VA: 0x1005cec40 | callee of codex_config_stale_reason (depth 2 from owner)

void *__fastcall codexmate_lib::core::relay::manager::relay_ids_in_config::h31d02734d7dd2440(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int8 *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbx
  void *v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  unsigned __int8 *v15; // rbx
  unsigned __int64 v16; // r12
  int v17; // r15d
  int v18; // ecx
  int v19; // esi
  int v20; // edx
  unsigned __int8 v21; // r15
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rdx
  void *result; // rax
  __int64 v25; // rbx
  _BYTE v26[104]; // [rsp+0h] [rbp-150h] BYREF
  _QWORD v27[13]; // [rsp+68h] [rbp-E8h] BYREF
  _QWORD *v28; // [rsp+D0h] [rbp-80h]
  void *v29; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-70h]
  __int64 v31; // [rsp+E8h] [rbp-68h]
  __int64 v32; // [rsp+F0h] [rbp-60h]
  __int64 v33; // [rsp+F8h] [rbp-58h]
  __int64 v34; // [rsp+100h] [rbp-50h]
  unsigned __int64 v35; // [rsp+108h] [rbp-48h]
  __int64 v36; // [rsp+110h] [rbp-40h] BYREF
  void *v37; // [rsp+118h] [rbp-38h]
  __int64 v38; // [rsp+120h] [rbp-30h]

  v4 = a2; /*0x1005cec57*/
  v28 = a1; /*0x1005cec5a*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1005cec65*/
  v6 = (_QWORD *)v5; /*0x1005cec67*/
  if ( *(_BYTE *)(v5 + 16) == 1 ) /*0x1005cec6e*/
  {
    v7 = *(_QWORD *)v5; /*0x1005cec74*/
    v8 = v6[1]; /*0x1005cec77*/
  }
  else
  {
    v25 = v5; /*0x1005cef63*/
    v7 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1005cef66*/
    v6 = (_QWORD *)v25; /*0x1005cef6b*/
    *(_QWORD *)v25 = v7; /*0x1005cef6e*/
    *(_QWORD *)(v25 + 8) = v8; /*0x1005cef71*/
    *(_BYTE *)(v25 + 16) = 1; /*0x1005cef75*/
  }
  *v6 = v7 + 1; /*0x1005cec7f*/
  v32 = 0; /*0x1005cec89*/
  v31 = 0; /*0x1005cec94*/
  v30 = 0; /*0x1005cec9f*/
  v29 = anon_1f22c03b288e649fafb3d21192ed4cff_8; /*0x1005cecaa*/
  v33 = v7; /*0x1005cecae*/
  v34 = v8; /*0x1005cecb2*/
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v27, a2, a3, &unk_1012CAF82, 13); /*0x1005cecd0*/
  qmemcpy(v26, v27, sizeof(v26)); /*0x1005ceceb*/
  v9 = (unsigned __int8 *)(a2 + a3); /*0x1005cecee*/
  v35 = a3; /*0x1005cecf2*/
LABEL_6:
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x1005ced25*/
    v27,
    v26);
  if ( LODWORD(v27[0]) == 1 ) /*0x1005ced3b*/
  {
    v11 = v27[1]; /*0x1005ced41*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27); /*0x1005ced48*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1005ced57*/
    if ( !v12 ) /*0x1005ced5f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x1005cef88*/
    qmemcpy(v12, "aimami_relay_", 13); /*0x1005ced7d*/
    v36 = 13; /*0x1005ced80*/
    v37 = v12; /*0x1005ced88*/
    v38 = 13; /*0x1005ced8c*/
    v13 = v11 + 13; /*0x1005ced94*/
    if ( v13 ) /*0x1005ced98*/
    {
      if ( v13 >= a3 ) /*0x1005ced9d*/
      {
        if ( v13 != a3 ) /*0x1005cedb0*/
          goto LABEL_36; /*0x1005cedb0*/
      }
      else if ( *(char *)(v4 + v13) <= -65 ) /*0x1005ceda4*/
      {
LABEL_36:
        core::str::slice_error_fail::h480e51fbd8b15eba(v4, a3, v13, a3, &off_1015345A0); /*0x1005cef8f*/
      }
    }
    v10 = 13; /*0x1005cedb6*/
    if ( v13 == a3 ) /*0x1005cedbe*/
      goto LABEL_5; /*0x1005cedbe*/
    v14 = v4; /*0x1005cedc4*/
    v15 = (unsigned __int8 *)(v4 + v13); /*0x1005cedc7*/
    v16 = 13; /*0x1005cedca*/
    while ( 1 ) /*0x1005cedd0*/
    {
      v17 = *v15; /*0x1005cedd0*/
      if ( (v17 & 0x80u) != 0 ) /*0x1005cedd7*/
      {
        v18 = v17 & 0x1F; /*0x1005cedf3*/
        v19 = v15[1] & 0x3F; /*0x1005cedfa*/
        if ( (unsigned __int8)v17 <= 0xDFu ) /*0x1005cee01*/
        {
          v15 += 2; /*0x1005cee39*/
          v17 = v19 | (v18 << 6); /*0x1005cee42*/
          if ( v17 != 45 ) /*0x1005cee49*/
            goto LABEL_25; /*0x1005cee49*/
        }
        else
        {
          v20 = (v19 << 6) | v15[2] & 0x3F; /*0x1005cee0d*/
          if ( (unsigned __int8)v17 < 0xF0u ) /*0x1005cee13*/
          {
            v15 += 3; /*0x1005cee4d*/
            v17 = (v18 << 12) | v20; /*0x1005cee56*/
            if ( v17 != 45 ) /*0x1005cee5d*/
            {
LABEL_25:
              if ( v17 != 95 && (unsigned int)(v17 - 48) >= 0xA && (v17 & 0xFFFFFFDF) - 65 >= 0x1A ) /*0x1005cee7b*/
                goto LABEL_31; /*0x1005cee7b*/
            }
          }
          else
          {
            v21 = v15[3]; /*0x1005cee15*/
            v15 += 4; /*0x1005cee1a*/
            v17 = ((v18 & 7) << 18) | (v20 << 6) | v21 & 0x3F; /*0x1005cee2e*/
            if ( v17 != 45 ) /*0x1005cee35*/
              goto LABEL_25; /*0x1005cee35*/
          }
        }
      }
      else
      {
        ++v15; /*0x1005cedd9*/
        if ( v17 != 45 ) /*0x1005cede0*/
          goto LABEL_25; /*0x1005cede0*/
      }
      v22 = v16; /*0x1005cee80*/
      if ( v16 == v36 ) /*0x1005cee87*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v36, v16, 1, 1, 1); /*0x1005ceeb6*/
        v12 = v37; /*0x1005ceebb*/
        v22 = v38; /*0x1005ceebf*/
      }
      *((_BYTE *)v12 + v22) = v17; /*0x1005cee89*/
      v38 = ++v16; /*0x1005cee90*/
      if ( v15 == v9 ) /*0x1005cee97*/
      {
LABEL_31:
        if ( v16 > 0xD ) /*0x1005ceed4*/
        {
          v27[2] = v38; /*0x1005ceede*/
          v27[1] = v37; /*0x1005ceeed*/
          v27[0] = v36; /*0x1005ceef4*/
          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1d31b66c0e1d63b4(&v29, v27); /*0x1005cef06*/
          v4 = v14; /*0x1005cef12*/
          a3 = v35; /*0x1005cef15*/
          goto LABEL_6; /*0x1005cef19*/
        }
        v10 = v36; /*0x1005ced00*/
        v4 = v14; /*0x1005ced07*/
        a3 = v35; /*0x1005ced0a*/
        if ( !v36 ) /*0x1005ced15*/
          goto LABEL_6; /*0x1005ced15*/
LABEL_5:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v10, 1); /*0x1005ced17*/
        goto LABEL_6; /*0x1005ced20*/
      }
    }
  }
  v23 = v28; /*0x1005cef22*/
  v28[5] = v34; /*0x1005cef26*/
  v23[4] = v33; /*0x1005cef2e*/
  v23[3] = v32; /*0x1005cef36*/
  v23[2] = v31; /*0x1005cef3e*/
  result = v29; /*0x1005cef42*/
  v23[1] = v30; /*0x1005cef4a*/
  *v23 = result; /*0x1005cef4e*/
  return result; /*0x1005cef51*/
}