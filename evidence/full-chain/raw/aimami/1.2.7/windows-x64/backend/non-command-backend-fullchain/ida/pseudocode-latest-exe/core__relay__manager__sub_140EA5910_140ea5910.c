// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140ea5910 | successor of pre-update 0x140d824f0 | session <审计会话>
// match evidence: {"body_sim": 0.87, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
__int64 __fastcall sub_140EA5910(__int64 a1, _QWORD *a2)
{
  _BYTE v5[384]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v6; // [rsp+1A0h] [rbp+120h]

  v6 = -2;
  sub_140EB7850(v5, a2);
  sub_140EADE50(a1, *a2, a2[3], v5);
  sub_140292E20(v5);
  return a1;
}
