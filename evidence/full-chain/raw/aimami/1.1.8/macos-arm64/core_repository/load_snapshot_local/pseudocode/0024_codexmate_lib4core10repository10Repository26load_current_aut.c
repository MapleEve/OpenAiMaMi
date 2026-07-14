// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND load_snapshot_local node 0x100531db0 depth=3
__int64 __fastcall codexmate_lib::core::repository::Repository::load_current_auth_snapshot::ha447bd27a8750416(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE v6[176]; // [rsp+8h] [rbp-188h] BYREF
  __int64 v7; // [rsp+B8h] [rbp-D8h] BYREF
  _QWORD __dsta[21]; // [rsp+C0h] [rbp-D0h] BYREF

  codexmate_lib::core::auth::load_auth_file::hed0a61e6b371759b(v6, a2, a3); /*0x100531dde*/
  v4 = *(_QWORD *)v6; /*0x100531de3*/
  if ( *(_QWORD *)v6 == 0x8000000000000001LL ) /*0x100531df8*/
  {
    result = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v6[8]); /*0x100531dfd*/
    *__dst = 2; /*0x100531e02*/
    return result; /*0x100531e09*/
  }
  memcpy(__dsta, &v6[8], sizeof(__dsta)); /*0x100531e1a*/
  v7 = *(_QWORD *)v6; /*0x100531e1f*/
  codexmate_lib::core::auth::make_auth_snapshot::h359af250f486fc29(v6, &v7, a2, a3); /*0x100531e3a*/
  if ( *(_DWORD *)v6 != 2 ) /*0x100531e46*/
  {
    result = (__int64)memcpy(__dst, v6, 0x98u); /*0x100531e71*/
    if ( v4 == 0x8000000000000000LL ) /*0x100531e79*/
      goto LABEL_9; /*0x100531e79*/
LABEL_7:
    if ( v4 ) /*0x100531e7e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100531e8f*/
    goto LABEL_9; /*0x100531e8f*/
  }
  *__dst = 2; /*0x100531e48*/
  result = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v6[8]); /*0x100531e56*/
  if ( v4 != 0x8000000000000000LL ) /*0x100531e5e*/
    goto LABEL_7; /*0x100531e5e*/
LABEL_9:
  if ( __dsta[2] != 0x8000000000000000LL && __dsta[2] ) /*0x100531ea3*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100531eb1*/
  if ( __dsta[5] != 0x8000000000000000LL && __dsta[5] ) /*0x100531ec5*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100531ed3*/
  if ( __dsta[8] != 0x8000000000000000LL && __dsta[8] ) /*0x100531ee7*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100531ef5*/
  if ( __dsta[11] != 0x8000000000000000LL && __dsta[11] ) /*0x100531f06*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100531f11*/
  if ( __dsta[14] != 0x8000000000000000LL && __dsta[14] ) /*0x100531f22*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100531f2d*/
  if ( __dsta[17] != 0x8000000000000000LL ) /*0x100531f39*/
  {
    if ( __dsta[17] ) /*0x100531f3e*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100531f49*/
  }
  return result; /*0x100531f4e*/
}