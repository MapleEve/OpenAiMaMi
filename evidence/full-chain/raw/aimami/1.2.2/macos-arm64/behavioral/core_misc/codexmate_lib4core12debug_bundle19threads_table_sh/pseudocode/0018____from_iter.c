// mac 1.2.2 NEW codexmate_lib4core12debug_bundle19threads_table_sh 0x1008a1560 d=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h3b81d1d895a04af6(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned __int64 *v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v18; // [rsp+0h] [rbp-130h] BYREF
  __int64 v19; // [rsp+8h] [rbp-128h]
  __int64 v20; // [rsp+10h] [rbp-120h]
  __int64 v21; // [rsp+18h] [rbp-118h]
  __int64 v22; // [rsp+20h] [rbp-110h]
  __int64 v23; // [rsp+28h] [rbp-108h]
  __int64 v24; // [rsp+30h] [rbp-100h]
  __int64 v25; // [rsp+38h] [rbp-F8h]
  unsigned __int64 v26; // [rsp+40h] [rbp-F0h]
  unsigned __int64 v27; // [rsp+48h] [rbp-E8h]
  unsigned __int64 *v28; // [rsp+50h] [rbp-E0h]
  _QWORD *v29; // [rsp+58h] [rbp-D8h]
  __int128 v30; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+78h] [rbp-B8h]
  __int64 v33; // [rsp+80h] [rbp-B0h]
  __int64 v34; // [rsp+88h] [rbp-A8h]
  __int64 v35; // [rsp+90h] [rbp-A0h]
  __int64 v36; // [rsp+98h] [rbp-98h]
  __int64 v37; // [rsp+A0h] [rbp-90h]
  __int64 v38; // [rsp+A8h] [rbp-88h]
  unsigned __int64 v39; // [rsp+B0h] [rbp-80h] BYREF
  _QWORD *v40; // [rsp+B8h] [rbp-78h]
  __int64 v41; // [rsp+C0h] [rbp-70h]
  __int64 v42; // [rsp+C8h] [rbp-68h]
  __int128 v43; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-48h]
  __int64 v45; // [rsp+F0h] [rbp-40h]
  __int64 v46; // [rsp+F8h] [rbp-38h]
  __int64 v47; // [rsp+100h] [rbp-30h]

  v28 = a1; /*0x1008a1574*/
  *(_QWORD *)&v43 = a2; /*0x1008a1585*/
  *((_QWORD *)&v43 + 1) = a3; /*0x1008a1589*/
  v27 = 0x8000000000000017LL; /*0x1008a159f*/
  v26 = 0x8000000000000000LL; /*0x1008a15aa*/
  while ( 1 ) /*0x1008a15d7*/
  {
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x1008a15d7*/
      &v18,
      &v43);
    v3 = v18; /*0x1008a15dc*/
    if ( v18 == 0x8000000000000016LL ) /*0x1008a15f0*/
      break; /*0x1008a15f0*/
    v4 = v19; /*0x1008a1670*/
    v38 = v25; /*0x1008a167b*/
    v37 = v24; /*0x1008a1683*/
    v36 = v23; /*0x1008a168b*/
    v35 = v22; /*0x1008a1693*/
    v34 = v21; /*0x1008a169e*/
    v33 = v20; /*0x1008a16a2*/
    v31 = v18; /*0x1008a16a6*/
    v32 = v19; /*0x1008a16ad*/
    v5 = v20; /*0x1008a16b4*/
    v6 = v21; /*0x1008a16bb*/
    v44 = v22; /*0x1008a16ca*/
    v45 = v23; /*0x1008a16ce*/
    v46 = v24; /*0x1008a16d6*/
    v47 = v25; /*0x1008a16de*/
LABEL_8:
    v38 = v47; /*0x1008a16e2*/
    v37 = v46; /*0x1008a16ee*/
    v36 = v45; /*0x1008a16fa*/
    v35 = v44; /*0x1008a16fe*/
    v31 = v3; /*0x1008a1702*/
    v32 = v4; /*0x1008a1709*/
    v33 = v5; /*0x1008a1710*/
    v34 = v6; /*0x1008a1717*/
    if ( v3 == 0x8000000000000016LL ) /*0x1008a172b*/
    {
      if ( v4 != v26 ) /*0x1008a1738*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008a173e*/
        v7 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x60u, 8u); /*0x1008a174d*/
        if ( !v7 ) /*0x1008a1755*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8); /*0x1008a19eb*/
        *v7 = v4; /*0x1008a175b*/
        v7[1] = v5; /*0x1008a175e*/
        v7[2] = v6; /*0x1008a1762*/
        v39 = 4; /*0x1008a1766*/
        v29 = v7; /*0x1008a176e*/
        v40 = v7; /*0x1008a1775*/
        v41 = 1; /*0x1008a1779*/
        v30 = v43; /*0x1008a1785*/
        v42 = 1; /*0x1008a1791*/
        while ( 1 ) /*0x1008a17ba*/
        {
          _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x1008a17ba*/
            &v18,
            &v30);
          v8 = v18; /*0x1008a17bf*/
          if ( v18 == 0x8000000000000016LL ) /*0x1008a17d3*/
          {
            if ( !*((_QWORD *)&v30 + 1) ) /*0x1008a17dd*/
              goto LABEL_24; /*0x1008a17dd*/
            rusqlite::row::Row::get::h6ee44dbb4cb5afdf(&v31, (char *)&v30 + 8, 1, &off_10189D088); /*0x1008a17fd*/
            v8 = v31; /*0x1008a1802*/
            v9 = v32; /*0x1008a1809*/
            v10 = v33; /*0x1008a1810*/
            v11 = v34; /*0x1008a1817*/
            v44 = v35; /*0x1008a1826*/
            v45 = v36; /*0x1008a182a*/
            v46 = v37; /*0x1008a1832*/
            v47 = v38; /*0x1008a183a*/
            if ( v31 == v27 ) /*0x1008a1845*/
            {
LABEL_24:
              core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h546317856ed6037f(&v30); /*0x1008a19a9*/
              v15 = v28; /*0x1008a19b2*/
              v28[2] = v41; /*0x1008a19b9*/
              v16 = v39; /*0x1008a19bd*/
              v15[1] = (unsigned __int64)v40; /*0x1008a19c5*/
              *v15 = v16; /*0x1008a19c9*/
              return v15; /*0x1008a19c9*/
            }
          }
          else
          {
            v9 = v19; /*0x1008a1850*/
            v38 = v25; /*0x1008a185b*/
            v37 = v24; /*0x1008a1863*/
            v36 = v23; /*0x1008a186b*/
            v35 = v22; /*0x1008a1873*/
            v34 = v21; /*0x1008a187e*/
            v33 = v20; /*0x1008a1882*/
            v31 = v18; /*0x1008a1886*/
            v32 = v19; /*0x1008a188d*/
            v10 = v20; /*0x1008a1894*/
            v11 = v21; /*0x1008a189b*/
            v44 = v22; /*0x1008a18aa*/
            v45 = v23; /*0x1008a18ae*/
            v46 = v24; /*0x1008a18b6*/
            v47 = v25; /*0x1008a18be*/
          }
          v38 = v47; /*0x1008a18c6*/
          v37 = v46; /*0x1008a18ce*/
          v36 = v45; /*0x1008a18da*/
          v35 = v44; /*0x1008a18de*/
          v31 = v8; /*0x1008a18e2*/
          v32 = v9; /*0x1008a18e9*/
          v33 = v10; /*0x1008a18f0*/
          v34 = v11; /*0x1008a18f7*/
          if ( v8 == 0x8000000000000016LL ) /*0x1008a190b*/
          {
            if ( v9 != v26 ) /*0x1008a1918*/
            {
              v12 = v42; /*0x1008a191e*/
              if ( v42 == v39 ) /*0x1008a1926*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e( /*0x1008a193c*/
                  &v39,
                  v42,
                  1,
                  8,
                  0x18u);
                v29 = v40; /*0x1008a1945*/
                v12 = v42; /*0x1008a194c*/
              }
              v13 = 3 * v12; /*0x1008a1950*/
              v14 = v29; /*0x1008a1954*/
              v29[v13] = v9; /*0x1008a195b*/
              v14[v13 + 1] = v10; /*0x1008a195f*/
              v14[v13 + 2] = v11; /*0x1008a1964*/
              v42 = v12 + 1; /*0x1008a196c*/
              v41 = v12 + 1; /*0x1008a1970*/
            }
          }
          else
          {
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(&v31); /*0x1008a17a7*/
          }
        }
      }
    }
    else
    {
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(&v31); /*0x1008a15c7*/
    }
  }
  if ( *((_QWORD *)&v43 + 1) ) /*0x1008a15f7*/
  {
    rusqlite::row::Row::get::h6ee44dbb4cb5afdf(&v31, (char *)&v43 + 8, 1, &off_10189D088); /*0x1008a1614*/
    v3 = v31; /*0x1008a1619*/
    v4 = v32; /*0x1008a1620*/
    v5 = v33; /*0x1008a1627*/
    v6 = v34; /*0x1008a162e*/
    v44 = v35; /*0x1008a163d*/
    v45 = v36; /*0x1008a1641*/
    v46 = v37; /*0x1008a1649*/
    v47 = v38; /*0x1008a1651*/
    if ( v31 != v27 ) /*0x1008a165c*/
      goto LABEL_8; /*0x1008a165c*/
  }
  v15 = v28; /*0x1008a1979*/
  *v28 = 0; /*0x1008a1980*/
  v15[1] = 8; /*0x1008a1987*/
  v15[2] = 0; /*0x1008a198f*/
  core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h546317856ed6037f(&v43); /*0x1008a199b*/
  return v15; /*0x1008a19cf*/
}