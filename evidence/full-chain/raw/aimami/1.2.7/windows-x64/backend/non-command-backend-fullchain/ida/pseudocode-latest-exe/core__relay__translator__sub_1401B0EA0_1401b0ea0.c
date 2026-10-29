// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x1401b0ea0 | successor of pre-update 0x140df5ca0 | session <审计会话>
// match evidence: {"body_sim": 0.461, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
double __fastcall sub_1401B0EA0(_QWORD *a1)
{
  double result; // xmm0_8
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[4];
  if ( v3 )
    result = sub_140001660(a1[5], v3, 1);
  v4 = a1[10];
  if ( v4 > 0 )
    result = sub_140001660(a1[11], v4, 1);
  v5 = a1[7];
  if ( v5 )
    result = sub_140001660(a1[8], v5, 1);
  v6 = a1[14];
  if ( v6 > 0 )
    result = sub_140001660(a1[15], v6, 1);
  v7 = a1[17];
  if ( v7 > 0 )
    result = sub_140001660(a1[18], v7, 1);
  v8 = a1[20];
  if ( v8 > 0 )
    return sub_140001660(a1[21], v8, 1);
  return result;
}
