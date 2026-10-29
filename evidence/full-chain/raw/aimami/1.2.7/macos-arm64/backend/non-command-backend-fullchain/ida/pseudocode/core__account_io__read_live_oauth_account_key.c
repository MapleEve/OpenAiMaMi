// aimami 1.2.7 mac truly_undone deep reverse — cluster core/account_io/read_live_oauth_account_key
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::account_io::read_live_oauth_account_key::h39cb2ce707c20c1c @ 0x100c385d0 size=867 lines=134 =====
__int64 __fastcall codexmate_lib::core::account_io::read_live_oauth_account_key::h39cb2ce707c20c1c(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  _QWORD __src[22]; // [rsp+0h] [rbp-1B0h] BYREF
  _QWORD __dst[22]; // [rsp+B0h] [rbp-100h] BYREF
  __int64 v19; // [rsp+160h] [rbp-50h]
  __int64 v20; // [rsp+168h] [rbp-48h]
  __int64 v21; // [rsp+170h] [rbp-40h]
  __int64 v22; // [rsp+178h] [rbp-38h]
  __int64 v23; // [rsp+180h] [rbp-30h]

  codexmate_lib::core::auth::load_auth_file::h3f192b6820e78b1d(__src, a2);
  result = 0x8000000000000001LL;
  if ( __src[0] != 0x8000000000000001LL )
  {
    memcpy(__dst, __src, sizeof(__dst));
    result = codexmate_lib::core::auth::is_switchable_oauth_auth::he859c38ef587beb8(__dst);
    if ( !(_BYTE)result )
    {
      a1[1] = 0x8000000000000000LL;
      goto LABEL_19;
    }
    result = codexmate_lib::core::auth::make_auth_snapshot::hd5fe074b9b8a26b8(__src, __dst, a2, a3);
    if ( LODWORD(__src[0]) == 2 )
    {
      qmemcpy(a1, &__src[1], 0x60u);
      v6 = __dst[0];
      if ( __dst[0] == 0x8000000000000000LL )
      {
LABEL_22:
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
        v11 = __dst[18];
        if ( __dst[18] == 0x8000000000000000LL || !__dst[18] )
          return result;
        v12 = __dst[19];
        v13 = 1;
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, v13);
      }
LABEL_20:
      if ( v6 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], v6, 1);
      goto LABEL_22;
    }
    v7 = __src[8];
    v8 = __src[9];
    v9 = __src[11];
    v23 = __src[12];
    v20 = __src[14];
    v22 = __src[15];
    v19 = __src[17];
    v21 = __src[18];
    if ( __src[2] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[3], __src[2], 1);
    if ( v7 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1);
    if ( 2 * v9 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v9, 1);
      v10 = v20;
      if ( !(2 * v20) )
        goto LABEL_16;
    }
    else
    {
      v10 = v20;
      if ( !(2 * v20) )
      {
LABEL_16:
        if ( 2 * v19 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v19, 1);
        a1[3] = __src[7];
        result = __src[5];
        a1[2] = __src[6];
        a1[1] = result;
LABEL_19:
        *a1 = 11;
        v6 = __dst[0];
        if ( __dst[0] == 0x8000000000000000LL )
          goto LABEL_22;
        goto LABEL_20;
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v10, 1);
    goto LABEL_16;
  }
  if ( LODWORD(__src[1]) != 2
    || (v5 = __src[2], result = std::io::error::Error::kind::hbe3dd139aa56fd1b(__src[2]), (_BYTE)result) )
  {
    qmemcpy(a1, &__src[1], 0x60u);
    return result;
  }
  a1[1] = 0x8000000000000000LL;
  *a1 = 11;
  result = v5 & 3;
  if ( (_DWORD)result == 1 )
  {
    v14 = *(_QWORD *)(v5 - 1);
    v15 = *(_QWORD *)(v5 + 7);
    if ( *(_QWORD *)v15 )
      (*(void (__fastcall **)(_QWORD))v15)(*(_QWORD *)(v5 - 1));
    v16 = *(_QWORD *)(v15 + 8);
    if ( v16 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16));
    v11 = 24;
    v13 = 8;
    v12 = v5 - 1;
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, v13);
  }
  return result;
}

