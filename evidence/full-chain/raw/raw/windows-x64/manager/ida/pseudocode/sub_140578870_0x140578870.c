// module: codexmate_lib/core/relay/manager
// addr: 0x140578870
// name: sub_140578870
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140578870(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v12; // rbx
  _OWORD v13[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+70h] [rbp-10h]
  __int64 v19; // [rsp+78h] [rbp-8h]
  __int64 v20; // [rsp+80h] [rbp+0h]

  v20 = -2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = sub_141470CD0(a1, a2);
  if ( *(_BYTE *)(v6 + 16) == 1 )
  {
    v7 = *(_QWORD *)v6;
    v8 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v12 = v6;
    v7 = sub_141486EF0();
    v6 = v12;
    *(_QWORD *)v12 = v7;
    *(_QWORD *)(v12 + 8) = v8;
    *(_BYTE *)(v12 + 16) = 1;
  }
  *(_QWORD *)v6 = v7 + 1;
  v17 = xmmword_141760A70;
  v16 = *(_OWORD *)&off_141760A60;
  v18 = v7;
  v19 = v8;
  if ( v5 )
  {
    v9 = (_QWORD *)(v4 + 16);
    do
    {
      sub_140475960(&v16, *(v9 - 1), *v9);
      v9 += 29;
      --v5;
    }
    while ( v5 );
  }
  v14 = v18;
  v15 = v19;
  v13[1] = v17;
  v13[0] = v16;
  v10 = a2[4] + 24LL * a2[5];
  *(_QWORD *)&v16 = a2[4];
  *((_QWORD *)&v16 + 1) = v10;
  *(_QWORD *)&v17 = v13;
  sub_140313790(a1, &v16);
  if ( *((_QWORD *)&v13[0] + 1) && 17LL * *((_QWORD *)&v13[0] + 1) != -33 )
    sub_140001660(*(_QWORD *)&v13[0] - 16LL * *((_QWORD *)&v13[0] + 1) - 16, 17LL * *((_QWORD *)&v13[0] + 1) + 33, 16);
  return a1;
}