// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::PendingAutoSwitchPayload as core::cmp::PartialEq>::eq::h79305f4849ee247c @ 0x100b1ba80 | full-body via IDA decompiler
bool __fastcall _$LT$codexmate_lib..core..models..PendingAutoSwitchPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::h79305f4849ee247c(
        __int64 a1,
        __int64 a2)
{
  return *(_QWORD *)(a1 + 704) == *(_QWORD *)(a2 + 704)
      && *(_QWORD *)(a1 + 712) == *(_QWORD *)(a2 + 712)
      && *(_DWORD *)(a1 + 720) == *(_DWORD *)(a2 + 720)
      && *(_DWORD *)(a1 + 724) == *(_DWORD *)(a2 + 724)
      && _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..cmp..PartialEq$GT$::eq::hda5febdef9901cf9(
           a1,
           (char *)a2)
      && _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..cmp..PartialEq$GT$::eq::hda5febdef9901cf9(
           a1 + 352,
           (char *)(a2 + 352));
}
