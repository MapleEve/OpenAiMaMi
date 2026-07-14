// mac 1.1.8 behavioral keychain_delete_api_key 0x1009423c0 d=2
_QWORD *__fastcall security_framework::passwords_options::PasswordOptions::new_generic_password::ha50777d1e6f07390(
        _QWORD *a1,
        const UInt8 *a2,
        CFIndex a3,
        UInt8 *a4,
        CFIndex a5)
{
  __int64 v7; // rax
  _QWORD *v8; // rbx
  CFTypeRef v9; // rax
  CFTypeRef v10; // r13
  CFTypeRef v11; // rax
  CFTypeRef v12; // r12
  CFTypeRef v13; // rax
  CFTypeRef v14; // rbx
  CFStringRef v15; // rax
  CFStringRef v16; // r15
  CFTypeRef v17; // rax
  CFTypeRef v18; // r14
  CFStringRef v19; // rax
  char **v21; // rdx
  __int64 v22; // rsi
  void *v23; // rdi
  char **v24; // rdx
  __int64 v25; // rsi
  void *v26; // rdi
  UInt8 *bytes; // [rsp+20h] [rbp-50h]
  _QWORD *v29; // [rsp+40h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009423e1*/
  v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x30u, 8u); /*0x1009423f0*/
  if ( !v7 ) /*0x1009423f8*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x1009425d8*/
  v8 = (_QWORD *)v7; /*0x1009423fe*/
  if ( !kSecClass || (v9 = CFRetain(kSecClass)) == nullptr ) /*0x100942420*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100942570*/
      (__int64)&anon_769e633797ab45ba00c93893d0cf82fd_0,
      69,
      (__int64)&anon_769e633797ab45ba00c93893d0cf82fd_4);
  v10 = v9; /*0x100942426*/
  bytes = a4; /*0x100942429*/
  if ( !kSecClassGenericPassword || (v11 = CFRetain(kSecClassGenericPassword)) == nullptr ) /*0x10094244c*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x10094258d*/
      (__int64)&anon_769e633797ab45ba00c93893d0cf82fd_0,
      69,
      (__int64)&anon_769e633797ab45ba00c93893d0cf82fd_4);
  v12 = v11; /*0x100942452*/
  v29 = v8; /*0x100942455*/
  if ( !kSecAttrService || (v13 = CFRetain(kSecAttrService)) == nullptr ) /*0x10094247c*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1009425aa*/
      (__int64)&anon_769e633797ab45ba00c93893d0cf82fd_0,
      69,
      (__int64)&anon_769e633797ab45ba00c93893d0cf82fd_4);
  v14 = v13; /*0x100942482*/
  if ( a3 < 0 ) /*0x10094248c*/
  {
    v21 = &off_1015487B8; /*0x1009425dd*/
    v22 = 37; /*0x1009425e4*/
    v23 = &unk_1012FFC38; /*0x1009425e9*/
    goto LABEL_22; /*0x1009425f0*/
  }
  v15 = CFStringCreateWithBytes(kCFAllocatorDefault, a2, a3, 0x8000100u, 0); /*0x1009424aa*/
  if ( !v15 ) /*0x1009424b2*/
  {
    v21 = &anon_769e633797ab45ba00c93893d0cf82fd_4; /*0x1009425f2*/
    v22 = 69; /*0x1009425f9*/
    v23 = &anon_769e633797ab45ba00c93893d0cf82fd_0; /*0x1009425fe*/
LABEL_22:
    core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)v23, v22, (__int64)v21); /*0x100942605*/
  }
  v16 = v15; /*0x1009424b8*/
  if ( !kSecAttrAccount || (v17 = CFRetain(kSecAttrAccount)) == nullptr ) /*0x1009424de*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1009425c7*/
      (__int64)&anon_769e633797ab45ba00c93893d0cf82fd_0,
      69,
      (__int64)&anon_769e633797ab45ba00c93893d0cf82fd_4);
  v18 = v17; /*0x1009424e4*/
  if ( a5 < 0 ) /*0x1009424f2*/
  {
    v24 = &off_1015487B8; /*0x100942610*/
    v25 = 37; /*0x100942617*/
    v26 = &unk_1012FFC38; /*0x10094261c*/
    goto LABEL_25; /*0x100942623*/
  }
  v19 = CFStringCreateWithBytes(kCFAllocatorDefault, bytes, a5, 0x8000100u, 0); /*0x10094250e*/
  if ( !v19 ) /*0x100942516*/
  {
    v24 = &anon_769e633797ab45ba00c93893d0cf82fd_4; /*0x100942625*/
    v25 = 69; /*0x10094262c*/
    v26 = &anon_769e633797ab45ba00c93893d0cf82fd_0; /*0x100942631*/
LABEL_25:
    core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)v26, v25, (__int64)v24); /*0x100942638*/
  }
  *v29 = v10; /*0x100942520*/
  v29[1] = v12; /*0x100942523*/
  v29[2] = v14; /*0x100942527*/
  v29[3] = v16; /*0x10094252b*/
  v29[4] = v18; /*0x10094252f*/
  v29[5] = v19; /*0x100942533*/
  *a1 = 3; /*0x10094253b*/
  a1[1] = v29; /*0x100942542*/
  a1[2] = 3; /*0x100942546*/
  return a1; /*0x10094254e*/
}