// __ZN13codexmate_lib8platform5proxy8push_url @ 0x1007d01b0 | 基线 same-set
void __fastcall codexmate_lib::platform::proxy::push_url::hff0f552f220a8030(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  void *v8; // rax
  signed __int64 v9; // rdx
  const void *v10; // r12
  signed __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  void *v15; // rsi
  __int64 v16; // r14
  void *v17; // rax
  void *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  signed __int64 v21; // rdx
  _QWORD v22[2]; // [rsp+0h] [rbp-A0h] BYREF
  _QWORD *v23; // [rsp+10h] [rbp-90h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+18h] [rbp-88h]
  _QWORD *v25; // [rsp+20h] [rbp-80h]
  __int64 (__fastcall *v26)(); // [rsp+28h] [rbp-78h]
  _QWORD *v27; // [rsp+30h] [rbp-70h]
  __int64 (__fastcall *v28)(); // [rsp+38h] [rbp-68h]
  _QWORD v29[2]; // [rsp+40h] [rbp-60h] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-50h] BYREF
  signed __int64 v31; // [rsp+60h] [rbp-40h] BYREF
  void *v32; // [rsp+68h] [rbp-38h]
  signed __int64 v33; // [rsp+70h] [rbp-30h]

  v30[0] = a2; /*0x1007d01c1*/
  v30[1] = a3; /*0x1007d01c5*/
  if ( a4 ) /*0x1007d01cc*/
  {
    v8 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a4, a5); /*0x1007d01de*/
    if ( v9 ) /*0x1007d01e6*/
    {
      v10 = v8; /*0x1007d01ec*/
      v11 = v9; /*0x1007d01ef*/
      v29[0] = v8; /*0x1007d01f2*/
      v29[1] = v9; /*0x1007d01f6*/
      if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1007d020c*/
                              "://",
                              3u,
                              v8) )
      {
        if ( v11 < 0 ) /*0x1007d0218*/
        {
          v12 = 0; /*0x1007d021e*/
          goto LABEL_6; /*0x1007d021e*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("://", 3); /*0x1007d02d4*/
        v12 = 1; /*0x1007d02d9*/
        v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x1007d02e7*/
        if ( !v17 ) /*0x1007d02ef*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v11); /*0x1007d0221*/
        v18 = v17; /*0x1007d02f5*/
        memcpy(v17, v10, v11); /*0x1007d0301*/
        v31 = v11; /*0x1007d0306*/
        v32 = v18; /*0x1007d030a*/
        v33 = v11; /*0x1007d030e*/
        v16 = a1[2]; /*0x1007d0312*/
        if ( v16 != *a1 ) /*0x1007d0319*/
          goto LABEL_16; /*0x1007d0319*/
      }
      else
      {
        if ( a6 && (v13 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a6, a7), v14) ) /*0x1007d0240*/
        {
          v22[0] = v13; /*0x1007d0242*/
          v22[1] = v14; /*0x1007d0249*/
          v23 = v30; /*0x1007d0254*/
          v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007d0262*/
          v25 = v29; /*0x1007d026d*/
          v26 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007d0271*/
          v27 = v22; /*0x1007d027c*/
          v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007d0280*/
          v15 = &unk_1017C531A; /*0x1007d0284*/
        }
        else
        {
          v23 = v30; /*0x1007d0291*/
          v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007d029f*/
          v25 = v29; /*0x1007d02aa*/
          v26 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007d02ae*/
          v15 = &unk_1017C5324; /*0x1007d02b2*/
        }
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v31, v15, &v23); /*0x1007d02c4*/
        v16 = a1[2]; /*0x1007d02c9*/
        if ( v16 != *a1 ) /*0x1007d02d0*/
          goto LABEL_16; /*0x1007d02d0*/
      }
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(a1); /*0x1007d031e*/
LABEL_16:
      v19 = a1[1]; /*0x1007d0323*/
      v20 = 3 * v16; /*0x1007d0327*/
      *(_QWORD *)(v19 + 8 * v20 + 16) = v33; /*0x1007d032f*/
      v21 = v31; /*0x1007d0334*/
      *(_QWORD *)(v19 + 8 * v20 + 8) = v32; /*0x1007d033c*/
      *(_QWORD *)(v19 + 8 * v20) = v21; /*0x1007d0341*/
      a1[2] = v16 + 1; /*0x1007d0348*/
    }
  }
}