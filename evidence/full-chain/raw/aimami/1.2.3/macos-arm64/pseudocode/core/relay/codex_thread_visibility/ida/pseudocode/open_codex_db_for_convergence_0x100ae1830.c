// __ZN13codexmate_lib4core5relay23codex_thread_visibility29open_codex_db_for_convergence @ 0x100ae1830 | 基线 same-set
void __fastcall codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::h5beb13caec9dc4af(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // edx
  unsigned int *v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r12
  char v9; // r15
  unsigned __int64 v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // r12
  __int64 v18; // r15
  _QWORD *v19; // r13
  __int64 v20; // rsi
  void *v21; // rax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD __dst[9]; // [rsp+8h] [rbp-2C8h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-280h] BYREF
  __int64 v27; // [rsp+60h] [rbp-270h] BYREF
  int v28; // [rsp+68h] [rbp-268h]
  unsigned __int64 v29; // [rsp+70h] [rbp-260h]
  unsigned __int64 v30; // [rsp+78h] [rbp-258h]
  unsigned __int64 v31; // [rsp+80h] [rbp-250h]
  _BYTE v32[67]; // [rsp+88h] [rbp-248h] BYREF
  unsigned __int64 v33; // [rsp+D0h] [rbp-200h] BYREF
  _QWORD *v34; // [rsp+D8h] [rbp-1F8h]
  __int64 v35; // [rsp+E0h] [rbp-1F0h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-1E8h]
  unsigned __int64 v37; // [rsp+F8h] [rbp-1D8h] BYREF
  __int64 v38; // [rsp+100h] [rbp-1D0h]
  __int64 v39; // [rsp+108h] [rbp-1C8h]
  _BYTE v40[24]; // [rsp+110h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+128h] [rbp-1A8h]
  int v42; // [rsp+130h] [rbp-1A0h]
  char v43; // [rsp+134h] [rbp-19Ch]
  __int128 v44; // [rsp+135h] [rbp-19Bh]
  _BYTE v45[11]; // [rsp+145h] [rbp-18Bh]
  __int128 v46; // [rsp+150h] [rbp-180h]
  unsigned __int64 v47; // [rsp+160h] [rbp-170h]
  int v48; // [rsp+168h] [rbp-168h]
  unsigned __int64 v49[14]; // [rsp+170h] [rbp-160h] BYREF
  _QWORD v50[14]; // [rsp+1E0h] [rbp-F0h] BYREF
  _DWORD v51[2]; // [rsp+250h] [rbp-80h]
  _DWORD v52[2]; // [rsp+258h] [rbp-78h]
  __int128 v53; // [rsp+260h] [rbp-70h] BYREF
  unsigned __int64 v54; // [rsp+270h] [rbp-60h]
  int v55; // [rsp+278h] [rbp-58h]
  _BYTE v56[27]; // [rsp+280h] [rbp-50h] BYREF
  _BYTE v57[41]; // [rsp+2A7h] [rbp-29h] BYREF

  v38 = a3; /*0x100ae1844*/
  v39 = a2; /*0x100ae184b*/
  v34 = a1; /*0x100ae1852*/
  v37 = 4; /*0x100ae1859*/
  v27 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5); /*0x100ae1869*/
  v28 = v5; /*0x100ae1870*/
  v35 = 0; /*0x100ae1876*/
  v36 = 1u; /*0x100ae1881*/
  v6 = (unsigned int *)&unk_10167DAF8; /*0x100ae18a5*/
  v7 = 0; /*0x100ae18ac*/
  while ( 1 )
  {
    v29 = v7; /*0x100ae18c0*/
    v30 = v7 + 1; /*0x100ae18cb*/
    v33 = v7 + 1; /*0x100ae18d2*/
    rusqlite::Connection::open_with_flags::h45227a733d927884(v50, v39, v38, 32770); /*0x100ae18ec*/
    v8 = v50[0]; /*0x100ae18ff*/
    *(_OWORD *)v40 = *(_OWORD *)&v50[1]; /*0x100ae190e*/
    *(_QWORD *)&v40[16] = v50[3]; /*0x100ae1920*/
    LODWORD(v41) = v50[4]; /*0x100ae192b*/
    v9 = BYTE4(v50[4]); /*0x100ae1931*/
    *(_QWORD *)v56 = *(_QWORD *)((char *)&v50[4] + 5); /*0x100ae1941*/
    *(_OWORD *)&v56[8] = *(_OWORD *)((char *)&v50[5] + 5); /*0x100ae1945*/
    *(_DWORD *)&v56[23] = HIDWORD(v50[7]); /*0x100ae1955*/
    if ( LOBYTE(v50[13]) != 3 ) /*0x100ae195a*/
      break; /*0x100ae195a*/
    v46 = *(_OWORD *)v40; /*0x100ae196a*/
    v47 = *(_QWORD *)&v40[16]; /*0x100ae197f*/
    v48 = (int)v41; /*0x100ae198c*/
    __dst[0] = *(_QWORD *)v56; /*0x100ae199a*/
    *(_OWORD *)&__dst[1] = *(_OWORD *)&v56[8]; /*0x100ae19a1*/
    *(_DWORD *)((char *)&__dst[2] + 7) = *(_DWORD *)&v56[23]; /*0x100ae19b6*/
LABEL_8:
    v55 = v48; /*0x100ae1b9a*/
    v54 = v47; /*0x100ae1baa*/
    v53 = v46; /*0x100ae1bc0*/
    memcpy(v32, __dst, sizeof(v32)); /*0x100ae1bd7*/
    v52[0] = v51[0]; /*0x100ae1be2*/
    *(_DWORD *)((char *)v52 + 3) = *(_DWORD *)((char *)v51 + 3); /*0x100ae1be5*/
LABEL_9:
    if ( v8 != 0x8000000000000000LL || (unsigned __int8)(v9 - 3) >= 2u ) /*0x100ae1c01*/
    {
      v50[0] = v8; /*0x100ae208c*/
      *(_OWORD *)&v50[1] = v53; /*0x100ae209b*/
      v50[3] = v54; /*0x100ae20ad*/
      LODWORD(v50[4]) = v55; /*0x100ae20b7*/
      BYTE4(v50[4]) = v9; /*0x100ae20bd*/
      *(_OWORD *)((char *)&v50[4] + 5) = *(_OWORD *)v32; /*0x100ae20d2*/
      *(_QWORD *)((char *)&v50[6] + 5) = *(_QWORD *)&v32[16]; /*0x100ae20e7*/
      HIDWORD(v50[7]) = *(_DWORD *)&v32[23]; /*0x100ae20f4*/
      *(_QWORD *)v40 = v50; /*0x100ae2101*/
      *(_QWORD *)&v40[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ae210f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v49, &unk_1017CBECD, v40); /*0x100ae212b*/
      v13 = v34; /*0x100ae2137*/
      v34[3] = v49[2]; /*0x100ae213e*/
      v14 = v49[0]; /*0x100ae2142*/
      v13[2] = v49[1]; /*0x100ae2150*/
      v13[1] = v14; /*0x100ae2154*/
      *v13 = 10; /*0x100ae2158*/
      *((_BYTE *)v13 + 104) = 3; /*0x100ae215f*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v50); /*0x100ae216a*/
LABEL_42:
      v24 = v35; /*0x100ae259d*/
      if ( !v35 ) /*0x100ae25a7*/
        return; /*0x100ae25a7*/
LABEL_43:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v24, 1); /*0x100ae25a9*/
      return; /*0x100ae25b5*/
    }
    *(_QWORD *)v40 = 0x8000000000000000LL; /*0x100ae1c11*/
    v42 = v55; /*0x100ae1c1b*/
    v41 = (__int64 (__fastcall *)())v54; /*0x100ae1c23*/
    *(_OWORD *)&v40[8] = v53; /*0x100ae1c33*/
    v43 = v9; /*0x100ae1c37*/
    *(_DWORD *)&v45[7] = *(_DWORD *)&v32[23]; /*0x100ae1c44*/
    *(_QWORD *)v45 = *(_QWORD *)&v32[16]; /*0x100ae1c4f*/
    v44 = *(_OWORD *)v32; /*0x100ae1c65*/
    v49[0] = 0; /*0x100ae1c69*/
    *(_OWORD *)&v49[1] = 1u; /*0x100ae1c74*/
    v50[2] = 1610612768; /*0x100ae1c8a*/
    v50[0] = v49; /*0x100ae1c9c*/
    v50[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100ae1caa*/
    if ( (unsigned __int8)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4( /*0x100ae1cbf*/
                            v40,
                            v50) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100ae278e*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v57,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    *(_QWORD *)v56 = v49[0]; /*0x100ae1cda*/
    *(_OWORD *)&v56[8] = *(_OWORD *)&v49[1]; /*0x100ae1cde*/
    if ( v35 ) /*0x100ae1cf7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x100ae1d05*/
    v36 = *(_OWORD *)&v56[8]; /*0x100ae1d1d*/
    v35 = *(_QWORD *)v56; /*0x100ae1d24*/
    if ( v29 < 3 ) /*0x100ae1d33*/
    {
      v10 = *((_QWORD *)v6 - 1); /*0x100ae1d43*/
      v11 = *v6; /*0x100ae1d5c*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae1d4b*/
      {
        v12 = (0x3E8 * (unsigned __int128)v10 + *v6 / 0xF4240uLL) >> 64; /*0x100ae1d6d*/
        *(_QWORD *)v56 = 1000 * v10 + *v6 / 0xF4240uLL; /*0x100ae1d6d*/
        *(_QWORD *)&v56[8] = v12; /*0x100ae1d75*/
        v26[0] = v39; /*0x100ae1d80*/
        v26[1] = v38; /*0x100ae1d8e*/
        v49[0] = (unsigned __int64)v26; /*0x100ae1d9c*/
        v49[1] = (unsigned __int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ae1daa*/
        v49[2] = (unsigned __int64)&v33; /*0x100ae1db8*/
        v49[3] = (unsigned __int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ae1dc6*/
        v49[4] = (unsigned __int64)&v37; /*0x100ae1dd4*/
        v49[5] = (unsigned __int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ae1ddb*/
        v49[6] = (unsigned __int64)v40; /*0x100ae1de9*/
        v49[7] = (unsigned __int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ae1df7*/
        v49[8] = (unsigned __int64)v56; /*0x100ae1e02*/
        v49[9] = (unsigned __int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100ae1e10*/
        v50[6] = 2; /*0x100ae1e17*/
        v50[7] = &unk_10167D5D6; /*0x100ae1e29*/
        v50[8] = 51; /*0x100ae1e30*/
        v50[10] = &unk_1017CBE6E; /*0x100ae1e42*/
        v50[11] = v49; /*0x100ae1e50*/
        v50[0] = 0; /*0x100ae1e57*/
        v50[1] = &unk_10167D5D6; /*0x100ae1e62*/
        v50[2] = 51; /*0x100ae1e69*/
        v50[3] = 0; /*0x100ae1e74*/
        v50[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae1e86*/
        v50[5] = 41; /*0x100ae1e8d*/
        v50[9] = 0xB8F00000001LL; /*0x100ae1ea2*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v57, v50); /*0x100ae1eb4*/
      }
      std::thread::functions::sleep::h8fc88f8bc00bad5c(v10, v11); /*0x100ae1ec9*/
    }
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v40); /*0x100ae1ed5*/
    v6 += 4; /*0x100ae1eda*/
    v7 = v30; /*0x100ae1ee5*/
    if ( v30 >= v37 )
    {
      v15 = std::time::Instant::elapsed::h457f209775ed485c(&v27); /*0x100ae217b*/
      *(_OWORD *)v56 = 0x3E8 * (unsigned __int128)(unsigned __int64)v15 + v16 / 0xF4240uLL; /*0x100ae219e*/
      codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path::h2ac8f7973a414859( /*0x100ae21bb*/
        (__int64 *)&v53,
        v39,
        v38);
      codexmate_lib::platform::process::list_codex_db_holder_processes::hfeff6cd4dce4f953(v49); /*0x100ae21ca*/
      v50[0] = v49[1]; /*0x100ae21eb*/
      v50[1] = v49[1]; /*0x100ae21f2*/
      v50[2] = v49[0]; /*0x100ae21f9*/
      v50[3] = v49[1] + 32 * v49[2]; /*0x100ae2200*/
      alloc::vec::in_place_collect::from_iter_in_place::hb207497ad06d932b(v32, v50); /*0x100ae2215*/
      v17 = *(_QWORD *)&v32[16]; /*0x100ae221a*/
      if ( *(_QWORD *)&v32[16] )
      {
        v18 = *(_QWORD *)&v32[8]; /*0x100ae222a*/
        alloc::str::join_generic_copy::heca7a5e86402c6b6(v50, *(_QWORD *)&v32[8], *(_QWORD *)&v32[16], " | ", 3); /*0x100ae224b*/
        *(_OWORD *)&v49[1] = *(_OWORD *)&v50[1]; /*0x100ae226c*/
        v49[0] = v50[0]; /*0x100ae2273*/
        v50[0] = v49; /*0x100ae227a*/
        v50[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ae2288*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v40, &unk_1017CA830, v50); /*0x100ae22a4*/
        if ( v49[0] ) /*0x100ae22b3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49[1], v49[0], 1); /*0x100ae22c1*/
        v19 = (_QWORD *)(v18 + 8); /*0x100ae22c6*/
        do /*0x100ae22d7*/
        {
          v20 = *(v19 - 1); /*0x100ae22dd*/
          if ( v20 ) /*0x100ae22e4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v19, v20, 1); /*0x100ae22ef*/
          v19 += 3; /*0x100ae22d0*/
          --v17; /*0x100ae22d4*/
        }
        while ( v17 ); /*0x100ae22d7*/
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v50); /*0x100ae22f6*/
        v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x100ae2305*/
        if ( !v21 ) /*0x100ae230d*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x100ae279f*/
        qmemcpy(v21, "db holders: none detected", 25);
        *(_QWORD *)v40 = 25; /*0x100ae2340*/
        *(_QWORD *)&v40[8] = v21; /*0x100ae234b*/
        *(_QWORD *)&v40[16] = 25; /*0x100ae2352*/
        v18 = *(_QWORD *)&v32[8]; /*0x100ae235d*/
      }
      if ( *(_QWORD *)v32 ) /*0x100ae236e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 24LL * *(_QWORD *)v32, 8); /*0x100ae2380*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae2393*/
      {
        v49[0] = (unsigned __int64)&v53; /*0x100ae2399*/
        v49[1] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ae23a7*/
        v49[2] = (unsigned __int64)&v37; /*0x100ae23b5*/
        v49[3] = (unsigned __int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ae23c3*/
        v49[4] = (unsigned __int64)v56; /*0x100ae23ce*/
        v49[5] = (unsigned __int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100ae23dc*/
        v49[6] = (unsigned __int64)&v35; /*0x100ae23ea*/
        v49[7] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ae23f1*/
        v49[8] = (unsigned __int64)v40; /*0x100ae23ff*/
        v49[9] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ae2406*/
        v50[6] = 2; /*0x100ae240d*/
        v50[7] = &unk_10167D5D6; /*0x100ae241f*/
        v50[8] = 51; /*0x100ae2426*/
        v50[10] = &unk_1017CBD79; /*0x100ae2438*/
        v50[11] = v49; /*0x100ae243f*/
        v50[0] = 0; /*0x100ae2446*/
        v50[1] = &unk_10167D5D6; /*0x100ae2451*/
        v50[2] = 51; /*0x100ae2458*/
        v50[3] = 0; /*0x100ae2463*/
        v50[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae2475*/
        v50[5] = 41; /*0x100ae247c*/
        v50[9] = 0xBAB00000001LL; /*0x100ae2491*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v57, v50); /*0x100ae24a3*/
      }
      v50[0] = &v53; /*0x100ae24a8*/
      v50[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ae24b6*/
      v50[2] = &v37; /*0x100ae24c4*/
      v50[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ae24d2*/
      v50[4] = v56; /*0x100ae24dd*/
      v50[5] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100ae24eb*/
      v50[6] = &v35; /*0x100ae24f9*/
      v50[7] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ae2500*/
      v50[8] = v40; /*0x100ae250e*/
      v50[9] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ae2515*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v49, &unk_1017CBDD8, v50); /*0x100ae2531*/
      v22 = v34; /*0x100ae253d*/
      v34[3] = v49[2]; /*0x100ae2544*/
      v23 = v49[0]; /*0x100ae2548*/
      v22[2] = v49[1]; /*0x100ae2556*/
      v22[1] = v23; /*0x100ae255a*/
      *v22 = 10; /*0x100ae255e*/
      *((_BYTE *)v22 + 104) = 3; /*0x100ae2565*/
      if ( *(_QWORD *)v40 ) /*0x100ae2573*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v40[8], *(_QWORD *)v40, 1); /*0x100ae2581*/
      if ( (_QWORD)v53 ) /*0x100ae258d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v53 + 1), v53, 1); /*0x100ae2598*/
      goto LABEL_42; /*0x100ae2598*/
    }
  }
  v49[12] = v50[12]; /*0x100ae19d4*/
  v49[11] = v50[11]; /*0x100ae19dc*/
  v49[10] = v50[10]; /*0x100ae19e4*/
  v49[9] = v50[9]; /*0x100ae19f0*/
  v49[8] = v50[8]; /*0x100ae19f4*/
  v49[13] = v50[13]; /*0x100ae19ff*/
  v49[0] = v50[0]; /*0x100ae1a04*/
  LODWORD(v49[4]) = (_DWORD)v41; /*0x100ae1a11*/
  v49[3] = *(_QWORD *)&v40[16]; /*0x100ae1a1b*/
  *(_OWORD *)&v49[1] = *(_OWORD *)v40; /*0x100ae1a31*/
  BYTE4(v49[4]) = BYTE4(v50[4]); /*0x100ae1a35*/
  HIDWORD(v49[7]) = *(_DWORD *)&v56[23]; /*0x100ae1a46*/
  *(_OWORD *)((char *)&v49[5] + 5) = *(_OWORD *)&v56[8]; /*0x100ae1a59*/
  *(unsigned __int64 *)((char *)&v49[4] + 5) = *(_QWORD *)v56; /*0x100ae1a5d*/
  rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v50, v49, 5, 0); /*0x100ae1a7b*/
  v8 = v50[0]; /*0x100ae1a80*/
  if ( v50[0] != 0x8000000000000016LL ) /*0x100ae1a98*/
  {
    v48 = v50[4]; /*0x100ae1b34*/
    v47 = v50[3]; /*0x100ae1b3e*/
    v46 = *(_OWORD *)&v50[1]; /*0x100ae1b54*/
    v9 = BYTE4(v50[4]); /*0x100ae1b5b*/
    __dst[0] = *(_QWORD *)((char *)&v50[4] + 5); /*0x100ae1b6b*/
    *(_OWORD *)&__dst[1] = *(_OWORD *)((char *)&v50[5] + 5); /*0x100ae1b72*/
    *(_DWORD *)((char *)&__dst[2] + 7) = HIDWORD(v50[7]); /*0x100ae1b88*/
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v49); /*0x100ae1b95*/
    goto LABEL_8; /*0x100ae1b95*/
  }
  v31 = 0x8000000000000016LL; /*0x100ae1a9e*/
  v8 = v49[0]; /*0x100ae1aa5*/
  v46 = *(_OWORD *)&v49[1]; /*0x100ae1abb*/
  v47 = v49[3]; /*0x100ae1acd*/
  v48 = v49[4]; /*0x100ae1ad8*/
  v9 = BYTE4(v49[4]); /*0x100ae1ade*/
  memcpy(__dst, (char *)&v49[4] + 5, 0x43u); /*0x100ae1af9*/
  v51[0] = *(_DWORD *)((char *)&v49[13] + 1); /*0x100ae1b0e*/
  *(_DWORD *)((char *)v51 + 3) = HIDWORD(v49[13]); /*0x100ae1b11*/
  if ( LOBYTE(v49[13]) == 3 ) /*0x100ae1b18*/
    goto LABEL_8; /*0x100ae1b18*/
  LODWORD(v49[4]) = v48; /*0x100ae1f0e*/
  v49[3] = v47; /*0x100ae1f18*/
  *(_OWORD *)&v49[1] = v46; /*0x100ae1f2e*/
  memcpy((char *)&v49[4] + 5, __dst, 0x43u); /*0x100ae1f4f*/
  *(_DWORD *)((char *)&v49[13] + 1) = v51[0]; /*0x100ae1f5a*/
  HIDWORD(v49[13]) = *(_DWORD *)((char *)v51 + 3); /*0x100ae1f5d*/
  rusqlite::Connection::execute_batch::h4a2529fc120bbad7( /*0x100ae1f85*/
    v40,
    v49,
    "PRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''",
    28);
  qmemcpy(v50, v49, sizeof(v50)); /*0x100ae1fa3*/
  v8 = *(_QWORD *)v40; /*0x100ae1fa6*/
  if ( *(_QWORD *)v40 != v31 ) /*0x100ae1fb4*/
  {
    v55 = v42; /*0x100ae2031*/
    v54 = (unsigned __int64)v41; /*0x100ae2038*/
    v53 = *(_OWORD *)&v40[8]; /*0x100ae2048*/
    v9 = v43; /*0x100ae204c*/
    *(_OWORD *)v32 = v44; /*0x100ae205c*/
    *(_QWORD *)&v32[16] = *(_QWORD *)v45; /*0x100ae206e*/
    *(_DWORD *)&v32[23] = *(_DWORD *)&v45[7]; /*0x100ae2079*/
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v50); /*0x100ae2082*/
    goto LABEL_9; /*0x100ae2087*/
  }
  v8 = v49[0]; /*0x100ae1fb6*/
  v53 = *(_OWORD *)&v49[1]; /*0x100ae1fcc*/
  v54 = v49[3]; /*0x100ae1fd8*/
  v55 = v49[4]; /*0x100ae1fe0*/
  v9 = BYTE4(v49[4]); /*0x100ae1fe3*/
  memcpy(v32, (char *)&v49[4] + 5, sizeof(v32)); /*0x100ae1ffe*/
  v52[0] = *(_DWORD *)((char *)&v49[13] + 1); /*0x100ae2012*/
  *(_DWORD *)((char *)v52 + 3) = HIDWORD(v49[13]); /*0x100ae2015*/
  if ( LOBYTE(v49[13]) == 3 ) /*0x100ae201b*/
    goto LABEL_9; /*0x100ae201b*/
  v50[0] = v49[0]; /*0x100ae25cc*/
  *(_OWORD *)&v50[1] = v53; /*0x100ae25db*/
  v50[3] = v54; /*0x100ae25ed*/
  LODWORD(v50[4]) = v55; /*0x100ae25f7*/
  BYTE4(v50[4]) = BYTE4(v49[4]); /*0x100ae25fd*/
  memcpy((char *)&v50[4] + 5, v32, 0x43u); /*0x100ae2619*/
  LOBYTE(v50[13]) = v49[13]; /*0x100ae261e*/
  *(_DWORD *)((char *)&v50[13] + 1) = v52[0]; /*0x100ae262a*/
  HIDWORD(v50[13]) = *(_DWORD *)((char *)v52 + 3); /*0x100ae2630*/
  if ( v33 > 1 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x100ae2652*/
  {
    *(_QWORD *)v56 = v39; /*0x100ae265f*/
    *(_QWORD *)&v56[8] = v38; /*0x100ae266a*/
    *(_QWORD *)v40 = v56; /*0x100ae2672*/
    *(_QWORD *)&v40[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ae2680*/
    *(_QWORD *)&v40[16] = &v33; /*0x100ae268e*/
    v41 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ae269c*/
    v49[6] = 3; /*0x100ae26a3*/
    v49[7] = (unsigned __int64)&unk_10167D5D6; /*0x100ae26b5*/
    v49[8] = 51; /*0x100ae26bc*/
    v49[10] = (unsigned __int64)&unk_1017CBE1F; /*0x100ae26ce*/
    v49[11] = (unsigned __int64)v40; /*0x100ae26dc*/
    v49[0] = 0; /*0x100ae26e3*/
    v49[1] = (unsigned __int64)&unk_10167D5D6; /*0x100ae26ee*/
    v49[2] = 51; /*0x100ae26f5*/
    v49[3] = 0; /*0x100ae2700*/
    v49[4] = (unsigned __int64)"src/core/relay/codex_thread_visibility.rs"; /*0x100ae2712*/
    v49[5] = 41; /*0x100ae2719*/
    v49[9] = 0xB8000000001LL; /*0x100ae272e*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v57, v49); /*0x100ae2740*/
  }
  qmemcpy(v34, v50, 0x70u); /*0x100ae2758*/
  v24 = v35; /*0x100ae275b*/
  if ( v35 ) /*0x100ae2765*/
    goto LABEL_43; /*0x100ae2765*/
}