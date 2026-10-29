// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x140281cc0 | name sub_140281CC0
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140281CC0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int128 v6; // kr10_16
  char result; // al
  bool v8; // di
  __int64 v9; // rax
  _BYTE *v10; // rax
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-30h]
  char v14; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v15[7]; // [rsp+59h] [rbp-27h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+68h] [rbp-18h]
  __int128 v18; // [rsp+78h] [rbp-8h] BYREF
  __int128 v19; // [rsp+88h] [rbp+8h]
  __int128 v20; // [rsp+98h] [rbp+18h]
  __int64 v21; // [rsp+A8h] [rbp+28h]
  __int128 v22; // [rsp+B0h] [rbp+30h]
  __int128 v23; // [rsp+C0h] [rbp+40h]
  __int64 v24; // [rsp+D0h] [rbp+50h]
  __int64 v25; // [rsp+D8h] [rbp+58h]
  __int64 v26; // [rsp+E0h] [rbp+60h]
  _DWORD v27[2]; // [rsp+E8h] [rbp+68h]
  _BYTE v28[7]; // [rsp+F0h] [rbp+70h]
  __int64 v29; // [rsp+F8h] [rbp+78h]

  v29 = -2;
  sub_140237500(&v18, a2, a3);
  v5 = *((_QWORD *)&v18 + 1);
  v4 = v18;
  v6 = v19;
  if ( (_QWORD)v18 != -1 )
  {
    v13 = v21;
    v12 = v20;
    *(_QWORD *)(a1 + 88) = v24;
    *(_OWORD *)(a1 + 72) = v23;
    *(_OWORD *)(a1 + 56) = v22;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)(a1 + 32) = v12;
    *(_QWORD *)(a1 + 48) = v13;
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v5;
    return v13;
  }
  if ( *((_QWORD *)&v18 + 1) == -1 )
  {
    result = -1;
  }
  else
  {
    v26 = *((_QWORD *)&v18 + 1);
    v18 = v19;
    v19 = 0;
    v25 = v6;
    v20 = v6;
    sub_14062D280(&v14, &v18);
    if ( v26 )
      sub_140001660(v25, v26, 1);
    result = v14;
    v27[0] = *(_DWORD *)v15;
    *(_DWORD *)((char *)v27 + 3) = *(_DWORD *)&v15[3];
    v4 = v16;
    if ( v14 == -1 )
    {
      *(_QWORD *)a1 = 3;
      *(_QWORD *)(a1 + 8) = v4;
      return result;
    }
    *(_DWORD *)&v28[3] = *(_DWORD *)((char *)v27 + 3);
    *(_DWORD *)v28 = v27[0];
    v11 = v17;
  }
  LOBYTE(v18) = result;
  *(_DWORD *)((char *)&v18 + 1) = *(_DWORD *)v28;
  DWORD1(v18) = *(_DWORD *)&v28[3];
  *((_QWORD *)&v18 + 1) = v4;
  v19 = v11;
  if ( result == -1 )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    v8 = 1;
    if ( !sub_1416419F0(aOrdinal, 7, &v18) )
    {
      v9 = sub_141642800(&v18, aPayloadHistory_0, 21);
      if ( !v9
        || *(_BYTE *)v9 != 3
        || *(_QWORD *)(v9 + 24) != 9
        || **(_QWORD **)(v9 + 16) ^ 0x6574616E69676170LL | *(unsigned __int8 *)(*(_QWORD *)(v9 + 16) + 8LL) ^ 0x64LL )
      {
        v10 = (_BYTE *)sub_141642800(&v18, aPayloadHistory, 21);
        if ( v10 )
          v8 = *v10 != 0;
        else
          v8 = 0;
      }
    }
    *(_BYTE *)(a1 + 8) = v8;
    *(_QWORD *)a1 = -1;
    return sub_14002F9D0(&v18);
  }
  return result;
}
