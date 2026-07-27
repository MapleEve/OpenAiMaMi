// __ZN13codexmate_lib8commands8accounts27account_key_from_auth_bytes @ 0x1006996c0
__int64 __fastcall codexmate_lib::commands::accounts::account_key_from_auth_bytes::ha7a8465052840e66(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-1B8h] BYREF
  _QWORD __dst[22]; // [rsp+10h] [rbp-1B0h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-100h]
  __int64 v16; // [rsp+C8h] [rbp-F8h]
  __int64 v17; // [rsp+D0h] [rbp-F0h]
  __int64 v18; // [rsp+D8h] [rbp-E8h] BYREF
  _QWORD __src[21]; // [rsp+E0h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+188h] [rbp-38h]
  __int64 v21; // [rsp+190h] [rbp-30h]

  v13 = a2; /*0x1006996e7*/
  __dst[0] = a3; /*0x1006996ee*/
  __dst[1] = 0; /*0x1006996f5*/
  __dst[2] = 0; /*0x100699700*/
  serde_json::de::from_trait::hee93ab9047d5d7fd(&v18, &v13); /*0x100699719*/
  if ( v18 == 0x8000000000000001LL ) /*0x10069972d*/
  {
    result = core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthFile$C$serde_json..error..Error$GT$$GT$::hf5b7657b26f32e8b(&v18); /*0x100699736*/
    *a1 = 0x8000000000000000LL; /*0x10069973b*/
    return result; /*0x10069973e*/
  }
  memcpy(__dst, __src, 0xA8u); /*0x100699756*/
  v13 = v18; /*0x10069975b*/
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(&v18, &v13, a4, a5); /*0x100699776*/
  if ( (_DWORD)v18 != 2 ) /*0x100699782*/
  {
    v17 = __src[3]; /*0x10069979f*/
    v16 = __src[2]; /*0x1006997ad*/
    v15 = __src[1]; /*0x1006997c2*/
    __dst[21] = __src[0]; /*0x1006997c9*/
    v8 = __src[7]; /*0x1006997de*/
    v9 = __src[8]; /*0x1006997e5*/
    v10 = __src[10]; /*0x1006997ec*/
    v21 = __src[11]; /*0x1006997fa*/
    v11 = __src[13]; /*0x1006997fe*/
    v20 = __src[14]; /*0x100699806*/
    __src[1] = __src[3]; /*0x10069980a*/
    __src[0] = __src[2]; /*0x100699811*/
    v18 = v15; /*0x100699818*/
    if ( __src[4] ) /*0x100699822*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[5], __src[4], 1); /*0x100699829*/
    if ( 2 * v8 ) /*0x10069982e*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x10069989e*/
      if ( !(2 * v10) ) /*0x1006998ae*/
      {
LABEL_9:
        if ( !(2 * v11) ) /*0x100699848*/
        {
LABEL_10:
          a1[2] = __src[1]; /*0x100699855*/
          v12 = v18; /*0x100699860*/
          a1[1] = __src[0]; /*0x10069986e*/
          *a1 = v12; /*0x100699872*/
          return core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(&v13); /*0x100699872*/
        }
LABEL_14:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v11, 1); /*0x1006998ce*/
        goto LABEL_10; /*0x1006998df*/
      }
    }
    else if ( !(2 * v10) ) /*0x10069983b*/
    {
      goto LABEL_9; /*0x100699846*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v10, 1); /*0x1006998bc*/
    if ( !(2 * v11) ) /*0x1006998cc*/
      goto LABEL_10; /*0x1006998cc*/
    goto LABEL_14; /*0x1006998cc*/
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthSnapshot$C$codexmate_lib..core..models..CoreError$GT$$GT$::h1372f277403f3892(&v18); /*0x10069978b*/
  *a1 = 0x8000000000000000LL; /*0x100699790*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(&v13); /*0x100699881*/
}