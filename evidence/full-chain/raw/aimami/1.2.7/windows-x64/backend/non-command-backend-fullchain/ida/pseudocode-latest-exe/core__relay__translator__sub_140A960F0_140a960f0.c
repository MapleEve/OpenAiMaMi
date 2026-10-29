// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x140a960f0 | successor of pre-update 0x140e8cb20 | session <审计会话>
// match evidence: {"body_sim": 0.69, "str_ov": 0, "anchor": 0.27, "conf": false, "verdict": "CONFIRMED_FINAL"}
__int64 __fastcall sub_140A960F0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  _QWORD v6[9]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v7[6]; // [rsp+70h] [rbp-10h] BYREF

  v7[3] = -2;
  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    v3 = a1[2];
    v6[1] = 0;
    v6[2] = v1;
    v6[3] = v2;
    v6[5] = 0;
    v6[6] = v1;
    v6[7] = v2;
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v3 = 0;
  }
  v6[0] = v4;
  v6[4] = v4;
  v6[8] = v3;
  sub_140A6F5A0(v7, v6);
  for ( result = v7[0]; v7[0]; result = v7[0] )
  {
    sub_14018DF20(result + 40LL * v7[2] + 104);
    sub_140A6F5A0(v7, v6);
  }
  return result;
}
