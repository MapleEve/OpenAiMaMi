// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1004ce2e0 depth=1
// codexmate_lib8commands8accounts41refresh_full_runtime_snapshot_with_source
__int64 __fastcall codexmate_lib::commands::accounts::refresh_full_runtime_snapshot_with_source::hbce7c3d3e06a3523(
        _QWORD *__dst,
        __int64 a2,
        void *a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  _BYTE *v9; // [rsp+0h] [rbp-630h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+8h] [rbp-628h]
  __int64 v11; // [rsp+10h] [rbp-620h]
  __int64 v12; // [rsp+18h] [rbp-618h]
  _BYTE __src[728]; // [rsp+20h] [rbp-610h] BYREF
  _BYTE v14[760]; // [rsp+2F8h] [rbp-338h] BYREF
  __int64 v15; // [rsp+5F0h] [rbp-40h]
  __int64 v16; // [rsp+5F8h] [rbp-38h]
  __int64 v17; // [rsp+600h] [rbp-30h]

  if ( !tauri::state::StateManager::try_get::h5668abcf78ad5dde(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL) ) /*0x1004ce31a*/
  {
    *(_QWORD *)v14 = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_789; /*0x1004ce4b0*/
    *(_QWORD *)&v14[8] = 76; /*0x1004ce4b7*/
    v9 = v14; /*0x1004ce4c9*/
    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004ce4d7*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1004ce4f3*/
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_896,
      (__int64)&v9,
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_897);
  }
  codexmate_lib::commands::accounts::load_full_runtime_snapshot::h105d5028c3ca6e36(&v9); /*0x1004ce32a*/
  v15 = (__int64)v10; /*0x1004ce33d*/
  v16 = v11; /*0x1004ce348*/
  v17 = v12; /*0x1004ce353*/
  if ( v9 == (_BYTE *)3 ) /*0x1004ce35b*/
  {
    __dst[3] = v17; /*0x1004ce361*/
    result = v15; /*0x1004ce365*/
    __dst[2] = v16; /*0x1004ce36d*/
    __dst[1] = result; /*0x1004ce371*/
    *__dst = 3; /*0x1004ce375*/
  }
  else
  {
    memcpy(&v14[32], __src, 0x2D8u); /*0x1004ce394*/
    *(_QWORD *)&v14[8] = v15; /*0x1004ce3a1*/
    *(_QWORD *)&v14[16] = v16; /*0x1004ce3a8*/
    *(_QWORD *)&v14[24] = v17; /*0x1004ce3b3*/
    *(_QWORD *)v14 = v9; /*0x1004ce3ba*/
    codexmate_lib::commands::accounts::broadcast_runtime_snapshot::hd40df0804c6b6468(a2, v14, a3, a4); /*0x1004ce3d1*/
    memcpy(__dst, v14, 0x2A8u); /*0x1004ce3e5*/
    if ( *(_QWORD *)&v14[680] ) /*0x1004ce3f4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ce402*/
    if ( *(_QWORD *)&v14[704] ) /*0x1004ce40e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ce419*/
    v7 = *(_QWORD *)&v14[744]; /*0x1004ce41e*/
    if ( *(_QWORD *)&v14[744] ) /*0x1004ce425*/
    {
      v8 = *(_QWORD *)&v14[736] + 32LL; /*0x1004ce42b*/
      do /*0x1004ce447*/
      {
        if ( *(_QWORD *)(v8 - 32) ) /*0x1004ce449*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ce45b*/
        if ( *(_QWORD *)(v8 - 8) ) /*0x1004ce460*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ce471*/
        v8 += 48; /*0x1004ce440*/
        --v7; /*0x1004ce444*/
      }
      while ( v7 ); /*0x1004ce447*/
    }
    result = *(_QWORD *)&v14[728]; /*0x1004ce478*/
    if ( *(_QWORD *)&v14[728] ) /*0x1004ce47f*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ce492*/
  }
  return result; /*0x1004ce497*/
}