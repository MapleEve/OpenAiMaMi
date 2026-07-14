// mac 1.1.8 test_relay_draft_stream node va=0x1000c83a0 depth=1
// core3ptr40drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v2; // r15
  __int64 v3; // r15
  __int64 v4; // r12
  void (__fastcall *v5)(__int64); // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx

  result = 10; /*0x1000c83be*/
  if ( (__int64)*a1 < 0 ) /*0x1000c83c3*/
    result = *a1 ^ 0x8000000000000000LL; /*0x1000c83c3*/
  switch ( result ) /*0x1000c83df*/
  {
    case 0LL: /*0x1000c83df*/
      result = a1[1]; /*0x1000c84e5*/
      if ( result == 6 ) /*0x1000c84ed*/
      {
        v2 = (__int64 *)a1[3]; /*0x1000c86f8*/
        result = *v2; /*0x1000c86fc*/
        if ( !*v2 ) /*0x1000c8702*/
          goto LABEL_63; /*0x1000c8702*/
        goto LABEL_62; /*0x1000c8702*/
      }
      if ( (_DWORD)result == 5 ) /*0x1000c84f6*/
        return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(a1 + 2); /*0x1000c86ef*/
      if ( !result ) /*0x1000c84ff*/
      {
        v2 = (__int64 *)a1[3]; /*0x1000c8509*/
        result = *v2; /*0x1000c850d*/
        if ( !*v2 ) /*0x1000c8513*/
          goto LABEL_63; /*0x1000c8513*/
        goto LABEL_62; /*0x1000c8513*/
      }
      return result; /*0x1000c84ff*/
    case 1LL: /*0x1000c83df*/
    case 2LL: /*0x1000c83df*/
    case 4LL: /*0x1000c83df*/
    case 35LL: /*0x1000c83df*/
      if ( a1[1] ) /*0x1000c83e1*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000c83e8*/
      return result; /*0x1000c83e8*/
    case 5LL: /*0x1000c83df*/
      return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(a1 + 1); /*0x1000c84b9*/
    case 6LL: /*0x1000c83df*/
      result = a1[1]; /*0x1000c8523*/
      if ( (a1[1] & 3) == 1 ) /*0x1000c852f*/
      {
        v3 = *(_QWORD *)(result - 1); /*0x1000c8539*/
        v4 = *(_QWORD *)(result + 7); /*0x1000c853d*/
        v5 = *(void (__fastcall **)(__int64))v4; /*0x1000c8541*/
        if ( !*(_QWORD *)v4 ) /*0x1000c8548*/
          goto LABEL_56; /*0x1000c8548*/
        goto LABEL_55; /*0x1000c8548*/
      }
      return result; /*0x1000c852f*/
    case 7LL: /*0x1000c83df*/
      result = a1[1]; /*0x1000c8558*/
      if ( (a1[1] & 3) == 1 ) /*0x1000c8564*/
      {
        v3 = *(_QWORD *)(result - 1); /*0x1000c856e*/
        v4 = *(_QWORD *)(result + 7); /*0x1000c8572*/
        v5 = *(void (__fastcall **)(__int64))v4; /*0x1000c8576*/
        if ( !*(_QWORD *)v4 ) /*0x1000c857d*/
          goto LABEL_56; /*0x1000c857d*/
        goto LABEL_55; /*0x1000c857d*/
      }
      return result; /*0x1000c8564*/
    case 8LL: /*0x1000c83df*/
      return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(a1 + 5); /*0x1000c8654*/
    case 9LL: /*0x1000c83df*/
      v2 = (__int64 *)a1[2]; /*0x1000c8636*/
      result = *v2; /*0x1000c863a*/
      if ( !*v2 ) /*0x1000c8640*/
        goto LABEL_63; /*0x1000c8640*/
      goto LABEL_7; /*0x1000c8640*/
    case 10LL: /*0x1000c83df*/
      if ( *a1 ) /*0x1000c83ab*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000c846d*/
      if ( a1[3] ) /*0x1000c8475*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000c847c*/
      return result; /*0x1000c847c*/
    case 12LL: /*0x1000c83df*/
      if ( !a1[2] ) /*0x1000c84c5*/
        return result; /*0x1000c84c5*/
      v2 = (__int64 *)a1[3]; /*0x1000c84cb*/
      result = *v2; /*0x1000c84cf*/
      if ( *v2 ) /*0x1000c84cf*/
LABEL_62:
        result = ((__int64 (__fastcall *)(_QWORD))result)(a1[2]); /*0x1000c8704*/
LABEL_63:
      if ( v2[1] ) /*0x1000c8709*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000c8710*/
      return result; /*0x1000c8710*/
    case 17LL: /*0x1000c83df*/
      if ( *((_DWORD *)a1 + 2) != 3 && a1[2] ) /*0x1000c849a*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000c84a1*/
      return result; /*0x1000c84a1*/
    case 18LL: /*0x1000c83df*/
      if ( *((_DWORD *)a1 + 2) < 2u ) /*0x1000c841e*/
        return result; /*0x1000c841e*/
      result = a1[2]; /*0x1000c8424*/
      if ( (a1[2] & 3) != 1 ) /*0x1000c8430*/
        return result; /*0x1000c8430*/
      v3 = *(_QWORD *)(result - 1); /*0x1000c843a*/
      v4 = *(_QWORD *)(result + 7); /*0x1000c843e*/
      v5 = *(void (__fastcall **)(__int64))v4; /*0x1000c8442*/
      if ( *(_QWORD *)v4 ) /*0x1000c8442*/
        goto LABEL_55; /*0x1000c8449*/
      goto LABEL_56; /*0x1000c8449*/
    case 19LL: /*0x1000c83df*/
      v6 = a1[1]; /*0x1000c858d*/
      result = a1[2]; /*0x1000c8591*/
      v7 = 1; /*0x1000c859d*/
      if ( v6 >= 7 ) /*0x1000c85a2*/
        v7 = v6 - 7; /*0x1000c85a2*/
      if ( v7 ) /*0x1000c85a9*/
      {
        if ( v7 != 1 || (_DWORD)v6 != 3 || (result & 3) != 1 ) /*0x1000c85ca*/
          return result; /*0x1000c85ca*/
        v3 = *(_QWORD *)(result - 1); /*0x1000c85d4*/
        v4 = *(_QWORD *)(result + 7); /*0x1000c85d8*/
        v5 = *(void (__fastcall **)(__int64))v4; /*0x1000c85dc*/
        if ( *(_QWORD *)v4 ) /*0x1000c85dc*/
          goto LABEL_55; /*0x1000c85e3*/
      }
      else
      {
        if ( (result & 3) != 1 ) /*0x1000c86a0*/
          return result; /*0x1000c86a0*/
        v3 = *(_QWORD *)(result - 1); /*0x1000c86aa*/
        v4 = *(_QWORD *)(result + 7); /*0x1000c86ae*/
        v5 = *(void (__fastcall **)(__int64))v4; /*0x1000c86b2*/
        if ( *(_QWORD *)v4 ) /*0x1000c86b2*/
LABEL_55:
          v5(v3); /*0x1000c86bb*/
      }
LABEL_56:
      if ( *(_QWORD *)(v4 + 8) ) /*0x1000c86c0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000c86d2*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc();
    case 20LL: /*0x1000c83df*/
      if ( *((_DWORD *)a1 + 2) < 2u ) /*0x1000c85f7*/
        return result; /*0x1000c85f7*/
      result = a1[2]; /*0x1000c85fd*/
      if ( (a1[2] & 3) != 1 ) /*0x1000c8609*/
        return result; /*0x1000c8609*/
      v3 = *(_QWORD *)(result - 1); /*0x1000c8613*/
      v4 = *(_QWORD *)(result + 7); /*0x1000c8617*/
      v5 = *(void (__fastcall **)(__int64))v4; /*0x1000c861b*/
      if ( *(_QWORD *)v4 ) /*0x1000c861b*/
        goto LABEL_55; /*0x1000c8622*/
      goto LABEL_56; /*0x1000c8622*/
    case 24LL: /*0x1000c83df*/
      result = a1[1]; /*0x1000c866a*/
      if ( (a1[1] & 3) != 1 ) /*0x1000c8676*/
        return result; /*0x1000c8676*/
      v3 = *(_QWORD *)(result - 1); /*0x1000c8680*/
      v4 = *(_QWORD *)(result + 7); /*0x1000c8684*/
      v5 = *(void (__fastcall **)(__int64))v4; /*0x1000c8688*/
      if ( *(_QWORD *)v4 ) /*0x1000c8688*/
        goto LABEL_55; /*0x1000c868f*/
      goto LABEL_56; /*0x1000c868f*/
    case 28LL: /*0x1000c83df*/
      return anyhow::error::_$LT$impl$u20$core..ops..drop..Drop$u20$for$u20$anyhow..Error$GT$::drop::h1c31177a706a53e5(a1 + 1); /*0x1000c8665*/
    case 31LL: /*0x1000c83df*/
      v2 = (__int64 *)a1[2]; /*0x1000c8400*/
      result = *v2; /*0x1000c8404*/
      if ( *v2 ) /*0x1000c8404*/
LABEL_7:
        result = ((__int64 (__fastcall *)(_QWORD))result)(a1[1]); /*0x1000c8410*/
      goto LABEL_63; /*0x1000c8415*/
    default:
      return result;
  }
}