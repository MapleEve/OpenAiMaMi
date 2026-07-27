// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::VoiceCaptureState as core::fmt::Debug>::fmt::h656e52c01bbdde51 @ 0x1006e8420 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models..VoiceCaptureState$u20$as$u20$core..fmt..Debug$GT$::fmt::h656e52c01bbdde51(
        unsigned __int8 *a1,
        __int64 a2)
{
  return _$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$::write_str::h432a61b2c1499beb(
           a2,
           (char *)dword_101605E20 + dword_101605E20[*a1],
           qword_101605DF0[*a1]);
}
