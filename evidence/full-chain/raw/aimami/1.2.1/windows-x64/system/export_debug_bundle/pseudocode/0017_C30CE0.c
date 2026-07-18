// win 1.2.1 NEW export_debug_bundle 0x140c30ce0 d=1
__int64 __fastcall sub_140C30CE0(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  bool v3; // cf
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // [rsp+20h] [rbp-10h]

  v2 = *a1; /*0x140c30cfa*/
  v3 = v2 < 2; /*0x140c30cfd*/
  v4 = v2 - 2; /*0x140c30cfd*/
  result = 2; /*0x140c30d01*/
  if ( !v3 ) /*0x140c30d06*/
    result = v4; /*0x140c30d06*/
  switch ( result ) /*0x140c30d1e*/
  {
    case 0LL: /*0x140c30d1e*/
      return sub_1400F6E90(a1[1]); /*0x140c30ddf*/
    case 1LL: /*0x140c30d1e*/
      v15 = (_QWORD *)a1[1]; /*0x140c30de4*/
      v17 = v15; /*0x140c30def*/
      if ( *v15 == 1 ) /*0x140c30df3*/
      {
        sub_1400F6E90(v15[1]); /*0x140c30e55*/
      }
      else if ( !*v15 ) /*0x140c30de8*/
      {
        v16 = v15[2]; /*0x140c30dfe*/
        if ( v16 ) /*0x140c30e05*/
          sub_140001360(v15[1], v16, 1); /*0x140c30e15*/
      }
      v6 = 40; /*0x140c30e5b*/
      v8 = 8; /*0x140c30e60*/
      v7 = (__int64)v17; /*0x140c30e66*/
      return sub_140001360(v7, v6, v8); /*0x140c30e66*/
    case 2LL: /*0x140c30d1e*/
      v9 = a1[3]; /*0x140c30d3c*/
      if ( v9 ) /*0x140c30d43*/
        sub_140001360(a1[4], v9, 1); /*0x140c30d4f*/
      v10 = a1[9]; /*0x140c30d54*/
      if ( v10 != -1 && v10 ) /*0x140c30d61*/
        sub_140001360(a1[10], v10, 1); /*0x140c30d6d*/
      v11 = a1[7]; /*0x140c30d72*/
      v12 = a1[8]; /*0x140c30d76*/
      if ( v12 ) /*0x140c30d7d*/
      {
        v13 = (__int64 *)(v11 + 8); /*0x140c30d7f*/
        do /*0x140c30d97*/
        {
          v14 = *(v13 - 1); /*0x140c30d99*/
          if ( v14 ) /*0x140c30da0*/
            sub_140001360(*v13, v14, 1); /*0x140c30dab*/
          v13 += 3; /*0x140c30d90*/
          --v12; /*0x140c30d94*/
        }
        while ( v12 ); /*0x140c30d97*/
      }
      result = a1[6]; /*0x140c30db2*/
      if ( result ) /*0x140c30db9*/
        return sub_140001360(v11, 24 * result, 8); /*0x140c30dcc*/
      return result; /*0x140c30dcc*/
    case 3LL: /*0x140c30d1e*/
      v6 = a1[1]; /*0x140c30e1c*/
      result = 0x8000000000000005uLL; /*0x140c30e20*/
      if ( v6 < (__int64)0x8000000000000005uLL ) /*0x140c30e2d*/
        return result; /*0x140c30e2d*/
      goto LABEL_5; /*0x140c30e2d*/
    case 4LL: /*0x140c30d1e*/
      return sub_1400435E0(a1[1]); /*0x140c30e4c*/
    default:
      v6 = a1[1]; /*0x140c30d20*/
LABEL_5:
      if ( v6 ) /*0x140c30d27*/
      {
        v7 = a1[2]; /*0x140c30d2d*/
        v8 = 1; /*0x140c30d31*/
        return sub_140001360(v7, v6, v8); /*0x140c30e6a*/
      }
      return result;
  }
}