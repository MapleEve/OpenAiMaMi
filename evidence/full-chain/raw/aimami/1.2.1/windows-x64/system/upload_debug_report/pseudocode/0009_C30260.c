// win 1.2.1 NEW upload_debug_report 0x140c30260 d=1
__int64 __fastcall sub_140C30260(__int64 *a1)
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

  v1 = *a1; /*0x140c30273*/
  result = 10; /*0x140c30286*/
  if ( *a1 < 0 ) /*0x140c3028b*/
    result = *a1 ^ 0x8000000000000000uLL; /*0x140c3028b*/
  switch ( result ) /*0x140c302a7*/
  {
    case 0LL: /*0x140c302a7*/
      result = a1[1]; /*0x140c3040d*/
      if ( result == 6 ) /*0x140c30415*/
      {
        v15 = a1[2]; /*0x140c304e1*/
        v13 = (void (__fastcall **)(__int64))a1[3]; /*0x140c304e9*/
        if ( !*v13 ) /*0x140c304f3*/
          goto LABEL_18; /*0x140c304f3*/
        goto LABEL_17; /*0x140c304f3*/
      }
      if ( (_DWORD)result == 5 ) /*0x140c3041e*/
      {
        v10 = (__int64 *)a1[2]; /*0x140c3048d*/
        v11 = *v10; /*0x140c30491*/
        v16 = (__int64)v10; /*0x140c30498*/
        if ( *v10 == 1 ) /*0x140c3049c*/
          goto LABEL_30; /*0x140c3049c*/
        goto LABEL_42; /*0x140c3049c*/
      }
      if ( !result ) /*0x140c30423*/
      {
        v15 = a1[2]; /*0x140c30429*/
        v13 = (void (__fastcall **)(__int64))a1[3]; /*0x140c30431*/
        if ( !*v13 ) /*0x140c3043b*/
          goto LABEL_18; /*0x140c3043b*/
        goto LABEL_17; /*0x140c3043b*/
      }
      return result; /*0x140c30423*/
    case 1LL: /*0x140c302a7*/
    case 2LL: /*0x140c302a7*/
    case 4LL: /*0x140c302a7*/
    case 35LL: /*0x140c302a7*/
      v3 = a1[1]; /*0x140c302a9*/
      if ( v3 ) /*0x140c302b0*/
      {
        v4 = a1[2]; /*0x140c302b6*/
        goto LABEL_6; /*0x140c302b6*/
      }
      return result; /*0x140c302b0*/
    case 5LL: /*0x140c302a7*/
      v10 = (__int64 *)a1[1]; /*0x140c303e9*/
      v11 = *v10; /*0x140c303ed*/
      v16 = (__int64)v10; /*0x140c303f4*/
      if ( *v10 != 1 ) /*0x140c303f8*/
        goto LABEL_42; /*0x140c303f8*/
      goto LABEL_30; /*0x140c303f8*/
    case 6LL: /*0x140c302a7*/
    case 7LL: /*0x140c302a7*/
    case 24LL: /*0x140c302a7*/
      v5 = a1[1]; /*0x140c302cb*/
      goto LABEL_8; /*0x140c302cb*/
    case 8LL: /*0x140c302a7*/
      v10 = (__int64 *)a1[5]; /*0x140c3044d*/
      v11 = *v10; /*0x140c30451*/
      v16 = (__int64)v10; /*0x140c30458*/
      if ( *v10 == 1 ) /*0x140c3045c*/
      {
LABEL_30:
        sub_1400F6E90(v10[1]); /*0x140c303fe*/
      }
      else
      {
LABEL_42:
        if ( !v11 ) /*0x140c304a1*/
        {
          v12 = *(_QWORD *)(v16 + 16); /*0x140c304a7*/
          if ( v12 ) /*0x140c304ae*/
            sub_140001360(*(_QWORD *)(v16 + 8), v12, 1); /*0x140c304be*/
        }
      }
      v7 = 40; /*0x140c304c3*/
      v8 = 8; /*0x140c304c8*/
      return sub_140001360(v16, v7, v8); /*0x140c304c8*/
    case 9LL: /*0x140c302a7*/
      v15 = a1[1]; /*0x140c30335*/
      v13 = (void (__fastcall **)(__int64))a1[2]; /*0x140c3033d*/
      if ( *v13 ) /*0x140c30341*/
        goto LABEL_17; /*0x140c30347*/
      goto LABEL_18; /*0x140c30347*/
    case 10LL: /*0x140c302a7*/
      if ( v1 ) /*0x140c303b9*/
      {
        v9 = a1; /*0x140c303c5*/
        result = sub_140001360(a1[1], v1, 1); /*0x140c303cb*/
        a1 = v9; /*0x140c303d0*/
      }
      v3 = a1[3]; /*0x140c303d3*/
      if ( !v3 ) /*0x140c303da*/
        return result; /*0x140c303da*/
      v4 = a1[4]; /*0x140c303e0*/
      goto LABEL_6; /*0x140c303e4*/
    case 12LL: /*0x140c302a7*/
      result = a1[2]; /*0x140c30374*/
      v16 = result; /*0x140c30378*/
      if ( !result ) /*0x140c3037f*/
        return result; /*0x140c3037f*/
      v14 = a1[3]; /*0x140c30389*/
      if ( *(_QWORD *)v14 ) /*0x140c3038d*/
        (*(void (__fastcall **)(__int64))v14)(result); /*0x140c30399*/
      result = v14; /*0x140c3039c*/
      v7 = *(_QWORD *)(v14 + 8); /*0x140c303a0*/
      if ( !v7 ) /*0x140c303a7*/
        return result; /*0x140c303a7*/
      v8 = *(_QWORD *)(v14 + 16); /*0x140c303ad*/
      return sub_140001360(v16, v7, v8); /*0x140c304d8*/
    case 17LL: /*0x140c302a7*/
      if ( *((_DWORD *)a1 + 2) > 2u ) /*0x140c30318*/
        return result; /*0x140c30318*/
      v3 = a1[2]; /*0x140c3031e*/
      if ( !v3 ) /*0x140c30325*/
        return result; /*0x140c30325*/
      v4 = a1[3]; /*0x140c3032b*/
LABEL_6:
      result = sub_140001360(v4, v3, 1); /*0x140c302ba*/
      break; /*0x140c302c6*/
    case 18LL: /*0x140c302a7*/
    case 20LL: /*0x140c302a7*/
      if ( *((_DWORD *)a1 + 2) >= 2u ) /*0x140c302de*/
        return sub_1400F6E90(a1[2]); /*0x140c302ee*/
      return result; /*0x140c302ee*/
    case 19LL: /*0x140c302a7*/
      v5 = a1[1]; /*0x140c30479*/
      if ( !v5 ) /*0x140c30480*/
        return result; /*0x140c30480*/
LABEL_8:
      result = sub_1400F6E90(v5); /*0x140c302cf*/
      break; /*0x140c302d5*/
    case 28LL: /*0x140c302a7*/
      result = sub_141395C50(a1 + 1); /*0x140c30474*/
      break; /*0x140c30474*/
    case 31LL: /*0x140c302a7*/
      v15 = a1[1]; /*0x140c302f7*/
      v13 = (void (__fastcall **)(__int64))a1[2]; /*0x140c302ff*/
      if ( *v13 ) /*0x140c30303*/
LABEL_17:
        (*v13)(v15); /*0x140c30349*/
LABEL_18:
      result = (__int64)v13; /*0x140c30350*/
      v6 = (__int64)v13[1]; /*0x140c30358*/
      if ( v6 ) /*0x140c3035f*/
        result = sub_140001360(v15, v6, (__int64)v13[2]); /*0x140c3036f*/
      break; /*0x140c3036f*/
    default:
      return result;
  }
  return result; /*0x140c302c0*/
}