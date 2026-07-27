// __ZN13codexmate_lib4core5relay23codex_thread_visibility15sync_parent_dir @ 0x100ad1320
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::sync_parent_dir | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::sync_parent_dir::hde074ded825d1d2d(
        __int64 a1,
        __int64 a2)
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

  v16 = 0; /*0x100ad1337*/
  v17 = 438; /*0x100ad133e*/
  v18 = 1; /*0x100ad1344*/
  v19 = 0; /*0x100ad134b*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(v13, &v16, a1, a2); /*0x100ad135d*/
  if ( v13[0] ) /*0x100ad1366*/
  {
    result = v15; /*0x100ad1368*/
    if ( (v15 & 3) == 1 ) /*0x100ad1374*/
    {
      v3 = v15 - 1; /*0x100ad1376*/
      v4 = *(_QWORD *)(v15 - 1); /*0x100ad137a*/
      v5 = *(_QWORD *)(v15 + 7); /*0x100ad137e*/
      if ( *(_QWORD *)v5 ) /*0x100ad1382*/
        (*(void (__fastcall **)(__int64))v5)(v4); /*0x100ad138e*/
      v6 = *(_QWORD *)(v5 + 8); /*0x100ad1390*/
      if ( v6 ) /*0x100ad1398*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x100ad13a2*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8); /*0x100ad13b4*/
    }
  }
  else
  {
    v7 = v14; /*0x100ad13bb*/
    v16 = v14; /*0x100ad13be*/
    v8 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v16); /*0x100ad13c5*/
    if ( (v8 & 3) == 1 ) /*0x100ad13d2*/
    {
      v9 = v8 - 1; /*0x100ad13ed*/
      v10 = *(_QWORD *)(v8 - 1); /*0x100ad13f0*/
      v11 = *(_QWORD *)(v8 + 7); /*0x100ad13f4*/
      if ( *(_QWORD *)v11 ) /*0x100ad13f8*/
        (*(void (__fastcall **)(__int64))v11)(v10); /*0x100ad1404*/
      v12 = *(_QWORD *)(v11 + 8); /*0x100ad1406*/
      if ( v12 ) /*0x100ad140d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x100ad1416*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24, 8); /*0x100ad1428*/
    }
    return close_NOCANCEL(v7); /*0x100ad13d6*/
  }
  return result; /*0x100ad13db*/
}