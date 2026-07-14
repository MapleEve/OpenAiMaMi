// mac 1.1.8 BACKEND-ONLY create_tray_menu_from_snapshot node 0x1004eeea0 depth=1
// core3ptr40drop_in_place::h70cb689e8008b774E_5
__int64 __fastcall core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v2; // r15
  __int64 v3; // r15
  __int64 v4; // r12
  void (__fastcall *v5)(__int64); // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx

  result = 10; /*0x1004eeebe*/
  if ( (__int64)*a1 < 0 ) /*0x1004eeec3*/
    result = *a1 ^ 0x8000000000000000LL; /*0x1004eeec3*/
  switch ( result ) /*0x1004eeedf*/
  {
    case 0LL: /*0x1004eeedf*/
      result = a1[1]; /*0x1004eefe5*/
      if ( result == 6 ) /*0x1004eefed*/
      {
        v2 = (__int64 *)a1[3]; /*0x1004ef1f8*/
        result = *v2; /*0x1004ef1fc*/
        if ( !*v2 ) /*0x1004ef202*/
          goto LABEL_63; /*0x1004ef202*/
        goto LABEL_62; /*0x1004ef202*/
      }
      if ( (_DWORD)result == 5 ) /*0x1004eeff6*/
        return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(a1[2]); /*0x1004ef1ef*/
      if ( !result ) /*0x1004eefff*/
      {
        v2 = (__int64 *)a1[3]; /*0x1004ef009*/
        result = *v2; /*0x1004ef00d*/
        if ( !*v2 ) /*0x1004ef013*/
          goto LABEL_63; /*0x1004ef013*/
        goto LABEL_62; /*0x1004ef013*/
      }
      return result; /*0x1004eefff*/
    case 1LL: /*0x1004eeedf*/
    case 2LL: /*0x1004eeedf*/
    case 4LL: /*0x1004eeedf*/
    case 35LL: /*0x1004eeedf*/
      if ( a1[1] ) /*0x1004eeee1*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eeee8*/
      return result; /*0x1004eeee8*/
    case 5LL: /*0x1004eeedf*/
      return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(a1[1]); /*0x1004eefb9*/
    case 6LL: /*0x1004eeedf*/
      result = a1[1]; /*0x1004ef023*/
      if ( (a1[1] & 3) == 1 ) /*0x1004ef02f*/
      {
        v3 = *(_QWORD *)(result - 1); /*0x1004ef039*/
        v4 = *(_QWORD *)(result + 7); /*0x1004ef03d*/
        v5 = *(void (__fastcall **)(__int64))v4; /*0x1004ef041*/
        if ( !*(_QWORD *)v4 ) /*0x1004ef048*/
          goto LABEL_56; /*0x1004ef048*/
        goto LABEL_55; /*0x1004ef048*/
      }
      return result; /*0x1004ef02f*/
    case 7LL: /*0x1004eeedf*/
      result = a1[1]; /*0x1004ef058*/
      if ( (a1[1] & 3) == 1 ) /*0x1004ef064*/
      {
        v3 = *(_QWORD *)(result - 1); /*0x1004ef06e*/
        v4 = *(_QWORD *)(result + 7); /*0x1004ef072*/
        v5 = *(void (__fastcall **)(__int64))v4; /*0x1004ef076*/
        if ( !*(_QWORD *)v4 ) /*0x1004ef07d*/
          goto LABEL_56; /*0x1004ef07d*/
        goto LABEL_55; /*0x1004ef07d*/
      }
      return result; /*0x1004ef064*/
    case 8LL: /*0x1004eeedf*/
      return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(a1[5]); /*0x1004ef154*/
    case 9LL: /*0x1004eeedf*/
      v2 = (__int64 *)a1[2]; /*0x1004ef136*/
      result = *v2; /*0x1004ef13a*/
      if ( !*v2 ) /*0x1004ef140*/
        goto LABEL_63; /*0x1004ef140*/
      goto LABEL_7; /*0x1004ef140*/
    case 10LL: /*0x1004eeedf*/
      if ( *a1 ) /*0x1004eeeab*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eef6d*/
      if ( a1[3] ) /*0x1004eef75*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eef7c*/
      return result; /*0x1004eef7c*/
    case 12LL: /*0x1004eeedf*/
      if ( !a1[2] ) /*0x1004eefc5*/
        return result; /*0x1004eefc5*/
      v2 = (__int64 *)a1[3]; /*0x1004eefcb*/
      result = *v2; /*0x1004eefcf*/
      if ( *v2 ) /*0x1004eefcf*/
LABEL_62:
        result = ((__int64 (__fastcall *)(_QWORD))result)(a1[2]); /*0x1004ef204*/
LABEL_63:
      if ( v2[1] ) /*0x1004ef209*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ef210*/
      return result; /*0x1004ef210*/
    case 17LL: /*0x1004eeedf*/
      if ( *((_DWORD *)a1 + 2) != 3 && a1[2] ) /*0x1004eef9a*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eefa1*/
      return result; /*0x1004eefa1*/
    case 18LL: /*0x1004eeedf*/
      if ( *((_DWORD *)a1 + 2) < 2u ) /*0x1004eef1e*/
        return result; /*0x1004eef1e*/
      result = a1[2]; /*0x1004eef24*/
      if ( (a1[2] & 3) != 1 ) /*0x1004eef30*/
        return result; /*0x1004eef30*/
      v3 = *(_QWORD *)(result - 1); /*0x1004eef3a*/
      v4 = *(_QWORD *)(result + 7); /*0x1004eef3e*/
      v5 = *(void (__fastcall **)(__int64))v4; /*0x1004eef42*/
      if ( *(_QWORD *)v4 ) /*0x1004eef42*/
        goto LABEL_55; /*0x1004eef49*/
      goto LABEL_56; /*0x1004eef49*/
    case 19LL: /*0x1004eeedf*/
      v6 = a1[1]; /*0x1004ef08d*/
      result = a1[2]; /*0x1004ef091*/
      v7 = 1; /*0x1004ef09d*/
      if ( v6 >= 7 ) /*0x1004ef0a2*/
        v7 = v6 - 7; /*0x1004ef0a2*/
      if ( v7 ) /*0x1004ef0a9*/
      {
        if ( v7 != 1 || (_DWORD)v6 != 3 || (result & 3) != 1 ) /*0x1004ef0ca*/
          return result; /*0x1004ef0ca*/
        v3 = *(_QWORD *)(result - 1); /*0x1004ef0d4*/
        v4 = *(_QWORD *)(result + 7); /*0x1004ef0d8*/
        v5 = *(void (__fastcall **)(__int64))v4; /*0x1004ef0dc*/
        if ( *(_QWORD *)v4 ) /*0x1004ef0dc*/
          goto LABEL_55; /*0x1004ef0e3*/
      }
      else
      {
        if ( (result & 3) != 1 ) /*0x1004ef1a0*/
          return result; /*0x1004ef1a0*/
        v3 = *(_QWORD *)(result - 1); /*0x1004ef1aa*/
        v4 = *(_QWORD *)(result + 7); /*0x1004ef1ae*/
        v5 = *(void (__fastcall **)(__int64))v4; /*0x1004ef1b2*/
        if ( *(_QWORD *)v4 ) /*0x1004ef1b2*/
LABEL_55:
          v5(v3); /*0x1004ef1bb*/
      }
LABEL_56:
      if ( *(_QWORD *)(v4 + 8) ) /*0x1004ef1c0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ef1d2*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc();
    case 20LL: /*0x1004eeedf*/
      if ( *((_DWORD *)a1 + 2) < 2u ) /*0x1004ef0f7*/
        return result; /*0x1004ef0f7*/
      result = a1[2]; /*0x1004ef0fd*/
      if ( (a1[2] & 3) != 1 ) /*0x1004ef109*/
        return result; /*0x1004ef109*/
      v3 = *(_QWORD *)(result - 1); /*0x1004ef113*/
      v4 = *(_QWORD *)(result + 7); /*0x1004ef117*/
      v5 = *(void (__fastcall **)(__int64))v4; /*0x1004ef11b*/
      if ( *(_QWORD *)v4 ) /*0x1004ef11b*/
        goto LABEL_55; /*0x1004ef122*/
      goto LABEL_56; /*0x1004ef122*/
    case 24LL: /*0x1004eeedf*/
      result = a1[1]; /*0x1004ef16a*/
      if ( (a1[1] & 3) != 1 ) /*0x1004ef176*/
        return result; /*0x1004ef176*/
      v3 = *(_QWORD *)(result - 1); /*0x1004ef180*/
      v4 = *(_QWORD *)(result + 7); /*0x1004ef184*/
      v5 = *(void (__fastcall **)(__int64))v4; /*0x1004ef188*/
      if ( *(_QWORD *)v4 ) /*0x1004ef188*/
        goto LABEL_55; /*0x1004ef18f*/
      goto LABEL_56; /*0x1004ef18f*/
    case 28LL: /*0x1004eeedf*/
      return anyhow::error::_$LT$impl$u20$core..ops..drop..Drop$u20$for$u20$anyhow..Error$GT$::drop::h1c31177a706a53e5(a1 + 1); /*0x1004ef165*/
    case 31LL: /*0x1004eeedf*/
      v2 = (__int64 *)a1[2]; /*0x1004eef00*/
      result = *v2; /*0x1004eef04*/
      if ( *v2 ) /*0x1004eef04*/
LABEL_7:
        result = ((__int64 (__fastcall *)(_QWORD))result)(a1[1]); /*0x1004eef10*/
      goto LABEL_63; /*0x1004eef15*/
    default:
      return result;
  }
}