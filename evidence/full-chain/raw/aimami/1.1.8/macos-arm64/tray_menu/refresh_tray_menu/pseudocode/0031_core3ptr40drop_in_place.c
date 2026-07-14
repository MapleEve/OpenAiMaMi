// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x100e85be0 depth=2
// core3ptr40drop_in_place
unsigned __int64 __fastcall core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h7333deff63250a1b(_QWORD *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // r15
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx

  result = 10; /*0x100e85bfd*/
  if ( (__int64)*a1 < 0 ) /*0x100e85c02*/
    result = *a1 ^ 0x8000000000000000LL; /*0x100e85c02*/
  switch ( result ) /*0x100e85c1e*/
  {
    case 0uLL: /*0x100e85c1e*/
      return core::ptr::drop_in_place$LT$tauri_runtime..Error$GT$::h49f96decb41efd45(a1 + 1); /*0x100e85d2d*/
    case 1uLL: /*0x100e85c1e*/
    case 2uLL: /*0x100e85c1e*/
    case 4uLL: /*0x100e85c1e*/
    case 0x23uLL: /*0x100e85c1e*/
      if ( a1[1] ) /*0x100e85c20*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e85c27*/
      return result; /*0x100e85c27*/
    case 5uLL: /*0x100e85c1e*/
      v3 = (__int64 *)a1[1]; /*0x100e85d04*/
      v4 = *v3; /*0x100e85d08*/
      if ( *v3 != 1 ) /*0x100e85d0f*/
        goto LABEL_29; /*0x100e85d0f*/
      goto LABEL_39; /*0x100e85d0f*/
    case 6uLL: /*0x100e85c1e*/
    case 7uLL: /*0x100e85c1e*/
    case 0x18uLL: /*0x100e85c1e*/
      return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h151c1f8799f96b6c(a1 + 1); /*0x100e85c3f*/
    case 8uLL: /*0x100e85c1e*/
      v3 = (__int64 *)a1[5]; /*0x100e85d32*/
      v4 = *v3; /*0x100e85d36*/
      if ( *v3 == 1 ) /*0x100e85d3d*/
      {
LABEL_39:
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h151c1f8799f96b6c(v3 + 1); /*0x100e85da3*/
      }
      else
      {
LABEL_29:
        if ( !v4 ) /*0x100e85d42*/
        {
          if ( v3[2] ) /*0x100e85d44*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e85d56*/
        }
      }
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e85d5b*/
    case 9uLL: /*0x100e85c1e*/
      v2 = (unsigned __int64 *)a1[2]; /*0x100e85c8b*/
      result = *v2; /*0x100e85c8f*/
      if ( *v2 ) /*0x100e85c8f*/
        goto LABEL_10; /*0x100e85c95*/
      goto LABEL_19; /*0x100e85c95*/
    case 0xAuLL: /*0x100e85c1e*/
      if ( *a1 ) /*0x100e85bea*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e85ce6*/
      if ( a1[3] ) /*0x100e85cee*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e85cf5*/
      return result; /*0x100e85cf5*/
    case 0xCuLL: /*0x100e85c1e*/
      if ( !a1[2] ) /*0x100e85ca5*/
        return result; /*0x100e85ca5*/
      v2 = (unsigned __int64 *)a1[3]; /*0x100e85cab*/
      result = *v2; /*0x100e85caf*/
      if ( *v2 ) /*0x100e85caf*/
        result = ((__int64 (__fastcall *)(_QWORD))result)(a1[2]); /*0x100e85cba*/
      goto LABEL_19; /*0x100e85cba*/
    case 0x11uLL: /*0x100e85c1e*/
      if ( *((_DWORD *)a1 + 2) != 3 && a1[2] ) /*0x100e85c74*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e85c7b*/
      return result; /*0x100e85c7b*/
    case 0x12uLL: /*0x100e85c1e*/
    case 0x14uLL: /*0x100e85c1e*/
      if ( *((_DWORD *)a1 + 2) < 2u ) /*0x100e85c48*/
        return result; /*0x100e85c48*/
      return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h151c1f8799f96b6c(a1 + 2); /*0x100e85c48*/
    case 0x13uLL: /*0x100e85c1e*/
      result = a1[1]; /*0x100e85d70*/
      v5 = 1; /*0x100e85d7c*/
      if ( result >= 7 ) /*0x100e85d81*/
        v5 = result - 7; /*0x100e85d81*/
      if ( v5 != 1 ) /*0x100e85d89*/
      {
        if ( v5 ) /*0x100e85d8e*/
          return result; /*0x100e85d8e*/
        return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h151c1f8799f96b6c(a1 + 2); /*0x100e85d8e*/
      }
      if ( (_DWORD)result == 3 ) /*0x100e85dcb*/
        return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h151c1f8799f96b6c(a1 + 2); /*0x100e85d90*/
      return result;
    case 0x1CuLL: /*0x100e85c1e*/
      return anyhow::error::_$LT$impl$u20$core..ops..drop..Drop$u20$for$u20$anyhow..Error$GT$::drop::h1c31177a706a53e5(a1 + 1); /*0x100e85d6b*/
    case 0x1FuLL: /*0x100e85c1e*/
      v2 = (unsigned __int64 *)a1[2]; /*0x100e85c57*/
      result = *v2; /*0x100e85c5b*/
      if ( *v2 ) /*0x100e85c5b*/
LABEL_10:
        result = ((__int64 (__fastcall *)(_QWORD))result)(a1[1]); /*0x100e85c63*/
LABEL_19:
      if ( v2[1] ) /*0x100e85cbc*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e85db9*/
      return result; /*0x100e85dc3*/
    default:
      return result;
  }
}