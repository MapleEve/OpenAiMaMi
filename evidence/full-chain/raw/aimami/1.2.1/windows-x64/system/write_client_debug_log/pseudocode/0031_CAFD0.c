// win 1.2.1 NEW write_client_debug_log 0x1413cafd0 d=3
__int64 __fastcall sub_1413CAFD0(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // al
  unsigned __int8 *v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int16 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r14
  bool v13; // sf
  __int64 v14; // r15
  __int64 v15; // rax
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  char v19; // [rsp+4Fh] [rbp-1h] BYREF
  __int64 v20; // [rsp+50h] [rbp+0h]

  v20 = -2; /*0x1413cafe1*/
  if ( (a3 & 1) != 0 ) /*0x1413caff6*/
  {
    v12 = a3 >> 1; /*0x1413cb09a*/
  }
  else
  {
    v6 = *a2; /*0x1413caffc*/
    if ( !v6 ) /*0x1413cb001*/
    {
LABEL_17:
      v15 = 1; /*0x1413cb0df*/
      v12 = 0; /*0x1413cb0e4*/
      goto LABEL_18; /*0x1413cb0e4*/
    }
    v7 = 0; /*0x1413cb007*/
    v8 = a2; /*0x1413cb009*/
    v9 = 0; /*0x1413cb00c*/
    do /*0x1413cb02e*/
    {
      v10 = (unsigned __int16 *)(v8 + 1); /*0x1413cb030*/
      if ( (v6 & 0x80u) == 0 ) /*0x1413cb035*/
      {
        v9 += v6; /*0x1413cb023*/
        v8 = (unsigned __int8 *)v10 + v6; /*0x1413cb026*/
      }
      else if ( __OFSUB__(-v6, 1) ) /*0x1413cb03a*/
      {
        v11 = *v10; /*0x1413cb03f*/
        v9 += v11; /*0x1413cb042*/
        v8 = (unsigned __int8 *)v10 + v11 + 2; /*0x1413cb048*/
      }
      else
      {
        v7 |= v9 == 0; /*0x1413cb055*/
        v8 = (unsigned __int8 *)v10 /*0x1413cb092*/
           + ((v6 >> 1) & 2)
           + ((v6 >> 2) & 2)
           + ((unsigned __int8)((v6 << 7) | (32 * v6) & 0x40) >> 5);
      }
      v6 = *v8; /*0x1413cb029*/
    }
    while ( *v8 ); /*0x1413cb02e*/
    if ( ((v9 < 0x10) & v7) != 0 ) /*0x1413cb0a8*/
    {
      v12 = 0; /*0x1413cb0aa*/
    }
    else
    {
      v13 = (v9 & 0x4000000000000000LL) != 0; /*0x1413cb0af*/
      v12 = 2 * v9; /*0x1413cb0af*/
      if ( v13 ) /*0x1413cb0b2*/
      {
        v14 = 0; /*0x1413cb15c*/
        goto LABEL_22; /*0x1413cb15c*/
      }
    }
  }
  if ( !v12 ) /*0x1413cb0bb*/
    goto LABEL_17; /*0x1413cb0bb*/
  nullsub_1(); /*0x1413cb0bd*/
  v14 = 1; /*0x1413cb0c2*/
  v15 = sub_140001350(v12, 1); /*0x1413cb0d0*/
  if ( !v15 ) /*0x1413cb0d8*/
LABEL_22:
    sub_1415F08AB(v14, v12); /*0x1413cb15f*/
LABEL_18:
  *(_QWORD *)&v17 = v12; /*0x1413cb0e7*/
  *((_QWORD *)&v17 + 1) = v15; /*0x1413cb0eb*/
  v18 = 0; /*0x1413cb0ef*/
  if ( (unsigned __int8)sub_1413D1EA0(&v17, &off_141964A58, a2, a3) ) /*0x1413cb108*/
    sub_1415F0BC0((__int64)aAFormattingTra_17, 86, (__int64)&v19, (__int64)&unk_141964710, (__int64)&off_141964B28); /*0x1413cb154*/
  *(_QWORD *)(a1 + 16) = v18; /*0x1413cb116*/
  *(_OWORD *)a1 = v17; /*0x1413cb11e*/
  return a1; /*0x1413cb124*/
}