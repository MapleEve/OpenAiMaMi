// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_observation::AuthFileStamp::read::h437582f2c2e96a88; addr: 0x1009867d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
void __fastcall codexmate_lib::core::account_observation::AuthFileStamp::read::h437582f2c2e96a88(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rcx
  _BYTE v13[88]; // [rsp+8h] [rbp-148h] BYREF
  __int64 v14; // [rsp+60h] [rbp-F0h] BYREF
  _BYTE v15[96]; // [rsp+68h] [rbp-E8h] BYREF
  unsigned __int64 v16; // [rsp+C8h] [rbp-88h] BYREF
  unsigned __int64 v17; // [rsp+D0h] [rbp-80h]
  unsigned __int64 v18; // [rsp+D8h] [rbp-78h]
  unsigned __int64 v19; // [rsp+E0h] [rbp-70h]
  unsigned __int64 v20; // [rsp+E8h] [rbp-68h]
  unsigned __int64 v21; // [rsp+F0h] [rbp-60h]
  __int64 v22; // [rsp+F8h] [rbp-58h] BYREF
  int v23; // [rsp+100h] [rbp-50h]
  unsigned __int64 v24; // [rsp+108h] [rbp-48h]
  unsigned __int64 v25; // [rsp+110h] [rbp-40h]
  unsigned __int64 v26; // [rsp+118h] [rbp-38h]
  unsigned __int64 v27; // [rsp+120h] [rbp-30h]
  unsigned __int64 v28; // [rsp+128h] [rbp-28h]

  std::sys::fs::metadata::h32fa16d3052ea535(&v14, a2, a3); /*0x1009867ec*/
  v4 = *(_QWORD *)v15; /*0x1009867f1*/
  if ( (_DWORD)v14 == 1 ) /*0x1009867ff*/
  {
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(*(_QWORD *)v15) ) /*0x100986804*/
    {
      *(_QWORD *)a1 = 2; /*0x100986811*/
      *(_QWORD *)(a1 + 8) = v4; /*0x100986818*/
    }
    else
    {
      *(_DWORD *)(a1 + 24) = 1000000000; /*0x1009869a9*/
      *(_QWORD *)a1 = 11; /*0x1009869b0*/
      if ( (v4 & 3) == 1 ) /*0x1009869c0*/
      {
        v9 = *(_QWORD *)(v4 - 1); /*0x1009869c6*/
        v10 = *(_QWORD *)(v4 + 7); /*0x1009869ca*/
        if ( *(_QWORD *)v10 ) /*0x1009869ce*/
          (*(void (__fastcall **)(_QWORD))v10)(*(_QWORD *)(v4 - 1)); /*0x1009869da*/
        v11 = *(_QWORD *)(v10 + 8); /*0x1009869dc*/
        if ( v11 ) /*0x1009869e4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16)); /*0x1009869ee*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4 - 1, 24, 8); /*0x100986a0f*/
      }
    }
  }
  else
  {
    qmemcpy(v13, &v15[8], sizeof(v13)); /*0x100986834*/
    v5 = v16; /*0x100986837*/
    v24 = v17; /*0x100986842*/
    v25 = v18; /*0x10098684a*/
    v26 = v19; /*0x100986852*/
    v27 = v20; /*0x10098685a*/
    v28 = v21; /*0x100986862*/
    if ( (*(_QWORD *)v15 & 0xF00000000000LL) == 0x800000000000LL && v16 < 0x40001 ) /*0x10098688a*/
    {
      v14 = *(_QWORD *)v15; /*0x100986898*/
      qmemcpy(v15, v13, 0x58u); /*0x1009868b2*/
      *(_QWORD *)&v15[88] = v16; /*0x1009868b5*/
      v16 = v24; /*0x1009868c4*/
      v17 = v25; /*0x1009868cb*/
      v18 = v26; /*0x1009868d3*/
      v19 = v27; /*0x1009868db*/
      v20 = v28; /*0x1009868e3*/
      std::fs::Metadata::modified::h0e075817eaa8c909(&v22, &v14); /*0x1009868f2*/
      v6 = v23; /*0x1009868f7*/
      if ( v23 == 1000000000 ) /*0x1009868ff*/
      {
        v7 = v22; /*0x100986905*/
        *(_QWORD *)a1 = 2; /*0x100986909*/
        *(_QWORD *)(a1 + 8) = v7; /*0x100986910*/
      }
      else
      {
        v12 = v22; /*0x100986a14*/
        *(_QWORD *)(a1 + 8) = v5; /*0x100986a18*/
        *(_QWORD *)(a1 + 16) = v12; /*0x100986a1c*/
        *(_DWORD *)(a1 + 24) = v6; /*0x100986a20*/
        *(_QWORD *)a1 = 11; /*0x100986a23*/
      }
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v14, &v16, v3); /*0x100986919*/
      v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 1); /*0x100986928*/
      if ( !v8 ) /*0x100986930*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 48); /*0x100986a44*/
      qmemcpy(v8, "Auth observation requires a bounded regular file", 48); /*0x100986986*/
      *(_QWORD *)a1 = 9; /*0x100986989*/
      *(_QWORD *)(a1 + 8) = 48; /*0x100986990*/
      *(_QWORD *)(a1 + 16) = v8; /*0x100986998*/
      *(_QWORD *)(a1 + 24) = 48; /*0x10098699c*/
    }
  }
}