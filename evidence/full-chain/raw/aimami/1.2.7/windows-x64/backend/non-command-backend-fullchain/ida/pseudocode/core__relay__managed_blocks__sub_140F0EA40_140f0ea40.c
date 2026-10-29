// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f0ea40 | name sub_140F0EA40
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140F0EA40(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  _BYTE *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r13
  char v11; // [rsp+2Fh] [rbp-99h] BYREF
  __int64 v12; // [rsp+30h] [rbp-98h]
  __int64 v13; // [rsp+38h] [rbp-90h]
  _QWORD v14[5]; // [rsp+40h] [rbp-88h] BYREF
  char v15; // [rsp+68h] [rbp-60h]
  __int16 v16; // [rsp+70h] [rbp-58h]
  _DWORD v17[4]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v18; // [rsp+88h] [rbp-40h]

  v11 = 2;
  v12 = 0;
  v13 = a2;
  v14[0] = a1;
  v14[1] = a2;
  v14[2] = 0;
  v14[3] = a2;
  v14[4] = 0xA0000000ALL;
  v15 = 1;
  v16 = 0;
  while ( 1 )
  {
    v2 = v14[0];
    sub_140F9C6A0(v17, v14);
    if ( v17[0] == 1 )
    {
      v3 = v12;
      v12 = v18;
      v4 = v18 - v3;
      v5 = v3 + v2;
      if ( v18 == v3 )
        goto LABEL_14;
    }
    else
    {
      if ( HIBYTE(v16) )
        return 0;
      HIBYTE(v16) = 1;
      v4 = v13 - v12;
      if ( ((unsigned __int8)v16 | (v13 != v12)) != 1 )
        return 0;
      v5 = v14[0] + v12;
      if ( !v4 )
        goto LABEL_14;
    }
    v6 = v4;
    if ( *(_BYTE *)(v5 + v4 - 1) != 10 )
      goto LABEL_15;
    v6 = v4 - 1;
    if ( v4 == 1 || *(_BYTE *)(v5 + v4 - 2) != 13 )
      goto LABEL_15;
    v4 -= 2;
LABEL_14:
    v6 = v4;
LABEL_15:
    v7 = (_BYTE *)sub_140E91160(v5, v6);
    v9 = v8;
    if ( (unsigned __int8)sub_1402B5F80(&v11, v5, v6) )
    {
      if ( !v9 || *v7 != 35 )
      {
        if ( (unsigned __int8)sub_140F32E80(v7, v9) )
          return 1;
      }
    }
    if ( HIBYTE(v16) == 1 )
      return 0;
  }
}
