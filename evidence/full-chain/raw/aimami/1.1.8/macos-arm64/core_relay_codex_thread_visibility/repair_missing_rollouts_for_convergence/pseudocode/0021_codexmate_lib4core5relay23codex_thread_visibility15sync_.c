// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x1003fef90 d=1
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::sync_parent_dir::hc2b372d326b18887(
        const void *a1,
        size_t a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r13
  _BYTE v7[4]; // [rsp+8h] [rbp-48h] BYREF
  int v8; // [rsp+Ch] [rbp-44h]
  __int64 v9; // [rsp+10h] [rbp-40h]
  int v10; // [rsp+1Ch] [rbp-34h] BYREF
  __int16 v11; // [rsp+20h] [rbp-30h]
  int v12; // [rsp+22h] [rbp-2Eh]
  __int16 v13; // [rsp+26h] [rbp-2Ah]

  v10 = 0; /*0x1003fefa7*/
  v11 = 438; /*0x1003fefae*/
  v12 = 1; /*0x1003fefb4*/
  v13 = 0; /*0x1003fefbb*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa((__int64)v7, (__int64)&v10, a1, a2); /*0x1003fefcd*/
  if ( v7[0] ) /*0x1003fefd6*/
  {
    result = v9; /*0x1003fefd8*/
    if ( (v9 & 3) == 1 ) /*0x1003fefe4*/
    {
      v3 = *(_QWORD *)(v9 + 7); /*0x1003fefee*/
      if ( *(_QWORD *)v3 ) /*0x1003feff2*/
        (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(v9 - 1)); /*0x1003feffe*/
      if ( *(_QWORD *)(v3 + 8) ) /*0x1003ff000*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ff012*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ff024*/
    }
  }
  else
  {
    v4 = v8; /*0x1003ff02b*/
    v10 = v8; /*0x1003ff02e*/
    v5 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v10); /*0x1003ff035*/
    if ( (v5 & 3) == 1 ) /*0x1003ff042*/
    {
      v6 = *(_QWORD *)(v5 + 7); /*0x1003ff064*/
      if ( *(_QWORD *)v6 ) /*0x1003ff068*/
        (*(void (__fastcall **)(_QWORD))v6)(*(_QWORD *)(v5 - 1)); /*0x1003ff074*/
      if ( *(_QWORD *)(v6 + 8) ) /*0x1003ff076*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ff086*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ff098*/
    }
    return close_NOCANCEL(v4); /*0x1003ff046*/
  }
  return result; /*0x1003ff04b*/
}