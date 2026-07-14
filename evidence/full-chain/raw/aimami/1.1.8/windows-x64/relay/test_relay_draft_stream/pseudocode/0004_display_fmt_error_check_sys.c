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

  v2 = 10;
  if ( *(__int64 *)a1 < 0 )
    v2 = *(_QWORD *)a1 ^ 0x8000000000000000uLL;
  switch ( v2 )
  {
    case 0uLL:
      v7 = &v6;
      v8 = sub_140E193E0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC690,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 1uLL:
      v7 = &v6;
      v8 = sub_140360B90;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC6A2,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 2uLL:
      v7 = &v6;
      v8 = sub_140360B90;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC6CB,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 3uLL:
      result = sub_141095070(a2, &unk_1414BC6F5, 42);
      break;
    case 4uLL:
      v7 = &v6;
      v8 = sub_140360B90;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC71F,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 5uLL:
      v7 = &v6;
      v8 = sub_1405906A0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC733,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 6uLL:
      v7 = &v6;
      v8 = sub_140360BB0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC742,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 7uLL:
      v7 = &v6;
      v8 = sub_140360BB0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC744,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 8uLL:
      v5 = *(_OWORD *)(a1 + 8);
      v13 = *(_OWORD *)(a1 + 24);
      v14 = a1 + 40;
      v7 = &v13;
      v8 = sub_1405906F0;
      v9 = &v6;
      v10 = sub_1405906F0;
      v11 = &v14;
      v12 = sub_1405906A0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, _QWORD, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC755,
                 &v7,
                 v5,
                 *((_QWORD *)&v5 + 1));
      break;
    case 9uLL:
      v7 = &v6;
      v8 = sub_140B94EE0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC77C,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0xAuLL:
      *(_QWORD *)&v13 = a1;
      v7 = &v13;
      v8 = sub_140360B90;
      v9 = &v6;
      v10 = sub_140360B90;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC7A4,
                 &v7,
                 a1 + 24,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0xBuLL:
      v7 = &v6;
      v8 = sub_140E40400;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC7C9,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0xCuLL:
      result = sub_140EF7240(a1 + 8);
      break;
    case 0xDuLL:
      v6 = *(_OWORD *)(a1 + 8);
      v7 = &v6;
      v8 = sub_1405906F0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, _QWORD, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC7D9,
                 &v7,
                 v6,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0xEuLL:
      v7 = &v6;
      v8 = sub_140E04C00;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC7F0,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0xFuLL:
      v4 = &unk_1414BC809;
      goto LABEL_34;
    case 0x10uLL:
      result = sub_141095070(a2, &unk_1414BC840, 25);
      break;
    case 0x11uLL:
      v7 = &v6;
      v8 = sub_140E13570;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC859,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0x12uLL:
      result = sub_140ED0A10(a1 + 8);
      break;
    case 0x13uLL:
      v7 = &v6;
      v8 = sub_140E13560;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC868,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0x14uLL:
      result = sub_140EBD830(a1 + 8);
      break;
    case 0x15uLL:
      result = sub_141095070(a2, &unk_1414BC87C, 27);
      break;
    case 0x16uLL:
      result = sub_141095070(a2, &unk_1414BC897, 31);
      break;
    case 0x17uLL:
      result = sub_141095070(a2, &unk_1414BC8B6, 29);
      break;
    case 0x18uLL:
      v7 = &v6;
      v8 = sub_140360BB0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC8D3,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0x19uLL:
      result = sub_141095070(a2, &unk_1414BC8F2, 12);
      break;
    case 0x1AuLL:
      result = sub_141095070(a2, &unk_1414BC8FE, 16);
      break;
    case 0x1BuLL:
      v7 = &v6;
      v8 = sub_1405906B0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC90E,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0x1CuLL:
      result = sub_14105AC30(a1 + 8);
      break;
    case 0x1DuLL:
      result = sub_141095070(a2, &unk_1414BC92E, 17);
      break;
    case 0x1EuLL:
      v4 = &unk_1414BC93F;
LABEL_34:
      result = sub_141095070(a2, v4, 55);
      break;
    case 0x1FuLL:
      v7 = &v6;
      v8 = sub_140B94EE0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC976,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0x20uLL:
      result = sub_140F1FAB0(a1 + 8);
      break;
    case 0x21uLL:
      v7 = &v6;
      v8 = sub_140E7D3D0;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BC994,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0x22uLL:
      result = sub_141095070(a2, &unk_1414BC9D2, 54);
      break;
    case 0x23uLL:
      v7 = &v6;
      v8 = sub_140590650;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **, __int64, _QWORD))sub_1410958B0)(
                 *a2,
                 a2[1],
                 &unk_1414BCA08,
                 &v7,
                 a1 + 8,
                 *((_QWORD *)&v6 + 1));
      break;
    case 0x24uLL:
      result = sub_140EE47E0();
      break;
  }
  return result;
}