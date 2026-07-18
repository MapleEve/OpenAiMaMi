// win 1.2.1 NEW export_session_markdown 0x140286360 d=1
__int64 __fastcall sub_140286360(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  _QWORD *v4; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v5; // [rsp+28h] [rbp-10h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+30h] [rbp-8h]

  v2 = 2; /*0x14028636b*/
  if ( *a1 >= 2u ) /*0x140286371*/
    v2 = *a1 - 2LL; /*0x140286371*/
  switch ( v2 ) /*0x140286383*/
  {
    case 0LL: /*0x140286383*/
      v4 = a1 + 1; /*0x14028638a*/
      v5 = &v4; /*0x140286394*/
      v6 = sub_1403D4660; /*0x1402863a0*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141679172, &v5); /*0x1402863b8*/
      break; /*0x1402863c2*/
    case 1LL: /*0x140286383*/
      v4 = a1 + 1; /*0x1402864b7*/
      v5 = &v4; /*0x1402864c1*/
      v6 = sub_1400DD0D0; /*0x1402864cd*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_14167917F, &v5); /*0x1402864e5*/
      break; /*0x1402864ef*/
    case 2LL: /*0x140286383*/
      v4 = a1; /*0x140286400*/
      v5 = &v4; /*0x14028640a*/
      v6 = sub_1401F8DD0; /*0x140286416*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_14167918E, &v5); /*0x14028642e*/
      break; /*0x140286438*/
    case 3LL: /*0x140286383*/
      v4 = a1 + 1; /*0x14028643d*/
      v5 = &v4; /*0x140286447*/
      v6 = sub_1401F8DE0; /*0x140286453*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_1416791A3, &v5); /*0x14028646b*/
      break; /*0x140286475*/
    case 4LL: /*0x140286383*/
      v4 = a1 + 1; /*0x1402863c7*/
      v5 = &v4; /*0x1402863d1*/
      v6 = sub_1408F9090; /*0x1402863dd*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_1416791BC, &v5); /*0x1402863f5*/
      break; /*0x1402863ff*/
    case 5LL: /*0x140286383*/
      v4 = a1 + 1; /*0x1402864f4*/
      v5 = &v4; /*0x1402864fe*/
      v6 = sub_1400DD0E0; /*0x14028650a*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_1416791CB, &v5); /*0x140286522*/
      break; /*0x14028652c*/
    case 6LL: /*0x140286383*/
      v4 = a1 + 1; /*0x140286531*/
      v5 = &v4; /*0x14028653b*/
      v6 = sub_1400DD0E0; /*0x140286547*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_1416791D9, &v5); /*0x14028655f*/
      break; /*0x14028655f*/
    case 7LL: /*0x140286383*/
      v4 = a1 + 1; /*0x14028647a*/
      v5 = &v4; /*0x140286484*/
      v6 = sub_1400DD0E0; /*0x140286490*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_1416791EA, &v5); /*0x1402864a8*/
      break; /*0x1402864b2*/
  }
  return result; /*0x1402863be*/
}