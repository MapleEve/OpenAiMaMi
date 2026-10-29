// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hff49b4fc554577e2; addr: 0x1007060f0; session: <审计会话>; decompiled_at: 2026-10-26T03:34:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hff49b4fc554577e2(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 i; // r15
  _BYTE v6[360]; // [rsp+8h] [rbp-698h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-530h] BYREF
  _BYTE v8[144]; // [rsp+378h] [rbp-328h] BYREF
  _QWORD v9[50]; // [rsp+408h] [rbp-298h] BYREF
  _QWORD __srca[18]; // [rsp+598h] [rbp-108h] BYREF
  __int64 v11; // [rsp+628h] [rbp-78h] BYREF
  __int64 v12; // [rsp+630h] [rbp-70h]
  char *v13; // [rsp+638h] [rbp-68h]
  __int64 v14; // [rsp+640h] [rbp-60h]
  _BYTE *v15; // [rsp+648h] [rbp-58h]
  __int64 *v16; // [rsp+650h] [rbp-50h]
  __int64 v17; // [rsp+658h] [rbp-48h]
  __int64 v18; // [rsp+668h] [rbp-38h] BYREF
  __int64 v19; // [rsp+670h] [rbp-30h]
  __int64 v20; // [rsp+678h] [rbp-28h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x100706117*/
  memcpy(v9, __src + 520, sizeof(v9)); /*0x100706132*/
  v20 = *((_QWORD *)__src + 117); /*0x10070613e*/
  v2 = *((_QWORD *)__src + 115); /*0x100706142*/
  v19 = *((_QWORD *)__src + 116); /*0x100706150*/
  v18 = v2; /*0x100706154*/
  v17 = 0; /*0x100706158*/
  v11 = (__int64)"write_client_debug_log"; /*0x100706167*/
  v12 = 22; /*0x10070616b*/
  v13 = "eventunable to create thread with 8MiB stackthe generated Tauri `Context` panicked during creation\n"; /*0x10070617a*/
  v14 = 5; /*0x10070617e*/
  v15 = __dst; /*0x100706186*/
  v16 = &v18; /*0x10070618e*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8af0c779a6af0971(__srca); /*0x1007061a0*/
  if ( __OFSUB__(0, __srca[0]) ) /*0x1007061a7*/
  {
    v15 = (_BYTE *)__srca[4]; /*0x1007061b7*/
    v14 = __srca[3]; /*0x1007061c2*/
    v13 = (char *)__srca[2]; /*0x1007061d4*/
    v12 = __srca[1]; /*0x1007061d8*/
    memcpy(v6, __src + 520, sizeof(v6)); /*0x1007061ee*/
    v11 = 1; /*0x10070620f*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x100706224*/
      v6,
      v9[48],
      &v11,
      __src + 880,
      LODWORD(v9[49]),
      HIDWORD(v9[49]));
  }
  else
  {
    memcpy(v8, __srca, sizeof(v8)); /*0x100706241*/
    codexmate_lib::commands::debug_bundle::write_client_debug_log::hd575dba0335e141a(v8); /*0x100706249*/
    LOBYTE(__srca[0]) = 6; /*0x10070624e*/
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::he92e07bdbef96a86(__src + 520); /*0x100706262*/
  }
  if ( v18 != 0x8000000000000000LL ) /*0x100706275*/
  {
    v3 = v19; /*0x100706277*/
    for ( i = v20 + 1; i != 1; --i ) /*0x10070627f*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x10070629d*/
      v3 += 96; /*0x1007062a2*/
    }
    if ( v18 ) /*0x1007062ae*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 96 * v18, 8); /*0x1007062c1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1007062d2*/
}