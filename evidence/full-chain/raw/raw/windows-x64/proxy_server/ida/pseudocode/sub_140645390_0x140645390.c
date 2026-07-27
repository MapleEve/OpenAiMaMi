// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140645390(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 result; // rax
  _OWORD v9[6]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v10; // [rsp+88h] [rbp+8h]
  __int16 v11; // [rsp+90h] [rbp+10h]
  int v12; // [rsp+92h] [rbp+12h]
  __int16 v13; // [rsp+96h] [rbp+16h]
  __int128 v14; // [rsp+98h] [rbp+18h]
  _BYTE *v15; // [rsp+A8h] [rbp+28h]
  __int64 v16; // [rsp+B0h] [rbp+30h]

  v16 = -2; /*0x1406453a1*/
  v4 = *a2; /*0x1406453af*/
  v15 = a2; /*0x1406453c0*/
  switch ( v4 ) /*0x1406453c4*/
  {
    case 0LL: /*0x1406453c4*/
      a2[1] = 0; /*0x1406453c6*/
      break; /*0x1406453cb*/
    case 1LL: /*0x1406453c4*/
      sub_1416C3400(&off_141769268, a2, a3, a2); /*0x140645478*/
    case 2LL: /*0x1406453c4*/
      sub_1416C3420(&off_141769268, a2, a3, a2); /*0x14064546a*/
    case 3LL: /*0x1406453c4*/
      if ( (a2[1] & 1) != 0 ) /*0x1406453d2*/
        sub_1416C3400(&off_141768F18, a2, a3, a2); /*0x140645486*/
      return result; /*0x140645486*/
  }
  a2[1] = 1; /*0x1406453d8*/
  sub_140FAEBB0(v9, aOk_0, 2, a2); /*0x1406453ee*/
  v11 = 200; /*0x1406453f4*/
  *(_OWORD *)(a1 + 112) = v14; /*0x1406453fe*/
  *(_OWORD *)(a1 + 80) = v9[5]; /*0x140645406*/
  *(_OWORD *)(a1 + 64) = v9[4]; /*0x14064540e*/
  v5 = v9[0]; /*0x140645412*/
  v6 = v9[1]; /*0x140645416*/
  v7 = v9[2]; /*0x14064541a*/
  *(_OWORD *)(a1 + 48) = v9[3]; /*0x140645422*/
  *(_OWORD *)(a1 + 32) = v7; /*0x140645426*/
  *(_OWORD *)(a1 + 16) = v6; /*0x14064542a*/
  *(_OWORD *)a1 = v5; /*0x14064542e*/
  *(_QWORD *)(a1 + 96) = v10; /*0x140645435*/
  *(_WORD *)(a1 + 104) = v11; /*0x14064543d*/
  *(_DWORD *)(a1 + 106) = v12; /*0x140645444*/
  *(_WORD *)(a1 + 110) = v13; /*0x14064544b*/
  *v15 = 1; /*0x140645453*/
  return a1; /*0x140645459*/
}