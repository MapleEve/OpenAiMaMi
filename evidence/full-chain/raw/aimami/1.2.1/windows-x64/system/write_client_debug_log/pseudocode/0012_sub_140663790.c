// win 1.2.1 NEW write_client_debug_log 0x140663790 d=2
__int64 __fastcall sub_140663790(__int64 *a1)
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

  v1 = *a1; /*0x1406637a3*/
  result = 10; /*0x1406637b6*/
  if ( *a1 < 0 ) /*0x1406637bb*/
    result = *a1 ^ 0x8000000000000000uLL; /*0x1406637bb*/
  switch ( result ) /*0x1406637d7*/
  {
    case 0LL: /*0x1406637d7*/
      result = a1[1]; /*0x14066392e*/
      if ( result == 6 ) /*0x140663936*/
      {
        v14 = a1[2]; /*0x140663a0b*/
        v12 = (void (__fastcall **)(__int64))a1[3]; /*0x140663a13*/
        if ( !*v12 ) /*0x140663a1d*/
          goto LABEL_16; /*0x140663a1d*/
        goto LABEL_15; /*0x140663a1d*/
      }
      if ( (_DWORD)result == 5 ) /*0x14066393f*/
      {
        v9 = (__int64 *)a1[2]; /*0x1406639b7*/
        v10 = *v9; /*0x1406639bb*/
        v15 = (__int64)v9; /*0x1406639c2*/
        if ( *v9 == 1 ) /*0x1406639c6*/
          goto LABEL_28; /*0x1406639c6*/
        goto LABEL_41; /*0x1406639c6*/
      }
      if ( !result ) /*0x140663944*/
      {
        v14 = a1[2]; /*0x14066394a*/
        v12 = (void (__fastcall **)(__int64))a1[3]; /*0x140663952*/
        if ( !*v12 ) /*0x14066395c*/
          goto LABEL_16; /*0x14066395c*/
        goto LABEL_15; /*0x14066395c*/
      }
      return result; /*0x140663944*/
    case 1LL: /*0x1406637d7*/
    case 2LL: /*0x1406637d7*/
    case 4LL: /*0x1406637d7*/
    case 35LL: /*0x1406637d7*/
      v3 = a1[1]; /*0x1406637d9*/
      if ( v3 ) /*0x1406637e0*/
      {
        v4 = a1[2]; /*0x1406637e6*/
        goto LABEL_6; /*0x1406637e6*/
      }
      return result; /*0x1406637e0*/
    case 5LL: /*0x1406637d7*/
      v9 = (__int64 *)a1[1]; /*0x14066390a*/
      v10 = *v9; /*0x14066390e*/
      v15 = (__int64)v9; /*0x140663915*/
      if ( *v9 != 1 ) /*0x140663919*/
        goto LABEL_41; /*0x140663919*/
      goto LABEL_28; /*0x140663919*/
    case 6LL: /*0x1406637d7*/
    case 7LL: /*0x1406637d7*/
    case 24LL: /*0x1406637d7*/
      goto LABEL_38;
    case 8LL: /*0x1406637d7*/
      v9 = (__int64 *)a1[5]; /*0x14066396e*/
      v10 = *v9; /*0x140663972*/
      v15 = (__int64)v9; /*0x140663979*/
      if ( *v9 == 1 ) /*0x14066397d*/
      {
LABEL_28:
        sub_14004A520(v9 + 1); /*0x14066391f*/
      }
      else
      {
LABEL_41:
        if ( !v10 ) /*0x1406639cb*/
        {
          v11 = *(_QWORD *)(v15 + 16); /*0x1406639d1*/
          if ( v11 ) /*0x1406639d8*/
            sub_140001360(*(_QWORD *)(v15 + 8), v11, 1); /*0x1406639e8*/
        }
      }
      v6 = 40; /*0x1406639ed*/
      v7 = 8; /*0x1406639f2*/
      return sub_140001360(v15, v6, v7); /*0x1406639f2*/
    case 9LL: /*0x1406637d7*/
      v14 = a1[1]; /*0x140663856*/
      v12 = (void (__fastcall **)(__int64))a1[2]; /*0x14066385e*/
      if ( *v12 ) /*0x140663862*/
        goto LABEL_15; /*0x140663868*/
      goto LABEL_16; /*0x140663868*/
    case 10LL: /*0x1406637d7*/
      if ( v1 ) /*0x1406638da*/
      {
        v8 = a1; /*0x1406638e6*/
        result = sub_140001360(a1[1], v1, 1); /*0x1406638ec*/
        a1 = v8; /*0x1406638f1*/
      }
      v3 = a1[3]; /*0x1406638f4*/
      if ( !v3 ) /*0x1406638fb*/
        return result; /*0x1406638fb*/
      v4 = a1[4]; /*0x140663901*/
      goto LABEL_6; /*0x140663905*/
    case 12LL: /*0x1406637d7*/
      result = a1[2]; /*0x140663895*/
      v15 = result; /*0x140663899*/
      if ( !result ) /*0x1406638a0*/
        return result; /*0x1406638a0*/
      v13 = a1[3]; /*0x1406638aa*/
      if ( *(_QWORD *)v13 ) /*0x1406638ae*/
        (*(void (__fastcall **)(__int64))v13)(result); /*0x1406638ba*/
      result = v13; /*0x1406638bd*/
      v6 = *(_QWORD *)(v13 + 8); /*0x1406638c1*/
      if ( !v6 ) /*0x1406638c8*/
        return result; /*0x1406638c8*/
      v7 = *(_QWORD *)(v13 + 16); /*0x1406638ce*/
      return sub_140001360(v15, v6, v7); /*0x140663a02*/
    case 17LL: /*0x1406637d7*/
      if ( *((_DWORD *)a1 + 2) > 2u ) /*0x140663839*/
        return result; /*0x140663839*/
      v3 = a1[2]; /*0x14066383f*/
      if ( !v3 ) /*0x140663846*/
        return result; /*0x140663846*/
      v4 = a1[3]; /*0x14066384c*/
LABEL_6:
      result = sub_140001360(v4, v3, 1); /*0x1406637ea*/
      break; /*0x1406637f6*/
    case 18LL: /*0x1406637d7*/
    case 20LL: /*0x1406637d7*/
      if ( *((_DWORD *)a1 + 2) >= 2u ) /*0x1406637ff*/
        return sub_14004A520(a1 + 2); /*0x14066380f*/
      return result; /*0x14066380f*/
    case 19LL: /*0x1406637d7*/
      if ( a1[1] ) /*0x14066399a*/
LABEL_38:
        result = sub_14004A520(a1 + 1); /*0x1406639a1*/
      break; /*0x1406639ab*/
    case 28LL: /*0x1406637d7*/
      result = sub_141395C50(a1 + 1); /*0x140663995*/
      break; /*0x140663995*/
    case 31LL: /*0x1406637d7*/
      v14 = a1[1]; /*0x140663818*/
      v12 = (void (__fastcall **)(__int64))a1[2]; /*0x140663820*/
      if ( *v12 ) /*0x140663824*/
LABEL_15:
        (*v12)(v14); /*0x14066386a*/
LABEL_16:
      result = (__int64)v12; /*0x140663871*/
      v5 = (__int64)v12[1]; /*0x140663879*/
      if ( v5 ) /*0x140663880*/
        result = sub_140001360(v14, v5, (__int64)v12[2]); /*0x140663890*/
      break; /*0x140663890*/
    default:
      return result;
  }
  return result; /*0x1406637f0*/
}