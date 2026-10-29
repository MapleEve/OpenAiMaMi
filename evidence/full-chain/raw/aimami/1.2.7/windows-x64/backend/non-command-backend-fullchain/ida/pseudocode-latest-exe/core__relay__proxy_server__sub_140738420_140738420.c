// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x140738420 | successor of pre-update 0x140db16f0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.709, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140738420(_BYTE *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  bool v19; // cf
  unsigned __int64 v20; // r15
  __int64 result; // rax
  unsigned __int64 v22; // r14
  __int128 *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int64 v27; // rcx
  __int64 v28; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+30h] [rbp-50h]
  __int64 v30; // [rsp+38h] [rbp-48h]
  __int64 v31; // [rsp+40h] [rbp-40h]
  __int64 *v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+50h] [rbp-30h]
  unsigned __int64 v34; // [rsp+68h] [rbp-18h]
  __int64 v35; // [rsp+70h] [rbp-10h]
  unsigned __int64 v36; // [rsp+78h] [rbp-8h] BYREF
  __int64 v37; // [rsp+80h] [rbp+0h] BYREF
  const char *v38; // [rsp+88h] [rbp+8h]
  __int64 v39; // [rsp+90h] [rbp+10h]
  __int64 v40; // [rsp+98h] [rbp+18h]
  const char *v41; // [rsp+A0h] [rbp+20h]
  __int64 v42; // [rsp+A8h] [rbp+28h]
  __int64 v43; // [rsp+B0h] [rbp+30h]
  const char *v44; // [rsp+B8h] [rbp+38h]
  __int64 v45; // [rsp+C0h] [rbp+40h]
  __int64 v46; // [rsp+C8h] [rbp+48h]
  void *v47; // [rsp+D0h] [rbp+50h]
  __int64 *v48; // [rsp+D8h] [rbp+58h]
  __int64 v49; // [rsp+E0h] [rbp+60h]
  __int64 v50; // [rsp+E8h] [rbp+68h]
  char v51; // [rsp+F7h] [rbp+77h] BYREF
  __int64 v52; // [rsp+F8h] [rbp+78h]

  v52 = -2;
  if ( *a1 == 5 )
  {
    nullsub_1(a1, a2);
    v3 = sub_140001650(5, 1);
    if ( !v3 )
      sub_14196B2DB(1, 5);
    *(_BYTE *)(v3 + 4) = 101;
    *(_DWORD *)v3 = 1919906931;
    v28 = 5;
    v29 = (__int64 (__fastcall *)())v3;
    v30 = 5;
    LOWORD(v37) = 1;
    sub_140A68320(&v32, a1 + 8, &v28, &v37);
    if ( (_BYTE)v32 != 0xFF )
      sub_1406C0ED0(&v32);
    sub_140A13D20(&v37, a1 + 8, "previous_response_idprev_resp_id", 20);
    if ( (_BYTE)v37 != 0xFF )
    {
      if ( (_BYTE)v37 != 3 )
        goto LABEL_17;
      v6 = v40;
      if ( v40 < 0 )
      {
        v7 = 0;
        goto LABEL_9;
      }
      if ( v40 )
      {
        v8 = v39;
        nullsub_1(v5, v4);
        v7 = 1;
        v9 = sub_140001650(v6, 1);
        if ( !v9 )
LABEL_9:
          sub_14196B2DB(v7, v6);
        v10 = v9;
        sub_1419234B0(v9, v8, v6);
        sub_1406C0ED0(&v37);
        if ( *(_QWORD *)off_14223FF10 > 2u )
        {
          v49 = v6;
          v50 = v10;
          v37 = v10;
          v38 = (const char *)(v6 + v10);
          v39 = 40;
          sub_1401D1D30(&v32, &v37);
          v28 = (__int64)&v32;
          v29 = sub_1400015F0;
          v43 = 3;
          v44 = aCodexmateLibCo_5;
          v45 = 40;
          v47 = &unk_141A3F13F;
          v48 = &v28;
          v37 = 0;
          v38 = aCodexmateLibCo_5;
          v39 = 40;
          v40 = 0;
          v41 = aSrcCoreRelayPr_0;
          v42 = 30;
          v46 = 0x28100000001LL;
          sub_141503E20(&v51, &v37);
          if ( v32 )
            sub_140001660(v33, v32, 1);
          v6 = v49;
          v10 = v50;
        }
        sub_140001660(v10, v6, 1);
      }
      else
      {
LABEL_17:
        sub_1406C0ED0(&v37);
      }
    }
  }
  v11 = sub_1416724D0(aInput_1, 5, a1);
  if ( v11 && *(_BYTE *)v11 == 4 )
  {
    v12 = *(_QWORD *)(v11 + 24);
    if ( v12 )
    {
      v13 = v11;
      v14 = *(_QWORD *)(v11 + 16);
      v15 = 0;
      v16 = v14;
      while ( !(unsigned __int8)sub_140743ED0(v16) )
      {
        ++v15;
        v16 += 32;
        if ( v12 == v15 )
        {
          v15 = *(_QWORD *)(v13 + 24);
          goto LABEL_25;
        }
      }
      v50 = v14;
      v31 = v13;
      v49 = v12;
      v22 = v15 + 1;
      v35 = v15 + 1;
      v34 = v15;
      sub_1401AB4D0(v16, v17);
      v12 = v49;
      while ( v22 < v12 )
      {
        v23 = (__int128 *)(v50 + 32 * v22);
        v35 = v22;
        v34 = v15;
        if ( (unsigned __int8)sub_140743ED0(v23) )
        {
          v35 = ++v22;
          v34 = v15;
          sub_1401AB4D0(v23, v24);
        }
        else
        {
          v25 = 32 * v15;
          v26 = *v23;
          v27 = v50;
          *(_OWORD *)(v50 + v25 + 16) = v23[1];
          *(_OWORD *)(v27 + v25) = v26;
          ++v15;
          ++v22;
        }
      }
      *(_QWORD *)(v31 + 24) = v15;
LABEL_25:
      v18 = 0;
      v19 = v12 < v15;
      v20 = v12 - v15;
      if ( !v19 )
        v18 = v20;
      v36 = v18;
      if ( !v19 && v20 != 0 && *(_QWORD *)off_14223FF10 >= 3u )
      {
        v32 = (__int64 *)&v36;
        v33 = sub_1416EBAE0;
        v43 = 3;
        v44 = aCodexmateLibCo_5;
        v45 = 40;
        v47 = &unk_141A3F193;
        v48 = (__int64 *)&v32;
        v37 = 0;
        v38 = aCodexmateLibCo_5;
        v39 = 40;
        v40 = 0;
        v41 = aSrcCoreRelayPr_0;
        v42 = 30;
        v46 = 0x28C00000001LL;
        sub_141503E20(&v51, &v37);
      }
    }
    else
    {
      v36 = 0;
    }
  }
  else
  {
    v36 = 0;
  }
  result = sub_140743CF0(a1);
  v28 = result;
  if ( result )
  {
    result = *(_QWORD *)off_14223FF10;
    if ( *(_QWORD *)off_14223FF10 >= 3u )
    {
      v32 = &v28;
      v33 = sub_1416EBAE0;
      v43 = 3;
      v44 = aCodexmateLibCo_5;
      v45 = 40;
      v47 = &unk_141A3F1DB;
      v48 = (__int64 *)&v32;
      v37 = 0;
      v38 = aCodexmateLibCo_5;
      v39 = 40;
      v40 = 0;
      v41 = aSrcCoreRelayPr_0;
      v42 = 30;
      v46 = 0x29000000001LL;
      return sub_141503E20(&v51, &v37);
    }
  }
  return result;
}
