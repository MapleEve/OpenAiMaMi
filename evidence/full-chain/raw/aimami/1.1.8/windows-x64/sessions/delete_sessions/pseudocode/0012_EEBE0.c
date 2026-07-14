// win 1.1.8 delete_sessions node va=0x1401eebe0 depth=1
// EEBE0
__int64 __fastcall sub_1401EEBE0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 i; // r14
  _QWORD *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r12
  _QWORD *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 j; // r14
  _QWORD *v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r12
  _QWORD *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 result; // rax
  _QWORD *v22; // [rsp+28h] [rbp-8h]

  v22 = a1; /*0x1401eec03*/
  if ( !__OFSUB__(0, a1[8]) ) /*0x1401eec07*/
  {
    if ( !_InterlockedDecrement64((volatile signed __int64 *)a1[11]) ) /*0x1401eec0d*/
      sub_140F31620(a1 + 11); /*0x1401eec1b*/
    a1 = v22; /*0x1401eec21*/
    v1 = v22[8]; /*0x1401eec25*/
    if ( v1 ) /*0x1401eec2c*/
    {
      sub_140001370(v22[9], v1, 1); /*0x1401eec3b*/
      a1 = v22; /*0x1401eec40*/
    }
  }
  v2 = a1[4]; /*0x1401eec43*/
  if ( v2 ) /*0x1401eec4a*/
  {
    v3 = v22[3]; /*0x1401eec54*/
    for ( i = 0; i != v2; ++i ) /*0x1401eec58*/
    {
      v5 = (_QWORD *)(v3 + 56 * i); /*0x1401eec70*/
      if ( *v5 ) /*0x1401eec74*/
        sub_140001370(v5[1], *v5, 1); /*0x1401eec87*/
      v6 = v5[4]; /*0x1401eec8c*/
      v7 = v5[5]; /*0x1401eec90*/
      if ( v7 ) /*0x1401eec97*/
      {
        v8 = (_QWORD *)(v6 + 16); /*0x1401eec99*/
        do /*0x1401eeca7*/
        {
          if ( *((_DWORD *)v8 - 4) >= 4u ) /*0x1401eecae*/
          {
            v9 = *(v8 - 1); /*0x1401eecb0*/
            if ( v9 ) /*0x1401eecb7*/
              sub_140001370(*v8, 8 * v9, 4); /*0x1401eecc7*/
          }
          v8 += 4; /*0x1401eeca0*/
          --v7; /*0x1401eeca4*/
        }
        while ( v7 ); /*0x1401eeca7*/
      }
      v10 = v5[3]; /*0x1401eecd0*/
      if ( v10 ) /*0x1401eecd7*/
        sub_140001370(v6, 32 * v10, 8); /*0x1401eece6*/
    }
  }
  v11 = v22[2]; /*0x1401eecf4*/
  if ( v11 ) /*0x1401eecfb*/
    sub_140001370(v22[3], 56 * v11, 8); /*0x1401eed0b*/
  v12 = v22[7]; /*0x1401eed10*/
  if ( v12 ) /*0x1401eed17*/
  {
    v13 = v22[6]; /*0x1401eed21*/
    for ( j = 0; j != v12; ++j ) /*0x1401eed25*/
    {
      v15 = (_QWORD *)(v13 + 56 * j); /*0x1401eed40*/
      if ( *v15 ) /*0x1401eed44*/
        sub_140001370(v15[1], *v15, 1); /*0x1401eed57*/
      v16 = v15[4]; /*0x1401eed5c*/
      v17 = v15[5]; /*0x1401eed60*/
      if ( v17 ) /*0x1401eed67*/
      {
        v18 = (_QWORD *)(v16 + 16); /*0x1401eed69*/
        do /*0x1401eed77*/
        {
          if ( *((_DWORD *)v18 - 4) >= 4u ) /*0x1401eed7e*/
          {
            v19 = *(v18 - 1); /*0x1401eed80*/
            if ( v19 ) /*0x1401eed87*/
              sub_140001370(*v18, 8 * v19, 4); /*0x1401eed97*/
          }
          v18 += 4; /*0x1401eed70*/
          --v17; /*0x1401eed74*/
        }
        while ( v17 ); /*0x1401eed77*/
      }
      v20 = v15[3]; /*0x1401eeda0*/
      if ( v20 ) /*0x1401eeda7*/
        sub_140001370(v16, 32 * v20, 8); /*0x1401eedb6*/
    }
  }
  result = v22[5]; /*0x1401eedc4*/
  if ( result ) /*0x1401eedcb*/
    return sub_140001370(v22[6], 56 * result, 8); /*0x1401eedeb*/
  return result; /*0x1401eeddb*/
}