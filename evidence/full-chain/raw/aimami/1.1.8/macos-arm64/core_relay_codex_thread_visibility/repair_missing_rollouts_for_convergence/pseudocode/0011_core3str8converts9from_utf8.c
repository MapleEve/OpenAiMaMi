// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x1010e9080 d=1
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

  result = a1; /*0x1010e9089*/
  v4 = 0; /*0x1010e908c*/
  if ( a3 >= 0xF ) /*0x1010e9095*/
    v4 = a3 - 15; /*0x1010e9095*/
  if ( !a3 ) /*0x1010e909c*/
  {
LABEL_50:
    *(_QWORD *)(result + 8) = a2; /*0x1010e9257*/
    *(_QWORD *)(result + 16) = a3; /*0x1010e925b*/
    v12 = 0; /*0x1010e925f*/
    goto LABEL_55; /*0x1010e9261*/
  }
  v5 = 0; /*0x1010e90ad*/
  while ( 1 ) /*0x1010e90df*/
  {
    v6 = *(unsigned __int8 *)(a2 + v5); /*0x1010e90df*/
    if ( (v6 & 0x80u) == 0LL ) /*0x1010e90e5*/
    {
      if ( (((((_BYTE)a2 + 7) & 0xF8) - (_BYTE)a2 - (_BYTE)v5) & 7) != 0 ) /*0x1010e90f1*/
      {
        ++v5; /*0x1010e90f3*/
      }
      else
      {
        while ( v5 < v4 && ((*(_QWORD *)(a2 + v5) | *(_QWORD *)(a2 + v5 + 8)) & 0x8080808080808080LL) == 0 ) /*0x1010e9115*/
          v5 += 16LL; /*0x1010e9100*/
        if ( v5 < a3 ) /*0x1010e911a*/
        {
          while ( *(char *)(a2 + v5) >= 0 ) /*0x1010e9124*/
          {
            if ( a3 == ++v5 ) /*0x1010e912c*/
              goto LABEL_50; /*0x1010e912c*/
          }
        }
      }
      goto LABEL_6; /*0x1010e90f6*/
    }
    v7 = byte_1013FB8C5[v6]; /*0x1010e9140*/
    v8 = 1; /*0x1010e9145*/
    if ( v7 != 4 ) /*0x1010e914c*/
    {
      if ( v7 == 3 ) /*0x1010e9152*/
      {
        if ( v5 + 1 >= a3 ) /*0x1010e9184*/
          goto LABEL_51; /*0x1010e9184*/
        v10 = *(_BYTE *)(a2 + v5 + 1); /*0x1010e918a*/
        if ( v6 == 224 ) /*0x1010e9196*/
        {
          if ( (v10 & 0xE0) != 0xA0 ) /*0x1010e91e1*/
            goto LABEL_52; /*0x1010e91e1*/
        }
        else if ( (_DWORD)v6 == 237 ) /*0x1010e919e*/
        {
          if ( v10 > -97 ) /*0x1010e91a4*/
            goto LABEL_52; /*0x1010e91a4*/
        }
        else if ( (unsigned __int8)(v6 + 31) >= 0xCu && (LOBYTE(v6) = v6 & 0xFE, (_BYTE)v6 != 0xEE) || v10 >= -64 ) /*0x1010e920a*/
        {
LABEL_52:
          LOBYTE(v6) = 1; /*0x1010e9268*/
          goto LABEL_54; /*0x1010e926a*/
        }
        v9 = v5 + 2; /*0x1010e920c*/
        if ( v5 + 2 >= a3 ) /*0x1010e9213*/
          goto LABEL_51; /*0x1010e9213*/
        if ( *(char *)(a2 + v9) > -65 ) /*0x1010e921a*/
          break; /*0x1010e921a*/
      }
      else
      {
        if ( v7 != 2 ) /*0x1010e9158*/
          goto LABEL_52; /*0x1010e9158*/
        v9 = v5 + 1; /*0x1010e915e*/
        if ( v5 + 1 >= a3 ) /*0x1010e9165*/
        {
LABEL_51:
          v8 = 0; /*0x1010e9263*/
          goto LABEL_54; /*0x1010e9266*/
        }
        LOBYTE(v6) = 1; /*0x1010e9170*/
        if ( *(char *)(a2 + v9) > -65 ) /*0x1010e9172*/
          goto LABEL_54; /*0x1010e9172*/
      }
      goto LABEL_5; /*0x1010e9172*/
    }
    if ( v5 + 1 >= a3 ) /*0x1010e91b2*/
      goto LABEL_51; /*0x1010e91b2*/
    v11 = *(_BYTE *)(a2 + v5 + 1); /*0x1010e91b8*/
    if ( v6 == 240 ) /*0x1010e91c4*/
    {
      if ( (unsigned __int8)(v11 + 112) >= 0x30u ) /*0x1010e91f0*/
        goto LABEL_52; /*0x1010e91f0*/
    }
    else if ( (_DWORD)v6 == 244 ) /*0x1010e91cc*/
    {
      if ( v11 > -113 ) /*0x1010e91d2*/
        goto LABEL_52; /*0x1010e91d2*/
    }
    else if ( (unsigned __int8)(v6 + 15) > 2u || v11 >= -64 ) /*0x1010e922e*/
    {
      goto LABEL_52; /*0x1010e922e*/
    }
    v6 = v5 + 2; /*0x1010e9230*/
    if ( v5 + 2 >= a3 ) /*0x1010e9237*/
      goto LABEL_51; /*0x1010e9237*/
    if ( *(char *)(a2 + v6) > -65 ) /*0x1010e923d*/
      break; /*0x1010e923d*/
    v9 = v5 + 3; /*0x1010e923f*/
    if ( v5 + 3 >= a3 ) /*0x1010e9246*/
      goto LABEL_51; /*0x1010e9246*/
    if ( *(char *)(a2 + v9) >= -64 ) /*0x1010e924d*/
    {
      LOBYTE(v6) = 3; /*0x1010e9253*/
      goto LABEL_54; /*0x1010e9255*/
    }
LABEL_5:
    v5 = v9 + 1; /*0x1010e90d0*/
LABEL_6:
    if ( v5 >= a3 ) /*0x1010e90d9*/
      goto LABEL_50; /*0x1010e90d9*/
  }
  LOBYTE(v6) = 2; /*0x1010e926c*/
LABEL_54:
  *(_QWORD *)(result + 8) = v5; /*0x1010e926e*/
  *(_BYTE *)(result + 16) = v8; /*0x1010e9272*/
  *(_BYTE *)(result + 17) = v6; /*0x1010e9276*/
  v12 = 1; /*0x1010e9279*/
LABEL_55:
  *(_QWORD *)result = v12; /*0x1010e927e*/
  return result; /*0x1010e9281*/
}