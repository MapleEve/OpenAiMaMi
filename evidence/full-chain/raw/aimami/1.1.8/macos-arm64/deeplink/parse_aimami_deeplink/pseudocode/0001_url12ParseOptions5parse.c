// mac 1.1.8 parse_aimami_deeplink node va=0x10106e6d0 depth=1
// url12ParseOptions5parse
__int64 __fastcall url::ParseOptions::parse::h7da66aa6bebaf5b6(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD v10[4]; // [rsp+0h] [rbp-70h] BYREF
  __int128 v11; // [rsp+20h] [rbp-50h]
  __int128 v12; // [rsp+30h] [rbp-40h]
  char v13; // [rsp+40h] [rbp-30h]

  if ( a4 < 0 ) /*0x10106e6e7*/
  {
    v5 = 0; /*0x10106e6e9*/
    goto LABEL_3; /*0x10106e6e9*/
  }
  if ( a4 ) /*0x10106e6fa*/
  {
    v6 = a3; /*0x10106e6ff*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10106e702*/
    v5 = 1; /*0x10106e707*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1u); /*0x10106e715*/
    if ( !v7 ) /*0x10106e71d*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, a4); /*0x10106e6ec*/
    a3 = v6; /*0x10106e71f*/
  }
  else
  {
    v7 = 1; /*0x10106e727*/
  }
  v8 = *((_QWORD *)a2 + 4); /*0x10106e72c*/
  v10[0] = a4; /*0x10106e730*/
  v10[1] = v7; /*0x10106e734*/
  v10[2] = 0; /*0x10106e738*/
  v10[3] = v8; /*0x10106e740*/
  v11 = *a2; /*0x10106e747*/
  v12 = a2[1]; /*0x10106e74f*/
  v13 = 0; /*0x10106e753*/
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64))url::parser::Parser::parse_url::h656618b748ba9840)( /*0x10106e761*/
    a1,
    v10,
    a3,
    a4);
  return a1; /*0x10106e769*/
}