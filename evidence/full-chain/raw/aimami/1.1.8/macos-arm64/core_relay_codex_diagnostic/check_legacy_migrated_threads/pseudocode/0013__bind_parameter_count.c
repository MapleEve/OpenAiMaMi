// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x100967680 depth=1
// _bind_parameter_count
int __cdecl sqlite3_bind_parameter_count(sqlite3_stmt *a1)
{
  if ( a1 ) /*0x100967687*/
    return *((__int16 *)a1 + 16); /*0x100967689*/
  else
    return 0; /*0x10096768f*/
}