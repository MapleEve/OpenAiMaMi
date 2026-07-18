// mac 1.2.2 NEW migrate_session_worktree 0x100a461e0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  _QWORD *v7; // r14
  volatile signed __int64 **v8; // r12
  volatile signed __int64 *v10[9]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h]

  v1 = a1; /*0x100a461f1*/
  v2 = a1 + 32; /*0x100a461f4*/
  if ( *(_QWORD *)(a1 + 32) ) /*0x100a461f8*/
    core::cell::panic_already_borrowed::hd7c6a6bf28ec0022(&off_1018A0EA8); /*0x100a46334*/
  *(_QWORD *)(a1 + 32) = -1; /*0x100a46203*/
  if ( *(_QWORD *)(a1 + 64) ) /*0x100a4620c*/
  {
    v3 = *(_QWORD *)(a1 + 48); /*0x100a46214*/
    if ( v3 ) /*0x100a4621c*/
    {
      memset(*(void **)(a1 + 40), 255, v3 + 17); /*0x100a4622c*/
      v4 = ((v3 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v3 + 1) >> 3); /*0x100a46240*/
      if ( v3 < 8 ) /*0x100a46247*/
        v4 = v3; /*0x100a46247*/
    }
    else
    {
      v4 = 0; /*0x100a4624d*/
    }
    *(_QWORD *)(a1 + 64) = 0; /*0x100a4624f*/
    *(_QWORD *)(a1 + 56) = v4; /*0x100a46258*/
  }
  v5 = *(_QWORD **)(a1 + 80); /*0x100a4625d*/
  if ( v5 ) /*0x100a46265*/
  {
    v12 = a1; /*0x100a46267*/
    v11 = a1 + 32; /*0x100a4626b*/
    v6 = (_QWORD *)v5[1]; /*0x100a4626f*/
    if ( v6 != v5 ) /*0x100a46276*/
    {
      do /*0x100a462c5*/
      {
        v7 = (_QWORD *)v6[1]; /*0x100a46280*/
        qmemcpy(v10, v6 + 2, sizeof(v10)); /*0x100a46290*/
        if ( !_InterlockedDecrement64(v10[0]) ) /*0x100a46297*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h08f90f6a4a7906b0(v10); /*0x100a462a0*/
        core::ptr::drop_in_place$LT$rusqlite..raw_statement..RawStatement$GT$::h76c038b22973f9bd(&v10[2]); /*0x100a462a8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a462ba*/
        v6 = v7; /*0x100a462bf*/
      }
      while ( v7 != v5 ); /*0x100a462c5*/
    }
    *v5 = v5; /*0x100a462c7*/
    v5[1] = v5; /*0x100a462ca*/
    v2 = v11; /*0x100a462ce*/
    v1 = v12; /*0x100a462d2*/
  }
  ++*(_QWORD *)(v1 + 32); /*0x100a462d6*/
  v8 = (volatile signed __int64 **)(v1 + 8); /*0x100a462db*/
  rusqlite::inner_connection::InnerConnection::close::h3df4c7be12a531e0(v10, v8); /*0x100a462e6*/
  if ( v10[0] != (volatile signed __int64 *)0x8000000000000016LL ) /*0x100a462f9*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(v10); /*0x100a462ff*/
  if ( !_InterlockedDecrement64(*v8) ) /*0x100a46308*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he408325649385a85(v8); /*0x100a46311*/
  return core::ptr::drop_in_place$LT$rusqlite..cache..StatementCache$GT$::h35746d4bc22eeeae(v2); /*0x100a4631e*/
}