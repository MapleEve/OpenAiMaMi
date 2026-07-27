// __ZN13codexmate_lib4core10repository10Repository18auto_switch_config @ 0x100a5be60 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::Repository::auto_switch_config::hb0e53217ed18b987(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  double v5; // xmm0_8
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  __m128 v12; // xmm0
  char v13; // al
  char *v14; // rdi
  __int64 v15; // rsi
  char *v16; // r14
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rsi
  int v20; // edx
  int v21; // edx
  __int64 v22; // r15
  _DWORD v24[24]; // [rsp+8h] [rbp-198h] BYREF
  _QWORD v25[12]; // [rsp+68h] [rbp-138h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-D8h] BYREF
  char *v27; // [rsp+D0h] [rbp-D0h]
  __int64 v28; // [rsp+D8h] [rbp-C8h]
  __int64 v29; // [rsp+E0h] [rbp-C0h]
  const char *v30; // [rsp+E8h] [rbp-B8h]
  __int64 v31; // [rsp+F0h] [rbp-B0h]
  __int64 v32; // [rsp+F8h] [rbp-A8h]
  char *v33; // [rsp+100h] [rbp-A0h]
  __int64 v34; // [rsp+108h] [rbp-98h]
  __int64 v35; // [rsp+110h] [rbp-90h]
  void *v36; // [rsp+118h] [rbp-88h]
  _DWORD **v37; // [rsp+120h] [rbp-80h]
  _DWORD *v38; // [rsp+160h] [rbp-40h] BYREF
  __int64 (__fastcall *v39)(_QWORD, _QWORD); // [rsp+168h] [rbp-38h]
  _BYTE v40[41]; // [rsp+177h] [rbp-29h] BYREF

  v3 = *(_QWORD *)(a2 + 224); /*0x100a5be77*/
  v4 = *(_QWORD *)(a2 + 232); /*0x100a5be7e*/
  v5 = codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(v25, v3, v4); /*0x100a5be92*/
  if ( LODWORD(v25[0]) != 11 ) /*0x100a5be9e*/
  {
    qmemcpy(v24, v25, sizeof(v24)); /*0x100a5bf5d*/
    v14 = (char *)&v26; /*0x100a5bf60*/
    v15 = v3; /*0x100a5bf67*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v26, v3, v4); /*0x100a5bf6d*/
    if ( (_BYTE)v26 ) /*0x100a5bf79*/
    {
      if ( ((unsigned __int8)v27 & 3) == 1 ) /*0x100a5bf8a*/
      {
        v16 = v27 - 1; /*0x100a5bf90*/
        v17 = *(_QWORD *)(v27 - 1); /*0x100a5bf94*/
        v18 = *(_QWORD *)(v27 + 7); /*0x100a5bf98*/
        if ( *(_QWORD *)v18 ) /*0x100a5bf9c*/
          (*(void (__fastcall **)(__int64, double))v18)(v17, v5); /*0x100a5bfa8*/
        v19 = *(_QWORD *)(v18 + 8); /*0x100a5bfaa*/
        if ( v19 ) /*0x100a5bfb2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, *(_QWORD *)(v18 + 16)); /*0x100a5bfbc*/
        v15 = 24; /*0x100a5bfc1*/
        v14 = v16; /*0x100a5bfcb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 24, 8); /*0x100a5bfce*/
      }
    }
    else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100a5bfe6*/
    {
      v38 = v24; /*0x100a5bfec*/
      v39 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a5bff7*/
      v32 = 2; /*0x100a5bffb*/
      v33 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5c00d*/
      v34 = 31; /*0x100a5c014*/
      v36 = &unk_1017C909C; /*0x100a5c026*/
      v37 = &v38; /*0x100a5c031*/
      v26 = 0; /*0x100a5c035*/
      v27 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5c040*/
      v28 = 31; /*0x100a5c047*/
      v29 = 0; /*0x100a5c052*/
      v30 = "src/core/repository.rs"; /*0x100a5c064*/
      v31 = 22; /*0x100a5c06b*/
      v35 = 0x90E00000001LL; /*0x100a5c080*/
      v14 = v40; /*0x100a5c087*/
      v15 = (__int64)&v26; /*0x100a5c08b*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v40, &v26); /*0x100a5c092*/
    }
    v38 = (_DWORD *)std::time::SystemTime::now::h1fe79e41f9d5677f(v14, v15); /*0x100a5c09c*/
    LODWORD(v39) = v20; /*0x100a5c0a0*/
    std::time::SystemTime::duration_since::had059553cab94f96(&v26, &v38, 0, 0); /*0x100a5c0b2*/
    v10 = v24; /*0x100a5c0b7*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v24); /*0x100a5c0be*/
    v24[0] = v26; /*0x100a5c0cf*/
    *(_DWORD *)((char *)v24 + 3) = *(_DWORD *)((char *)&v26 + 3); /*0x100a5c0d5*/
    v12 = (__m128)0xA0000000FuLL; /*0x100a5c0db*/
    v7 = 8; /*0x100a5c0e3*/
    v9 = 0x8000000000000000LL; /*0x100a5c0e9*/
    v11 = 0; /*0x100a5c0f3*/
    v8 = 0; /*0x100a5c0f5*/
    v6 = 0; /*0x100a5c0f8*/
    v13 = 0; /*0x100a5c0fb*/
LABEL_15:
    *(_QWORD *)a1 = v11; /*0x100a5c0fd*/
    _mm_storel_ps((double *)(a1 + 8), v12); /*0x100a5c100*/
    v21 = *(_DWORD *)((char *)v24 + 3); /*0x100a5c10a*/
    *(_DWORD *)(a1 + 17) = v24[0]; /*0x100a5c110*/
    *(_DWORD *)(a1 + 20) = v21; /*0x100a5c113*/
    *(_BYTE *)(a1 + 16) = v13; /*0x100a5c116*/
    if ( 2 * v9 ) /*0x100a5c119*/
      goto LABEL_18; /*0x100a5c124*/
LABEL_16:
    if ( !v8 ) /*0x100a5c129*/
      goto LABEL_21; /*0x100a5c129*/
    goto LABEL_19; /*0x100a5c129*/
  }
  v6 = v25[1]; /*0x100a5bea4*/
  v7 = v25[2]; /*0x100a5beab*/
  v8 = v25[3]; /*0x100a5beb2*/
  v9 = v25[4]; /*0x100a5beb9*/
  v10 = (_DWORD *)v25[5]; /*0x100a5bec0*/
  v11 = v25[7]; /*0x100a5bec7*/
  v12 = (__m128)v25[8]; /*0x100a5bece*/
  v13 = v25[9]; /*0x100a5bed6*/
  LODWORD(v26) = *(_DWORD *)((char *)&v25[9] + 1); /*0x100a5bee3*/
  *(_DWORD *)((char *)&v26 + 3) = HIDWORD(v25[9]); /*0x100a5beef*/
  v24[0] = v26; /*0x100a5bf02*/
  *(_DWORD *)((char *)v24 + 3) = HIDWORD(v25[9]); /*0x100a5bf08*/
  if ( LOBYTE(v25[9]) != 2 ) /*0x100a5bf11*/
    goto LABEL_15; /*0x100a5bf11*/
  *(_QWORD *)a1 = 0; /*0x100a5bf17*/
  *(_QWORD *)(a1 + 8) = 0xA0000000FLL; /*0x100a5bf28*/
  *(_BYTE *)(a1 + 16) = 0; /*0x100a5bf2e*/
  if ( !(2 * v9) ) /*0x100a5bf3c*/
    goto LABEL_16; /*0x100a5bf3c*/
LABEL_18:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100a5c12d*/
  if ( !v8 ) /*0x100a5c13a*/
    goto LABEL_21; /*0x100a5c13a*/
LABEL_19:
  v22 = v7; /*0x100a5c13c*/
  do /*0x100a5c152*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v22); /*0x100a5c143*/
    v22 += 424; /*0x100a5c148*/
    --v8; /*0x100a5c14f*/
  }
  while ( v8 ); /*0x100a5c152*/
LABEL_21:
  if ( v6 ) /*0x100a5c157*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 424 * v6, 8); /*0x100a5c168*/
  return a1; /*0x100a5c170*/
}