// mac 1.1.8 parse_aimami_deeplink node va=0x100694800 depth=1
// codexmate_lib8commands8deeplink13take_required
__int64 __fastcall codexmate_lib::commands::deeplink::take_required::h4e0ee256dd41eea2(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  _QWORD v11[2]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v12[2]; // [rsp+18h] [rbp-68h] BYREF
  __int64 v13; // [rsp+28h] [rbp-58h] BYREF
  size_t v14[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]

  v12[0] = a3; /*0x10069481d*/
  v12[1] = a4; /*0x100694821*/
  v6 = core::hash::BuildHasher::hash_one::h245728ff9d912134(a2 + 2); /*0x10069482f*/
  hashbrown::raw::RawTable$LT$T$C$A$GT$::remove_entry::h8c0a0626865fae94(&v13, a2, v6, a3, a4); /*0x100694844*/
  result = -v13; /*0x100694850*/
  if ( __OFSUB__(-v13, 1) ) /*0x100694853*/
    goto LABEL_5; /*0x100694853*/
  v8 = v15; /*0x10069485f*/
  v9 = v16; /*0x100694863*/
  v10 = v17; /*0x100694867*/
  if ( v13 ) /*0x10069486b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100694876*/
  if ( v8 == 0x8000000000000000LL ) /*0x10069487e*/
    goto LABEL_5; /*0x10069487e*/
  if ( !v10 ) /*0x1006948e0*/
  {
    if ( v8 ) /*0x1006948fa*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100694907*/
LABEL_5:
    v11[0] = v12; /*0x100694880*/
    v11[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10069488f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v14, byte_10122DF3A, (unsigned __int64)v11); /*0x1006948a2*/
    v13 = 0; /*0x1006948a7*/
    a1[3] = v15; /*0x1006948b3*/
    result = v14[0]; /*0x1006948b7*/
    a1[2] = v14[1]; /*0x1006948bf*/
    a1[1] = result; /*0x1006948c3*/
    *a1 = 0; /*0x1006948c7*/
    return result; /*0x1006948dc*/
  }
  a1[2] = v9; /*0x1006948e2*/
  a1[3] = v10; /*0x1006948e6*/
  a1[1] = v8; /*0x1006948ea*/
  *a1 = 2; /*0x1006948ee*/
  return result; /*0x1006948ce*/
}