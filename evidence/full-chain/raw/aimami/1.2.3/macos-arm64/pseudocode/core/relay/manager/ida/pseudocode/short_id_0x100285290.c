// __ZN13codexmate_lib4core5relay7manager8short_id @ 0x100285290 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::short_id::hb044325f66ad609e(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r15
  __int64 (__fastcall **i)(); // rbx
  __int64 v4; // r9
  __int64 (__fastcall **v5)(); // r14
  size_t v6; // r12
  size_t v7; // r14
  char *v8; // r15
  char *v9; // rsi
  size_t v10; // rbx
  __int64 v11; // r14
  __int64 result; // rax
  __int64 v13; // rbx
  _BYTE v14[16]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-A8h]
  __int64 (__fastcall **v16)(); // [rsp+20h] [rbp-A0h]
  __int64 *v17; // [rsp+28h] [rbp-98h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+30h] [rbp-90h]
  __int64 v19; // [rsp+38h] [rbp-88h]
  __int64 (__fastcall **v20)(); // [rsp+40h] [rbp-80h]
  __int64 v21; // [rsp+48h] [rbp-78h]
  char v22; // [rsp+50h] [rbp-70h]
  __int64 v23; // [rsp+58h] [rbp-68h]
  __int64 v24; // [rsp+60h] [rbp-60h] BYREF
  __int64 v25; // [rsp+68h] [rbp-58h]
  __int64 (__fastcall **v26)(); // [rsp+70h] [rbp-50h]
  __int64 v27; // [rsp+78h] [rbp-48h]
  __int64 v28; // [rsp+80h] [rbp-40h] BYREF
  __int64 v29; // [rsp+88h] [rbp-38h]
  __int64 v30; // [rsp+90h] [rbp-30h]

  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v14); /*0x1002852b1*/
  v24 = 0; /*0x1002852b6*/
  v25 = 1; /*0x1002852be*/
  v26 = nullptr; /*0x1002852c6*/
  v19 = 1610612768; /*0x1002852ce*/
  v17 = &v24; /*0x1002852dd*/
  v18 = &off_10195E1D8; /*0x1002852eb*/
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x1002852fc*/
                          v14,
                          &v17) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DEF8B, 55, &v28, &unk_10195E760, &off_10195E208); /*0x1002854b8*/
  v15 = a1; /*0x100285309*/
  v23 = v24; /*0x100285314*/
  v28 = 0; /*0x100285320*/
  v29 = 1; /*0x100285328*/
  v30 = 0; /*0x100285330*/
  v27 = v25; /*0x100285338*/
  v17 = (__int64 *)v25; /*0x10028533c*/
  v18 = v26; /*0x100285343*/
  v19 = 0; /*0x10028534a*/
  v16 = v26; /*0x100285355*/
  v20 = v26; /*0x10028535c*/
  v21 = 0x2D0000002DLL; /*0x10028536a*/
  v22 = 1; /*0x10028536e*/
  v1 = 1; /*0x100285372*/
  v2 = 0; /*0x100285378*/
  for ( i = nullptr; ; i = v5 ) /*0x10028537b*/
  {
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10028538b*/
      &v24,
      &v17);
    if ( !(_BYTE)v24 ) /*0x100285394*/
      break; /*0x100285394*/
    v5 = v26; /*0x10028539a*/
    v6 = v25 - (_QWORD)i; /*0x10028539e*/
    if ( v25 - (__int64)i > (unsigned __int64)(v28 - v2) ) /*0x1002853ab*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1002853e2*/
        &v28,
        v2,
        v25 - (_QWORD)i,
        1,
        1,
        v4);
      v1 = v29; /*0x1002853e7*/
      v2 = v30; /*0x1002853eb*/
    }
    memcpy((void *)(v1 + v2), (char *)i + v27, v6); /*0x1002853bc*/
    v2 += v6; /*0x1002853c1*/
    v30 = v2; /*0x1002853c4*/
  }
  v7 = (char *)v16 - (char *)i; /*0x100285402*/
  if ( (char *)v16 - (char *)i > (unsigned __int64)(v28 - v2) ) /*0x100285408*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1002854d4*/
      &v28,
      v2,
      (char *)v16 - (char *)i,
      1,
      1,
      v4);
    v1 = v29; /*0x1002854d9*/
    v2 = v30; /*0x1002854dd*/
  }
  v8 = (char *)(v1 + v2); /*0x100285412*/
  v9 = (char *)i + v27; /*0x100285418*/
  v10 = v7; /*0x10028541b*/
  memcpy(v8, v9, v7); /*0x100285421*/
  v11 = v28; /*0x100285426*/
  v17 = (__int64 *)v1; /*0x10028542d*/
  v18 = (__int64 (__fastcall **)())&v8[v10]; /*0x100285434*/
  v19 = 10; /*0x10028543b*/
  result = _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hd906709289eb08f4( /*0x100285454*/
             v15,
             &v17);
  v13 = v23; /*0x10028545c*/
  if ( v11 ) /*0x100285460*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v11, 1); /*0x10028546d*/
  if ( v13 ) /*0x100285475*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v13, 1); /*0x100285483*/
  return result; /*0x100285488*/
}