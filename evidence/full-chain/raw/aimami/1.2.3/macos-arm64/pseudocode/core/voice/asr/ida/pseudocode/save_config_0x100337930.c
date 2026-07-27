// __ZN13codexmate_lib4core5voice3asr11save_config @ 0x100337930 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::asr::save_config::h93fccfa62f68a897(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  size_t v10; // r13
  __int64 v11; // rbx
  const void *v12; // r15
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  _QWORD *v22; // rsi
  __int64 v23; // rbx
  _QWORD *v24; // r15
  _BYTE *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r13
  void *v28; // rax
  __int64 v29; // rsi
  __int64 v31; // r14
  _QWORD *v32; // rsi
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rdx
  _QWORD v37[3]; // [rsp+8h] [rbp-238h] BYREF
  __int64 v38; // [rsp+20h] [rbp-220h]
  __int64 v39; // [rsp+28h] [rbp-218h]
  __int64 v40; // [rsp+38h] [rbp-208h]
  __int64 v41; // [rsp+40h] [rbp-200h]
  __int64 v42; // [rsp+48h] [rbp-1F8h]
  __int64 v43; // [rsp+50h] [rbp-1F0h]
  __int64 v44; // [rsp+58h] [rbp-1E8h]
  __int64 v45; // [rsp+60h] [rbp-1E0h]
  _QWORD v46[2]; // [rsp+68h] [rbp-1D8h] BYREF
  __int64 v47; // [rsp+78h] [rbp-1C8h]
  _QWORD *v48; // [rsp+80h] [rbp-1C0h] BYREF
  _QWORD *v49; // [rsp+88h] [rbp-1B8h]
  __int64 v50; // [rsp+90h] [rbp-1B0h]
  _QWORD *v51; // [rsp+98h] [rbp-1A8h] BYREF
  _QWORD *v52; // [rsp+A0h] [rbp-1A0h]
  __int64 v53; // [rsp+A8h] [rbp-198h]
  __int64 v54; // [rsp+B0h] [rbp-190h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-188h]
  __int64 v56; // [rsp+C0h] [rbp-180h]
  _QWORD *v57; // [rsp+C8h] [rbp-178h] BYREF
  _QWORD *v58; // [rsp+D0h] [rbp-170h]
  __int64 v59; // [rsp+D8h] [rbp-168h]
  __int64 v60; // [rsp+E0h] [rbp-160h]
  __int64 v61; // [rsp+E8h] [rbp-158h]
  __int64 v62; // [rsp+F0h] [rbp-150h]
  _QWORD v63[12]; // [rsp+F8h] [rbp-148h] BYREF
  __int64 v64; // [rsp+158h] [rbp-E8h] BYREF
  _QWORD *v65; // [rsp+160h] [rbp-E0h]
  __int64 v66; // [rsp+168h] [rbp-D8h]
  __int64 v67; // [rsp+170h] [rbp-D0h]
  __int64 v68; // [rsp+178h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+180h] [rbp-C0h]
  __int64 v70; // [rsp+188h] [rbp-B8h]
  __int64 v71; // [rsp+190h] [rbp-B0h] BYREF
  __int64 v72; // [rsp+198h] [rbp-A8h]
  __int64 v73; // [rsp+1A0h] [rbp-A0h]
  size_t v74; // [rsp+1A8h] [rbp-98h] BYREF
  __int64 v75; // [rsp+1B0h] [rbp-90h]
  size_t v76; // [rsp+1B8h] [rbp-88h]
  _QWORD *v77; // [rsp+1C0h] [rbp-80h] BYREF
  _QWORD *v78; // [rsp+1C8h] [rbp-78h]
  __int64 v79; // [rsp+1D0h] [rbp-70h]
  __int64 v80; // [rsp+1D8h] [rbp-68h]
  __int64 v81; // [rsp+1E0h] [rbp-60h]
  __int64 v82; // [rsp+1E8h] [rbp-58h]
  _QWORD *v83; // [rsp+1F0h] [rbp-50h]
  __int64 v84; // [rsp+1F8h] [rbp-48h]
  __int64 v85; // [rsp+200h] [rbp-40h]
  __int64 v86; // [rsp+208h] [rbp-38h]
  _QWORD *v87; // [rsp+210h] [rbp-30h]

  v2 = a1; /*0x100337944*/
  v3 = a2[1]; /*0x100337947*/
  v87 = a2; /*0x10033794b*/
  v4 = a2[2]; /*0x10033794f*/
  v84 = v3; /*0x10033795a*/
  codexmate_lib::core::voice::asr::normalize_provider::h644de565ae8d1850(&v64, v3, v4); /*0x100337961*/
  v5 = v65; /*0x100337966*/
  if ( v66 != 11 || *v65 ^ 0x657053656C707061LL | *(_QWORD *)((char *)v65 + 3) ^ 0x686365657053656CLL ) /*0x100337995*/
  {
    v86 = v66; /*0x1003379a4*/
    codexmate_lib::core::voice::asr::provider_defaults::h00df75381d488375(v37, v65); /*0x1003379a8*/
    v83 = v5; /*0x1003379ad*/
    v7 = v87[5]; /*0x1003379b9*/
    v67 = v87[4]; /*0x1003379bd*/
    v6 = v67; /*0x1003379b5*/
    v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v67, v7); /*0x1003379c4*/
    v10 = v9; /*0x1003379c9*/
    if ( v9 < 0 ) /*0x1003379cf*/
    {
      v11 = 0; /*0x1003379d1*/
      goto LABEL_5; /*0x1003379d1*/
    }
    v12 = (const void *)v8; /*0x1003379e3*/
    v13 = v2; /*0x1003379e6*/
    if ( v9 ) /*0x1003379ec*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v7); /*0x1003379f2*/
      v11 = 1; /*0x1003379f7*/
      v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x100337a04*/
      if ( !v14 ) /*0x100337a0c*/
LABEL_5:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10); /*0x1003379d3*/
      v15 = v14; /*0x100337a0e*/
    }
    else
    {
      v15 = 1; /*0x100337aaa*/
    }
    memcpy((void *)v15, v12, v10); /*0x100337ab9*/
    v74 = v10; /*0x100337abe*/
    v75 = v15; /*0x100337ac5*/
    v76 = v10; /*0x100337acc*/
    v21 = v87; /*0x100337ad3*/
    v47 = v41; /*0x100337af0*/
    codexmate_lib::core::voice::asr::fallback_trimmed::heb319e71bf1d790a(&v71, v87 + 6, v41, v42); /*0x100337af7*/
    v22 = v21 + 9; /*0x100337afc*/
    v23 = v44; /*0x100337b15*/
    v24 = v83; /*0x100337b18*/
    codexmate_lib::core::voice::asr::fallback_trimmed::heb319e71bf1d790a(&v68, v22, v44, v45); /*0x100337b1c*/
    v2 = v13; /*0x100337b21*/
    if ( !v10 || !v73 || !v70 ) /*0x100337b43*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v68, v22); /*0x100337c89*/
      v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 1); /*0x100337c98*/
      if ( !v28 ) /*0x100337ca0*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 48); /*0x1003381fd*/
      qmemcpy(v28, "ASR config requires API Key, model, and Base URL", 48); /*0x100337cf6*/
      v13[1] = 9; /*0x100337cf9*/
      v13[2] = 48; /*0x100337d02*/
      v13[3] = v28; /*0x100337d0b*/
      v13[4] = 48; /*0x100337d10*/
      *v13 = 0x8000000000000000LL; /*0x100337d23*/
LABEL_29:
      if ( v68 ) /*0x100337d31*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x100337d3f*/
      if ( v71 ) /*0x100337d4e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v71, 1); /*0x100337d5c*/
      if ( v74 ) /*0x100337d6b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v74, 1); /*0x100337d79*/
      if ( v37[0] ) /*0x100337d88*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37[1], v37[0], 1); /*0x100337d96*/
      if ( v38 ) /*0x100337da5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v38, 1); /*0x100337db3*/
      if ( v40 ) /*0x100337dc2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v40, 1); /*0x100337dd0*/
      if ( v43 ) /*0x100337ddf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v43, 1); /*0x100337de9*/
      if ( v64 ) /*0x100337df8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v64, 1); /*0x100337e02*/
      v29 = *v87; /*0x100337e0b*/
      if ( *v87 ) /*0x100337e0b*/
LABEL_46:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v29, 1); /*0x100337e13*/
LABEL_47:
      v19 = v87[3]; /*0x100337e21*/
      if ( v19 ) /*0x100337e2c*/
      {
        v20 = v67; /*0x100337e33*/
        goto LABEL_49; /*0x100337e33*/
      }
      return v2; /*0x100337e2c*/
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v57, &v74); /*0x100337b5a*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v77, &v71); /*0x100337b6a*/
    v24 = v83; /*0x100337b80*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v63, &v68); /*0x100337b84*/
    v50 = v59; /*0x100337b90*/
    v49 = v58; /*0x100337ba5*/
    v48 = v57; /*0x100337bac*/
    v51 = v77; /*0x100337bbb*/
    v52 = v78; /*0x100337bc2*/
    v53 = v79; /*0x100337bcd*/
    v54 = v63[0]; /*0x100337be2*/
    v55 = v63[1]; /*0x100337be9*/
    v56 = v63[2]; /*0x100337bf7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v63, &v68); /*0x100337bfe*/
    v25 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100337c0d*/
    if ( !v25 ) /*0x100337c15*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x10033820e*/
    v63[0] = 128; /*0x100337c1b*/
    v63[1] = v25; /*0x100337c26*/
    v57 = v63; /*0x100337c2d*/
    *v25 = 123; /*0x100337c34*/
    v63[2] = 1; /*0x100337c37*/
    LOWORD(v77) = 256; /*0x100337c42*/
    v78 = &v57; /*0x100337c48*/
    v26 = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100337c63*/
            &v77,
            &anon_b0ee9adff4519c22b647af231a5a39fa_444,
            6,
            &v48);
    v27 = v86; /*0x100337c68*/
    if ( v26 ) /*0x100337c6f*/
      goto LABEL_52; /*0x100337c6f*/
    if ( (_BYTE)v77 ) /*0x100337c79*/
      goto LABEL_26; /*0x100337c79*/
    v26 = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100337e6b*/
            &v77,
            &anon_b0ee9adff4519c22b647af231a5a39fa_414,
            5,
            &v51);
    if ( !v26 ) /*0x100337e73*/
    {
      if ( (_BYTE)v77 ) /*0x100337f19*/
      {
LABEL_26:
        v26 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100337c7f*/
        goto LABEL_52; /*0x100337c84*/
      }
      v26 = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100337f36*/
              &v77,
              &anon_b0ee9adff4519c22b647af231a5a39fa_412,
              7,
              &v54);
      if ( !v26 ) /*0x100337f3e*/
      {
        if ( ((unsigned __int8)v77 & 1) == 0 && BYTE1(v77) ) /*0x100337f4e*/
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100337f63*/
            *v78,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
        v31 = v63[1]; /*0x100337f6f*/
        v85 = v63[0]; /*0x100337f80*/
        if ( v63[0] != 0x8000000000000000LL ) /*0x100337f87*/
        {
          v32 = v24; /*0x100337f8d*/
          v33 = v63[2]; /*0x100337f90*/
          codexmate_lib::core::voice::asr::keyring_entry::hdb923e0ef25b9aca(v63, v32, v27); /*0x100337fa1*/
          v34 = v63[0]; /*0x100337fa6*/
          v35 = v63[1]; /*0x100337fad*/
          v36 = v63[2]; /*0x100337fb4*/
          if ( v63[0] == 11 ) /*0x100337fbf*/
          {
            v46[0] = v63[1]; /*0x100337fc5*/
            v86 = v63[2]; /*0x100337fcc*/
            v46[1] = v63[2]; /*0x100337fd0*/
            keyring::Entry::set_password::hc32136d3c2593a9f(&v57, v46, v31, v33); /*0x100337feb*/
            if ( v57 == (_QWORD *)0x8000000000000007LL ) /*0x100338005*/
            {
              core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..ops..function..Fn$LT$$LP$tauri..ipc..InvokeResponseBody$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$$LP$$RP$$C$tauri..error..Error$GT$$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h47b49225717c6ad8( /*0x100338012*/
                v35,
                v86);
              v63[2] = v66; /*0x10033801e*/
              v63[1] = v65; /*0x100338033*/
              v63[0] = v64; /*0x10033803a*/
              v63[3] = v74; /*0x10033804f*/
              v63[4] = v75; /*0x100338056*/
              v63[5] = v76; /*0x100338064*/
              v63[6] = v71; /*0x100338079*/
              v63[7] = v72; /*0x100338080*/
              v63[8] = v73; /*0x10033808e*/
              v63[11] = v70; /*0x10033809c*/
              v63[10] = v69; /*0x1003380b1*/
              v63[9] = v68; /*0x1003380b8*/
              qmemcpy(v2, v63, 0x60u); /*0x1003380ce*/
              *((_BYTE *)v2 + 96) = 1; /*0x1003380d1*/
              if ( v85 ) /*0x1003380de*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v85, 1); /*0x1003380e8*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceVocabularyAppPayload$GT$::h7c19e114632ac5af(&v48); /*0x1003380f4*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..voice..asr..AsrConfig$GT$::h57a58940d943b806(v37); /*0x100338100*/
              v29 = *v87; /*0x100338109*/
              if ( *v87 ) /*0x100338109*/
                goto LABEL_46; /*0x10033810f*/
              goto LABEL_47; /*0x10033810f*/
            }
            v82 = v62; /*0x100338157*/
            v81 = v61; /*0x100338162*/
            v80 = v60; /*0x10033816d*/
            v79 = v59; /*0x100338178*/
            v78 = v58; /*0x10033818a*/
            v77 = v57; /*0x10033818e*/
            codexmate_lib::core::voice::asr::save_config::_$u7b$$u7b$closure$u7d$$u7d$::hf9a92fc144d8b44f(v63, &v77); /*0x10033819d*/
            qmemcpy(v2 + 1, v63, 0x60u); /*0x1003381b3*/
            *v2 = 0x8000000000000000LL; /*0x1003381c0*/
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..ops..function..Fn$LT$$LP$tauri..ipc..InvokeResponseBody$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$$LP$$RP$$C$tauri..error..Error$GT$$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h47b49225717c6ad8( /*0x1003381cb*/
              v35,
              v86);
          }
          else
          {
            qmemcpy(v2 + 4, &v63[3], 0x48u); /*0x10033812b*/
            v2[1] = v34; /*0x10033812e*/
            v2[2] = v35; /*0x100338133*/
            v2[3] = v36; /*0x100338138*/
            *v2 = 0x8000000000000000LL; /*0x100338147*/
          }
          v24 = v83; /*0x1003381d7*/
          if ( v85 ) /*0x1003381db*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v85, 1); /*0x1003381e9*/
          goto LABEL_55; /*0x1003381ee*/
        }
LABEL_54:
        v2[1] = 3; /*0x100337e99*/
        v2[2] = v31; /*0x100337ea2*/
        *v2 = 0x8000000000000000LL; /*0x100337eb1*/
LABEL_55:
        if ( v48 ) /*0x100337ebf*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x100337ecd*/
        if ( v51 ) /*0x100337edc*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x100337eea*/
        if ( v54 ) /*0x100337ef9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v54, 1); /*0x100337f0b*/
        goto LABEL_29; /*0x100337f10*/
      }
    }
LABEL_52:
    v31 = v26; /*0x100337e79*/
    if ( v63[0] ) /*0x100337e86*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63[1], v63[0], 1); /*0x100337e94*/
    goto LABEL_54; /*0x100337e94*/
  }
  codexmate_lib::core::voice::asr::load_saved_config::hf8730c4a0b983581( /*0x100337a25*/
    a1,
    &anon_b0ee9adff4519c22b647af231a5a39fa_573,
    11);
  if ( v64 ) /*0x100337a34*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v64, 1); /*0x100337a3e*/
  if ( *v87 ) /*0x100337a47*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, *v87, 1); /*0x100337a58*/
  v16 = v87; /*0x100337a5d*/
  v17 = v87[3]; /*0x100337a61*/
  if ( v17 ) /*0x100337a68*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87[4], v17, 1); /*0x100337a73*/
  v18 = v16[6]; /*0x100337a78*/
  if ( v18 ) /*0x100337a7f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16[7], v18, 1); /*0x100337a8a*/
  v19 = v16[9]; /*0x100337a8f*/
  if ( v19 ) /*0x100337a96*/
  {
    v20 = v16[10]; /*0x100337a9c*/
LABEL_49:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x100337e3a*/
  }
  return v2; /*0x100337e42*/
}