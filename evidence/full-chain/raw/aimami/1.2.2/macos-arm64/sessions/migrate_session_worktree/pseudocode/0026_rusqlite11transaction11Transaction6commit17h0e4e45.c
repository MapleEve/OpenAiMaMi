// mac 1.2.2 NEW migrate_session_worktree 0x100a61380 d=1
int __fastcall rusqlite::transaction::Transaction::commit::h0e4e45420f48cafe(_QWORD *a1, __int64 a2)
{
  int result; // eax
  _QWORD v3[10]; // [rsp+0h] [rbp-50h] BYREF

  rusqlite::Connection::execute_batch::h4a2529fc120bbad7(a1, a2, "COMMITcodexmate_lib::core::relay::atomic_write", 6); /*0x100a6139a*/
  if ( *(_QWORD *)a2 >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x100a613af*/
    core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_1018A0E78); /*0x100a61402*/
  ++*(_QWORD *)a2; /*0x100a613b4*/
  result = sqlite3_get_autocommit(*(sqlite3 **)(a2 + 16)); /*0x100a613bb*/
  --*(_QWORD *)a2; /*0x100a613c0*/
  if ( !result ) /*0x100a613c5*/
  {
    result = (unsigned int)rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v3, a2, byte_1015986F0, 8); /*0x100a613da*/
    if ( v3[0] != 0x8000000000000016LL ) /*0x100a613e7*/
      return core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(v3); /*0x100a613ed*/
  }
  return result; /*0x100a613f2*/
}