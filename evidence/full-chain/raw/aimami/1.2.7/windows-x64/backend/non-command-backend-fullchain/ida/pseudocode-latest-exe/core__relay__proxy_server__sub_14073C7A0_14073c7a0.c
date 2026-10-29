// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x14073c7a0 | successor of pre-update 0x140db7000 | session <审计会话>
// match evidence: {"body_sim": 0.411, "str_ov": 0, "anchor": 1.879, "conf": false, "verdict": "CONFIRMED_FINAL"}
unsigned __int64 __fastcall sub_14073C7A0(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  __int128 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  _QWORD v19[12]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v20[2]; // [rsp+88h] [rbp+8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v22; // [rsp+A0h] [rbp+20h]
  __int64 v23; // [rsp+A8h] [rbp+28h]
  __int64 v24; // [rsp+B0h] [rbp+30h]
  __int64 v25; // [rsp+B8h] [rbp+38h]
  unsigned __int64 v26; // [rsp+C0h] [rbp+40h]
  char v27; // [rsp+CFh] [rbp+4Fh] BYREF
  __int64 v28; // [rsp+D0h] [rbp+50h]

  v28 = -2;
  v4 = (_BYTE *)sub_1416724D0(aStore, 5, a2);
  if ( v4 && *v4 == 1 && !v4[1] && (v5 = sub_1416724D0(aInput_1, 5, a2)) != 0 && *(_BYTE *)v5 == 4 )
  {
    v26 = *(_QWORD *)(v5 + 24);
    if ( v26 )
    {
      v24 = v5;
      v6 = *(_QWORD *)(v5 + 16);
      v7 = 0;
      v25 = v6;
      while ( 1 )
      {
        v8 = sub_1416724D0(aType_6, 4, v6);
        if ( v8 )
        {
          if ( *(_BYTE *)v8 == 3
            && *(_QWORD *)(v8 + 24) == 9
            && !(**(_QWORD **)(v8 + 16) ^ 0x6E696E6F73616572LL
               | *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 8LL) ^ 0x67LL) )
          {
            v9 = sub_1416724D0(aEncryptedConte_0, 17, v6);
            if ( !v9 || *(_BYTE *)v9 != 3 || (unsigned __int8)sub_140743BF0(*(_QWORD *)(v9 + 16), *(_QWORD *)(v9 + 24)) )
              break;
          }
        }
        ++v7;
        v6 += 32;
        if ( v26 == v7 )
        {
          v7 = *(_QWORD *)(v24 + 24);
          goto LABEL_31;
        }
      }
      v11 = v7 + 1;
      v23 = v7 + 1;
      v22 = v7;
      sub_1401AB4D0(v6, v10);
      while ( v11 < v26 )
      {
        while ( 1 )
        {
          v12 = (__int128 *)(v25 + 32 * v11);
          v23 = v11;
          v22 = v7;
          if ( (unsigned __int8)sub_140743C60(v12) )
            break;
          v14 = 32 * v7;
          v15 = *v12;
          v16 = v25;
          *(_OWORD *)(v25 + v14 + 16) = v12[1];
          *(_OWORD *)(v16 + v14) = v15;
          ++v7;
          if ( ++v11 >= v26 )
            goto LABEL_21;
        }
        v23 = ++v11;
        v22 = v7;
        sub_1401AB4D0(v12, v13);
      }
LABEL_21:
      *(_QWORD *)(v24 + 24) = v7;
    }
    else
    {
      v7 = 0;
    }
LABEL_31:
    v17 = 0;
    if ( v26 >= v7 )
      v17 = v26 - v7;
  }
  else
  {
    v17 = 0;
  }
  v21 = sub_140743CF0(a2);
  if ( v21 && *(_QWORD *)off_14223FF10 >= 3u )
  {
    v20[0] = &v21;
    v20[1] = sub_1416EBAE0;
    v19[6] = 3;
    v19[7] = aCodexmateLibCo_5;
    v19[8] = 40;
    v19[10] = &unk_141A3F2CA;
    v19[11] = v20;
    v19[0] = 0;
    v19[1] = aCodexmateLibCo_5;
    v19[2] = 40;
    v19[3] = 0;
    v19[4] = aSrcCoreRelayPr_0;
    v19[5] = 30;
    v19[9] = 0x94500000001LL;
    sub_141503E20(&v27, v19);
  }
  if ( (unsigned __int8)sub_140D68250(a1, *(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), *(unsigned __int8 *)(a1 + 254)) )
    sub_140D686F0(a2);
  return v17;
}
