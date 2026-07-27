// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404BCBB0(__int64 a1)
{
  __int64 result; // rax
  _OWORD v3[6]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v4[6]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v5; // [rsp+E8h] [rbp+68h] BYREF
  _QWORD v6[12]; // [rsp+F8h] [rbp+78h] BYREF
  _QWORD v7[6]; // [rsp+158h] [rbp+D8h] BYREF
  _QWORD v8[2]; // [rsp+188h] [rbp+108h] BYREF
  char v9; // [rsp+19Fh] [rbp+11Fh] BYREF
  __int64 v10; // [rsp+1A0h] [rbp+120h]

  v10 = -2; /*0x1404bcbc1*/
  v8[0] = aProviderNormal; /*0x1404bcbd6*/
  v8[1] = 18; /*0x1404bcbdd*/
  result = sub_1404BDFD0(v3, a1); /*0x1404bcbef*/
  if ( LODWORD(v3[0]) != -1 ) /*0x1404bcbf8*/
  {
    v4[5] = v3[5]; /*0x1404bcc02*/
    v4[4] = v3[4]; /*0x1404bcc0a*/
    v4[3] = v3[3]; /*0x1404bcc1e*/
    v4[2] = v3[2]; /*0x1404bcc22*/
    v4[1] = v3[1]; /*0x1404bcc26*/
    v4[0] = v3[0]; /*0x1404bcc2a*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404bcc3c*/
    {
      v5 = *(_OWORD *)(a1 + 8); /*0x1404bcc46*/
      v7[0] = v8; /*0x1404bcc51*/
      v7[1] = sub_14041F680; /*0x1404bcc5f*/
      v7[2] = &v5; /*0x1404bcc6a*/
      v7[3] = sub_14148F3A0; /*0x1404bcc78*/
      v7[4] = v4; /*0x1404bcc82*/
      v7[5] = sub_140B036A0; /*0x1404bcc90*/
      v6[0] = 0; /*0x1404bcc97*/
      v6[1] = aCodexmateLibCo_0; /*0x1404bcca6*/
      v6[2] = 51; /*0x1404bccad*/
      v6[3] = 0; /*0x1404bccb8*/
      v6[4] = aSrcCoreRelayCo_0; /*0x1404bccca*/
      v6[5] = 41; /*0x1404bccd1*/
      v6[6] = 2; /*0x1404bccdc*/
      v6[7] = aCodexmateLibCo_0; /*0x1404bcce7*/
      v6[8] = 51; /*0x1404bccee*/
      v6[9] = 0x82E00000001LL; /*0x1404bcd03*/
      v6[10] = &unk_14175C303; /*0x1404bcd11*/
      v6[11] = v7; /*0x1404bcd1f*/
      sub_1412C36A0(&v9, v6); /*0x1404bcd31*/
    }
    return sub_14043E650(v4); /*0x1404bcd3a*/
  }
  return result; /*0x1404bcd40*/
}