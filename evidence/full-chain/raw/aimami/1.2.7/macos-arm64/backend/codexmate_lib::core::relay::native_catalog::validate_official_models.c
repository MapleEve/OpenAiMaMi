// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_catalog::validate_official_models::h4e301ca375d0071e; addr: 0x1005d37d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
_QWORD *__fastcall codexmate_lib::core::relay::native_catalog::validate_official_models::h4e301ca375d0071e(
        __int64 a1,
        __int64 a2,
        double a3)
{
  _QWORD *v3; // r13
  _BYTE *v4; // rax
  _BYTE *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 *v14; // r14
  __int64 *v15; // r13
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  unsigned __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbx
  __int128 *v29; // [rsp+8h] [rbp-98h] BYREF
  __int64 v30; // [rsp+10h] [rbp-90h]
  __int64 v31; // [rsp+18h] [rbp-88h]
  __int64 v32; // [rsp+20h] [rbp-80h]
  __int64 v33; // [rsp+28h] [rbp-78h]
  __int64 v34; // [rsp+30h] [rbp-70h]
  _QWORD *v35; // [rsp+38h] [rbp-68h]
  __int64 v36; // [rsp+40h] [rbp-60h] BYREF
  __int64 v37; // [rsp+48h] [rbp-58h]
  __int64 v38; // [rsp+50h] [rbp-50h]
  __int64 v39; // [rsp+58h] [rbp-48h]
  __int64 v40; // [rsp+60h] [rbp-40h] BYREF
  __int64 v41; // [rsp+68h] [rbp-38h]
  __int64 v42; // [rsp+70h] [rbp-30h]

  v3 = (_QWORD *)a1; /*0x1005d37e4*/
  v4 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("models", 6, a2); /*0x1005d37f3*/
  if ( v4 && (v5 = v4, *v4 == 4) ) /*0x1005d3807*/
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1005d3814*/
    v7 = (_QWORD *)v6; /*0x1005d3816*/
    if ( *(_BYTE *)(v6 + 16) == 1 ) /*0x1005d381d*/
    {
      v8 = *(_QWORD *)v6; /*0x1005d3823*/
      v9 = v7[1]; /*0x1005d3826*/
    }
    else
    {
      v28 = v6; /*0x1005d3b60*/
      v8 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(a3); /*0x1005d3b63*/
      v7 = (_QWORD *)v28; /*0x1005d3b68*/
      *(_QWORD *)v28 = v8; /*0x1005d3b6b*/
      *(_QWORD *)(v28 + 8) = v9; /*0x1005d3b6e*/
      *(_BYTE *)(v28 + 16) = 1; /*0x1005d3b72*/
    }
    *v7 = v8 + 1; /*0x1005d382e*/
    v32 = 0; /*0x1005d3838*/
    v31 = 0; /*0x1005d3843*/
    v30 = 0; /*0x1005d3851*/
    v29 = &xmmword_1016F24C0; /*0x1005d385f*/
    v33 = v8; /*0x1005d3866*/
    v34 = v9; /*0x1005d386a*/
    v10 = *((_QWORD *)v5 + 3); /*0x1005d386e*/
    v35 = (_QWORD *)a1; /*0x1005d3875*/
    if ( v10 ) /*0x1005d3879*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x1005d3882*/
        &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
        v8 + 1,
        v9);
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32 * v10, 8); /*0x1005d388f*/
      if ( !v11 ) /*0x1005d3897*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 32 * v10); /*0x1005d3b83*/
      v12 = *((_QWORD *)v5 + 3); /*0x1005d389d*/
    }
    else
    {
      v11 = 8; /*0x1005d38ce*/
      v12 = 0; /*0x1005d38d3*/
    }
    v36 = v10; /*0x1005d38d6*/
    v37 = v11; /*0x1005d38da*/
    v38 = 0; /*0x1005d38de*/
    if ( v12 ) /*0x1005d38e9*/
    {
      v14 = *((__int64 **)v5 + 2); /*0x1005d38ef*/
      v15 = &v14[4 * v12]; /*0x1005d38f7*/
      v16 = 0; /*0x1005d38fa*/
      do /*0x1005d393c*/
      {
        while ( 1 ) /*0x1005d3951*/
        {
          v20 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d3951*/
                  "sluglogsnameroletoolstopseedautolastNULL",
                  4,
                  v14);
          if ( v20 ) /*0x1005d3959*/
          {
            if ( *(_BYTE *)v20 == 3 ) /*0x1005d3962*/
            {
              v21 = *(_QWORD **)(v20 + 16); /*0x1005d3968*/
              v22 = *(_QWORD *)(v20 + 24); /*0x1005d396c*/
              core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v21, v22); /*0x1005d3976*/
              if ( v23 ) /*0x1005d397e*/
              {
                if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005d39dc*/
                                         &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_107,
                                         2u,
                                         v21)
                  && (v22 < 0xD || *v21 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)v21 + 5) ^ 0x5F79616C65725F69LL)
                  && !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6cf8ac836d3e88db(
                                         &v29,
                                         v21,
                                         v22) )
                {
                  break; /*0x1005d39dc*/
                }
              }
            }
          }
          ++v16; /*0x1005d3a2b*/
          v14 += 4; /*0x1005d3a2e*/
          if ( v14 == v15 ) /*0x1005d3a35*/
            goto LABEL_39; /*0x1005d3a35*/
        }
        switch ( *(_BYTE *)v14 ) /*0x1005d39f7*/
        {
          case 0: /*0x1005d39f7*/
            LOBYTE(v39) = 0; /*0x1005d3a61*/
            v25 = v38; /*0x1005d3a65*/
            if ( v38 == v36 ) /*0x1005d3a6d*/
              goto LABEL_37; /*0x1005d3a6d*/
            break; /*0x1005d3a6d*/
          case 1: /*0x1005d39f7*/
          case 2: /*0x1005d39f7*/
            v42 = v14[3]; /*0x1005d39fd*/
            v41 = v14[2]; /*0x1005d3a05*/
            v24 = *v14; /*0x1005d3a09*/
            v40 = v14[1]; /*0x1005d3a10*/
            v39 = v24; /*0x1005d3a14*/
            v25 = v38; /*0x1005d3a18*/
            if ( v38 == v36 ) /*0x1005d3a20*/
              goto LABEL_37; /*0x1005d3a20*/
            break; /*0x1005d3a20*/
          case 3: /*0x1005d39f7*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v40, v14 + 1); /*0x1005d3a7d*/
            LOBYTE(v39) = 3; /*0x1005d3a82*/
            v25 = v38; /*0x1005d3a86*/
            if ( v38 == v36 ) /*0x1005d3a8e*/
              goto LABEL_37; /*0x1005d3a8e*/
            break; /*0x1005d3a8e*/
          case 4: /*0x1005d39f7*/
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0b6d280b62bbfd36(&v40, v14 + 1); /*0x1005d3a48*/
            LOBYTE(v39) = 4; /*0x1005d3a4d*/
            v25 = v38; /*0x1005d3a51*/
            if ( v38 == v36 ) /*0x1005d3a59*/
              goto LABEL_37; /*0x1005d3a59*/
            break; /*0x1005d3a59*/
          case 5: /*0x1005d39f7*/
            if ( v14[3] ) /*0x1005d3a96*/
            {
              v26 = v14[1]; /*0x1005d3a9d*/
              if ( !v26 ) /*0x1005d3aa4*/
                core::option::unwrap_failed::h44626cade04bbf1e(&anon_f3f46b48c4f9c057aa63801556530189_876); /*0x1005d3b59*/
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h149908e62b71aef2( /*0x1005d3ab2*/
                &v40,
                v26,
                v14[2]);
            }
            else
            {
              v40 = 0; /*0x1005d3ab9*/
              v42 = 0; /*0x1005d3ac1*/
            }
            LOBYTE(v39) = 5; /*0x1005d3ac9*/
            v25 = v38; /*0x1005d3acd*/
            if ( v38 == v36 ) /*0x1005d3ad5*/
LABEL_37:
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v36); /*0x1005d3ae0*/
            break; /*0x1005d3ae9*/
        }
        v14 += 4; /*0x1005d3900*/
        v17 = v37; /*0x1005d3904*/
        v18 = 32 * v25; /*0x1005d390b*/
        *(_QWORD *)(v37 + v18 + 24) = v42; /*0x1005d3913*/
        *(_QWORD *)(v17 + v18 + 16) = v41; /*0x1005d391c*/
        v19 = v39; /*0x1005d3921*/
        *(_QWORD *)(v17 + v18 + 8) = v40; /*0x1005d3929*/
        *(_QWORD *)(v17 + v18) = v19; /*0x1005d392e*/
        v38 = v25 + 1; /*0x1005d3935*/
      }
      while ( v14 != v15 ); /*0x1005d393c*/
    }
    else
    {
      v16 = 0; /*0x1005d3aee*/
    }
LABEL_39:
    v3 = v35; /*0x1005d3af1*/
    v35[2] = v38; /*0x1005d3af9*/
    v27 = v36; /*0x1005d3afd*/
    v3[1] = v37; /*0x1005d3b05*/
    *v3 = v27; /*0x1005d3b09*/
    v3[3] = v16; /*0x1005d3b0d*/
    if ( v30 && 17 * v30 != -33 ) /*0x1005d3b2f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v29[-v30 - 1], 17 * v30 + 33, 16); /*0x1005d3b48*/
  }
  else
  {
    *(_WORD *)(a1 + 8) = 4; /*0x1005d38a3*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1005d38b8*/
  }
  return v3; /*0x1005d38bf*/
}
