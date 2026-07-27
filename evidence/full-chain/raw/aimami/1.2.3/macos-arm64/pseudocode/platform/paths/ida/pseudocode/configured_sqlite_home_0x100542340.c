// __ZN13codexmate_lib8platform5paths10CodexPaths22configured_sqlite_home @ 0x100542340 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::configured_sqlite_home::hd0cd1e7be263d666(
        __int128 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r14
  signed __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rsi
  signed __int64 v12; // rbx
  signed __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int8 v16; // r13
  _QWORD *v17; // r15
  const void *v18; // rsi
  __int64 v19; // r13
  _QWORD *v20; // rdi
  signed __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rbx
  __int128 *v27; // rdx
  __int64 result; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // r13
  __int64 v32; // r14
  __int64 v33; // r12
  size_t v34; // rdx
  size_t v35; // rbx
  int v36; // eax
  __int64 v37; // r14
  const void *v38; // r12
  __int128 *v39; // rdx
  __m256i v40; // [rsp+8h] [rbp-2C8h] BYREF
  _QWORD *v41; // [rsp+28h] [rbp-2A8h]
  _QWORD *v42; // [rsp+30h] [rbp-2A0h]
  __int64 v43; // [rsp+38h] [rbp-298h]
  _QWORD *v44; // [rsp+40h] [rbp-290h]
  signed __int64 v45; // [rsp+48h] [rbp-288h]
  signed __int64 v46; // [rsp+50h] [rbp-280h]
  signed __int64 v47; // [rsp+58h] [rbp-278h]
  __int64 v48; // [rsp+60h] [rbp-270h]
  __int64 v49; // [rsp+68h] [rbp-268h]
  _BYTE __src[144]; // [rsp+70h] [rbp-260h] BYREF
  __int128 v51; // [rsp+100h] [rbp-1D0h] BYREF
  __int128 v52; // [rsp+110h] [rbp-1C0h]
  _QWORD *v53; // [rsp+120h] [rbp-1B0h]
  _QWORD *v54; // [rsp+128h] [rbp-1A8h]
  __int64 v55; // [rsp+130h] [rbp-1A0h]
  _QWORD *v56; // [rsp+138h] [rbp-198h]
  signed __int64 v57; // [rsp+140h] [rbp-190h]
  signed __int64 v58; // [rsp+148h] [rbp-188h]
  __int64 v59; // [rsp+150h] [rbp-180h]
  __int64 v60; // [rsp+158h] [rbp-178h]
  __int64 v61; // [rsp+160h] [rbp-170h]
  _BYTE __dst[144]; // [rsp+168h] [rbp-168h] BYREF
  __int64 v63; // [rsp+1F8h] [rbp-D8h]
  __int64 v64; // [rsp+200h] [rbp-D0h]
  __int64 v65; // [rsp+208h] [rbp-C8h]
  __int64 v66; // [rsp+210h] [rbp-C0h]
  _QWORD *v67; // [rsp+218h] [rbp-B8h]
  _BYTE v68[15]; // [rsp+220h] [rbp-B0h]
  __int64 v69; // [rsp+230h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+238h] [rbp-98h]
  __int64 v71; // [rsp+240h] [rbp-90h]
  __int64 v72; // [rsp+248h] [rbp-88h]
  __int128 *v73; // [rsp+250h] [rbp-80h]
  _QWORD v74[2]; // [rsp+258h] [rbp-78h]
  __int64 v75; // [rsp+268h] [rbp-68h]
  _QWORD v76[2]; // [rsp+270h] [rbp-60h]
  __int64 v77; // [rsp+280h] [rbp-50h]
  __int64 v78; // [rsp+288h] [rbp-48h]
  _QWORD *v79; // [rsp+290h] [rbp-40h]
  __int64 v80; // [rsp+298h] [rbp-38h]
  __int8 v81; // [rsp+2A7h] [rbp-29h]

  v73 = a1; /*0x10054235a*/
  std::env::current_dir::h45bac98cdbc58bac(&v51); /*0x10054236f*/
  v5 = *((_QWORD *)&v51 + 1); /*0x10054237b*/
  v6 = v51; /*0x10054237b*/
  if ( __OFSUB__(-(__int64)v51, 1) ) /*0x100542385*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x10054238d*/
      0x8000000000000000LL,
      *((_QWORD *)&v51 + 1));
  else
    v72 = v52; /*0x10054239b*/
  v78 = v5; /*0x1005423a2*/
  std::env::_var_os::h174f31a71fef3df9(&v69, &unk_1015FF6AC, 17); /*0x1005423b9*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v51, a2, a3, &unk_1015FF6FC, 11); /*0x1005423d8*/
  v7 = *((_QWORD *)&v51 + 1); /*0x1005423dd*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v40, *((_QWORD *)&v51 + 1), v52); /*0x1005423f5*/
  if ( (_QWORD)v51 ) /*0x10054240e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v51, 1); /*0x100542418*/
  v8 = v40.i64[1]; /*0x100542424*/
  if ( v40.i64[0] == 0x8000000000000000LL ) /*0x10054242e*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x10054243d*/
      0x8000000000000000LL,
      v40.i64[1]);
LABEL_30:
    v23 = v78; /*0x100542783*/
    goto LABEL_31; /*0x100542783*/
  }
  v75 = v40.i64[0]; /*0x100542447*/
  v80 = v6; /*0x10054244b*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x100542460*/
    &v40,
    v40.i64[1],
    v40.i64[2]);
  v10 = v40.i64[1]; /*0x10054246c*/
  v76[0] = *(__int64 *)((char *)&v40.i64[2] + 1); /*0x100542482*/
  *(_QWORD *)((char *)v76 + 7) = v40.i64[3]; /*0x10054248d*/
  v11 = (__int64)v41; /*0x100542491*/
  v12 = v46; /*0x1005424ad*/
  v13 = v47; /*0x1005424b4*/
  v14 = v48; /*0x1005424bb*/
  if ( v40.i64[0] == 2 ) /*0x1005424c6*/
  {
    v77 = (__int64)v44; /*0x1005424c8*/
    v79 = (_QWORD *)v45; /*0x1005424cc*/
    v74[0] = v76[0]; /*0x1005424d8*/
    *(_QWORD *)((char *)v74 + 7) = *(_QWORD *)((char *)v76 + 7); /*0x1005424dc*/
    v15 = *(_QWORD *)((char *)v76 + 7); /*0x1005424e4*/
    v76[0] = v74[0]; /*0x1005424e8*/
    *(_QWORD *)((char *)v76 + 7) = v15; /*0x1005424ec*/
    v6 = v80; /*0x1005424f0*/
    v16 = v40.i8[16]; /*0x1005424f4*/
    v17 = v42; /*0x1005424f7*/
    if ( v40.i64[1] == 2 ) /*0x1005424fe*/
      goto LABEL_10; /*0x1005424fe*/
  }
  else
  {
    v63 = v8; /*0x100542530*/
    v65 = v43; /*0x10054253e*/
    v77 = v49; /*0x10054254c*/
    v79 = v41; /*0x100542550*/
    v64 = v48; /*0x10054255b*/
    v66 = v47; /*0x10054256e*/
    v67 = v42; /*0x100542578*/
    v81 = v40.i8[16]; /*0x10054257f*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x100542583*/
    v74[0] = v76[0]; /*0x10054258c*/
    *(_QWORD *)((char *)v74 + 7) = *(_QWORD *)((char *)v76 + 7); /*0x100542594*/
    v51 = v40.i128[0]; /*0x100542598*/
    LOBYTE(v52) = v40.i8[16]; /*0x1005425aa*/
    *(_QWORD *)((char *)&v52 + 1) = v74[0]; /*0x1005425b4*/
    *((_QWORD *)&v52 + 1) = *(_QWORD *)((char *)v76 + 7); /*0x1005425bf*/
    v53 = v41; /*0x1005425ca*/
    v54 = v42; /*0x1005425d8*/
    v55 = v43; /*0x1005425e6*/
    v56 = v44; /*0x1005425f4*/
    v57 = v45; /*0x1005425fb*/
    v58 = v46; /*0x100542602*/
    v59 = v47; /*0x100542610*/
    v60 = v48; /*0x10054261e*/
    v61 = v49; /*0x100542629*/
    _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h8b47c0d0d8825eaf( /*0x10054263e*/
      &v40,
      &v51);
    v10 = v40.i64[0]; /*0x100542643*/
    v16 = v40.i8[8]; /*0x10054264a*/
    v76[0] = *(__int64 *)((char *)&v40.i64[1] + 1); /*0x100542659*/
    *(_QWORD *)((char *)v76 + 7) = v40.i64[2]; /*0x100542664*/
    v6 = v80; /*0x10054266c*/
    if ( v40.i64[0] == 2 ) /*0x100542670*/
    {
      v11 = v40.i64[3]; /*0x100542672*/
      v17 = v41; /*0x100542679*/
LABEL_10:
      v79 = (_QWORD *)v11; /*0x100542504*/
      *(_QWORD *)&v68[7] = *(_QWORD *)((char *)v76 + 7); /*0x100542510*/
      *(_QWORD *)v68 = v76[0]; /*0x100542517*/
      v18 = (const void *)v75; /*0x10054251e*/
      if ( !v75 ) /*0x100542525*/
        goto LABEL_29; /*0x100542525*/
      goto LABEL_28; /*0x100542525*/
    }
    v77 = v43; /*0x100542693*/
    v79 = v44; /*0x10054269e*/
    v12 = v45; /*0x1005426a2*/
    v13 = v46; /*0x1005426a9*/
    v14 = v47; /*0x1005426b0*/
    v11 = v40.i64[3]; /*0x1005426b7*/
    v17 = v41; /*0x1005426be*/
  }
  if ( v11 ) /*0x1005426d2*/
  {
    v19 = v14; /*0x1005426d9*/
    v20 = v17; /*0x1005426dc*/
    v21 = v13; /*0x1005426df*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v11, 1); /*0x1005426e2*/
    v14 = v19; /*0x1005426e7*/
    v13 = v21; /*0x1005426ea*/
  }
  v17 = v79; /*0x1005426f8*/
  if ( 2 * v13 ) /*0x1005426ed*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x10054270d*/
    if ( !v12 ) /*0x100542715*/
      goto LABEL_25; /*0x100542715*/
  }
  else if ( !v12 ) /*0x100542701*/
  {
    goto LABEL_25; /*0x100542701*/
  }
  ++v17; /*0x100542717*/
  do /*0x100542727*/
  {
    v22 = *(v17 - 1); /*0x100542729*/
    if ( v22 ) /*0x100542730*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v22, 1); /*0x10054273a*/
    v17 += 3; /*0x100542720*/
    --v12; /*0x100542724*/
  }
  while ( v12 ); /*0x100542727*/
LABEL_25:
  v16 = 7; /*0x100542741*/
  if ( v77 ) /*0x10054274b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, 24 * v77, 8); /*0x10054275e*/
  v18 = (const void *)v75; /*0x100542763*/
  if ( !v75 ) /*0x10054276a*/
    goto LABEL_29; /*0x10054276a*/
LABEL_28:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v18, 1); /*0x10054276c*/
LABEL_29:
  if ( v16 == 7 ) /*0x10054277d*/
    goto LABEL_30; /*0x10054277d*/
  v29 = *(_QWORD *)&v68[7]; /*0x100542858*/
  *((_QWORD *)&v51 + 1) = *(_QWORD *)&v68[7]; /*0x10054285f*/
  *(_QWORD *)((char *)&v51 + 1) = *(_QWORD *)v68; /*0x100542866*/
  *(_QWORD *)&v52 = v79; /*0x100542871*/
  *((_QWORD *)&v52 + 1) = v17; /*0x100542878*/
  LOBYTE(v51) = v16; /*0x10054287f*/
  if ( v16 != 6 || (v29 = *((_QWORD *)&v51 + 1)) == 0 ) /*0x10054289a*/
  {
    v37 = 0x8000000000000000LL; /*0x100542952*/
    v23 = v78; /*0x10054295c*/
    goto LABEL_67; /*0x100542960*/
  }
LABEL_43:
  v30 = (_QWORD *)(v29 + 360); /*0x1005428a0*/
  v9 = *(unsigned __int16 *)(v29 + 626); /*0x1005428a7*/
  v75 = v29; /*0x1005428ae*/
  v31 = (_QWORD *)(v29 - 8); /*0x1005428b2*/
  v77 = v9; /*0x1005428b6*/
  v32 = 3LL * (unsigned int)(8 * v9); /*0x1005428c1*/
  v33 = -1; /*0x1005428c5*/
  do /*0x100542924*/
  {
    if ( !v32 ) /*0x1005428d3*/
    {
      v33 = v77; /*0x10054292f*/
LABEL_53:
      v29 = v75; /*0x100542933*/
      if ( v79 ) /*0x10054293f*/
      {
        v79 = (_QWORD *)((char *)v79 - 1); /*0x100542941*/
        v29 = *(_QWORD *)(v75 + 8 * v33 + 632); /*0x100542945*/
        goto LABEL_43; /*0x10054294d*/
      }
      goto LABEL_59; /*0x10054293f*/
    }
    v17 = v30 + 3; /*0x1005428d5*/
    v18 = (const void *)v30[1]; /*0x1005428d9*/
    v34 = v30[2]; /*0x1005428dd*/
    v35 = v34 - 11; /*0x1005428e4*/
    if ( v34 >= 0xB ) /*0x1005428ed*/
      v34 = 11; /*0x1005428ed*/
    v12 = -(__int64)v35; /*0x1005428f1*/
    v36 = memcmp(&unk_1015FF707, v18, v34); /*0x1005428fb*/
    if ( v36 ) /*0x100542904*/
      v12 = v36; /*0x100542904*/
    LOBYTE(v29) = (v12 > 0) - (v12 < 0); /*0x100542911*/
    v31 += 4; /*0x100542913*/
    ++v33; /*0x100542917*/
    v32 -= 24; /*0x10054291a*/
    v30 = v17; /*0x10054291e*/
  }
  while ( (_BYTE)v29 == 1 ); /*0x100542924*/
  if ( (_BYTE)v29 ) /*0x10054292b*/
    goto LABEL_53; /*0x10054292b*/
  if ( *((_BYTE *)v31 - 24) ) /*0x100542983*/
  {
LABEL_59:
    v37 = 0x8000000000000000LL; /*0x10054298a*/
    v6 = v80; /*0x100542994*/
    v23 = v78; /*0x100542998*/
    goto LABEL_67; /*0x10054299c*/
  }
  v18 = (const void *)*v31; /*0x1005429df*/
  v38 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(v31 - 1), *v31); /*0x1005429e8*/
  v12 = v9; /*0x1005429eb*/
  LOBYTE(v29) = v38 == nullptr || v9 == 0; /*0x1005429fa*/
  v23 = v78; /*0x1005429fc*/
  if ( (_BYTE)v29 ) /*0x100542a00*/
  {
    v37 = 0x8000000000000000LL; /*0x100542a02*/
  }
  else
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v40, v9, 0, 1, 1); /*0x100542a25*/
    v37 = v40.i64[1]; /*0x100542a2a*/
    if ( v40.i8[0] ) /*0x100542a38*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v40.i64[1], v40.i64[2]); /*0x100542b46*/
    v17 = (_QWORD *)v40.i64[2]; /*0x100542a3e*/
    v18 = v38; /*0x100542a48*/
    memcpy((void *)v40.i64[2], v38, v12); /*0x100542a4e*/
  }
  v6 = v80; /*0x100542a53*/
LABEL_67:
  core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v51, v18, v9, v29, v13, v10); /*0x100542a57*/
  if ( v37 == 0x8000000000000000LL ) /*0x100542a70*/
  {
LABEL_31:
    v24 = v69; /*0x100542787*/
    if ( v69 != 0x8000000000000000LL ) /*0x10054279b*/
    {
      v25 = v70; /*0x1005427b0*/
      v26 = v71; /*0x1005427b7*/
      if ( v71 ) /*0x1005427c1*/
      {
        if ( (unsigned __int8)std::path::Path::is_absolute::hc49e17bd8982fd90(v70, v71) || v6 == 0x8000000000000000LL ) /*0x1005427e3*/
        {
          *(_QWORD *)&v51 = v24; /*0x1005427e9*/
          *((_QWORD *)&v51 + 1) = v25; /*0x1005427f0*/
          *(_QWORD *)&v52 = v26; /*0x1005427f7*/
        }
        else
        {
          std::path::Path::_join::hb1a495d4f06b13b8(&v51, v23, v72, v25, v26); /*0x1005429b8*/
          if ( v24 ) /*0x1005429c0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x1005429d1*/
        }
        v27 = v73; /*0x100542805*/
        *((_QWORD *)v73 + 2) = v52; /*0x100542809*/
        *v27 = v51; /*0x10054281f*/
        goto LABEL_38; /*0x10054281f*/
      }
      if ( v69 ) /*0x100542968*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x100542979*/
    }
    *(_QWORD *)v73 = 0x8000000000000000LL; /*0x1005427ab*/
    goto LABEL_38; /*0x1005427ae*/
  }
  if ( (unsigned __int8)std::path::Path::is_absolute::hc49e17bd8982fd90(v17, v12) || v6 == 0x8000000000000000LL ) /*0x100542a92*/
  {
    *(_QWORD *)&v51 = v37; /*0x100542a94*/
    *((_QWORD *)&v51 + 1) = v17; /*0x100542a9b*/
    *(_QWORD *)&v52 = v12; /*0x100542aa2*/
  }
  else
  {
    std::path::Path::_join::hb1a495d4f06b13b8(&v51, v23, v72, v17, v12); /*0x100542b1d*/
    if ( v37 ) /*0x100542b25*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v37, 1); /*0x100542b32*/
  }
  v39 = v73; /*0x100542ab0*/
  *((_QWORD *)v73 + 2) = v52; /*0x100542ab4*/
  *v39 = v51; /*0x100542aca*/
  if ( v69 != 0x8000000000000000LL && v69 ) /*0x100542aea*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x100542afc*/
LABEL_38:
  result = 2 * v6; /*0x100542822*/
  if ( 2 * v6 ) /*0x100542822*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v6, 1); /*0x10054283a*/
  return result; /*0x10054283f*/
}