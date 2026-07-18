// win 1.2.1 NEW upload_debug_report 0x1403d2e50 d=1
__int64 __fastcall sub_1403D2E50(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned __int8 *v7; // rdx
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  _OWORD v14[4]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v15[31]; // [rsp+89h] [rbp+9h]
  _QWORD v16[3]; // [rsp+A8h] [rbp+28h] BYREF
  _QWORD v17[6]; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v18; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v19; // [rsp+100h] [rbp+80h]
  char v20; // [rsp+10Fh] [rbp+8Fh] BYREF
  __int64 v21; // [rsp+110h] [rbp+90h]

  v21 = -2; /*0x1403d2e67*/
  v3 = *a2; /*0x1403d2e75*/
  v4 = a2[1]; /*0x1403d2e78*/
  v5 = a2[2]; /*0x1403d2e7c*/
  v6 = a2[3]; /*0x1403d2e80*/
  if ( (sub_1405FE300(a2) & 1) != 0 ) /*0x1403d2e8e*/
    goto LABEL_6; /*0x1403d2e8e*/
  v8 = *v7; /*0x1403d2e90*/
  if ( v8 == 4 ) /*0x1403d2e96*/
  {
    sub_140A1F3A0(v14, *((_QWORD *)v7 + 2), *((_QWORD *)v7 + 3)); /*0x1403d2f77*/
    if ( *(_QWORD *)&v14[0] == -1 ) /*0x1403d2f81*/
      goto LABEL_5; /*0x1403d2f81*/
LABEL_9:
    v10 = v14[0]; /*0x1403d2f87*/
    v11 = v14[1]; /*0x1403d2f8b*/
    v12 = v14[2]; /*0x1403d2f8f*/
    *(_OWORD *)(a1 + 48) = v14[3]; /*0x1403d2f97*/
    *(_OWORD *)(a1 + 32) = v12; /*0x1403d2f9b*/
    *(_OWORD *)(a1 + 16) = v11; /*0x1403d2f9f*/
    *(_OWORD *)a1 = v10; /*0x1403d2fa3*/
    return a1; /*0x1403d2fa3*/
  }
  if ( v8 != 5 ) /*0x1403d2e9f*/
  {
    v7 = (unsigned __int8 *)sub_1415CA890(v7, &v20, &unk_1416C7A48); /*0x1403d3000*/
    goto LABEL_6; /*0x1403d3003*/
  }
  sub_1402FE540(v14, v7 + 8); /*0x1403d2ead*/
  if ( *(_QWORD *)&v14[0] != -1 ) /*0x1403d2eb7*/
    goto LABEL_9; /*0x1403d2eb7*/
LABEL_5:
  v7 = *((unsigned __int8 **)&v14[0] + 1); /*0x1403d2ebd*/
LABEL_6:
  v17[1] = v3; /*0x1403d2ec1*/
  v17[2] = v4; /*0x1403d2ec5*/
  v17[3] = v5; /*0x1403d2ec9*/
  v17[4] = v6; /*0x1403d2ecd*/
  v17[5] = v7; /*0x1403d2ed1*/
  v17[0] = 0x8000000000000008uLL; /*0x1403d2edf*/
  *(_QWORD *)&v18 = 0; /*0x1403d2ee3*/
  *((_QWORD *)&v18 + 1) = 1; /*0x1403d2eeb*/
  v19 = 0; /*0x1403d2ef3*/
  v16[2] = 1610612768; /*0x1403d2efe*/
  v16[0] = &v18; /*0x1403d2f0a*/
  v16[1] = &off_141685470; /*0x1403d2f15*/
  if ( (unsigned __int8)sub_141170260((__int64)v17, v16) ) /*0x1403d2f21*/
    sub_1415F0BC0( /*0x1403d2fdf*/
      (unsigned int)aADisplayImplem_3,
      55,
      (unsigned int)&v20,
      (unsigned int)&unk_141683868,
      (__int64)&off_141685528);
  *(_OWORD *)&v15[7] = v18; /*0x1403d2f3a*/
  *(_QWORD *)&v15[23] = v19; /*0x1403d2f3e*/
  sub_1402B3EF0(v17); /*0x1403d2f46*/
  *(_BYTE *)(a1 + 8) = 3; /*0x1403d2f4b*/
  v9 = *(_OWORD *)&v15[15]; /*0x1403d2f53*/
  *(_OWORD *)(a1 + 9) = *(_OWORD *)v15; /*0x1403d2f57*/
  *(_OWORD *)(a1 + 24) = v9; /*0x1403d2f5b*/
  *(_QWORD *)a1 = -1; /*0x1403d2f5f*/
  return a1; /*0x1403d2fa9*/
}