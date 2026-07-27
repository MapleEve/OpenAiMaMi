// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140413760(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // cl
  char v4; // r12
  bool v5; // si
  bool v6; // al
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rax
  bool v12; // cf
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BYTE *v16; // r14
  __int64 v17; // r13
  __int64 v18; // r8
  _BYTE *v19; // rcx
  __int128 *v20; // rdx
  __int64 v21; // r8
  _BYTE *v22; // rcx
  __int128 *v23; // rdx
  int v24; // eax
  bool v25; // zf
  bool v26; // si
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 result; // rax
  __int64 v32; // [rsp+40h] [rbp-40h]
  _QWORD v34[5]; // [rsp+50h] [rbp-30h] BYREF
  char v35; // [rsp+78h] [rbp-8h]
  __int16 v36; // [rsp+80h] [rbp+0h]
  __int128 v37; // [rsp+88h] [rbp+8h] BYREF
  __int64 v38; // [rsp+98h] [rbp+18h]
  __int64 v39; // [rsp+A0h] [rbp+20h]
  __int128 v40; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+38h]
  __int64 v42; // [rsp+C0h] [rbp+40h]

  v42 = -2; /*0x14041377b*/
  *(_QWORD *)&v40 = 0; /*0x140413787*/
  *((_QWORD *)&v40 + 1) = 8; /*0x14041378f*/
  v41 = 0; /*0x140413797*/
  v32 = 0; /*0x14041379f*/
  v34[0] = a2; /*0x1404137af*/
  v34[1] = a3; /*0x1404137b3*/
  v34[2] = 0; /*0x1404137b7*/
  v34[3] = a3; /*0x1404137bf*/
  v34[4] = 0xA0000000ALL; /*0x1404137cd*/
  v35 = 1; /*0x1404137d1*/
  v36 = 0; /*0x1404137d5*/
  v3 = 0; /*0x1404137db*/
  v4 = 0; /*0x1404137e8*/
  v5 = 0; /*0x1404137eb*/
  while ( (v3 & 1) == 0 ) /*0x1404137fe*/
  {
    v7 = v34[0]; /*0x140413804*/
    sub_140421EE0(&v37, v34); /*0x14041380e*/
    if ( (_DWORD)v37 == 1 ) /*0x140413818*/
    {
      v8 = v32; /*0x14041381e*/
      v32 = v38; /*0x140413822*/
      v9 = v38 - v8; /*0x140413826*/
      v10 = v8 + v7; /*0x140413829*/
      v11 = v38 - v8; /*0x14041382c*/
      v12 = v11 == 0; /*0x14041382f*/
      v13 = v11 - 1; /*0x14041382f*/
      if ( !v12 ) /*0x140413833*/
        goto LABEL_12; /*0x140413833*/
    }
    else
    {
      if ( HIBYTE(v36) ) /*0x140413844*/
        break; /*0x140413844*/
      HIBYTE(v36) = 1; /*0x14041384a*/
      v9 = a3 - v32; /*0x140413856*/
      if ( ((unsigned __int8)v36 | (a3 != v32)) != 1 ) /*0x140413861*/
        break; /*0x140413861*/
      v10 = v34[0] + v32; /*0x140413867*/
      v13 = v9 - 1; /*0x14041386e*/
      if ( v9 ) /*0x140413872*/
      {
LABEL_12:
        if ( *(_BYTE *)(v10 + v13) == 10 ) /*0x140413879*/
        {
          v9 -= 2; /*0x14041387b*/
          if ( !v13 || (v14 = v10, *(_BYTE *)(v10 + v9) != 13) ) /*0x14041388c*/
            v14 = 0; /*0x14041388e*/
          if ( v14 ) /*0x140413893*/
            v10 = v14; /*0x140413897*/
          else
            v9 = v13; /*0x140413893*/
        }
      }
    }
    v16 = (_BYTE *)sub_14033BC10(v10, v9); /*0x1404138a3*/
    v17 = v15; /*0x1404138a6*/
    switch ( v15 ) /*0x1404138ba*/
    {
      case 30LL: /*0x1404138ba*/
        v18 = 30; /*0x1404138bc*/
        v19 = v16; /*0x1404138c2*/
        v20 = &xmmword_14175304F; /*0x1404138c5*/
        goto LABEL_27; /*0x1404138cc*/
      case 36LL: /*0x1404138ba*/
        v18 = 36; /*0x140413908*/
        v19 = v16; /*0x14041390e*/
        v20 = (__int128 *)"# <<< aimami-relay managed end (top)# >>> aimami-relay managed start (top, DO NOT EDIT MANUALL" /*0x140413911*/
                          "Y)router-takeover-backup.json";
        goto LABEL_27; /*0x140413911*/
      case 39LL: /*0x1404138ba*/
        v18 = 39; /*0x1404138ce*/
        v19 = v16; /*0x1404138d4*/
        v20 = &xmmword_141753237; /*0x1404138d7*/
LABEL_27:
        v24 = sub_1416847B0(v19, v20, v18); /*0x140413918*/
        v25 = v24 == 0; /*0x14041391d*/
        v6 = v24 != 0; /*0x14041391f*/
        if ( !v25 && !v5 ) /*0x140413928*/
          goto LABEL_32; /*0x14041392c*/
        goto LABEL_4; /*0x14041392c*/
      case 55LL: /*0x1404138ba*/
        v21 = 55; /*0x140413934*/
        v22 = v16; /*0x14041393a*/
        v23 = &xmmword_141752F5B; /*0x14041393d*/
        goto LABEL_31; /*0x140413944*/
      case 60LL: /*0x1404138ba*/
        v21 = 60; /*0x140413946*/
        v22 = v16; /*0x14041394c*/
        v23 = (__int128 *)"# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)router-takeover-backup.json"; /*0x14041394f*/
        goto LABEL_31; /*0x14041394f*/
      case 64LL: /*0x1404138ba*/
        v21 = 64; /*0x1404138e0*/
        v22 = v16; /*0x1404138e6*/
        v23 = &xmmword_1417530C4; /*0x1404138e9*/
LABEL_31:
        v26 = (unsigned int)sub_1416847B0(v22, v23, v21) == 0 || v5; /*0x140413956*/
        v6 = 1; /*0x140413963*/
        if ( !v26 ) /*0x140413969*/
          goto LABEL_32; /*0x140413969*/
        goto LABEL_4; /*0x140413969*/
      default:
        v6 = 1; /*0x1404138f2*/
        if ( v5 ) /*0x1404138f4*/
          goto LABEL_4; /*0x1404138f8*/
        if ( !v15 ) /*0x140413901*/
          goto LABEL_37; /*0x140413901*/
LABEL_32:
        if ( *v16 == 91 && v16[v17 - 1] == 93 ) /*0x14041397b*/
        {
          if ( v17 == 1 || (char)v16[1] <= -65 ) /*0x14041398c*/
            sub_1416C2F60((_DWORD)v16, v17, 1, v17 - 1, (__int64)&off_141782B88); /*0x140413a50*/
LABEL_2:
          v4 = 1; /*0x1404137f0*/
          goto LABEL_3; /*0x1404137f0*/
        }
LABEL_37:
        if ( (v4 & 1) != 0 ) /*0x1404139a4*/
          goto LABEL_2; /*0x1404139a4*/
        sub_140415B00(&v37, v16, v17); /*0x1404139b3*/
        if ( (_QWORD)v37 != -1 ) /*0x1404139c1*/
        {
          v39 = v37; /*0x1404139c3*/
          v27 = v41; /*0x1404139c7*/
          if ( v41 == (_QWORD)v40 ) /*0x1404139cf*/
            sub_141689AB0(&v40); /*0x1404139dd*/
          v28 = *((_QWORD *)&v40 + 1); /*0x1404139e3*/
          v29 = 3 * v27; /*0x1404139e7*/
          *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8 * v29 + 16) = v38; /*0x1404139ef*/
          *(_OWORD *)(v28 + 8 * v29) = v37; /*0x1404139f8*/
          v41 = v27 + 1; /*0x1404139ff*/
        }
        v4 = 0; /*0x140413a03*/
LABEL_3:
        v6 = 0; /*0x1404137f3*/
LABEL_4:
        v3 = HIBYTE(v36); /*0x1404137f5*/
        v5 = v6; /*0x1404137f9*/
        break; /*0x1404137f9*/
    }
  }
  result = v41; /*0x140413a0b*/
  *(_QWORD *)(a1 + 16) = v41; /*0x140413a13*/
  *(_OWORD *)a1 = v40; /*0x140413a1b*/
  return result; /*0x140413a1e*/
}