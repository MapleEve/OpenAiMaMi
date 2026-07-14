// win 1.1.8 set_codex_router_no_account_mode node va=0x140e156c0 depth=1
// E156C0
__int64 __fastcall sub_140E156C0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax
  void *v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  __int128 *v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+38h] [rbp-40h]
  __int128 *v9; // [rsp+40h] [rbp-38h]
  __int64 (__fastcall *v10)(); // [rsp+48h] [rbp-30h]
  __int64 *v11; // [rsp+50h] [rbp-28h]
  __int64 (__fastcall *v12)(); // [rsp+58h] [rbp-20h]
  __int128 v13; // [rsp+60h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp-8h] BYREF

  v2 = 10; /*0x140e156d7*/
  if ( *(__int64 *)a1 < 0 ) /*0x140e156dc*/
    v2 = *(_QWORD *)a1 ^ 0x8000000000000000uLL; /*0x140e156dc*/
  switch ( v2 ) /*0x140e156ee*/
  {
    case 0uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e156fe*/
      v8 = sub_140E193E0; /*0x140e1570a*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15722*/
                 *a2,
                 a2[1],
                 &unk_1414BC690,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e1572c*/
    case 1uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e15a2f*/
      v8 = sub_140360B90; /*0x140e15a3b*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15a53*/
                 *a2,
                 a2[1],
                 &unk_1414BC6A2,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15a5d*/
    case 2uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e1598d*/
      v8 = sub_140360B90; /*0x140e15999*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e159b1*/
                 *a2,
                 a2[1],
                 &unk_1414BC6CB,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e159bb*/
    case 3uLL: /*0x140e156ee*/
      result = sub_141095070(a2, &unk_1414BC6F5, 42); /*0x140e159df*/
      break; /*0x140e159df*/
    case 4uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e158ad*/
      v8 = sub_140360B90; /*0x140e158b9*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e158d1*/
                 *a2,
                 a2[1],
                 &unk_1414BC71F,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e158db*/
    case 5uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e15af3*/
      v8 = sub_1405906A0; /*0x140e15aff*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15b17*/
                 *a2,
                 a2[1],
                 &unk_1414BC733,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15b21*/
    case 6uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e15b89*/
      v8 = sub_140360BB0; /*0x140e15b95*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15bad*/
                 *a2,
                 a2[1],
                 &unk_1414BC742,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15bb7*/
    case 7uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e159f2*/
      v8 = sub_140360BB0; /*0x140e159fe*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15a16*/
                 *a2,
                 a2[1],
                 &unk_1414BC744,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15a20*/
    case 8uLL: /*0x140e156ee*/
      v5 = *(_OWORD *)(a1 + 8); /*0x140e15c1a*/
      v13 = *(_OWORD *)(a1 + 24); /*0x140e15c22*/
      v14 = a1 + 40; /*0x140e15c2c*/
      v7 = &v13; /*0x140e15c36*/
      v8 = sub_1405906F0; /*0x140e15c42*/
      v9 = &v6; /*0x140e15c4c*/
      v10 = sub_1405906F0; /*0x140e15c51*/
      v11 = &v14; /*0x140e15c5b*/
      v12 = sub_1405906A0; /*0x140e15c67*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, _QWORD, _QWORD))sub_1410958B0)( /*0x140e15c7f*/
                 *a2,
                 a2[1],
                 &unk_1414BC755,
                 &v7,
                 v5,
                 *((_QWORD *)&v5 + 1));
      break; /*0x140e15c89*/
    case 9uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e158f7*/
      v8 = sub_140B94EE0; /*0x140e15903*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e1591b*/
                 *a2,
                 a2[1],
                 &unk_1414BC77C,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15925*/
    case 0xAuLL: /*0x140e156ee*/
      *(_QWORD *)&v13 = a1; /*0x140e15bc5*/
      v7 = &v13; /*0x140e15bd8*/
      v8 = sub_140360B90; /*0x140e15be4*/
      v9 = &v6; /*0x140e15bee*/
      v10 = sub_140360B90; /*0x140e15bf3*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15c0b*/
                 *a2,
                 a2[1],
                 &unk_1414BC7A4,
                 &v7,
                 a1 + 24,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15c15*/
    case 0xBuLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e15870*/
      v8 = sub_140E40400; /*0x140e1587c*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15894*/
                 *a2,
                 a2[1],
                 &unk_1414BC7C9,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e1589e*/
    case 0xCuLL: /*0x140e156ee*/
      result = sub_140EF7240(a1 + 8); /*0x140e158e4*/
      break; /*0x140e158e4*/
    case 0xDuLL: /*0x140e156ee*/
      v6 = *(_OWORD *)(a1 + 8); /*0x140e15b42*/
      v7 = &v6; /*0x140e15b4c*/
      v8 = sub_1405906F0; /*0x140e15b58*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, _QWORD, _QWORD))sub_1410958B0)( /*0x140e15b70*/
                 *a2,
                 a2[1],
                 &unk_1414BC7D9,
                 &v7,
                 v6,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15b7a*/
    case 0xEuLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e157f6*/
      v8 = sub_140E04C00; /*0x140e15802*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e1581a*/
                 *a2,
                 a2[1],
                 &unk_1414BC7F0,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15824*/
    case 0xFuLL: /*0x140e156ee*/
      v4 = &unk_1414BC809; /*0x140e159bc*/
      goto LABEL_34; /*0x140e159c3*/
    case 0x10uLL: /*0x140e156ee*/
      result = sub_141095070(a2, &unk_1414BC840, 25); /*0x140e157e3*/
      break; /*0x140e157e3*/
    case 0x11uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e15aa9*/
      v8 = sub_140E13570; /*0x140e15ab5*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15acd*/
                 *a2,
                 a2[1],
                 &unk_1414BC859,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15ad7*/
    case 0x12uLL: /*0x140e156ee*/
      result = sub_140ED0A10(a1 + 8); /*0x140e15bc0*/
      break; /*0x140e15bc0*/
    case 0x13uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e15cdd*/
      v8 = sub_140E13560; /*0x140e15ce9*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15d01*/
                 *a2,
                 a2[1],
                 &unk_1414BC868,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15d0b*/
    case 0x14uLL: /*0x140e156ee*/
      result = sub_140EBD830(a1 + 8); /*0x140e15ae0*/
      break; /*0x140e15ae0*/
    case 0x15uLL: /*0x140e156ee*/
      result = sub_141095070(a2, &unk_1414BC87C, 27); /*0x140e15b39*/
      break; /*0x140e15b39*/
    case 0x16uLL: /*0x140e156ee*/
      result = sub_141095070(a2, &unk_1414BC897, 31); /*0x140e15cca*/
      break; /*0x140e15cca*/
    case 0x17uLL: /*0x140e156ee*/
      result = sub_141095070(a2, &unk_1414BC8B6, 29); /*0x140e15d23*/
      break; /*0x140e15d23*/
    case 0x18uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e15950*/
      v8 = sub_140360BB0; /*0x140e1595c*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15974*/
                 *a2,
                 a2[1],
                 &unk_1414BC8D3,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e1597e*/
    case 0x19uLL: /*0x140e156ee*/
      result = sub_141095070(a2, &unk_1414BC8F2, 12); /*0x140e1593d*/
      break; /*0x140e1593d*/
    case 0x1AuLL: /*0x140e156ee*/
      result = sub_141095070(a2, &unk_1414BC8FE, 16); /*0x140e15d68*/
      break; /*0x140e15d68*/
    case 0x1BuLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e15781*/
      v8 = sub_1405906B0; /*0x140e1578d*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e157a5*/
                 *a2,
                 a2[1],
                 &unk_1414BC90E,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e157af*/
    case 0x1CuLL: /*0x140e156ee*/
      result = sub_14105AC30(a1 + 8); /*0x140e15d30*/
      break; /*0x140e15d30*/
    case 0x1DuLL: /*0x140e156ee*/
      result = sub_141095070(a2, &unk_1414BC92E, 17); /*0x140e15d4c*/
      break; /*0x140e15d4c*/
    case 0x1EuLL: /*0x140e156ee*/
      v4 = &unk_1414BC93F; /*0x140e15c8a*/
LABEL_34:
      result = sub_141095070(a2, v4, 55); /*0x140e15c91*/
      break; /*0x140e15ca1*/
    case 0x1FuLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e15a6c*/
      v8 = sub_140B94EE0; /*0x140e15a78*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15a90*/
                 *a2,
                 a2[1],
                 &unk_1414BC976,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15a9a*/
    case 0x20uLL: /*0x140e156ee*/
      result = sub_140F1FAB0(a1 + 8); /*0x140e15cae*/
      break; /*0x140e15cae*/
    case 0x21uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e15833*/
      v8 = sub_140E7D3D0; /*0x140e1583f*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e15857*/
                 *a2,
                 a2[1],
                 &unk_1414BC994,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15861*/
    case 0x22uLL: /*0x140e156ee*/
      result = sub_141095070(a2, &unk_1414BC9D2, 54); /*0x140e157c7*/
      break; /*0x140e157c7*/
    case 0x23uLL: /*0x140e156ee*/
      v7 = &v6; /*0x140e1573b*/
      v8 = sub_140590650; /*0x140e15747*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)( /*0x140e1575f*/
                 *a2,
                 a2[1],
                 &unk_1414BCA08,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break; /*0x140e15769*/
    case 0x24uLL: /*0x140e156ee*/
      result = sub_140EE47E0(); /*0x140e1576e*/
      break; /*0x140e1576e*/
  }
  return result; /*0x140e15728*/
}