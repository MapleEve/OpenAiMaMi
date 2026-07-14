// mac 1.1.8 delete_sessions node va=0x1001c74a0 depth=1
// core3ptr41drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  _QWORD *v7; // r14
  __int64 v8; // rax
  volatile signed __int64 **v9; // r12
  volatile signed __int64 *v11[9]; // [rsp+0h] [rbp-80h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-30h]

  v1 = a1; /*0x1001c74b1*/
  v2 = (_QWORD *)(a1 + 32); /*0x1001c74b4*/
  if ( *(_QWORD *)(a1 + 32) ) /*0x1001c74b8*/
    core::cell::panic_already_borrowed::hd7c6a6bf28ec0022(&off_101526820); /*0x1001c7602*/
  *(_QWORD *)(a1 + 32) = -1; /*0x1001c74c3*/
  if ( *(_QWORD *)(a1 + 64) ) /*0x1001c74cc*/
  {
    v3 = *(_QWORD *)(a1 + 48); /*0x1001c74d4*/
    if ( v3 ) /*0x1001c74dc*/
    {
      memset(*(void **)(a1 + 40), 255, v3 + 17); /*0x1001c74ec*/
      v4 = ((v3 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v3 + 1) >> 3); /*0x1001c7500*/
      if ( v3 < 8 ) /*0x1001c7507*/
        v4 = v3; /*0x1001c7507*/
    }
    else
    {
      v4 = 0; /*0x1001c750d*/
    }
    *(_QWORD *)(a1 + 64) = 0; /*0x1001c750f*/
    *(_QWORD *)(a1 + 56) = v4; /*0x1001c7518*/
  }
  v5 = *(_QWORD **)(a1 + 80); /*0x1001c751d*/
  if ( v5 ) /*0x1001c7525*/
  {
    v6 = (_QWORD *)v5[1]; /*0x1001c7527*/
    if ( v6 == v5 ) /*0x1001c752e*/
    {
      v8 = 0; /*0x1001c759b*/
    }
    else
    {
      v13 = a1; /*0x1001c7530*/
      v12 = (_QWORD *)(a1 + 32); /*0x1001c7534*/
      do /*0x1001c7585*/
      {
        v7 = (_QWORD *)v6[1]; /*0x1001c7540*/
        qmemcpy(v11, v6 + 2, sizeof(v11)); /*0x1001c7550*/
        if ( !_InterlockedDecrement64(v11[0]) ) /*0x1001c7557*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h08f90f6a4a7906b0(v11); /*0x1001c7560*/
        core::ptr::drop_in_place$LT$rusqlite..raw_statement..RawStatement$GT$::h14bbec2b1a6662df(&v11[2]); /*0x1001c7568*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c757a*/
        v6 = v7; /*0x1001c757f*/
      }
      while ( v7 != v5 ); /*0x1001c7585*/
      v2 = v12; /*0x1001c7587*/
      v8 = *v12 + 1LL; /*0x1001c758e*/
      v1 = v13; /*0x1001c7591*/
    }
    *v5 = v5; /*0x1001c759d*/
    v5[1] = v5; /*0x1001c75a0*/
  }
  else
  {
    v8 = 0; /*0x1001c7597*/
  }
  *(_QWORD *)(v1 + 32) = v8; /*0x1001c75a4*/
  v9 = (volatile signed __int64 **)(v1 + 8); /*0x1001c75a9*/
  rusqlite::inner_connection::InnerConnection::close::h3df4c7be12a531e0(v11, v9); /*0x1001c75b4*/
  if ( v11[0] != (volatile signed __int64 *)0x8000000000000016LL ) /*0x1001c75c7*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(v11); /*0x1001c75cd*/
  if ( !_InterlockedDecrement64(*v9) ) /*0x1001c75d6*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he408325649385a85(v9); /*0x1001c75df*/
  return core::ptr::drop_in_place$LT$rusqlite..cache..StatementCache$GT$::h87e47e321260f7be(v2); /*0x1001c75ec*/
}