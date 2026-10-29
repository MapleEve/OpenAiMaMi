// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::reader::Fingerprint::capture::hc66266c0b2997c18; addr: 0x1009c0010; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
_QWORD *__fastcall codexmate_lib::core::analytics::reader::Fingerprint::capture::hc66266c0b2997c18(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int64 a6)
{
  _DWORD *v10; // rax
  _DWORD *v11; // rdx
  unsigned __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  bool v20; // cf
  unsigned __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  _BYTE v31[96]; // [rsp+8h] [rbp-1F8h] BYREF
  _QWORD v32[6]; // [rsp+68h] [rbp-198h] BYREF
  _DWORD v33[2]; // [rsp+98h] [rbp-168h] BYREF
  _DWORD *v34; // [rsp+A0h] [rbp-160h]
  _BYTE v35[88]; // [rsp+A8h] [rbp-158h] BYREF
  _QWORD v36[6]; // [rsp+100h] [rbp-100h] BYREF
  _QWORD v37[3]; // [rsp+130h] [rbp-D0h] BYREF
  _QWORD v38[2]; // [rsp+148h] [rbp-B8h] BYREF
  _QWORD v39[3]; // [rsp+158h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+170h] [rbp-90h]
  __int64 v41; // [rsp+178h] [rbp-88h]
  __int64 v42; // [rsp+180h] [rbp-80h]
  unsigned __int64 v43; // [rsp+188h] [rbp-78h]
  __int64 (__fastcall *v44)(); // [rsp+190h] [rbp-70h]
  __int64 (__fastcall *v45)(); // [rsp+198h] [rbp-68h]
  __int64 (__fastcall *v46)(); // [rsp+1A0h] [rbp-60h]
  _DWORD *v47; // [rsp+1A8h] [rbp-58h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+1B0h] [rbp-50h]
  __int64 v49; // [rsp+1B8h] [rbp-48h]
  _DWORD *v50; // [rsp+1C0h] [rbp-40h]
  _DWORD *v51; // [rsp+1C8h] [rbp-38h]
  _DWORD v52[11]; // [rsp+1D4h] [rbp-2Ch] BYREF

  *(_DWORD *)v31 = 0; /*0x1009c0036*/
  *(_WORD *)&v31[4] = 438; /*0x1009c0040*/
  *(_DWORD *)&v31[6] = 1; /*0x1009c0049*/
  *(_WORD *)&v31[10] = 0; /*0x1009c0053*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(v33, v31, a2, a3); /*0x1009c0071*/
  if ( v33[0] != 1 ) /*0x1009c007d*/
  {
    v52[0] = v33[1]; /*0x1009c00a4*/
    std::fs::File::metadata::h408606eff73040af(v33, v52); /*0x1009c00b2*/
    v11 = v34; /*0x1009c00b7*/
    if ( v33[0] == 1 ) /*0x1009c00c5*/
    {
      a1[1] = 2; /*0x1009c00c7*/
      a1[2] = v11; /*0x1009c00cf*/
      *a1 = 1; /*0x1009c00d3*/
LABEL_29:
      close_NOCANCEL(v52[0]); /*0x1009c0238*/
      return a1; /*0x1009c023b*/
    }
    qmemcpy(&v31[8], v35, 0x58u); /*0x1009c00f2*/
    v32[1] = v36[1]; /*0x1009c0103*/
    v32[2] = v36[2]; /*0x1009c0111*/
    v32[3] = v36[3]; /*0x1009c011f*/
    v32[4] = v36[4]; /*0x1009c012d*/
    v32[5] = v36[5]; /*0x1009c013b*/
    *(_QWORD *)v31 = v34; /*0x1009c0142*/
    v32[0] = v36[0]; /*0x1009c0149*/
    v12 = 4096; /*0x1009c0157*/
    if ( v36[0] < 0x1000u ) /*0x1009c015d*/
      v12 = v36[0]; /*0x1009c015d*/
    if ( (a5 & 1) != 0 ) /*0x1009c0165*/
      v12 = a6; /*0x1009c0165*/
    v13 = v12; /*0x1009c016c*/
    if ( v36[0] < v12 ) /*0x1009c016f*/
      v13 = v36[0]; /*0x1009c016f*/
    if ( v13 < 0 ) /*0x1009c0176*/
    {
      v14 = 0; /*0x1009c0178*/
      goto LABEL_13; /*0x1009c0178*/
    }
    v50 = v34; /*0x1009c018b*/
    v43 = v36[0]; /*0x1009c018f*/
    if ( v13 ) /*0x1009c0193*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v36, v34); /*0x1009c0195*/
      v14 = 1; /*0x1009c019a*/
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed(v13, 1); /*0x1009c01a8*/
      if ( !v15 ) /*0x1009c01b0*/
LABEL_13:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v13); /*0x1009c017b*/
      v16 = v15; /*0x1009c01b2*/
    }
    else
    {
      v16 = 1; /*0x1009c01b7*/
    }
    v45 = (__int64 (__fastcall *)())v16; /*0x1009c01c0*/
    v17 = std::io::default_read_exact::hf69fc1393d914df8(v52, v16, v13); /*0x1009c01c7*/
    if ( v17 ) /*0x1009c01cf*/
    {
      a1[1] = 2; /*0x1009c01d1*/
      a1[2] = v17; /*0x1009c01d9*/
LABEL_26:
      *a1 = 1; /*0x1009c021b*/
      goto LABEL_27; /*0x1009c021b*/
    }
    v18 = a4; /*0x1009c01df*/
    if ( v43 < a4 ) /*0x1009c01e9*/
      v18 = v43; /*0x1009c01e9*/
    v19 = v18; /*0x1009c01ef*/
    v20 = v18 < 0x1000; /*0x1009c01f2*/
    v21 = v18 - 4096; /*0x1009c01f2*/
    if ( v20 ) /*0x1009c01f9*/
      v21 = 0; /*0x1009c01f9*/
    if ( (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h9f4cbd6fbcee8df4(v52, 0, v21) & 1) != 0 ) /*0x1009c020d*/
    {
      a1[1] = 2; /*0x1009c020f*/
      a1[2] = v22; /*0x1009c0217*/
      goto LABEL_26; /*0x1009c0217*/
    }
    v51 = (_DWORD *)(v19 - v21); /*0x1009c025b*/
    if ( (__int64)(v19 - v21) < 0 ) /*0x1009c025f*/
    {
      v24 = 0; /*0x1009c0261*/
      goto LABEL_33; /*0x1009c0261*/
    }
    v25 = 1; /*0x1009c026e*/
    if ( v19 != v21 ) /*0x1009c0273*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v52, 1, v22); /*0x1009c0275*/
      v26 = _RNvCs1Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed(v51, 1); /*0x1009c0283*/
      v24 = 1; /*0x1009c0288*/
      if ( !v26 ) /*0x1009c0290*/
LABEL_33:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, v51); /*0x1009c0263*/
      v25 = v26; /*0x1009c0292*/
    }
    v46 = (__int64 (__fastcall *)())v25; /*0x1009c0299*/
    v27 = std::io::default_read_exact::hf69fc1393d914df8(v52, v25, v51); /*0x1009c02a1*/
    if ( !v27 ) /*0x1009c02a9*/
    {
      v40 = codexmate_lib::core::analytics::reader::modified::hcf3dc09dbbb6ce65(v31); /*0x1009c02ea*/
      v41 = v28; /*0x1009c02f1*/
      codexmate_lib::core::analytics::reader::identity::hc24775248866d224(v39, v50, *(_QWORD *)&v31[8]); /*0x1009c030a*/
      v47 = (_DWORD *)v13; /*0x1009c030f*/
      v48 = v45; /*0x1009c0317*/
      v49 = v13; /*0x1009c031b*/
      _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::h19bdb200da56bbe6(v33, &v47); /*0x1009c032a*/
      v38[0] = v33; /*0x1009c0336*/
      v38[1] = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::h7c96d4390bb614f5; /*0x1009c0344*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v47, &unk_1018F4375, v38); /*0x1009c035d*/
      v50 = v47; /*0x1009c0366*/
      v44 = v48; /*0x1009c036e*/
      v42 = v49; /*0x1009c0376*/
      v47 = v51; /*0x1009c037e*/
      v48 = v46; /*0x1009c0386*/
      v49 = (__int64)v51; /*0x1009c038a*/
      _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::h19bdb200da56bbe6(v33, &v47); /*0x1009c0399*/
      v47 = v33; /*0x1009c03a5*/
      v48 = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::h7c96d4390bb614f5; /*0x1009c03b0*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v37, &unk_1018F4375, &v47); /*0x1009c03c6*/
      a1[6] = v39[2]; /*0x1009c03d2*/
      v29 = v39[0]; /*0x1009c03d6*/
      a1[5] = v39[1]; /*0x1009c03e4*/
      a1[4] = v29; /*0x1009c03e8*/
      a1[7] = v50; /*0x1009c03f0*/
      a1[8] = v44; /*0x1009c03f8*/
      a1[9] = v42; /*0x1009c0400*/
      v30 = v37[1]; /*0x1009c040b*/
      a1[10] = v37[0]; /*0x1009c0412*/
      a1[11] = v30; /*0x1009c0416*/
      a1[12] = v37[2]; /*0x1009c0421*/
      a1[3] = v41; /*0x1009c042c*/
      a1[2] = v40; /*0x1009c0437*/
      a1[13] = v43; /*0x1009c043f*/
      a1[14] = v12; /*0x1009c0443*/
      *a1 = 0; /*0x1009c0447*/
      goto LABEL_29; /*0x1009c044e*/
    }
    a1[1] = 2; /*0x1009c02ab*/
    a1[2] = v27; /*0x1009c02b3*/
    *a1 = 1; /*0x1009c02b7*/
    if ( v19 != v21 ) /*0x1009c02c1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v51, 1); /*0x1009c02d4*/
LABEL_27:
    if ( v13 ) /*0x1009c0229*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v13, 1); /*0x1009c0233*/
    goto LABEL_29; /*0x1009c0233*/
  }
  v10 = v34; /*0x1009c007f*/
  a1[1] = 2; /*0x1009c0086*/
  a1[2] = v10; /*0x1009c008e*/
  *a1 = 1; /*0x1009c0092*/
  return a1; /*0x1009c0243*/
}