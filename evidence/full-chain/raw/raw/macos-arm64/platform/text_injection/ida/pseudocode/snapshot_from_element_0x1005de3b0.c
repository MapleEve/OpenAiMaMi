// __ZN13codexmate_lib8platform14text_injection21snapshot_from_element @ 0x1005de3b0 | 基线 same-set
bool __fastcall codexmate_lib::platform::text_injection::snapshot_from_element::hb2c4886a0b1b0dc6(
        __int64 a1,
        const __AXUIElement *a2,
        __int64 *a3,
        int a4)
{
  __CFString *v5; // r13
  AXError v6; // r14d
  Boolean v7; // bl
  __CFString *v8; // r13
  AXError v9; // r14d
  Boolean v10; // bl
  bool result; // al
  char v12; // si
  __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17[3]; // [rsp+8h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-40h]
  __int64 *v21; // [rsp+38h] [rbp-38h]
  int v22; // [rsp+40h] [rbp-30h]
  Boolean settable[41]; // [rsp+47h] [rbp-29h] BYREF

  v21 = a3; /*0x1005de3c3*/
  AXUIElementSetMessagingTimeout(a2, 0.5); /*0x1005de3d8*/
  codexmate_lib::platform::text_injection::ax_copy_string_attr::hdaf4fa1a486192b5(&v18, a2, (__int64)"AXRole", 6); /*0x1005de3f0*/
  codexmate_lib::platform::text_injection::ax_copy_string_attr::hdaf4fa1a486192b5( /*0x1005de408*/
    v17,
    a2,
    (__int64)"AXValueAXChildrenpublic.utf8-plain-text",
    7);
  v22 = a4; /*0x1005de40d*/
  v5 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005de421*/
                       "AXSelectedTextRangeAXValueAXChildrenpublic.utf8-plain-text",
                       19);
  settable[0] = 0; /*0x1005de424*/
  v6 = AXUIElementIsAttributeSettable(a2, v5, settable); /*0x1005de437*/
  v7 = settable[0]; /*0x1005de43a*/
  objc_release(v5); /*0x1005de441*/
  if ( v6 == kAXErrorSuccess && v7 /*0x1005de48c*/
    || (v8 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9(
                             "AXValueAXChildrenpublic.utf8-plain-text",
                             7),
        settable[0] = 0,
        v9 = AXUIElementIsAttributeSettable(a2, v8, settable),
        v10 = settable[0],
        objc_release(v8),
        v9 == kAXErrorSuccess)
    && v10 )
  {
    result = 1; /*0x1005de48e*/
    v12 = v22; /*0x1005de490*/
    goto LABEL_6; /*0x1005de490*/
  }
  result = 0; /*0x1005de4f9*/
  v12 = v22; /*0x1005de4ff*/
  if ( __OFSUB__(0, v18) ) /*0x1005de502*/
    goto LABEL_6; /*0x1005de502*/
  if ( v20 == 10 ) /*0x1005de510*/
  {
    if ( !(*(_QWORD *)v19 ^ 0x7241747865545841LL | *(unsigned __int16 *)(v19 + 8) ^ 0x6165LL) ) /*0x1005de591*/
    {
      result = 1; /*0x1005de5bc*/
      goto LABEL_6; /*0x1005de5be*/
    }
    result = 1; /*0x1005de5ad*/
    if ( !(*(_QWORD *)v19 ^ 0x426F626D6F435841LL | *(unsigned __int16 *)(v19 + 8) ^ 0x786FLL) ) /*0x1005de5af*/
      goto LABEL_6; /*0x1005de5af*/
LABEL_16:
    result = 0; /*0x1005de5b5*/
    goto LABEL_6; /*0x1005de5b7*/
  }
  if ( v20 == 13 ) /*0x1005de516*/
  {
    result = (*(_QWORD *)v19 ^ 0x6863726165535841LL | *(_QWORD *)(v19 + 5) ^ 0x646C656946686372LL) == 0; /*0x1005de56e*/
    goto LABEL_6; /*0x1005de571*/
  }
  if ( v20 != 11 ) /*0x1005de51c*/
    goto LABEL_16; /*0x1005de51c*/
  result = 1; /*0x1005de547*/
  if ( *(_QWORD *)v19 ^ 0x6946747865545841LL | *(_QWORD *)(v19 + 3) ^ 0x646C656946747865LL ) /*0x1005de544*/
    goto LABEL_16; /*0x1005de549*/
LABEL_6:
  v13 = v21; /*0x1005de493*/
  *(_QWORD *)(a1 + 16) = v21[2]; /*0x1005de49b*/
  v14 = *v13; /*0x1005de49f*/
  *(_QWORD *)(a1 + 8) = v13[1]; /*0x1005de4a6*/
  *(_QWORD *)a1 = v14; /*0x1005de4aa*/
  v15 = v19; /*0x1005de4b1*/
  *(_QWORD *)(a1 + 24) = v18; /*0x1005de4b5*/
  *(_QWORD *)(a1 + 32) = v15; /*0x1005de4b9*/
  *(_QWORD *)(a1 + 40) = v20; /*0x1005de4c1*/
  v16 = v17[0]; /*0x1005de4c5*/
  *(_QWORD *)(a1 + 56) = v17[1]; /*0x1005de4cd*/
  *(_QWORD *)(a1 + 48) = v16; /*0x1005de4d1*/
  *(_QWORD *)(a1 + 64) = v17[2]; /*0x1005de4d9*/
  *(_BYTE *)(a1 + 72) = result; /*0x1005de4dd*/
  *(_BYTE *)(a1 + 73) = 1; /*0x1005de4e1*/
  *(_BYTE *)(a1 + 74) = v12; /*0x1005de4e6*/
  return result; /*0x1005de4ea*/
}