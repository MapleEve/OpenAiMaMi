// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140035e60 | name sub_140035E60
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140035E60(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r15
  _QWORD *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD v12[9]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v13[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+78h] [rbp-8h]
  __int64 v15; // [rsp+80h] [rbp+0h]
  __int64 v16; // [rsp+88h] [rbp+8h]
  __int64 v17; // [rsp+90h] [rbp+10h]
  __int64 v18; // [rsp+98h] [rbp+18h]
  __int64 v19; // [rsp+A0h] [rbp+20h]

  v19 = -2;
  v18 = a2;
  if ( a2 )
  {
    v3 = v18 - 1;
    v4 = a1 + 56;
    v5 = 0;
    do
    {
      v16 = v4;
      v15 = v3;
      v6 = (_QWORD *)(a1 + 56 * v5);
      if ( *v6 )
        sub_140001660(v6[1], *v6, 1);
      v7 = v6[4];
      if ( v7 )
      {
        v8 = v6[5];
        v9 = v6[6];
        v12[1] = 0;
        v12[2] = v7;
        v12[3] = v8;
        v12[5] = 0;
        v12[6] = v7;
        v12[7] = v8;
        v10 = 1;
      }
      else
      {
        v10 = 0;
        v9 = 0;
      }
      v17 = v5 + 1;
      v12[0] = v10;
      v12[4] = v10;
      v12[8] = v9;
      sub_140E828B0(v13, v12);
      while ( v13[0] )
      {
        v11 = *(_QWORD *)(v13[0] + 24 * v14 + 8);
        if ( v11 )
          sub_140001660(*(_QWORD *)(v13[0] + 24 * v14 + 16), v11, 1);
        sub_140E828B0(v13, v12);
      }
      v3 = v15 - 1;
      v4 = v16 + 56;
      v5 = v17;
    }
    while ( v17 != v18 );
  }
}
