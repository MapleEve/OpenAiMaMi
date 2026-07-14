// win 1.1.8 set_codex_router_no_account_mode node va=0x14108f360 depth=1
// F360
unsigned __int8 *__fastcall sub_14108F360(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v5; // rsi
  unsigned __int8 v6; // al
  unsigned __int64 v7; // r14
  unsigned __int16 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r14
  bool v11; // sf
  __int64 v12; // r15
  __int64 v13; // rax
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  char v17; // [rsp+4Fh] [rbp-1h] BYREF
  __int64 v18; // [rsp+50h] [rbp+0h]

  v18 = -2; /*0x14108f371*/
  v4 = a2; /*0x14108f37c*/
  v5 = a1; /*0x14108f37f*/
  if ( (a3 & 1) != 0 ) /*0x14108f386*/
  {
    v10 = a3 >> 1; /*0x14108f42a*/
  }
  else
  {
    LOBYTE(a2) = *a2; /*0x14108f38c*/
    if ( !(_BYTE)a2 ) /*0x14108f391*/
    {
LABEL_17:
      v13 = 1; /*0x14108f46f*/
      v10 = 0; /*0x14108f474*/
      goto LABEL_18; /*0x14108f474*/
    }
    v6 = 0; /*0x14108f397*/
    a1 = v4; /*0x14108f399*/
    v7 = 0; /*0x14108f39c*/
    do /*0x14108f3be*/
    {
      v8 = (unsigned __int16 *)(a1 + 1); /*0x14108f3c0*/
      if ( (char)a2 >= 0 ) /*0x14108f3c5*/
      {
        v7 += (unsigned __int8)a2; /*0x14108f3b3*/
        a1 = (unsigned __int8 *)v8 + (unsigned __int8)a2; /*0x14108f3b6*/
      }
      else if ( __OFSUB__(-(char)a2, 1) ) /*0x14108f3ca*/
      {
        v9 = *v8; /*0x14108f3cf*/
        v7 += v9; /*0x14108f3d2*/
        a1 = (unsigned __int8 *)v8 + v9 + 2; /*0x14108f3d8*/
      }
      else
      {
        v6 |= v7 == 0; /*0x14108f3e5*/
        a1 = (unsigned __int8 *)v8 /*0x14108f422*/
           + (((unsigned __int8)a2 >> 1) & 2)
           + (((unsigned __int8)a2 >> 2) & 2)
           + ((unsigned __int8)(((_BYTE)a2 << 7) | (32 * (_BYTE)a2) & 0x40) >> 5);
      }
      a2 = (unsigned __int8 *)*a1; /*0x14108f3b9*/
    }
    while ( (_BYTE)a2 ); /*0x14108f3be*/
    LOBYTE(a1) = v7 < 0x10; /*0x14108f433*/
    if ( ((v7 < 0x10) & v6) != 0 ) /*0x14108f438*/
    {
      v10 = 0; /*0x14108f43a*/
    }
    else
    {
      v11 = (v7 & 0x4000000000000000LL) != 0; /*0x14108f43f*/
      v10 = 2 * v7; /*0x14108f43f*/
      if ( v11 ) /*0x14108f442*/
      {
        v12 = 0; /*0x14108f4ec*/
        goto LABEL_22; /*0x14108f4ec*/
      }
    }
  }
  if ( !v10 ) /*0x14108f44b*/
    goto LABEL_17; /*0x14108f44b*/
  nullsub_1(a1, a2); /*0x14108f44d*/
  v12 = 1; /*0x14108f452*/
  v13 = sub_140001360(v10, 1); /*0x14108f460*/
  if ( !v13 ) /*0x14108f468*/
LABEL_22:
    sub_1412AD46B(v12, v10); /*0x14108f4ef*/
LABEL_18:
  *(_QWORD *)&v15 = v10; /*0x14108f477*/
  *((_QWORD *)&v15 + 1) = v13; /*0x14108f47b*/
  v16 = 0; /*0x14108f47f*/
  if ( (unsigned __int8)sub_1410958B0(&v15, &off_1415C0328, v4, a3) ) /*0x14108f498*/
    sub_1412AD780( /*0x14108f4e4*/
      (unsigned int)aAFormattingTra_15,
      86,
      (unsigned int)&v17,
      (unsigned int)&unk_1415BFFE0,
      (__int64)&off_1415C03F8);
  *((_QWORD *)v5 + 2) = v16; /*0x14108f4a6*/
  *(_OWORD *)v5 = v15; /*0x14108f4ae*/
  return v5; /*0x14108f4b4*/
}