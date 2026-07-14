// win 1.1.8 delete_sessions node va=0x1403801e0 depth=2
// E0
_QWORD *__fastcall sub_1403801E0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-18h]
  char v10; // [rsp+57h] [rbp-9h] BYREF
  __int64 v11; // [rsp+58h] [rbp-8h]

  v11 = -2; /*0x1403801ec*/
  if ( sub_1403747D0(a2) == 1 ) /*0x140380203*/
  {
    a1[1] = v3; /*0x140380205*/
LABEL_3:
    *a1 = 0x8000000000000000uLL; /*0x140380209*/
    return a1; /*0x140380216*/
  }
  if ( *(_BYTE *)v3 != 4 ) /*0x14038021b*/
  {
    a1[1] = sub_1412794B0(v3, (__int64)&v10, (__int64)&unk_141333048); /*0x140380284*/
    goto LABEL_3; /*0x140380288*/
  }
  v4 = *(_QWORD *)(v3 + 24); /*0x140380221*/
  v8 = *(_QWORD *)(v3 + 16); /*0x14038022f*/
  v9 = v8 + 32 * v4; /*0x140380233*/
  sub_140114540(a1, &v8); /*0x14038023e*/
  if ( !__OFSUB__(0, *a1) ) /*0x140380248*/
  {
    v7 = a1[2]; /*0x14038024e*/
    v6 = *(_OWORD *)a1; /*0x140380255*/
    if ( v9 != v8 ) /*0x140380261*/
    {
      a1[1] = sub_14127DE10(v4, &off_14133A468, &unk_14133A478); /*0x1403802a4*/
      *a1 = 0x8000000000000000uLL; /*0x1403802b2*/
      sub_140049340(&v6); /*0x1403802b9*/
    }
  }
  return a1; /*0x140380266*/
}