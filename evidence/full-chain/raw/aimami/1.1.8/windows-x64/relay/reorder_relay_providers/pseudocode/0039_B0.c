// win 1.1.8 reorder_relay_providers node va=0x1410958b0 depth=3
// B0
char __fastcall sub_1410958B0(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4)
{
  unsigned __int8 *v5; // r12
  unsigned __int8 v7; // al
  unsigned __int8 (__fastcall *v8)(__int64, unsigned __int8 *, __int64); // r14
  __int64 v9; // rbx
  unsigned __int8 *v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // ecx
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // r8
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+40h] [rbp+0h]

  v5 = a3; /*0x1410958c8*/
  if ( (a4 & 1) != 0 ) /*0x1410958d2*/
    return (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, unsigned __int64))(a2 + 24))(a1, a3, a4 >> 1); /*0x141095a4e*/
  v7 = *a3; /*0x1410958d8*/
  if ( !*a3 ) /*0x1410958df*/
    return 0; /*0x141095a53*/
  v8 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(a2 + 24); /*0x1410958e9*/
  v9 = 0; /*0x1410958ed*/
  while ( 1 ) /*0x14109590f*/
  {
    v10 = v5 + 1; /*0x14109590f*/
    v11 = v7; /*0x141095914*/
    if ( (v7 & 0x80u) == 0 ) /*0x14109591a*/
    {
      if ( v8(a1, v5 + 1, v7) ) /*0x141095925*/
        return 1; /*0x14109592a*/
      v10 += v11; /*0x141095930*/
      goto LABEL_4; /*0x141095933*/
    }
    if ( v7 != 0x80 ) /*0x141095940*/
      break; /*0x141095940*/
    v13 = *(unsigned __int16 *)(v5 + 1); /*0x141095961*/
    if ( v8(a1, v5 + 3, v13) ) /*0x141095972*/
      return 1; /*0x141095977*/
    v10 = &v5[v13 + 3]; /*0x141095980*/
LABEL_4:
    v7 = *v10; /*0x141095900*/
    v5 = v10; /*0x141095904*/
    if ( !*v10 ) /*0x141095909*/
      return 0; /*0x141095909*/
  }
  if ( v7 == 192 ) /*0x14109594b*/
  {
    v12 = 16 * v9; /*0x141095950*/
    v20 = 1610612768; /*0x141095954*/
    goto LABEL_26; /*0x14109595c*/
  }
  v14 = 1610612768; /*0x141095989*/
  if ( (v7 & 1) != 0 ) /*0x141095990*/
  {
    v14 = *(_DWORD *)(v5 + 1); /*0x141095992*/
    v10 = v5 + 5; /*0x14109599b*/
  }
  if ( (v7 & 2) != 0 ) /*0x1410959a0*/
  {
    v15 = *(_WORD *)v10; /*0x1410959b6*/
    v10 += 2; /*0x1410959ba*/
    if ( (v7 & 4) == 0 ) /*0x1410959c0*/
      goto LABEL_20; /*0x1410959c0*/
LABEL_17:
    v16 = *(_WORD *)v10; /*0x1410959a8*/
    v10 += 2; /*0x1410959ac*/
    if ( (v7 & 8) != 0 ) /*0x1410959b2*/
    {
LABEL_21:
      v9 = *(unsigned __int16 *)v10; /*0x1410959c9*/
      v10 += 2; /*0x1410959cd*/
    }
  }
  else
  {
    v15 = 0; /*0x1410959a2*/
    if ( (v7 & 4) != 0 ) /*0x1410959a6*/
      goto LABEL_17; /*0x1410959a6*/
LABEL_20:
    v16 = 0; /*0x1410959c2*/
    if ( (v7 & 8) != 0 ) /*0x1410959c7*/
      goto LABEL_21; /*0x1410959c7*/
  }
  if ( (v7 & 0x10) != 0 ) /*0x1410959d3*/
  {
    v15 = *(_WORD *)(a4 + 16 * (unsigned int)v15 + 8); /*0x141095a23*/
    if ( (v7 & 0x20) != 0 ) /*0x141095a2a*/
LABEL_24:
      v16 = *(_WORD *)(a4 + 16 * (unsigned int)v16 + 8); /*0x1410959d9*/
  }
  else if ( (v7 & 0x20) != 0 ) /*0x1410959d7*/
  {
    goto LABEL_24; /*0x1410959d7*/
  }
  v12 = 16 * v9; /*0x1410959e9*/
  LODWORD(v20) = v14; /*0x1410959ed*/
  WORD2(v20) = v15; /*0x1410959f0*/
  HIWORD(v20) = v16; /*0x1410959f4*/
LABEL_26:
  v19[0] = a1; /*0x1410959f9*/
  v19[1] = a2; /*0x141095a01*/
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *))(a4 + v12 + 8))(*(_QWORD *)(a4 + v12), v19) ) /*0x141095a0d*/
  {
    ++v9; /*0x141095a15*/
    goto LABEL_4; /*0x141095a18*/
  }
  return 1; /*0x141095a3e*/
}