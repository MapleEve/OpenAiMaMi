// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x100512af0 depth=3
// serde_json2de21Deserializer::ignore_value
_QWORD *__fastcall serde_json::de::Deserializer$LT$R$GT$::ignore_value::h7eada599325cfc5e(unsigned __int64 *a1)
{
  int v1; // r13d
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  void *v6; // r12
  char v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  char v14; // si
  char v15; // di
  char v16; // di
  char v17; // di
  char v18; // cl
  char v19; // di
  char v20; // di
  char v21; // di
  char v22; // di
  char v23; // cl
  _QWORD *result; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 *v38; // [rsp+8h] [rbp-48h]
  __int64 v39[8]; // [rsp+10h] [rbp-40h] BYREF

  a1[2] = 0; /*0x100512b04*/
  v3 = a1[4]; /*0x100512b0c*/
  v4 = a1[5]; /*0x100512b10*/
  if ( v4 >= v3 ) /*0x100512b17*/
  {
LABEL_87:
    v39[0] = 5; /*0x100512f80*/
    return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v39); /*0x100512f88*/
  }
  v38 = a1 + 3; /*0x100512b21*/
  v5 = a1[3]; /*0x100512b25*/
  v6 = &loc_100002600; /*0x100512b29*/
  v7 = 0; /*0x100512b33*/
  while ( 2 ) /*0x100512b5a*/
  {
    v8 = v4 + 5; /*0x100512b5a*/
    v9 = -(__int64)v3; /*0x100512b61*/
    while ( 1 ) /*0x100512b70*/
    {
      v10 = *(unsigned __int8 *)(v5 + v8 - 5); /*0x100512b70*/
      if ( v10 > 0x2D ) /*0x100512b7a*/
        goto LABEL_14; /*0x100512b7a*/
      if ( !_bittest64((const __int64 *)&v6, v10) ) /*0x100512b7c*/
        break; /*0x100512b7c*/
      a1[5] = v8 - 4; /*0x100512b86*/
      v11 = v8 - v3 + 1; /*0x100512b8a*/
      ++v8; /*0x100512b8f*/
      if ( v11 == 5 ) /*0x100512b96*/
        goto LABEL_87; /*0x100512b96*/
    }
    if ( v10 == 34 ) /*0x100512ba4*/
    {
      a1[5] = v8 - 4; /*0x100512d78*/
      result = (_QWORD *)_$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::ignore_str::hfb27a7aad3564612( /*0x100512d80*/
                           v38,
                           v9);
      goto LABEL_46; /*0x100512d85*/
    }
    if ( v10 == 45 ) /*0x100512bae*/
    {
      a1[5] = v8 - 4; /*0x100512bb4*/
LABEL_45:
      result = (_QWORD *)serde_json::de::Deserializer$LT$R$GT$::ignore_integer::h224d1fba3358bc91(a1, v9); /*0x100512d93*/
LABEL_46:
      if ( result ) /*0x100512d9e*/
        return result; /*0x100512d9e*/
      goto LABEL_47; /*0x100512d9e*/
    }
LABEL_14:
    v9 = (unsigned int)(v10 - 91); /*0x100512bc3*/
    switch ( *(_BYTE *)(v5 + v8 - 5) ) /*0x100512bdd*/
    {
      case '[': /*0x100512bdd*/
      case '{': /*0x100512bdd*/
        v12 = v7 & 1; /*0x100512be3*/
        v13 = a1[2]; /*0x100512be9*/
        if ( *a1 - v13 >= v12 ) /*0x100512bf3*/
        {
          if ( (v7 & 1) == 0 ) /*0x100512bfd*/
            goto LABEL_18; /*0x100512bfd*/
LABEL_17:
          *(_BYTE *)(a1[1] + v13++) = v1; /*0x100512bff*/
          goto LABEL_18; /*0x100512c07*/
        }
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(a1, v13, v12, 1, 1u); /*0x100512f68*/
        v13 = a1[2]; /*0x100512f6d*/
        if ( (v7 & 1) != 0 ) /*0x100512f75*/
          goto LABEL_17; /*0x100512f75*/
LABEL_18:
        a1[2] = v13; /*0x100512c0a*/
        ++a1[5]; /*0x100512c0e*/
        v14 = 0; /*0x100512c12*/
        v3 = a1[4]; /*0x100512c14*/
        v4 = a1[5]; /*0x100512c18*/
        if ( v4 >= v3 ) /*0x100512c1f*/
          goto LABEL_92; /*0x100512c1f*/
        goto LABEL_52; /*0x100512c1f*/
      case 'f': /*0x100512bdd*/
        a1[5] = v8 - 4; /*0x100512c2e*/
        if ( v8 - 4 >= v3 ) /*0x100512c35*/
          goto LABEL_90; /*0x100512c35*/
        v15 = *(_BYTE *)(v5 + v8 - 4); /*0x100512c3b*/
        a1[5] = v8 - 3; /*0x100512c44*/
        if ( v15 != 97 ) /*0x100512c4c*/
          goto LABEL_99; /*0x100512c4c*/
        if ( v8 - 3 >= v3 ) /*0x100512c55*/
          goto LABEL_90; /*0x100512c55*/
        v16 = *(_BYTE *)(v5 + v8 - 3); /*0x100512c5b*/
        a1[5] = v8 - 2; /*0x100512c64*/
        if ( v16 != 108 ) /*0x100512c6c*/
          goto LABEL_99; /*0x100512c6c*/
        if ( v8 - 2 >= v3 ) /*0x100512c75*/
          goto LABEL_90; /*0x100512c75*/
        v17 = *(_BYTE *)(v5 + v8 - 2); /*0x100512c7b*/
        a1[5] = v8 - 1; /*0x100512c84*/
        if ( v17 != 115 ) /*0x100512c8c*/
          goto LABEL_99; /*0x100512c8c*/
        if ( v8 - 1 >= v3 ) /*0x100512c95*/
        {
LABEL_90:
          v39[0] = 5; /*0x100512f98*/
          return (_QWORD *)serde_json::de::Deserializer$LT$R$GT$::error::h85175ebc8366b145(a1, v39); /*0x100512fac*/
        }
        v18 = *(_BYTE *)(v5 + v8 - 1); /*0x100512c9b*/
LABEL_34:
        a1[5] = v8; /*0x100512cfb*/
        if ( v18 != 101 ) /*0x100512d02*/
        {
LABEL_99:
          v39[0] = 9; /*0x100512fe9*/
          return (_QWORD *)serde_json::de::Deserializer$LT$R$GT$::error::h85175ebc8366b145(a1, v39); /*0x100512ff1*/
        }
LABEL_47:
        v14 = 1; /*0x100512da4*/
        if ( (v7 & 1) != 0 ) /*0x100512dab*/
        {
          LODWORD(v10) = v1; /*0x100512dad*/
          v3 = a1[4]; /*0x100512db0*/
          v4 = a1[5]; /*0x100512db4*/
          if ( v4 >= v3 ) /*0x100512dbb*/
            goto LABEL_92; /*0x100512dbb*/
        }
        else
        {
          v25 = a1[2]; /*0x100512dd0*/
          if ( !v25 ) /*0x100512dd7*/
            return nullptr; /*0x100512f8c*/
          a1[2] = v25 - 1; /*0x100512de1*/
          LODWORD(v10) = *(unsigned __int8 *)(a1[1] + v25 - 1); /*0x100512de9*/
          v3 = a1[4]; /*0x100512def*/
          v4 = a1[5]; /*0x100512df3*/
          if ( v4 >= v3 ) /*0x100512dfa*/
          {
LABEL_92:
            LOBYTE(v1) = v10; /*0x100512fae*/
LABEL_93:
            v37 = 2; /*0x100512fb1*/
            if ( (_BYTE)v1 != 91 ) /*0x100512fba*/
            {
              if ( (unsigned __int8)v1 != 123 ) /*0x100512fc3*/
                core::panicking::panic::h286e2dd5eab048be((__int64)&unk_1012C879B, 40, (__int64)&off_101531DA0); /*0x10051303f*/
              v37 = 3; /*0x100512fc5*/
            }
LABEL_96:
            v39[0] = v37; /*0x100512fca*/
            return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v39); /*0x100512fca*/
          }
        }
LABEL_52:
        v26 = a1[1]; /*0x100512e00*/
        v27 = a1[2]; /*0x100512e04*/
        v5 = a1[3]; /*0x100512e08*/
        v1 = v10; /*0x100512e0c*/
        while ( 1 ) /*0x100512e1f*/
        {
          while ( 1 ) /*0x100512e10*/
          {
            v28 = *(unsigned __int8 *)(v5 + v4); /*0x100512e10*/
            if ( v28 > 0x2C ) /*0x100512e19*/
              goto LABEL_58; /*0x100512e19*/
            if ( !_bittest64((const __int64 *)&v6, v28) ) /*0x100512e1b*/
              break; /*0x100512e1b*/
            a1[5] = ++v4; /*0x100512e24*/
            if ( v3 == v4 ) /*0x100512e2b*/
              goto LABEL_93; /*0x100512e2b*/
          }
          if ( v28 == 44 ) /*0x100512e36*/
          {
            if ( (v14 & 1) != 0 ) /*0x100512e94*/
              a1[5] = ++v4; /*0x100512e99*/
            goto LABEL_70; /*0x100512e99*/
          }
LABEL_58:
          if ( (_DWORD)v28 == 93 ) /*0x100512e3c*/
          {
            if ( (_BYTE)v1 != 91 ) /*0x100512e50*/
              break; /*0x100512e50*/
            goto LABEL_63; /*0x100512e50*/
          }
          if ( (_DWORD)v28 != 125 || (_BYTE)v1 != 123 ) /*0x100512e48*/
            break; /*0x100512e48*/
LABEL_63:
          a1[5] = ++v4; /*0x100512e55*/
          if ( v27-- == 0 ) /*0x100512e59*/
            return nullptr; /*0x100512e5d*/
          a1[2] = v27; /*0x100512e63*/
          v1 = *(unsigned __int8 *)(v26 + v27); /*0x100512e67*/
          v14 = 1; /*0x100512e6c*/
          if ( v4 >= v3 ) /*0x100512e72*/
            goto LABEL_93; /*0x100512e72*/
        }
        if ( (v14 & 1) != 0 ) /*0x100512e84*/
        {
          v37 = 7; /*0x100512ff3*/
          if ( (_BYTE)v1 != 91 ) /*0x100512ffc*/
          {
            if ( (unsigned __int8)v1 != 123 ) /*0x100513005*/
              core::panicking::panic::h286e2dd5eab048be((__int64)&unk_1012C879B, 40, (__int64)&off_101531DB8); /*0x100513057*/
            v37 = 8; /*0x100513007*/
          }
          goto LABEL_96; /*0x10051300c*/
        }
LABEL_70:
        if ( (_BYTE)v1 != 123 ) /*0x100512ea1*/
        {
LABEL_5:
          v7 = 1; /*0x100512b4e*/
          if ( v4 >= v3 ) /*0x100512b54*/
            goto LABEL_87; /*0x100512b54*/
          continue; /*0x100512b54*/
        }
        if ( v4 >= v3 ) /*0x100512eaa*/
          goto LABEL_89; /*0x100512eaa*/
        v30 = v4 + 1; /*0x100512eb0*/
        v31 = -(__int64)v3; /*0x100512eb3*/
        while ( 1 ) /*0x100512eb6*/
        {
          v32 = *(unsigned __int8 *)(v5 + v30 - 1); /*0x100512eb6*/
          if ( v32 > 0x22 ) /*0x100512ebf*/
            goto LABEL_103; /*0x100512ebf*/
          if ( !_bittest64((const __int64 *)&v6, v32) ) /*0x100512ec5*/
            break; /*0x100512ec5*/
          a1[5] = v30; /*0x100512ecb*/
          v33 = v31 + v30++ + 1; /*0x100512ecf*/
          if ( v33 == 1 ) /*0x100512edb*/
            goto LABEL_89; /*0x100512edb*/
        }
        if ( v32 != 34 ) /*0x100512ef4*/
        {
LABEL_103:
          v39[0] = 17; /*0x10051300e*/
          return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v39); /*0x100513016*/
        }
        a1[5] = v30; /*0x100512efa*/
        result = (_QWORD *)_$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::ignore_str::hfb27a7aad3564612( /*0x100512f02*/
                             v38,
                             34);
        if ( result ) /*0x100512f0a*/
          return result; /*0x100512f0a*/
        v3 = a1[4]; /*0x100512f10*/
        v34 = a1[5]; /*0x100512f14*/
        if ( v34 >= v3 ) /*0x100512f1b*/
        {
LABEL_89:
          v39[0] = 3; /*0x100512f8e*/
          return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v39); /*0x100512f96*/
        }
        v5 = *v38; /*0x100512f21*/
        v4 = v34 + 1; /*0x100512f24*/
        while ( 1 ) /*0x100512f2d*/
        {
          v35 = *(unsigned __int8 *)(v5 + v4 - 1); /*0x100512f2d*/
          if ( v35 > 0x3A ) /*0x100512f36*/
            goto LABEL_104; /*0x100512f36*/
          if ( !_bittest64((const __int64 *)&v6, v35) ) /*0x100512f3c*/
            break; /*0x100512f3c*/
          a1[5] = v4; /*0x100512f46*/
          v36 = v4 - v3 + 1; /*0x100512f4a*/
          ++v4; /*0x100512f4f*/
          if ( v36 == 1 ) /*0x100512f56*/
            goto LABEL_89; /*0x100512f56*/
        }
        if ( v35 == 58 ) /*0x100512b44*/
        {
          a1[5] = v4; /*0x100512b4a*/
          goto LABEL_5; /*0x100512b4a*/
        }
LABEL_104:
        v39[0] = 6; /*0x100513018*/
        return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v39);
      case 'n': /*0x100512bdd*/
        a1[5] = v8 - 4; /*0x100512d11*/
        if ( v8 - 4 >= v3 ) /*0x100512d18*/
          goto LABEL_90; /*0x100512d18*/
        v21 = *(_BYTE *)(v5 + v8 - 4); /*0x100512d1e*/
        a1[5] = v8 - 3; /*0x100512d27*/
        if ( v21 != 117 ) /*0x100512d2f*/
          goto LABEL_99; /*0x100512d2f*/
        if ( v8 - 3 >= v3 ) /*0x100512d38*/
          goto LABEL_90; /*0x100512d38*/
        v22 = *(_BYTE *)(v5 + v8 - 3); /*0x100512d3e*/
        a1[5] = v8 - 2; /*0x100512d47*/
        if ( v22 != 108 ) /*0x100512d4f*/
          goto LABEL_99; /*0x100512d4f*/
        if ( v8 - 2 >= v3 ) /*0x100512d58*/
          goto LABEL_90; /*0x100512d58*/
        v23 = *(_BYTE *)(v5 + v8 - 2); /*0x100512d5e*/
        a1[5] = v8 - 1; /*0x100512d66*/
        if ( v23 != 108 ) /*0x100512d6d*/
          goto LABEL_99; /*0x100512d6d*/
        goto LABEL_47; /*0x100512d6d*/
      case 't': /*0x100512bdd*/
        a1[5] = v8 - 4; /*0x100512ca6*/
        if ( v8 - 4 >= v3 ) /*0x100512cad*/
          goto LABEL_90; /*0x100512cad*/
        v19 = *(_BYTE *)(v5 + v8 - 4); /*0x100512cb3*/
        a1[5] = v8 - 3; /*0x100512cbc*/
        if ( v19 != 114 ) /*0x100512cc4*/
          goto LABEL_99; /*0x100512cc4*/
        if ( v8 - 3 >= v3 ) /*0x100512ccd*/
          goto LABEL_90; /*0x100512ccd*/
        v20 = *(_BYTE *)(v5 + v8 - 3); /*0x100512cd3*/
        a1[5] = v8 - 2; /*0x100512cdc*/
        if ( v20 != 117 ) /*0x100512ce4*/
          goto LABEL_99; /*0x100512ce4*/
        if ( v8 - 2 >= v3 ) /*0x100512ced*/
          goto LABEL_90; /*0x100512ced*/
        v18 = *(_BYTE *)(v5 + v8-- - 2); /*0x100512cf3*/
        goto LABEL_34; /*0x100512cf8*/
      default:
        if ( (unsigned __int8)(v10 - 48) < 0xAu ) /*0x100512d8d*/
          goto LABEL_45; /*0x100512d8d*/
        v39[0] = 10; /*0x100513022*/
        return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v39); /*0x10051302a*/
    }
  }
}