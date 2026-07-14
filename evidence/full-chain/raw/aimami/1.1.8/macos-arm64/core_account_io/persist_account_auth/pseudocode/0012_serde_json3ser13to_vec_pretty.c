// mac 1.1.8 behavioral persist_account_auth 0x100514660 d=1
__int64 __fastcall serde_json::ser::to_vec_pretty::hcfcca9cecb956427(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[4]; // [rsp+0h] [rbp-50h] BYREF
  char v7; // [rsp+20h] [rbp-30h]
  __int64 v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+38h] [rbp-18h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100514671*/
  v3 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x80u, 1u); /*0x100514680*/
  if ( !v3 ) /*0x100514688*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x10051472e*/
  v8 = 128; /*0x10051468e*/
  v9 = v3; /*0x100514696*/
  v10 = 0; /*0x10051469a*/
  v6[0] = &v8; /*0x1005146a6*/
  v6[1] = &unk_1012C87C3; /*0x1005146b1*/
  v6[2] = 2; /*0x1005146b5*/
  v6[3] = 0; /*0x1005146bd*/
  v7 = 0; /*0x1005146c5*/
  v4 = codexmate_lib::core::auth::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..auth..AuthFile$GT$::serialize::h3afc574e6e7d1137( /*0x1005146d0*/
         a2,
         v6,
         a3);
  if ( v4 ) /*0x1005146d8*/
  {
    a1[1] = v4; /*0x1005146da*/
    result = 0x8000000000000000LL; /*0x1005146de*/
    *a1 = 0x8000000000000000LL; /*0x1005146e8*/
    if ( v8 ) /*0x1005146f2*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005146fd*/
  }
  else
  {
    a1[2] = v10; /*0x100514708*/
    result = v8; /*0x10051470c*/
    a1[1] = v9; /*0x100514714*/
    *a1 = result; /*0x100514718*/
  }
  return result; /*0x10051471b*/
}