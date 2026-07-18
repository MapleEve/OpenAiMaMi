// mac 1.2.2 NEW export_session_markdown 0x100a46880 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r13

  v1 = *a1; /*0x100a4688e*/
  v2 = **a1; /*0x100a46891*/
  if ( v2 == 1 ) /*0x100a46898*/
  {
    v3 = v1[1]; /*0x100a468b3*/
    if ( (v1[1] & 3) == 1 ) /*0x100a468bf*/
    {
      v4 = *(_QWORD *)(v3 + 7); /*0x100a468c9*/
      if ( *(_QWORD *)v4 ) /*0x100a468cd*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v3 - 1)); /*0x100a468d9*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x100a468db*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a468eb*/
      goto LABEL_10; /*0x100a468eb*/
    }
  }
  else if ( !v2 && v1[2] ) /*0x100a4689f*/
  {
LABEL_10:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a468fd*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a46913*/
}