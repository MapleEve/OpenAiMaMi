// mac 1.1.8 BEHAVIORAL-BACKEND install_daemon node 0x1010a7540 depth=1
// std3sys7process4unix6common7Command3new
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

  if ( a3 ) /*0x1010a7557*/
  {
    LOBYTE(v3) = 2; /*0x1010a7559*/
    if ( *a2 != 47 ) /*0x1010a755e*/
    {
      if ( a3 > 0xF ) /*0x1010a7564*/
      {
        v4 = a3; /*0x1010a758a*/
        v3 = core::slice::memchr::memchr_aligned::hda948616f04379f9(47, a2, a3); /*0x1010a758d*/
        a3 = v4; /*0x1010a7595*/
        LOBYTE(v3) = v3 == 1; /*0x1010a759c*/
      }
      else
      {
        v3 = 0; /*0x1010a7566*/
        while ( a2[v3] != 47 ) /*0x1010a7574*/
        {
          if ( a3 == ++v3 ) /*0x1010a757c*/
            goto LABEL_7; /*0x1010a757c*/
        }
        LOBYTE(v3) = 1; /*0x1010a75a1*/
      }
    }
  }
  else
  {
LABEL_7:
    LODWORD(v3) = 0; /*0x1010a757e*/
  }
  v19 = v3; /*0x1010a75a3*/
  _$LT$$RF$$u5b$u8$u5d$$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h1af9ab0212d16fd8( /*0x1010a75aa*/
    &v16,
    a2,
    a3);
  v5 = v16; /*0x1010a75af*/
  v6 = __src; /*0x1010a75b3*/
  if ( __OFSUB__(-v16, 1) ) /*0x1010a75ba*/
  {
    v7 = __n; /*0x1010a75bf*/
    v20 = 0; /*0x1010a75c3*/
  }
  else
  {
    v8 = alloc::wtf8::_$LT$impl$u20$core..wtf8..Wtf8$GT$::into_box::h60be101a61a42e4f("<string-with-nul>", 0x12u); /*0x1010a75d8*/
    v9 = (void *)v8; /*0x1010a75dd*/
    v7 = v10; /*0x1010a75e0*/
    if ( v5 ) /*0x1010a75e6*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010a75f3*/
    LOBYTE(v8) = 1; /*0x1010a75f8*/
    v20 = v8; /*0x1010a75fa*/
    v6 = v9; /*0x1010a75fd*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010a7600*/
  v11 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 8u); /*0x1010a760f*/
  if ( !v11 ) /*0x1010a7617*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 16); /*0x1010a7768*/
  v12 = v11; /*0x1010a761d*/
  *v11 = 0; /*0x1010a7620*/
  v16 = 2; /*0x1010a7627*/
  __src = v11; /*0x1010a762f*/
  __n = 1; /*0x1010a7633*/
  if ( v7 ) /*0x1010a763e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010a7640*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1u); /*0x1010a7652*/
    if ( !v13 ) /*0x1010a7658*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7); /*0x1010a7662*/
  }
  else
  {
    v13 = 1; /*0x1010a766c*/
  }
  memcpy((void *)v13, v6, v7); /*0x1010a767b*/
  *v12 = v13; /*0x1010a7680*/
  v12[1] = 0; /*0x1010a7684*/
  __n = 2; /*0x1010a768d*/
  v14 = v16; /*0x1010a7695*/
  *(_QWORD *)(a1 + 8) = __src; /*0x1010a769d*/
  *(_QWORD *)a1 = v14; /*0x1010a76a1*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1010a76a4*/
  *(_QWORD *)(a1 + 128) = v6; /*0x1010a76ac*/
  *(_QWORD *)(a1 + 136) = v7; /*0x1010a76b3*/
  *(_QWORD *)(a1 + 96) = 0; /*0x1010a76ba*/
  *(_QWORD *)(a1 + 112) = 0; /*0x1010a76c2*/
  *(_WORD *)(a1 + 120) = 0; /*0x1010a76ca*/
  *(_BYTE *)(a1 + 194) = v19; /*0x1010a76d3*/
  *(_QWORD *)(a1 + 144) = 0; /*0x1010a76d9*/
  *(_QWORD *)(a1 + 160) = 0; /*0x1010a76e4*/
  *(_DWORD *)(a1 + 48) = 0; /*0x1010a76ef*/
  *(_DWORD *)(a1 + 56) = 0; /*0x1010a76f6*/
  *(_BYTE *)(a1 + 192) = v20; /*0x1010a7700*/
  *(_QWORD *)(a1 + 24) = 0; /*0x1010a7706*/
  *(_QWORD *)(a1 + 32) = 8; /*0x1010a770e*/
  *(_QWORD *)(a1 + 40) = 0; /*0x1010a7716*/
  *(_QWORD *)(a1 + 176) = 0; /*0x1010a771e*/
  *(_DWORD *)(a1 + 72) = 5; /*0x1010a7729*/
  *(_DWORD *)(a1 + 80) = 5; /*0x1010a7730*/
  *(_DWORD *)(a1 + 88) = 5; /*0x1010a7737*/
  *(_DWORD *)(a1 + 64) = 0; /*0x1010a773e*/
  *(_BYTE *)(a1 + 193) = 0; /*0x1010a7745*/
  return a1; /*0x1010a774f*/
}