// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404a33d0
// name: codex_db_log_path
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall codex_db_log_path(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v6; // rax
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rdx
  _QWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  __int64 v12; // [rsp+48h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-30h]
  __int128 *v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]
  __int128 v17; // [rsp+78h] [rbp-8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+8h]
  __int64 v19; // [rsp+90h] [rbp+10h]
  char v20; // [rsp+9Fh] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+A0h] [rbp+20h]

  v21 = -2;
  sub_1407126F0(&v11);
  v19 = v12;
  *(_QWORD *)&v6 = sub_141473810(a2, a3, v12, v13);
  if ( (_QWORD)v6 )
  {
    v17 = v6;
    v14 = &v17;
    v15 = (__int64 (__fastcall **)())sub_14148F3A0;
    result = sub_14149C0F0(a1, &unk_14175B083, &v14);
    v9 = v11;
    if ( !v11 )
      return result;
    return sub_140001660(v19, v9, 1);
  }
  v10[0] = a2;
  v10[1] = a3;
  *(_QWORD *)&v17 = 0;
  *((_QWORD *)&v17 + 1) = 1;
  v18 = 0;
  v16 = 1610612768;
  v14 = &v17;
  v15 = &off_14175E8C8;
  if ( (unsigned __int8)sub_14148F3A0(v10, &v14, v7) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_2,
      55,
      (unsigned int)&v20,
      (unsigned int)&unk_141758598,
      (__int64)&off_14175E980);
  result = v18;
  *(_QWORD *)(a1 + 16) = v18;
  *(_OWORD *)a1 = v17;
  v9 = v11;
  if ( v11 )
    return sub_140001660(v19, v9, 1);
  return result;
}