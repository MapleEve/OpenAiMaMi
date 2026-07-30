// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream14with_tool_maps @ 0x100acf9f0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::with_tool_maps::hb6525e00af080c0a(
        __int64 a1,
        const void *a2,
        signed __int64 a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // r12
  __int64 v12; // r14
  __int64 (__fastcall **v13)(); // r12
  __int64 v14; // r14
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD v23[2]; // [rsp+0h] [rbp-90h] BYREF
  _QWORD v24[2]; // [rsp+10h] [rbp-80h] BYREF
  __int64 *v25; // [rsp+20h] [rbp-70h]
  __int64 v26; // [rsp+28h] [rbp-68h]
  _QWORD *v27; // [rsp+30h] [rbp-60h] BYREF
  __int64 v28; // [rsp+38h] [rbp-58h]
  unsigned __int64 v29; // [rsp+40h] [rbp-50h]
  _QWORD *v30; // [rsp+48h] [rbp-48h]
  _QWORD *v31; // [rsp+50h] [rbp-40h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+58h] [rbp-38h]
  __int64 v33; // [rsp+60h] [rbp-30h]

  v25 = a4; /*0x100acfa04*/
  if ( a3 < 0 ) /*0x100acfa0e*/
  {
    v7 = 0; /*0x100acfa10*/
    goto LABEL_3; /*0x100acfa10*/
  }
  if ( a3 ) /*0x100acfa26*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3, a4); /*0x100acfa2b*/
    v7 = 1; /*0x100acfa30*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100acfa3e*/
    if ( !v9 ) /*0x100acfa46*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, a3); /*0x100acfa13*/
    v10 = v9; /*0x100acfa48*/
  }
  else
  {
    v10 = 1; /*0x100acfa50*/
  }
  v26 = v10; /*0x100acfa55*/
  memcpy((void *)v10, a2, a3); /*0x100acfa5c*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v31); /*0x100acfa65*/
  v23[1] = v32; /*0x100acfa72*/
  v23[0] = v31; /*0x100acfa79*/
  v27 = nullptr; /*0x100acfa80*/
  v28 = 1; /*0x100acfa88*/
  v29 = 0; /*0x100acfa90*/
  v33 = 1610612768; /*0x100acfa98*/
  v31 = &v27; /*0x100acfaa4*/
  v32 = &anon_0c22962ad8183617843af04262484590_781; /*0x100acfaaf*/
  if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(v23, &v31) ) /*0x100acfabe*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100acfd27*/
      &anon_0c22962ad8183617843af04262484590_782,
      55,
      v24,
      &anon_0c22962ad8183617843af04262484590_795,
      &anon_0c22962ad8183617843af04262484590_784);
  v11 = v27; /*0x100acfacb*/
  v12 = v28; /*0x100acfacf*/
  if ( v29 <= 0x10 ) /*0x100acfadb*/
  {
    if ( v29 != 16 ) /*0x100acfaff*/
LABEL_11:
      core::str::slice_error_fail::h480e51fbd8b15eba(v28, v29, 0, 16, &off_101985700); /*0x100acfae4*/
  }
  else if ( *(char *)(v28 + 16) <= -65 ) /*0x100acfae2*/
  {
    goto LABEL_11; /*0x100acfae2*/
  }
  v24[0] = v28; /*0x100acfb01*/
  v24[1] = 16; /*0x100acfb05*/
  v27 = v24; /*0x100acfb11*/
  v28 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x100acfb1c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v31, &unk_1017CE3A5, &v27); /*0x100acfb2f*/
  if ( v11 ) /*0x100acfb37*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x100acfb44*/
  v30 = v31; /*0x100acfb4d*/
  v13 = v32; /*0x100acfb51*/
  v14 = v33; /*0x100acfb55*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v31); /*0x100acfb5d*/
  v15 = ((int)v31 >> 13) - 1; /*0x100acfb6a*/
  v16 = 0; /*0x100acfb6d*/
  if ( (int)v31 >> 13 <= 0 ) /*0x100acfb71*/
  {
    v17 = (1 - ((int)v31 >> 13)) / 0x190u + 1; /*0x100acfb85*/
    v15 += 400 * v17; /*0x100acfb8d*/
    v16 = -146097 * v17; /*0x100acfb8f*/
  }
  v18 = HIDWORD(v31) /*0x100acfbd9*/
      + 86400LL
      * (int)(((v15 / 100) >> 2) + ((1461 * v15) >> 2) + v16 + (((unsigned int)v31 >> 4) & 0x1FF) - v15 / 100 - 719163);
  v19 = v25; /*0x100acfbdc*/
  *(_QWORD *)(a1 + 136) = v25[5]; /*0x100acfbe4*/
  *(_QWORD *)(a1 + 128) = v19[4]; /*0x100acfbef*/
  *(_QWORD *)(a1 + 120) = v19[3]; /*0x100acfbfa*/
  *(_QWORD *)(a1 + 112) = v19[2]; /*0x100acfc02*/
  v20 = *v19; /*0x100acfc06*/
  *(_QWORD *)(a1 + 104) = v19[1]; /*0x100acfc0d*/
  *(_QWORD *)(a1 + 96) = v20; /*0x100acfc11*/
  v21 = a5[1]; /*0x100acfc18*/
  *(_QWORD *)(a1 + 144) = *a5; /*0x100acfc1c*/
  *(_QWORD *)(a1 + 152) = v21; /*0x100acfc23*/
  *(_QWORD *)(a1 + 160) = a5[2]; /*0x100acfc2e*/
  *(_QWORD *)(a1 + 168) = a5[3]; /*0x100acfc39*/
  *(_QWORD *)(a1 + 176) = a5[4]; /*0x100acfc44*/
  *(_QWORD *)(a1 + 184) = a5[5]; /*0x100acfc4f*/
  *(_QWORD *)a1 = a3; /*0x100acfc56*/
  *(_QWORD *)(a1 + 8) = v26; /*0x100acfc5e*/
  *(_QWORD *)(a1 + 16) = a3; /*0x100acfc62*/
  *(_QWORD *)(a1 + 24) = v30; /*0x100acfc6a*/
  *(_QWORD *)(a1 + 32) = v13; /*0x100acfc6e*/
  *(_QWORD *)(a1 + 40) = v14; /*0x100acfc72*/
  *(_QWORD *)(a1 + 192) = v18; /*0x100acfc76*/
  *(_WORD *)(a1 + 252) = 0; /*0x100acfc7d*/
  *(_QWORD *)(a1 + 200) = 0; /*0x100acfc87*/
  *(_QWORD *)(a1 + 216) = 0; /*0x100acfc92*/
  *(_DWORD *)(a1 + 248) = 0; /*0x100acfc9d*/
  *(_QWORD *)(a1 + 72) = 0x8000000000000000LL; /*0x100acfcb2*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100acfcb6*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100acfcbe*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100acfcc6*/
  *(_BYTE *)(a1 + 254) = 0; /*0x100acfcce*/
  *(_QWORD *)(a1 + 224) = 0; /*0x100acfcd6*/
  *(_QWORD *)(a1 + 232) = 0; /*0x100acfce1*/
  *(_QWORD *)(a1 + 240) = 0; /*0x100acfcec*/
  return a1; /*0x100acfcfa*/
}