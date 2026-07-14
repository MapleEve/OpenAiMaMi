// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND load_snapshot_local node 0x10052aec0 depth=2
size_t __fastcall codexmate_lib::core::repository::Repository::resolve_daemon_binary::h688ddc310536ab50(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // rcx
  size_t result; // rax
  size_t v4[3]; // [rsp+0h] [rbp-70h] BYREF
  size_t v5; // [rsp+18h] [rbp-58h] BYREF
  __int64 v6; // [rsp+20h] [rbp-50h]
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int64 *v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall *v9)(_QWORD, _QWORD); // [rsp+38h] [rbp-38h]
  size_t v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h] BYREF

  std::env::current_exe::h29d0ba355065eb9c(&v5); /*0x10052aed6*/
  if ( __OFSUB__(0, v5) ) /*0x10052aedd*/
  {
    v11 = v6; /*0x10052aeeb*/
    v8 = &v11; /*0x10052aef3*/
    v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10052aefe*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, byte_10122ADDD, (unsigned __int64)&v8); /*0x10052af11*/
    v8 = (__int64 *)v4[0]; /*0x10052af1e*/
    v9 = (__int64 (__fastcall *)(_QWORD, _QWORD))v4[1]; /*0x10052af22*/
    v10 = v4[2]; /*0x10052af2a*/
    if ( (v11 & 3) == 1 ) /*0x10052af3a*/
    {
      v1 = *(_QWORD *)(v11 + 7); /*0x10052af44*/
      if ( *(_QWORD *)v1 ) /*0x10052af48*/
        (*(void (__fastcall **)(_QWORD))v1)(*(_QWORD *)(v11 - 1)); /*0x10052af54*/
      if ( *(_QWORD *)(v1 + 8) ) /*0x10052af56*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052af68*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052af7a*/
    }
    *a1 = 9; /*0x10052af7f*/
    v2 = v9; /*0x10052af8a*/
    a1[1] = v8; /*0x10052af8e*/
    a1[2] = v2; /*0x10052af92*/
    result = v10; /*0x10052af96*/
    a1[3] = v10; /*0x10052af9a*/
  }
  else
  {
    a1[3] = v7; /*0x10052afa4*/
    result = v5; /*0x10052afa8*/
    a1[2] = v6; /*0x10052afb0*/
    a1[1] = result; /*0x10052afb4*/
    *a1 = 10; /*0x10052afb8*/
  }
  return result; /*0x10052afbf*/
}