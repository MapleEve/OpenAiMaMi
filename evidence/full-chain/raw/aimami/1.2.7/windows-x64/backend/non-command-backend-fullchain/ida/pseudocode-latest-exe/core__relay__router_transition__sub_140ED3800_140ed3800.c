// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140ed3800 | successor of pre-update 0x140c75030 | session <审计会话>
// match evidence: {"body_sim": 0.897, "str_ov": 0, "anchor": 0.283, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_140ED3800(__int128 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // [rsp+50h] [rbp-30h] BYREF
  __int128 v8; // [rsp+58h] [rbp-28h]
  __int128 v9; // [rsp+68h] [rbp-18h]
  __int128 v10; // [rsp+78h] [rbp-8h]
  __int128 v11; // [rsp+88h] [rbp+8h]
  __int128 v12; // [rsp+98h] [rbp+18h]
  _QWORD *v13; // [rsp+A8h] [rbp+28h]
  __int64 v14; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v15; // [rsp+B8h] [rbp+38h]
  __int128 v16; // [rsp+C8h] [rbp+48h]
  __int128 v17; // [rsp+D8h] [rbp+58h]
  __int128 v18; // [rsp+E8h] [rbp+68h]
  __int128 v19; // [rsp+F8h] [rbp+78h]
  _QWORD *v20; // [rsp+108h] [rbp+88h]
  _QWORD v21[2]; // [rsp+110h] [rbp+90h] BYREF
  char v22; // [rsp+127h] [rbp+A7h] BYREF
  __int64 v23; // [rsp+128h] [rbp+A8h]

  v23 = -2;
  sub_1407D2B10((unsigned int)&v14, (_DWORD)a1, a2, (unsigned int)aFailed_2, 6, a3, a4, a5, a6, 0);
  if ( v14 == -1 )
    return sub_1407B9160(v15);
  v13 = v20;
  v12 = v19;
  v11 = v18;
  v10 = v17;
  v9 = v16;
  v8 = v15;
  v7 = v14;
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    v21[0] = &v7;
    v21[1] = sub_140D76130;
    *((_QWORD *)&v17 + 1) = 2;
    *(_QWORD *)&v18 = aCodexmateLibCo_49;
    *((_QWORD *)&v18 + 1) = 45;
    *((_QWORD *)&v19 + 1) = &unk_141AA1920;
    v20 = v21;
    v14 = 0;
    *(_QWORD *)&v15 = aCodexmateLibCo_49;
    *((_QWORD *)&v15 + 1) = 45;
    *(_QWORD *)&v16 = 0;
    *((_QWORD *)&v16 + 1) = aSrcCoreRelayRo_1;
    *(_QWORD *)&v17 = 35;
    *(_QWORD *)&v19 = 0x22E00000001LL;
    sub_141503E20(&v22, &v14);
  }
  return sub_140D8A3A0(&v7);
}
