// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x140307390
// name: sub_140307390
char __fastcall sub_140307390(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // r15
  int v12; // eax
  char v13; // cl
  char result; // al
  __int64 v16; // rax
  _QWORD *v18; // [rsp+30h] [rbp-A8h]
  __int64 v19; // [rsp+38h] [rbp-A0h]
  _QWORD v20[7]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v21[96]; // [rsp+78h] [rbp-60h] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    v18 = a1;
    v4 = a1[1];
    v5 = a2[1];
    v6 = a2[2];
    while ( 2 )
    {
      v7 = v3 + 8;
      v19 = *(unsigned __int16 *)(v3 + 274);
      v8 = 3LL * (unsigned int)(8 * v19);
      v2 = -1;
      do
      {
        if ( !v8 )
        {
          v2 = v19;
          goto LABEL_13;
        }
        v9 = v7 + 24;
        v10 = *(_QWORD *)(v7 + 16);
        v11 = v6 - v10;
        if ( v6 < v10 )
          v10 = v6;
        v12 = sub_1416847B0(v5, *(_QWORD *)(v7 + 8), v10);
        if ( v12 )
          v11 = v12;
        v13 = (v11 > 0) - (v11 < 0);
        ++v2;
        v8 -= 24;
        v7 = v9;
      }
      while ( v13 == 1 );
      if ( !v13 )
      {
        result = 1;
        if ( !*a2 )
          return result;
        sub_140001660(v5, *a2, 1);
        return 1;
      }
LABEL_13:
      if ( v4-- != 0 )
      {
        v3 = *(_QWORD *)(v3 + 8 * v2 + 280);
        continue;
      }
      break;
    }
    a1 = v18;
    v16 = *a2;
    if ( *a2 != -1 )
      goto LABEL_18;
  }
  else
  {
    v5 = a2[1];
    v6 = a2[2];
    v3 = 0;
    v16 = *a2;
    if ( *a2 != -1 )
    {
LABEL_18:
      v20[0] = v16;
      v20[1] = v5;
      v20[2] = v6;
      v20[3] = a1;
      v20[4] = v3;
      v20[5] = 0;
      v20[6] = v2;
      sub_1403B0C70(v21, v20);
      return 0;
    }
  }
  return 1;
}