// win 1.2.1 NEW set_voice_overlay_style 0x140204b00 d=2
__int64 __fastcall sub_140204B00(__int64 *a1)
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

  v1 = *a1; /*0x140204b13*/
  result = 10; /*0x140204b26*/
  if ( *a1 < 0 ) /*0x140204b2b*/
    result = *a1 ^ 0x8000000000000000uLL; /*0x140204b2b*/
  switch ( result ) /*0x140204b47*/
  {
    case 0LL: /*0x140204b47*/
      result = a1[1]; /*0x140204c9e*/
      if ( result == 6 ) /*0x140204ca6*/
      {
        v14 = a1[2]; /*0x140204d7b*/
        v12 = (void (__fastcall **)(__int64))a1[3]; /*0x140204d83*/
        if ( !*v12 ) /*0x140204d8d*/
          goto LABEL_16; /*0x140204d8d*/
        goto LABEL_15; /*0x140204d8d*/
      }
      if ( (_DWORD)result == 5 ) /*0x140204caf*/
      {
        v9 = (__int64 *)a1[2]; /*0x140204d27*/
        v10 = *v9; /*0x140204d2b*/
        v15 = (__int64)v9; /*0x140204d32*/
        if ( *v9 == 1 ) /*0x140204d36*/
          goto LABEL_28; /*0x140204d36*/
        goto LABEL_41; /*0x140204d36*/
      }
      if ( !result ) /*0x140204cb4*/
      {
        v14 = a1[2]; /*0x140204cba*/
        v12 = (void (__fastcall **)(__int64))a1[3]; /*0x140204cc2*/
        if ( !*v12 ) /*0x140204ccc*/
          goto LABEL_16; /*0x140204ccc*/
        goto LABEL_15; /*0x140204ccc*/
      }
      return result; /*0x140204cb4*/
    case 1LL: /*0x140204b47*/
    case 2LL: /*0x140204b47*/
    case 4LL: /*0x140204b47*/
    case 35LL: /*0x140204b47*/
      v3 = a1[1]; /*0x140204b49*/
      if ( v3 ) /*0x140204b50*/
      {
        v4 = a1[2]; /*0x140204b56*/
        goto LABEL_6; /*0x140204b56*/
      }
      return result; /*0x140204b50*/
    case 5LL: /*0x140204b47*/
      v9 = (__int64 *)a1[1]; /*0x140204c7a*/
      v10 = *v9; /*0x140204c7e*/
      v15 = (__int64)v9; /*0x140204c85*/
      if ( *v9 != 1 ) /*0x140204c89*/
        goto LABEL_41; /*0x140204c89*/
      goto LABEL_28; /*0x140204c89*/
    case 6LL: /*0x140204b47*/
    case 7LL: /*0x140204b47*/
    case 24LL: /*0x140204b47*/
      goto LABEL_38;
    case 8LL: /*0x140204b47*/
      v9 = (__int64 *)a1[5]; /*0x140204cde*/
      v10 = *v9; /*0x140204ce2*/
      v15 = (__int64)v9; /*0x140204ce9*/
      if ( *v9 == 1 ) /*0x140204ced*/
      {
LABEL_28:
        sub_14004A520(v9 + 1); /*0x140204c8f*/
      }
      else
      {
LABEL_41:
        if ( !v10 ) /*0x140204d3b*/
        {
          v11 = *(_QWORD *)(v15 + 16); /*0x140204d41*/
          if ( v11 ) /*0x140204d48*/
            sub_140001360(*(_QWORD *)(v15 + 8), v11, 1); /*0x140204d58*/
        }
      }
      v6 = 40; /*0x140204d5d*/
      v7 = 8; /*0x140204d62*/
      return sub_140001360(v15, v6, v7); /*0x140204d62*/
    case 9LL: /*0x140204b47*/
      v14 = a1[1]; /*0x140204bc6*/
      v12 = (void (__fastcall **)(__int64))a1[2]; /*0x140204bce*/
      if ( *v12 ) /*0x140204bd2*/
        goto LABEL_15; /*0x140204bd8*/
      goto LABEL_16; /*0x140204bd8*/
    case 10LL: /*0x140204b47*/
      if ( v1 ) /*0x140204c4a*/
      {
        v8 = a1; /*0x140204c56*/
        result = sub_140001360(a1[1], v1, 1); /*0x140204c5c*/
        a1 = v8; /*0x140204c61*/
      }
      v3 = a1[3]; /*0x140204c64*/
      if ( !v3 ) /*0x140204c6b*/
        return result; /*0x140204c6b*/
      v4 = a1[4]; /*0x140204c71*/
      goto LABEL_6; /*0x140204c75*/
    case 12LL: /*0x140204b47*/
      result = a1[2]; /*0x140204c05*/
      v15 = result; /*0x140204c09*/
      if ( !result ) /*0x140204c10*/
        return result; /*0x140204c10*/
      v13 = a1[3]; /*0x140204c1a*/
      if ( *(_QWORD *)v13 ) /*0x140204c1e*/
        (*(void (__fastcall **)(__int64))v13)(result); /*0x140204c2a*/
      result = v13; /*0x140204c2d*/
      v6 = *(_QWORD *)(v13 + 8); /*0x140204c31*/
      if ( !v6 ) /*0x140204c38*/
        return result; /*0x140204c38*/
      v7 = *(_QWORD *)(v13 + 16); /*0x140204c3e*/
      return sub_140001360(v15, v6, v7); /*0x140204d72*/
    case 17LL: /*0x140204b47*/
      if ( *((_DWORD *)a1 + 2) > 2u ) /*0x140204ba9*/
        return result; /*0x140204ba9*/
      v3 = a1[2]; /*0x140204baf*/
      if ( !v3 ) /*0x140204bb6*/
        return result; /*0x140204bb6*/
      v4 = a1[3]; /*0x140204bbc*/
LABEL_6:
      result = sub_140001360(v4, v3, 1); /*0x140204b5a*/
      break; /*0x140204b66*/
    case 18LL: /*0x140204b47*/
    case 20LL: /*0x140204b47*/
      if ( *((_DWORD *)a1 + 2) >= 2u ) /*0x140204b6f*/
        return sub_14004A520(a1 + 2); /*0x140204b7f*/
      return result; /*0x140204b7f*/
    case 19LL: /*0x140204b47*/
      if ( a1[1] ) /*0x140204d0a*/
LABEL_38:
        result = sub_14004A520(a1 + 1); /*0x140204d11*/
      break; /*0x140204d1b*/
    case 28LL: /*0x140204b47*/
      result = sub_141395C50(a1 + 1); /*0x140204d05*/
      break; /*0x140204d05*/
    case 31LL: /*0x140204b47*/
      v14 = a1[1]; /*0x140204b88*/
      v12 = (void (__fastcall **)(__int64))a1[2]; /*0x140204b90*/
      if ( *v12 ) /*0x140204b94*/
LABEL_15:
        (*v12)(v14); /*0x140204bda*/
LABEL_16:
      result = (__int64)v12; /*0x140204be1*/
      v5 = (__int64)v12[1]; /*0x140204be9*/
      if ( v5 ) /*0x140204bf0*/
        result = sub_140001360(v14, v5, (__int64)v12[2]); /*0x140204c00*/
      break; /*0x140204c00*/
    default:
      return result;
  }
  return result; /*0x140204b60*/
}