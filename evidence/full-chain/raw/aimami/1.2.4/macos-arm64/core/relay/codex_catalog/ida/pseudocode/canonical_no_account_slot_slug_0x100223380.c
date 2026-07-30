// __ZN13codexmate_lib4core5relay13codex_catalog30canonical_no_account_slot_slug @ 0x100223380 | 1.2.4 NEW-delta
void *__fastcall codexmate_lib::core::relay::codex_catalog::canonical_no_account_slot_slug::hc71227110b17b428(
        __int64 a1,
        __int64 a2)
{
  unsigned __int32 v2; // eax
  unsigned int v3; // ecx
  int v4; // esi
  unsigned __int32 v5; // eax
  unsigned int v6; // ecx
  int v7; // esi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // esi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  int v17; // esi

  switch ( a2 ) /*0x1002233a3*/
  {
    case 7LL: /*0x1002233a3*/
      v2 = _byteswap_ulong(*(_DWORD *)a1); /*0x1002233a7*/
      v3 = 1735423021; /*0x1002233a9*/
      if ( v2 != 1735423021 || (v2 = _byteswap_ulong(*(_DWORD *)(a1 + 3)), v3 = 758459957, v4 = 0, v2 != 758459957) ) /*0x1002233c6*/
        v4 = 2 * (v3 >= v2) - 1; /*0x1002233d0*/
      if ( !v4 ) /*0x1002233d6*/
        return &anon_7245a3145add9b93f83b0a9aa358a664_211; /*0x1002234eb*/
      v5 = _byteswap_ulong(*(_DWORD *)a1); /*0x1002233de*/
      v6 = 1735423021; /*0x1002233e0*/
      if ( v5 != 1735423021 || (v5 = _byteswap_ulong(*(_DWORD *)(a1 + 3)), v6 = 758459956, v7 = 0, v5 != 758459956) ) /*0x1002233fd*/
        v7 = 2 * (v6 >= v5) - 1; /*0x100223407*/
      if ( v7 ) /*0x10022340d*/
        return nullptr; /*0x10022340d*/
      return &anon_7245a3145add9b93f83b0a9aa358a664_212; /*0x10022341b*/
    case 11LL: /*0x1002233a3*/
      v12 = 0x6770742D352E362DLL; /*0x100223462*/
      v13 = _byteswap_uint64(*(_QWORD *)a1); /*0x10022346f*/
      if ( v13 != 0x6770742D352E362DLL /*0x10022348d*/
        || (v12 = 0x2D352E362D736F6CLL, v13 = _byteswap_uint64(*(_QWORD *)(a1 + 3)),
                                        v14 = 0,
                                        v13 != 0x2D352E362D736F6CLL) )
      {
        v14 = 2 * (v12 >= v13) - 1; /*0x100223498*/
      }
      if ( v14 ) /*0x10022349e*/
        return nullptr; /*0x10022349e*/
      return &anon_7245a3145add9b93f83b0a9aa358a664_208; /*0x1002234a8*/
    case 12LL: /*0x1002233a3*/
      v9 = 0x6770742D352E362DLL; /*0x10022341c*/
      v10 = _byteswap_uint64(*(_QWORD *)a1); /*0x100223429*/
      if ( v10 != 0x6770742D352E362DLL ) /*0x10022342f*/
        goto LABEL_14; /*0x10022342f*/
      v10 = _byteswap_ulong(*(_DWORD *)(a1 + 8)); /*0x100223434*/
      v11 = 0; /*0x100223436*/
      if ( (_DWORD)v10 != 1819635297 ) /*0x10022343d*/
      {
        v9 = 1819635297; /*0x10022343f*/
LABEL_14:
        v11 = 2 * (v9 >= v10) - 1; /*0x100223444*/
      }
      if ( v11 ) /*0x100223453*/
        return nullptr; /*0x100223453*/
      return &anon_7245a3145add9b93f83b0a9aa358a664_210;
    case 13LL: /*0x1002233a3*/
      v15 = 0x6770742D352E362DLL; /*0x1002234a9*/
      v16 = _byteswap_uint64(*(_QWORD *)a1); /*0x1002234b6*/
      if ( v16 != 0x6770742D352E362DLL /*0x1002234d4*/
        || (v15 = 0x2E362D7465727261LL, v16 = _byteswap_uint64(*(_QWORD *)(a1 + 5)),
                                        v17 = 0,
                                        v16 != 0x2E362D7465727261LL) )
      {
        v17 = 2 * (v15 >= v16) - 1; /*0x1002234df*/
      }
      if ( v17 ) /*0x1002234e5*/
        return nullptr; /*0x1002234e5*/
      return &anon_7245a3145add9b93f83b0a9aa358a664_209; /*0x1002234f4*/
    default:
      return nullptr; /*0x1002234ea*/
  }
}