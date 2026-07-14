// win 1.1.8 delete_sessions node va=0x1401e9db0 depth=2
// E9DB0
__int64 __fastcall sub_1401E9DB0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  void (__fastcall **v12)(__int64); // [rsp+20h] [rbp-10h]
  __int64 v13; // [rsp+20h] [rbp-10h]
  __int64 v14; // [rsp+28h] [rbp-8h]
  __int64 v15; // [rsp+28h] [rbp-8h]

  v1 = *a1; /*0x1401e9dc3*/
  result = 10; /*0x1401e9dd6*/
  if ( *a1 < 0 ) /*0x1401e9ddb*/
    result = *a1 ^ 0x8000000000000000uLL; /*0x1401e9ddb*/
  switch ( result ) /*0x1401e9df7*/
  {
    case 0LL: /*0x1401e9df7*/
      result = a1[1]; /*0x1401e9f4e*/
      if ( result == 6 ) /*0x1401e9f56*/
      {
        v14 = a1[2]; /*0x1401ea02b*/
        v12 = (void (__fastcall **)(__int64))a1[3]; /*0x1401ea033*/
        if ( !*v12 ) /*0x1401ea03d*/
          goto LABEL_16; /*0x1401ea03d*/
        goto LABEL_15; /*0x1401ea03d*/
      }
      if ( (_DWORD)result == 5 ) /*0x1401e9f5f*/
      {
        v9 = (__int64 *)a1[2]; /*0x1401e9fd7*/
        v10 = *v9; /*0x1401e9fdb*/
        v15 = (__int64)v9; /*0x1401e9fe2*/
        if ( *v9 == 1 ) /*0x1401e9fe6*/
          goto LABEL_28; /*0x1401e9fe6*/
        goto LABEL_41; /*0x1401e9fe6*/
      }
      if ( !result ) /*0x1401e9f64*/
      {
        v14 = a1[2]; /*0x1401e9f6a*/
        v12 = (void (__fastcall **)(__int64))a1[3]; /*0x1401e9f72*/
        if ( !*v12 ) /*0x1401e9f7c*/
          goto LABEL_16; /*0x1401e9f7c*/
        goto LABEL_15; /*0x1401e9f7c*/
      }
      return result; /*0x1401e9f64*/
    case 1LL: /*0x1401e9df7*/
    case 2LL: /*0x1401e9df7*/
    case 4LL: /*0x1401e9df7*/
    case 35LL: /*0x1401e9df7*/
      v3 = a1[1]; /*0x1401e9df9*/
      if ( v3 ) /*0x1401e9e00*/
      {
        v4 = a1[2]; /*0x1401e9e06*/
        goto LABEL_6; /*0x1401e9e06*/
      }
      return result; /*0x1401e9e00*/
    case 5LL: /*0x1401e9df7*/
      v9 = (__int64 *)a1[1]; /*0x1401e9f2a*/
      v10 = *v9; /*0x1401e9f2e*/
      v15 = (__int64)v9; /*0x1401e9f35*/
      if ( *v9 != 1 ) /*0x1401e9f39*/
        goto LABEL_41; /*0x1401e9f39*/
      goto LABEL_28; /*0x1401e9f39*/
    case 6LL: /*0x1401e9df7*/
    case 7LL: /*0x1401e9df7*/
    case 24LL: /*0x1401e9df7*/
      goto LABEL_38;
    case 8LL: /*0x1401e9df7*/
      v9 = (__int64 *)a1[5]; /*0x1401e9f8e*/
      v10 = *v9; /*0x1401e9f92*/
      v15 = (__int64)v9; /*0x1401e9f99*/
      if ( *v9 == 1 ) /*0x1401e9f9d*/
      {
LABEL_28:
        sub_1400450F0(v9 + 1); /*0x1401e9f3f*/
      }
      else
      {
LABEL_41:
        if ( !v10 ) /*0x1401e9feb*/
        {
          v11 = *(_QWORD *)(v15 + 16); /*0x1401e9ff1*/
          if ( v11 ) /*0x1401e9ff8*/
            sub_140001370(*(_QWORD *)(v15 + 8), v11, 1); /*0x1401ea008*/
        }
      }
      v6 = 40; /*0x1401ea00d*/
      v7 = 8; /*0x1401ea012*/
      return sub_140001370(v15, v6, v7); /*0x1401ea012*/
    case 9LL: /*0x1401e9df7*/
      v14 = a1[1]; /*0x1401e9e76*/
      v12 = (void (__fastcall **)(__int64))a1[2]; /*0x1401e9e7e*/
      if ( *v12 ) /*0x1401e9e82*/
        goto LABEL_15; /*0x1401e9e88*/
      goto LABEL_16; /*0x1401e9e88*/
    case 10LL: /*0x1401e9df7*/
      if ( v1 ) /*0x1401e9efa*/
      {
        v8 = a1; /*0x1401e9f06*/
        result = sub_140001370(a1[1], v1, 1); /*0x1401e9f0c*/
        a1 = v8; /*0x1401e9f11*/
      }
      v3 = a1[3]; /*0x1401e9f14*/
      if ( !v3 ) /*0x1401e9f1b*/
        return result; /*0x1401e9f1b*/
      v4 = a1[4]; /*0x1401e9f21*/
      goto LABEL_6; /*0x1401e9f25*/
    case 12LL: /*0x1401e9df7*/
      result = a1[2]; /*0x1401e9eb5*/
      v15 = result; /*0x1401e9eb9*/
      if ( !result ) /*0x1401e9ec0*/
        return result; /*0x1401e9ec0*/
      v13 = a1[3]; /*0x1401e9eca*/
      if ( *(_QWORD *)v13 ) /*0x1401e9ece*/
        (*(void (__fastcall **)(__int64))v13)(result); /*0x1401e9eda*/
      result = v13; /*0x1401e9edd*/
      v6 = *(_QWORD *)(v13 + 8); /*0x1401e9ee1*/
      if ( !v6 ) /*0x1401e9ee8*/
        return result; /*0x1401e9ee8*/
      v7 = *(_QWORD *)(v13 + 16); /*0x1401e9eee*/
      return sub_140001370(v15, v6, v7); /*0x1401ea022*/
    case 17LL: /*0x1401e9df7*/
      if ( *((_DWORD *)a1 + 2) > 2u ) /*0x1401e9e59*/
        return result; /*0x1401e9e59*/
      v3 = a1[2]; /*0x1401e9e5f*/
      if ( !v3 ) /*0x1401e9e66*/
        return result; /*0x1401e9e66*/
      v4 = a1[3]; /*0x1401e9e6c*/
LABEL_6:
      result = sub_140001370(v4, v3, 1); /*0x1401e9e0a*/
      break; /*0x1401e9e16*/
    case 18LL: /*0x1401e9df7*/
    case 20LL: /*0x1401e9df7*/
      if ( *((_DWORD *)a1 + 2) >= 2u ) /*0x1401e9e1f*/
        return sub_1400450F0(a1 + 2); /*0x1401e9e2f*/
      return result; /*0x1401e9e2f*/
    case 19LL: /*0x1401e9df7*/
      if ( a1[1] ) /*0x1401e9fba*/
LABEL_38:
        result = sub_1400450F0(a1 + 1); /*0x1401e9fc1*/
      break; /*0x1401e9fcb*/
    case 28LL: /*0x1401e9df7*/
      result = sub_14105AC40(a1 + 1); /*0x1401e9fb5*/
      break; /*0x1401e9fb5*/
    case 31LL: /*0x1401e9df7*/
      v14 = a1[1]; /*0x1401e9e38*/
      v12 = (void (__fastcall **)(__int64))a1[2]; /*0x1401e9e40*/
      if ( *v12 ) /*0x1401e9e44*/
LABEL_15:
        (*v12)(v14); /*0x1401e9e8a*/
LABEL_16:
      result = (__int64)v12; /*0x1401e9e91*/
      v5 = (__int64)v12[1]; /*0x1401e9e99*/
      if ( v5 ) /*0x1401e9ea0*/
        result = sub_140001370(v14, v5, (__int64)v12[2]); /*0x1401e9eb0*/
      break; /*0x1401e9eb0*/
    default:
      return result;
  }
  return result; /*0x1401e9e10*/
}