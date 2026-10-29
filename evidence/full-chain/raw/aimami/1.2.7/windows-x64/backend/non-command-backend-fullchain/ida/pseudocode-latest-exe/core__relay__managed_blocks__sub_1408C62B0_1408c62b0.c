// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408c62b0 | successor of pre-update 0x140c6e5c0 | session <审计会话>
// match evidence: {"body_sim": 0.878, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
__int64 __fastcall sub_1408C62B0(__int64 a1, __int64 (__fastcall *a2)())
{
  bool v4; // bl
  __int64 v5; // rdi
  int **v6; // rax
  __int64 v7; // r14
  char *v8; // rdi
  __int64 v9; // rax
  char *v10; // rcx
  _BYTE *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rsi
  char v14; // al
  unsigned int v15; // ecx
  _BYTE *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rax
  _QWORD v21[2]; // [rsp+30h] [rbp-50h] BYREF
  int **v22; // [rsp+40h] [rbp-40h]
  _QWORD v23[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v24; // [rsp+60h] [rbp-20h]
  int **v25; // [rsp+68h] [rbp-18h]
  __int64 v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+78h] [rbp-8h]
  int **v28; // [rsp+80h] [rbp+0h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+88h] [rbp+8h]
  _QWORD v30[5]; // [rsp+90h] [rbp+10h] BYREF
  char v31; // [rsp+B8h] [rbp+38h]
  __int16 v32; // [rsp+C0h] [rbp+40h]
  __int64 v33; // [rsp+C8h] [rbp+48h]
  __int64 v34; // [rsp+D0h] [rbp+50h]
  __int64 (__fastcall *v35)(); // [rsp+D8h] [rbp+58h]
  __int64 v36; // [rsp+E0h] [rbp+60h]
  char v37; // [rsp+EFh] [rbp+6Fh] BYREF
  __int64 v38; // [rsp+F0h] [rbp+70h]

  v38 = -2;
  v28 = &off_141A544A8;
  v29 = sub_140191200;
  sub_1416DAFA0(v23, &unk_141A544B8, &v28);
  v21[0] = &off_141A544A8;
  v21[1] = sub_140191200;
  sub_1416DAFA0(&v28, &unk_141A544CB, v21);
  v25 = v28;
  v35 = v29;
  v27 = v30[0];
  v37 = 2;
  v28 = nullptr;
  v29 = a2;
  v30[0] = a1;
  v30[1] = a2;
  v30[2] = 0;
  v30[3] = a2;
  v30[4] = 0xA0000000ALL;
  v31 = 1;
  v32 = 0;
  v26 = v23[1];
  v24 = v23[2];
  v36 = 0;
  v34 = 0;
  v33 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = v30[0];
    sub_1408FD7D0(v21, v30);
    if ( LODWORD(v21[0]) == 1 )
    {
      v6 = v28;
      v28 = v22;
      v7 = (char *)v22 - (char *)v6;
      v8 = (char *)v6 + v5;
      if ( v22 != v6 )
        goto LABEL_10;
      goto LABEL_19;
    }
    if ( HIBYTE(v32) )
      break;
    HIBYTE(v32) = 1;
    v7 = (char *)v29 - (char *)v28;
    if ( ((unsigned __int8)v32 | ((char *)v29 != (char *)v28)) != 1 )
      break;
    v8 = (char *)v28 + v30[0];
    if ( v7 )
    {
LABEL_10:
      if ( v8[v7 - 1] == 10 )
      {
        v9 = v7 - 1;
        if ( v7 == 1 )
        {
          v7 = -1;
          v10 = nullptr;
        }
        else
        {
          v10 = v8;
          if ( v8[v7 - 2] != 13 )
            v10 = nullptr;
          v7 -= 2;
        }
        if ( v10 )
          v8 = v10;
        else
          v7 = v9;
      }
    }
LABEL_19:
    v11 = (_BYTE *)sub_1408FEA60(v8, v7);
    v13 = v12;
    if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v37, v8, v7) )
    {
      if ( !v13 || *v11 != 91 || v11[v13 - 1] != 93 )
      {
        if ( v4 )
        {
          v14 = sub_1408FDB70(aCodexRouterV1, 16, v8, v7);
          v15 = 1;
          if ( !v14 )
            v15 = (unsigned __int8)v33;
          v33 = v15;
        }
        goto LABEL_3;
      }
      if ( v13 == 1 || (char)v11[1] <= -65 )
        sub_14196B4F0((_DWORD)v11, v13, 1, v13 - 1, (__int64)&off_141A496C8);
      v16 = v11 + 1;
      v17 = v13 - 2;
      if ( v17 == v24 )
      {
        v4 = (unsigned int)sub_141923B40(v16, v26, v24) == 0;
        v18 = v27;
        if ( v17 == v27 )
          goto LABEL_32;
      }
      else
      {
        v4 = 0;
        v18 = v27;
        if ( v17 == v27 )
        {
LABEL_32:
          LOBYTE(v17) = (unsigned int)sub_141923B40(v16, v35, v18) == 0;
          goto LABEL_33;
        }
      }
      LODWORD(v17) = 0;
LABEL_33:
      v19 = v34;
      LOBYTE(v19) = v4 | v34;
      v34 = v19;
      LOBYTE(v17) = (v36 | v17) & 1;
      v36 = (unsigned int)v17;
      if ( HIBYTE(v32) )
        goto LABEL_36;
    }
    else
    {
LABEL_3:
      if ( HIBYTE(v32) )
        break;
    }
  }
  LOBYTE(v17) = v36;
LABEL_36:
  if ( v25 )
    sub_140001660(v35, v25, 1);
  if ( v23[0] )
    sub_140001660(v26, v23[0], 1);
  return ((unsigned __int8)v33 << 16) | ((unsigned __int8)v17 << 8) | (unsigned int)(unsigned __int8)v34;
}
