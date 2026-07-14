// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x1004176b0 depth=1
// codexmate_lib8platform15single_instance22prepare_activation_dir
size_t *__fastcall codexmate_lib::platform::single_instance::prepare_activation_dir::hdcba006b9aaea08f(
        size_t *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *v3; // rax
  char *v4; // rdx
  _UNKNOWN **v5; // rax
  __int64 v6; // r12
  size_t v7; // rax
  _QWORD v9[2]; // [rsp+0h] [rbp-50h] BYREF
  size_t v10[3]; // [rsp+10h] [rbp-40h] BYREF
  _UNKNOWN **v11; // [rsp+28h] [rbp-28h] BYREF

  v3 = (_BYTE *)std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x1004176c8*/
  if ( v3 /*0x1004176ef*/
    && (LOWORD(v10[0]) = 511,
        BYTE2(v10[0]) = 1,
        (v5 = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)v10, v3, v4)) != nullptr) )
  {
    v11 = v5; /*0x1004176f5*/
    v9[0] = &v11; /*0x1004176fd*/
    v9[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100417708*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v10, byte_101229160, (unsigned __int64)v9); /*0x10041771b*/
    if ( ((unsigned __int8)v11 & 3) == 1 ) /*0x10041772c*/
    {
      v6 = *(__int64 *)((char *)v11 + 7); /*0x100417736*/
      if ( *(_QWORD *)v6 ) /*0x10041773a*/
        (*(void (__fastcall **)(_QWORD))v6)(*(_UNKNOWN **)((char *)v11 - 1)); /*0x100417746*/
      if ( *(_QWORD *)(v6 + 8) ) /*0x100417748*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10041775a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10041776c*/
    }
    a1[2] = v10[2]; /*0x100417775*/
    v7 = v10[0]; /*0x100417779*/
    a1[1] = v10[1]; /*0x100417781*/
  }
  else
  {
    v7 = 0x8000000000000000LL; /*0x100417787*/
  }
  *a1 = v7; /*0x100417791*/
  return a1; /*0x100417797*/
}