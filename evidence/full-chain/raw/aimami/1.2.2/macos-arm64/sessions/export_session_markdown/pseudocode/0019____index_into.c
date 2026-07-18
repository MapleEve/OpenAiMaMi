// mac 1.2.2 NEW export_session_markdown 0x101315870 d=1
__int64 __fastcall _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
        const void *a1,
        size_t a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  size_t v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  char v12; // cl
  __int64 v14; // [rsp+10h] [rbp-40h]
  __int64 v15; // [rsp+18h] [rbp-38h]
  __int64 i; // [rsp+20h] [rbp-30h]

  if ( *(_BYTE *)a3 == 5 ) /*0x10131588c*/
  {
    v3 = *(_QWORD *)(a3 + 8); /*0x101315892*/
    if ( v3 ) /*0x101315899*/
    {
      for ( i = *(_QWORD *)(a3 + 16); ; --i ) /*0x1013158a3*/
      {
        v4 = v3 + 360; /*0x1013158a7*/
        v14 = v3; /*0x1013158b5*/
        v5 = v3 - 32; /*0x1013158b9*/
        v15 = *(unsigned __int16 *)(v3 + 626); /*0x1013158bd*/
        v6 = 3LL * (unsigned int)(8 * v15); /*0x1013158c8*/
        v7 = -1; /*0x1013158cc*/
        do /*0x10131592c*/
        {
          if ( !v6 ) /*0x1013158e3*/
          {
            v7 = v15; /*0x101315940*/
            goto LABEL_14; /*0x101315940*/
          }
          v8 = v4 + 24; /*0x1013158e5*/
          v9 = *(_QWORD *)(v4 + 16); /*0x1013158ed*/
          v10 = a2 - v9; /*0x1013158f8*/
          if ( a2 < v9 ) /*0x1013158fb*/
            v9 = a2; /*0x1013158fb*/
          v11 = memcmp(a1, *(const void **)(v4 + 8), v9); /*0x101315903*/
          if ( v11 ) /*0x10131590c*/
            v10 = v11; /*0x10131590c*/
          v12 = (v10 > 0) - (v10 < 0); /*0x101315919*/
          v5 += 32; /*0x10131591b*/
          ++v7; /*0x10131591f*/
          v6 -= 24; /*0x101315922*/
          v4 = v8; /*0x101315926*/
        }
        while ( v12 == 1 ); /*0x10131592c*/
        if ( !v12 ) /*0x101315933*/
          return v5; /*0x101315933*/
LABEL_14:
        if ( !i ) /*0x10131594c*/
          break; /*0x10131594c*/
        v3 = *(_QWORD *)(v14 + 8 * v7 + 632); /*0x101315956*/
      }
    }
  }
  return 0; /*0x101315969*/
}