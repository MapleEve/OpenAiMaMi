// mac 1.1.8 BACKEND-ONLY handle_tray_menu_event node 0x1004f06e0 depth=1
// core3ptr59drop_in_place::h754f3a2a741d9d03E_5
void __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(_QWORD *a1)
{
  __int64 v1; // rax
  signed __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rsi

  v1 = 2; /*0x1004f06f2*/
  if ( *a1 >= 2u ) /*0x1004f06f7*/
    v1 = *a1 - 2LL; /*0x1004f06f7*/
  switch ( v1 ) /*0x1004f070f*/
  {
    case 0LL: /*0x1004f070f*/
      v3 = a1[1]; /*0x1004f0741*/
      if ( (a1[1] & 3) == 1 ) /*0x1004f074d*/
      {
        v4 = v3 - 1; /*0x1004f074f*/
        v5 = *(_QWORD *)(v3 - 1); /*0x1004f0753*/
        v6 = *(_QWORD *)(v3 + 7); /*0x1004f0757*/
        if ( *(_QWORD *)v6 ) /*0x1004f075b*/
          (*(void (__fastcall **)(__int64))v6)(v5); /*0x1004f0767*/
        v7 = *(_QWORD *)(v6 + 8); /*0x1004f0769*/
        if ( v7 ) /*0x1004f0771*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x1004f077b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x1004f078d*/
      }
      break; /*0x1004f078d*/
    case 1LL: /*0x1004f070f*/
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(a1[1]); /*0x1004f079b*/
      break; /*0x1004f079b*/
    case 2LL: /*0x1004f070f*/
      core::ptr::drop_in_place$LT$toml_edit..de..Error$GT$::hc35c2fe69ba26855(); /*0x1004f073c*/
      break; /*0x1004f073c*/
    case 3LL: /*0x1004f070f*/
      v2 = a1[1]; /*0x1004f07a0*/
      if ( v2 >= (__int64)0x8000000000000005LL ) /*0x1004f07b1*/
        goto LABEL_5; /*0x1004f07b1*/
      break; /*0x1004f07b1*/
    case 4LL: /*0x1004f070f*/
      core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h10979ef1b92776bb(a1[1]); /*0x1004f07cc*/
      break; /*0x1004f07cc*/
    default:
      v2 = a1[1]; /*0x1004f0711*/
LABEL_5:
      if ( v2 ) /*0x1004f0718*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[2], v2, 1); /*0x1004f072f*/
      break; /*0x1004f072f*/
  }
}