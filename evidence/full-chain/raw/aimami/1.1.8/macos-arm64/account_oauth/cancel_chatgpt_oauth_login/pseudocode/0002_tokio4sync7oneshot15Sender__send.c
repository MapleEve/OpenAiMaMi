// mac 1.1.8 cancel_chatgpt_oauth_login node va=0x10079f2b0 depth=1
// tokio4sync7oneshot15Sender::send
__int64 __fastcall tokio::sync::oneshot::Sender$LT$T$GT$::send::heafe28e776b52930(__int64 a1)
{
  char v1; // bl
  volatile signed __int64 *v2; // rax
  bool v3; // zf
  __int64 v4; // r14
  volatile signed __int64 *v6; // [rsp+0h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+8h] [rbp-18h] BYREF

  v7[0] = 0; /*0x10079f2bb*/
  if ( !a1 ) /*0x10079f2c6*/
    core::option::unwrap_failed::h44626cade04bbf1e(&off_1015393B8); /*0x10079f3a2*/
  v6 = (volatile signed __int64 *)a1; /*0x10079f2cf*/
  *(_BYTE *)(a1 + 56) = 1; /*0x10079f2d3*/
  v1 = tokio::sync::oneshot::State::set_complete::h59099fb12c33618f(a1 + 48); /*0x10079f2e0*/
  if ( (v1 & 5) == 1 ) /*0x10079f2e9*/
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 40)); /*0x10079f2f3*/
  if ( (v1 & 4) != 0 ) /*0x10079f2f9*/
  {
    v2 = v6; /*0x10079f2fb*/
    v3 = *((_BYTE *)v6 + 56) == 0; /*0x10079f2ff*/
    *((_BYTE *)v6 + 56) = 0; /*0x10079f303*/
    if ( v3 ) /*0x10079f307*/
      core::option::unwrap_failed::h44626cade04bbf1e(&off_1015393D0); /*0x10079f3b0*/
    if ( !_InterlockedDecrement64(v2) ) /*0x10079f30d*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h0c4e0b817f20a841(&v6); /*0x10079f317*/
    v4 = v7[0]; /*0x10079f31c*/
    if ( v7[0] ) /*0x10079f323*/
    {
      if ( (tokio::sync::oneshot::State::set_complete::h59099fb12c33618f(v7[0] + 48LL) & 5) != 1 ) /*0x10079f334*/
        goto LABEL_16; /*0x10079f334*/
LABEL_15:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v4 + 32) + 16LL))(*(_QWORD *)(v4 + 40)); /*0x10079f370*/
LABEL_16:
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v4) ) /*0x10079f37b*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h0c4e0b817f20a841(v7); /*0x10079f385*/
    }
  }
  else
  {
    if ( !_InterlockedDecrement64(v6) ) /*0x10079f347*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h0c4e0b817f20a841(&v6); /*0x10079f351*/
    v4 = v7[0]; /*0x10079f356*/
    if ( v7[0] ) /*0x10079f35d*/
    {
      if ( (tokio::sync::oneshot::State::set_complete::h59099fb12c33618f(v7[0] + 48LL) & 5) != 1 ) /*0x10079f36e*/
        goto LABEL_16; /*0x10079f36e*/
      goto LABEL_15; /*0x10079f36e*/
    }
  }
  return (unsigned __int8)(v1 & 4) >> 2; /*0x10079f392*/
}