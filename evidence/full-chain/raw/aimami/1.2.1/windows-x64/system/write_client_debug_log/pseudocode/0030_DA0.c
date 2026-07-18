// win 1.2.1 NEW write_client_debug_log 0x141363da0 d=3
__int64 __fastcall sub_141363DA0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 v11; // r8
  __int64 v12; // rsi
  int v13; // eax
  char v14; // cl
  __int64 i; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h]

  if ( *(_BYTE *)a3 == 5 ) /*0x141363db4*/
  {
    v3 = *(_QWORD *)(a3 + 8); /*0x141363dba*/
    if ( v3 ) /*0x141363dc1*/
    {
      for ( i = *(_QWORD *)(a3 + 16); ; --i ) /*0x141363dd1*/
      {
        v6 = v3 + 360; /*0x141363dd6*/
        v7 = v3 - 32; /*0x141363de5*/
        v17 = *(unsigned __int16 *)(v3 + 626); /*0x141363de9*/
        v8 = 3LL * (unsigned int)(8 * v17); /*0x141363df5*/
        v9 = -1; /*0x141363df9*/
        do /*0x141363e47*/
        {
          if ( !v8 ) /*0x141363e03*/
          {
            v9 = v17; /*0x141363e60*/
            goto LABEL_14; /*0x141363e60*/
          }
          v10 = v6 + 24; /*0x141363e05*/
          v11 = *(_QWORD *)(v6 + 16); /*0x141363e0d*/
          v12 = a2 - v11; /*0x141363e14*/
          if ( a2 < v11 ) /*0x141363e17*/
            v11 = a2; /*0x141363e17*/
          v13 = sub_1415B3670(a1, *(_QWORD *)(v6 + 8), v11); /*0x141363e1e*/
          if ( v13 ) /*0x141363e27*/
            v12 = v13; /*0x141363e27*/
          v14 = (v12 > 0) - (v12 < 0); /*0x141363e34*/
          v7 += 32; /*0x141363e36*/
          ++v9; /*0x141363e3a*/
          v8 -= 24; /*0x141363e3d*/
          v6 = v10; /*0x141363e41*/
        }
        while ( v14 == 1 ); /*0x141363e47*/
        if ( !v14 ) /*0x141363e4e*/
          return v7; /*0x141363e4e*/
LABEL_14:
        if ( !i ) /*0x141363e6e*/
          break; /*0x141363e6e*/
        v3 = *(_QWORD *)(v3 + 8 * v9 + 632); /*0x141363e75*/
      }
    }
  }
  return 0; /*0x141363e87*/
}