// mac 1.1.8 force_kill_codex node va=0x1006b8eb0 depth=3
// _::try_fold
__int64 __fastcall _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hee55de9857967a16(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _DWORD *v4; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rax
  int v8; // r15d
  __int64 v9; // r13
  __int64 v10; // [rsp+8h] [rbp-88h] BYREF
  __int128 v11; // [rsp+10h] [rbp-80h]
  _BYTE v12[28]; // [rsp+24h] [rbp-6Ch]
  __int64 v13; // [rsp+40h] [rbp-50h]
  __int64 v14; // [rsp+48h] [rbp-48h]
  __int64 v15; // [rsp+50h] [rbp-40h]
  _DWORD *i; // [rsp+58h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp-30h]

  v17 = a2; /*0x1006b8ec4*/
  v4 = *(_DWORD **)(a1 + 8); /*0x1006b8ec8*/
  v15 = a1; /*0x1006b8ecc*/
  for ( i = *(_DWORD **)(a1 + 24); v4 != i; a3 += 32 ) /*0x1006b8edb*/
  {
    v7 = v4; /*0x1006b8f2b*/
    v8 = *v4; /*0x1006b8f2e*/
    v4 += 8; /*0x1006b8f31*/
    *(_QWORD *)(v15 + 8) = v4; /*0x1006b8f39*/
    v13 = v17; /*0x1006b8f41*/
    v14 = a3; /*0x1006b8f45*/
    v9 = v7[1]; /*0x1006b8f49*/
    codexmate_lib::platform::process::extract_process_name::he3a9bb08c623f766(&v10, v7[2], v7[3]); /*0x1006b8f5f*/
    *(_OWORD *)&v12[12] = v11; /*0x1006b8f7b*/
    *(_QWORD *)&v12[4] = v10; /*0x1006b8f7f*/
    if ( v9 ) /*0x1006b8f85*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b8f96*/
    *(_DWORD *)a3 = v8; /*0x1006b8f00*/
    v6 = *(_QWORD *)&v12[8]; /*0x1006b8f07*/
    *(_QWORD *)(a3 + 4) = *(_QWORD *)v12; /*0x1006b8f0b*/
    *(_QWORD *)(a3 + 12) = v6; /*0x1006b8f0f*/
    *(_QWORD *)(a3 + 20) = *(_QWORD *)&v12[16]; /*0x1006b8f17*/
    *(_DWORD *)(a3 + 28) = *(_DWORD *)&v12[24]; /*0x1006b8f1e*/
  }
  return v17; /*0x1006b8ee4*/
}