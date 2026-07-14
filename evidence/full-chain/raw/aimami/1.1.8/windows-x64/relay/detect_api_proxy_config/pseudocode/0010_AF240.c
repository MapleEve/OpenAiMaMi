// win 1.1.8 detect_api_proxy_config node va=0x1409af240 depth=1
// AF240
__int64 __fastcall sub_1409AF240(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64); // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  void (__fastcall **v13)(__int64); // [rsp+20h] [rbp-10h]
  __int64 v14; // [rsp+20h] [rbp-10h]
  __int64 v15; // [rsp+28h] [rbp-8h]
  _QWORD *v16; // [rsp+28h] [rbp-8h]

  v1 = *a1; /*0x1409af253*/
  result = 10; /*0x1409af266*/
  if ( *a1 < 0 ) /*0x1409af26b*/
    result = *a1 ^ 0x8000000000000000uLL; /*0x1409af26b*/
  switch ( result ) /*0x1409af287*/
  {
    case 0LL: /*0x1409af287*/
      result = a1[1]; /*0x1409af3ed*/
      if ( result == 6 ) /*0x1409af3f5*/
      {
        v15 = a1[2]; /*0x1409af4c1*/
        v13 = (void (__fastcall **)(__int64))a1[3]; /*0x1409af4c9*/
        if ( !*v13 ) /*0x1409af4d3*/
          goto LABEL_18; /*0x1409af4d3*/
        goto LABEL_17; /*0x1409af4d3*/
      }
      if ( (_DWORD)result == 5 ) /*0x1409af3fe*/
      {
        v10 = (_QWORD *)a1[2]; /*0x1409af46d*/
        v11 = *v10; /*0x1409af471*/
        v16 = v10; /*0x1409af478*/
        if ( *v10 == 1 ) /*0x1409af47c*/
          goto LABEL_30; /*0x1409af47c*/
        goto LABEL_42; /*0x1409af47c*/
      }
      if ( !result ) /*0x1409af403*/
      {
        v15 = a1[2]; /*0x1409af409*/
        v13 = (void (__fastcall **)(__int64))a1[3]; /*0x1409af411*/
        if ( !*v13 ) /*0x1409af41b*/
          goto LABEL_18; /*0x1409af41b*/
        goto LABEL_17; /*0x1409af41b*/
      }
      return result; /*0x1409af403*/
    case 1LL: /*0x1409af287*/
    case 2LL: /*0x1409af287*/
    case 4LL: /*0x1409af287*/
    case 35LL: /*0x1409af287*/
      v3 = a1[1]; /*0x1409af289*/
      if ( v3 ) /*0x1409af290*/
      {
        v4 = a1[2]; /*0x1409af296*/
        goto LABEL_6; /*0x1409af296*/
      }
      return result; /*0x1409af290*/
    case 5LL: /*0x1409af287*/
      v10 = (_QWORD *)a1[1]; /*0x1409af3c9*/
      v11 = *v10; /*0x1409af3cd*/
      v16 = v10; /*0x1409af3d4*/
      if ( *v10 != 1 ) /*0x1409af3d8*/
        goto LABEL_42; /*0x1409af3d8*/
      goto LABEL_30; /*0x1409af3d8*/
    case 6LL: /*0x1409af287*/
    case 7LL: /*0x1409af287*/
    case 24LL: /*0x1409af287*/
      v5 = a1[1]; /*0x1409af2ab*/
      goto LABEL_8; /*0x1409af2ab*/
    case 8LL: /*0x1409af287*/
      v10 = (_QWORD *)a1[5]; /*0x1409af42d*/
      v11 = *v10; /*0x1409af431*/
      v16 = v10; /*0x1409af438*/
      if ( *v10 == 1 ) /*0x1409af43c*/
      {
LABEL_30:
        sub_140140280(v10[1]); /*0x1409af3de*/
      }
      else
      {
LABEL_42:
        if ( !v11 ) /*0x1409af481*/
        {
          v12 = v16[2]; /*0x1409af487*/
          if ( v12 ) /*0x1409af48e*/
            sub_140001370(v16[1], v12, 1); /*0x1409af49e*/
        }
      }
      v7 = 40; /*0x1409af4a3*/
      v8 = 8; /*0x1409af4a8*/
      return sub_140001370(v16, v7, v8); /*0x1409af4a8*/
    case 9LL: /*0x1409af287*/
      v15 = a1[1]; /*0x1409af315*/
      v13 = (void (__fastcall **)(__int64))a1[2]; /*0x1409af31d*/
      if ( *v13 ) /*0x1409af321*/
        goto LABEL_17; /*0x1409af327*/
      goto LABEL_18; /*0x1409af327*/
    case 10LL: /*0x1409af287*/
      if ( v1 ) /*0x1409af399*/
      {
        v9 = a1; /*0x1409af3a5*/
        result = sub_140001370(a1[1], v1, 1); /*0x1409af3ab*/
        a1 = v9; /*0x1409af3b0*/
      }
      v3 = a1[3]; /*0x1409af3b3*/
      if ( !v3 ) /*0x1409af3ba*/
        return result; /*0x1409af3ba*/
      v4 = a1[4]; /*0x1409af3c0*/
      goto LABEL_6; /*0x1409af3c4*/
    case 12LL: /*0x1409af287*/
      result = a1[2]; /*0x1409af354*/
      v16 = (_QWORD *)result; /*0x1409af358*/
      if ( !result ) /*0x1409af35f*/
        return result; /*0x1409af35f*/
      v14 = a1[3]; /*0x1409af369*/
      if ( *(_QWORD *)v14 ) /*0x1409af36d*/
        (*(void (__fastcall **)(__int64))v14)(result); /*0x1409af379*/
      result = v14; /*0x1409af37c*/
      v7 = *(_QWORD *)(v14 + 8); /*0x1409af380*/
      if ( !v7 ) /*0x1409af387*/
        return result; /*0x1409af387*/
      v8 = *(_QWORD *)(v14 + 16); /*0x1409af38d*/
      return sub_140001370(v16, v7, v8); /*0x1409af4b8*/
    case 17LL: /*0x1409af287*/
      if ( *((_DWORD *)a1 + 2) > 2u ) /*0x1409af2f8*/
        return result; /*0x1409af2f8*/
      v3 = a1[2]; /*0x1409af2fe*/
      if ( !v3 ) /*0x1409af305*/
        return result; /*0x1409af305*/
      v4 = a1[3]; /*0x1409af30b*/
LABEL_6:
      result = sub_140001370(v4, v3, 1); /*0x1409af29a*/
      break; /*0x1409af2a6*/
    case 18LL: /*0x1409af287*/
    case 20LL: /*0x1409af287*/
      if ( *((_DWORD *)a1 + 2) >= 2u ) /*0x1409af2be*/
        return sub_140140280(a1[2]); /*0x1409af2ce*/
      return result; /*0x1409af2ce*/
    case 19LL: /*0x1409af287*/
      v5 = a1[1]; /*0x1409af459*/
      if ( !v5 ) /*0x1409af460*/
        return result; /*0x1409af460*/
LABEL_8:
      result = sub_140140280(v5); /*0x1409af2af*/
      break; /*0x1409af2b5*/
    case 28LL: /*0x1409af287*/
      result = sub_14105AC40(a1 + 1); /*0x1409af454*/
      break; /*0x1409af454*/
    case 31LL: /*0x1409af287*/
      v15 = a1[1]; /*0x1409af2d7*/
      v13 = (void (__fastcall **)(__int64))a1[2]; /*0x1409af2df*/
      if ( *v13 ) /*0x1409af2e3*/
LABEL_17:
        (*v13)(v15); /*0x1409af329*/
LABEL_18:
      result = (__int64)v13; /*0x1409af330*/
      v6 = v13[1]; /*0x1409af338*/
      if ( v6 ) /*0x1409af33f*/
        result = sub_140001370(v15, v6, v13[2]); /*0x1409af34f*/
      break; /*0x1409af34f*/
    default:
      return result;
  }
  return result; /*0x1409af2a0*/
}