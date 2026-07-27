// __ZN13codexmate_lib4core5relay7storage15hydrate_secrets @ 0x1008aeb00 | 基线 same-set
char __fastcall codexmate_lib::core::relay::storage::hydrate_secrets::h1c618d5f9f9faa8f(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 (__fastcall **v5)(); // r15
  __int64 (__fastcall *v6)(); // r13
  __int64 (__fastcall **v7)(); // rdi
  __int64 (__fastcall *v8)(); // rax
  __int64 (__fastcall *v9)(); // r15
  __int64 v10; // rsi
  int v11; // eax
  __int64 v13; // [rsp+8h] [rbp-F8h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+10h] [rbp-F0h]
  __int64 v15; // [rsp+18h] [rbp-E8h]
  __int64 v16; // [rsp+20h] [rbp-E0h]
  __int64 (__fastcall *v17)(); // [rsp+28h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+38h] [rbp-C8h]
  __int64 v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  void *v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  const char *v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  void *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+90h] [rbp-70h]
  void *v31; // [rsp+98h] [rbp-68h]
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall **v35)(); // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v36)(); // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall **v37)(); // [rsp+C8h] [rbp-38h]
  _BYTE v38[41]; // [rsp+D7h] [rbp-29h] BYREF

  v20 = a1; /*0x1008aeb14*/
  v2 = *(_QWORD *)(a2 + 16); /*0x1008aeb1b*/
  if ( v2 ) /*0x1008aeb22*/
  {
    v3 = *(_QWORD *)(a2 + 8); /*0x1008aeb28*/
    v4 = 232 * v2; /*0x1008aeb2c*/
    LODWORD(v37) = 0; /*0x1008aeb3a*/
    while ( 1 ) /*0x1008aeb84*/
    {
      if ( *(_BYTE *)(v3 + 228) ) /*0x1008aeb84*/
      {
        codexmate_lib::core::relay::keychain::get_api_key::hc52a6eafd9a74e53( /*0x1008aeba4*/
          &v13,
          v20,
          *(unsigned __int8 **)(v3 + 8),
          *(_QWORD *)(v3 + 16));
        v5 = (__int64 (__fastcall **)())(v3 + 72); /*0x1008aeba9*/
        if ( (_BYTE)v13 ) /*0x1008aebb4*/
        {
          v19 = v16; /*0x1008aebbe*/
          v18 = v15; /*0x1008aebcd*/
          v17 = v14; /*0x1008aebd4*/
          if ( *v5 ) /*0x1008aebdb*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v3 + 80), *v5, 1); /*0x1008aebec*/
          *(_QWORD *)(v3 + 72) = 0; /*0x1008aebf1*/
          *(_QWORD *)(v3 + 80) = 1; /*0x1008aebf9*/
          *(_QWORD *)(v3 + 88) = 0; /*0x1008aec01*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008aec17*/
          {
            v33 = v3; /*0x1008aec1d*/
            v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008aec28*/
            v35 = &v17; /*0x1008aec33*/
            v36 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008aec37*/
            v27 = 2; /*0x1008aec3b*/
            v28 = &unk_101675C8E; /*0x1008aec4d*/
            v29 = 35; /*0x1008aec51*/
            v31 = &unk_1017C6150; /*0x1008aec60*/
            v32 = &v33; /*0x1008aec68*/
            v21 = 0; /*0x1008aec6c*/
            v22 = &unk_101675C8E; /*0x1008aec77*/
            v23 = 35; /*0x1008aec7e*/
            v24 = 0; /*0x1008aec89*/
            v25 = "src/core/relay/storage.rs"; /*0x1008aec9b*/
            v26 = 25; /*0x1008aeca2*/
            v30 = 0x1D000000001LL; /*0x1008aecb7*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v38, &v21); /*0x1008aecc6*/
          }
          if ( v17 ) /*0x1008aecd5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x1008aece7*/
        }
        else if ( v14 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1008aed71*/
        {
          if ( *v5 ) /*0x1008aed77*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v3 + 80), *v5, 1); /*0x1008aed88*/
          *(_QWORD *)(v3 + 72) = 0; /*0x1008aed8d*/
          *(_QWORD *)(v3 + 80) = 1; /*0x1008aed95*/
          *(_QWORD *)(v3 + 88) = 0; /*0x1008aed9d*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x1008aedb3*/
          {
            v33 = v3; /*0x1008aedb9*/
            v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008aedc4*/
            v27 = 2; /*0x1008aedc8*/
            v28 = &unk_101675C8E; /*0x1008aedda*/
            v29 = 35; /*0x1008aedde*/
            v31 = &unk_1017C60EB; /*0x1008aeded*/
            v32 = &v33; /*0x1008aedf5*/
            v21 = 0; /*0x1008aedf9*/
            v22 = &unk_101675C8E; /*0x1008aee04*/
            v23 = 35; /*0x1008aee0b*/
            v24 = 0; /*0x1008aee16*/
            v25 = "src/core/relay/storage.rs"; /*0x1008aee28*/
            v26 = 25; /*0x1008aee2f*/
            v30 = 0x1C900000001LL; /*0x1008aee44*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v38, &v21); /*0x1008aee53*/
          }
        }
        else
        {
          if ( *v5 ) /*0x1008aee5d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v3 + 80), *v5, 1); /*0x1008aee6e*/
          *(_QWORD *)(v3 + 88) = v16; /*0x1008aee77*/
          v8 = v14; /*0x1008aee7b*/
          *(_QWORD *)(v3 + 80) = v15; /*0x1008aee83*/
          *v5 = v8; /*0x1008aee87*/
        }
        goto LABEL_5; /*0x1008aecec*/
      }
      if ( !*(_QWORD *)(v3 + 88) ) /*0x1008aed00*/
      {
        codexmate_lib::core::relay::keychain::get_api_key::hc52a6eafd9a74e53( /*0x1008aed1e*/
          &v33,
          v20,
          *(unsigned __int8 **)(v3 + 8),
          *(_QWORD *)(v3 + 16));
        v6 = v34; /*0x1008aed27*/
        if ( ((unsigned __int8)v33 | (v34 == (__int64 (__fastcall *)())0x8000000000000000LL)) == 1 ) /*0x1008aed40*/
        {
          if ( !(_BYTE)v33 || !v34 ) /*0x1008aed51*/
            goto LABEL_5; /*0x1008aed51*/
          v7 = v35; /*0x1008aed57*/
LABEL_4:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v34, 1); /*0x1008aeb4f*/
          goto LABEL_5; /*0x1008aeb57*/
        }
        v7 = v35; /*0x1008aee8f*/
        v9 = v36; /*0x1008aee93*/
        if ( v36 ) /*0x1008aee9a*/
        {
          v37 = v35; /*0x1008aeea0*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x1008aeeb2*/
          {
            v13 = v3; /*0x1008aeeb8*/
            v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008aeec6*/
            v27 = 3; /*0x1008aeecd*/
            v28 = &unk_101675C8E; /*0x1008aeedf*/
            v29 = 35; /*0x1008aeee3*/
            v31 = &unk_1017C607F; /*0x1008aeef2*/
            v32 = &v13; /*0x1008aeef6*/
            v21 = 0; /*0x1008aeefa*/
            v22 = &unk_101675C8E; /*0x1008aef05*/
            v23 = 35; /*0x1008aef0c*/
            v24 = 0; /*0x1008aef17*/
            v25 = "src/core/relay/storage.rs"; /*0x1008aef29*/
            v26 = 25; /*0x1008aef30*/
            v30 = 0x1D700000001LL; /*0x1008aef45*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v38, &v21); /*0x1008aef54*/
          }
          v10 = *(_QWORD *)(v3 + 72); /*0x1008aef59*/
          if ( v10 ) /*0x1008aef60*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v3 + 80), v10, 1); /*0x1008aef6b*/
          *(_QWORD *)(v3 + 72) = v6; /*0x1008aef70*/
          v11 = (int)v37; /*0x1008aef74*/
          *(_QWORD *)(v3 + 80) = v37; /*0x1008aef78*/
          *(_QWORD *)(v3 + 88) = v9; /*0x1008aef7c*/
          *(_BYTE *)(v3 + 228) = 1; /*0x1008aef80*/
          LOBYTE(v11) = 1; /*0x1008aef88*/
          LODWORD(v37) = v11; /*0x1008aef8a*/
          goto LABEL_5; /*0x1008aef8d*/
        }
        if ( v34 ) /*0x1008aeb4d*/
          goto LABEL_4; /*0x1008aeb4d*/
      }
LABEL_5:
      v3 += 232; /*0x1008aeb70*/
      v4 -= 232; /*0x1008aeb77*/
      if ( !v4 ) /*0x1008aeb7e*/
        return (unsigned __int8)v37 & 1; /*0x1008aeb7e*/
    }
  }
  LODWORD(v37) = 0; /*0x1008aef92*/
  return (unsigned __int8)v37 & 1; /*0x1008aef9e*/
}