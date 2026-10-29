// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x140c8a7f0 | name sub_140C8A7F0
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C8A7F0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  void (__fastcall **v8)(__int64); // r15
  __int128 v9; // kr00_16
  _QWORD *v10; // r14
  void (__fastcall *v11)(__int64); // rdx
  void (__fastcall **v12)(__int64); // rcx
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h]
  _QWORD v15[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v18; // [rsp+70h] [rbp-10h]
  __int64 v19; // [rsp+78h] [rbp-8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+0h] BYREF
  void (__fastcall **v21)(__int64); // [rsp+88h] [rbp+8h]
  __int128 v22; // [rsp+90h] [rbp+10h] BYREF
  _QWORD *v23; // [rsp+A0h] [rbp+20h]
  __int64 (__fastcall *v24)(); // [rsp+A8h] [rbp+28h]
  _QWORD *v25; // [rsp+B0h] [rbp+30h]
  __int64 (__fastcall *v26)(_QWORD, _QWORD); // [rsp+B8h] [rbp+38h]
  _QWORD v27[2]; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+D0h] [rbp+50h]
  void (__fastcall **v29)(__int64); // [rsp+D8h] [rbp+58h]
  __int64 v30; // [rsp+E0h] [rbp+60h]

  v30 = -2;
  result = a5;
  v16[0] = a3;
  v16[1] = a4;
  v15[0] = a5;
  v15[1] = 6;
  if ( !*a2 )
  {
    a1[1] = 0;
    a1[2] = 1;
    a1[3] = 0;
LABEL_11:
    *a1 = -1;
    return result;
  }
  v14 = a2[2];
  v13 = *(_OWORD *)a2;
  sub_14016BE60(&v19, &v13);
  result = v19;
  v7 = v20;
  if ( v19 == -2 )
  {
    v8 = v21;
    v28 = v20;
    v27[0] = v20;
    v27[1] = v21;
    *(_QWORD *)&v22 = v16;
    *((_QWORD *)&v22 + 1) = sub_140186EE0;
    v23 = v15;
    v24 = sub_140186EE0;
    sub_1416ABFD0(&v17, &unk_141A3B72A, &v22);
    v9 = v17;
    v10 = v18;
    v29 = v8;
    if ( *v8 )
      (*v8)(v28);
    result = (__int64)v29;
    v11 = v29[1];
    if ( v11 )
      result = sub_140001660(v28, v11, v29[2]);
    *a1 = 10;
    *(_OWORD *)(a1 + 1) = v9;
    a1[3] = v10;
    return result;
  }
  if ( v19 != -1 )
  {
    v12 = v21;
    a1[1] = v19;
    a1[2] = v7;
    a1[3] = v12;
    goto LABEL_11;
  }
  v27[0] = v20;
  *(_QWORD *)&v22 = v16;
  *((_QWORD *)&v22 + 1) = sub_140186EE0;
  v23 = v15;
  v24 = sub_140186EE0;
  v25 = v27;
  v26 = sub_1416BB0B0;
  sub_1416ABFD0(&v17, &unk_141A3B74E, &v22);
  v22 = v17;
  v23 = v18;
  if ( (v27[0] & 3) - 2 >= 2 && (v27[0] & 3) != 0 )
  {
    v20 = v27[0] - 1LL;
    LOBYTE(v19) = 3;
    sub_1416BCB00(&v20);
  }
  *a1 = 10;
  *(_OWORD *)(a1 + 1) = v22;
  result = (__int64)v23;
  a1[3] = v23;
  return result;
}
