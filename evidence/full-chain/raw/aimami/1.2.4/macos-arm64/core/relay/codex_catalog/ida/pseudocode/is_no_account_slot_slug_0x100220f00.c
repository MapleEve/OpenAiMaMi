// __ZN13codexmate_lib4core5relay13codex_catalog23is_no_account_slot_slug @ 0x100220f00 | 1.2.4 NEW-delta
char __fastcall codexmate_lib::core::relay::codex_catalog::is_no_account_slot_slug::h7123c9a7327e52b8(
        __int64 a1,
        __int64 a2)
{
  char result; // al

  switch ( a2 ) /*0x100220f1c*/
  {
    case 7LL: /*0x100220f1c*/
      result = 1; /*0x100220f2f*/
      if ( *(_DWORD *)a1 ^ 0x2D747067 | *(_DWORD *)(a1 + 3) ^ 0x352E352D /*0x100220f3f*/
        && *(_DWORD *)a1 ^ 0x2D747067 | *(_DWORD *)(a1 + 3) ^ 0x342E352D )
      {
        goto LABEL_6; /*0x100220f41*/
      }
      return result; /*0x100220f41*/
    case 11LL: /*0x100220f1c*/
      if ( *(_QWORD *)a1 ^ 0x2D362E352D747067LL | *(_QWORD *)(a1 + 3) ^ 0x6C6F732D362E352DLL ) /*0x100220f80*/
        goto LABEL_6; /*0x100220f83*/
      goto LABEL_8; /*0x100220f83*/
    case 12LL: /*0x100220f1c*/
      if ( *(_QWORD *)a1 ^ 0x2D362E352D747067LL | *(unsigned int *)(a1 + 8) ^ 0x616E756CLL ) /*0x100220f5c*/
        goto LABEL_6; /*0x100220f5f*/
      goto LABEL_8; /*0x100220f5f*/
    case 13LL: /*0x100220f1c*/
      if ( *(_QWORD *)a1 ^ 0x2D362E352D747067LL | *(_QWORD *)(a1 + 5) ^ 0x61727265742D362ELL ) /*0x100220fa4*/
        goto LABEL_6; /*0x100220fa7*/
LABEL_8:
      result = 1; /*0x100220f85*/
      break; /*0x100220f88*/
    default:
LABEL_6:
      result = 0; /*0x100220f61*/
      break; /*0x100220f64*/
  }
  return result; /*0x100220f43*/
}