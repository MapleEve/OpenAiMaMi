// IDA Hex-Rays decompile evidence
// addr: 0x1002bcb30
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
__int64 __fastcall core::ptr::drop_in_place$LT$$LT$codexmate_lib..core..relay..proxy_server..forward_responses_compact$u20$as$u20$axum..handler..Handler$LT$$LP$axum_core..extract..private..ViaRequest$C$axum..extract..state..State$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$$C$axum..extract..path..Path$LT$alloc..string..String$GT$$C$http..uri..Uri$C$http..header..map..HeaderMap$C$axum..json..Json$LT$serde_json..value..Value$GT$$RP$$C$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$$GT$..call..$u7b$$u7b$closure$u7d$$u7d$$GT$::hba5e99f9612e5c70(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rsi

  result = *(unsigned __int8 *)(a1 + 696); /*0x1002bcb3b*/
  switch ( *(_BYTE *)(a1 + 696) ) /*0x1002bcb59*/
  {
    case 0: /*0x1002bcb59*/
      core::ptr::drop_in_place$LT$http..request..Request$LT$axum_core..body..Body$GT$$GT$::hd7a3bb85009d17ce(a1); /*0x1002bcb5e*/
      return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a1 + 240); /*0x1002bcb63*/
    case 3: /*0x1002bcb59*/
      v6 = *(_QWORD *)(a1 + 712); /*0x1002bcba6*/
      v7 = *(_QWORD *)(a1 + 720); /*0x1002bcbad*/
      if ( *(_QWORD *)v7 ) /*0x1002bcbb4*/
        (*(void (__fastcall **)(_QWORD))v7)(*(_QWORD *)(a1 + 712)); /*0x1002bcbc0*/
      v8 = *(_QWORD *)(v7 + 8); /*0x1002bcbc2*/
      if ( v8 ) /*0x1002bcbca*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x1002bcbd8*/
      goto LABEL_34; /*0x1002bcbdd*/
    case 4: /*0x1002bcb59*/
      v9 = *(_QWORD *)(a1 + 712); /*0x1002bcc13*/
      v10 = *(_QWORD *)(a1 + 720); /*0x1002bcc1a*/
      if ( *(_QWORD *)v10 ) /*0x1002bcc21*/
        (*(void (__fastcall **)(_QWORD))v10)(*(_QWORD *)(a1 + 712)); /*0x1002bcc2d*/
      v11 = *(_QWORD *)(v10 + 8); /*0x1002bcc2f*/
      if ( !v11 ) /*0x1002bcc37*/
        goto LABEL_32; /*0x1002bcc37*/
      v12 = *(_QWORD *)(v10 + 16); /*0x1002bcc3d*/
      v13 = v9; /*0x1002bcc42*/
      goto LABEL_31; /*0x1002bcc45*/
    case 5: /*0x1002bcb59*/
      v14 = *(_QWORD *)(a1 + 712); /*0x1002bcc4a*/
      v15 = *(_QWORD *)(a1 + 720); /*0x1002bcc51*/
      if ( *(_QWORD *)v15 ) /*0x1002bcc58*/
        (*(void (__fastcall **)(_QWORD))v15)(*(_QWORD *)(a1 + 712)); /*0x1002bcc64*/
      v16 = *(_QWORD *)(v15 + 8); /*0x1002bcc66*/
      if ( v16 ) /*0x1002bcc6e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x1002bcc78*/
      goto LABEL_28; /*0x1002bcc7d*/
    case 6: /*0x1002bcb59*/
      v17 = *(_QWORD *)(a1 + 712); /*0x1002bcc7f*/
      v18 = *(_QWORD *)(a1 + 720); /*0x1002bcc86*/
      if ( *(_QWORD *)v18 ) /*0x1002bcc8d*/
        (*(void (__fastcall **)(_QWORD))v18)(*(_QWORD *)(a1 + 712)); /*0x1002bcc99*/
      v19 = *(_QWORD *)(v18 + 8); /*0x1002bcc9b*/
      if ( v19 ) /*0x1002bcca3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, *(_QWORD *)(v18 + 16)); /*0x1002bccad*/
      goto LABEL_26; /*0x1002bccad*/
    case 7: /*0x1002bcb59*/
      v3 = *(_QWORD *)(a1 + 712); /*0x1002bcb71*/
      v4 = *(_QWORD *)(a1 + 720); /*0x1002bcb78*/
      if ( *(_QWORD *)v4 ) /*0x1002bcb7f*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(a1 + 712)); /*0x1002bcb8b*/
      v5 = *(_QWORD *)(v4 + 8); /*0x1002bcb8d*/
      if ( v5 ) /*0x1002bcb95*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16)); /*0x1002bcb9f*/
      goto LABEL_12; /*0x1002bcba4*/
    case 8: /*0x1002bcb59*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_responses..$u7b$$u7b$closure$u7d$$u7d$$GT$::hec532821505d6e38(a1 + 712); /*0x1002bcbe9*/
LABEL_12:
      *(_BYTE *)(a1 + 704) = 0; /*0x1002bcbee*/
      if ( *(_BYTE *)(a1 + 699) ) /*0x1002bcbf5*/
        core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(a1 + 728); /*0x1002bcc09*/
LABEL_26:
      *(_BYTE *)(a1 + 699) = 0; /*0x1002bccb2*/
      if ( *(_BYTE *)(a1 + 700) ) /*0x1002bccb9*/
        core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h245bcdd64568d23f(a1 + 608); /*0x1002bccc9*/
LABEL_28:
      *(_BYTE *)(a1 + 700) = 0; /*0x1002bccce*/
      if ( !*(_BYTE *)(a1 + 701) ) /*0x1002bccd5*/
        goto LABEL_32; /*0x1002bccd5*/
      v11 = *(_QWORD *)(a1 + 584); /*0x1002bccde*/
      if ( !v11 ) /*0x1002bcce8*/
        goto LABEL_32; /*0x1002bcce8*/
      v13 = *(_QWORD *)(a1 + 592); /*0x1002bccea*/
      v12 = 1; /*0x1002bccf1*/
LABEL_31:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v11, v12); /*0x1002bccf6*/
LABEL_32:
      *(_BYTE *)(a1 + 701) = 0; /*0x1002bccfb*/
      if ( *(_BYTE *)(a1 + 702) ) /*0x1002bcd02*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a1 + 536); /*0x1002bcd12*/
LABEL_34:
      *(_BYTE *)(a1 + 702) = 0; /*0x1002bcd17*/
      if ( *(_BYTE *)(a1 + 697) ) /*0x1002bcd1e*/
      {
        v20 = *(_QWORD *)(a1 + 512); /*0x1002bcd27*/
        v21 = *(_QWORD *)(a1 + 520); /*0x1002bcd2e*/
        if ( *(_QWORD *)v21 ) /*0x1002bcd35*/
          (*(void (__fastcall **)(_QWORD))v21)(*(_QWORD *)(a1 + 512)); /*0x1002bcd41*/
        v22 = *(_QWORD *)(v21 + 8); /*0x1002bcd43*/
        if ( v22 ) /*0x1002bcd4b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x1002bcd55*/
      }
      *(_BYTE *)(a1 + 697) = 0; /*0x1002bcd5a*/
      if ( *(_BYTE *)(a1 + 698) ) /*0x1002bcd61*/
        core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a1 + 288); /*0x1002bcd71*/
      *(_BYTE *)(a1 + 698) = 0; /*0x1002bcd76*/
      return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a1 + 240);
    default:
      return result;
  }
}

// --- refs (callees/xrefs from decompile) ---
// 0x1002c31a0  __ZN4core3ptr72drop_in_place$LT$http..request..Request$LT$axum_core..body..Body$GT$$GT$17hd7a3bb85009d17ceE_0
// 0x1002c36a0  __ZN4core3ptr75drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$17h6b77bb86e3844f1cE_0
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x10029ac10  __ZN4core3ptr109drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_responses..$u7b$$u7b$closure$u7d$$u7d$$GT$17hec532821505d6e38E
// 0x1002bc220  __ZN4core3ptr49drop_in_place$LT$http..header..map..HeaderMap$GT$17hb91855b753871e5fE_2
// 0x1002b94f0  __ZN4core3ptr35drop_in_place$LT$http..uri..Uri$GT$17h245bcdd64568d23fE_2
// 0x1002ba2a0  __ZN4core3ptr41drop_in_place$LT$http..request..Parts$GT$17h8de5979c17c50e06E_2
