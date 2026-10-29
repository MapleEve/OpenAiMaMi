// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406c4b40 | successor of pre-update 0x140d1e7e0 | session <审计会话>
// match evidence: {"body_sim": 0.614, "str_ov": 0, "anchor": 0.381, "conf": false, "verdict": "CONFIRMED_FINAL"}
void __fastcall sub_1406C4B40(_QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // [rsp+20h] [rbp-10h]

  v1 = (_QWORD *)a1[17];
  v2 = v1;
  if ( *v1 == 1 )
  {
    sub_14069BB20((__int64)(v1 + 1));
  }
  else if ( !*v1 )
  {
    sub_1406C4A40(v1 + 1);
  }
  sub_140001660(v2, 64, 8);
  if ( *a1 )
    sub_140001660(a1[1], *a1, 1);
  if ( a1[3] != -2 )
    sub_1406C48B0(a1 + 3);
}
