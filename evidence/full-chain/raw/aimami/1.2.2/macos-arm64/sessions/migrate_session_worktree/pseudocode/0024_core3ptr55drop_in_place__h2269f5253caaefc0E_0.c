// mac 1.2.2 NEW migrate_session_worktree 0x100a470b0 d=1
int __fastcall core::ptr::drop_in_place$LT$rusqlite..transaction..Transaction$GT$::h2269f5253caaefc0(__int64 a1)
{
  int result; // eax
  _QWORD v2[10]; // [rsp+0h] [rbp-50h] BYREF

  if ( *(_QWORD *)a1 >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x100a470cb*/
    core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_1018A0E78); /*0x100a47121*/
  ++*(_QWORD *)a1; /*0x100a470d3*/
  result = sqlite3_get_autocommit(*(sqlite3 **)(a1 + 16)); /*0x100a470da*/
  --*(_QWORD *)a1; /*0x100a470df*/
  if ( !result ) /*0x100a470e4*/
  {
    result = (unsigned int)rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v2, a1, byte_1015986F0, 8); /*0x100a470f9*/
    if ( v2[0] != 0x8000000000000016LL ) /*0x100a47106*/
      return core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(v2); /*0x100a4710c*/
  }
  return result; /*0x100a47111*/
}