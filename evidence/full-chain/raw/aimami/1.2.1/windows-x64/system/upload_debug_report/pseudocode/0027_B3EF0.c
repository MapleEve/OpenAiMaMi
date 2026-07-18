// win 1.2.1 NEW upload_debug_report 0x1402b3ef0 d=2
__int64 __fastcall sub_1402B3EF0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rsi
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  void (__fastcall **v13)(__int64); // [rsp+20h] [rbp-10h]
  __int64 v14; // [rsp+20h] [rbp-10h]
  __int64 v15; // [rsp+28h] [rbp-8h]
  __int64 v16; // [rsp+28h] [rbp-8h]

  v1 = *a1; /*0x1402b3f03*/
  result = 10; /*0x1402b3f16*/
  if ( *a1 < 0 ) /*0x1402b3f1b*/
    result = *a1 ^ 0x8000000000000000uLL; /*0x1402b3f1b*/
  switch ( result ) /*0x1402b3f37*/
  {
    case 0LL: /*0x1402b3f37*/
      return sub_1402B2BC0(a1 + 1); /*0x1402b40a0*/
    case 1LL: /*0x1402b3f37*/
    case 2LL: /*0x1402b3f37*/
    case 4LL: /*0x1402b3f37*/
    case 35LL: /*0x1402b3f37*/
      v3 = a1[1]; /*0x1402b3f39*/
      if ( v3 ) /*0x1402b3f40*/
      {
        v4 = a1[2]; /*0x1402b3f46*/
        goto LABEL_6; /*0x1402b3f46*/
      }
      return result; /*0x1402b3f40*/
    case 5LL: /*0x1402b3f37*/
      v10 = (__int64 *)a1[1]; /*0x1402b4079*/
      v11 = *v10; /*0x1402b407d*/
      v16 = (__int64)v10; /*0x1402b4084*/
      if ( *v10 != 1 ) /*0x1402b4088*/
        goto LABEL_33; /*0x1402b4088*/
      goto LABEL_39; /*0x1402b4088*/
    case 6LL: /*0x1402b3f37*/
    case 7LL: /*0x1402b3f37*/
    case 24LL: /*0x1402b3f37*/
      v5 = a1[1]; /*0x1402b3f5b*/
      goto LABEL_8; /*0x1402b3f5b*/
    case 8LL: /*0x1402b3f37*/
      v10 = (__int64 *)a1[5]; /*0x1402b40a5*/
      v11 = *v10; /*0x1402b40a9*/
      v16 = (__int64)v10; /*0x1402b40b0*/
      if ( *v10 == 1 ) /*0x1402b40b4*/
      {
LABEL_39:
        sub_1400F6E90(v10[1]); /*0x1402b4100*/
      }
      else
      {
LABEL_33:
        if ( !v11 ) /*0x1402b40b9*/
        {
          v12 = *(_QWORD *)(v16 + 16); /*0x1402b40bf*/
          if ( v12 ) /*0x1402b40c6*/
            sub_140001360(*(_QWORD *)(v16 + 8), v12, 1); /*0x1402b40d6*/
        }
      }
      v7 = 40; /*0x1402b410a*/
      v8 = 8; /*0x1402b410f*/
      return sub_140001360(v16, v7, v8); /*0x1402b410f*/
    case 9LL: /*0x1402b3f37*/
      v15 = a1[1]; /*0x1402b3fc5*/
      v13 = (void (__fastcall **)(__int64))a1[2]; /*0x1402b3fcd*/
      if ( *v13 ) /*0x1402b3fd1*/
        goto LABEL_17; /*0x1402b3fd7*/
      goto LABEL_18; /*0x1402b3fd7*/
    case 10LL: /*0x1402b3f37*/
      if ( v1 ) /*0x1402b4049*/
      {
        v9 = a1; /*0x1402b4055*/
        result = sub_140001360(a1[1], v1, 1); /*0x1402b405b*/
        a1 = v9; /*0x1402b4060*/
      }
      v3 = a1[3]; /*0x1402b4063*/
      if ( !v3 ) /*0x1402b406a*/
        return result; /*0x1402b406a*/
      v4 = a1[4]; /*0x1402b4070*/
      goto LABEL_6; /*0x1402b4074*/
    case 12LL: /*0x1402b3f37*/
      result = a1[2]; /*0x1402b4004*/
      v16 = result; /*0x1402b4008*/
      if ( !result ) /*0x1402b400f*/
        return result; /*0x1402b400f*/
      v14 = a1[3]; /*0x1402b4019*/
      if ( *(_QWORD *)v14 ) /*0x1402b401d*/
        (*(void (__fastcall **)(__int64))v14)(result); /*0x1402b4029*/
      result = v14; /*0x1402b402c*/
      v7 = *(_QWORD *)(v14 + 8); /*0x1402b4030*/
      if ( !v7 ) /*0x1402b4037*/
        return result; /*0x1402b4037*/
      v8 = *(_QWORD *)(v14 + 16); /*0x1402b403d*/
      return sub_140001360(v16, v7, v8); /*0x1402b411f*/
    case 17LL: /*0x1402b3f37*/
      if ( *((_DWORD *)a1 + 2) > 2u ) /*0x1402b3fa8*/
        return result; /*0x1402b3fa8*/
      v3 = a1[2]; /*0x1402b3fae*/
      if ( !v3 ) /*0x1402b3fb5*/
        return result; /*0x1402b3fb5*/
      v4 = a1[3]; /*0x1402b3fbb*/
LABEL_6:
      result = sub_140001360(v4, v3, 1); /*0x1402b3f4a*/
      break; /*0x1402b3f56*/
    case 18LL: /*0x1402b3f37*/
    case 20LL: /*0x1402b3f37*/
      if ( *((_DWORD *)a1 + 2) >= 2u ) /*0x1402b3f6e*/
        return sub_1400F6E90(a1[2]); /*0x1402b3f7e*/
      return result; /*0x1402b3f7e*/
    case 19LL: /*0x1402b3f37*/
      v5 = a1[1]; /*0x1402b40ec*/
      if ( !v5 ) /*0x1402b40f3*/
        return result; /*0x1402b40f3*/
LABEL_8:
      result = sub_1400F6E90(v5); /*0x1402b3f5f*/
      break; /*0x1402b3f65*/
    case 28LL: /*0x1402b3f37*/
      result = sub_141395C50(a1 + 1); /*0x1402b40e7*/
      break; /*0x1402b40e7*/
    case 31LL: /*0x1402b3f37*/
      v15 = a1[1]; /*0x1402b3f87*/
      v13 = (void (__fastcall **)(__int64))a1[2]; /*0x1402b3f8f*/
      if ( *v13 ) /*0x1402b3f93*/
LABEL_17:
        (*v13)(v15); /*0x1402b3fd9*/
LABEL_18:
      result = (__int64)v13; /*0x1402b3fe0*/
      v6 = (__int64)v13[1]; /*0x1402b3fe8*/
      if ( v6 ) /*0x1402b3fef*/
        result = sub_140001360(v15, v6, (__int64)v13[2]); /*0x1402b3fff*/
      break; /*0x1402b3fff*/
    default:
      return result;
  }
  return result; /*0x1402b3f50*/
}