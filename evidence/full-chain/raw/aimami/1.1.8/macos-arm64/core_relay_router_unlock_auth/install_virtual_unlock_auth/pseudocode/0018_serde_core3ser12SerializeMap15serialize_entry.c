// mac 1.1.8 behavioral install_virtual_unlock_auth 0x1003b9210 d=1
__int64 __fastcall serde_core::ser::SerializeMap::serialize_entry::h01e9ab7c66822cb0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rbx
  bool v5; // zf
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // r15
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  unsigned __int64 *v11; // r12
  size_t v12; // rbx
  unsigned __int64 **v13; // r12
  __int64 v14; // r15
  unsigned __int64 *v15; // rbx
  __int64 v16; // rsi
  unsigned __int64 *v17; // r14
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  size_t v20; // rbx
  unsigned __int64 v21; // r15
  __int64 v23; // r15
  _WORD __src[20]; // [rsp+8h] [rbp-78h] BYREF
  __int64 *v25; // [rsp+30h] [rbp-50h]
  __int64 v26; // [rsp+38h] [rbp-48h]
  __int64 v27; // [rsp+40h] [rbp-40h]
  __int64 v28; // [rsp+48h] [rbp-38h]
  unsigned __int64 **v29; // [rsp+50h] [rbp-30h]

  if ( *(_BYTE *)a1 == 1 ) /*0x1003b9224*/
    core::panicking::panic::h286e2dd5eab048be( /*0x1003b93d1*/
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_900,
      40,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_990);
  v4 = *(_QWORD *)(a1 + 8); /*0x1003b922a*/
  v5 = *(_BYTE *)(a1 + 1) == 1; /*0x1003b922e*/
  v6 = *(unsigned __int64 **)v4; /*0x1003b9232*/
  v25 = a4; /*0x1003b9235*/
  v26 = a3; /*0x1003b9239*/
  v27 = a2; /*0x1003b923d*/
  v28 = a1; /*0x1003b9241*/
  if ( v5 ) /*0x1003b9245*/
  {
    v7 = v6[2]; /*0x1003b9247*/
    if ( *v6 == v7 ) /*0x1003b924e*/
    {
      a2 = v6[2]; /*0x1003b9432*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v6, a2, 1, 1, 1u); /*0x1003b9435*/
      v7 = v6[2]; /*0x1003b943a*/
    }
    *(_BYTE *)(v6[1] + v7) = 10; /*0x1003b9258*/
    v8 = v7 + 1; /*0x1003b925d*/
  }
  else
  {
    v9 = v6[2]; /*0x1003b9265*/
    if ( *v6 - v9 <= 1 ) /*0x1003b9270*/
    {
      a2 = v6[2]; /*0x1003b9456*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v6, a2, 2, 1, 1u); /*0x1003b9459*/
      v9 = v6[2]; /*0x1003b945e*/
    }
    *(_WORD *)(v6[1] + v9) = 2604; /*0x1003b927a*/
    v8 = v9 + 2; /*0x1003b9281*/
  }
  v6[2] = v8; /*0x1003b9285*/
  v29 = (unsigned __int64 **)v4; /*0x1003b9289*/
  v10 = *(_QWORD *)(v4 + 24); /*0x1003b928d*/
  if ( v10 ) /*0x1003b9294*/
  {
    v11 = v29[1]; /*0x1003b929a*/
    v12 = (size_t)v29[2]; /*0x1003b929e*/
    do /*0x1003b92d7*/
    {
      if ( v12 > *v6 - v8 ) /*0x1003b92b9*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v6, v8, v12, 1, 1u); /*0x1003b92ef*/
        v8 = v6[2]; /*0x1003b92f4*/
      }
      a2 = (__int64)v11; /*0x1003b92c2*/
      memcpy((void *)(v8 + v6[1]), v11, v12); /*0x1003b92c8*/
      v8 += v12; /*0x1003b92cd*/
      v6[2] = v8; /*0x1003b92d0*/
      --v10; /*0x1003b92d4*/
    }
    while ( v10 ); /*0x1003b92d7*/
  }
  *(_BYTE *)(v28 + 1) = 2; /*0x1003b92fe*/
  v13 = v29; /*0x1003b9302*/
  serde_json::ser::format_escaped_str::hf263ee7e7d5ab05a(v29, a2, v27, v26); /*0x1003b9311*/
  v14 = *v25; /*0x1003b931a*/
  v15 = *v29; /*0x1003b931d*/
  v16 = (*v29)[2]; /*0x1003b9324*/
  if ( **v29 - v16 <= 1 ) /*0x1003b932f*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v29, v16, 2, 1, 1u); /*0x1003b93e9*/
    v16 = v15[2]; /*0x1003b93ee*/
  }
  *(_WORD *)(v15[1] + v16) = 8250; /*0x1003b9339*/
  v15[2] = v16 + 2; /*0x1003b9343*/
  v17 = *v13; /*0x1003b9347*/
  v18 = -v14; /*0x1003b934e*/
  if ( v14 > 0 ) /*0x1003b9351*/
    v18 = v14; /*0x1003b9351*/
  v19 = _$LT$u64$u20$as$u20$itoa..Unsigned$GT$::fmt::h589955acf8b227ca(v18, __src); /*0x1003b9359*/
  if ( v14 < 0 ) /*0x1003b9361*/
  {
    if ( (unsigned __int64)--v19 > 0x13 ) /*0x1003b936a*/
      core::panicking::panic_bounds_check::h56740b1198b22635( /*0x1003b9476*/
        v19,
        20,
        (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_930);
    *((_BYTE *)__src + v19) = 45; /*0x1003b9370*/
  }
  v20 = 20 - v19; /*0x1003b937a*/
  v21 = v17[2]; /*0x1003b9380*/
  if ( 20 - v19 > *v17 - v21 ) /*0x1003b938a*/
  {
    v23 = v19; /*0x1003b940b*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003b940e*/
      v17,
      v17[2],
      20 - v19,
      1,
      1u);
    v19 = v23; /*0x1003b9413*/
    v21 = v17[2]; /*0x1003b9416*/
  }
  memcpy((void *)(v21 + v17[1]), (char *)__src + v19, v20); /*0x1003b939b*/
  v17[2] = v20 + v21; /*0x1003b93a3*/
  *((_BYTE *)v13 + 32) = 1; /*0x1003b93a7*/
  return 0; /*0x1003b93af*/
}