// mac 1.2.2 NEW write_client_debug_log 0x101353dd0 d=3
__int64 __fastcall std::io::stdio::_eprint::hbd0be87d5097bd2e(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v4[4]; // [rsp+10h] [rbp-40h] BYREF
  void *v5; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+38h] [rbp-18h] BYREF

  v3[0] = "stderradvancing io slices beyond their lengthadvancing IoSlice beyond its lengthfailed to write the buffered data"; /*0x101353de8*/
  v3[1] = 6; /*0x101353dec*/
  result = std::io::stdio::print_to_buffer_if_capture_used::h05656700689d7310(a1, a2); /*0x101353df4*/
  if ( !(_BYTE)result ) /*0x101353dfb*/
  {
    v5 = &std::io::stdio::stderr::INSTANCE::h97fd10b81cade4fa; /*0x101353e04*/
    v4[0] = &v5; /*0x101353e0c*/
    result = _$LT$$RF$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h335c94c2d2e8f824(v4, a1, a2); /*0x101353e1a*/
    if ( result ) /*0x101353e22*/
    {
      v6 = result; /*0x101353e2d*/
      v4[0] = v3; /*0x101353e35*/
      v4[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h203b5c92ef2f99f1; /*0x101353e40*/
      v4[2] = &v6; /*0x101353e48*/
      v4[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x101353e53*/
      core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_101729662, (__int64)v4, (__int64)&off_101925E10); /*0x101353e69*/
    }
  }
  return result; /*0x101353e24*/
}