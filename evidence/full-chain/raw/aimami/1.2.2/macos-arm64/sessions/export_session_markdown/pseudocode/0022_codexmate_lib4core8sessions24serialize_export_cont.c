// mac 1.2.2 NEW export_session_markdown 0x100a39b30 d=1
void __fastcall codexmate_lib::core::sessions::serialize_export_content::h2eabf1ffa5cbae75(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  _QWORD v7[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-20h]

  if ( !a2 ) /*0x100a39b40*/
    goto LABEL_9; /*0x100a39b40*/
  v2 = *a2; /*0x100a39b46*/
  if ( v2 == 3 ) /*0x100a39b4c*/
  {
    codexmate_lib::core::sessions::normalize_export_text::he1577f426cd4a79e( /*0x100a39c18*/
      a1,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 3));
    return; /*0x100a39c18*/
  }
  if ( v2 == 4 ) /*0x100a39b55*/
  {
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf547d7839fecb8e5( /*0x100a39b74*/
      &v8,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 2) + 32LL * *((_QWORD *)a2 + 3));
    v3 = v9; /*0x100a39b79*/
    v4 = v10; /*0x100a39b7d*/
    alloc::str::join_generic_copy::hfccd3ffc09b1fad9(v7, v9, v10, &unk_1015A0E42, 2); /*0x100a39b98*/
    a1[2] = v7[2]; /*0x100a39ba1*/
    v5 = v7[0]; /*0x100a39ba5*/
    a1[1] = v7[1]; /*0x100a39bad*/
    *a1 = v5; /*0x100a39bb1*/
    if ( v4 ) /*0x100a39bb7*/
    {
      v6 = v3 + 8; /*0x100a39bb9*/
      do /*0x100a39bc7*/
      {
        if ( *(_QWORD *)(v6 - 8) ) /*0x100a39bc9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a39bda*/
        v6 += 24; /*0x100a39bc0*/
        --v4; /*0x100a39bc4*/
      }
      while ( v4 ); /*0x100a39bc7*/
    }
    if ( v8 ) /*0x100a39c24*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a39c36*/
  }
  else
  {
LABEL_9:
    *a1 = 0; /*0x100a39be1*/
    a1[1] = 1; /*0x100a39be8*/
    a1[2] = 0; /*0x100a39bf0*/
  }
}