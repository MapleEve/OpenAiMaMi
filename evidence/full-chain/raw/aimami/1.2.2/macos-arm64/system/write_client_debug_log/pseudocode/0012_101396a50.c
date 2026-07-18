// mac 1.2.2 NEW write_client_debug_log 0x101396a50 d=3
char __fastcall core::fmt::write::h2e5a8157a38fb62d(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4)
{
  unsigned __int8 *v5; // r13
  unsigned __int8 v6; // al
  unsigned __int8 *v7; // r12
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // ecx
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // si
  unsigned __int8 (__fastcall *v16)(__int64, unsigned __int8 *, __int64); // [rsp+8h] [rbp-58h]
  _QWORD v18[2]; // [rsp+18h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h]
  __int64 v20; // [rsp+30h] [rbp-30h]

  v5 = a3; /*0x101396a64*/
  if ( (a4 & 1) != 0 ) /*0x101396a6d*/
    return (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, unsigned __int64))(a2 + 24))(a1, a3, a4 >> 1); /*0x101396bf6*/
  v6 = *a3; /*0x101396a73*/
  if ( !*a3 ) /*0x101396a7a*/
    return 0; /*0x101396bfa*/
  v16 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(a2 + 24); /*0x101396a88*/
  v20 = 0; /*0x101396a8c*/
  while ( 1 ) /*0x101396ab0*/
  {
    v7 = v5 + 1; /*0x101396ab0*/
    v8 = v6; /*0x101396ab4*/
    if ( (v6 & 0x80u) == 0 ) /*0x101396aba*/
    {
      if ( v16(a1, v5 + 1, v6) ) /*0x101396ac5*/
        return 1; /*0x101396aca*/
      v7 += v8; /*0x101396ad0*/
      goto LABEL_4; /*0x101396ad3*/
    }
    if ( v6 != 0x80 ) /*0x101396ae0*/
      break; /*0x101396ae0*/
    v11 = *(unsigned __int16 *)(v5 + 1); /*0x101396b05*/
    if ( v16(a1, v5 + 3, v11) ) /*0x101396b14*/
      return 1; /*0x101396b19*/
    v7 = &v5[v11 + 3]; /*0x101396b1f*/
LABEL_4:
    v6 = *v7; /*0x101396aa0*/
    v5 = v7; /*0x101396aa5*/
    if ( !*v7 ) /*0x101396aaa*/
      return 0; /*0x101396aaa*/
  }
  if ( v6 == 192 ) /*0x101396aeb*/
  {
    v9 = v20; /*0x101396aed*/
    v10 = 16 * v20; /*0x101396af4*/
    v19 = 1610612768; /*0x101396af8*/
    goto LABEL_26; /*0x101396b00*/
  }
  v12 = 1610612768; /*0x101396b29*/
  if ( (v6 & 1) != 0 ) /*0x101396b30*/
  {
    v12 = *(_DWORD *)(v5 + 1); /*0x101396b32*/
    v7 = v5 + 5; /*0x101396b3a*/
  }
  if ( (v6 & 2) != 0 ) /*0x101396b3f*/
  {
    v13 = *(_WORD *)v7; /*0x101396b5a*/
    v7 += 2; /*0x101396b5f*/
    v9 = v20; /*0x101396b63*/
    if ( (v6 & 4) == 0 ) /*0x101396b69*/
      goto LABEL_20; /*0x101396b69*/
LABEL_17:
    v14 = *(_WORD *)v7; /*0x101396b4b*/
    v7 += 2; /*0x101396b50*/
    if ( (v6 & 8) != 0 ) /*0x101396b56*/
    {
LABEL_21:
      v9 = *(unsigned __int16 *)v7; /*0x101396b71*/
      v7 += 2; /*0x101396b76*/
    }
  }
  else
  {
    v13 = 0; /*0x101396b41*/
    v9 = v20; /*0x101396b43*/
    if ( (v6 & 4) != 0 ) /*0x101396b49*/
      goto LABEL_17; /*0x101396b49*/
LABEL_20:
    v14 = 0; /*0x101396b6b*/
    if ( (v6 & 8) != 0 ) /*0x101396b6f*/
      goto LABEL_21; /*0x101396b6f*/
  }
  if ( (v6 & 0x10) != 0 ) /*0x101396b7c*/
  {
    v13 = *(_WORD *)(a4 + 16 * (unsigned int)v13 + 8); /*0x101396bcd*/
    if ( (v6 & 0x20) != 0 ) /*0x101396bd4*/
LABEL_24:
      v14 = *(_WORD *)(a4 + 16 * (unsigned int)v14 + 8); /*0x101396b82*/
  }
  else if ( (v6 & 0x20) != 0 ) /*0x101396b80*/
  {
    goto LABEL_24; /*0x101396b80*/
  }
  v10 = 16 * v9; /*0x101396b90*/
  LODWORD(v19) = v12; /*0x101396b94*/
  WORD2(v19) = v13; /*0x101396b97*/
  HIWORD(v19) = v14; /*0x101396b9b*/
LABEL_26:
  v18[0] = a1; /*0x101396b9f*/
  v18[1] = a2; /*0x101396ba7*/
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *))(a4 + v10 + 8))(*(_QWORD *)(a4 + v10), v18) ) /*0x101396bb3*/
  {
    v20 = v9 + 1; /*0x101396bbe*/
    goto LABEL_4; /*0x101396bc2*/
  }
  return 1; /*0x101396be8*/
}