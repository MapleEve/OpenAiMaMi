// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1407635a0
// name: sub_1407635A0
// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407635A0(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  _QWORD v13[75]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v14[154]; // [rsp+278h] [rbp+1F8h] BYREF
  _BYTE v15[608]; // [rsp+748h] [rbp+6C8h] BYREF
  volatile signed __int64 *v16; // [rsp+9A8h] [rbp+928h] BYREF
  __int64 v17; // [rsp+9B0h] [rbp+930h]
  _BYTE v18[608]; // [rsp+9B8h] [rbp+938h] BYREF
  int v19; // [rsp+C18h] [rbp+B98h] BYREF
  __int64 v20; // [rsp+C20h] [rbp+BA0h]
  unsigned __int64 v21; // [rsp+C28h] [rbp+BA8h]
  __int64 v22; // [rsp+C30h] [rbp+BB0h] BYREF
  __int64 v23; // [rsp+C38h] [rbp+BB8h]
  __int128 v24; // [rsp+C40h] [rbp+BC0h]
  __int128 v25; // [rsp+C50h] [rbp+BD0h] BYREF
  __int64 v26; // [rsp+C60h] [rbp+BE0h]
  __int64 v27; // [rsp+C68h] [rbp+BE8h]
  __int64 v28; // [rsp+C70h] [rbp+BF0h]
  char v29; // [rsp+C7Fh] [rbp+BFFh]
  __int64 v30; // [rsp+C80h] [rbp+C00h]

  v30 = -2;
  *(_QWORD *)&v25 = 0;
  *((_QWORD *)&v25 + 1) = 8;
  v26 = 0;
  sub_141486800((__int64)&v16, a2, a3);
  v4 = v16;
  v5 = v17;
  if ( v16 != (volatile signed __int64 *)2 )
  {
    sub_141684120(v15, v18, 608);
    v14[152] = v4;
    v14[153] = v5;
    v14[0] = 0;
    v14[76] = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        sub_1407BC170(v13, v14);
        if ( !v13[0] )
        {
          sub_14043C3D0((__int64)v14);
          goto LABEL_24;
        }
        sub_141684120(&v16, v13, 600);
        sub_14147B870(&v22, &v16);
        v6 = v24;
        v29 = 1;
        v28 = v23;
        if ( !(unsigned __int8)sub_1414741E0(v23, v24) )
          break;
        v29 = 1;
        v7 = sub_1414742C0(v28, v6);
        if ( !v7
          || (v29 = 1, sub_1414A3C90(&v19, v7, v8), v19 == 1)
          || v21 <= 6
          || *(_DWORD *)v20 ^ 0x74617473 | *(unsigned __int16 *)(v20 + 4) ^ 0x5F65
          || *(_DWORD *)(v20 + v21 - 7) ^ 0x6C71732E | *(_DWORD *)(v20 + v21 - 4) ^ 0x6574696C )
        {
          if ( v22 )
            sub_140001660(v28, v22, 1);
          if ( !_InterlockedDecrement64(v16) )
            goto LABEL_18;
        }
        else
        {
          v27 = v22;
          v9 = v26;
          if ( v26 == (_QWORD)v25 )
            sub_1416890A0(&v25);
          v10 = *((_QWORD *)&v25 + 1);
          v11 = 32 * v9;
          *(_QWORD *)(*((_QWORD *)&v25 + 1) + v11) = v27;
          *(_QWORD *)(v10 + v11 + 8) = v28;
          *(_OWORD *)(v10 + v11 + 16) = v24;
          v26 = v9 + 1;
          if ( !_InterlockedDecrement64(v16) )
            goto LABEL_18;
        }
      }
      if ( v22 )
        sub_140001660(v28, v22, 1);
      if ( !_InterlockedDecrement64(v16) )
LABEL_18:
        sub_140F8A980(&v16);
    }
  }
  sub_1401DD260(v17);
LABEL_24:
  result = v26;
  *(_QWORD *)(a1 + 16) = v26;
  *(_OWORD *)a1 = v25;
  return result;
}