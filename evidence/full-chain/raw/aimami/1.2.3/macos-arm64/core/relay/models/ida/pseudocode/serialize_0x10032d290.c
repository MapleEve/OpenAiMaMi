// __ZN13codexmate_lib4core5relay6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$9serialize @ 0x10032d290 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$::serialize::h4b603f255485f8d1(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r14
  char *v4; // rax

  v2 = *a2; /*0x10032d29a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10032d29e*/
  switch ( v2 ) /*0x10032d2b1*/
  {
    case 0LL: /*0x10032d2b1*/
      v3 = 7; /*0x10032d2b3*/
      v4 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10032d2c3*/
      if ( !v4 ) /*0x10032d2cb*/
        goto LABEL_17; /*0x10032d2cb*/
      *(_DWORD *)(v4 + 3) = 1667854949; /*0x10032d2d1*/
      *(_DWORD *)v4 = 1701733735; /*0x10032d2d8*/
      break; /*0x10032d2de*/
    case 1LL: /*0x10032d2b1*/
      v3 = 8; /*0x10032d36b*/
      v4 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x10032d37b*/
      if ( !v4 ) /*0x10032d383*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x10032d43d*/
      *(_QWORD *)v4 = 0x6B65657370656564LL; /*0x10032d393*/
      break; /*0x10032d396*/
    case 2LL: /*0x10032d2b1*/
      v3 = 4; /*0x10032d312*/
      v4 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10032d322*/
      if ( !v4 ) /*0x10032d32a*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10032d42e*/
      *(_DWORD *)v4 = 1768778091; /*0x10032d330*/
      break; /*0x10032d336*/
    case 3LL: /*0x10032d2b1*/
      v3 = 7; /*0x10032d33b*/
      v4 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10032d34b*/
      if ( !v4 ) /*0x10032d353*/
LABEL_17:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10032d406*/
      *(_DWORD *)(v4 + 3) = 2019650921; /*0x10032d359*/
      *(_DWORD *)v4 = 1768843629; /*0x10032d360*/
      break; /*0x10032d366*/
    case 4LL: /*0x10032d2b1*/
      v3 = 6; /*0x10032d2e3*/
      v4 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10032d2f3*/
      if ( !v4 ) /*0x10032d2fb*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x10032d41f*/
      *((_WORD *)v4 + 2) = 26989; /*0x10032d301*/
      *(_DWORD *)v4 = 1868654968; /*0x10032d307*/
      break; /*0x10032d30d*/
    case 5LL: /*0x10032d2b1*/
      v3 = 5; /*0x10032d398*/
      v4 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10032d3a8*/
      if ( !v4 ) /*0x10032d3b0*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x10032d44c*/
      v4[4] = 117; /*0x10032d3b6*/
      *(_DWORD *)v4 = 1885956218; /*0x10032d3ba*/
      break; /*0x10032d3c0*/
    case 6LL: /*0x10032d2b1*/
      v3 = 10; /*0x10032d3c2*/
      v4 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x10032d3d2*/
      if ( !v4 ) /*0x10032d3da*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10); /*0x10032d45b*/
      qmemcpy(v4, "openrouter", 10); /*0x10032d3e6*/
      break; /*0x10032d3e6*/
    case 7LL: /*0x10032d2b1*/
      JUMPOUT(0x10072F36FLL); /*0x10072f36f*/
  }
  *(_BYTE *)a1 = 3; /*0x10032d3ef*/
  *(_QWORD *)(a1 + 8) = v3; /*0x10032d3f2*/
  *(_QWORD *)(a1 + 16) = v4; /*0x10032d3f6*/
  *(_QWORD *)(a1 + 24) = v3; /*0x10032d3fa*/
  return a1; /*0x10032d401*/
}