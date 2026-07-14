// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x10109b530 d=1
// Alternative name is '__ZN3std2fs4File8sync_all17h57c15980ca3c1cfbE'
__int64 __fastcall std::fs::File::sync_data::hd1ab389c8b7cfd2f(int *a1)
{
  int v1; // r14d
  __int64 v2; // rbx
  __int64 v3; // rax

  v1 = *a1; /*0x10109b537*/
  v2 = 0; /*0x10109b53a*/
  while ( fcntl(v1, 51) == -1 ) /*0x10109b552*/
  {
    v3 = *__error(); /*0x10109b559*/
    if ( v3 != 4 ) /*0x10109b560*/
      return (v3 << 32) | 2; /*0x10109b56a*/
  }
  return v2; /*0x10109b570*/
}