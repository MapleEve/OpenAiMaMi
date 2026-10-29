// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h2395539b2dc491bc; addr: 0x1006f47d0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:30Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h2395539b2dc491bc(
        char *__src,
        double a2)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  size_t v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  void *v10; // r15
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-7C8h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-660h] BYREF
  _BYTE v16[152]; // [rsp+378h] [rbp-458h] BYREF
  _QWORD v17[50]; // [rsp+410h] [rbp-3C0h] BYREF
  _QWORD __srca[50]; // [rsp+5A0h] [rbp-230h] BYREF
  _QWORD v19[2]; // [rsp+730h] [rbp-A0h] BYREF
  size_t __n; // [rsp+740h] [rbp-90h]
  __int64 v21; // [rsp+748h] [rbp-88h] BYREF
  __int64 v22; // [rsp+750h] [rbp-80h]
  char *v23; // [rsp+758h] [rbp-78h]
  __int64 v24; // [rsp+760h] [rbp-70h]
  _BYTE *v25; // [rsp+768h] [rbp-68h]
  __int64 *v26; // [rsp+770h] [rbp-60h]
  __int64 v27; // [rsp+778h] [rbp-58h]
  void *v28; // [rsp+788h] [rbp-48h]
  __int64 v29; // [rsp+790h] [rbp-40h] BYREF
  __int64 v30; // [rsp+798h] [rbp-38h]
  __int64 v31; // [rsp+7A0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f47f9*/
  v2 = __src + 520; /*0x1006f47fe*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1006f4814*/
  v31 = *((_QWORD *)__src + 117); /*0x1006f4820*/
  v3 = *((_QWORD *)__src + 115); /*0x1006f4824*/
  v30 = *((_QWORD *)__src + 116); /*0x1006f4832*/
  v29 = v3; /*0x1006f4836*/
  v27 = 0; /*0x1006f483a*/
  v21 = (__int64)"hotspot_readyupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providers"; /*0x1006f4849*/
  v22 = 13; /*0x1006f4850*/
  v23 = "appstarted"; /*0x1006f485f*/
  v24 = 3; /*0x1006f4863*/
  v25 = __dst; /*0x1006f486b*/
  v26 = &v29; /*0x1006f4873*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h04b443a2cb61751a(__srca); /*0x1006f4888*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1006f489e*/
  {
    memcpy(v16, __srca, sizeof(v16)); /*0x1006f493e*/
    codexmate_lib::commands::hotspot::hotspot_ready::h6ee3d45460c6a022(v19, v16); /*0x1006f494d*/
    memcpy(__srca, v2, sizeof(__srca)); /*0x1006f4961*/
    v5 = v19[0]; /*0x1006f4966*/
    if ( v19[0] == 0x8000000000000000LL ) /*0x1006f4970*/
    {
      LOBYTE(v21) = 6; /*0x1006f4972*/
LABEL_15:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::he92e07bdbef96a86(v2); /*0x1006f4a13*/
      goto LABEL_16; /*0x1006f4a1d*/
    }
    v6 = __n; /*0x1006f4985*/
    v28 = (void *)v19[1]; /*0x1006f498f*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006f4993*/
    {
      v7 = 0; /*0x1006f4995*/
      goto LABEL_7; /*0x1006f4995*/
    }
    if ( __n ) /*0x1006f49a5*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, v2, v4); /*0x1006f49a7*/
      v7 = 1; /*0x1006f49ac*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1006f49ba*/
      if ( !v8 ) /*0x1006f49c2*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1006f4998*/
      v9 = v8; /*0x1006f49c4*/
    }
    else
    {
      v9 = 1; /*0x1006f49c9*/
    }
    v10 = v28; /*0x1006f49d2*/
    memcpy((void *)v9, v28, v6); /*0x1006f49dc*/
    if ( v5 ) /*0x1006f49e4*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v5, 1); /*0x1006f49f1*/
    LOBYTE(v21) = 3; /*0x1006f49f6*/
    v22 = v6; /*0x1006f49fd*/
    v23 = (char *)v9; /*0x1006f4a01*/
    v24 = v6; /*0x1006f4a05*/
    goto LABEL_15; /*0x1006f4a05*/
  }
  v25 = (_BYTE *)__srca[4]; /*0x1006f48ab*/
  v24 = __srca[3]; /*0x1006f48b6*/
  v23 = (char *)__srca[2]; /*0x1006f48c8*/
  v22 = __srca[1]; /*0x1006f48cc*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x1006f48e2*/
  v21 = 1; /*0x1006f4903*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::hd0f1411cf3115a0d( /*0x1006f491e*/
    v14,
    v17[48],
    &v21,
    __src + 880,
    LODWORD(v17[49]),
    HIDWORD(v17[49]));
LABEL_16:
  if ( v29 != 0x8000000000000000LL ) /*0x1006f4a26*/
  {
    v11 = v30; /*0x1006f4a28*/
    for ( i = v31 + 1; i != 1; --i ) /*0x1006f4a30*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h007a91f8090dd28a(a2); /*0x1006f4a4d*/
      v11 += 96; /*0x1006f4a52*/
    }
    if ( v29 ) /*0x1006f4a5e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 96 * v29, 8); /*0x1006f4a71*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h4d82be561beee9c3(__dst, a2); /*0x1006f4a82*/
}