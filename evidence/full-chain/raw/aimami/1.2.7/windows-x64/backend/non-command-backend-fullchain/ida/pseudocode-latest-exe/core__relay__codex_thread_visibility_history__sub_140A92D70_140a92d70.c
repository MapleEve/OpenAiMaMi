// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility_history.rs | ea 0x140a92d70 | successor of pre-update 0x140281cc0 | session <审计会话>
// match evidence: {"body_sim": 0.336, "str_ov": 0, "anchor": 0.837, "conf": true, "verdict": "CONFIRMED_FINAL"}
__int64 __fastcall sub_140A92D70(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int128 v4; // kr10_16
  char v5; // al
  bool v6; // di
  __int64 v7; // rax
  _BYTE *v8; // rax
  __int128 v10; // [rsp+30h] [rbp-50h]
  __int128 v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-30h]
  _OWORD v13[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v14; // [rsp+78h] [rbp-8h] BYREF
  __int128 v15; // [rsp+88h] [rbp+8h]
  __int128 v16; // [rsp+98h] [rbp+18h]
  __int64 v17; // [rsp+A8h] [rbp+28h]
  __int128 v18; // [rsp+B0h] [rbp+30h]
  __int128 v19; // [rsp+C0h] [rbp+40h]
  __int64 v20; // [rsp+D0h] [rbp+50h]
  __int64 v21; // [rsp+D8h] [rbp+58h]
  __int64 v22; // [rsp+E0h] [rbp+60h]
  _DWORD v23[2]; // [rsp+E8h] [rbp+68h]
  _BYTE v24[7]; // [rsp+F0h] [rbp+70h]
  __int64 v25; // [rsp+F8h] [rbp+78h]

  v25 = -2;
  sub_1407DF3C0(&v14);
  v3 = *((_QWORD *)&v14 + 1);
  v2 = v14;
  v4 = v15;
  if ( (_QWORD)v14 == -1 )
  {
    if ( *((_QWORD *)&v14 + 1) == -1 )
    {
      v5 = -1;
    }
    else
    {
      v22 = *((_QWORD *)&v14 + 1);
      v14 = v15;
      v15 = 0;
      v21 = v4;
      v16 = v4;
      sub_140D8B500(v13, &v14);
      if ( v22 )
        sub_140001660(v21, v22, 1);
      v5 = v13[0];
      v23[0] = *(_DWORD *)((char *)v13 + 1);
      *(_DWORD *)((char *)v23 + 3) = DWORD1(v13[0]);
      v2 = *((_QWORD *)&v13[0] + 1);
      if ( LOBYTE(v13[0]) == 0xFF )
      {
        *(_QWORD *)a1 = 3;
        *(_QWORD *)(a1 + 8) = v2;
        return a1;
      }
      *(_DWORD *)&v24[3] = *(_DWORD *)((char *)v23 + 3);
      *(_DWORD *)v24 = v23[0];
      v10 = v13[1];
    }
    LOBYTE(v14) = v5;
    *(_DWORD *)((char *)&v14 + 1) = *(_DWORD *)v24;
    DWORD1(v14) = *(_DWORD *)&v24[3];
    *((_QWORD *)&v14 + 1) = v2;
    v15 = v10;
    if ( v5 == -1 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = -1;
    }
    else
    {
      v6 = 1;
      if ( !sub_1416724D0(aOrdinal_0, 7, &v14) )
      {
        v7 = sub_14166BC00(&v14, aPayloadHistory_1, 21);
        if ( !v7
          || *(_BYTE *)v7 != 3
          || *(_QWORD *)(v7 + 24) != 9
          || **(_QWORD **)(v7 + 16) ^ 0x6574616E69676170LL | *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 8LL) ^ 0x64LL )
        {
          v8 = (_BYTE *)sub_14166BC00(&v14, aPayloadHistory_2, 21);
          if ( v8 )
            v6 = *v8 != 0;
          else
            v6 = 0;
        }
      }
      *(_BYTE *)(a1 + 8) = v6;
      *(_QWORD *)a1 = -1;
      sub_140A192F0(&v14);
    }
  }
  else
  {
    v12 = v17;
    v11 = v16;
    *(_QWORD *)(a1 + 88) = v20;
    *(_OWORD *)(a1 + 72) = v19;
    *(_OWORD *)(a1 + 56) = v18;
    *(_OWORD *)(a1 + 16) = v4;
    *(_OWORD *)(a1 + 32) = v11;
    *(_QWORD *)(a1 + 48) = v12;
    *(_QWORD *)a1 = v2;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return a1;
}
