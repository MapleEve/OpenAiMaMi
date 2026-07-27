// __ZN13codexmate_lib4core5voice3asr17load_saved_config @ 0x1003387d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::asr::load_saved_config::hf8730c4a0b983581(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // r15
  signed __int64 v6; // rax
  __int64 v7; // rdx
  signed __int64 v8; // r12
  __int64 v9; // rdi
  char v10; // r15
  void (__fastcall *v11)(__int64); // rax
  __int64 v12; // rax
  const void *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  const void *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  signed __int64 v23; // rsi
  __int64 v24; // r15
  signed __int64 v25; // r13
  void *v26; // rax
  signed __int64 v27; // rdx
  __int64 v28; // r13
  signed __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rdi
  const void *v32; // r15
  _QWORD *v33; // r13
  signed __int64 v34; // rdi
  signed __int64 v35; // rsi
  __int64 v36; // r8
  bool v37; // al
  signed __int64 v38; // rcx
  _QWORD *v39; // rdx
  signed __int64 v40; // rcx
  __int64 v41; // rsi
  _QWORD v42[3]; // [rsp+0h] [rbp-1E0h] BYREF
  _QWORD v43[2]; // [rsp+18h] [rbp-1C8h] BYREF
  _QWORD v44[2]; // [rsp+28h] [rbp-1B8h] BYREF
  signed __int64 v45[2]; // [rsp+38h] [rbp-1A8h] BYREF
  __int64 v46; // [rsp+48h] [rbp-198h]
  void *__src; // [rsp+50h] [rbp-190h]
  signed __int64 v48; // [rsp+58h] [rbp-188h] BYREF
  __int64 v49; // [rsp+60h] [rbp-180h]
  signed __int64 v50; // [rsp+68h] [rbp-178h]
  _QWORD v51[9]; // [rsp+70h] [rbp-170h] BYREF
  signed __int64 v52; // [rsp+B8h] [rbp-128h]
  signed __int64 v53; // [rsp+C0h] [rbp-120h]
  __int64 v54; // [rsp+C8h] [rbp-118h]
  __int64 v55; // [rsp+D0h] [rbp-110h]
  __int64 v56; // [rsp+D8h] [rbp-108h]
  __int64 v57; // [rsp+E0h] [rbp-100h] BYREF
  __int64 v58; // [rsp+E8h] [rbp-F8h]
  __int64 v59; // [rsp+F8h] [rbp-E8h]
  _QWORD *v60; // [rsp+100h] [rbp-E0h]
  __int64 v61; // [rsp+110h] [rbp-D0h]
  const void *v62; // [rsp+118h] [rbp-C8h]
  signed __int64 v63; // [rsp+120h] [rbp-C0h]
  __int64 v64; // [rsp+128h] [rbp-B8h]
  _QWORD *v65; // [rsp+130h] [rbp-B0h]
  signed __int64 v66; // [rsp+138h] [rbp-A8h]
  signed __int64 v67; // [rsp+140h] [rbp-A0h]
  signed __int64 v68; // [rsp+148h] [rbp-98h]
  signed __int64 v69; // [rsp+150h] [rbp-90h] BYREF
  __int64 v70; // [rsp+158h] [rbp-88h]
  signed __int64 v71; // [rsp+160h] [rbp-80h]
  __int64 v72; // [rsp+168h] [rbp-78h]
  signed __int64 v73; // [rsp+170h] [rbp-70h]
  __int64 v74; // [rsp+178h] [rbp-68h]
  __int64 v75; // [rsp+180h] [rbp-60h] BYREF
  _QWORD *v76; // [rsp+188h] [rbp-58h]
  __int64 v77; // [rsp+190h] [rbp-50h]
  __int64 v78; // [rsp+198h] [rbp-48h]
  signed __int64 v79; // [rsp+1A0h] [rbp-40h]
  __int64 v80; // [rsp+1A8h] [rbp-38h]
  __int64 v81; // [rsp+1B0h] [rbp-30h]

  codexmate_lib::core::voice::asr::normalize_provider::h644de565ae8d1850(&v75, a2, a3); /*0x1003387eb*/
  v4 = v76; /*0x1003387f0*/
  v5 = v77; /*0x1003387f4*/
  codexmate_lib::core::voice::asr::provider_defaults::h00df75381d488375(&v57, v76); /*0x100338805*/
  if ( v5 != 11 || *v4 ^ 0x657053656C707061LL | *(_QWORD *)((char *)v4 + 3) ^ 0x686365657053656CLL ) /*0x10033882b*/
  {
    codexmate_lib::core::voice::asr::keyring_entry::hdb923e0ef25b9aca((__int64)&v48, (__int64)v4, v5); /*0x100338844*/
    v6 = v48; /*0x100338849*/
    v7 = v49; /*0x100338850*/
    v8 = v50; /*0x100338857*/
    if ( v48 != 11 ) /*0x100338862*/
    {
      qmemcpy((void *)(a1 + 32), v51, 0x48u); /*0x10033896a*/
      *(_QWORD *)(a1 + 8) = v6; /*0x10033896d*/
      *(_QWORD *)(a1 + 16) = v7; /*0x100338971*/
      *(_QWORD *)(a1 + 24) = v8; /*0x100338975*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100338983*/
      v10 = 1; /*0x100338986*/
      goto LABEL_22; /*0x100338989*/
    }
    v81 = v49; /*0x100338868*/
    v44[0] = v49; /*0x10033886c*/
    v44[1] = v50; /*0x100338873*/
    keyring::Entry::get_password::h20b0e49ffa950a3a(&v69, v44); /*0x10033888b*/
    if ( v69 != 0x8000000000000007LL ) /*0x1003388a8*/
    {
      if ( v69 != 0x8000000000000002LL ) /*0x100338995*/
      {
        v51[2] = v74; /*0x100338aea*/
        v51[1] = v73; /*0x100338af5*/
        v51[0] = v72; /*0x100338b00*/
        v50 = v71; /*0x100338b0b*/
        v49 = v70; /*0x100338b20*/
        v48 = v69; /*0x100338b27*/
        v43[0] = &v48; /*0x100338b2e*/
        v43[1] = _$LT$keyring..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h70402bfb44a0dc57; /*0x100338b3c*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v42, &unk_1017BC753, v43); /*0x100338b58*/
        *(_QWORD *)(a1 + 32) = v42[2]; /*0x100338b64*/
        v20 = v42[0]; /*0x100338b68*/
        *(_QWORD *)(a1 + 24) = v42[1]; /*0x100338b76*/
        *(_QWORD *)(a1 + 16) = v20; /*0x100338b7a*/
        *(_QWORD *)(a1 + 8) = 10; /*0x100338b7e*/
        *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100338b86*/
        core::ptr::drop_in_place$LT$keyring..error..Error$GT$::hc4c378876bea7ebc(&v48); /*0x100338b90*/
        v10 = 1; /*0x100338b95*/
        v11 = *(void (__fastcall **)(__int64))v8; /*0x100338b98*/
        if ( !*(_QWORD *)v8 ) /*0x100338b9f*/
          goto LABEL_20; /*0x100338b9f*/
        goto LABEL_19; /*0x100338b9f*/
      }
      *(_QWORD *)(a1 + 16) = v77; /*0x10033899f*/
      v12 = v75; /*0x1003389a3*/
      *(_QWORD *)(a1 + 8) = v76; /*0x1003389ab*/
      *(_QWORD *)a1 = v12; /*0x1003389af*/
      v13 = v62; /*0x1003389b9*/
      *(_QWORD *)(a1 + 48) = v61; /*0x1003389c0*/
      *(_QWORD *)(a1 + 56) = v13; /*0x1003389c4*/
      *(_QWORD *)(a1 + 64) = v63; /*0x1003389cf*/
      v14 = v64; /*0x1003389d3*/
      *(_QWORD *)(a1 + 80) = v65; /*0x1003389e1*/
      *(_QWORD *)(a1 + 72) = v14; /*0x1003389e5*/
      *(_QWORD *)(a1 + 88) = v66; /*0x1003389f0*/
      *(_QWORD *)(a1 + 24) = 0; /*0x1003389f4*/
      *(_QWORD *)(a1 + 32) = 1; /*0x1003389fc*/
      *(_QWORD *)(a1 + 40) = 0; /*0x100338a04*/
      *(_BYTE *)(a1 + 96) = 0; /*0x100338a0c*/
      v10 = 0; /*0x100338a11*/
      core::ptr::drop_in_place$LT$keyring..error..Error$GT$::hc4c378876bea7ebc(&v69); /*0x100338a1b*/
      goto LABEL_12; /*0x100338a1b*/
    }
    v78 = v70; /*0x1003388b5*/
    v69 = v71; /*0x1003388c1*/
    v70 = v72; /*0x1003388c8*/
    v71 = 0; /*0x1003388cf*/
    v72 = 0; /*0x1003388d7*/
    v67 = v69; /*0x1003388df*/
    v73 = v69; /*0x1003388e6*/
    v74 = v70; /*0x1003388ea*/
    serde_json::de::from_trait::hd9dc60bee99e5229(&v48, &v69); /*0x1003388fc*/
    v9 = v49; /*0x100338908*/
    if ( v48 == 0x8000000000000000LL ) /*0x100338912*/
    {
      *(_QWORD *)(a1 + 8) = 3; /*0x100338918*/
      *(_QWORD *)(a1 + 16) = v9; /*0x100338920*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100338924*/
      v10 = 1; /*0x100338927*/
      if ( v78 ) /*0x100338931*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v78, 1); /*0x100338943*/
        v11 = *(void (__fastcall **)(__int64))v8; /*0x100338948*/
        if ( !*(_QWORD *)v8 ) /*0x100338948*/
          goto LABEL_20; /*0x10033894f*/
        goto LABEL_19; /*0x10033894f*/
      }
LABEL_12:
      v11 = *(void (__fastcall **)(__int64))v8; /*0x100338a20*/
      if ( !*(_QWORD *)v8 ) /*0x100338a20*/
      {
LABEL_20:
        v21 = *(_QWORD *)(v8 + 8); /*0x100338ba7*/
        if ( v21 ) /*0x100338baf*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v21, *(_QWORD *)(v8 + 16)); /*0x100338bba*/
LABEL_22:
        if ( v57 ) /*0x100338bc9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x100338bd7*/
        if ( v59 ) /*0x100338be6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v59, 1); /*0x100338bf4*/
        if ( v10 ) /*0x100338bfc*/
        {
          if ( v61 ) /*0x100338c08*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v61, 1); /*0x100338c16*/
          if ( v64 ) /*0x100338c25*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v64, 1); /*0x100338c33*/
          v18 = v75; /*0x100338c38*/
          if ( v75 ) /*0x100338c3f*/
          {
            v19 = v4; /*0x100338c46*/
            goto LABEL_33; /*0x100338c46*/
          }
        }
        return a1; /*0x100338c3f*/
      }
LABEL_19:
      v11(v81); /*0x100338ba1*/
      goto LABEL_20; /*0x100338ba5*/
    }
    v68 = v48; /*0x100338c63*/
    v23 = v50; /*0x100338c6a*/
    v52 = v51[0]; /*0x100338c78*/
    v55 = v51[1]; /*0x100338c86*/
    v24 = v51[2]; /*0x100338c8d*/
    v53 = v51[3]; /*0x100338c9b*/
    v54 = v51[4]; /*0x100338ca9*/
    v25 = v51[5]; /*0x100338cb0*/
    v56 = v49; /*0x100338cb7*/
    v26 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v49, v50); /*0x100338cbe*/
    if ( v27 < 0 ) /*0x100338cc6*/
    {
      v28 = 0; /*0x100338cc8*/
      goto LABEL_37; /*0x100338cc8*/
    }
    if ( v27 ) /*0x100338cdb*/
    {
      __src = v26; /*0x100338cdd*/
      v80 = v24; /*0x100338ce4*/
      v79 = v25; /*0x100338ce8*/
      v29 = v27; /*0x100338cec*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v23); /*0x100338cef*/
      v28 = 1; /*0x100338cf4*/
      v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v29, 1); /*0x100338d02*/
      v27 = v29; /*0x100338d07*/
      if ( !v30 ) /*0x100338d0d*/
LABEL_37:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, v27); /*0x100338ccb*/
      v31 = v30; /*0x100338d0f*/
      v25 = v79; /*0x100338d12*/
      v24 = v80; /*0x100338d16*/
      v26 = __src; /*0x100338d1a*/
    }
    else
    {
      v31 = 1; /*0x100338d23*/
    }
    v80 = v31; /*0x100338d28*/
    v79 = v27; /*0x100338d2f*/
    memcpy((void *)v31, v26, v27); /*0x100338d33*/
    v48 = v52; /*0x100338d3f*/
    v49 = v55; /*0x100338d4d*/
    v50 = v24; /*0x100338d54*/
    v32 = v62; /*0x100338d5b*/
    codexmate_lib::core::voice::asr::fallback_trimmed::heb319e71bf1d790a(&v69, &v48, v62, v63); /*0x100338d7a*/
    v48 = v53; /*0x100338d86*/
    v49 = v54; /*0x100338d94*/
    v50 = v25; /*0x100338d9b*/
    v33 = v65; /*0x100338da2*/
    codexmate_lib::core::voice::asr::fallback_trimmed::heb319e71bf1d790a(v45, &v48, v65, v66); /*0x100338dc1*/
    v34 = v79; /*0x100338dc6*/
    if ( v79 ) /*0x100338dcd*/
    {
      v35 = v68; /*0x100338dd4*/
      v36 = v80; /*0x100338ddb*/
      if ( v71 ) /*0x100338ddf*/
        v37 = v46 != 0; /*0x100338de9*/
      else
        v37 = 0; /*0x100338dfd*/
    }
    else
    {
      v37 = 0; /*0x100338dee*/
      v35 = v68; /*0x100338df0*/
      v36 = v80; /*0x100338df7*/
    }
    *(_QWORD *)(a1 + 64) = v71; /*0x100338e03*/
    v38 = v69; /*0x100338e07*/
    *(_QWORD *)(a1 + 56) = v70; /*0x100338e15*/
    *(_QWORD *)(a1 + 48) = v38; /*0x100338e19*/
    v39 = v76; /*0x100338e21*/
    *(_QWORD *)a1 = v75; /*0x100338e25*/
    *(_QWORD *)(a1 + 8) = v39; /*0x100338e28*/
    *(_QWORD *)(a1 + 16) = v77; /*0x100338e30*/
    *(_QWORD *)(a1 + 88) = v46; /*0x100338e3b*/
    v40 = v45[0]; /*0x100338e3f*/
    *(_QWORD *)(a1 + 80) = v45[1]; /*0x100338e4d*/
    *(_QWORD *)(a1 + 72) = v40; /*0x100338e51*/
    *(_QWORD *)(a1 + 24) = v34; /*0x100338e55*/
    *(_QWORD *)(a1 + 32) = v36; /*0x100338e59*/
    *(_QWORD *)(a1 + 40) = v34; /*0x100338e5d*/
    *(_BYTE *)(a1 + 96) = v37; /*0x100338e61*/
    if ( v35 ) /*0x100338e68*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v35, 1); /*0x100338e76*/
    if ( v78 ) /*0x100338e82*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v78, 1); /*0x100338e90*/
    if ( *(_QWORD *)v8 ) /*0x100338e95*/
      (*(void (__fastcall **)(__int64))v8)(v81); /*0x100338ea2*/
    v41 = *(_QWORD *)(v8 + 8); /*0x100338ea4*/
    if ( v41 ) /*0x100338eac*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v41, *(_QWORD *)(v8 + 16)); /*0x100338eb7*/
    if ( v57 ) /*0x100338ec6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x100338ed4*/
    if ( v59 ) /*0x100338ee3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v59, 1); /*0x100338ef1*/
    if ( v61 ) /*0x100338f00*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v61, 1); /*0x100338f0a*/
    v18 = v64; /*0x100338f0f*/
    if ( v64 ) /*0x100338f19*/
    {
      v19 = v33; /*0x100338f24*/
      goto LABEL_33; /*0x100338f27*/
    }
    return a1; /*0x100338f19*/
  }
  *(_QWORD *)(a1 + 16) = v77; /*0x100338a36*/
  v15 = v75; /*0x100338a3a*/
  *(_QWORD *)(a1 + 8) = v76; /*0x100338a42*/
  *(_QWORD *)a1 = v15; /*0x100338a46*/
  v16 = v62; /*0x100338a50*/
  *(_QWORD *)(a1 + 48) = v61; /*0x100338a57*/
  *(_QWORD *)(a1 + 56) = v16; /*0x100338a5b*/
  *(_QWORD *)(a1 + 64) = v63; /*0x100338a66*/
  *(_QWORD *)(a1 + 88) = v66; /*0x100338a71*/
  v17 = v64; /*0x100338a75*/
  *(_QWORD *)(a1 + 80) = v65; /*0x100338a83*/
  *(_QWORD *)(a1 + 72) = v17; /*0x100338a87*/
  *(_QWORD *)(a1 + 24) = 0; /*0x100338a8b*/
  *(_QWORD *)(a1 + 32) = 1; /*0x100338a93*/
  *(_QWORD *)(a1 + 40) = 0; /*0x100338a9b*/
  *(_BYTE *)(a1 + 96) = 1; /*0x100338aa3*/
  if ( v57 ) /*0x100338ab2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x100338ac0*/
  v18 = v59; /*0x100338ac5*/
  if ( v59 ) /*0x100338acf*/
  {
    v19 = v60; /*0x100338ad5*/
LABEL_33:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x100338c49*/
  }
  return a1; /*0x100338c51*/
}