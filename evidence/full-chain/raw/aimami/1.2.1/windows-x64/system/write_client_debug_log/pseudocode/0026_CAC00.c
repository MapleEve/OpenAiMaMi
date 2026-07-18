// win 1.2.1 NEW write_client_debug_log 0x1408cac00 d=2
__int64 __fastcall sub_1408CAC00(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 i; // r14
  __int64 result; // rax
  __int64 *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 16); /*0x1408cac0f*/
  if ( v1 ) /*0x1408cac16*/
  {
    v2 = *(_QWORD *)(a1 + 8); /*0x1408cac1c*/
    for ( i = 0; i != v1; ++i ) /*0x1408cac20*/
    {
      result = 56 * i; /*0x1408cac3c*/
      v5 = (__int64 *)(v2 + 56 * i); /*0x1408cac40*/
      if ( *v5 ) /*0x1408cac44*/
        result = sub_140001360(v5[1], *v5, 1); /*0x1408cac57*/
      v6 = v5[4]; /*0x1408cac5c*/
      v7 = v5[5]; /*0x1408cac60*/
      if ( v7 ) /*0x1408cac67*/
      {
        v8 = (__int64 *)(v6 + 16); /*0x1408cac69*/
        do /*0x1408cac77*/
        {
          if ( *((_DWORD *)v8 - 4) >= 4u ) /*0x1408cac7e*/
          {
            v9 = *(v8 - 1); /*0x1408cac80*/
            if ( v9 ) /*0x1408cac87*/
              result = sub_140001360(*v8, 8 * v9, 4); /*0x1408cac97*/
          }
          v8 += 4; /*0x1408cac70*/
          --v7; /*0x1408cac74*/
        }
        while ( v7 ); /*0x1408cac77*/
      }
      v10 = v5[3]; /*0x1408caca0*/
      if ( v10 ) /*0x1408caca7*/
        result = sub_140001360(v6, 32 * v10, 8); /*0x1408cacb6*/
    }
  }
  return result; /*0x1408cacc0*/
}