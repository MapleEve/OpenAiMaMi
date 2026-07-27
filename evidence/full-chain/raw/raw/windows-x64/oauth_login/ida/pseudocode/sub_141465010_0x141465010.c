// module: codexmate_lib/core/oauth_login
// addr: 0x141465010
// name: sub_141465010
// win 1.2.1 | module src/core/oauth_login.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_141465010(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  char *v12; // r12
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h]
  unsigned __int64 v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+48h] [rbp-8h]
  __int64 v21; // [rsp+50h] [rbp+0h]

  v21 = -2;
  v6 = a2;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64 *, __int64, __int64, unsigned __int64))(a5 + 40))(&v16, a4, a1, a2);
    v20 = v16;
    v19 = v17;
    v6 = v18;
    if ( !v18 )
      goto LABEL_27;
  }
  else
  {
    v19 = a1;
    v17 = a1;
    v18 = a2;
    v16 = -1;
    v20 = -1;
    if ( !a2 )
      goto LABEL_27;
  }
  v7 = 0x20000000000019LL;
  v8 = v19;
  do
  {
    v9 = *(unsigned __int8 *)v8;
    v10 = (unsigned int)(v9 - 42);
    if ( (unsigned int)v10 <= 0x35 && _bittest64(&v7, v10)
      || (unsigned __int8)(v9 - 48) < 0xAu
      || (unsigned __int8)((v9 & 0xDF) - 65) < 0x1Au )
    {
      v11 = 1;
      if ( v6 == 1 )
      {
        v12 = (char *)v8;
      }
      else
      {
        do
        {
          v13 = *(unsigned __int8 *)(v8 + v11);
          v14 = (unsigned int)(v13 - 42);
          if ( ((unsigned int)v14 > 0x35 || !_bittest64(&v7, v14))
            && (unsigned __int8)(v13 - 58) <= 0xF5u
            && (unsigned __int8)((v13 & 0xDF) - 91) < 0xE6u )
          {
            v12 = (char *)v8;
            v8 += v11;
            v6 -= v11;
            goto LABEL_18;
          }
          ++v11;
        }
        while ( v6 != v11 );
        v12 = (char *)v8;
        v11 = v6;
      }
      v8 = 1;
      v6 = 0;
    }
    else
    {
      ++v8;
      --v6;
      v11 = 1;
      if ( (_BYTE)v9 == 32 )
      {
        v12 = (char *)&unk_141A37F60;
      }
      else
      {
        v12 = (char *)*off_141EC9048 + 3 * v9;
        v11 = 3;
      }
    }
LABEL_18:
    v15 = a3[2];
    if ( v11 > *a3 - v15 )
    {
      sub_14169C860(a3, a3[2], v11);
      v15 = a3[2];
    }
    sub_141684120(v15 + a3[1], v12, v11);
    a3[2] = v11 + v15;
  }
  while ( v6 );
LABEL_27:
  if ( v20 > 0 )
    sub_140001660(v19, v20, 1);
}