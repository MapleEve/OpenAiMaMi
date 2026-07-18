// mac 1.2.2 NEW migrate_session_worktree 0x100a5a1a0 d=1
char __fastcall core::option::Option$LT$T$GT$::filter::hb8326524efbfb4eb(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax

  v2 = *a2; /*0x100a5a1bb*/
  v3 = -*a2; /*0x100a5a1c1*/
  if ( __OFSUB__(v3, 1) ) /*0x100a5a1c4*/
  {
LABEL_6:
    *a1 = 0x8000000000000000LL; /*0x100a5a20b*/
    return v3; /*0x100a5a20b*/
  }
  LOBYTE(v3) = std::path::Path::is_file::h8e542e1d1cac781b((void *)a2[1], a2[2]); /*0x100a5a1d4*/
  if ( !(_BYTE)v3 ) /*0x100a5a1db*/
  {
    if ( v2 ) /*0x100a5a1f9*/
      LOBYTE(v3) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a5a206*/
    goto LABEL_6; /*0x100a5a206*/
  }
  a1[2] = a2[2]; /*0x100a5a1e1*/
  v3 = *a2; /*0x100a5a1e5*/
  a1[1] = a2[1]; /*0x100a5a1ed*/
  *a1 = v3; /*0x100a5a1f1*/
  return v3; /*0x100a5a212*/
}