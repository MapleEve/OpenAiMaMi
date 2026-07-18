// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x1009c8d90 d=1
unsigned __int64 *__fastcall _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h134e9709f5ebf16b(
        unsigned __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  bool v12; // cf
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 *result; // rax
  unsigned __int64 v16; // rdx
  _QWORD v17[5]; // [rsp+10h] [rbp-C0h] BYREF
  _QWORD v18[6]; // [rsp+38h] [rbp-98h] BYREF
  __int64 v19; // [rsp+68h] [rbp-68h]
  unsigned __int64 *v20; // [rsp+70h] [rbp-60h]
  __int64 v21; // [rsp+78h] [rbp-58h]
  __int64 v22; // [rsp+80h] [rbp-50h]
  unsigned __int64 v23; // [rsp+88h] [rbp-48h] BYREF
  __int64 v24; // [rsp+90h] [rbp-40h]
  unsigned __int64 v25; // [rsp+98h] [rbp-38h]
  _QWORD v26[6]; // [rsp+A0h] [rbp-30h] BYREF

  v20 = a1; /*0x1009c8da4*/
  v23 = 0; /*0x1009c8da8*/
  v24 = 1; /*0x1009c8db0*/
  v25 = 0; /*0x1009c8db8*/
  v2 = *a2; /*0x1009c8dc0*/
  v3 = a2[1]; /*0x1009c8dc3*/
  v4 = a2[2]; /*0x1009c8dc7*/
  v5 = a2[3]; /*0x1009c8dcb*/
  v17[3] = a2[4]; /*0x1009c8dd3*/
  v17[2] = v5; /*0x1009c8dda*/
  v6 = a2[5]; /*0x1009c8de1*/
  v7 = a2[6]; /*0x1009c8de5*/
  v8 = a2[7]; /*0x1009c8de9*/
  v18[3] = a2[9]; /*0x1009c8df1*/
  v18[2] = a2[8]; /*0x1009c8df9*/
  v9 = a2[10]; /*0x1009c8e00*/
  v22 = a2[11]; /*0x1009c8e08*/
  v19 = v3; /*0x1009c8e0f*/
  v10 = v4 - v3; /*0x1009c8e13*/
  v11 = 0; /*0x1009c8e1c*/
  v21 = v6; /*0x1009c8e1e*/
  if ( (v6 & 1) != 0 ) /*0x1009c8e25*/
    v11 = v8 - v7; /*0x1009c8e25*/
  v12 = __CFADD__(v11, v10); /*0x1009c8e29*/
  v13 = v11 + v10; /*0x1009c8e29*/
  v14 = -1; /*0x1009c8e2c*/
  if ( !v12 ) /*0x1009c8e33*/
    v14 = v13; /*0x1009c8e33*/
  if ( (v2 & 1) == 0 ) /*0x1009c8e3b*/
    v14 = v11; /*0x1009c8e3b*/
  if ( v14 ) /*0x1009c8e42*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e(&v23, 0, v14, 1, 1u); /*0x1009c8f0d*/
  v17[0] = v19; /*0x1009c8e53*/
  v17[1] = v4; /*0x1009c8e5a*/
  v17[4] = v21; /*0x1009c8e65*/
  v18[0] = v7; /*0x1009c8e6c*/
  v18[1] = v8; /*0x1009c8e73*/
  v18[4] = v9; /*0x1009c8e7a*/
  v18[5] = v22; /*0x1009c8e82*/
  v26[0] = &v23; /*0x1009c8e8a*/
  if ( (v2 & 1) != 0 ) /*0x1009c8e92*/
    _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hb44de6d37d090585( /*0x1009c8e9f*/
      v17,
      v26);
  if ( v9 ) /*0x1009c8ea7*/
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h939c732c6fc111fa( /*0x1009c8eb4*/
      v9,
      v22,
      v26);
  if ( (v21 & 1) != 0 ) /*0x1009c8ebd*/
    _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hb44de6d37d090585( /*0x1009c8eca*/
      v18,
      v26);
  result = v20; /*0x1009c8ed3*/
  v20[2] = v25; /*0x1009c8ed7*/
  v16 = v23; /*0x1009c8edb*/
  result[1] = v24; /*0x1009c8ee3*/
  *result = v16; /*0x1009c8ee7*/
  return result; /*0x1009c8eea*/
}