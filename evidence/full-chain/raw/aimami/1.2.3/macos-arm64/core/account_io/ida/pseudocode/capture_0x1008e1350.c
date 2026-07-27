// __ZN13codexmate_lib4core10account_io19SnapshotWriteRecord7capture @ 0x1008e1350
// 1.2.3 NEW-delta | codexmate_lib::core::account_io | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::account_io::SnapshotWriteRecord::capture::h8769c045d4b5419f(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 result; // rax
  _QWORD *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD v17[9]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-58h]
  __int64 v19; // [rsp+50h] [rbp-50h]
  __int64 v20; // [rsp+58h] [rbp-48h]
  __int64 v21; // [rsp+60h] [rbp-40h]
  __int64 v22; // [rsp+68h] [rbp-38h]
  _QWORD *v23; // [rsp+70h] [rbp-30h]

  v23 = a2; /*0x1008e1367*/
  v6 = a3[1]; /*0x1008e136e*/
  std::fs::read::inner::h6a30c15c40add28b(v17, v6, a3[2]); /*0x1008e1380*/
  v7 = v17[0]; /*0x1008e1385*/
  if ( !__OFSUB__(-v17[0], 1) ) /*0x1008e1392*/
  {
    v19 = v17[2]; /*0x1008e142d*/
    v18 = v17[1]; /*0x1008e1431*/
LABEL_16:
    v17[2] = v23[2]; /*0x1008e1493*/
    v13 = *v23; /*0x1008e14a2*/
    v17[1] = v23[1]; /*0x1008e14a9*/
    v17[0] = v13; /*0x1008e14b0*/
    v14 = a3[1]; /*0x1008e14ba*/
    v17[3] = *a3; /*0x1008e14be*/
    v17[4] = v14; /*0x1008e14c5*/
    v17[5] = a3[2]; /*0x1008e14cd*/
    v15 = a4[1]; /*0x1008e14d4*/
    v17[6] = *a4; /*0x1008e14d8*/
    v17[7] = v15; /*0x1008e14dc*/
    v17[8] = a4[2]; /*0x1008e14e4*/
    qmemcpy(a1 + 1, v17, 0x48u); /*0x1008e14f8*/
    a1[10] = v7; /*0x1008e14fb*/
    result = v18; /*0x1008e14ff*/
    v16 = v19; /*0x1008e1503*/
    a1[11] = v18; /*0x1008e1507*/
    a1[12] = v16; /*0x1008e150b*/
    *a1 = 0; /*0x1008e150f*/
    return result; /*0x1008e150f*/
  }
  v21 = v6; /*0x1008e1398*/
  v8 = v17[1]; /*0x1008e139c*/
  result = std::io::error::Error::kind::hbe3dd139aa56fd1b(v17[1]); /*0x1008e13a6*/
  if ( !(_BYTE)result ) /*0x1008e13ad*/
  {
    if ( (v8 & 3) == 1 ) /*0x1008e1440*/
    {
      v20 = v8 - 1; /*0x1008e1447*/
      v22 = *(_QWORD *)(v8 - 1); /*0x1008e1450*/
      v11 = *(_QWORD *)(v8 + 7); /*0x1008e1454*/
      if ( *(_QWORD *)v11 ) /*0x1008e1459*/
        (*(void (__fastcall **)(__int64))v11)(v22); /*0x1008e1466*/
      v12 = *(_QWORD *)(v11 + 8); /*0x1008e146c*/
      if ( v12 ) /*0x1008e1474*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v12, *(_QWORD *)(v11 + 16)); /*0x1008e147b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 24, 8); /*0x1008e148e*/
    }
    goto LABEL_16; /*0x1008e148e*/
  }
  a1[1] = 2; /*0x1008e13b3*/
  a1[2] = v8; /*0x1008e13bb*/
  *a1 = 1; /*0x1008e13bf*/
  if ( *a4 ) /*0x1008e13c7*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a4[1], *a4, 1); /*0x1008e13d8*/
  v10 = v23; /*0x1008e13e3*/
  if ( *a3 ) /*0x1008e13dd*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, *a3, 1); /*0x1008e13f2*/
  if ( *v10 ) /*0x1008e13f7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10[1], *v10, 1); /*0x1008e141a*/
  return result; /*0x1008e140c*/
}