// win 1.2.1 NEW migrate_session_worktree 0x141221580 d=1
bool __fastcall sub_141221580(volatile signed __int64 *a1)
{
  return _InterlockedCompareExchange64(a1, 132, 204) != 204; /*0x141221592*/
}