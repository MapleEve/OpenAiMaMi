// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404A4370(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 result; // rax
  _OWORD v4[6]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v5[6]; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v6[12]; // [rsp+100h] [rbp+80h] BYREF
  _QWORD v7[6]; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v8[2]; // [rsp+190h] [rbp+110h] BYREF
  _QWORD v9[2]; // [rsp+1A0h] [rbp+120h] BYREF
  char v10; // [rsp+1B7h] [rbp+137h] BYREF
  __int64 v11; // [rsp+1B8h] [rbp+138h]

  v11 = -2; /*0x1404a4382*/
  v9[0] = aModelCatalog; /*0x1404a4394*/
  v9[1] = 13; /*0x1404a439b*/
  v1 = a1[1]; /*0x1404a43a6*/
  v2 = a1[2]; /*0x1404a43aa*/
  result = sub_1404B9880((unsigned int)v4, v1, v2, a1[5], a1[6], a1[8], a1[9]); /*0x1404a43d7*/
  if ( LODWORD(v4[0]) != -1 ) /*0x1404a43e0*/
  {
    v5[5] = v4[5]; /*0x1404a43ea*/
    v5[4] = v4[4]; /*0x1404a43f2*/
    v5[3] = v4[3]; /*0x1404a4406*/
    v5[2] = v4[2]; /*0x1404a440a*/
    v5[1] = v4[1]; /*0x1404a440e*/
    v5[0] = v4[0]; /*0x1404a4412*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404a4424*/
    {
      v8[0] = v1; /*0x1404a442a*/
      v8[1] = v2; /*0x1404a4431*/
      v7[0] = v9; /*0x1404a443f*/
      v7[1] = sub_14041F680; /*0x1404a444d*/
      v7[2] = v8; /*0x1404a445b*/
      v7[3] = sub_14148F3A0; /*0x1404a4469*/
      v7[4] = v5; /*0x1404a4474*/
      v7[5] = sub_140B036A0; /*0x1404a4482*/
      v6[0] = 0; /*0x1404a4489*/
      v6[1] = aCodexmateLibCo_0; /*0x1404a449b*/
      v6[2] = 51; /*0x1404a44a2*/
      v6[3] = 0; /*0x1404a44ad*/
      v6[4] = aSrcCoreRelayCo_0; /*0x1404a44bf*/
      v6[5] = 41; /*0x1404a44c6*/
      v6[6] = 2; /*0x1404a44d1*/
      v6[7] = aCodexmateLibCo_0; /*0x1404a44dc*/
      v6[8] = 51; /*0x1404a44e3*/
      v6[9] = 0x7E500000001LL; /*0x1404a44f8*/
      v6[10] = &unk_14175B21C; /*0x1404a4506*/
      v6[11] = v7; /*0x1404a4514*/
      sub_1412C36A0(&v10, v6); /*0x1404a4529*/
    }
    return sub_14043E650(v5); /*0x1404a4533*/
  }
  return result; /*0x1404a4539*/
}