// win 1.1.8 set_codex_router_no_account_mode node va=0x1409b6100 depth=1
// B6100
__int64 __fastcall sub_1409B6100(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  bool v3; // cf
  __int64 v4; // rcx
  __int64 result; // rax
  signed __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // [rsp+20h] [rbp-10h]

  v2 = *a1; /*0x1409b611a*/
  v3 = v2 < 2; /*0x1409b611d*/
  v4 = v2 - 2; /*0x1409b611d*/
  result = 2; /*0x1409b6121*/
  if ( !v3 ) /*0x1409b6126*/
    result = v4; /*0x1409b6126*/
  switch ( result ) /*0x1409b613e*/
  {
    case 0LL: /*0x1409b613e*/
      return sub_140140280(a1[1]); /*0x1409b61ff*/
    case 1LL: /*0x1409b613e*/
      v14 = (_QWORD *)a1[1]; /*0x1409b6204*/
      v16 = v14; /*0x1409b620f*/
      if ( *v14 == 1 ) /*0x1409b6213*/
      {
        sub_140140280(v14[1]); /*0x1409b6275*/
      }
      else if ( !*v14 ) /*0x1409b6208*/
      {
        v15 = v14[2]; /*0x1409b621e*/
        if ( v15 ) /*0x1409b6225*/
          sub_140001370(v14[1], v15, 1); /*0x1409b6235*/
      }
      v6 = 40; /*0x1409b627b*/
      v8 = 8; /*0x1409b6280*/
      v7 = v16; /*0x1409b6286*/
      return sub_140001370(v7, v6, v8); /*0x1409b6286*/
    case 2LL: /*0x1409b613e*/
      v9 = a1[3]; /*0x1409b615c*/
      if ( v9 ) /*0x1409b6163*/
        sub_140001370(a1[4], v9, 1); /*0x1409b616f*/
      if ( !__OFSUB__(-(__int64)a1[9], 1) && a1[9] ) /*0x1409b6178*/
        sub_140001370(a1[10], a1[9], 1); /*0x1409b618c*/
      v10 = a1[7]; /*0x1409b6191*/
      v11 = a1[8]; /*0x1409b6195*/
      if ( v11 ) /*0x1409b619c*/
      {
        v12 = (_QWORD *)(v10 + 8); /*0x1409b619e*/
        do /*0x1409b61b7*/
        {
          v13 = *(v12 - 1); /*0x1409b61b9*/
          if ( v13 ) /*0x1409b61c0*/
            sub_140001370(*v12, v13, 1); /*0x1409b61cb*/
          v12 += 3; /*0x1409b61b0*/
          --v11; /*0x1409b61b4*/
        }
        while ( v11 ); /*0x1409b61b7*/
      }
      result = a1[6]; /*0x1409b61d2*/
      if ( result ) /*0x1409b61d9*/
        return sub_140001370(v10, 24 * result, 8); /*0x1409b61ec*/
      return result; /*0x1409b61ec*/
    case 3LL: /*0x1409b613e*/
      v6 = a1[1]; /*0x1409b623c*/
      result = 0x8000000000000005uLL; /*0x1409b6240*/
      if ( v6 < (__int64)0x8000000000000005uLL ) /*0x1409b624d*/
        return result; /*0x1409b624d*/
      goto LABEL_5; /*0x1409b624d*/
    case 4LL: /*0x1409b613e*/
      return sub_140140100(a1[1]); /*0x1409b626c*/
    default:
      v6 = a1[1]; /*0x1409b6140*/
LABEL_5:
      if ( v6 ) /*0x1409b6147*/
      {
        v7 = (_QWORD *)a1[2]; /*0x1409b614d*/
        v8 = 1; /*0x1409b6151*/
        return sub_140001370(v7, v6, v8); /*0x1409b628a*/
      }
      return result;
  }
}