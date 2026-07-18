// mac 1.2.2 NEW codexmate_lib4core12debug_bundle19threads_table_sh 0x100bc57a0 d=1
int __cdecl sqlite3_bind_parameter_count(sqlite3_stmt *a1)
{
  if ( a1 ) /*0x100bc57a7*/
    return *((__int16 *)a1 + 16); /*0x100bc57a9*/
  else
    return 0; /*0x100bc57af*/
}