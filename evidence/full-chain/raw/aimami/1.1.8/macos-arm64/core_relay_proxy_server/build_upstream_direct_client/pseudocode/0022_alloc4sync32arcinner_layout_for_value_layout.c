// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_direct_client node 0x1010db0d0 depth=2
__int64 __fastcall alloc::sync::arcinner_layout_for_value_layout::h74907c05f0a7a03c(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  _BYTE v4[9]; // [rsp-9h] [rbp-9h] BYREF

  result = 8; /*0x1010db0d4*/
  if ( a1 >= 9 ) /*0x1010db0d9*/
    result = a1; /*0x1010db0d9*/
  if ( a2 + ((a1 + 15) & -(__int64)a1) > 0x8000000000000000LL - result ) /*0x1010db0fa*/
  {
    *(_QWORD *)&v4[1] = v2; /*0x1010db10b*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1010db131*/
      (__int64)"called `Result::unwrap()` on an `Err` valueErrora formatting trait implementation returned an error when the underlying stream did notcapacity overflowLayoutError",
      43,
      (__int64)v4,
      (__int64)&unk_1015AFC80,
      (__int64)&off_1015AFD48);
  }
  return result; /*0x1010db10a*/
}