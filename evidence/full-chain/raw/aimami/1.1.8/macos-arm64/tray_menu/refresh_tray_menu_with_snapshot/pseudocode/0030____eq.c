// mac 1.1.8 BACKEND-ONLY refresh_tray_menu_with_snapshot node 0x100ef8e70 depth=2
// _::eq
bool __fastcall _$LT$tray_icon..tray_icon_id..TrayIconId$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::hffc3a271d3c7deea(
        __int64 a1,
        __int64 a2)
{
  size_t v2; // rdx

  v2 = *(_QWORD *)(a1 + 16); /*0x100ef8e70*/
  return v2 == *(_QWORD *)(a2 + 8) && memcmp(*(const void **)(a1 + 8), *(const void **)a2, v2) == 0; /*0x100ef8e90*/
}