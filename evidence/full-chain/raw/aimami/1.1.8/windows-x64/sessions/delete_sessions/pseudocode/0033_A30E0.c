// win 1.1.8 delete_sessions node va=0x1407a30e0 depth=2
// A30E0
__int64 __fastcall sub_1407A30E0(__int64 *a1)
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

  v1 = *a1; /*0x1407a30f3*/
  result = 10; /*0x1407a3106*/
  if ( *a1 < 0 ) /*0x1407a310b*/
    result = *a1 ^ 0x8000000000000000uLL; /*0x1407a310b*/
  switch ( result ) /*0x1407a3127*/
  {
    case 0LL: /*0x1407a3127*/
      result = a1[1]; /*0x1407a327e*/
      if ( result == 6 ) /*0x1407a3286*/
      {
        v14 = a1[2]; /*0x1407a335b*/
        v12 = (void (__fastcall **)(__int64))a1[3]; /*0x1407a3363*/
        if ( !*v12 ) /*0x1407a336d*/
          goto LABEL_16; /*0x1407a336d*/
        goto LABEL_15; /*0x1407a336d*/
      }
      if ( (_DWORD)result == 5 ) /*0x1407a328f*/
      {
        v9 = (__int64 *)a1[2]; /*0x1407a3307*/
        v10 = *v9; /*0x1407a330b*/
        v15 = (__int64)v9; /*0x1407a3312*/
        if ( *v9 == 1 ) /*0x1407a3316*/
          goto LABEL_28; /*0x1407a3316*/
        goto LABEL_41; /*0x1407a3316*/
      }
      if ( !result ) /*0x1407a3294*/
      {
        v14 = a1[2]; /*0x1407a329a*/
        v12 = (void (__fastcall **)(__int64))a1[3]; /*0x1407a32a2*/
        if ( !*v12 ) /*0x1407a32ac*/
          goto LABEL_16; /*0x1407a32ac*/
        goto LABEL_15; /*0x1407a32ac*/
      }
      return result; /*0x1407a3294*/
    case 1LL: /*0x1407a3127*/
    case 2LL: /*0x1407a3127*/
    case 4LL: /*0x1407a3127*/
    case 35LL: /*0x1407a3127*/
      v3 = a1[1]; /*0x1407a3129*/
      if ( v3 ) /*0x1407a3130*/
      {
        v4 = a1[2]; /*0x1407a3136*/
        goto LABEL_6; /*0x1407a3136*/
      }
      return result; /*0x1407a3130*/
    case 5LL: /*0x1407a3127*/
      v9 = (__int64 *)a1[1]; /*0x1407a325a*/
      v10 = *v9; /*0x1407a325e*/
      v15 = (__int64)v9; /*0x1407a3265*/
      if ( *v9 != 1 ) /*0x1407a3269*/
        goto LABEL_41; /*0x1407a3269*/
      goto LABEL_28; /*0x1407a3269*/
    case 6LL: /*0x1407a3127*/
    case 7LL: /*0x1407a3127*/
    case 24LL: /*0x1407a3127*/
      goto LABEL_38;
    case 8LL: /*0x1407a3127*/
      v9 = (__int64 *)a1[5]; /*0x1407a32be*/
      v10 = *v9; /*0x1407a32c2*/
      v15 = (__int64)v9; /*0x1407a32c9*/
      if ( *v9 == 1 ) /*0x1407a32cd*/
      {
LABEL_28:
        sub_1400450F0(v9 + 1); /*0x1407a326f*/
      }
      else
      {
LABEL_41:
        if ( !v10 ) /*0x1407a331b*/
        {
          v11 = *(_QWORD *)(v15 + 16); /*0x1407a3321*/
          if ( v11 ) /*0x1407a3328*/
            sub_140001370(*(_QWORD *)(v15 + 8), v11, 1); /*0x1407a3338*/
        }
      }
      v6 = 40; /*0x1407a333d*/
      v7 = 8; /*0x1407a3342*/
      return sub_140001370(v15, v6, v7); /*0x1407a3342*/
    case 9LL: /*0x1407a3127*/
      v14 = a1[1]; /*0x1407a31a6*/
      v12 = (void (__fastcall **)(__int64))a1[2]; /*0x1407a31ae*/
      if ( *v12 ) /*0x1407a31b2*/
        goto LABEL_15; /*0x1407a31b8*/
      goto LABEL_16; /*0x1407a31b8*/
    case 10LL: /*0x1407a3127*/
      if ( v1 ) /*0x1407a322a*/
      {
        v8 = a1; /*0x1407a3236*/
        result = sub_140001370(a1[1], v1, 1); /*0x1407a323c*/
        a1 = v8; /*0x1407a3241*/
      }
      v3 = a1[3]; /*0x1407a3244*/
      if ( !v3 ) /*0x1407a324b*/
        return result; /*0x1407a324b*/
      v4 = a1[4]; /*0x1407a3251*/
      goto LABEL_6; /*0x1407a3255*/
    case 12LL: /*0x1407a3127*/
      result = a1[2]; /*0x1407a31e5*/
      v15 = result; /*0x1407a31e9*/
      if ( !result ) /*0x1407a31f0*/
        return result; /*0x1407a31f0*/
      v13 = a1[3]; /*0x1407a31fa*/
      if ( *(_QWORD *)v13 ) /*0x1407a31fe*/
        (*(void (__fastcall **)(__int64))v13)(result); /*0x1407a320a*/
      result = v13; /*0x1407a320d*/
      v6 = *(_QWORD *)(v13 + 8); /*0x1407a3211*/
      if ( !v6 ) /*0x1407a3218*/
        return result; /*0x1407a3218*/
      v7 = *(_QWORD *)(v13 + 16); /*0x1407a321e*/
      return sub_140001370(v15, v6, v7); /*0x1407a3352*/
    case 17LL: /*0x1407a3127*/
      if ( *((_DWORD *)a1 + 2) > 2u ) /*0x1407a3189*/
        return result; /*0x1407a3189*/
      v3 = a1[2]; /*0x1407a318f*/
      if ( !v3 ) /*0x1407a3196*/
        return result; /*0x1407a3196*/
      v4 = a1[3]; /*0x1407a319c*/
LABEL_6:
      result = sub_140001370(v4, v3, 1); /*0x1407a313a*/
      break; /*0x1407a3146*/
    case 18LL: /*0x1407a3127*/
    case 20LL: /*0x1407a3127*/
      if ( *((_DWORD *)a1 + 2) >= 2u ) /*0x1407a314f*/
        return sub_1400450F0(a1 + 2); /*0x1407a315f*/
      return result; /*0x1407a315f*/
    case 19LL: /*0x1407a3127*/
      if ( a1[1] ) /*0x1407a32ea*/
LABEL_38:
        result = sub_1400450F0(a1 + 1); /*0x1407a32f1*/
      break; /*0x1407a32fb*/
    case 28LL: /*0x1407a3127*/
      result = sub_14105AC40(a1 + 1); /*0x1407a32e5*/
      break; /*0x1407a32e5*/
    case 31LL: /*0x1407a3127*/
      v14 = a1[1]; /*0x1407a3168*/
      v12 = (void (__fastcall **)(__int64))a1[2]; /*0x1407a3170*/
      if ( *v12 ) /*0x1407a3174*/
LABEL_15:
        (*v12)(v14); /*0x1407a31ba*/
LABEL_16:
      result = (__int64)v12; /*0x1407a31c1*/
      v5 = (__int64)v12[1]; /*0x1407a31c9*/
      if ( v5 ) /*0x1407a31d0*/
        result = sub_140001370(v14, v5, (__int64)v12[2]); /*0x1407a31e0*/
      break; /*0x1407a31e0*/
    default:
      return result;
  }
  return result; /*0x1407a3140*/
}