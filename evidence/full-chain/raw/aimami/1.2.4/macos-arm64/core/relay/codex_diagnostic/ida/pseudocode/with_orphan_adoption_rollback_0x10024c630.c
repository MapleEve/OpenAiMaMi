// __ZN13codexmate_lib4core5relay16codex_diagnostic29with_orphan_adoption_rollback @ 0x10024c630 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::with_orphan_adoption_rollback::h9362363f19a5afff(
        _QWORD *a1,
        const void *a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  _BYTE v5[96]; // [rsp+8h] [rbp-A8h] BYREF
  _QWORD v6[4]; // [rsp+68h] [rbp-48h] BYREF
  _QWORD v7[5]; // [rsp+88h] [rbp-28h] BYREF

  if ( *a3 == 11 ) /*0x10024c644*/
  {
    qmemcpy(a1, a2, 0x60u); /*0x10024c64e*/
  }
  else
  {
    qmemcpy(v5, a3, sizeof(v5)); /*0x10024c668*/
    v6[0] = a2; /*0x10024c66b*/
    v6[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x10024c676*/
    v6[2] = v5; /*0x10024c67a*/
    v6[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x10024c67e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v7, &unk_1017C2C24, v6); /*0x10024c691*/
    a1[3] = v7[2]; /*0x10024c69a*/
    v3 = v7[0]; /*0x10024c69e*/
    a1[2] = v7[1]; /*0x10024c6a6*/
    a1[1] = v3; /*0x10024c6aa*/
    *a1 = 10; /*0x10024c6ae*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v5); /*0x10024c6bc*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(a2); /*0x10024c6c4*/
  }
  return result; /*0x10024c6c9*/
}