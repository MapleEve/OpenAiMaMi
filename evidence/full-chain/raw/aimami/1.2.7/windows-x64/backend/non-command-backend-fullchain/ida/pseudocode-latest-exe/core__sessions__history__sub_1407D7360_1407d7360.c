// win 1.2.7 latest-exe | module src/core/sessions/history.rs | ea 0x1407d7360 | successor of pre-update 0x140bae350 | session <审计会话>
// match evidence: {"body_sim": 0.538, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
__int128 *__fastcall sub_1407D7360(
        __int128 *a1,
        __int128 *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  _OWORD v14[6]; // [rsp+50h] [rbp-68h] BYREF

  sub_1407D2B10((unsigned int)v14, (_DWORD)a2, a3, a4, a5, a6, a7, a8, a9, 0);
  if ( LODWORD(v14[0]) == -1 )
  {
    sub_1407B9160(*((_QWORD *)&v14[0] + 1));
    *(_QWORD *)a1 = -1;
  }
  else
  {
    a1[5] = v14[5];
    a1[4] = v14[4];
    v10 = v14[0];
    v11 = v14[1];
    v12 = v14[2];
    a1[3] = v14[3];
    a1[2] = v12;
    a1[1] = v11;
    *a1 = v10;
  }
  return a1;
}
