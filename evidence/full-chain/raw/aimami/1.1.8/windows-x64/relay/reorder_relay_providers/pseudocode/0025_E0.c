// win 1.1.8 reorder_relay_providers node va=0x1400603e0 depth=2
// E0
__int64 __fastcall sub_1400603E0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v5; // [rsp+28h] [rbp-10h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+30h] [rbp-8h]

  v2 = 2; /*0x1400603eb*/
  if ( *a1 >= 2u ) /*0x1400603f1*/
    v2 = *a1 - 2LL; /*0x1400603f1*/
  switch ( v2 ) /*0x140060403*/
  {
    case 0LL: /*0x140060403*/
      v5 = &v4; /*0x140060414*/
      v6 = sub_140360BB0; /*0x140060420*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _QWORD *))sub_1410958B0)( /*0x140060438*/
                 *a2,
                 a2[1],
                 &unk_141316357,
                 &v5,
                 a1 + 1);
      break; /*0x140060442*/
    case 1LL: /*0x140060403*/
      v5 = &v4; /*0x140060541*/
      v6 = sub_1405906A0; /*0x14006054d*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _QWORD *))sub_1410958B0)( /*0x140060565*/
                 *a2,
                 a2[1],
                 &unk_141316364,
                 &v5,
                 a1 + 1);
      break; /*0x14006056f*/
    case 2LL: /*0x140060403*/
      v5 = &v4; /*0x14006048a*/
      v6 = sub_140747D10; /*0x140060496*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _QWORD *))sub_1410958B0)( /*0x1400604ae*/
                 *a2,
                 a2[1],
                 &unk_141316373,
                 &v5,
                 a1);
      break; /*0x1400604b8*/
    case 3LL: /*0x140060403*/
      v5 = &v4; /*0x1400604c7*/
      v6 = sub_140360B80; /*0x1400604d3*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _QWORD *))sub_1410958B0)( /*0x1400604eb*/
                 *a2,
                 a2[1],
                 &unk_141316388,
                 &v5,
                 a1 + 1);
      break; /*0x1400604f5*/
    case 4LL: /*0x140060403*/
      v5 = &v4; /*0x140060451*/
      v6 = sub_1405906E0; /*0x14006045d*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _QWORD *))sub_1410958B0)( /*0x140060475*/
                 *a2,
                 a2[1],
                 &unk_1413163A1,
                 &v5,
                 a1 + 1);
      break; /*0x14006047f*/
    case 5LL: /*0x140060403*/
      v5 = &v4; /*0x14006057e*/
      v6 = sub_140360B90; /*0x14006058a*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _QWORD *))sub_1410958B0)( /*0x1400605a2*/
                 *a2,
                 a2[1],
                 &unk_1413163B0,
                 &v5,
                 a1 + 1);
      break; /*0x1400605ac*/
    case 6LL: /*0x140060403*/
      v5 = &v4; /*0x1400605bb*/
      v6 = sub_140360B90; /*0x1400605c7*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _QWORD *))sub_1410958B0)( /*0x1400605df*/
                 *a2,
                 a2[1],
                 &unk_1413163BE,
                 &v5,
                 a1 + 1);
      break; /*0x1400605df*/
    case 7LL: /*0x140060403*/
      v5 = &v4; /*0x140060504*/
      v6 = sub_140360B90; /*0x140060510*/
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int64 **, _QWORD *))sub_1410958B0)( /*0x140060528*/
                 *a2,
                 a2[1],
                 &unk_1413163CF,
                 &v5,
                 a1 + 1);
      break; /*0x140060532*/
  }
  return result; /*0x14006043e*/
}