// __ZN13codexmate_lib4core5relay10invariants1_109_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..invariants..InvariantDim$GT$9serialize @ 0x100250fb0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::invariants::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..invariants..InvariantDim$GT$::serialize::h5c9a8128c9491f52(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r14
  __int64 v4; // rax

  v2 = *a2; /*0x100250fba*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100250fbe*/
  switch ( v2 ) /*0x100250fd1*/
  {
    case 0LL: /*0x100250fd1*/
      v3 = 6; /*0x100250fd3*/
      v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100250fe3*/
      if ( !v4 ) /*0x100250feb*/
        goto LABEL_16; /*0x100250feb*/
      *(_WORD *)(v4 + 4) = 26473; /*0x100250ff1*/
      *(_DWORD *)v4 = 1718513507; /*0x100250ff7*/
      break; /*0x100250ffd*/
    case 1LL: /*0x100250fd1*/
      v3 = 4; /*0x100251087*/
      v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100251097*/
      if ( !v4 ) /*0x10025109f*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10025110c*/
      *(_DWORD *)v4 = 1752462689; /*0x1002510a1*/
      break; /*0x1002510a7*/
    case 2LL: /*0x100250fd1*/
      v3 = 7; /*0x100251032*/
      v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100251042*/
      if ( !v4 ) /*0x10025104a*/
        goto LABEL_15; /*0x10025104a*/
      *(_DWORD *)(v4 + 3) = 1735355489; /*0x100251050*/
      *(_DWORD *)v4 = 1635017059; /*0x100251057*/
      break; /*0x10025105d*/
    case 3LL: /*0x100250fd1*/
      v3 = 6; /*0x10025105f*/
      v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10025106f*/
      if ( !v4 ) /*0x100251077*/
LABEL_16:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1002510f3*/
      *(_WORD *)(v4 + 4) = 25697; /*0x100251079*/
      *(_DWORD *)v4 = 1701996660; /*0x10025107f*/
      break; /*0x100251085*/
    case 4LL: /*0x100250fd1*/
      v3 = 7; /*0x100251002*/
      v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100251012*/
      if ( !v4 ) /*0x10025101a*/
LABEL_15:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1002510e4*/
      *(_DWORD *)(v4 + 3) = 1952671082; /*0x100251020*/
      *(_DWORD *)v4 = 1785688688; /*0x100251027*/
      break; /*0x10025102d*/
    case 5LL: /*0x100250fd1*/
      v3 = 5; /*0x1002510a9*/
      v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1002510b9*/
      if ( !v4 ) /*0x1002510c1*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x10025111b*/
      *(_BYTE *)(v4 + 4) = 121; /*0x1002510c3*/
      *(_DWORD *)v4 = 2020569712; /*0x1002510c7*/
      break; /*0x1002510c7*/
    case 6LL: /*0x100250fd1*/
      JUMPOUT(0x100A9302FLL); /*0x100a9302f*/
    case 7LL: /*0x100250fd1*/
      JUMPOUT(0x100251120LL); /*0x100251120*/
  }
  *(_BYTE *)a1 = 3; /*0x1002510cd*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1002510d0*/
  *(_QWORD *)(a1 + 16) = v4; /*0x1002510d4*/
  *(_QWORD *)(a1 + 24) = v3; /*0x1002510d8*/
  return a1; /*0x1002510df*/
}