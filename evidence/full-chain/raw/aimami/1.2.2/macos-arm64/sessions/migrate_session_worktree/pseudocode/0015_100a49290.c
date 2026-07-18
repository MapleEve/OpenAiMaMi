// mac 1.2.2 NEW migrate_session_worktree 0x100a49290 d=1
void __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi

  if ( a1 && (a2 & 3) == 1 ) /*0x100a492a8*/
  {
    v2 = a2 - 1; /*0x100a492b3*/
    v3 = *(_QWORD *)(a2 - 1); /*0x100a492b7*/
    v4 = *(_QWORD *)(a2 + 7); /*0x100a492bb*/
    if ( *(_QWORD *)v4 ) /*0x100a492bf*/
      (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(a2 - 1)); /*0x100a492cb*/
    v5 = *(_QWORD *)(v4 + 8); /*0x100a492cd*/
    if ( v5 ) /*0x100a492d5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16)); /*0x100a492df*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24, 8); /*0x100a492f9*/
  }
}