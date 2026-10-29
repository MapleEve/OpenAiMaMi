// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140c69cd0 | successor of pre-update 0x140fa5f10 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.941, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140C69CD0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rdx
  _QWORD v11[4]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h]
  unsigned __int64 v14; // [rsp+58h] [rbp-18h]
  char v15; // [rsp+67h] [rbp-9h] BYREF
  __int64 v16; // [rsp+68h] [rbp-8h]

  v16 = -2;
  v3 = *a2;
  v4 = a2[1];
  v5 = 32 * a2[2];
  v11[0] = v4;
  v11[1] = v4;
  v11[2] = v3;
  v11[3] = v4 + v5;
  sub_1402246C0(&v12, v11);
  v11[0] = &v15;
  if ( v14 >= 2 )
  {
    if ( v14 >= 0x15 )
      sub_1401B6550(v13, v14, v11);
    else
      sub_140CC2820(v13, v14, 1, v11);
  }
  sub_14019C280(&v12);
  v6 = v13;
  v7 = v14;
  sub_14077C770(a1, v13, v13 + 32 * v14);
  if ( v7 )
  {
    v8 = (_QWORD *)(v6 + 8);
    do
    {
      v9 = *(v8 - 1);
      if ( v9 )
        sub_140001660(*v8, v9, 1);
      v8 += 4;
      --v7;
    }
    while ( v7 );
  }
  if ( v12 )
    sub_140001660(v6, 32 * v12, 8);
  return a1;
}
