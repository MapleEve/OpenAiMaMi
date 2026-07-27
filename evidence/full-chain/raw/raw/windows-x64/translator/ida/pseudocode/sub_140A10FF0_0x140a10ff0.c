// module: codexmate_lib/core/relay/translator
// addr: 0x140a10ff0
// name: sub_140A10FF0
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_WORD *__fastcall sub_140A10FF0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // r12
  __int64 v14; // rcx
  _WORD *result; // rax
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rdx
  _OWORD v25[2]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v26[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+80h] [rbp+0h]
  __int64 v30; // [rsp+88h] [rbp+8h]
  _QWORD *v31; // [rsp+90h] [rbp+10h] BYREF
  _QWORD *v32; // [rsp+98h] [rbp+18h]
  __int64 v33; // [rsp+A0h] [rbp+20h]
  _QWORD *v34; // [rsp+A8h] [rbp+28h]
  char v35; // [rsp+B7h] [rbp+37h]
  __int64 v36; // [rsp+B8h] [rbp+38h]

  v36 = -2;
  v6 = sub_14033BC10(a2, a3);
  if ( v7 )
  {
    v9 = v7;
    v27[0] = v6;
    v27[1] = v7;
    v28 = 0;
    v10 = v6;
    v29 = v6;
    v30 = v7;
    sub_1408A6200(v26, v27);
    if ( LOBYTE(v26[0]) != 0xFF )
    {
      v35 = v26[0];
      v25[1] = v26[1];
      v25[0] = v26[0];
      sub_1409EB540((__int64)v27, (unsigned __int8 *)v25);
      sub_140985700(&v31, (__int64)v27);
      v13 = v32;
      if ( v31 != (_QWORD *)-1LL )
      {
        v14 = v33;
        *a1 = (__int64)v31;
        a1[1] = (__int64)v13;
        a1[2] = v14;
LABEL_25:
        sub_1400104F0(v27);
        return (_WORD *)sub_1400104F0(v25);
      }
      v31 = v32;
      if ( v9 >= 0 )
      {
        nullsub_1(v12);
        v17 = 1;
        v20 = sub_140001650(v9, 1);
        if ( v20 )
        {
          v21 = v20;
          sub_141684120(v20, v10, v9);
          *a1 = v9;
          a1[1] = v21;
          a1[2] = v9;
          v22 = *v13;
          v23 = *v13 == 1;
          v34 = v13;
          if ( v23 )
          {
            sub_140018650(v13 + 1);
          }
          else if ( !v22 )
          {
            v24 = v34[2];
            if ( v24 )
              sub_140001660(v34[1], v24, 1);
          }
          sub_140001660(v34, 40, 8);
          goto LABEL_25;
        }
      }
      else
      {
        v17 = 0;
      }
      sub_1416C2D4B(v17, v9);
    }
    if ( a3 < 0 )
    {
      v16 = 0;
      goto LABEL_9;
    }
    if ( a3 )
    {
      nullsub_1(v11);
      v16 = 1;
      v18 = sub_140001650(a3, 1);
      if ( !v18 )
      {
LABEL_9:
        v35 = -1;
        sub_1416C2D4B(v16, a3);
      }
      v19 = v18;
      sub_141684120(v18, a2, a3);
    }
    else
    {
      v19 = 1;
    }
    *a1 = a3;
    a1[1] = v19;
    a1[2] = a3;
    return (_WORD *)sub_140348CF0(v26);
  }
  nullsub_1(v8);
  result = (_WORD *)sub_140001650(2, 1);
  if ( !result )
    sub_1416C2D4B(1, 2);
  *result = 32123;
  *a1 = 2;
  a1[1] = (__int64)result;
  a1[2] = 2;
  return result;
}