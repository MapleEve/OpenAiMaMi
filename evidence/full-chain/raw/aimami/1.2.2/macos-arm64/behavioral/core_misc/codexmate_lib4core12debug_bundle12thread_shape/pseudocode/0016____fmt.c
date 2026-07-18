// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12thread_shape 0x1007dfdb0 d=2
char __fastcall _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int8 *v5; // rdx
  _QWORD *v7; // [rsp+8h] [rbp-18h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+10h] [rbp-10h]
  _QWORD *v9; // [rsp+18h] [rbp-8h] BYREF

  v2 = 2; /*0x1007dfdbf*/
  if ( *a1 >= 2u ) /*0x1007dfdc4*/
    v2 = *a1 - 2LL; /*0x1007dfdc4*/
  switch ( v2 ) /*0x1007dfdd6*/
  {
    case 0LL: /*0x1007dfdd6*/
      v9 = a1 + 1; /*0x1007dfddc*/
      v7 = &v9; /*0x1007dfde4*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb46c7eb6c61593bd; /*0x1007dfdef*/
      v3 = *a2; /*0x1007dfdf3*/
      v4 = a2[1]; /*0x1007dfdf6*/
      v5 = (unsigned __int8 *)&unk_1016F7F81; /*0x1007dfdfa*/
      break; /*0x1007dfe01*/
    case 1LL: /*0x1007dfdd6*/
      v9 = a1 + 1; /*0x1007dfebb*/
      v7 = &v9; /*0x1007dfec3*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82d3fd0d965fa588; /*0x1007dfece*/
      v3 = *a2; /*0x1007dfed2*/
      v4 = a2[1]; /*0x1007dfed5*/
      v5 = (unsigned __int8 *)&unk_1016F7F8E; /*0x1007dfed9*/
      break; /*0x1007dfee0*/
    case 2LL: /*0x1007dfdd6*/
      v9 = a1; /*0x1007dfe34*/
      v7 = &v9; /*0x1007dfe3c*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0ad68bea7bccb7d1; /*0x1007dfe47*/
      v3 = *a2; /*0x1007dfe4b*/
      v4 = a2[1]; /*0x1007dfe4e*/
      v5 = (unsigned __int8 *)&unk_1016F7F9D; /*0x1007dfe52*/
      break; /*0x1007dfe59*/
    case 3LL: /*0x1007dfdd6*/
      v9 = a1 + 1; /*0x1007dfe62*/
      v7 = &v9; /*0x1007dfe6a*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h40535f5a88452365; /*0x1007dfe75*/
      v3 = *a2; /*0x1007dfe79*/
      v4 = a2[1]; /*0x1007dfe7c*/
      v5 = (unsigned __int8 *)&unk_1016F7FB2; /*0x1007dfe80*/
      break; /*0x1007dfe87*/
    case 4LL: /*0x1007dfdd6*/
      v9 = a1 + 1; /*0x1007dfe0a*/
      v7 = &v9; /*0x1007dfe12*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d9a09a35540532a; /*0x1007dfe1d*/
      v3 = *a2; /*0x1007dfe21*/
      v4 = a2[1]; /*0x1007dfe24*/
      v5 = (unsigned __int8 *)&unk_1016F7FCB; /*0x1007dfe28*/
      break; /*0x1007dfe2f*/
    case 5LL: /*0x1007dfdd6*/
      v9 = a1 + 1; /*0x1007dfee6*/
      v7 = &v9; /*0x1007dfeee*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4d8c448bef4b4de6; /*0x1007dfef9*/
      v3 = *a2; /*0x1007dfefd*/
      v4 = a2[1]; /*0x1007dff00*/
      v5 = (unsigned __int8 *)&unk_1016F7FDA; /*0x1007dff04*/
      break; /*0x1007dff0b*/
    case 6LL: /*0x1007dfdd6*/
      v9 = a1 + 1; /*0x1007dff11*/
      v7 = &v9; /*0x1007dff19*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4d8c448bef4b4de6; /*0x1007dff24*/
      v3 = *a2; /*0x1007dff28*/
      v4 = a2[1]; /*0x1007dff2b*/
      v5 = (unsigned __int8 *)&unk_1016F7FE8; /*0x1007dff2f*/
      break; /*0x1007dff2f*/
    case 7LL: /*0x1007dfdd6*/
      v9 = a1 + 1; /*0x1007dfe90*/
      v7 = &v9; /*0x1007dfe98*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4d8c448bef4b4de6; /*0x1007dfea3*/
      v3 = *a2; /*0x1007dfea7*/
      v4 = a2[1]; /*0x1007dfeaa*/
      v5 = (unsigned __int8 *)&unk_1016F7FF9; /*0x1007dfeae*/
      break; /*0x1007dfeb5*/
  }
  return core::fmt::write::h2e5a8157a38fb62d(v3, v4, v5, (unsigned __int64)&v7); /*0x1007dff3f*/
}