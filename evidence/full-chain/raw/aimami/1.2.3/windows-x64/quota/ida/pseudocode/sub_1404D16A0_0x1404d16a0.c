// module: codexmate_lib/core/relay/quota
// addr: 0x1404d16a0
// name: sub_1404D16A0
// win 1.2.3 | module core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1404D16A0(__int64 a1, unsigned __int8 *a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  _QWORD v16[3]; // [rsp+28h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  char v19; // [rsp+5Fh] [rbp-1h] BYREF
  __int64 v20; // [rsp+60h] [rbp+0h]

  v20 = -2;
  if ( !a2 )
    goto LABEL_8;
  v3 = *a2;
  if ( v3 == 2 )
  {
    *(_QWORD *)&v17 = 0;
    *((_QWORD *)&v17 + 1) = 1;
    v18 = 0;
    v16[2] = 1610612768;
    v16[0] = &v17;
    v16[1] = &off_14175E8C8;
    if ( (unsigned __int8)sub_141433C00(a2 + 8, v16) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_2,
        55,
        (unsigned int)&v19,
        (unsigned int)&unk_141758598,
        (__int64)&off_14175E980);
    *(_QWORD *)(a1 + 16) = v18;
    *(_OWORD *)a1 = v17;
    return a1;
  }
  if ( v3 != 3 || (v4 = *((_QWORD *)a2 + 2), v5 = *((_QWORD *)a2 + 3), sub_14033BC10(v4, v5), !v6) )
  {
LABEL_8:
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v7 = sub_14033BC10(v4, v5);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 0;
    goto LABEL_7;
  }
  if ( v8 )
  {
    v12 = v7;
    nullsub_1(v9);
    v11 = 1;
    v13 = sub_140001650(v10, 1);
    if ( !v13 )
LABEL_7:
      sub_1416C2D4B(v11, v10);
    v14 = v13;
    sub_141684120(v13, v12, v10);
  }
  else
  {
    v14 = 1;
  }
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = v10;
  return a1;
}