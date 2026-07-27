// __ZN13codexmate_lib4core11quota_store4save @ 0x1003200f0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::quota_store::save::hd48f951445e3a620(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD v16[17]; // [rsp+8h] [rbp-88h] BYREF

  v6 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x100320113*/
  if ( v6 /*0x10032013f*/
    && (LOWORD(v16[0]) = 511, BYTE2(v16[0]) = 1,
                              (v8 = std::fs::DirBuilder::_create::h099c6e2853c95452(v16, v6, v7)) != 0) )
  {
    *a1 = 2; /*0x100320141*/
    a1[1] = v8; /*0x100320148*/
  }
  else
  {
    codexmate_lib::core::quota_store::encode_for_save::h1b527b913713be61(v16, a4); /*0x10032015b*/
    v9 = v16[0]; /*0x100320160*/
    v10 = v16[1]; /*0x100320167*/
    v11 = v16[2]; /*0x10032016b*/
    v12 = v16[3]; /*0x10032016f*/
    if ( v16[0] == 11 ) /*0x100320177*/
    {
      v13 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(a2, a3); /*0x100320188*/
      if ( v13 ) /*0x100320190*/
      {
        *a1 = 2; /*0x100320192*/
        a1[1] = v13; /*0x100320199*/
        if ( !v10 ) /*0x1003201a0*/
          return a1; /*0x1003201a0*/
      }
      else
      {
        *a1 = 11; /*0x1003201f5*/
        if ( !v10 ) /*0x1003201ff*/
          return a1; /*0x1003201ff*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x10032020c*/
      return a1; /*0x10032020c*/
    }
    a1[11] = v16[11]; /*0x1003201a8*/
    a1[10] = v16[10]; /*0x1003201b0*/
    a1[9] = v16[9]; /*0x1003201b8*/
    a1[8] = v16[8]; /*0x1003201c0*/
    a1[7] = v16[7]; /*0x1003201c8*/
    a1[6] = v16[6]; /*0x1003201d0*/
    v14 = v16[4]; /*0x1003201d4*/
    a1[5] = v16[5]; /*0x1003201dc*/
    a1[4] = v14; /*0x1003201e0*/
    a1[1] = v10; /*0x1003201e4*/
    a1[2] = v11; /*0x1003201e8*/
    a1[3] = v12; /*0x1003201ec*/
    *a1 = v9; /*0x1003201f0*/
  }
  return a1; /*0x100320214*/
}