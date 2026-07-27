// __ZN13codexmate_lib4core5relay12atomic_write15sync_parent_dir @ 0x10045ebf0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::atomic_write::sync_parent_dir::h1a39c9e9e2b35442(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rsi
  char v13[4]; // [rsp+8h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+Ch] [rbp-44h]
  __int64 v15; // [rsp+10h] [rbp-40h]
  unsigned int v16; // [rsp+1Ch] [rbp-34h] BYREF
  __int16 v17; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+22h] [rbp-2Eh]
  __int16 v19; // [rsp+26h] [rbp-2Ah]

  v16 = 0; /*0x10045ec07*/
  v17 = 438; /*0x10045ec0e*/
  v18 = 1; /*0x10045ec14*/
  v19 = 0; /*0x10045ec1b*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(v13, &v16, a1, a2); /*0x10045ec2d*/
  if ( v13[0] ) /*0x10045ec36*/
  {
    result = v15; /*0x10045ec38*/
    if ( (v15 & 3) == 1 ) /*0x10045ec44*/
    {
      v3 = v15 - 1; /*0x10045ec46*/
      v4 = *(_QWORD *)(v15 - 1); /*0x10045ec4a*/
      v5 = *(_QWORD *)(v15 + 7); /*0x10045ec4e*/
      if ( *(_QWORD *)v5 ) /*0x10045ec52*/
        (*(void (__fastcall **)(__int64))v5)(v4); /*0x10045ec5e*/
      v6 = *(_QWORD *)(v5 + 8); /*0x10045ec60*/
      if ( v6 ) /*0x10045ec68*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x10045ec72*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8); /*0x10045ec84*/
    }
  }
  else
  {
    v7 = v14; /*0x10045ec8b*/
    v16 = v14; /*0x10045ec8e*/
    v8 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v16); /*0x10045ec95*/
    if ( (v8 & 3) == 1 ) /*0x10045eca2*/
    {
      v9 = v8 - 1; /*0x10045ecbd*/
      v10 = *(_QWORD *)(v8 - 1); /*0x10045ecc0*/
      v11 = *(_QWORD *)(v8 + 7); /*0x10045ecc4*/
      if ( *(_QWORD *)v11 ) /*0x10045ecc8*/
        (*(void (__fastcall **)(__int64))v11)(v10); /*0x10045ecd4*/
      v12 = *(_QWORD *)(v11 + 8); /*0x10045ecd6*/
      if ( v12 ) /*0x10045ecdd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x10045ece6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24, 8); /*0x10045ecf8*/
    }
    return close_NOCANCEL(v7); /*0x10045eca6*/
  }
  return result; /*0x10045ecab*/
}