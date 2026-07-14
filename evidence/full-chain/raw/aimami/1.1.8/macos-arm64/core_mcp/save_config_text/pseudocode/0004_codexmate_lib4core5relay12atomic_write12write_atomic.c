// mac 1.1.8 behavioral save_config_text 0x10039e600 d=1
__int64 __fastcall codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af(
        _QWORD **a1,
        size_t a2,
        __int64 a3,
        __int64 a4,
        double a5)
{
  size_t v6; // r15
  void *v7; // r12
  _BYTE *v8; // rax
  char *v9; // rdx
  _BYTE *v10; // rbx
  char *v11; // r14
  _UNKNOWN **v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // r13
  __int64 v19; // rax
  _QWORD v20[2]; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+18h] [rbp-B8h]
  __int64 v23; // [rsp+20h] [rbp-B0h]
  __int64 v24; // [rsp+28h] [rbp-A8h] BYREF
  void *v25; // [rsp+30h] [rbp-A0h]
  size_t v26; // [rsp+38h] [rbp-98h]
  __int64 v27; // [rsp+40h] [rbp-90h]
  __int64 v28; // [rsp+48h] [rbp-88h]
  _QWORD *v29; // [rsp+50h] [rbp-80h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+58h] [rbp-78h]
  _DWORD *v31; // [rsp+60h] [rbp-70h]
  __int64 (__fastcall *v32)(); // [rsp+68h] [rbp-68h]
  int *v33; // [rsp+70h] [rbp-60h]
  __int64 (__fastcall *v34)(); // [rsp+78h] [rbp-58h]
  size_t __n; // [rsp+80h] [rbp-50h]
  int v36; // [rsp+88h] [rbp-48h] BYREF
  __int16 v37; // [rsp+8Ch] [rbp-44h]
  int v38; // [rsp+8Eh] [rbp-42h]
  __int16 v39; // [rsp+92h] [rbp-3Eh]
  void *__src; // [rsp+98h] [rbp-38h]
  _DWORD v41[11]; // [rsp+A4h] [rbp-2Ch] BYREF

  v27 = a3; /*0x10039e617*/
  v6 = a2; /*0x10039e61e*/
  v7 = a1; /*0x10039e621*/
  v8 = (_BYTE *)std::path::Path::parent::h4c3ac26770731fbb(a1, a2); /*0x10039e624*/
  if ( !v8 )
    return std::io::error::Error::new::h2838dbd593bc6ec9(
             20,
             "atomic write: missing parentaimami/:ide/v1/chat/completions/:ide/v1/responses/:ide/v1/messages/:ide/v1/models/codex/by-provider/:provider_id/v1/responses/codex/by-provider/:provider_id/v1/chat/completions/codex/by-provider/:provider_id/v1/messages/codex/by-provider/:provider_id/v1/models/codex/v1/responses/compact/codex/by-provider/:provider_id/v1/responses/compact/codex/router/v1/responses/codex/router/v1/responses/compact/codex/router/v1/health",
             28,
             a5);
  v10 = v8; /*0x10039e62e*/
  v11 = v9; /*0x10039e631*/
  v28 = a4; /*0x10039e634*/
  LOWORD(v29) = 511; /*0x10039e63b*/
  BYTE2(v29) = 1; /*0x10039e641*/
  v12 = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v29, v8, v9); /*0x10039e651*/
  if ( !v12 ) /*0x10039e657*/
  {
    v13 = std::path::Path::file_name::hf6c2daad91e50ebf(a1, a2); /*0x10039e663*/
    if ( v13 ) /*0x10039e66b*/
    {
      a1 = &v29; /*0x10039e66d*/
      a2 = v13; /*0x10039e671*/
      core::str::converts::from_utf8::hb32deb9559450f6e(&v29, v13, v14); /*0x10039e674*/
      v15 = "aimami/:ide/v1/chat/completions/:ide/v1/responses/:ide/v1/messages/:ide/v1/models/codex/by-provider/:provider_id/v1/responses/codex/by-provider/:provider_id/v1/chat/completions/codex/by-provider/:provider_id/v1/messages/codex/by-provider/:provider_id/v1/models/codex/v1/responses/compact/codex/by-provider/:provider_id/v1/responses/compact/codex/router/v1/responses/codex/router/v1/responses/compact/codex/router/v1/health"; /*0x10039e67d*/
      if ( !(_BYTE)v29 ) /*0x10039e684*/
        v15 = (char *)v30; /*0x10039e684*/
      v16 = 6; /*0x10039e689*/
      if ( !(_BYTE)v29 ) /*0x10039e68e*/
        v16 = (__int64)v31; /*0x10039e68e*/
    }
    else
    {
      v16 = 6; /*0x10039e6bc*/
      v15 = "aimami/:ide/v1/chat/completions/:ide/v1/responses/:ide/v1/messages/:ide/v1/models/codex/by-provider/:provider_id/v1/responses/codex/by-provider/:provider_id/v1/chat/completions/codex/by-provider/:provider_id/v1/messages/codex/by-provider/:provider_id/v1/models/codex/v1/responses/compact/codex/by-provider/:provider_id/v1/responses/compact/codex/router/v1/responses/codex/router/v1/responses/compact/codex/router/v1/health"; /*0x10039e6c1*/
    }
    v20[0] = v15; /*0x10039e6c8*/
    v20[1] = v16; /*0x10039e6cf*/
    v41[0] = std::process::id::ha72f58ec62264e78(a1, a2); /*0x10039e6db*/
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v36); /*0x10039e6e5*/
    v29 = v20; /*0x10039e6f1*/
    v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10039e6fc*/
    v31 = v41; /*0x10039e704*/
    v32 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10039e70f*/
    v33 = &v36; /*0x10039e713*/
    v34 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x10039e71e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v21, &unk_1012266CE, &v29); /*0x10039e734*/
    v18 = v22; /*0x10039e739*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v24, v10, v11, v22, v23); /*0x10039e757*/
    if ( v21 ) /*0x10039e766*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v21, 1); /*0x10039e770*/
    v36 = 0; /*0x10039e775*/
    v37 = 438; /*0x10039e77c*/
    v38 = 256; /*0x10039e782*/
    v39 = 256; /*0x10039e789*/
    __src = v25; /*0x10039e7ad*/
    __n = v26; /*0x10039e7b1*/
    std::fs::OpenOptions::_open::h1dad73452047b8aa(&v29, &v36, v25, v26); /*0x10039e7b5*/
    if ( (_DWORD)v29 == 1 ) /*0x10039e7c5*/
    {
      v12 = (_UNKNOWN **)v30; /*0x10039e7c7*/
    }
    else
    {
      v41[0] = HIDWORD(v29); /*0x10039e7d0*/
      v12 = (_UNKNOWN **)std::io::Write::write_all::h82bde2235fecb8a8(v41, v27, v28); /*0x10039e7e3*/
      if ( v12 || (v12 = (_UNKNOWN **)std::fs::File::sync_data::hd1ab389c8b7cfd2f(v41)) != nullptr ) /*0x10039e7fa*/
      {
        close_NOCANCEL(v41[0]); /*0x10039e7ff*/
      }
      else
      {
        close_NOCANCEL(v41[0]); /*0x10039e836*/
        v12 = (_UNKNOWN **)std::sys::fs::rename::h7934e6142c921014(__src, __n, v7, v6); /*0x10039e84e*/
        if ( !v12 ) /*0x10039e854*/
        {
          codexmate_lib::core::relay::atomic_write::sync_parent_dir::haca83c3fdd20bc7b(v10, v11); /*0x10039e873*/
          if ( v24 ) /*0x10039e882*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v24, 1); /*0x10039e88d*/
          return 0; /*0x10039e895*/
        }
        v19 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x10039e85e*/
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h08c81cd892747bed(v19); /*0x10039e866*/
      }
    }
    if ( v24 ) /*0x10039e80e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v24, 1); /*0x10039e819*/
  }
  return (__int64)v12; /*0x10039e6a6*/
}