// __ZN13codexmate_lib4core5voice7runtime7overlay22VoiceSearchResultState8snapshot @ 0x1006f8070 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::overlay::VoiceSearchResultState::snapshot::h0458b2f74a3f5159(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r15
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+38h] [rbp-58h] BYREF
  _QWORD v11[8]; // [rsp+50h] [rbp-40h] BYREF

  v2 = a2; /*0x1006f8081*/
  v4 = *a2; /*0x1006f8087*/
  if ( !*a2 ) /*0x1006f8087*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1006f80e9*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1006f808f*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1006f809f*/
  {
    v7 = 0; /*0x1006f80a7*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1006f80b4*/
      goto LABEL_5; /*0x1006f80ba*/
LABEL_9:
    if ( a2[2] == 0x8000000000000000LL ) /*0x1006f8115*/
    {
      *a1 = 0x8000000000000000LL; /*0x1006f8117*/
      if ( v7 ) /*0x1006f811d*/
        goto LABEL_14; /*0x1006f811d*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v11, a2 + 2); /*0x1006f8129*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v10, a2 + 5); /*0x1006f8136*/
      v8 = v11[2]; /*0x1006f813b*/
      v6 = v11[0]; /*0x1006f8143*/
      v5 = v11[1]; /*0x1006f8147*/
      a2 = (__int64 *)v10[0]; /*0x1006f8156*/
      v4 = v10[1]; /*0x1006f815a*/
      a1[5] = v10[2]; /*0x1006f816e*/
      a1[4] = v4; /*0x1006f8172*/
      a1[3] = a2; /*0x1006f8176*/
      a1[2] = v8; /*0x1006f817a*/
      a1[1] = v5; /*0x1006f817e*/
      *a1 = v6; /*0x1006f8182*/
      if ( v7 ) /*0x1006f8188*/
      {
LABEL_14:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v2); /*0x1006f8193*/
        return a1; /*0x1006f8196*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006f81c3*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) )
    {
      *((_BYTE *)v2 + 8) = 1; /*0x1006f81cc*/
    }
    goto LABEL_14; /*0x1006f81d0*/
  }
  v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) ^ 1; /*0x1006f80f6*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x1006f8104*/
    goto LABEL_9; /*0x1006f810a*/
LABEL_5:
  if ( !v7 /*0x1006f81ad*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1006f81ba*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1006f80d1*/
  *a1 = 0x8000000000000000LL; /*0x1006f80d9*/
  return a1; /*0x1006f819e*/
}