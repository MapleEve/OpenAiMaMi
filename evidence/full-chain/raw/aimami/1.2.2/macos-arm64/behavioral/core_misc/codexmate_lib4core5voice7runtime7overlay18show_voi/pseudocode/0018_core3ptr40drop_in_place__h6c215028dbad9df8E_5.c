// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x1005e44e0 d=1
unsigned __int64 __fastcall core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h6c215028dbad9df8(_QWORD *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // r15
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx

  result = 10; /*0x1005e44fd*/
  if ( (__int64)*a1 < 0 ) /*0x1005e4502*/
    result = *a1 ^ 0x8000000000000000LL; /*0x1005e4502*/
  switch ( result ) /*0x1005e451e*/
  {
    case 0uLL: /*0x1005e451e*/
      return core::ptr::drop_in_place$LT$tauri_runtime..Error$GT$::h025acb3721907ef6(a1 + 1); /*0x1005e462d*/
    case 1uLL: /*0x1005e451e*/
    case 2uLL: /*0x1005e451e*/
    case 4uLL: /*0x1005e451e*/
    case 0x23uLL: /*0x1005e451e*/
      if ( a1[1] ) /*0x1005e4520*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e4527*/
      return result; /*0x1005e4527*/
    case 5uLL: /*0x1005e451e*/
      v3 = (__int64 *)a1[1]; /*0x1005e4604*/
      v4 = *v3; /*0x1005e4608*/
      if ( *v3 != 1 ) /*0x1005e460f*/
        goto LABEL_29; /*0x1005e460f*/
      goto LABEL_39; /*0x1005e460f*/
    case 6uLL: /*0x1005e451e*/
    case 7uLL: /*0x1005e451e*/
    case 0x18uLL: /*0x1005e451e*/
      return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57c295f20edeb01a(a1 + 1); /*0x1005e453f*/
    case 8uLL: /*0x1005e451e*/
      v3 = (__int64 *)a1[5]; /*0x1005e4632*/
      v4 = *v3; /*0x1005e4636*/
      if ( *v3 == 1 ) /*0x1005e463d*/
      {
LABEL_39:
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57c295f20edeb01a(v3 + 1); /*0x1005e46a3*/
      }
      else
      {
LABEL_29:
        if ( !v4 ) /*0x1005e4642*/
        {
          if ( v3[2] ) /*0x1005e4644*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e4656*/
        }
      }
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e465b*/
    case 9uLL: /*0x1005e451e*/
      v2 = (unsigned __int64 *)a1[2]; /*0x1005e458b*/
      result = *v2; /*0x1005e458f*/
      if ( *v2 ) /*0x1005e458f*/
        goto LABEL_10; /*0x1005e4595*/
      goto LABEL_19; /*0x1005e4595*/
    case 0xAuLL: /*0x1005e451e*/
      if ( *a1 ) /*0x1005e44ea*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e45e6*/
      if ( a1[3] ) /*0x1005e45ee*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e45f5*/
      return result; /*0x1005e45f5*/
    case 0xCuLL: /*0x1005e451e*/
      if ( !a1[2] ) /*0x1005e45a5*/
        return result; /*0x1005e45a5*/
      v2 = (unsigned __int64 *)a1[3]; /*0x1005e45ab*/
      result = *v2; /*0x1005e45af*/
      if ( *v2 ) /*0x1005e45af*/
        result = ((__int64 (__fastcall *)(_QWORD))result)(a1[2]); /*0x1005e45ba*/
      goto LABEL_19; /*0x1005e45ba*/
    case 0x11uLL: /*0x1005e451e*/
      if ( *((_DWORD *)a1 + 2) != 3 && a1[2] ) /*0x1005e4574*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e457b*/
      return result; /*0x1005e457b*/
    case 0x12uLL: /*0x1005e451e*/
    case 0x14uLL: /*0x1005e451e*/
      if ( *((_DWORD *)a1 + 2) < 2u ) /*0x1005e4548*/
        return result; /*0x1005e4548*/
      return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57c295f20edeb01a(a1 + 2); /*0x1005e4548*/
    case 0x13uLL: /*0x1005e451e*/
      result = a1[1]; /*0x1005e4670*/
      v5 = 1; /*0x1005e467c*/
      if ( result >= 7 ) /*0x1005e4681*/
        v5 = result - 7; /*0x1005e4681*/
      if ( v5 != 1 ) /*0x1005e4689*/
      {
        if ( v5 ) /*0x1005e468e*/
          return result; /*0x1005e468e*/
        return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57c295f20edeb01a(a1 + 2); /*0x1005e468e*/
      }
      if ( (_DWORD)result == 3 ) /*0x1005e46cb*/
        return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57c295f20edeb01a(a1 + 2); /*0x1005e4690*/
      return result;
    case 0x1CuLL: /*0x1005e451e*/
      return anyhow::error::_$LT$impl$u20$core..ops..drop..Drop$u20$for$u20$anyhow..Error$GT$::drop::h1c31177a706a53e5(a1 + 1); /*0x1005e466b*/
    case 0x1FuLL: /*0x1005e451e*/
      v2 = (unsigned __int64 *)a1[2]; /*0x1005e4557*/
      result = *v2; /*0x1005e455b*/
      if ( *v2 ) /*0x1005e455b*/
LABEL_10:
        result = ((__int64 (__fastcall *)(_QWORD))result)(a1[1]); /*0x1005e4563*/
LABEL_19:
      if ( v2[1] ) /*0x1005e45bc*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e46b9*/
      return result; /*0x1005e46c3*/
    default:
      return result;
  }
}