// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle23resolve 0x100a3b330 d=0
size_t *__fastcall codexmate_lib::platform::macos_main_bundle::resolve_app_bundle_path::ha85958e990fcfbea(size_t *a1)
{
  void *v1; // r12
  unsigned __int64 v2; // r15
  _BYTE *v3; // r13
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  size_t v7; // r15
  __int64 (__fastcall **v8)(); // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  size_t v11; // rdx
  size_t v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-68h] BYREF
  __int64 v15; // [rsp+10h] [rbp-60h]
  __int64 v16; // [rsp+18h] [rbp-58h]
  unsigned __int64 *v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+28h] [rbp-48h]
  __int64 v19; // [rsp+30h] [rbp-40h]
  id v20; // [rsp+38h] [rbp-38h]
  char v21[41]; // [rsp+47h] [rbp-29h] BYREF

  v20 = objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::h8f70f79ef50df5f2(); /*0x100a3b349*/
  v1 = (void *)objc2_foundation::generated::__NSBundle::NSBundle::bundlePath::ha4a7b6892415744a(v20); /*0x100a3b355*/
  v14 = 0; /*0x100a3b358*/
  v15 = 1; /*0x100a3b360*/
  v16 = 0; /*0x100a3b368*/
  v19 = 1610612768; /*0x100a3b370*/
  v17 = &v14; /*0x100a3b37c*/
  v18 = &anon_8b24e3f70b5df2fccdf26f545f136f0f_1225; /*0x100a3b387*/
  if ( (unsigned __int8)objc2_foundation::string::_$LT$impl$u20$core..fmt..Display$u20$for$u20$objc2_foundation..generated..__NSString..NSString$GT$::fmt::h172ae122526909b4( /*0x100a3b392*/
                          v1,
                          &v17) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a3b56a*/
      (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1226,
      55,
      (__int64)v21,
      (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1239,
      (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1228);
  v2 = v14; /*0x100a3b39f*/
  v3 = (_BYTE *)v15; /*0x100a3b3a3*/
  v4 = v16; /*0x100a3b3a7*/
  if ( !v16 /*0x100a3b3ed*/
    || (v5 = std::path::Path::extension::hbb56a39ecf8d3771((_BYTE *)v15, v16)) == 0
    || (core::str::converts::from_utf8::hb32deb9559450f6e((__int64)&v17, v5, v6), (_DWORD)v17 == 1)
    || v19 != 3
    || *(_WORD *)v18 ^ 0x7061 | *((unsigned __int8 *)v18 + 2) ^ 0x70 )
  {
    if ( v2 ) /*0x100a3b3f5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3b402*/
    v2 = 0x8000000000000000LL; /*0x100a3b407*/
  }
  objc_release(v1); /*0x100a3b414*/
  objc_release(v20); /*0x100a3b41d*/
  if ( v2 == 0x8000000000000000LL ) /*0x100a3b42f*/
  {
    std::env::current_exe::h29d0ba355065eb9c(&v17); /*0x100a3b435*/
    v20 = v17; /*0x100a3b442*/
    if ( v17 == (unsigned __int64 *)0x8000000000000000LL ) /*0x100a3b449*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::ha9b120268625f5ba( /*0x100a3b44e*/
        0x8000000000000000LL,
        (__int64)v18);
      *a1 = 0x8000000000000000LL; /*0x100a3b453*/
    }
    else
    {
      v7 = v19; /*0x100a3b46b*/
      v8 = v18; /*0x100a3b473*/
      while ( 1 ) /*0x100a3b486*/
      {
        v9 = std::path::Path::extension::hbb56a39ecf8d3771(v8, v7); /*0x100a3b486*/
        if ( v9 ) /*0x100a3b48e*/
        {
          core::str::converts::from_utf8::hb32deb9559450f6e((__int64)&v17, v9, v10); /*0x100a3b496*/
          if ( (_DWORD)v17 != 1 && v19 == 3 && !(*(_WORD *)v18 ^ 0x7061 | *((unsigned __int8 *)v18 + 2) ^ 0x70) ) /*0x100a3b4bc*/
            break; /*0x100a3b4bc*/
        }
        v8 = (__int64 (__fastcall **)())std::path::Path::parent::h4c3ac26770731fbb(v8, v7); /*0x100a3b4db*/
        v7 = v11; /*0x100a3b4de*/
        if ( !v8 ) /*0x100a3b4e4*/
        {
          *a1 = 0x8000000000000000LL; /*0x100a3b4f0*/
          if ( !v20 ) /*0x100a3b4fa*/
            return a1; /*0x100a3b4fa*/
          goto LABEL_21; /*0x100a3b4fa*/
        }
      }
      std::path::Path::to_path_buf::h73855ce4b54f7174((size_t *)&v17, v8, v7); /*0x100a3b525*/
      a1[2] = v19; /*0x100a3b52e*/
      v13 = (size_t)v17; /*0x100a3b532*/
      a1[1] = (size_t)v18; /*0x100a3b53a*/
      *a1 = v13; /*0x100a3b53e*/
      if ( v20 ) /*0x100a3b548*/
LABEL_21:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3b4fc*/
    }
  }
  else
  {
    *a1 = v2; /*0x100a3b45b*/
    a1[1] = (size_t)v3; /*0x100a3b45e*/
    a1[2] = v4; /*0x100a3b462*/
  }
  return a1; /*0x100a3b50c*/
}