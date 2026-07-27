// module: codexmate_lib/core/repository
// addr: 0x140555e10
// name: sub_140555E10
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140555E10(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // r15
  _QWORD *v7; // rsi
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r14
  char v15; // r14
  _BYTE v16[64]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v17[64]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v18[4]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+48h]
  __int64 v21; // [rsp+D0h] [rbp+50h]
  __int128 v22; // [rsp+E0h] [rbp+60h]
  _QWORD *v23; // [rsp+F0h] [rbp+70h]
  _OWORD *v24; // [rsp+F8h] [rbp+78h]
  __int64 v25; // [rsp+100h] [rbp+80h]
  __int64 v26; // [rsp+108h] [rbp+88h]
  __int64 v27; // [rsp+110h] [rbp+90h]
  __int64 v28; // [rsp+118h] [rbp+98h]
  __int64 v29; // [rsp+120h] [rbp+A0h]

  v29 = -2;
  result = a3 - 1;
  if ( a3 - 1 >= a2 )
    BUG();
  if ( a3 != a2 )
  {
    v5 = &a1[4 * a2];
    v6 = &a1[4 * a3];
    v23 = v5;
    do
    {
      result = sub_140566040(v6[1], v6[2], *(v6 - 3), *(v6 - 2));
      if ( (_BYTE)result )
      {
        v26 = *v6;
        v28 = v6[1];
        v22 = *((_OWORD *)v6 + 1);
        v25 = v6[2];
        v7 = v6;
        while ( 1 )
        {
          v9 = v7;
          v7 -= 4;
          v10 = *(v9 - 2);
          v9[1] = *(v9 - 1);
          *v9 = v10;
          v24 = v9;
          if ( v7 == a1 )
            break;
          v11 = *((_QWORD *)v9 - 7);
          v12 = *((_QWORD *)v9 - 6);
          sub_1403C8920(&v19, v28, v25);
          sub_1403C8920(v18, v11, v12);
          v13 = v20;
          v27 = v18[1];
          v14 = v18[2];
          sub_141473290(v17, v20, v21);
          sub_141473290(v16, v27, v14);
          v15 = sub_141484A30(v17, v16);
          if ( v18[0] )
            sub_140001660(v27, v18[0], 1);
          if ( v19 )
            sub_140001660(v13, v19, 1);
          if ( v15 >= 0 )
            goto LABEL_6;
        }
        v7 = a1;
LABEL_6:
        *v7 = v26;
        result = v28;
        v8 = v24;
        *((_QWORD *)v24 - 3) = v28;
        *(v8 - 1) = v22;
        v5 = v23;
      }
      v6 += 4;
    }
    while ( v6 != v5 );
  }
  return result;
}