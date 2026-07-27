// __ZN13codexmate_lib4core5relay16codex_diagnostic21fix_config_stale_text @ 0x1004e9a10 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_config_stale_text::hccf66cc8098fc3c2(
        __int64 *a1,
        void *a2,
        size_t a3)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  size_t v9; // r12
  __int64 v10; // r14
  void *v11; // rdi
  size_t v12; // rsi
  void *v13; // rsi
  void *v14; // rdi
  __int64 v15; // rcx
  void *v16; // rbx
  __int64 v17; // [rsp+0h] [rbp-A0h] BYREF
  void *v18; // [rsp+8h] [rbp-98h]
  void *v19; // [rsp+10h] [rbp-90h]
  size_t __n; // [rsp+18h] [rbp-88h]
  __int64 v21; // [rsp+20h] [rbp-80h]
  __int64 v22; // [rsp+28h] [rbp-78h]
  __int64 v23; // [rsp+30h] [rbp-70h]
  __int64 v24; // [rsp+38h] [rbp-68h]
  __int64 v25; // [rsp+40h] [rbp-60h]
  __int64 v26; // [rsp+48h] [rbp-58h]
  __int64 v27; // [rsp+50h] [rbp-50h]
  __int64 v28; // [rsp+58h] [rbp-48h]
  void *__s2; // [rsp+60h] [rbp-40h]
  void *v30; // [rsp+68h] [rbp-38h]
  void *__s1; // [rsp+70h] [rbp-30h]

  codexmate_lib::core::relay::codex_diagnostic::read_config_or_empty::h4de2a23e2dcec008(&v17, (__int64)a2, a3); /*0x1004e9a31*/
  result = v17; /*0x1004e9a36*/
  v7 = (__int64)v18; /*0x1004e9a3d*/
  v8 = (__int64)v19; /*0x1004e9a44*/
  v9 = __n; /*0x1004e9a4b*/
  if ( v17 == 11 ) /*0x1004e9a56*/
  {
    v30 = v18; /*0x1004e9a5c*/
    __s2 = v19; /*0x1004e9a67*/
    codexmate_lib::core::relay::codex_writer::strip_all_managed_blocks::h80da2768569d91b4(&v17, v19, __n); /*0x1004e9a6e*/
    __s1 = v18; /*0x1004e9a7a*/
    v10 = (__int64)v19; /*0x1004e9a7e*/
    if ( v19 == (void *)v9 && (v11 = __s1, v12 = (size_t)__s2, !memcmp(__s1, __s2, v9)) /*0x1004e9abd*/
      || (v11 = a2,
          v12 = a3,
          (result = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(
                      a2,
                      a3,
                      (__int64)__s1,
                      v10,
                      1)) == 0) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x1004e9b5d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x1004e9b6c*/
      if ( !result ) /*0x1004e9b74*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x1004e9c3c*/
      *(_QWORD *)(result + 40) = 0x636F6C6220A585E5LL; /*0x1004e9b84*/
      *(_QWORD *)(result + 32) = 0xA8B3E6ACBDE8ADB8LL; /*0x1004e9b92*/
      *(_QWORD *)(result + 24) = 0xE48889E7A797E620LL; /*0x1004e9ba0*/
      *(_QWORD *)(result + 16) = 0x2F20726574756F72LL; /*0x1004e9bae*/
      *(_QWORD *)(result + 8) = 0x209995E78BAEE686LL; /*0x1004e9bbc*/
      *(_QWORD *)result = 0x90E785B8E6B2B7E5LL; /*0x1004e9bca*/
      *(_BYTE *)(result + 48) = 107; /*0x1004e9bcd*/
      a1[1] = 49; /*0x1004e9bd1*/
      a1[2] = result; /*0x1004e9bd9*/
      a1[3] = 49; /*0x1004e9bdd*/
      *a1 = 11; /*0x1004e9be5*/
      v16 = __s2; /*0x1004e9bf6*/
      if ( v17 ) /*0x1004e9bfa*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v17, 1); /*0x1004e9c05*/
      v13 = v30; /*0x1004e9c0a*/
      if ( v30 ) /*0x1004e9c11*/
      {
        v14 = v16; /*0x1004e9c1c*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x1004e9c1f*/
      }
    }
    else
    {
      *a1 = 2; /*0x1004e9ac3*/
      a1[1] = result; /*0x1004e9aca*/
      if ( v17 ) /*0x1004e9ad8*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v17, 1); /*0x1004e9ae3*/
      v13 = v30; /*0x1004e9ae8*/
      v14 = __s2; /*0x1004e9aef*/
      if ( v30 ) /*0x1004e9af3*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x1004e9af3*/
    }
  }
  else
  {
    a1[11] = v28; /*0x1004e9b03*/
    a1[10] = v27; /*0x1004e9b0b*/
    a1[9] = v26; /*0x1004e9b13*/
    a1[8] = v25; /*0x1004e9b1b*/
    a1[7] = v24; /*0x1004e9b23*/
    a1[6] = v23; /*0x1004e9b2b*/
    v15 = v21; /*0x1004e9b2f*/
    a1[5] = v22; /*0x1004e9b37*/
    a1[4] = v15; /*0x1004e9b3b*/
    a1[1] = v7; /*0x1004e9b3f*/
    a1[2] = v8; /*0x1004e9b43*/
    a1[3] = v9; /*0x1004e9b47*/
    *a1 = result; /*0x1004e9b4b*/
  }
  return result; /*0x1004e9b4e*/
}