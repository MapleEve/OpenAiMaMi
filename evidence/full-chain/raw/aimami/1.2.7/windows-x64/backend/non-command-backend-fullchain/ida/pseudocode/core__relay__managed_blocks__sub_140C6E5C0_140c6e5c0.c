// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140c6e5c0 | name sub_140C6E5C0
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C6E5C0(__int64 a1, __int64 (__fastcall *a2)())
{
  unsigned __int8 v4; // bl
  bool v5; // r12
  __int64 v6; // rdi
  int **v7; // rax
  signed __int64 v8; // r14
  char *v9; // rdi
  _BYTE *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rsi
  _BYTE *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  _QWORD v17[2]; // [rsp+28h] [rbp-58h] BYREF
  int **v18; // [rsp+38h] [rbp-48h]
  _QWORD v19[3]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  int **v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  int **v24; // [rsp+78h] [rbp-8h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+80h] [rbp+0h]
  _QWORD v26[5]; // [rsp+88h] [rbp+8h] BYREF
  char v27; // [rsp+B0h] [rbp+30h]
  __int16 v28; // [rsp+B8h] [rbp+38h]
  __int64 v29; // [rsp+C0h] [rbp+40h]
  __int64 (__fastcall *v30)(); // [rsp+C8h] [rbp+48h]
  __int64 v31; // [rsp+D0h] [rbp+50h]
  char v32; // [rsp+DFh] [rbp+5Fh] BYREF
  __int64 v33; // [rsp+E0h] [rbp+60h]

  v33 = -2;
  v24 = &off_141A3D998;
  v25 = sub_140186EE0;
  sub_1416ABFD0(v19, &unk_141A3E2E5, &v24);
  v17[0] = &off_141A3D998;
  v17[1] = sub_140186EE0;
  sub_1416ABFD0(&v24, &unk_141A3E2F8, v17);
  v21 = v24;
  v30 = v25;
  v23 = v26[0];
  v32 = 2;
  v24 = nullptr;
  v25 = a2;
  v26[0] = a1;
  v26[1] = a2;
  v26[2] = 0;
  v26[3] = a2;
  v26[4] = 0xA0000000ALL;
  v27 = 1;
  v28 = 0;
  v22 = v19[1];
  v20 = v19[2];
  v31 = 0;
  v29 = 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = v26[0];
    sub_140C9D040(v17, v26);
    if ( LODWORD(v17[0]) == 1 )
    {
      v7 = v24;
      v24 = v18;
      v8 = (char *)v18 - (char *)v7;
      v9 = (char *)v7 + v6;
      if ( v18 != v7 )
        goto LABEL_9;
      goto LABEL_15;
    }
    if ( HIBYTE(v28) )
      break;
    HIBYTE(v28) = 1;
    v8 = (char *)v25 - (char *)v24;
    if ( ((unsigned __int8)v28 | ((char *)v25 != (char *)v24)) != 1 )
      break;
    v9 = (char *)v24 + v26[0];
    if ( v8 )
    {
LABEL_9:
      if ( v9[v8 - 1] == 10 )
      {
        if ( v8 == 1 )
        {
          v8 = 0;
        }
        else if ( v9[v8 - 2] == 13 )
        {
          v8 -= 2LL;
        }
        else
        {
          --v8;
        }
      }
    }
LABEL_15:
    v10 = (_BYTE *)sub_140E91160(v9, v8);
    v12 = v11;
    if ( (unsigned __int8)sub_1402B5F80(&v32, v9, v8) )
    {
      if ( !v12 || *v10 != 91 || v10[v12 - 1] != 93 )
      {
        if ( v5 && (unsigned __int8)sub_140C9E140(aCodexRouterV1, 16, v9, v8) )
          v4 = 1;
        goto LABEL_2;
      }
      if ( v12 == 1 || (char)v10[1] <= -65 )
        sub_141938F40((_DWORD)v10, v12, 1, v12 - 1, (__int64)&off_1419E98C8);
      v13 = v10 + 1;
      v14 = v12 - 2;
      if ( v14 == v20 )
      {
        v5 = (unsigned int)sub_1418F4B70(v13, v22) == 0;
        if ( v14 == v23 )
          goto LABEL_29;
      }
      else
      {
        v5 = 0;
        if ( v14 == v23 )
        {
LABEL_29:
          LOBYTE(v14) = (unsigned int)sub_1418F4B70(v13, v30) == 0;
          goto LABEL_30;
        }
      }
      LODWORD(v14) = 0;
LABEL_30:
      v15 = v29;
      LOBYTE(v15) = v5 | v29;
      v29 = v15;
      LOBYTE(v14) = (v31 | v14) & 1;
      v31 = (unsigned int)v14;
      if ( HIBYTE(v28) )
        goto LABEL_33;
    }
    else
    {
LABEL_2:
      if ( HIBYTE(v28) )
        break;
    }
  }
  LOBYTE(v14) = v31;
LABEL_33:
  if ( v21 )
    sub_140001660(v30, v21, 1);
  if ( v19[0] )
    sub_140001660(v22, v19[0], 1);
  return (v4 << 16) | ((unsigned __int8)v14 << 8) | (unsigned int)(unsigned __int8)v29;
}
