// mac 1.2.2 NEW codexmate_lib8platform17voice_permissions16has_val 0x1013a0390 d=3
__int64 __fastcall core::str::converts::from_utf8::hb32deb9559450f6e(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  int v7; // r14d
  char v8; // r9
  unsigned __int64 v9; // r14
  char v10; // r14
  char v11; // r14
  __int64 v12; // rcx

  result = a1; /*0x1013a0399*/
  v4 = 0; /*0x1013a039c*/
  if ( a3 >= 0xF ) /*0x1013a03a5*/
    v4 = a3 - 15; /*0x1013a03a5*/
  if ( !a3 ) /*0x1013a03ac*/
  {
LABEL_50:
    *(_QWORD *)(result + 8) = a2; /*0x1013a0567*/
    *(_QWORD *)(result + 16) = a3; /*0x1013a056b*/
    v12 = 0; /*0x1013a056f*/
    goto LABEL_55; /*0x1013a0571*/
  }
  v5 = 0; /*0x1013a03bd*/
  while ( 1 ) /*0x1013a03ef*/
  {
    v6 = *(unsigned __int8 *)(a2 + v5); /*0x1013a03ef*/
    if ( (v6 & 0x80u) == 0LL ) /*0x1013a03f5*/
    {
      if ( (((((_BYTE)a2 + 7) & 0xF8) - (_BYTE)a2 - (_BYTE)v5) & 7) != 0 ) /*0x1013a0401*/
      {
        ++v5; /*0x1013a0403*/
      }
      else
      {
        while ( v5 < v4 && ((*(_QWORD *)(a2 + v5) | *(_QWORD *)(a2 + v5 + 8)) & 0x8080808080808080LL) == 0 ) /*0x1013a0425*/
          v5 += 16LL; /*0x1013a0410*/
        if ( v5 < a3 ) /*0x1013a042a*/
        {
          while ( *(char *)(a2 + v5) >= 0 ) /*0x1013a0434*/
          {
            if ( a3 == ++v5 ) /*0x1013a043c*/
              goto LABEL_50; /*0x1013a043c*/
          }
        }
      }
      goto LABEL_6; /*0x1013a0406*/
    }
    v7 = byte_1016E4E25[v6]; /*0x1013a0450*/
    v8 = 1; /*0x1013a0455*/
    if ( v7 != 4 ) /*0x1013a045c*/
    {
      if ( v7 == 3 ) /*0x1013a0462*/
      {
        if ( v5 + 1 >= a3 ) /*0x1013a0494*/
          goto LABEL_51; /*0x1013a0494*/
        v10 = *(_BYTE *)(a2 + v5 + 1); /*0x1013a049a*/
        if ( v6 == 224 ) /*0x1013a04a6*/
        {
          if ( (v10 & 0xE0) != 0xA0 ) /*0x1013a04f1*/
            goto LABEL_52; /*0x1013a04f1*/
        }
        else if ( (_DWORD)v6 == 237 ) /*0x1013a04ae*/
        {
          if ( v10 > -97 ) /*0x1013a04b4*/
            goto LABEL_52; /*0x1013a04b4*/
        }
        else if ( (unsigned __int8)(v6 + 31) >= 0xCu && (LOBYTE(v6) = v6 & 0xFE, (_BYTE)v6 != 0xEE) || v10 >= -64 ) /*0x1013a051a*/
        {
LABEL_52:
          LOBYTE(v6) = 1; /*0x1013a0578*/
          goto LABEL_54; /*0x1013a057a*/
        }
        v9 = v5 + 2; /*0x1013a051c*/
        if ( v5 + 2 >= a3 ) /*0x1013a0523*/
          goto LABEL_51; /*0x1013a0523*/
        if ( *(char *)(a2 + v9) > -65 ) /*0x1013a052a*/
          break; /*0x1013a052a*/
      }
      else
      {
        if ( v7 != 2 ) /*0x1013a0468*/
          goto LABEL_52; /*0x1013a0468*/
        v9 = v5 + 1; /*0x1013a046e*/
        if ( v5 + 1 >= a3 ) /*0x1013a0475*/
        {
LABEL_51:
          v8 = 0; /*0x1013a0573*/
          goto LABEL_54; /*0x1013a0576*/
        }
        LOBYTE(v6) = 1; /*0x1013a0480*/
        if ( *(char *)(a2 + v9) > -65 ) /*0x1013a0482*/
          goto LABEL_54; /*0x1013a0482*/
      }
      goto LABEL_5; /*0x1013a0482*/
    }
    if ( v5 + 1 >= a3 ) /*0x1013a04c2*/
      goto LABEL_51; /*0x1013a04c2*/
    v11 = *(_BYTE *)(a2 + v5 + 1); /*0x1013a04c8*/
    if ( v6 == 240 ) /*0x1013a04d4*/
    {
      if ( (unsigned __int8)(v11 + 112) >= 0x30u ) /*0x1013a0500*/
        goto LABEL_52; /*0x1013a0500*/
    }
    else if ( (_DWORD)v6 == 244 ) /*0x1013a04dc*/
    {
      if ( v11 > -113 ) /*0x1013a04e2*/
        goto LABEL_52; /*0x1013a04e2*/
    }
    else if ( (unsigned __int8)(v6 + 15) > 2u || v11 >= -64 ) /*0x1013a053e*/
    {
      goto LABEL_52; /*0x1013a053e*/
    }
    v6 = v5 + 2; /*0x1013a0540*/
    if ( v5 + 2 >= a3 ) /*0x1013a0547*/
      goto LABEL_51; /*0x1013a0547*/
    if ( *(char *)(a2 + v6) > -65 ) /*0x1013a054d*/
      break; /*0x1013a054d*/
    v9 = v5 + 3; /*0x1013a054f*/
    if ( v5 + 3 >= a3 ) /*0x1013a0556*/
      goto LABEL_51; /*0x1013a0556*/
    if ( *(char *)(a2 + v9) >= -64 ) /*0x1013a055d*/
    {
      LOBYTE(v6) = 3; /*0x1013a0563*/
      goto LABEL_54; /*0x1013a0565*/
    }
LABEL_5:
    v5 = v9 + 1; /*0x1013a03e0*/
LABEL_6:
    if ( v5 >= a3 ) /*0x1013a03e9*/
      goto LABEL_50; /*0x1013a03e9*/
  }
  LOBYTE(v6) = 2; /*0x1013a057c*/
LABEL_54:
  *(_QWORD *)(result + 8) = v5; /*0x1013a057e*/
  *(_BYTE *)(result + 16) = v8; /*0x1013a0582*/
  *(_BYTE *)(result + 17) = v6; /*0x1013a0586*/
  v12 = 1; /*0x1013a0589*/
LABEL_55:
  *(_QWORD *)result = v12; /*0x1013a058e*/
  return result; /*0x1013a0591*/
}