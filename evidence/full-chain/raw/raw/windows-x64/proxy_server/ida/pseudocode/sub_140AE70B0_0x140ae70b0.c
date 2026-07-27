// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140ae70b0
// name: sub_140AE70B0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140AE70B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  _OWORD *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int128 *v12; // rax
  __int64 (__fastcall *v13)(_QWORD, _QWORD); // rdx
  _OWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-60h]
  __int128 *v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall *v19)(_QWORD, _QWORD); // [rsp+30h] [rbp-50h]
  __int128 *v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall *v21)(_QWORD, _QWORD); // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall *v23)(); // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-28h]
  _OWORD *v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+68h] [rbp-18h] BYREF
  __int64 v27; // [rsp+78h] [rbp-8h]
  __int64 v28; // [rsp+80h] [rbp+0h]

  v28 = -2;
  v5 = sub_14033BC10(a2, a3);
  v6 = v4;
  if ( v4 < 0x20 )
  {
    if ( (unsigned __int64)sub_1414A3BD0(v5, v4) >= 0x101 )
      goto LABEL_3;
LABEL_6:
    if ( v6 >= 0 )
    {
      if ( !v6 )
      {
        v9 = 1;
        v6 = 0;
        v8 = nullptr;
        goto LABEL_13;
      }
      nullsub_1(v7);
      v10 = 1;
      v11 = sub_140001650(v6, 1);
      if ( v11 )
      {
        v9 = v11;
        sub_141684120(v11, v5, v6);
        v8 = (_OWORD *)v6;
        goto LABEL_13;
      }
    }
    else
    {
      v10 = 0;
    }
    sub_1416C2D4B(v10, v6);
  }
  if ( (unsigned __int64)sub_1414A35B0(v5, v4) < 0x101 )
    goto LABEL_6;
LABEL_3:
  v20 = (__int128 *)v5;
  v21 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v6 + v5);
  v22 = 256;
  sub_1408CD3D0(&v26, (__int64)&v20);
  v18 = &v26;
  v19 = sub_1400015F0;
  sub_14149C0F0(&v20, &unk_1417B0798, &v18);
  v8 = v20;
  v9 = (__int64)v21;
  v6 = v22;
  if ( (_QWORD)v26 )
    sub_140001660(*((_QWORD *)&v26 + 1), v26, 1);
LABEL_13:
  v25 = v8;
  v24 = v9;
  if ( dword_141EC2450 )
    sub_140403D70((__int64)&v26, v9, v6, 0, v17);
  else
    sub_140403D70((__int64)&v26, v9, v6, qword_141EC2438, qword_141EC2440);
  v12 = (__int128 *)error_hint_1(v24, v6);
  if ( !v12 )
  {
    *(_QWORD *)(a1 + 16) = v27;
    *(_OWORD *)a1 = v26;
    v14 = v25;
    v15 = v24;
    if ( !v25 )
      return a1;
    goto LABEL_20;
  }
  v18 = v12;
  v19 = v13;
  v20 = &v26;
  v21 = sub_1400015F0;
  v22 = (__int64)&v18;
  v23 = sub_14041F680;
  sub_14149C0F0(a1, &unk_1417B079E, &v20);
  if ( (_QWORD)v26 )
    sub_140001660(*((_QWORD *)&v26 + 1), v26, 1);
  v14 = v25;
  v15 = v24;
  if ( v25 )
LABEL_20:
    sub_140001660(v15, v14, 1);
  return a1;
}