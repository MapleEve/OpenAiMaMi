// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::relay::load_relay_state::hbbeb3f6d03becc04; addr: 0x100a01da0; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:32Z
_QWORD *__fastcall codexmate_lib::commands::relay::load_relay_state::hbbeb3f6d03becc04(_QWORD *a1, __int64 a2)
{
  char v2; // r13
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _BYTE v10[296]; // [rsp+0h] [rbp-670h] BYREF
  _QWORD __dst[40]; // [rsp+128h] [rbp-548h] BYREF
  __int64 *v12; // [rsp+268h] [rbp-408h] BYREF
  _QWORD __src[40]; // [rsp+270h] [rbp-400h] BYREF
  __int64 v14; // [rsp+3B0h] [rbp-2C0h]
  __int64 v15; // [rsp+3B8h] [rbp-2B8h]
  __int64 v16; // [rsp+3C0h] [rbp-2B0h]
  __int16 v17; // [rsp+3C8h] [rbp-2A8h]
  __int16 v18; // [rsp+3CAh] [rbp-2A6h]
  char v19; // [rsp+3CCh] [rbp-2A4h]
  __int64 v20; // [rsp+3CDh] [rbp-2A3h]
  __int64 v21; // [rsp+3D5h] [rbp-29Bh]
  _BYTE v22[11]; // [rsp+3DDh] [rbp-293h]
  _QWORD v23[44]; // [rsp+3E8h] [rbp-288h] BYREF
  __int16 v24; // [rsp+548h] [rbp-128h]
  __int16 v25; // [rsp+54Ah] [rbp-126h]
  char v26; // [rsp+54Ch] [rbp-124h]
  __int64 v27; // [rsp+54Dh] [rbp-123h]
  __int64 v28; // [rsp+555h] [rbp-11Bh]
  _BYTE v29[35]; // [rsp+55Dh] [rbp-113h]
  __int16 v30; // [rsp+580h] [rbp-F0h]
  __int16 v31; // [rsp+582h] [rbp-EEh]
  char v32; // [rsp+584h] [rbp-ECh]
  __int64 v33; // [rsp+588h] [rbp-E8h]
  __int64 v34; // [rsp+590h] [rbp-E0h]
  __int64 v35; // [rsp+598h] [rbp-D8h]
  __int64 v36; // [rsp+5A0h] [rbp-D0h]
  __int64 v37; // [rsp+5A8h] [rbp-C8h]
  __int64 v38; // [rsp+5B0h] [rbp-C0h]
  __int64 v39; // [rsp+5B8h] [rbp-B8h]
  __int64 v40; // [rsp+5C0h] [rbp-B0h]
  __int64 v41; // [rsp+5C8h] [rbp-A8h]
  __int64 v42; // [rsp+5D0h] [rbp-A0h]
  __int64 v43; // [rsp+5D8h] [rbp-98h]
  _QWORD v44[2]; // [rsp+5E0h] [rbp-90h]
  __int64 v45; // [rsp+5F0h] [rbp-80h]
  __int64 v46; // [rsp+5F8h] [rbp-78h]
  _QWORD v47[2]; // [rsp+600h] [rbp-70h]
  __int64 v48; // [rsp+610h] [rbp-60h] BYREF
  __int64 v49; // [rsp+618h] [rbp-58h]
  __int64 v50; // [rsp+620h] [rbp-50h]
  __int64 v51; // [rsp+628h] [rbp-48h]
  __int64 v52; // [rsp+630h] [rbp-40h]
  __int64 v53; // [rsp+638h] [rbp-38h]
  char v54; // [rsp+643h] [rbp-2Dh] BYREF
  __int16 v55; // [rsp+644h] [rbp-2Ch]
  char v56; // [rsp+647h] [rbp-29h]

  v3 = *(_QWORD *)(a2 + 16); /*0x100a01dc1*/
  if ( __OFSUB__(0, *(_QWORD *)(v3 + 16)) ) /*0x100a01dc7*/
  {
    codexmate_lib::core::relay::manager::RelayManager::snapshot::h527950d12ca05baa(v23, a2); /*0x100a01ddb*/
    codexmate_lib::core::relay::storage::sanitize_for_export::h611985cee17feb5d((__int64)&v12, (__int64)v23); /*0x100a01dea*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hf5a9511b9a61ea04(v23); /*0x100a01df6*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x100a01e15*/
    v5 = v14; /*0x100a01e1a*/
    v6 = v15; /*0x100a01e21*/
    v45 = v20; /*0x100a01e4c*/
    v46 = v21; /*0x100a01e57*/
    v47[0] = *(_QWORD *)v22; /*0x100a01e62*/
    *(_DWORD *)((char *)v47 + 7) = *(_DWORD *)&v22[7]; /*0x100a01e6c*/
    if ( v12 != (__int64 *)0x8000000000000000LL ) /*0x100a01e72*/
    {
      v41 = v14; /*0x100a01e78*/
      v56 = v19; /*0x100a01e7f*/
      v40 = v16; /*0x100a01e83*/
      v39 = v15; /*0x100a01e8a*/
      v55 = v18; /*0x100a01e91*/
      v53 = __dst[2]; /*0x100a01e9c*/
      v52 = __dst[1]; /*0x100a01eae*/
      v51 = __dst[0]; /*0x100a01eb2*/
      memcpy(v10, &__dst[3], sizeof(v10)); /*0x100a01ec9*/
      v42 = v45; /*0x100a01ed6*/
      v43 = v46; /*0x100a01edd*/
      v44[0] = v47[0]; /*0x100a01ee8*/
      *(_DWORD *)((char *)v44 + 7) = *(_DWORD *)((char *)v47 + 7); /*0x100a01ef2*/
      v37 = __dst[1]; /*0x100a01f00*/
      v36 = __dst[0]; /*0x100a01f07*/
      v38 = __dst[2]; /*0x100a01f12*/
      v35 = __dst[2]; /*0x100a01f19*/
      v34 = __dst[1]; /*0x100a01f20*/
      v33 = __dst[0]; /*0x100a01f27*/
      if ( v17 != 7 ) /*0x100a01f33*/
        v2 = v56 & 1; /*0x100a02044*/
      v23[0] = v12; /*0x100a02048*/
      v23[1] = v33; /*0x100a0205d*/
      v23[2] = v34; /*0x100a02064*/
      v23[3] = v35; /*0x100a02072*/
      memcpy(&v23[4], v10, 0x128u); /*0x100a0208c*/
      v23[41] = v41; /*0x100a02098*/
      v23[42] = v39; /*0x100a020a6*/
      v23[43] = v40; /*0x100a020b4*/
      v24 = v17; /*0x100a020bb*/
      v25 = v55; /*0x100a020c7*/
      v26 = v19; /*0x100a020ce*/
      v27 = v42; /*0x100a020e3*/
      v28 = v43; /*0x100a020ea*/
      *(_QWORD *)v29 = v44[0]; /*0x100a020f8*/
      *(_DWORD *)&v29[7] = *(_DWORD *)((char *)v44 + 7); /*0x100a02105*/
      *(_QWORD *)&v29[11] = v41; /*0x100a0210b*/
      *(_QWORD *)&v29[19] = v39; /*0x100a02112*/
      *(_QWORD *)&v29[27] = v40; /*0x100a02119*/
      v30 = v17; /*0x100a02120*/
      v31 = v55; /*0x100a02128*/
      v32 = v2; /*0x100a0212f*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::heec4afa8ad34e40e(a1, v23); /*0x100a02140*/
      return a1; /*0x100a02140*/
    }
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v23[1], v3 + 16); /*0x100a01f51*/
    v23[0] = 9; /*0x100a01f56*/
    qmemcpy(__dst, v23, 0x60u); /*0x100a01f74*/
  }
  qmemcpy(v23, __dst, 0x60u); /*0x100a01f8d*/
  v48 = 0; /*0x100a01f90*/
  v49 = 1; /*0x100a01f98*/
  v50 = 0; /*0x100a01fa0*/
  __src[1] = 1610612768; /*0x100a01fa8*/
  v12 = &v48; /*0x100a01fb7*/
  __src[0] = &anon_25039b10cfdf58965817401c80a821a1_817; /*0x100a01fc5*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a01fd6*/
                          v23,
                          (__int64 *)&v12,
                          v6,
                          (__int64)&anon_25039b10cfdf58965817401c80a821a1_817,
                          v5,
                          v4) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a02178*/
      &anon_25039b10cfdf58965817401c80a821a1_818,
      55,
      &v54,
      &anon_25039b10cfdf58965817401c80a821a1_840,
      &anon_25039b10cfdf58965817401c80a821a1_820);
  v51 = v48; /*0x100a01feb*/
  v52 = v49; /*0x100a01fef*/
  v53 = v50; /*0x100a01ff7*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(__dst); /*0x100a02002*/
  v38 = v53; /*0x100a0200b*/
  v7 = v51; /*0x100a02012*/
  v8 = v52; /*0x100a02016*/
  v37 = v52; /*0x100a0201a*/
  v36 = v51; /*0x100a02021*/
  a1[3] = v53; /*0x100a02028*/
  a1[2] = v8; /*0x100a0202c*/
  a1[1] = v7; /*0x100a02030*/
  *a1 = 0x8000000000000000LL; /*0x100a02034*/
  return a1; /*0x100a02148*/
}