// __ZN13codexmate_lib4core5relay12proxy_server34apply_kimi_coding_prompt_cache_key @ 0x100263c40
void __fastcall codexmate_lib::core::relay::proxy_server::apply_kimi_coding_prompt_cache_key::hc1356a93ea434349(
        __int64 a1,
        size_t a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  char *v16; // rdx
  int v17; // esi
  char v18; // di
  char v19; // r8
  char v20; // r9
  char *v21; // rdx
  int v22; // r8d
  int v23; // edi
  unsigned __int32 v24; // ecx
  unsigned int v25; // edx
  int v26; // r13d
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // rdx
  const void *v30; // r13
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // r14
  _QWORD *v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  size_t v41; // rdx
  const void *v42; // r13
  void *v43; // rax
  _QWORD v44[3]; // [rsp+8h] [rbp-F8h] BYREF
  _QWORD v45[11]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v46[11]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 230) ) /*0x100263c54*/
  {
    v7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64)); /*0x100263c75*/
    v45[4] = 0; /*0x100263c7d*/
    v45[0] = 0; /*0x100263c88*/
    v45[2] = 0; /*0x100263c93*/
    url::ParseOptions::parse::h7da66aa6bebaf5b6(v46, v45, v7, v8); /*0x100263caf*/
    if ( !__OFSUB__(0, v46[0]) ) /*0x100263cbd*/
    {
      qmemcpy(v45, v46, sizeof(v45)); /*0x100263cd5*/
      v9 = url::Url::host_str::h951633b861c322f2(v45); /*0x100263cdb*/
      if ( v10 == 12 && v9 != 0 && !(*(_QWORD *)v9 ^ 0x696D696B2E697061LL | *(unsigned int *)(v9 + 8) ^ 0x6D6F632ELL) ) /*0x100263d0a*/
      {
        v13 = (unsigned int *)url::Url::path::hdacd300d547f5011(v45); /*0x100263d42*/
        while ( v14 ) /*0x100263d6e*/
        {
          v15 = v14; /*0x100263d70*/
          v16 = (char *)v13 + v14; /*0x100263d73*/
          v17 = *(v16 - 1); /*0x100263d76*/
          if ( v17 >= 0 ) /*0x100263d7c*/
          {
            v14 = v16 - 1 - (char *)v13; /*0x100263d63*/
            if ( v17 != 47 ) /*0x100263d69*/
              goto LABEL_20; /*0x100263d69*/
          }
          else
          {
            v18 = *(v16 - 2); /*0x100263d7e*/
            if ( v18 >= -64 ) /*0x100263d86*/
            {
              v21 = v16 - 2; /*0x100263dad*/
              v23 = v18 & 0x1F; /*0x100263db1*/
            }
            else
            {
              v19 = *(v16 - 3); /*0x100263d88*/
              if ( v19 >= -64 ) /*0x100263d91*/
              {
                v21 = v16 - 3; /*0x100263db6*/
                v22 = v19 & 0xF; /*0x100263dba*/
              }
              else
              {
                v20 = *(v16 - 4); /*0x100263d93*/
                v21 = v16 - 4; /*0x100263d98*/
                v22 = ((v20 & 7) << 6) | v19 & 0x3F; /*0x100263da8*/
              }
              v23 = (v22 << 6) | v18 & 0x3F; /*0x100263dc5*/
            }
            v14 = v21 - (char *)v13; /*0x100263dd0*/
            if ( ((v23 << 6) | v17 & 0x3F) != 0x2F ) /*0x100263dd6*/
            {
LABEL_20:
              if ( v15 == 7 ) /*0x100263ddc*/
              {
                v24 = _byteswap_ulong(*v13); /*0x100263de0*/
                v25 = 795045732; /*0x100263de2*/
                if ( v24 != 795045732 /*0x100263e02*/
                  || (v24 = _byteswap_ulong(*(unsigned int *)((char *)v13 + 3)),
                      v25 = 1684631143,
                      v26 = 0,
                      v24 != 1684631143) )
                {
                  v26 = 2 * (v24 >= v25) - 1; /*0x100263e0b*/
                }
              }
              else
              {
                if ( v15 <= 7 ) /*0x100263e12*/
                  break; /*0x100263e12*/
                v27 = _byteswap_uint64(*(_QWORD *)v13); /*0x100263e1b*/
                v26 = (char)((v27 < 0x2F636F64696E672FLL) - (v27 > 0x2F636F64696E672FLL)); /*0x100263e30*/
              }
              if ( v45[0] ) /*0x100263e3e*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45[1], v45[0], 1); /*0x100263e4c*/
              if ( v26 ) /*0x100263e54*/
                return; /*0x100263e54*/
              v28 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100263e69*/
                      &unk_1015DCC40,
                      16,
                      a2);
              if ( v28 /*0x100263e91*/
                && *(_BYTE *)v28 == 3
                && (v30 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                                          *(_QWORD *)(v28 + 16),
                                          *(_QWORD *)(v28 + 24)),
                    v30 != nullptr && v29 != 0) )
              {
                a2 = v29; /*0x100263f66*/
                alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v46, v29, 0, 1, 1); /*0x100263f80*/
                v37 = v46[1]; /*0x100263f85*/
                if ( LOBYTE(v46[0]) ) /*0x100263f90*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v46[1], v46[2]); /*0x100264162*/
                v38 = (_QWORD *)v46[2]; /*0x100263f96*/
                v47 = v46[2]; /*0x100263f9a*/
                v39 = (__int64)v30; /*0x100263f9e*/
                memcpy((void *)v46[2], v30, a2); /*0x100263fa4*/
              }
              else
              {
                _$LT$$RF$str$u20$as$u20$http..header..map..as_header_name..Sealed$GT$::find::h6639e9683dd8a52e( /*0x100263eb2*/
                  v46,
                  "x-codex-turn-metadatasession_id",
                  21,
                  a3);
                if ( !LOBYTE(v46[0]) ) /*0x100263ebe*/
                  return; /*0x100263ebe*/
                v32 = *(_QWORD *)(a3 + 40); /*0x100263ec8*/
                if ( v46[2] >= v32 ) /*0x100263ecf*/
                  core::panicking::panic_bounds_check::h56740b1198b22635( /*0x10026417f*/
                    v46[2],
                    v32,
                    &anon_39a6e93098609d65551b0fc4eadbbbd9_907,
                    v31);
                v33 = *(_QWORD *)(a3 + 32); /*0x100263ed5*/
                v34 = *(_QWORD *)(v33 + 104LL * v46[2] + 32); /*0x100263edd*/
                v35 = *(_QWORD *)(v33 + 104LL * v46[2] + 40); /*0x100263ee2*/
                if ( v35 ) /*0x100263eea*/
                {
                  v36 = 0; /*0x100263eec*/
                  while ( (unsigned __int8)(*(_BYTE *)(v34 + v36) - 32) < 0x5Fu || *(_BYTE *)(v34 + v36) == 9 ) /*0x100263f08*/
                  {
                    if ( v35 == ++v36 ) /*0x100263f14*/
                      goto LABEL_38; /*0x100263f14*/
                  }
                  return; /*0x100263f08*/
                }
LABEL_38:
                v46[0] = v34; /*0x100263f16*/
                v46[1] = v35; /*0x100263f1d*/
                v46[2] = 0; /*0x100263f21*/
                v46[3] = 0; /*0x100263f29*/
                v46[4] = v34; /*0x100263f31*/
                v46[5] = v35; /*0x100263f35*/
                serde_json::de::from_trait::h51e180b4bb6af5e0(v45, v46); /*0x100263f47*/
                if ( LOBYTE(v45[0]) == 6 ) /*0x100263f53*/
                {
                  core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v45[1]); /*0x100263f5c*/
                  return; /*0x100263f61*/
                }
                v46[3] = v45[3]; /*0x100263fb5*/
                v46[2] = v45[2]; /*0x100263fc0*/
                v46[1] = v45[1]; /*0x100263fd2*/
                v46[0] = v45[0]; /*0x100263fd6*/
                v39 = 10; /*0x100263feb*/
                v40 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100263ff0*/
                        "session_id",
                        10,
                        v46);
                if ( v40 /*0x10026401b*/
                  && *(_BYTE *)v40 == 3
                  && (v39 = *(_QWORD *)(v40 + 24),
                      v42 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                                            *(_QWORD *)(v40 + 16),
                                            v39),
                      a2 = v41,
                      v42 != nullptr && v41 != 0) )
                {
                  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v45, v41, 0, 1, 1); /*0x10026412b*/
                  v37 = v45[1]; /*0x100264130*/
                  if ( LODWORD(v45[0]) == 1 ) /*0x10026413e*/
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v45[1], v45[2]); /*0x100264171*/
                  v47 = v45[2]; /*0x100264147*/
                  v39 = (__int64)v42; /*0x10026414b*/
                  memcpy((void *)v45[2], v42, a2); /*0x100264151*/
                }
                else
                {
                  v37 = 0x8000000000000000LL; /*0x100264026*/
                }
                v38 = v46; /*0x100264029*/
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v46); /*0x100264030*/
              }
              if ( v37 != 0x8000000000000000LL && *a4 == 5 ) /*0x100264041*/
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v39); /*0x100264047*/
                v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x100264056*/
                if ( !v43 ) /*0x10026405e*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x10026418e*/
                qmemcpy(v43, "prompt_cache_key", 16); /*0x100264080*/
                v44[0] = 16; /*0x100264083*/
                v44[1] = v43; /*0x10026408e*/
                v44[2] = 16; /*0x100264095*/
                v46[1] = v37; /*0x1002640a0*/
                v46[2] = v47; /*0x1002640a8*/
                v46[3] = a2; /*0x1002640ac*/
                LOBYTE(v46[0]) = 3; /*0x1002640b0*/
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x1002640cf*/
                  v45,
                  a4 + 8,
                  v44,
                  v46);
                if ( LOBYTE(v45[0]) != 6 ) /*0x1002640db*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v45); /*0x1002640e8*/
                return; /*0x1002640ed*/
              }
              v12 = v47; /*0x1002640fd*/
              if ( !(2 * v37) ) /*0x100264101*/
                return; /*0x100264101*/
              v11 = v37; /*0x10026410c*/
              goto LABEL_7; /*0x10026410f*/
            }
          }
        }
      }
      v11 = v45[0]; /*0x100263d0c*/
      if ( v45[0] ) /*0x100263d16*/
      {
        v12 = v45[1]; /*0x100263d18*/
LABEL_7:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x100263d24*/
      }
    }
  }
}