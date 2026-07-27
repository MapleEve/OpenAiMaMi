// __ZN13codexmate_lib4core10repository14ExactFileState7capture @ 0x100a768d0
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::ExactFileState::capture::haab4ba4b40674644(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+0h] [rbp-60h] BYREF
  __int64 v12; // [rsp+8h] [rbp-58h]
  __int64 v13; // [rsp+10h] [rbp-50h]
  __int64 v14; // [rsp+18h] [rbp-48h]
  __int64 v15; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]

  v3 = a2[1]; /*0x100a768e7*/
  std::fs::read::inner::h6a30c15c40add28b(&v11, v3, a2[2]); /*0x100a768f6*/
  v4 = v11; /*0x100a768fb*/
  if ( !__OFSUB__(-v11, 1) ) /*0x100a76905*/
  {
    v15 = v13; /*0x100a76954*/
    v14 = v12; /*0x100a76958*/
LABEL_12:
    a1[3] = a2[2]; /*0x100a769ba*/
    v9 = *a2; /*0x100a769c2*/
    a1[2] = a2[1]; /*0x100a769c9*/
    a1[1] = v9; /*0x100a769cd*/
    a1[4] = v4; /*0x100a769d1*/
    result = v14; /*0x100a769d5*/
    v10 = v15; /*0x100a769d9*/
    a1[5] = v14; /*0x100a769dd*/
    a1[6] = v10; /*0x100a769e1*/
    *a1 = 11; /*0x100a769e5*/
    return result; /*0x100a769e5*/
  }
  v5 = v12; /*0x100a76907*/
  result = std::io::error::Error::kind::hbe3dd139aa56fd1b(v12); /*0x100a7690e*/
  if ( !(_BYTE)result ) /*0x100a76915*/
  {
    if ( (v5 & 3) == 1 ) /*0x100a76967*/
    {
      v16 = v5 - 1; /*0x100a7696e*/
      v17 = *(_QWORD *)(v5 - 1); /*0x100a76977*/
      v7 = *(_QWORD *)(v5 + 7); /*0x100a7697b*/
      if ( *(_QWORD *)v7 ) /*0x100a76980*/
        (*(void (__fastcall **)(__int64))v7)(v17); /*0x100a7698d*/
      v8 = *(_QWORD *)(v7 + 8); /*0x100a76993*/
      if ( v8 ) /*0x100a7699b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v8, *(_QWORD *)(v7 + 16)); /*0x100a769a2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 24, 8); /*0x100a769b5*/
    }
    goto LABEL_12; /*0x100a769b5*/
  }
  *a1 = 2; /*0x100a76917*/
  a1[1] = v5; /*0x100a7691e*/
  if ( *a2 ) /*0x100a76922*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, *a2, 1); /*0x100a76944*/
  return result; /*0x100a76936*/
}