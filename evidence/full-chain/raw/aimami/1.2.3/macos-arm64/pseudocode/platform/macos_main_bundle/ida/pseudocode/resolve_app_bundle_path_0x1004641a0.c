// __ZN13codexmate_lib8platform17macos_main_bundle23resolve_app_bundle_path @ 0x1004641a0 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::platform::macos_main_bundle::resolve_app_bundle_path::hdb28989caf89e77d(
        unsigned __int64 *a1)
{
  void *v1; // r14
  void *v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 *v8; // r14
  unsigned __int64 *v9; // r15
  char *v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 (__fastcall **v14)(); // r15
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 (__fastcall **v20)(); // rdi
  _QWORD *v22; // rdx
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+10h] [rbp-60h]
  unsigned __int64 v26; // [rsp+18h] [rbp-58h]
  unsigned __int64 *v27; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall **v28)(); // [rsp+28h] [rbp-48h]
  __int64 v29; // [rsp+30h] [rbp-40h]
  unsigned __int64 *v30; // [rsp+38h] [rbp-38h]
  char v31[41]; // [rsp+47h] [rbp-29h] BYREF

  v30 = a1; /*0x1004641b1*/
  v1 = (void *)objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::h8f70f79ef50df5f2(); /*0x1004641ba*/
  v2 = (void *)objc2_foundation::generated::__NSBundle::NSBundle::bundlePath::ha4a7b6892415744a(v1); /*0x1004641c5*/
  v24 = 0; /*0x1004641c8*/
  v25 = 1; /*0x1004641d0*/
  v26 = 0; /*0x1004641d8*/
  v29 = 1610612768; /*0x1004641e0*/
  v27 = &v24; /*0x1004641ec*/
  v28 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_394; /*0x1004641f7*/
  if ( (unsigned __int8)objc2_foundation::string::_$LT$impl$u20$core..fmt..Display$u20$for$u20$objc2_foundation..generated..__NSString..NSString$GT$::fmt::h172ae122526909b4( /*0x100464202*/
                          v2,
                          &v27) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100464448*/
      &anon_4fd0d0f33f5bcd90fdaba20400e954f2_395,
      55,
      v31,
      &anon_4fd0d0f33f5bcd90fdaba20400e954f2_406,
      &anon_4fd0d0f33f5bcd90fdaba20400e954f2_397);
  v3 = v24; /*0x10046420f*/
  v4 = v25; /*0x100464213*/
  v5 = v26; /*0x100464217*/
  if ( !v26 /*0x10046425d*/
    || (v6 = std::path::Path::extension::hbb56a39ecf8d3771(v25, v26)) == 0
    || (core::str::converts::from_utf8::hb32deb9559450f6e(&v27, v6, v7), (_DWORD)v27 == 1)
    || v29 != 3
    || *(_WORD *)v28 ^ 0x7061 | *((unsigned __int8 *)v28 + 2) ^ 0x70 )
  {
    if ( v3 ) /*0x100464265*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x100464272*/
    v3 = 0x8000000000000000LL; /*0x100464277*/
  }
  objc_release(v2); /*0x100464284*/
  objc_release(v1); /*0x10046428c*/
  if ( v3 == 0x8000000000000000LL ) /*0x10046429e*/
  {
    std::env::current_exe::h29d0ba355065eb9c(&v27); /*0x1004642a8*/
    v8 = v27; /*0x1004642b0*/
    if ( v27 == (unsigned __int64 *)0x8000000000000000LL ) /*0x1004642b7*/
    {
      v9 = v30; /*0x1004642c5*/
      if ( ((unsigned __int8)v28 & 3) == 1 ) /*0x1004642c9*/
      {
        v10 = (char *)v28 - 1; /*0x1004642cb*/
        v11 = *(__int64 *)((char *)v28 - 1); /*0x1004642cf*/
        v12 = *(__int64 *)((char *)v28 + 7); /*0x1004642d3*/
        if ( *(_QWORD *)v12 ) /*0x1004642d7*/
          (*(void (__fastcall **)(__int64))v12)(v11); /*0x1004642e3*/
        v13 = *(_QWORD *)(v12 + 8); /*0x1004642e5*/
        if ( v13 ) /*0x1004642ed*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x1004642f7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24, 8); /*0x100464309*/
        v9 = v30; /*0x10046430e*/
      }
      *v9 = 0x8000000000000000LL; /*0x10046431c*/
    }
    else
    {
      v14 = v28; /*0x100464338*/
      v15 = v29; /*0x10046433c*/
      v16 = (__int64)v28; /*0x100464344*/
      while ( 1 ) /*0x100464356*/
      {
        v17 = std::path::Path::extension::hbb56a39ecf8d3771(v16, v15); /*0x100464356*/
        if ( v17 ) /*0x10046435e*/
        {
          core::str::converts::from_utf8::hb32deb9559450f6e(&v27, v17, v18); /*0x100464366*/
          if ( (_DWORD)v27 != 1 && v29 == 3 && !(*(_WORD *)v28 ^ 0x7061 | *((unsigned __int8 *)v28 + 2) ^ 0x70) ) /*0x10046438c*/
            break; /*0x10046438c*/
        }
        v16 = std::path::Path::parent::h4c3ac26770731fbb(v16, v15); /*0x1004643ab*/
        v15 = v19; /*0x1004643ae*/
        if ( !v16 ) /*0x1004643b4*/
        {
          v20 = v14; /*0x1004643b6*/
          *v30 = 0x8000000000000000LL; /*0x1004643c7*/
          v9 = v30; /*0x1004643cd*/
          if ( !v8 ) /*0x1004643d1*/
            return v9; /*0x1004643d1*/
          goto LABEL_27; /*0x1004643d1*/
        }
      }
      std::path::Path::to_path_buf::h73855ce4b54f7174(&v27, v16, v15); /*0x1004643fc*/
      v20 = v14; /*0x100464401*/
      v22 = v30; /*0x100464408*/
      v30[2] = v29; /*0x10046440c*/
      v23 = v27; /*0x100464410*/
      v22[1] = v28; /*0x100464418*/
      *v22 = v23; /*0x10046441c*/
      v9 = v30; /*0x100464422*/
      if ( v8 ) /*0x100464426*/
LABEL_27:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v8, 1); /*0x1004643d3*/
    }
  }
  else
  {
    v9 = v30; /*0x100464324*/
    *v30 = v3; /*0x100464328*/
    v9[1] = v4; /*0x10046432b*/
    v9[2] = v5; /*0x10046432f*/
  }
  return v9; /*0x1004643e3*/
}