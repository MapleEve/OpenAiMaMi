// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1004219f0 depth=1
// core3ptr41drop_in_place::hfd0dbfc58fd406d0E_0
__int64 __fastcall core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  _QWORD *v7; // r14
  volatile signed __int64 **v8; // r12
  __int64 v10[9]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h]

  v1 = a1; /*0x100421a01*/
  v2 = a1 + 32; /*0x100421a04*/
  if ( *(_QWORD *)(a1 + 32) ) /*0x100421a08*/
    core::cell::panic_already_borrowed::hd7c6a6bf28ec0022(&off_10152FB10); /*0x100421b44*/
  *(_QWORD *)(a1 + 32) = -1; /*0x100421a13*/
  if ( *(_QWORD *)(a1 + 64) ) /*0x100421a1c*/
  {
    v3 = *(_QWORD *)(a1 + 48); /*0x100421a24*/
    if ( v3 ) /*0x100421a2c*/
    {
      memset(*(void **)(a1 + 40), 255, v3 + 17); /*0x100421a3c*/
      v4 = ((v3 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v3 + 1) >> 3); /*0x100421a50*/
      if ( v3 < 8 ) /*0x100421a57*/
        v4 = v3; /*0x100421a57*/
    }
    else
    {
      v4 = 0; /*0x100421a5d*/
    }
    *(_QWORD *)(a1 + 64) = 0; /*0x100421a5f*/
    *(_QWORD *)(a1 + 56) = v4; /*0x100421a68*/
  }
  v5 = *(_QWORD **)(a1 + 80); /*0x100421a6d*/
  if ( v5 ) /*0x100421a75*/
  {
    v12 = a1; /*0x100421a77*/
    v11 = a1 + 32; /*0x100421a7b*/
    v6 = (_QWORD *)v5[1]; /*0x100421a7f*/
    if ( v6 != v5 ) /*0x100421a86*/
    {
      do /*0x100421ad5*/
      {
        v7 = (_QWORD *)v6[1]; /*0x100421a90*/
        qmemcpy(v10, v6 + 2, sizeof(v10)); /*0x100421aa0*/
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v10[0]) ) /*0x100421aa7*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h08f90f6a4a7906b0(v10); /*0x100421ab0*/
        core::ptr::drop_in_place$LT$rusqlite..raw_statement..RawStatement$GT$::h14bbec2b1a6662df(&v10[2]); /*0x100421ab8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100421aca*/
        v6 = v7; /*0x100421acf*/
      }
      while ( v7 != v5 ); /*0x100421ad5*/
    }
    *v5 = v5; /*0x100421ad7*/
    v5[1] = v5; /*0x100421ada*/
    v2 = v11; /*0x100421ade*/
    v1 = v12; /*0x100421ae2*/
  }
  ++*(_QWORD *)(v1 + 32); /*0x100421ae6*/
  v8 = (volatile signed __int64 **)(v1 + 8); /*0x100421aeb*/
  rusqlite::inner_connection::InnerConnection::close::h3df4c7be12a531e0(v10, v8); /*0x100421af6*/
  if ( v10[0] != 0x8000000000000016LL ) /*0x100421b09*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(v10); /*0x100421b0f*/
  if ( !_InterlockedDecrement64(*v8) ) /*0x100421b18*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he408325649385a85(v8); /*0x100421b21*/
  return core::ptr::drop_in_place$LT$rusqlite..cache..StatementCache$GT$::h87e47e321260f7be(v2); /*0x100421b2e*/
}