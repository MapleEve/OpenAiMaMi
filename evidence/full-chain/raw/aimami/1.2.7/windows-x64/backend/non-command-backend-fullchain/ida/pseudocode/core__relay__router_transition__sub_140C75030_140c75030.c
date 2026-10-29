// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140c75030 | name sub_140C75030
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140C75030(
        __int128 *a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rdx
  __int64 v9; // [rsp+50h] [rbp-30h] BYREF
  __int128 v10; // [rsp+58h] [rbp-28h]
  __int128 v11; // [rsp+68h] [rbp-18h]
  __int128 v12; // [rsp+78h] [rbp-8h]
  __int128 v13; // [rsp+88h] [rbp+8h]
  __int128 v14; // [rsp+98h] [rbp+18h]
  _QWORD *v15; // [rsp+A8h] [rbp+28h]
  __int64 v16; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v17; // [rsp+B8h] [rbp+38h]
  __int128 v18; // [rsp+C8h] [rbp+48h]
  __int128 v19; // [rsp+D8h] [rbp+58h]
  __int128 v20; // [rsp+E8h] [rbp+68h]
  __int128 v21; // [rsp+F8h] [rbp+78h]
  _QWORD *v22; // [rsp+108h] [rbp+88h]
  _QWORD v23[2]; // [rsp+110h] [rbp+90h] BYREF
  char v24; // [rsp+127h] [rbp+A7h] BYREF
  __int64 v25; // [rsp+128h] [rbp+A8h]

  v25 = -2;
  sub_141022A10((unsigned int)&v16, (_DWORD)a1, (_DWORD)a2, a3, a4, a5, a6, a7, a8, 0);
  if ( v16 == -1 )
  {
    sub_1401BD710(v17, v8);
  }
  else
  {
    v15 = v22;
    v14 = v21;
    v13 = v20;
    v12 = v19;
    v11 = v18;
    v10 = v17;
    v9 = v16;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v23[0] = &v9;
      v23[1] = sub_14104A7D0;
      *((_QWORD *)&v19 + 1) = 2;
      *(_QWORD *)&v20 = aCodexmateLibCo_31;
      *((_QWORD *)&v20 + 1) = 45;
      *((_QWORD *)&v21 + 1) = &unk_141A3EAA8;
      v22 = v23;
      v16 = 0;
      *(_QWORD *)&v17 = aCodexmateLibCo_31;
      *((_QWORD *)&v17 + 1) = 45;
      *(_QWORD *)&v18 = 0;
      *((_QWORD *)&v18 + 1) = aSrcCoreRelayRo_0;
      *(_QWORD *)&v19 = 35;
      *(_QWORD *)&v21 = 0x22E00000001LL;
      sub_1414D53A0(&v24, &v16);
    }
    sub_140BAC840(&v9);
  }
}
