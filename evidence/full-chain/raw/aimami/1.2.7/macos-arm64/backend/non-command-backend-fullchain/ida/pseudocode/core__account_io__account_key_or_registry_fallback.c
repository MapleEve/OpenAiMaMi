// aimami 1.2.7 mac truly_undone deep reverse — cluster core/account_io/account_key_or_registry_fallback
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::account_io::account_key_or_registry_fallback::h841167ad4146a48e @ 0x100c3b660 size=1300 lines=159 =====
__int64 __fastcall codexmate_lib::core::account_io::account_key_or_registry_fallback::h841167ad4146a48e(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v7; // rax
  __int64 result; // rax
  int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // r12
  _QWORD *v19; // [rsp+8h] [rbp-1B8h] BYREF
  char v20[8]; // [rsp+10h] [rbp-1B0h] BYREF
  __int64 v21; // [rsp+18h] [rbp-1A8h]
  __int64 v22; // [rsp+20h] [rbp-1A0h]
  __int64 v23; // [rsp+30h] [rbp-190h]
  __int64 v24; // [rsp+38h] [rbp-188h]
  __int64 v25; // [rsp+40h] [rbp-180h]
  __int64 v26; // [rsp+48h] [rbp-178h]
  __int64 v27; // [rsp+50h] [rbp-170h]
  __int64 v28; // [rsp+60h] [rbp-160h]
  __int64 v29; // [rsp+68h] [rbp-158h]
  __int64 v30; // [rsp+78h] [rbp-148h]
  __int64 v31; // [rsp+80h] [rbp-140h]
  __int64 v32; // [rsp+90h] [rbp-130h]
  __int64 v33; // [rsp+98h] [rbp-128h]
  __int64 v34; // [rsp+B8h] [rbp-108h]
  __int64 v35; // [rsp+C0h] [rbp-100h]
  __int64 v36; // [rsp+C8h] [rbp-F8h]
  __int64 v37; // [rsp+D0h] [rbp-F0h]
  __int64 v38; // [rsp+D8h] [rbp-E8h]
  _QWORD __dst[22]; // [rsp+E0h] [rbp-E0h] BYREF
  _QWORD *v40; // [rsp+190h] [rbp-30h]

  if ( *a2 == 0x8000000000000001LL )
  {
    a1[2] = a5[2];
    v7 = *a5;
    a1[1] = a5[1];
    *a1 = v7;
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(a2 + 1);
  }
  v40 = a2;
  memcpy(__dst, a2, sizeof(__dst));
  result = codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h348e0c90ba3c9249(__dst);
  if ( (_BYTE)result )
  {
    *a1 = 0x8000000000000000LL;
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1);
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1);
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1);
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1);
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1);
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1);
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1);
    goto LABEL_82;
  }
  if ( (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::he859c38ef587beb8(__dst) )
  {
    codexmate_lib::core::auth::make_auth_snapshot::hd5fe074b9b8a26b8(&v19, __dst, a3, a4);
    v11 = (int)v19;
    if ( v19 == (_QWORD *)2 )
    {
      a1[2] = a5[2];
      result = *a5;
      a1[1] = a5[1];
      *a1 = result;
    }
    else
    {
      v40 = v19;
      v14 = v21;
      v15 = v22;
      v16 = v26;
      v17 = v27;
      v18 = v28;
      v38 = v29;
      v35 = v30;
      v37 = v31;
      v34 = v32;
      v36 = v33;
      a1[2] = v25;
      a1[1] = v24;
      *a1 = v23;
      if ( v14 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v14, 1);
      if ( v16 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1);
      if ( 2 * v18 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v18, 1);
      if ( 2 * v35 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v35, 1);
      result = 2 * v34;
      v11 = (int)v40;
      if ( 2 * v34 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v34, 1);
    }
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1);
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1);
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1);
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1);
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1);
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1);
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1);
    if ( v11 == 2 )
      return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(v20);
LABEL_82:
    v12 = *a5;
    if ( *a5 != 0x8000000000000000LL && v12 )
    {
      v13 = a5[1];
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1);
    }
    return result;
  }
  a1[2] = a5[2];
  result = *a5;
  a1[1] = a5[1];
  *a1 = result;
  if ( __dst[0] != 0x8000000000000000LL && __dst[0] )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1);
  if ( __dst[3] != 0x8000000000000000LL && __dst[3] )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1);
  if ( __dst[6] != 0x8000000000000000LL && __dst[6] )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1);
  if ( __dst[9] != 0x8000000000000000LL && __dst[9] )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1);
  if ( __dst[12] != 0x8000000000000000LL && __dst[12] )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1);
  if ( __dst[15] != 0x8000000000000000LL && __dst[15] )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1);
  v12 = __dst[18];
  if ( __dst[18] != 0x8000000000000000LL && __dst[18] )
  {
    v13 = __dst[19];
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1);
  }
  return result;
}

