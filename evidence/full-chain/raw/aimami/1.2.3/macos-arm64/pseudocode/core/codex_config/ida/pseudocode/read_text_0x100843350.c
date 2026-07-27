// __ZN13codexmate_lib4core12codex_config9read_text @ 0x100843350 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v10; // [rsp+8h] [rbp-38h] BYREF
  __int64 v11; // [rsp+10h] [rbp-30h]
  __int64 v12; // [rsp+18h] [rbp-28h]

  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v10, a2, a3); /*0x100843366*/
  if ( __OFSUB__(0, v10) ) /*0x10084336d*/
  {
    v3 = v11; /*0x100843373*/
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v11) ) /*0x10084337a*/
    {
      *a1 = 2; /*0x100843383*/
      a1[1] = v3; /*0x10084338a*/
    }
    else
    {
      a1[1] = 0; /*0x1008433b4*/
      a1[2] = 1; /*0x1008433bc*/
      a1[3] = 0; /*0x1008433c4*/
      *a1 = 11; /*0x1008433cc*/
      if ( (v3 & 3) == 1 ) /*0x1008433dc*/
      {
        v5 = v3 - 1; /*0x1008433de*/
        v6 = *(_QWORD *)(v3 - 1); /*0x1008433e3*/
        v7 = *(_QWORD *)(v3 + 7); /*0x1008433e8*/
        if ( *(_QWORD *)v7 ) /*0x1008433ed*/
          (*(void (__fastcall **)(__int64))v7)(v6); /*0x1008433f9*/
        v8 = *(_QWORD *)(v7 + 8); /*0x1008433fb*/
        if ( v8 ) /*0x100843403*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x10084340d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x10084341f*/
      }
    }
  }
  else
  {
    a1[3] = v12; /*0x100843397*/
    v4 = v10; /*0x10084339b*/
    a1[2] = v11; /*0x1008433a3*/
    a1[1] = v4; /*0x1008433a7*/
    *a1 = 11; /*0x1008433ab*/
  }
  return a1; /*0x100843427*/
}