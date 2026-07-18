// mac 1.2.2 NEW codexmate_lib8platform7process21open_macos_app_bun 0x10135db20 d=1
__int64 __fastcall std::sys::process::unix::common::Command::new::h3bc62b213fd56379(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  void *v6; // r14
  size_t v7; // r15
  __int64 v8; // rax
  void *v9; // r13
  size_t v10; // rdx
  __int64 *v11; // rax
  __int64 *v12; // r12
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-50h] BYREF
  void *__src; // [rsp+8h] [rbp-48h]
  size_t __n; // [rsp+10h] [rbp-40h]
  int v19; // [rsp+20h] [rbp-30h]
  int v20; // [rsp+24h] [rbp-2Ch]

  if ( a3 ) /*0x10135db37*/
  {
    LOBYTE(v3) = 2; /*0x10135db39*/
    if ( *a2 != 47 ) /*0x10135db3e*/
    {
      if ( a3 > 0xF ) /*0x10135db44*/
      {
        v4 = a3; /*0x10135db6a*/
        v3 = core::slice::memchr::memchr_aligned::hda948616f04379f9(47); /*0x10135db6d*/
        a3 = v4; /*0x10135db75*/
        LOBYTE(v3) = v3 == 1; /*0x10135db7c*/
      }
      else
      {
        v3 = 0; /*0x10135db46*/
        while ( a2[v3] != 47 ) /*0x10135db54*/
        {
          if ( a3 == ++v3 ) /*0x10135db5c*/
            goto LABEL_7; /*0x10135db5c*/
        }
        LOBYTE(v3) = 1; /*0x10135db81*/
      }
    }
  }
  else
  {
LABEL_7:
    LODWORD(v3) = 0; /*0x10135db5e*/
  }
  v19 = v3; /*0x10135db83*/
  _$LT$$RF$$u5b$u8$u5d$$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h1af9ab0212d16fd8( /*0x10135db8a*/
    &v16,
    a2,
    a3);
  v5 = v16; /*0x10135db8f*/
  v6 = __src; /*0x10135db93*/
  if ( __OFSUB__(-v16, 1) ) /*0x10135db9a*/
  {
    v7 = __n; /*0x10135db9f*/
    v20 = 0; /*0x10135dba3*/
  }
  else
  {
    v8 = alloc::wtf8::_$LT$impl$u20$core..wtf8..Wtf8$GT$::into_box::h60be101a61a42e4f("<string-with-nul>", 0x12u); /*0x10135dbb8*/
    v9 = (void *)v8; /*0x10135dbbd*/
    v7 = v10; /*0x10135dbc0*/
    if ( v5 ) /*0x10135dbc6*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10135dbd3*/
    LOBYTE(v8) = 1; /*0x10135dbd8*/
    v20 = v8; /*0x10135dbda*/
    v6 = v9; /*0x10135dbdd*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10135dbe0*/
  v11 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 8u); /*0x10135dbef*/
  if ( !v11 ) /*0x10135dbf7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8); /*0x10135dd48*/
  v12 = v11; /*0x10135dbfd*/
  *v11 = 0; /*0x10135dc00*/
  v16 = 2; /*0x10135dc07*/
  __src = v11; /*0x10135dc0f*/
  __n = 1; /*0x10135dc13*/
  if ( v7 ) /*0x10135dc1e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10135dc20*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1u); /*0x10135dc32*/
    if ( !v13 ) /*0x10135dc38*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x10135dc42*/
  }
  else
  {
    v13 = 1; /*0x10135dc4c*/
  }
  memcpy((void *)v13, v6, v7); /*0x10135dc5b*/
  *v12 = v13; /*0x10135dc60*/
  v12[1] = 0; /*0x10135dc64*/
  __n = 2; /*0x10135dc6d*/
  v14 = v16; /*0x10135dc75*/
  *(_QWORD *)(a1 + 8) = __src; /*0x10135dc7d*/
  *(_QWORD *)a1 = v14; /*0x10135dc81*/
  *(_QWORD *)(a1 + 16) = 2; /*0x10135dc84*/
  *(_QWORD *)(a1 + 128) = v6; /*0x10135dc8c*/
  *(_QWORD *)(a1 + 136) = v7; /*0x10135dc93*/
  *(_QWORD *)(a1 + 96) = 0; /*0x10135dc9a*/
  *(_QWORD *)(a1 + 112) = 0; /*0x10135dca2*/
  *(_WORD *)(a1 + 120) = 0; /*0x10135dcaa*/
  *(_BYTE *)(a1 + 194) = v19; /*0x10135dcb3*/
  *(_QWORD *)(a1 + 144) = 0; /*0x10135dcb9*/
  *(_QWORD *)(a1 + 160) = 0; /*0x10135dcc4*/
  *(_DWORD *)(a1 + 48) = 0; /*0x10135dccf*/
  *(_DWORD *)(a1 + 56) = 0; /*0x10135dcd6*/
  *(_BYTE *)(a1 + 192) = v20; /*0x10135dce0*/
  *(_QWORD *)(a1 + 24) = 0; /*0x10135dce6*/
  *(_QWORD *)(a1 + 32) = 8; /*0x10135dcee*/
  *(_QWORD *)(a1 + 40) = 0; /*0x10135dcf6*/
  *(_QWORD *)(a1 + 176) = 0; /*0x10135dcfe*/
  *(_DWORD *)(a1 + 72) = 5; /*0x10135dd09*/
  *(_DWORD *)(a1 + 80) = 5; /*0x10135dd10*/
  *(_DWORD *)(a1 + 88) = 5; /*0x10135dd17*/
  *(_DWORD *)(a1 + 64) = 0; /*0x10135dd1e*/
  *(_BYTE *)(a1 + 193) = 0; /*0x10135dd25*/
  return a1; /*0x10135dd2f*/
}