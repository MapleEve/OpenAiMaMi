// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x1010ff980 depth=3
// serde_json2de21Deserializer::peek_invalid_type
__int64 __fastcall serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::h3c574fc43dc8363f(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6)
{
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  char v9; // r10
  char v10; // r10
  char v11; // r10
  char v12; // r10
  char v13; // al
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 result; // rax
  char v17; // r10
  char v18; // r10
  char v19; // al
  char v20; // r10
  char v21; // r10
  char v22; // al
  _QWORD *v23; // rax
  __int64 v24; // r15
  __int64 v25; // r14
  int *v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+10h] [rbp-60h]
  __int64 v29; // [rsp+18h] [rbp-58h]
  int v30; // [rsp+20h] [rbp-50h] BYREF
  __int64 v31; // [rsp+28h] [rbp-48h]
  int v32; // [rsp+30h] [rbp-40h] BYREF
  __int64 v33; // [rsp+38h] [rbp-38h]
  __int64 v34[6]; // [rsp+40h] [rbp-30h] BYREF

  v6 = a1[4]; /*0x1010ff98d*/
  v7 = a1[5]; /*0x1010ff991*/
  if ( v7 < v6 ) /*0x1010ff998*/
  {
    v8 = a1[3]; /*0x1010ff9a2*/
    v9 = *(_BYTE *)(v8 + v7); /*0x1010ff9a5*/
    switch ( v9 ) /*0x1010ff9c9*/
    {
      case '[': /*0x1010ff9c9*/
        v14 = (__int64)a1; /*0x1010ffbff*/
        LOBYTE(v34[0]) = 10; /*0x1010ffc02*/
        goto LABEL_29; /*0x1010ffc06*/
      case '\\': /*0x1010ff9c9*/
      case ']': /*0x1010ff9c9*/
      case '^': /*0x1010ff9c9*/
      case '_': /*0x1010ff9c9*/
      case '`': /*0x1010ff9c9*/
      case 'a': /*0x1010ff9c9*/
      case 'b': /*0x1010ff9c9*/
      case 'c': /*0x1010ff9c9*/
      case 'd': /*0x1010ff9c9*/
      case 'e': /*0x1010ff9c9*/
      case 'g': /*0x1010ff9c9*/
      case 'h': /*0x1010ff9c9*/
      case 'i': /*0x1010ff9c9*/
      case 'j': /*0x1010ff9c9*/
      case 'k': /*0x1010ff9c9*/
      case 'l': /*0x1010ff9c9*/
      case 'm': /*0x1010ff9c9*/
      case 'o': /*0x1010ff9c9*/
      case 'p': /*0x1010ff9c9*/
      case 'q': /*0x1010ff9c9*/
      case 'r': /*0x1010ff9c9*/
      case 's': /*0x1010ff9c9*/
      case 'u': /*0x1010ff9c9*/
      case 'v': /*0x1010ff9c9*/
      case 'w': /*0x1010ff9c9*/
      case 'x': /*0x1010ff9c9*/
      case 'y': /*0x1010ff9c9*/
      case 'z': /*0x1010ff9c9*/
        goto LABEL_40;
      case 'f': /*0x1010ff9c9*/
        a1[5] = v7 + 1; /*0x1010ff9d0*/
        if ( v7 + 1 >= v6 ) /*0x1010ff9d7*/
          goto LABEL_30; /*0x1010ff9d7*/
        v10 = *(_BYTE *)(v8 + v7 + 1); /*0x1010ff9dd*/
        a1[5] = v7 + 2; /*0x1010ff9e7*/
        if ( v10 != 97 ) /*0x1010ff9ef*/
          goto LABEL_35; /*0x1010ff9ef*/
        if ( v7 + 2 >= v6 ) /*0x1010ff9f8*/
          goto LABEL_30; /*0x1010ff9f8*/
        v11 = *(_BYTE *)(v8 + v7 + 2); /*0x1010ff9fe*/
        a1[5] = v7 + 3; /*0x1010ffa08*/
        if ( v11 != 108 ) /*0x1010ffa10*/
          goto LABEL_35; /*0x1010ffa10*/
        if ( v7 + 3 >= v6 ) /*0x1010ffa19*/
          goto LABEL_30; /*0x1010ffa19*/
        v12 = *(_BYTE *)(v8 + v7 + 3); /*0x1010ffa1f*/
        a1[5] = v7 + 4; /*0x1010ffa29*/
        if ( v12 != 115 ) /*0x1010ffa31*/
          goto LABEL_35; /*0x1010ffa31*/
        if ( v7 + 4 >= v6 ) /*0x1010ffa3a*/
        {
LABEL_30:
          v34[0] = 5; /*0x1010ffba3*/
        }
        else
        {
          v13 = *(_BYTE *)(v8 + v7 + 4); /*0x1010ffa40*/
          a1[5] = v7 + 5; /*0x1010ffa4a*/
          if ( v13 == 101 ) /*0x1010ffa50*/
          {
            v14 = (__int64)a1; /*0x1010ffa56*/
            LOWORD(v34[0]) = 0; /*0x1010ffa59*/
            goto LABEL_29; /*0x1010ffa5f*/
          }
LABEL_35:
          v34[0] = 9; /*0x1010ffbec*/
        }
        return serde_json::de::Deserializer$LT$R$GT$::error::h85175ebc8366b145(a1, v34); /*0x1010ffbb4*/
      case 'n': /*0x1010ff9c9*/
        a1[5] = v7 + 1; /*0x1010ffb3d*/
        if ( v7 + 1 >= v6 ) /*0x1010ffb44*/
          goto LABEL_30; /*0x1010ffb44*/
        v20 = *(_BYTE *)(v8 + v7 + 1); /*0x1010ffb46*/
        a1[5] = v7 + 2; /*0x1010ffb50*/
        if ( v20 != 117 ) /*0x1010ffb58*/
          goto LABEL_35; /*0x1010ffb58*/
        if ( v7 + 2 >= v6 ) /*0x1010ffb61*/
          goto LABEL_30; /*0x1010ffb61*/
        v21 = *(_BYTE *)(v8 + v7 + 2); /*0x1010ffb63*/
        a1[5] = v7 + 3; /*0x1010ffb6d*/
        if ( v21 != 108 ) /*0x1010ffb75*/
          goto LABEL_35; /*0x1010ffb75*/
        if ( v7 + 3 >= v6 ) /*0x1010ffb7a*/
          goto LABEL_30; /*0x1010ffb7a*/
        v22 = *(_BYTE *)(v8 + v7 + 3); /*0x1010ffb7c*/
        a1[5] = v7 + 4; /*0x1010ffb86*/
        if ( v22 != 108 ) /*0x1010ffb8c*/
          goto LABEL_35; /*0x1010ffb8c*/
        v14 = (__int64)a1; /*0x1010ffb8e*/
        LOBYTE(v34[0]) = 7; /*0x1010ffb91*/
        goto LABEL_29; /*0x1010ffb91*/
      case 't': /*0x1010ff9c9*/
        a1[5] = v7 + 1; /*0x1010ffac9*/
        if ( v7 + 1 >= v6 ) /*0x1010ffad0*/
          goto LABEL_30; /*0x1010ffad0*/
        v17 = *(_BYTE *)(v8 + v7 + 1); /*0x1010ffad6*/
        a1[5] = v7 + 2; /*0x1010ffae0*/
        if ( v17 != 114 ) /*0x1010ffae8*/
          goto LABEL_35; /*0x1010ffae8*/
        if ( v7 + 2 >= v6 ) /*0x1010ffaf1*/
          goto LABEL_30; /*0x1010ffaf1*/
        v18 = *(_BYTE *)(v8 + v7 + 2); /*0x1010ffaf7*/
        a1[5] = v7 + 3; /*0x1010ffb01*/
        if ( v18 != 117 ) /*0x1010ffb09*/
          goto LABEL_35; /*0x1010ffb09*/
        if ( v7 + 3 >= v6 ) /*0x1010ffb12*/
          goto LABEL_30; /*0x1010ffb12*/
        v19 = *(_BYTE *)(v8 + v7 + 3); /*0x1010ffb18*/
        a1[5] = v7 + 4; /*0x1010ffb22*/
        if ( v19 != 101 ) /*0x1010ffb28*/
          goto LABEL_35; /*0x1010ffb28*/
        v14 = (__int64)a1; /*0x1010ffb2e*/
        LOWORD(v34[0]) = 256; /*0x1010ffb31*/
        goto LABEL_29; /*0x1010ffb37*/
      case '{': /*0x1010ff9c9*/
        v14 = (__int64)a1; /*0x1010ffbf6*/
        LOBYTE(v34[0]) = 11; /*0x1010ffbf9*/
        goto LABEL_29; /*0x1010ffbfd*/
      default:
        if ( v9 == 34 ) /*0x1010ffa68*/
        {
          v15 = a3; /*0x1010ffa71*/
          a1[5] = v7 + 1; /*0x1010ffa77*/
          a1[2] = 0; /*0x1010ffa7b*/
          v14 = (__int64)a1; /*0x1010ffa90*/
          _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18( /*0x1010ffa93*/
            &v27,
            a1 + 3,
            a1,
            a4,
            a5,
            a6);
          result = v28; /*0x1010ffa9c*/
          if ( (_DWORD)v27 == 2 ) /*0x1010ffaa0*/
            return result; /*0x1010ffaa0*/
          v34[1] = v28; /*0x1010ffaaa*/
          v34[2] = v29; /*0x1010ffaae*/
          LOBYTE(v34[0]) = 5; /*0x1010ffab2*/
          a3 = v15; /*0x1010ffabd*/
LABEL_29:
          v23 = (_QWORD *)_$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::invalid_type::h13d4925c1d6aa5cd( /*0x1010ffb99*/
                            v34,
                            a2,
                            a3);
          return serde_json::error::Error::fix_position::hcddea6c8e528a7ec((__int64)v23, v14); /*0x1010ffb9e*/
        }
        if ( v9 == 45 ) /*0x1010ffbbd*/
        {
          v24 = a2; /*0x1010ffbbf*/
          v25 = a3; /*0x1010ffbc2*/
          a1[5] = v7 + 1; /*0x1010ffbc8*/
          v14 = (__int64)a1; /*0x1010ffbd6*/
          serde_json::de::Deserializer$LT$R$GT$::parse_integer::h1ef8129122f17302(&v32, a1, 0); /*0x1010ffbdb*/
          if ( v32 == 3 ) /*0x1010ffbe4*/
            return v33; /*0x1010ffbea*/
          v26 = &v32; /*0x1010ffc08*/
          goto LABEL_39; /*0x1010ffc08*/
        }
LABEL_40:
        if ( (unsigned __int8)(v9 - 48) < 0xAu ) /*0x1010ffc21*/
        {
          v24 = a2; /*0x1010ffc23*/
          v25 = a3; /*0x1010ffc26*/
          v14 = (__int64)a1; /*0x1010ffc33*/
          serde_json::de::Deserializer$LT$R$GT$::parse_integer::h1ef8129122f17302(&v30, a1, 1); /*0x1010ffc3b*/
          if ( v30 == 3 ) /*0x1010ffc44*/
            return v31; /*0x1010ffc4a*/
          v26 = &v30; /*0x1010ffc76*/
LABEL_39:
          v23 = (_QWORD *)serde_json::de::ParserNumber::invalid_type::h07eb3a701e8565c3(v26, v24, v25); /*0x1010ffc0c*/
          return serde_json::error::Error::fix_position::hcddea6c8e528a7ec((__int64)v23, v14); /*0x1010ffc17*/
        }
        break; /*0x1010ffc17*/
    }
  }
  v34[0] = 10; /*0x1010ffc4c*/
  v14 = (__int64)a1; /*0x1010ffc58*/
  v23 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v34); /*0x1010ffc5b*/
  return serde_json::error::Error::fix_position::hcddea6c8e528a7ec((__int64)v23, v14); /*0x1010ffc6b*/
}