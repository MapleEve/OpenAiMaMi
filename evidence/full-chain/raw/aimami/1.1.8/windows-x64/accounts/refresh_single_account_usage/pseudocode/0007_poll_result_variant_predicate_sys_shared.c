// poll_result_variant_predicate_sys (shared, generic) @ 0x1403747d0 (win, AiMaMi 1.1.8)
__int64 __fastcall sub_1403747D0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  void *v5; // rdx
  char *v6; // rsi
  _QWORD *v7; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+28h] [rbp-70h]
  _QWORD *v9; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall *v10)(); // [rsp+38h] [rbp-60h]
  char v11; // [rsp+40h] [rbp-58h] BYREF
  char v12; // [rsp+58h] [rbp-40h] BYREF
  char v13; // [rsp+70h] [rbp-28h] BYREF

  v2 = a1[3]; /*0x1403747dc*/
  if ( v2 ) /*0x1403747e3*/
  {
    v3 = a1[4]; /*0x1403747e9*/
    if ( *(_BYTE *)(v3 + 480) == 6 ) /*0x1403747f5*/
    {
      v7 = a1; /*0x14037483a*/
      v8 = sub_1405906F0; /*0x140374846*/
      v9 = a1 + 2; /*0x14037484b*/
      v10 = sub_1405906F0; /*0x140374850*/
      v5 = &unk_14133688E; /*0x140374855*/
      v6 = &v12; /*0x14037485c*/
    }
    else
    {
      if ( sub_1410242F0(a1[2], v2, v3 + 480) ) /*0x140374802*/
        return 0; /*0x14037481a*/
      v7 = a1; /*0x140374863*/
      v8 = sub_1405906F0; /*0x14037486f*/
      v9 = a1 + 2; /*0x140374874*/
      v10 = sub_1405906F0; /*0x140374879*/
      v5 = &unk_14133686B; /*0x14037487e*/
      v6 = &v13; /*0x140374885*/
    }
  }
  else
  {
    v7 = a1; /*0x14037481b*/
    v8 = sub_1405906F0; /*0x140374827*/
    v5 = &unk_141336828; /*0x14037482c*/
    v6 = &v11; /*0x140374833*/
  }
  sub_14108F360(v6, v5, &v7); /*0x140374892*/
  sub_14127E270(v6); /*0x14037489a*/
  return 1; /*0x140374811*/
}
