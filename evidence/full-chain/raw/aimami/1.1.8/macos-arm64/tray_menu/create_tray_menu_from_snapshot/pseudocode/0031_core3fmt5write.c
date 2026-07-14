// mac 1.1.8 BACKEND-ONLY create_tray_menu_from_snapshot node 0x1010dfde0 depth=2
// core3fmt5write
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

  v5 = a3; /*0x1010dfdf4*/
  if ( (a4 & 1) != 0 ) /*0x1010dfdfd*/
    return (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, unsigned __int64))(a2 + 24))(a1, a3, a4 >> 1); /*0x1010dff86*/
  v6 = *a3; /*0x1010dfe03*/
  if ( !*a3 ) /*0x1010dfe0a*/
    return 0; /*0x1010dff8a*/
  v16 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(a2 + 24); /*0x1010dfe18*/
  v20 = 0; /*0x1010dfe1c*/
  while ( 1 ) /*0x1010dfe40*/
  {
    v7 = v5 + 1; /*0x1010dfe40*/
    v8 = v6; /*0x1010dfe44*/
    if ( (v6 & 0x80u) == 0 ) /*0x1010dfe4a*/
    {
      if ( v16(a1, v5 + 1, v6) ) /*0x1010dfe55*/
        return 1; /*0x1010dfe5a*/
      v7 += v8; /*0x1010dfe60*/
      goto LABEL_4; /*0x1010dfe63*/
    }
    if ( v6 != 0x80 ) /*0x1010dfe70*/
      break; /*0x1010dfe70*/
    v11 = *(unsigned __int16 *)(v5 + 1); /*0x1010dfe95*/
    if ( v16(a1, v5 + 3, v11) ) /*0x1010dfea4*/
      return 1; /*0x1010dfea9*/
    v7 = &v5[v11 + 3]; /*0x1010dfeaf*/
LABEL_4:
    v6 = *v7; /*0x1010dfe30*/
    v5 = v7; /*0x1010dfe35*/
    if ( !*v7 ) /*0x1010dfe3a*/
      return 0; /*0x1010dfe3a*/
  }
  if ( v6 == 192 ) /*0x1010dfe7b*/
  {
    v9 = v20; /*0x1010dfe7d*/
    v10 = 16 * v20; /*0x1010dfe84*/
    v19 = 1610612768; /*0x1010dfe88*/
    goto LABEL_26; /*0x1010dfe90*/
  }
  v12 = 1610612768; /*0x1010dfeb9*/
  if ( (v6 & 1) != 0 ) /*0x1010dfec0*/
  {
    v12 = *(_DWORD *)(v5 + 1); /*0x1010dfec2*/
    v7 = v5 + 5; /*0x1010dfeca*/
  }
  if ( (v6 & 2) != 0 ) /*0x1010dfecf*/
  {
    v13 = *(_WORD *)v7; /*0x1010dfeea*/
    v7 += 2; /*0x1010dfeef*/
    v9 = v20; /*0x1010dfef3*/
    if ( (v6 & 4) == 0 ) /*0x1010dfef9*/
      goto LABEL_20; /*0x1010dfef9*/
LABEL_17:
    v14 = *(_WORD *)v7; /*0x1010dfedb*/
    v7 += 2; /*0x1010dfee0*/
    if ( (v6 & 8) != 0 ) /*0x1010dfee6*/
    {
LABEL_21:
      v9 = *(unsigned __int16 *)v7; /*0x1010dff01*/
      v7 += 2; /*0x1010dff06*/
    }
  }
  else
  {
    v13 = 0; /*0x1010dfed1*/
    v9 = v20; /*0x1010dfed3*/
    if ( (v6 & 4) != 0 ) /*0x1010dfed9*/
      goto LABEL_17; /*0x1010dfed9*/
LABEL_20:
    v14 = 0; /*0x1010dfefb*/
    if ( (v6 & 8) != 0 ) /*0x1010dfeff*/
      goto LABEL_21; /*0x1010dfeff*/
  }
  if ( (v6 & 0x10) != 0 ) /*0x1010dff0c*/
  {
    v13 = *(_WORD *)(a4 + 16 * (unsigned int)v13 + 8); /*0x1010dff5d*/
    if ( (v6 & 0x20) != 0 ) /*0x1010dff64*/
LABEL_24:
      v14 = *(_WORD *)(a4 + 16 * (unsigned int)v14 + 8); /*0x1010dff12*/
  }
  else if ( (v6 & 0x20) != 0 ) /*0x1010dff10*/
  {
    goto LABEL_24; /*0x1010dff10*/
  }
  v10 = 16 * v9; /*0x1010dff20*/
  LODWORD(v19) = v12; /*0x1010dff24*/
  WORD2(v19) = v13; /*0x1010dff27*/
  HIWORD(v19) = v14; /*0x1010dff2b*/
LABEL_26:
  v18[0] = a1; /*0x1010dff2f*/
  v18[1] = a2; /*0x1010dff37*/
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *))(a4 + v10 + 8))(*(_QWORD *)(a4 + v10), v18) ) /*0x1010dff43*/
  {
    v20 = v9 + 1; /*0x1010dff4e*/
    goto LABEL_4; /*0x1010dff52*/
  }
  return 1; /*0x1010dff78*/
}