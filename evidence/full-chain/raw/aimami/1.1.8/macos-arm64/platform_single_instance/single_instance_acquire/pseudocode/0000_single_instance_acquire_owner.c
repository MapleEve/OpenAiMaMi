// mac 1.1.8 BEHAVIORAL-BACKEND single_instance_acquire node 0x10039fec0 depth=0
// single_instance_acquire_owner
__int64 __fastcall codexmate_lib::platform::single_instance::imp::acquire::h265d50d5ebdd6178(__int64 a1)
{
  _BYTE *v2; // rbx
  char *v3; // r15
  _UNKNOWN **v4; // rax
  __int64 v5; // r13
  size_t v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r12
  size_t v10; // rax
  int v11; // ecx
  void *v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r13
  _QWORD v20[2]; // [rsp+8h] [rbp-D8h] BYREF
  size_t v21; // [rsp+18h] [rbp-C8h] BYREF
  _BYTE *v22; // [rsp+20h] [rbp-C0h]
  char *v23; // [rsp+28h] [rbp-B8h]
  __int64 v24; // [rsp+34h] [rbp-ACh] BYREF
  int v25; // [rsp+3Ch] [rbp-A4h]
  int v26; // [rsp+40h] [rbp-A0h] BYREF
  int v27; // [rsp+44h] [rbp-9Ch]
  __int64 v28; // [rsp+48h] [rbp-98h]
  size_t v29; // [rsp+50h] [rbp-90h] BYREF
  __int64 v30; // [rsp+58h] [rbp-88h]
  __int64 v31; // [rsp+60h] [rbp-80h]
  __int64 v32; // [rsp+68h] [rbp-78h] BYREF
  size_t **v33; // [rsp+70h] [rbp-70h] BYREF
  __int128 v34; // [rsp+78h] [rbp-68h]
  __int64 (__fastcall *v35)(_QWORD, _QWORD); // [rsp+88h] [rbp-58h]
  size_t *v36; // [rsp+90h] [rbp-50h] BYREF
  __int128 v37; // [rsp+98h] [rbp-48h]
  _DWORD *v38; // [rsp+A8h] [rbp-38h]
  _DWORD v39[11]; // [rsp+B4h] [rbp-2Ch] BYREF

  dirs::data_dir::hb6650a44a938f2dc((size_t *)&v33); /*0x10039fedb*/
  if ( __OFSUB__(0, v33) ) /*0x10039fee2*/
  {
    std::env::temp_dir::h8078010294fc1613((size_t *)&v36); /*0x10039feec*/
  }
  else
  {
    v37 = v34; /*0x10039ff03*/
    v36 = (size_t *)v33; /*0x10039ff07*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10039ff2a*/
    &v21,
    (const void *)v37,
    *((size_t *)&v37 + 1),
    "dev.aimami.desktopaimami-single-instance.lock",
    0x12u);
  if ( v36 ) /*0x10039ff36*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10039ff40*/
  LOWORD(v33) = 511; /*0x10039ff45*/
  BYTE2(v33) = 1; /*0x10039ff4b*/
  v2 = v22; /*0x10039ff4f*/
  v3 = v23; /*0x10039ff56*/
  v4 = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v33, v22, v23); /*0x10039ff67*/
  if ( v4 ) /*0x10039ff6f*/
  {
    v29 = (size_t)v4; /*0x10039ff75*/
    v36 = &v29; /*0x10039ff83*/
    *(_QWORD *)&v37 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10039ff8e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v33, byte_10122670F, (unsigned __int64)&v36); /*0x10039ffa1*/
    if ( (v29 & 3) == 1 ) /*0x10039ffb5*/
    {
      v5 = *(_QWORD *)(v29 + 7); /*0x10039ffbf*/
      if ( *(_QWORD *)v5 ) /*0x10039ffc3*/
        (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v29 - 1)); /*0x10039ffcf*/
      if ( *(_QWORD *)(v5 + 8) ) /*0x10039ffd1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10039ffe1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10039fff3*/
    }
    *(_QWORD *)(a1 + 16) = *((_QWORD *)&v34 + 1); /*0x10039fffc*/
    v6 = (size_t)v33; /*0x1003a0000*/
    *(_QWORD *)(a1 + 8) = v34; /*0x1003a0008*/
    *(_QWORD *)a1 = v6; /*0x1003a000c*/
    goto LABEL_23; /*0x1003a000f*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v29, v2, (size_t)v3, "aimami-single-instance.lock", 0x1Bu); /*0x1003a002e*/
  v24 = 0x10101B600000000LL; /*0x1003a003d*/
  v25 = 0x10000; /*0x1003a0044*/
  v7 = v30; /*0x1003a004e*/
  v8 = v31; /*0x1003a0055*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v26, &v24, v30, v31); /*0x1003a006d*/
  if ( v26 == 1 ) /*0x1003a0079*/
  {
    v32 = v28; /*0x1003a0086*/
    v20[0] = v7; /*0x1003a008a*/
    v20[1] = v8; /*0x1003a0091*/
    v33 = (size_t **)v20; /*0x1003a009f*/
    *(_QWORD *)&v34 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1003a00aa*/
    *((_QWORD *)&v34 + 1) = &v32; /*0x1003a00b2*/
    v35 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1003a00bd*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v36, byte_1012266E5, (unsigned __int64)&v33); /*0x1003a00d0*/
    if ( (v32 & 3) == 1 ) /*0x1003a00e1*/
    {
      v38 = (_DWORD *)(v32 - 1); /*0x1003a00e7*/
      v9 = *(_QWORD *)(v32 + 7); /*0x1003a00ef*/
      if ( *(_QWORD *)v9 ) /*0x1003a00f3*/
        (*(void (__fastcall **)(_QWORD))v9)(*(_QWORD *)(v32 - 1)); /*0x1003a00ff*/
      if ( *(_QWORD *)(v9 + 8) ) /*0x1003a0101*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003a0113*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003a0126*/
    }
    v10 = (size_t)v36; /*0x1003a012b*/
    v11 = v37; /*0x1003a012f*/
    *(_DWORD *)(a1 + 20) = HIDWORD(v37); /*0x1003a0135*/
    *(_QWORD *)(a1 + 12) = *(_QWORD *)((char *)&v37 + 4); /*0x1003a013d*/
    *(_QWORD *)a1 = v10; /*0x1003a0141*/
    *(_DWORD *)(a1 + 8) = v11; /*0x1003a0144*/
    if ( v29 ) /*0x1003a0152*/
LABEL_22:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003a0154*/
  }
  else
  {
    v39[0] = v27; /*0x1003a0195*/
    if ( flock(v27, 6) ) /*0x1003a019d*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003a01a6*/
      v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x19u, 1u); /*0x1003a01b5*/
      if ( !v13 ) /*0x1003a01bd*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x1003a033b*/
      qmemcpy(v13, "AiMaMi is already running", 25); /*0x1003a01e9*/
      *(_QWORD *)a1 = 25; /*0x1003a01f0*/
      *(_QWORD *)(a1 + 8) = v13; /*0x1003a01f7*/
      *(_QWORD *)(a1 + 16) = 25; /*0x1003a01fb*/
      close_NOCANCEL(v39[0]); /*0x1003a0206*/
      if ( v29 ) /*0x1003a0215*/
        goto LABEL_22; /*0x1003a0215*/
    }
    else
    {
      v14 = v39; /*0x1003a0220*/
      v15 = 0; /*0x1003a0224*/
      v16 = std::fs::File::set_len::h17c826d1834dc19c(v39, 0); /*0x1003a0226*/
      if ( (v16 & 3) == 1 ) /*0x1003a0233*/
      {
        v38 = (_DWORD *)(v16 - 1); /*0x1003a029d*/
        v18 = *(_QWORD *)(v16 + 7); /*0x1003a02a5*/
        if ( *(_QWORD *)v18 ) /*0x1003a02a9*/
          (*(void (__fastcall **)(_QWORD))v18)(*(_QWORD *)(v16 - 1)); /*0x1003a02b5*/
        if ( *(_QWORD *)(v18 + 8) ) /*0x1003a02b7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003a02c7*/
        v15 = 24; /*0x1003a02cc*/
        v14 = v38; /*0x1003a02d6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003a02da*/
      }
      LODWORD(v36) = std::process::id::ha72f58ec62264e78(v14, v15); /*0x1003a023a*/
      v33 = &v36; /*0x1003a0241*/
      *(_QWORD *)&v34 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x1003a024c*/
      v17 = std::io::default_write_fmt::hf62afa4a4e97fcee(v39, &unk_1012266DC, &v33); /*0x1003a025f*/
      if ( (v17 & 3) == 1 ) /*0x1003a026c*/
      {
        v38 = (_DWORD *)(v17 - 1); /*0x1003a02ea*/
        v19 = *(_QWORD *)(v17 + 7); /*0x1003a02f2*/
        if ( *(_QWORD *)v19 ) /*0x1003a02f6*/
          (*(void (__fastcall **)(_QWORD))v19)(*(_QWORD *)(v17 - 1)); /*0x1003a0302*/
        if ( *(_QWORD *)(v19 + 8) ) /*0x1003a0304*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003a0314*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003a0327*/
      }
      *(_DWORD *)(a1 + 8) = v39[0]; /*0x1003a027b*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1003a027f*/
      if ( v29 ) /*0x1003a028c*/
        goto LABEL_22; /*0x1003a028c*/
    }
  }
LABEL_23:
  if ( v21 ) /*0x1003a016b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003a0175*/
  return a1; /*0x1003a017d*/
}