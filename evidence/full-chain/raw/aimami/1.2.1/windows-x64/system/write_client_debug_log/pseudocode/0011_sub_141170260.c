// win 1.2.1 NEW write_client_debug_log 0x141170260 d=2
__int64 __fastcall sub_141170260(__int64 a1, _QWORD *a2)
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

  v2 = 10; /*0x141170277*/
  if ( *(__int64 *)a1 < 0 ) /*0x14117027c*/
    v2 = *(_QWORD *)a1 ^ 0x8000000000000000uLL; /*0x14117027c*/
  switch ( v2 ) /*0x14117028e*/
  {
    case 0uLL: /*0x14117028e*/
      v7 = &v6; /*0x14117029e*/
      v8 = sub_141141BD0; /*0x1411702aa*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862D60, &v7, a1 + 8); /*0x1411702c2*/
      break; /*0x1411702cc*/
    case 1uLL: /*0x14117028e*/
      v7 = &v6; /*0x1411705cf*/
      v8 = sub_1400DD0E0; /*0x1411705db*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862D72, &v7, a1 + 8); /*0x1411705f3*/
      break; /*0x1411705fd*/
    case 2uLL: /*0x14117028e*/
      v7 = &v6; /*0x14117052d*/
      v8 = sub_1400DD0E0; /*0x141170539*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862D9B, &v7, a1 + 8); /*0x141170551*/
      break; /*0x14117055b*/
    case 3uLL: /*0x14117028e*/
      result = sub_1413D1590(a2, &unk_141862DC5, 42); /*0x14117057f*/
      break; /*0x14117057f*/
    case 4uLL: /*0x14117028e*/
      v7 = &v6; /*0x14117044d*/
      v8 = sub_1400DD0E0; /*0x141170459*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862DEF, &v7, a1 + 8); /*0x141170471*/
      break; /*0x14117047b*/
    case 5uLL: /*0x14117028e*/
      v7 = &v6; /*0x141170693*/
      v8 = sub_1400DD0D0; /*0x14117069f*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862E03, &v7, a1 + 8); /*0x1411706b7*/
      break; /*0x1411706c1*/
    case 6uLL: /*0x14117028e*/
      v7 = &v6; /*0x141170729*/
      v8 = sub_1403D4660; /*0x141170735*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862E12, &v7, a1 + 8); /*0x14117074d*/
      break; /*0x141170757*/
    case 7uLL: /*0x14117028e*/
      v7 = &v6; /*0x141170592*/
      v8 = sub_1403D4660; /*0x14117059e*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862E14, &v7, a1 + 8); /*0x1411705b6*/
      break; /*0x1411705c0*/
    case 8uLL: /*0x14117028e*/
      v5 = *(_OWORD *)(a1 + 8); /*0x1411707ba*/
      v13 = *(_OWORD *)(a1 + 24); /*0x1411707c2*/
      v6 = v5; /*0x1411707c7*/
      v14 = a1 + 40; /*0x1411707cc*/
      v7 = &v13; /*0x1411707d6*/
      v8 = sub_1401F8E10; /*0x1411707e2*/
      v9 = &v6; /*0x1411707ec*/
      v10 = sub_1401F8E10; /*0x1411707f1*/
      v11 = &v14; /*0x1411707fb*/
      v12 = sub_1400DD0D0; /*0x141170807*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862E25, &v7, v5); /*0x14117081f*/
      break; /*0x141170829*/
    case 9uLL: /*0x14117028e*/
      v7 = &v6; /*0x141170497*/
      v8 = sub_140E74560; /*0x1411704a3*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862E4C, &v7, a1 + 8); /*0x1411704bb*/
      break; /*0x1411704c5*/
    case 0xAuLL: /*0x14117028e*/
      *(_QWORD *)&v13 = a1; /*0x141170765*/
      v7 = &v13; /*0x141170778*/
      v8 = sub_1400DD0E0; /*0x141170784*/
      v9 = &v6; /*0x14117078e*/
      v10 = sub_1400DD0E0; /*0x141170793*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862E74, &v7, a1 + 24); /*0x1411707ab*/
      break; /*0x1411707b5*/
    case 0xBuLL: /*0x14117028e*/
      v7 = &v6; /*0x141170410*/
      v8 = sub_141160F20; /*0x14117041c*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862E99, &v7, a1 + 8); /*0x141170434*/
      break; /*0x14117043e*/
    case 0xCuLL: /*0x14117028e*/
      result = sub_141220810(a1 + 8); /*0x141170484*/
      break; /*0x141170484*/
    case 0xDuLL: /*0x14117028e*/
      v6 = *(_OWORD *)(a1 + 8); /*0x1411706e2*/
      v7 = &v6; /*0x1411706ec*/
      v8 = sub_1401F8E10; /*0x1411706f8*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862EA9, &v7, v6); /*0x141170710*/
      break; /*0x14117071a*/
    case 0xEuLL: /*0x14117028e*/
      v7 = &v6; /*0x141170396*/
      v8 = sub_14113DB90; /*0x1411703a2*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862EC0, &v7, a1 + 8); /*0x1411703ba*/
      break; /*0x1411703c4*/
    case 0xFuLL: /*0x14117028e*/
      v4 = &unk_141862ED9; /*0x14117055c*/
      goto LABEL_34; /*0x141170563*/
    case 0x10uLL: /*0x14117028e*/
      result = sub_1413D1590(a2, &unk_141862F10, 25); /*0x141170383*/
      break; /*0x141170383*/
    case 0x11uLL: /*0x14117028e*/
      v7 = &v6; /*0x141170649*/
      v8 = sub_14116FFF0; /*0x141170655*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862F29, &v7, a1 + 8); /*0x14117066d*/
      break; /*0x141170677*/
    case 0x12uLL: /*0x14117028e*/
      result = sub_1411FE710(a1 + 8); /*0x141170760*/
      break; /*0x141170760*/
    case 0x13uLL: /*0x14117028e*/
      v7 = &v6; /*0x14117087d*/
      v8 = sub_1411A43B0; /*0x141170889*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862F38, &v7, a1 + 8); /*0x1411708a1*/
      break; /*0x1411708ab*/
    case 0x14uLL: /*0x14117028e*/
      result = sub_1411F3270(a1 + 8); /*0x141170680*/
      break; /*0x141170680*/
    case 0x15uLL: /*0x14117028e*/
      result = sub_1413D1590(a2, &unk_141862F4C, 27); /*0x1411706d9*/
      break; /*0x1411706d9*/
    case 0x16uLL: /*0x14117028e*/
      result = sub_1413D1590(a2, &unk_141862F67, 31); /*0x14117086a*/
      break; /*0x14117086a*/
    case 0x17uLL: /*0x14117028e*/
      result = sub_1413D1590(a2, &unk_141862F86, 29); /*0x1411708c3*/
      break; /*0x1411708c3*/
    case 0x18uLL: /*0x14117028e*/
      v7 = &v6; /*0x1411704f0*/
      v8 = sub_1403D4660; /*0x1411704fc*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862FA3, &v7, a1 + 8); /*0x141170514*/
      break; /*0x14117051e*/
    case 0x19uLL: /*0x14117028e*/
      result = sub_1413D1590(a2, &unk_141862FC2, 12); /*0x1411704dd*/
      break; /*0x1411704dd*/
    case 0x1AuLL: /*0x14117028e*/
      result = sub_1413D1590(a2, &unk_141862FCE, 16); /*0x141170908*/
      break; /*0x141170908*/
    case 0x1BuLL: /*0x14117028e*/
      v7 = &v6; /*0x141170321*/
      v8 = sub_1401F8E40; /*0x14117032d*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141862FDE, &v7, a1 + 8); /*0x141170345*/
      break; /*0x14117034f*/
    case 0x1CuLL: /*0x14117028e*/
      result = sub_141395C30(a1 + 8); /*0x1411708d0*/
      break; /*0x1411708d0*/
    case 0x1DuLL: /*0x14117028e*/
      result = sub_1413D1590(a2, &unk_141862FFE, 17); /*0x1411708ec*/
      break; /*0x1411708ec*/
    case 0x1EuLL: /*0x14117028e*/
      v4 = &unk_14186300F; /*0x14117082a*/
LABEL_34:
      result = sub_1413D1590(a2, v4, 55); /*0x141170831*/
      break; /*0x141170841*/
    case 0x1FuLL: /*0x14117028e*/
      v7 = &v6; /*0x14117060c*/
      v8 = sub_140E74560; /*0x141170618*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141863046, &v7, a1 + 8); /*0x141170630*/
      break; /*0x14117063a*/
    case 0x20uLL: /*0x14117028e*/
      result = sub_14125CEA0(a1 + 8); /*0x14117084e*/
      break; /*0x14117084e*/
    case 0x21uLL: /*0x14117028e*/
      v7 = &v6; /*0x1411703d3*/
      v8 = sub_141141BE0; /*0x1411703df*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_141863064, &v7, a1 + 8); /*0x1411703f7*/
      break; /*0x141170401*/
    case 0x22uLL: /*0x14117028e*/
      result = sub_1413D1590(a2, &unk_1418630A2, 54); /*0x141170367*/
      break; /*0x141170367*/
    case 0x23uLL: /*0x14117028e*/
      v7 = &v6; /*0x1411702db*/
      v8 = sub_1400DD0B0; /*0x1411702e7*/
      result = sub_1413D1EA0(*a2, a2[1], &unk_1418630D8, &v7, a1 + 8); /*0x1411702ff*/
      break; /*0x141170309*/
    case 0x24uLL: /*0x14117028e*/
      result = sub_14122A5C0(); /*0x14117030e*/
      break; /*0x14117030e*/
  }
  return result; /*0x1411702c8*/
}