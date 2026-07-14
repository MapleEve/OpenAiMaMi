// win 1.1.8 delete_sessions node va=0x140214640 depth=1
// sub_140214640
__int64 __fastcall sub_140214640(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  _BYTE v8[31]; // [rsp+51h] [rbp-2Fh]
  _QWORD v9[3]; // [rsp+70h] [rbp-10h] BYREF
  _QWORD v10[6]; // [rsp+88h] [rbp+8h] BYREF
  __int128 v11; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+48h]
  __int128 v13; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v14; // [rsp+E0h] [rbp+60h]
  char v15; // [rsp+EFh] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+F0h] [rbp+70h]

  v16 = -2; /*0x140214657*/
  v3 = *a2; /*0x140214662*/
  v4 = a2[1]; /*0x140214665*/
  v5 = a2[2]; /*0x140214669*/
  v6 = a2[3]; /*0x14021466d*/
  sub_1403801E0(&v11); /*0x140214675*/
  if ( __OFSUB__(0, (_QWORD)v11) ) /*0x14021467c*/
  {
    v10[1] = v3; /*0x14021468a*/
    v10[2] = v4; /*0x14021468e*/
    v10[3] = v5; /*0x140214692*/
    v10[4] = v6; /*0x140214696*/
    v10[5] = *((_QWORD *)&v11 + 1); /*0x14021469a*/
    v10[0] = 0x8000000000000008uLL; /*0x1402146a8*/
    *(_QWORD *)&v13 = 0; /*0x1402146ac*/
    *((_QWORD *)&v13 + 1) = 1; /*0x1402146b4*/
    v14 = 0; /*0x1402146bc*/
    v9[2] = 1610612768; /*0x1402146c4*/
    v9[0] = &v13; /*0x1402146d0*/
    v9[1] = &off_141324BD8; /*0x1402146db*/
    if ( (unsigned __int8)sub_140E156C0((__int64)v10, v9) ) /*0x1402146e7*/
      sub_1412AD780((__int64)aADisplayImplem_2, 55, (__int64)&v15, (__int64)&unk_141324F48, (__int64)&off_141324D80); /*0x140214768*/
    *(_OWORD *)&v8[7] = v13; /*0x1402146f9*/
    *(_QWORD *)&v8[23] = v14; /*0x1402146fd*/
    sub_1401E9DB0(v10); /*0x140214705*/
    *(_BYTE *)a1 = 3; /*0x14021470a*/
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v8; /*0x140214715*/
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v8[15]; /*0x140214719*/
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v12; /*0x140214723*/
    *(_OWORD *)(a1 + 8) = v11; /*0x14021472b*/
    *(_BYTE *)a1 = 6; /*0x14021472f*/
  }
  return a1; /*0x140214735*/
}