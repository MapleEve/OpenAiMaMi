// __ZN13codexmate_lib8commands6system9open_path @ 0x1007cda80 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::open_path::h987a265cbb3bd987(__int64 a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // r13
  __int64 v5; // r12
  __int128 v6; // xmm0
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned int v11; // r13d
  unsigned int v12; // r12d
  _BYTE v13[200]; // [rsp+8h] [rbp-168h] BYREF
  __int128 v14; // [rsp+D0h] [rbp-A0h]
  _QWORD v15[3]; // [rsp+E0h] [rbp-90h] BYREF
  int v16; // [rsp+F8h] [rbp-78h] BYREF
  __int64 v17; // [rsp+100h] [rbp-70h]
  unsigned int v18; // [rsp+108h] [rbp-68h]
  unsigned int v19; // [rsp+10Ch] [rbp-64h]
  __int64 v20; // [rsp+110h] [rbp-60h] BYREF
  __int128 v21; // [rsp+118h] [rbp-58h]
  __int64 v22; // [rsp+128h] [rbp-48h] BYREF
  __int64 v23; // [rsp+130h] [rbp-40h]
  __int64 v24; // [rsp+138h] [rbp-38h]
  _BYTE v25[41]; // [rsp+147h] [rbp-29h] BYREF

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(v13, "openwithkindsavetrueuuidemitshowhide", 4); /*0x1007cdaad*/
  v3 = a2[1]; /*0x1007cdab2*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v13, a2[1], a2[2]); /*0x1007cdac4*/
  std::process::Command::spawn::hcb9dc323794e167a(&v16, v13); /*0x1007cdad4*/
  if ( v16 == 2 ) /*0x1007cdadd*/
  {
    v4 = v17; /*0x1007cdae3*/
    v22 = v17; /*0x1007cdae7*/
    v20 = 0; /*0x1007cdaeb*/
    v21 = 1u; /*0x1007cdaf3*/
    v15[2] = 1610612768; /*0x1007cdb03*/
    v15[0] = &v20; /*0x1007cdb0f*/
    v15[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cdb1d*/
    if ( (unsigned __int8)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0( /*0x1007cdb2f*/
                            &v22,
                            v15) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cdc59*/
        &anon_3ce6d1417794db0febde534c64082f90_390,
        55,
        v25,
        &anon_3ce6d1417794db0febde534c64082f90_429,
        &anon_3ce6d1417794db0febde534c64082f90_392);
    v5 = v20; /*0x1007cdb3c*/
    v6 = v21; /*0x1007cdb40*/
    if ( (v4 & 3) == 1 ) /*0x1007cdb4d*/
    {
      v14 = v21; /*0x1007cdb4f*/
      v23 = v4 - 1; /*0x1007cdb5a*/
      v24 = *(_QWORD *)(v4 - 1); /*0x1007cdb62*/
      v7 = *(_QWORD *)(v4 + 7); /*0x1007cdb66*/
      if ( *(_QWORD *)v7 ) /*0x1007cdb6a*/
        (*(void (__fastcall **)(__int64, double))v7)(v24, *(double *)&v21); /*0x1007cdb77*/
      v8 = *(_QWORD *)(v7 + 8); /*0x1007cdb7d*/
      if ( v8 ) /*0x1007cdb84*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v8, *(_QWORD *)(v7 + 16)); /*0x1007cdb8a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, 24, 8); /*0x1007cdb9d*/
      v6 = v14; /*0x1007cdba2*/
    }
    *(_QWORD *)a1 = v5; /*0x1007cdba9*/
    *(_OWORD *)(a1 + 8) = v6; /*0x1007cdbac*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v13); /*0x1007cdbb8*/
    v9 = *a2; /*0x1007cdbbd*/
    if ( *a2 ) /*0x1007cdbbd*/
LABEL_10:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v9, 1); /*0x1007cdbc5*/
  }
  else
  {
    v11 = v18; /*0x1007cdbea*/
    v12 = v19; /*0x1007cdbee*/
    if ( HIDWORD(v17) != -1 ) /*0x1007cdbf5*/
      close_NOCANCEL(HIDWORD(v17)); /*0x1007cdbf7*/
    if ( v11 != -1 ) /*0x1007cdc00*/
      close_NOCANCEL(v11); /*0x1007cdc05*/
    if ( v12 != -1 ) /*0x1007cdc0e*/
      close_NOCANCEL(v12); /*0x1007cdc13*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v13); /*0x1007cdc1f*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1007cdc2e*/
    v9 = *a2; /*0x1007cdc31*/
    if ( *a2 ) /*0x1007cdc31*/
      goto LABEL_10; /*0x1007cdc37*/
  }
  return a1; /*0x1007cdbd5*/
}