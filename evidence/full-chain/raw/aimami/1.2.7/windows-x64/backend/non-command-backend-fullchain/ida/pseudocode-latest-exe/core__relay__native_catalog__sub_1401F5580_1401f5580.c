// win 1.2.7 latest-exe | module src/core/relay/native_catalog.rs | ea 0x1401f5580 | successor of pre-update 0x140db7c10 | session <审计会话>
// match evidence: {"body_sim": 0.462, "str_ov": 0, "anchor": 0.548, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_1401F5580(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v14; // rsi
  _QWORD v15[2]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp-8h]
  __int64 v21; // [rsp+80h] [rbp+0h] BYREF
  __int64 v22; // [rsp+88h] [rbp+8h]
  __int64 v23; // [rsp+90h] [rbp+10h]
  __int64 v24; // [rsp+A0h] [rbp+20h]
  __int64 v25; // [rsp+A8h] [rbp+28h]
  __int64 v26; // [rsp+B0h] [rbp+30h]

  v26 = -2;
  sub_140D577F0((unsigned int)&v17, a2, a3, a4, a5, 8, 0);
  nullsub_1(v7, v6);
  v8 = sub_140001650(128, 1);
  if ( !v8 )
    sub_14196B2DB(1, 128);
  v21 = 128;
  v22 = v8;
  v23 = 0;
  v16[0] = &v21;
  v9 = sub_1407B6390(v16, &v17);
  if ( v9 )
  {
    v14 = v9;
    if ( v21 )
      sub_140001660(v22, v21, 1);
LABEL_13:
    v21 = v14;
    sub_14196B5F0(
      (unsigned int)aJsonValuesSeri,
      21,
      (unsigned int)&v21,
      (unsigned int)&off_141A07E80,
      (__int64)&off_141A090F0);
  }
  if ( v21 == -1 )
  {
    v14 = v22;
    goto LABEL_13;
  }
  v16[0] = v21;
  v16[1] = v22;
  v16[2] = v23;
  sub_1401BE280(&v21, v16);
  v15[0] = &v21;
  v15[1] = sub_140759D50;
  sub_1416DAFA0(a1, &unk_141A08363, v15);
  v11 = v18;
  v20 = v19;
  v24 = 0;
  v25 = v18;
  while ( v20 != v24 )
  {
    ++v24;
    v12 = v11 + 32;
    sub_1401AB4D0(v11, v10);
    v11 = v12;
  }
  if ( v17 )
    sub_140001660(v25, 32 * v17, 8);
  return a1;
}
