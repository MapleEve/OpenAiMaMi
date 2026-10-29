// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x14069bb20 | successor of pre-update 0x140ce5110 | session <审计会话>
// match evidence: {"body_sim": 0.501, "str_ov": 0, "anchor": 0.066, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
double __fastcall sub_14069BB20(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  void (__fastcall *v3)(__int64); // rdx
  double result; // xmm0_8
  _QWORD *v5; // [rsp+20h] [rbp-20h]
  __int64 v6; // [rsp+28h] [rbp-18h]
  void (__fastcall **v7)(__int64); // [rsp+30h] [rbp-10h]
  _QWORD *v8; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 49) )
  {
    if ( *(_BYTE *)(a1 + 49) != 3 )
      return result;
    v8 = (_QWORD *)a1;
    v1 = *(_QWORD **)(a1 + 24);
    v6 = *v1;
    v5 = v1;
    v7 = (void (__fastcall **)(__int64))v1[1];
    if ( *v7 )
      goto LABEL_6;
  }
  else
  {
    v8 = (_QWORD *)a1;
    v2 = *(_QWORD **)(a1 + 24);
    v6 = *v2;
    v5 = v2;
    v7 = (void (__fastcall **)(__int64))v2[1];
    if ( *v7 )
LABEL_6:
      (*v7)(v6);
  }
  v3 = v7[1];
  if ( v3 )
    sub_140001660(v6, v3, v7[2]);
  result = sub_140001660(v5, 16, 8);
  if ( *v8 )
    return sub_140001660(v8[1], *v8, 1);
  return result;
}
