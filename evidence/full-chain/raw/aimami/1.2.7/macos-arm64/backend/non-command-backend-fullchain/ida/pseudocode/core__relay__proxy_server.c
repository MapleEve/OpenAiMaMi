// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/proxy_server
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::proxy_server::translate_responses_to_anthropic_body::h02e1627ea588417a @ 0x1008506e0 size=2140 lines=406 =====
__m256i *__fastcall codexmate_lib::core::relay::proxy_server::translate_responses_to_anthropic_body::h02e1627ea588417a(
        __m256i *a1,
        __int64 *a2,
        void *a3,
        size_t a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  void *v15; // rax
  __int64 v16; // rdx
  __m256i *v17; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  __m256i *v21; // rdx
  __m256i *v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rbx
  _QWORD *v33; // rax
  unsigned __int8 v34; // bl
  _BYTE *v35; // rax
  _BYTE *v36; // rbx
  __int64 v37; // r13
  void *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rbx
  void *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  void *v45; // rdi
  int v46; // eax
  char *v47; // r14
  __int64 v48; // r15
  __m256i *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // [rsp+0h] [rbp-190h] BYREF
  void *v53; // [rsp+8h] [rbp-188h]
  __int64 v54; // [rsp+10h] [rbp-180h]
  __int64 v55; // [rsp+18h] [rbp-178h]
  unsigned __int64 v56; // [rsp+20h] [rbp-170h]
  _BYTE *v57; // [rsp+28h] [rbp-168h]
  __int64 v58; // [rsp+30h] [rbp-160h]
  __m256i v59; // [rsp+38h] [rbp-158h] BYREF
  _QWORD v60[4]; // [rsp+58h] [rbp-138h] BYREF
  __m256i v61; // [rsp+78h] [rbp-118h]
  __m256i v62; // [rsp+98h] [rbp-F8h]
  __int64 v63; // [rsp+B8h] [rbp-D8h]
  void *__s1; // [rsp+C0h] [rbp-D0h]
  __m256i v65; // [rsp+C8h] [rbp-C8h] BYREF
  __m256i v66[3]; // [rsp+E8h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+148h] [rbp-48h]
  __m256i *v68; // [rsp+150h] [rbp-40h]
  __int128 __s2; // [rsp+158h] [rbp-38h]

  v68 = a1;
  v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          &anon_5fc5982723cbea77922f0a3a965b6f67_315,
          5,
          a2);
  v13 = a4;
  v14 = (__int64)a3;
  if ( v12 )
  {
    v13 = a4;
    v14 = (__int64)a3;
    if ( *(_BYTE *)v12 == 3 )
    {
      v14 = *(_QWORD *)(v12 + 16);
      v13 = *(_QWORD *)(v12 + 24);
    }
  }
  v15 = codexmate_lib::core::relay::translator::anthropic_tools::validate_tool_choice::h71dd73ca4602f618(
          (__int64)a2,
          v14,
          v13,
          a7);
  if ( v15 )
  {
    v17 = v68;
    v68->i64[0] = (__int64)v15;
    v17->i64[1] = v16;
    v17[1].i64[0] = 0x8000000000000001LL;
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(a2);
    return v17;
  }
  v60[3] = a2[3];
  v60[2] = a2[2];
  v19 = *a2;
  v60[1] = a2[1];
  v60[0] = v19;
  if ( a7 )
    codexmate_lib::core::relay::native_responses_compat::strip_hosted_web_search_tools::he8c81f3bbf9dfdf6(v60);
  codexmate_lib::core::relay::translator::responses_to_anthropic_request_with_context::he602122c7b3043ed(
    v66,
    (__int64)v60,
    a3,
    a4,
    a5,
    a6);
  v20 = v66[0].i64[1];
  if ( v66[1].i64[0] == 0x8000000000000001LL )
  {
    v21 = v68;
    v68->i64[0] = v66[0].i64[0];
    v21->i64[1] = v20;
    v21[1].i64[0] = 0x8000000000000001LL;
LABEL_10:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v60);
    return v68;
  }
  v56 = 0x8000000000000001LL;
  v65 = v66[0];
  v62 = v66[2];
  v61 = v66[1];
  v67 = v66[1].i64[0];
  if ( a7 )
    codexmate_lib::core::relay::translator::strip_anthropic_web_search_tools::h6c21214d739934ed(
      &v65,
      v66[0].i64[3],
      v66[1].i64[1],
      v66[0].i64[0]);
  v23 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &anon_5fc5982723cbea77922f0a3a965b6f67_315,
                    5,
                    &v65);
  if ( !v23 )
    v23 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73;
  if ( *(_BYTE *)v23 == 3 )
  {
    v24 = v23[2];
    v25 = v23[3];
  }
  else
  {
    v24 = 1;
    v25 = 0;
  }
  *((_QWORD *)&__s2 + 1) = v25;
  if ( (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::requires_append_only_tool_loading::hf224b60584ee2c06(
                          v24,
                          v25) )
  {
    if ( __s2 < 0 )
    {
      v26 = 0;
      goto LABEL_21;
    }
    if ( *((_QWORD *)&__s2 + 1) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24);
      v26 = 1;
      v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(*((_QWORD *)&__s2 + 1), 1);
      if ( !v29 )
LABEL_21:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, *((_QWORD *)&__s2 + 1));
      v30 = v29;
    }
    else
    {
      v30 = 1;
    }
    *(_QWORD *)&__s2 = v30;
    memcpy((void *)v30, (const void *)v24, *((size_t *)&__s2 + 1));
    v31 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &unk_1018CB9E5,
                      5,
                      &v65);
    if ( !v31 )
      v31 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73;
    if ( *(_BYTE *)v31 == 4 && (a6 = v31[3]) != 0 )
    {
      v32 = v31[2];
      a6 *= 32;
      while ( 1 )
      {
        v33 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                          &anon_5fc5982723cbea77922f0a3a965b6f67_91,
                          4,
                          v32);
        if ( !v33 )
          v33 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73;
        if ( *(_BYTE *)v33 == 3
          && v33[3] >= 0xBu
          && !(*(_QWORD *)v33[2] ^ 0x726165735F626577LL | *(_QWORD *)(v33[2] + 3LL) ^ 0x5F6863726165735FLL) )
        {
          break;
        }
        v32 += 32;
        a6 -= 32;
        if ( !a6 )
          goto LABEL_40;
      }
      v34 = 1;
    }
    else
    {
LABEL_40:
      v34 = 0;
    }
    v35 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "inputAnthropic signed history cannot introduce its first eager tool mid-conversationfunction_callmessageassistantThis Anthropic model does not support mid-conversation tool additionsdefer_loading",
                     5,
                     v60);
    v63 = v34;
    if ( !v35 )
      v35 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73;
    v36 = v35 + 8;
    v37 = 0;
    if ( *v35 != 4 )
      v36 = nullptr;
LABEL_45:
    if ( v37 )
    {
      while ( v37 != a6 )
      {
        v38 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        &anon_5fc5982723cbea77922f0a3a965b6f67_91,
                        4,
                        v37);
        if ( !v38 )
          v38 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73;
        v37 += 32;
        if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13(
                                v38,
                                &off_101C01D90) )
        {
          v39 = v37 - 32;
LABEL_58:
          codexmate_lib::core::relay::translator::anthropic_thinking_carrier::hca081ecbe5cf702d(v66, v39);
          if ( v66[0].i8[0] == 6 )
            goto LABEL_45;
          v59 = v66[0];
          v42 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  &unk_1018CC1C2,
                  21,
                  &v59);
          if ( !v42 )
          {
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v59);
            goto LABEL_45;
          }
          switch ( *(_BYTE *)v42 )
          {
            case 0:
              v66[0].i8[0] = 0;
              break;
            case 1:
            case 2:
              v66[0].i128[1] = *(_OWORD *)(v42 + 16);
              v43 = *(_QWORD *)v42;
              v66[0].i64[1] = *(_QWORD *)(v42 + 8);
              v66[0].i64[0] = v43;
              break;
            case 3:
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                &v66[0].u32[2],
                v42 + 8);
              v66[0].i8[0] = 3;
              break;
            case 4:
              _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7792aaf1fd665bd1(
                &v66[0].u32[2],
                *(_QWORD *)(v42 + 16),
                *(_QWORD *)(v42 + 24));
              v66[0].i8[0] = 4;
              break;
            case 5:
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h597e84f914b16b07(
                &v66[0].u32[2],
                v42 + 8);
              v66[0].i8[0] = 5;
              break;
          }
          serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_struct::h3141622f1070c5b8(
            &v52,
            v66,
            &anon_5fc5982723cbea77922f0a3a965b6f67_320,
            13,
            &anon_5fc5982723cbea77922f0a3a965b6f67_322,
            2);
          v57 = v36;
          v44 = v52;
          v45 = v53;
          if ( v52 == 0x8000000000000000LL )
          {
            core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::hcd642d706d35d819(v53);
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 40, 8);
            v47 = "Invalid Anthropic search context; history was not modified";
            v48 = 58;
          }
          else
          {
            if ( v54 != *((_QWORD *)&__s2 + 1)
              || (v58 = v55, __s1 = v53, v46 = memcmp(v53, (const void *)__s2, *((size_t *)&__s2 + 1)), v45 = __s1, v46)
              || (_BYTE)v63 == (_BYTE)v58 )
            {
              if ( v44 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1);
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v59);
              v36 = v57;
              goto LABEL_45;
            }
            v47 = "Claude search availability changed for signed history; restore its previous search setting or start a new conversation. History was not modifiedInvalid Anthropic search context; history was not modified";
            v48 = 144;
            if ( v44 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v44, 1);
          }
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v59);
          if ( *((_QWORD *)&__s2 + 1) )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, *((_QWORD *)&__s2 + 1), 1);
          v49 = v68;
          v68->i64[0] = (__int64)v47;
          v49->i64[1] = v48;
          v49[1].i64[0] = v56;
          if ( v62.i64[0] )
          {
            v50 = v62.i64[2];
            v66[0].i64[1] = 0;
            v66[0].i128[1] = v62.i128[0];
            v66[1].i64[1] = 0;
            v66[1].i128[1] = v62.i128[0];
            v51 = 1;
          }
          else
          {
            v51 = 0;
            v50 = 0;
          }
          v66[0].i64[0] = v51;
          v66[1].i64[0] = v51;
          v66[2].i64[0] = v50;
          _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdf8beb86d98b7008(v66);
          if ( v67 != 0x8000000000000000LL && v67 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61.i64[1], v67, 1);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v65);
          goto LABEL_10;
        }
      }
    }
    if ( v36 )
    {
      v37 = *((_QWORD *)v36 + 1);
      v40 = 32LL * *((_QWORD *)v36 + 2);
      a6 = v37 + v40;
      while ( v40 )
      {
        v41 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        &anon_5fc5982723cbea77922f0a3a965b6f67_91,
                        4,
                        v37);
        if ( !v41 )
          v41 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73;
        v37 += 32;
        v40 -= 32;
        if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13(
                                v41,
                                &off_101C01D90) )
        {
          v39 = v37 - 32;
          v36 = nullptr;
          goto LABEL_58;
        }
      }
    }
    v27 = *((_QWORD *)&__s2 + 1);
    v28 = v67;
    if ( v67 != 0x8000000000000000LL )
      goto LABEL_75;
  }
  else
  {
    v27 = 0x8000000000000000LL;
    v28 = v67;
    if ( v67 != 0x8000000000000000LL )
    {
LABEL_75:
      if ( v28 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61.i64[1], v28, 1);
    }
  }
  v61.i64[0] = v27;
  *(__int128 *)((char *)v61.i128 + 8) = __s2;
  v61.i64[3] = v63;
  v66[0] = v65;
  v66[1].i64[0] = v27;
  *(__int128 *)((char *)v66[1].i128 + 8) = __s2;
  v66[1].i64[3] = v63;
  v66[2] = v62;
  v22 = v68;
  qmemcpy(v68, v66, 0x60u);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v60);
  return v22;
}

// ===== codexmate_lib::core::relay::proxy_server::remove_rejected_optional_anthropic_beta::h172f9dfd26d90fab @ 0x100853110 size=1942 lines=345 =====
char __fastcall codexmate_lib::core::relay::proxy_server::remove_rejected_optional_anthropic_beta::h172f9dfd26d90fab(
        __int16 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  size_t v9; // rbx
  __int64 v10; // r13
  void *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i si128; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __m128i v21; // xmm6
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // r13
  void *v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rdx
  _QWORD v43[7]; // [rsp+0h] [rbp-150h] BYREF
  char v44; // [rsp+38h] [rbp-118h]
  __int16 v45; // [rsp+40h] [rbp-110h]
  _QWORD v46[5]; // [rsp+48h] [rbp-108h] BYREF
  _QWORD v47[2]; // [rsp+70h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+80h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+88h] [rbp-C8h]
  __int64 v50; // [rsp+90h] [rbp-C0h]
  _QWORD v51[4]; // [rsp+98h] [rbp-B8h] BYREF
  unsigned __int64 v52; // [rsp+B8h] [rbp-98h]
  unsigned __int64 v53; // [rsp+C0h] [rbp-90h] BYREF
  unsigned __int64 v54; // [rsp+C8h] [rbp-88h]
  unsigned __int64 v55; // [rsp+D0h] [rbp-80h]
  unsigned __int64 v56; // [rsp+D8h] [rbp-78h]
  unsigned __int64 v57; // [rsp+E0h] [rbp-70h]
  __int64 v58; // [rsp+E8h] [rbp-68h]
  __int64 v59; // [rsp+F0h] [rbp-60h] BYREF
  unsigned __int64 v60; // [rsp+F8h] [rbp-58h]
  unsigned __int64 v61; // [rsp+100h] [rbp-50h]
  unsigned __int64 v62; // [rsp+108h] [rbp-48h] BYREF
  unsigned __int64 v63; // [rsp+110h] [rbp-40h]
  unsigned __int64 v64; // [rsp+118h] [rbp-38h]
  void *__src; // [rsp+120h] [rbp-30h]

  if ( a1 != 400 || a3 >= 0x10001 )
    return 0;
  v59 = a2;
  v60 = a3;
  v61 = 0;
  v62 = 0;
  serde_json::de::from_trait::he213214ce1dd6727(&v53, &v59);
  if ( (_BYTE)v53 == 6 )
  {
    v7 = v54;
    core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::hcd642d706d35d819(v54);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 40, 8);
    return 0;
  }
  v51[3] = v56;
  v51[2] = v55;
  v51[1] = v54;
  v51[0] = v53;
  v8 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v51, "/error/messagex-codex-turn-metadatasession_id", 14);
  if ( !v8 || *(_BYTE *)v8 != 3 )
  {
LABEL_54:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v51);
    return 0;
  }
  v9 = *(_QWORD *)(v8 + 24);
  if ( (v9 & 0x8000000000000000LL) != 0LL )
  {
    v10 = 0;
    goto LABEL_8;
  }
  if ( !v9 )
  {
    v12 = 1;
    memcpy((void *)1, *(const void **)(v8 + 16), *(_QWORD *)(v8 + 24));
    goto LABEL_25;
  }
  __src = *(void **)(v8 + 16);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51);
  v10 = 1;
  v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1);
  if ( !v11 )
LABEL_8:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9);
  v12 = (__int64)v11;
  memcpy(v11, __src, v9);
  if ( v9 >= 8 )
  {
    if ( v9 >= 0x20 )
    {
      v13 = v9 & 0x7FFFFFFFFFFFFFE0LL;
      v14 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_10181FBB0);
      v16 = _mm_load_si128((const __m128i *)&xmmword_10181FBC0);
      v17 = _mm_load_si128((const __m128i *)&xmmword_10181FBD0);
      do
      {
        v18 = _mm_loadu_si128((const __m128i *)(v12 + v14));
        v19 = _mm_loadu_si128((const __m128i *)(v12 + v14 + 16));
        v20 = _mm_add_epi8(v18, si128);
        v21 = _mm_add_epi8(v19, si128);
        *(__m128i *)(v12 + v14) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v16), v20), v17), v18);
        *(__m128i *)(v12 + v14 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v16), v21), v17),
                                         v19);
        v14 += 32;
      }
      while ( v13 != v14 );
      if ( v9 == v13 )
        goto LABEL_25;
      if ( (v9 & 0x18) == 0 )
        goto LABEL_23;
    }
    else
    {
      v13 = 0;
    }
    v22 = v13;
    v13 = v9 & 0x7FFFFFFFFFFFFFF8LL;
    v23 = _mm_load_si128((const __m128i *)&xmmword_10181FBE0);
    v24 = _mm_load_si128((const __m128i *)&xmmword_10181FBF0);
    v25 = _mm_load_si128((const __m128i *)&xmmword_10181FC00);
    do
    {
      v26 = _mm_loadl_epi64((const __m128i *)(v12 + v22));
      v27 = _mm_add_epi8(v26, v23);
      *(_QWORD *)(v12 + v22) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v27, v24), v27), v25), v26).u64[0];
      v22 += 8;
    }
    while ( v13 != v22 );
    goto LABEL_24;
  }
  v13 = 0;
  do
  {
LABEL_23:
    *(_BYTE *)(v12 + v13) |= 32 * ((unsigned __int8)(*(_BYTE *)(v12 + v13) - 65) < 0x1Au);
    ++v13;
LABEL_24:
    ;
  }
  while ( v9 != v13 );
LABEL_25:
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "anthropic-beta/error/messagex-codex-turn-metadatasession_id",
                           0xEu,
                           (void *)v12)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "beta headerunsupportednot supportednot recognizedunrecognizedinvalid betainvalid anthropic-beta/thinking/typepassthrough.networkinvalid signature in thinking blockthought signature is not validthought signature is invalidcodexInvalid Anthropic SSE UTF-8buffer limitanthropicupstream translated stream exceeds SSE line buffer limitupstream translated stream exceeds cumulative buffer budget",
                           0xBu,
                           (void *)v12) )
  {
    goto LABEL_52;
  }
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "requiredrejectedmsg_stopmarkdown",
                          8u,
                          (void *)v12)
    || !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "unknownchoicesfinish_reasonsummary_text",
                           7u,
                           (void *)v12)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "unsupportednot supportednot recognizedunrecognizedinvalid betainvalid anthropic-beta/thinking/typepassthrough.networkinvalid signature in thinking blockthought signature is not validthought signature is invalidcodexInvalid Anthropic SSE UTF-8buffer limitanthropicupstream translated stream exceeds SSE line buffer limitupstream translated stream exceeds cumulative buffer budget",
                           0xBu,
                           (void *)v12)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "not supportednot recognizedunrecognizedinvalid betainvalid anthropic-beta/thinking/typepassthrough.networkinvalid signature in thinking blockthought signature is not validthought signature is invalidcodexInvalid Anthropic SSE UTF-8buffer limitanthropicupstream translated stream exceeds SSE line buffer limitupstream translated stream exceeds cumulative buffer budget",
                           0xDu,
                           (void *)v12)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "not recognizedunrecognizedinvalid betainvalid anthropic-beta/thinking/typepassthrough.networkinvalid signature in thinking blockthought signature is not validthought signature is invalidcodexInvalid Anthropic SSE UTF-8buffer limitanthropicupstream translated stream exceeds SSE line buffer limitupstream translated stream exceeds cumulative buffer budget",
                           0xEu,
                           (void *)v12)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "unrecognizedinvalid betainvalid anthropic-beta/thinking/typepassthrough.networkinvalid signature in thinking blockthought signature is not validthought signature is invalidcodexInvalid Anthropic SSE UTF-8buffer limitanthropicupstream translated stream exceeds SSE line buffer limitupstream translated stream exceeds cumulative buffer budget",
                           0xCu,
                           (void *)v12)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "invalid betainvalid anthropic-beta/thinking/typepassthrough.networkinvalid signature in thinking blockthought signature is not validthought signature is invalidcodexInvalid Anthropic SSE UTF-8buffer limitanthropicupstream translated stream exceeds SSE line buffer limitupstream translated stream exceeds cumulative buffer budget",
                           0xCu,
                           (void *)v12)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "invalid anthropic-beta/thinking/typepassthrough.networkinvalid signature in thinking blockthought signature is not validthought signature is invalidcodexInvalid Anthropic SSE UTF-8buffer limitanthropicupstream translated stream exceeds SSE line buffer limitupstream translated stream exceeds cumulative buffer budget",
                           0x16u,
                           (void *)v12) )
  {
    goto LABEL_52;
  }
  http::header::name::HdrName::from_bytes::ha3c925ff81c76b25(
    &v59,
    "anthropic-beta/error/messagex-codex-turn-metadatasession_id",
    14,
    a5);
  if ( v59 == 2 || (v59 & 1) == 0 )
    goto LABEL_52;
  v28 = *(_QWORD *)(a5 + 40);
  if ( v61 >= v28 )
    core::panicking::panic_bounds_check::h56740b1198b22635(v61, v28, &anon_ce2d7e055d4ebd72bdfc640dd1dd85ab_925);
  v29 = *(_QWORD *)(a5 + 32);
  v30 = *(_QWORD *)(v29 + 104 * v61 + 32);
  v31 = *(_QWORD *)(v29 + 104 * v61 + 40);
  if ( v31 )
  {
    v32 = 0;
    while ( (unsigned __int8)(*(_BYTE *)(v30 + v32) - 32) < 0x5Fu || *(_BYTE *)(v30 + v32) == 9 )
    {
      if ( v31 == ++v32 )
        goto LABEL_42;
    }
    goto LABEL_52;
  }
LABEL_42:
  v43[0] = 0;
  v43[1] = v31;
  v43[2] = v30;
  v43[3] = v31;
  v43[4] = 0;
  v43[5] = v31;
  v43[6] = 0x2C0000002CLL;
  v44 = 1;
  v45 = 1;
  ((void (__fastcall *)(__int64 *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::haf046c39d2d66c85)(
    &v48,
    v43);
  v33 = v49;
  v34 = (void *)v9;
  v35 = v49 + 16 * v50;
  v59 = v49;
  v60 = v35;
  __src = v34;
  v36 = core::iter::traits::iterator::Iterator::try_fold::h9a706cfc5406c455(&v59, a4, v12);
  if ( !v36 )
  {
    v9 = (size_t)__src;
    if ( !v48 )
      goto LABEL_52;
    v40 = 16 * v48;
    v41 = 8;
LABEL_51:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v40, v41);
LABEL_52:
    if ( v9 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v9, 1);
    goto LABEL_54;
  }
  v47[0] = v36;
  v47[1] = v37;
  v46[0] = v33;
  v46[1] = v33;
  v46[2] = v48;
  v46[3] = v35;
  v46[4] = v47;
  alloc::vec::in_place_collect::from_iter_in_place::hba1f658505eb997a(&v53, v46);
  v38 = v54;
  alloc::str::join_generic_copy::h5c603fa350d56d5f(&v59, v54, v55, &anon_5fc5982723cbea77922f0a3a965b6f67_23, 1);
  v58 = v59;
  v52 = v60;
  v39 = v61;
  v9 = (size_t)__src;
  if ( v53 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, 16 * v53, 8);
  if ( v39 )
  {
    v33 = v52;
    http::header::value::HeaderValue::try_from_generic::h5a1e2030080fa430(&v53, v52, v39);
    if ( (_BYTE)v57 == 2 )
    {
      v40 = v58;
      if ( !v58 )
        goto LABEL_52;
      v41 = 1;
      goto LABEL_51;
    }
    v64 = v57;
    v63 = v56;
    v62 = v55;
    v61 = v54;
    v60 = v53;
    v59 = a5;
    http::header::name::HdrName::from_static::h5e41443daf2556e5(
      &v53,
      "anthropic-beta/error/messagex-codex-turn-metadatasession_id",
      14,
      &v59);
    if ( (_BYTE)v57 == 3 )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        "size overflows MAX_SIZEstagestarturlelapsedMsfirstTokenokfirstTokenMstotalMs",
        23,
        &v59,
        &unk_101C03960,
        &off_101C02940);
    v63 = v57;
    v62 = v56;
    v61 = v55;
    v60 = v54;
    v59 = v53;
    if ( (_BYTE)v57 != 2 )
      goto LABEL_60;
  }
  else
  {
    v33 = v52;
    http::header::map::HeaderMap$LT$T$GT$::remove::h8858e5c20c00e704(
      &v59,
      a5,
      "anthropic-beta/error/messagex-codex-turn-metadatasession_id",
      14);
    if ( (_BYTE)v63 != 2 )
LABEL_60:
      (*(void (__fastcall **)(unsigned __int64 *, unsigned __int64, unsigned __int64))(v59 + 32))(&v62, v60, v61);
  }
  if ( v58 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v58, 1);
  if ( v9 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v9, 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v51);
  return 1;
}

// ===== codexmate_lib::core::relay::proxy_server::require_anthropic_inline_tools_header::hc2e9e174e43cfe9d @ 0x100850290 size=1092 lines=214 =====
void *__fastcall codexmate_lib::core::relay::proxy_server::require_anthropic_inline_tools_header::hc2e9e174e43cfe9d(
        __int64 (__fastcall *a1)())
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(); // r13
  __int64 (__fastcall *v6)(); // rdx
  void *result; // rax
  unsigned __int64 v8; // r12
  __int64 (__fastcall **v9)(); // rdi
  signed __int64 v10; // rsi
  __int64 (__fastcall **v11)(); // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __m128i v15; // xmm1
  char *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // r14
  __int64 v20; // r15
  char *v21; // rax
  char *v22; // rax
  char v23; // dl
  _QWORD v24[2]; // [rsp+8h] [rbp-E8h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+18h] [rbp-D8h]
  char *v26; // [rsp+20h] [rbp-D0h]
  __int64 (__fastcall *v27)(); // [rsp+28h] [rbp-C8h]
  _QWORD v28[2]; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-B0h] BYREF
  char *v30; // [rsp+48h] [rbp-A8h]
  __int64 v31; // [rsp+50h] [rbp-A0h]
  __int64 (__fastcall *v32)(); // [rsp+58h] [rbp-98h] BYREF
  char *v33; // [rsp+60h] [rbp-90h]
  __int64 (__fastcall *v34)(); // [rsp+68h] [rbp-88h]
  __int64 v35; // [rsp+70h] [rbp-80h]
  __int64 v36; // [rsp+78h] [rbp-78h]
  __int64 (__fastcall *v37)(); // [rsp+80h] [rbp-70h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+88h] [rbp-68h]
  unsigned __int64 v39; // [rsp+90h] [rbp-60h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+98h] [rbp-58h]
  __int64 v41; // [rsp+A0h] [rbp-50h]
  __int64 (__fastcall *v42)(); // [rsp+A8h] [rbp-48h]
  __int64 v43; // [rsp+B0h] [rbp-40h]
  char v44; // [rsp+B8h] [rbp-38h]
  __int16 v45; // [rsp+C0h] [rbp-30h]

  http::header::name::HdrName::from_bytes::ha3c925ff81c76b25(
    &v37,
    "anthropic-beta/error/messagex-codex-turn-metadatasession_id",
    14,
    a1);
  if ( v37 == (__int64 (__fastcall *)())2 || ((unsigned __int8)v37 & 1) == 0 )
  {
    v4 = 1;
  }
  else
  {
    v2 = *((_QWORD *)a1 + 5);
    if ( v39 >= v2 )
      core::panicking::panic_bounds_check::h56740b1198b22635(v39, v2, &anon_ce2d7e055d4ebd72bdfc640dd1dd85ab_925);
    v3 = *((_QWORD *)a1 + 4);
    v4 = *(_QWORD *)(v3 + 104 * v39 + 32);
    v5 = *(__int64 (__fastcall **)())(v3 + 104 * v39 + 40);
    if ( v5 )
    {
      v6 = nullptr;
      result = &unk_1018CDAB7;
      do
      {
        if ( (unsigned __int8)(*((_BYTE *)v6 + v4) - 32) >= 0x5Fu && *((_BYTE *)v6 + v4) != 9 )
          return result;
        v6 = (__int64 (__fastcall *)())((char *)v6 + 1);
      }
      while ( v5 != v6 );
      goto LABEL_11;
    }
  }
  v5 = nullptr;
LABEL_11:
  v24[0] = v4;
  v24[1] = v5;
  v37 = nullptr;
  v38 = v5;
  v39 = v4;
  v40 = v5;
  v41 = 0;
  v42 = v5;
  v43 = 0x2C0000002CLL;
  v44 = 1;
  v45 = 1;
  do
  {
    v8 = v39;
    v9 = &v32;
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      &v32,
      &v39);
    if ( (_DWORD)v32 == 1 )
    {
      v10 = v33 - (char *)v37;
      v11 = (__int64 (__fastcall **)())((char *)v37 + v8);
      v37 = v34;
      v9 = v11;
      v12 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(v11, v10);
      if ( v13 != 23 )
        continue;
      goto LABEL_19;
    }
    if ( HIBYTE(v45) )
      break;
    HIBYTE(v45) = 1;
    if ( ((unsigned __int8)v45 | (v38 != v37)) != 1 )
      break;
    v9 = (__int64 (__fastcall **)())((char *)v37 + v39);
    v12 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(
            (char *)v37 + v39,
            (char *)v38 - (char *)v37);
    if ( v14 != 23 )
      continue;
LABEL_19:
    v15 = _mm_or_si128(
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v12 + 7)), (__m128i)xmmword_1018CAA80),
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_1018CAA90));
    if ( _mm_testz_si128(v15, v15) )
      return nullptr;
  }
  while ( HIBYTE(v45) != 1 );
  if ( v5 )
  {
    v37 = (__int64 (__fastcall *)())v24;
    v38 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
    v39 = (unsigned __int64)&off_101C02DC0;
    v40 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v29, &unk_101A39B59, &v37);
    v19 = v30;
    v20 = v31;
    if ( !v31 )
    {
      v20 = 0;
LABEL_35:
      bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v32, v19, v20, v16, v17, v18);
      LOBYTE(v36) = 0;
      v41 = v35;
      v40 = v34;
      *(_DWORD *)((char *)&v42 + 1) = *(_DWORD *)((char *)&v36 + 1);
      HIDWORD(v42) = HIDWORD(v36);
      v37 = a1;
      v38 = v32;
      v39 = (unsigned __int64)v33;
      LOBYTE(v42) = 0;
      http::header::name::HdrName::from_static::h5e41443daf2556e5(
        &v32,
        "anthropic-beta/error/messagex-codex-turn-metadatasession_id",
        14,
        &v37);
      if ( (_BYTE)v36 == 3 )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "size overflows MAX_SIZEstagestarturlelapsedMsfirstTokenokfirstTokenMstotalMs",
          23,
          &v37,
          &unk_101C03960,
          &off_101C02940);
      v28[1] = v36;
      v28[0] = v35;
      v27 = v34;
      v26 = v33;
      v25 = v32;
      if ( (_BYTE)v36 != 2 )
        (*((void (__fastcall **)(_QWORD *, char *, __int64 (__fastcall *)()))v25 + 4))(v28, v26, v27);
      if ( v29 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v29, 1);
      return nullptr;
    }
    v21 = &v30[v31];
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9);
    v20 = 23;
    v22 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
    if ( !v22 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23);
    v19 = v22;
    qmemcpy(v22, "inline-tools-2026-09-15", 23);
    v29 = 23;
    v30 = v22;
    v31 = 23;
    v21 = v22 + 23;
  }
  v16 = v19;
  while ( 2 )
  {
    v23 = *v16;
    if ( (unsigned __int8)*v16 > 0x1Fu )
    {
      if ( v23 == 127 )
        break;
      goto LABEL_28;
    }
    if ( v23 == 9 )
    {
LABEL_28:
      if ( ++v16 == v21 )
        goto LABEL_35;
      continue;
    }
    break;
  }
  if ( v29 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v29, 1);
  return &unk_1018CDAB7;
}

// ===== codexmate_lib::core::relay::proxy_server::is_anthropic_effort_rejection::h1ec9f3a3bf4eb467 @ 0x100843a20 size=752 lines=141 =====
__int64 __fastcall codexmate_lib::core::relay::proxy_server::is_anthropic_effort_rejection::h1ec9f3a3bf4eb467(
        __int16 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rax
  const void *v4; // r15
  size_t v5; // rbx
  __int64 v6; // r12
  void *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i si128; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __m128i v17; // xmm6
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __m128i v23; // xmm4
  _QWORD v25[2]; // [rsp+8h] [rbp-38h] BYREF
  size_t __n; // [rsp+18h] [rbp-28h]

  if ( a1 != 400 )
  {
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
  v3 = 0x10000;
  if ( a3 < 0x10000 )
    v3 = a3;
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v25, a2, v3);
  v4 = (const void *)v25[1];
  v5 = __n;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v6 = 0;
    goto LABEL_6;
  }
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25);
    v6 = 1;
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1);
    if ( !v7 )
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5);
    v8 = (__int64)v7;
    memcpy(v7, v4, v5);
    if ( v5 < 8 )
    {
      v9 = 0;
      do
      {
LABEL_32:
        *(_BYTE *)(v8 + v9) |= 32 * ((unsigned __int8)(*(_BYTE *)(v8 + v9) - 65) < 0x1Au);
        ++v9;
LABEL_31:
        ;
      }
      while ( v5 != v9 );
      goto LABEL_22;
    }
    if ( v5 < 0x20 )
    {
      v9 = 0;
      goto LABEL_19;
    }
    v9 = v5 & 0x7FFFFFFFFFFFFFE0LL;
    v10 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_10181FBB0);
    v12 = _mm_load_si128((const __m128i *)&xmmword_10181FBC0);
    v13 = _mm_load_si128((const __m128i *)&xmmword_10181FBD0);
    do
    {
      v14 = _mm_loadu_si128((const __m128i *)(v8 + v10));
      v15 = _mm_loadu_si128((const __m128i *)(v8 + v10 + 16));
      v16 = _mm_add_epi8(v14, si128);
      v17 = _mm_add_epi8(v15, si128);
      *(__m128i *)(v8 + v10) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v16, v12), v16), v13), v14);
      *(__m128i *)(v8 + v10 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v12), v17), v13), v15);
      v10 += 32;
    }
    while ( v9 != v10 );
    if ( v5 != v9 )
    {
      if ( (v5 & 0x18) == 0 )
        goto LABEL_32;
LABEL_19:
      v18 = v9;
      v9 = v5 & 0x7FFFFFFFFFFFFFF8LL;
      v19 = _mm_load_si128((const __m128i *)&xmmword_10181FBE0);
      v20 = _mm_load_si128((const __m128i *)&xmmword_10181FBF0);
      v21 = _mm_load_si128((const __m128i *)&xmmword_10181FC00);
      do
      {
        v22 = _mm_loadl_epi64((const __m128i *)(v8 + v18));
        v23 = _mm_add_epi8(v22, v19);
        *(_QWORD *)(v8 + v18) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v23, v20), v23), v21), v22).u64[0];
        v18 += 8;
      }
      while ( v9 != v18 );
      goto LABEL_31;
    }
  }
  else
  {
    v8 = 1;
  }
LABEL_22:
  if ( 2LL * v25[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v25[0], 1);
  LOBYTE(v4) = 1;
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "invalid effort levelinvalid output_config.effortunsupported effort leveleffort level is not supportedrouter",
                           0x14u,
                           (void *)v8)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "invalid output_config.effortunsupported effort leveleffort level is not supportedrouter",
                           0x1Cu,
                           (void *)v8)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "unsupported effort leveleffort level is not supportedrouter",
                           0x18u,
                           (void *)v8) )
  {
    LODWORD(v4) = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                    "effort level is not supportedrouter",
                    0x1Du,
                    (void *)v8);
  }
  if ( v5 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v5, 1);
  return (unsigned int)v4;
}

// ===== codexmate_lib::core::relay::proxy_server::load_attempt_credentials::hdb1fb412500d04f8 @ 0x1008422b0 size=664 lines=107 =====
char *__fastcall codexmate_lib::core::relay::proxy_server::load_attempt_credentials::hdb1fb412500d04f8(
        char *__dst,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rdi
  char v10; // r12
  __int64 v11; // r14
  __int64 v12; // r15
  _BYTE __src[256]; // [rsp+0h] [rbp-290h] BYREF
  _QWORD v15[12]; // [rsp+100h] [rbp-190h] BYREF
  _QWORD v16[12]; // [rsp+160h] [rbp-130h] BYREF
  __int64 v17[16]; // [rsp+1C0h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+240h] [rbp-50h] BYREF
  __int64 v19; // [rsp+248h] [rbp-48h]
  __int64 v20; // [rsp+250h] [rbp-40h]
  _QWORD *v21; // [rsp+258h] [rbp-38h]
  _BYTE v22[41]; // [rsp+267h] [rbp-29h] BYREF

  _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h1ad41f79e4b3c020(
    __src,
    a3);
  v6 = a2[2] + 16LL;
  codexmate_lib::core::relay::storage::lazy_load_api_key::h05e25860d688fee0(v16, v6, (__int64)__src);
  if ( LODWORD(v16[0]) == 11 )
  {
    if ( !LOBYTE(v16[1]) )
    {
LABEL_19:
      memcpy(__dst, __src, 0x100u);
      return __dst;
    }
    v8 = *a2;
    v21 = (_QWORD *)(*a2 + 16LL);
    v9 = *(_QWORD *)(v8 + 16);
    if ( !v9 )
      v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h8dd8979d8d8a8a3a(v21);
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v9);
    if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
    {
      v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, v6) ^ 1;
      if ( *(_BYTE *)(v8 + 24) )
        goto LABEL_7;
    }
    else
    {
      v10 = 0;
      if ( *(_BYTE *)(v8 + 24) )
      {
LABEL_7:
        if ( !v10
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, v6) )
        {
          *(_BYTE *)(v8 + 24) = 1;
        }
LABEL_18:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v21);
        goto LABEL_19;
      }
    }
    codexmate_lib::core::relay::storage::cache_loaded_api_key::he067dd4765fea3c3(v8 + 32, a3, (__int64)__src);
    if ( !v10
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8 + 32, a3) )
    {
      *(_BYTE *)(v8 + 24) = 1;
    }
    goto LABEL_18;
  }
  qmemcpy(v15, v16, sizeof(v15));
  v18 = 0;
  v19 = 1;
  v20 = 0;
  v17[2] = 1610612768;
  v17[0] = (__int64)&v18;
  v17[1] = (__int64)&anon_5fc5982723cbea77922f0a3a965b6f67_1729;
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h3df4a8fbdd73e5e8(
                          v15,
                          v17,
                          v7) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_5fc5982723cbea77922f0a3a965b6f67_1730,
      55,
      v22,
      &anon_5fc5982723cbea77922f0a3a965b6f67_1785,
      &anon_5fc5982723cbea77922f0a3a965b6f67_1732);
  v11 = v18;
  v12 = v19;
  codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::ha3e3e5cf32d4c0f7(
    v17,
    503,
    v19,
    v20,
    "relay.key_unavailableparam",
    21);
  qmemcpy(__dst + 8, v17, 0x80u);
  *(_QWORD *)__dst = 0x8000000000000000LL;
  if ( v11 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(v15);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h05f205f314f789e4(__src);
  return __dst;
}

// ===== codexmate_lib::core::relay::proxy_server::codex_client_session_id::hb1c1cabe5e1ef43a @ 0x100841ec0 size=506 lines=105 =====
size_t *__fastcall codexmate_lib::core::relay::proxy_server::codex_client_session_id::hb1c1cabe5e1ef43a(
        size_t *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  size_t v15; // r14
  __int64 v16; // r12
  const void *v17; // r15
  void *v18; // rax
  size_t v19; // r13
  __int64 v20; // [rsp+8h] [rbp-78h] BYREF
  __int64 v21; // [rsp+10h] [rbp-70h]
  unsigned __int64 v22; // [rsp+18h] [rbp-68h]
  __int64 v23; // [rsp+20h] [rbp-60h]
  __int64 v24; // [rsp+28h] [rbp-58h] BYREF
  __int64 v25; // [rsp+30h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-48h]
  __int64 v27; // [rsp+40h] [rbp-40h]
  __int64 v28; // [rsp+48h] [rbp-38h]
  __int64 v29; // [rsp+50h] [rbp-30h]

  http::header::name::HdrName::from_bytes::ha3c925ff81c76b25(&v24, "x-codex-turn-metadatasession_id", 21, a2);
  if ( v24 == 2 || (v24 & 1) == 0 )
    goto LABEL_10;
  v4 = *(_QWORD *)(a2 + 40);
  if ( v26 >= v4 )
    core::panicking::panic_bounds_check::h56740b1198b22635(v26, v4, &anon_ce2d7e055d4ebd72bdfc640dd1dd85ab_925);
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD *)(v5 + 104 * v26 + 32);
  v7 = *(_QWORD *)(v5 + 104 * v26 + 40);
  if ( v7 )
  {
    v8 = 0;
    while ( (unsigned __int8)(*(_BYTE *)(v6 + v8) - 32) < 0x5Fu || *(_BYTE *)(v6 + v8) == 9 )
    {
      if ( v7 == ++v8 )
        goto LABEL_8;
    }
    goto LABEL_10;
  }
LABEL_8:
  v24 = v6;
  v25 = v7;
  v26 = 0;
  v27 = 0;
  v28 = v6;
  v29 = v7;
  serde_json::de::from_trait::h99bf8e350a0ab991(&v20, &v24);
  if ( (_BYTE)v20 != 6 )
  {
    v27 = v23;
    v26 = v22;
    v25 = v21;
    v24 = v20;
    v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("session_id", 10, &v24);
    if ( !v11
      || *(_BYTE *)v11 != 3
      || (v12 = *(_QWORD *)(v11 + 16),
          v13 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(v12, *(_QWORD *)(v11 + 24)),
          v15 = v14,
          v13 == 0 || v14 == 0) )
    {
      *a1 = 0x8000000000000000LL;
LABEL_16:
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v24);
      return a1;
    }
    if ( v14 >= 0 )
    {
      v17 = (const void *)v13;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12);
      v16 = 1;
      v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1);
      if ( v18 )
      {
        v19 = (size_t)v18;
        memcpy(v18, v17, v15);
        *a1 = v15;
        a1[1] = v19;
        a1[2] = v15;
        goto LABEL_16;
      }
    }
    else
    {
      v16 = 0;
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v16, v15);
  }
  v9 = v21;
  core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::hcd642d706d35d819(v21);
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 40, 8);
LABEL_10:
  *a1 = 0x8000000000000000LL;
  return a1;
}

// ===== codexmate_lib::core::relay::proxy_server::read_upstream_body::_$u7b$$u7b$closure$u7d$$u7d$::hd589fc02dae242e4 @ 0x10083bf80 size=472 lines=388 =====
char __fastcall codexmate_lib::core::relay::proxy_server::read_upstream_body::_$u7b$$u7b$closure$u7d$$u7d$::hd589fc02dae242e4(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rax
  char v5; // al
  __int64 v6; // r15
  __int64 v7; // r14
  const void *v8; // r12
  _BYTE *v9; // rbx
  const void *v10; // rsi
  _BYTE *v11; // r14
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  _QWORD *v15; // r12
  __int64 v16; // rdx
  _QWORD *v17; // r14
  _QWORD *v18; // rsi
  size_t v19; // rax
  size_t v20; // rbx
  char result; // al
  _QWORD *v22; // rax
  __int64 (__fastcall **v23)(); // r15
  _QWORD *v24; // r15
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  size_t v27; // rcx
  bool v28; // cf
  size_t v29; // rax
  const void *v30; // rbx
  __int64 v31; // rax
  size_t v32; // rcx
  unsigned __int64 v33; // r13
  __int64 v34; // r14
  unsigned __int8 v35; // r14
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r14
  char v40; // bl
  __int64 v41; // r14
  const char *v42; // rcx
  __int64 v43; // r12
  const char *v44; // rsi
  __int64 v45; // rdx
  __int64 *v46; // rax
  _BYTE v47[88]; // [rsp+0h] [rbp-1D0h] BYREF
  _QWORD v48[3]; // [rsp+58h] [rbp-178h] BYREF
  __int64 v49; // [rsp+70h] [rbp-160h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-158h] BYREF
  size_t __n; // [rsp+80h] [rbp-150h]
  __int64 v52; // [rsp+88h] [rbp-148h]
  __int64 v53; // [rsp+90h] [rbp-140h]
  size_t v54; // [rsp+98h] [rbp-138h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-130h]
  _QWORD v56[10]; // [rsp+A8h] [rbp-128h] BYREF
  _QWORD __dst[17]; // [rsp+F8h] [rbp-D8h] BYREF
  __int64 *v58; // [rsp+180h] [rbp-50h]
  __int64 v59; // [rsp+188h] [rbp-48h]
  _BYTE *v60; // [rsp+190h] [rbp-40h]
  const void *v61; // [rsp+198h] [rbp-38h]
  __int64 v62; // [rsp+1A0h] [rbp-30h]

  v4 = *(unsigned __int8 *)(a2 + 489);
  v62 = a2;
  v58 = a1;
  switch ( v4 )
  {
    case 0LL:
      v5 = *(_BYTE *)(a2 + 488);
      *(_BYTE *)(a2 + 490) = v5;
      v6 = a2;
      v7 = 0x20000000;
      if ( v5 )
        v7 = 0x100000;
      v8 = (const void *)(a2 + 136);
      memcpy((void *)(a2 + 136), (const void *)a2, 0x88u);
      *(_QWORD *)(a2 + 272) = v7;
      v60 = (_BYTE *)(a2 + 480);
      *(_BYTE *)(a2 + 480) = 0;
LABEL_7:
      *(_WORD *)(v6 + 481) = 1;
      v9 = (_BYTE *)(v6 + 280);
      v61 = v8;
      v10 = v8;
      memcpy((void *)(v6 + 280), v8, 0x88u);
      *(_QWORD *)(v6 + 416) = v7;
      v11 = (_BYTE *)v6;
      if ( (reqwest::async_impl::response::Response::content_length::he880cc08c091acdb(v6 + 280) & 1) != 0 )
      {
        v14 = 2;
        if ( v12 > *(_QWORD *)(v6 + 416) )
        {
          if ( *(_BYTE *)(v6 + 481) )
            goto LABEL_48;
          goto LABEL_49;
        }
      }
      *(_QWORD *)(v6 + 424) = 1;
      *(_QWORD *)(v6 + 432) = 0;
      *(_QWORD *)(v6 + 440) = 0;
      *(_QWORD *)(v6 + 448) = 1;
      *(_BYTE *)(v6 + 482) = 1;
      *(_BYTE *)(v6 + 481) = 0;
      v15 = (_QWORD *)v6;
      memcpy(__dst, (const void *)(v6 + 280), sizeof(__dst));
      *(_QWORD *)(v6 + 456) = reqwest::async_impl::response::Response::bytes_stream::h4afb02b64d51c5f9(__dst);
      *(_QWORD *)(v6 + 464) = v16;
      break;
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101C02AC0);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101C02AC0);
    case 3LL:
      v60 = (_BYTE *)(a2 + 480);
      v8 = (const void *)(a2 + 136);
      switch ( *(_BYTE *)(a2 + 480) )
      {
        case 0:
          v6 = a2;
          v7 = *(_QWORD *)(a2 + 272);
          goto LABEL_7;
        case 1:
          v61 = (const void *)(a2 + 136);
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101C02928);
        case 2:
          v61 = (const void *)(a2 + 136);
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101C02928);
        case 3:
          v17 = *(_QWORD **)(a2 + 472);
          goto LABEL_17;
      }
  }
LABEL_33:
  v17 = v15 + 57;
  v15[59] = v15 + 57;
  v8 = v61;
LABEL_17:
  v18 = v17;
  _$LT$http_body_util..combinators..map_err..MapErr$LT$B$C$F$GT$$u20$as$u20$http_body..Body$GT$::poll_frame::hffa08be62d845855(
    &v54,
    v17,
    a3);
  v61 = v8;
  v19 = v54;
  if ( v54 == 6 )
  {
LABEL_22:
    *v60 = 3;
    *v58 = 7;
    result = 3;
    goto LABEL_67;
  }
  while ( v19 != 5 )
  {
    v20 = v55;
    if ( v19 == 4 )
      goto LABEL_42;
    if ( v19 == 3 )
    {
      __dst[4] = v56[2];
      __dst[3] = v56[1];
      __dst[2] = v56[0];
      __n = v56[1];
      v52 = v56[2];
      if ( !v55 )
      {
        v20 = v56[0];
LABEL_42:
        v54 = v20;
        v24 = (_QWORD *)v62;
        v35 = reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v54);
        core::ptr::drop_in_place$LT$reqwest..error..Inner$GT$::h7d3b717d92101315(v20);
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 144, 8);
        v14 = v35;
LABEL_43:
        v9 = (_BYTE *)v24[57];
        v36 = v24[58];
        if ( *(_QWORD *)v36 )
          (*(void (__fastcall **)(_QWORD))v36)(v24[57]);
        v10 = *(const void **)(v36 + 8);
        if ( v10 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v10, *(_QWORD *)(v36 + 16));
        v11 = (_BYTE *)v62;
        _$LT$bytes..bytes_mut..BytesMut$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5c29f993bb64e47e(v62 + 424);
        v11[482] = 0;
        if ( v11[481] )
LABEL_48:
          core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h0240dfd7ed22fc0e(v11 + 280);
LABEL_49:
        v11[481] = 0;
        v23 = nullptr;
        goto LABEL_50;
      }
      __dst[3] = v52;
      __dst[2] = __n;
      __dst[0] = v55;
      __dst[1] = v56[0];
      v24 = (_QWORD *)v62;
      v25 = *(_QWORD *)(v62 + 416);
      v26 = *(_QWORD *)(v62 + 432);
      v27 = 0;
      v28 = v25 < v26;
      v29 = v25 - v26;
      if ( !v28 )
        v27 = v29;
      if ( __n > v27 )
      {
        v14 = 2;
        (*(void (__fastcall **)(_QWORD *, _QWORD, size_t))(v55 + 32))(&__dst[3], __dst[1], __n);
        goto LABEL_43;
      }
      v30 = (const void *)__dst[1];
      if ( __n > *(_QWORD *)(v62 + 440) - v26 )
      {
        bytes::bytes_mut::BytesMut::reserve_inner::h34e3332560d59430(v62 + 424, __n, 1);
        v26 = v24[54];
      }
      memcpy((void *)(v24[53] + v26), v30, __n);
      v31 = v24[54];
      v32 = v24[55] - v31;
      if ( __n > v32 )
      {
        v54 = __n;
        v55 = v32;
        bytes::panic_advance::hdc6adbdb59af55b1(&v54);
      }
      v24[54] = __n + v31;
      v15 = v24;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(__dst[0] + 32LL))(&__dst[3], __dst[1], __dst[2]);
      goto LABEL_33;
    }
    qmemcpy(&__dst[2], v56, 0x50u);
    __dst[0] = v19;
    __dst[1] = v55;
    core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hbc21c0b42cf04151(__dst);
    v18 = v17;
    _$LT$http_body_util..combinators..map_err..MapErr$LT$B$C$F$GT$$u20$as$u20$http_body..Body$GT$::poll_frame::hffa08be62d845855(
      &v54,
      v17,
      a3);
    v19 = v54;
    if ( v54 == 6 )
      goto LABEL_22;
  }
  v22 = (_QWORD *)v62;
  *(_BYTE *)(v62 + 482) = 0;
  v14 = v22[53];
  v13 = v22[54];
  a3 = v22[56];
  if ( (a3 & 1) != 0 )
  {
    v33 = a3 >> 5;
    v48[0] = v33 + v22[55];
    v48[1] = v14 - v33;
    v48[2] = v33 + v13;
    v18 = v48;
    _$LT$bytes..bytes..Bytes$u20$as$u20$core..convert..From$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$::from::hb3f89e5123ac12e3(
      &v54,
      v48);
    v50 = v33;
    if ( v56[0] < v33 )
    {
      v49 = v56[0];
      __dst[0] = &v50;
      __dst[1] = core::fmt::num::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$usize$GT$::fmt::h28a024d342384352;
      __dst[2] = &v49;
      __dst[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$usize$GT$::fmt::h28a024d342384352;
      core::panicking::panic_fmt::h3a793735daf6e4ec(&unk_101A3B292, __dst, &off_101C03CB0);
    }
    v59 = v56[0] - v33;
    v23 = (__int64 (__fastcall **)())v54;
    v14 = v55 + v33;
    a3 = v56[1];
    v22 = (_QWORD *)v62;
  }
  else
  {
    v59 = v22[54];
    v23 = &bytes::bytes_mut::SHARED_VTABLE::h902478986e39255f;
  }
  v34 = v22[57];
  v9 = (_BYTE *)v22[58];
  if ( *(_QWORD *)v9 )
    (*(void (__fastcall **)(__int64, _QWORD *, unsigned __int64, __int64))v9)(v34, v18, v12, v13);
  v10 = *((const void **)v9 + 1);
  if ( v10 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v10, *((_QWORD *)v9 + 2));
  v11 = (_BYTE *)v62;
  *(_WORD *)(v62 + 481) = 0;
LABEL_50:
  *v60 = 1;
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..http_client..read_body..$u7b$$u7b$closure$u7d$$u7d$$GT$::h9b1dfd8e660b3c15(
    v61,
    v10,
    v12,
    v13);
  if ( !v23 )
  {
    v40 = v11[490];
    v54 = 0;
    v55 = 1;
    v56[0] = 0;
    __dst[2] = 1610612768;
    __dst[0] = &v54;
    __dst[1] = &anon_5fc5982723cbea77922f0a3a965b6f67_1729;
    v41 = (unsigned __int8)v14;
    v42 = (const char *)&anon_74e223d3d0fe38e0d3241a6bd44aa3e1_788;
    if ( (v14 & 1) != 0 )
      v42 = "read upstream body timed out";
    v43 = v14 & 1;
    v44 = (const char *)&anon_74e223d3d0fe38e0d3241a6bd44aa3e1_787;
    if ( v41 != 2 )
      v44 = v42;
    v45 = 40;
    if ( v41 != 2 )
      v45 = 3 * v43 + 25;
    if ( (unsigned __int8)_$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$::write_str::h432a61b2c1499beb(
                            __dst,
                            v44,
                            v45,
                            v42) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_5fc5982723cbea77922f0a3a965b6f67_1730,
        55,
        v48,
        &anon_5fc5982723cbea77922f0a3a965b6f67_1785,
        &anon_5fc5982723cbea77922f0a3a965b6f67_1732);
    v60 = (_BYTE *)v54;
    v61 = (const void *)v55;
    v53 = v56[0];
    codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::ha3e3e5cf32d4c0f7(
      __dst,
      502,
      v55,
      v56[0],
      "proxy.upstream_body",
      19);
    v14 = __dst[1];
    if ( (_DWORD)v41 == 2 || (v40 & 1) != 0 )
    {
      v23 = (__int64 (__fastcall **)())__dst[0];
      v59 = __dst[2];
      a3 = __dst[3];
      qmemcpy(v47, &__dst[4], sizeof(v47));
      v9 = (_BYTE *)__dst[15];
      v39 = 5;
      v38 = (__int64)v61;
      if ( !v60 )
      {
LABEL_65:
        v37 = v53;
        goto LABEL_66;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v60, 1);
    }
    else
    {
      v39 = __dst[0];
      v23 = (__int64 (__fastcall **)())__dst[1];
      v14 = __dst[2];
      v59 = __dst[3];
      a3 = __dst[4];
      qmemcpy(v47, &__dst[5], sizeof(v47));
      v9 = v60;
    }
    v38 = (__int64)v61;
    goto LABEL_65;
  }
  v39 = 6;
LABEL_66:
  v46 = v58;
  *v58 = v39;
  v46[1] = (__int64)v23;
  v46[2] = v14;
  v46[3] = v59;
  v46[4] = a3;
  qmemcpy(v46 + 5, v47, 0x58u);
  v46[16] = (__int64)v9;
  v46[17] = v38;
  v46[18] = v37;
  result = 1;
LABEL_67:
  *(_BYTE *)(v62 + 489) = result;
  return result;
}

// ===== codexmate_lib::core::relay::proxy_server::sanitize_body_for_native_responses_upstream::hd82e975e405848f8 @ 0x100853f40 size=326 lines=47 =====
__int64 __fastcall codexmate_lib::core::relay::proxy_server::sanitize_body_for_native_responses_upstream::hd82e975e405848f8(
        __int64 a1,
        __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v3; // r15
  __int64 v4; // rdx
  _QWORD v6[12]; // [rsp+8h] [rbp-98h] BYREF
  _QWORD v7[2]; // [rsp+68h] [rbp-38h] BYREF
  __int64 v8; // [rsp+78h] [rbp-28h] BYREF
  _BYTE v9[25]; // [rsp+87h] [rbp-19h] BYREF

  v2 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  "storeprevious_response_idoptional_beta_rejectedthinking_signature_rejectedeffort_rejectedcodex responses translated stream failedtimeouttransport_errorhttp_errorerror_body_readAnthropic search failedcontinuation_error",
                  5,
                  a2);
  if ( v2 && *v2 == 1 && !v2[1] )
    v3 = codexmate_lib::core::relay::response_item_id_compat::remove_unusable_reasoning_items_from_store_false_request::h72d67b411ce5be04(a2);
  else
    v3 = 0;
  v8 = codexmate_lib::core::relay::response_item_id_compat::normalize_legacy_call_item_ids_in_request::hd956480848e077c1(a2);
  if ( v8 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
  {
    v7[0] = &v8;
    v7[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    v6[6] = 3;
    v6[7] = "codexmate_lib::core::relay::proxy_serverrelaybuild error body failedproxy.upstreamcodex_routerelay pass-through stream failedbuild streaming body failedactiveproxy.upstream_body";
    v6[8] = 40;
    v6[10] = &unk_101A3A0E4;
    v6[11] = v7;
    v6[0] = 0;
    v6[1] = "codexmate_lib::core::relay::proxy_serverrelaybuild error body failedproxy.upstreamcodex_routerelay pass-through stream failedbuild streaming body failedactiveproxy.upstream_body";
    v6[2] = 40;
    v6[3] = 0;
    v6[4] = "src/core/relay/proxy_server.rs";
    v6[5] = 30;
    v6[9] = 0xA9500000001LL;
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v9, v6, v4);
  }
  if ( (unsigned __int8)codexmate_lib::core::relay::native_responses_compat::rejects_hosted_web_search::hf1da2177e25802f2(
                          a1,
                          *(_QWORD *)(a1 + 104),
                          *(_QWORD *)(a1 + 112),
                          *(unsigned __int8 *)(a1 + 254)) )
    codexmate_lib::core::relay::native_responses_compat::strip_hosted_web_search_tools::he8c81f3bbf9dfdf6(a2);
  return v3;
}

