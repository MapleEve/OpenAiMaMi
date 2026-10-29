// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140747a60 | successor of pre-update 0x140f70560 | session <审计会话>
// match evidence: {"body_sim": 0.845, "str_ov": 0, "anchor": 0.68, "conf": 1.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_140747A60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(unsigned __int64); // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v23; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v24[5]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v25[21]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int8 v26; // [rsp+6Dh] [rbp-13h]
  char v27; // [rsp+6Eh] [rbp-12h]
  char v28; // [rsp+77h] [rbp-9h]
  __int64 v29; // [rsp+78h] [rbp-8h]

  v29 = -2;
  LODWORD(v23) = 0;
  v24[0] = 0;
  LODWORD(v24[1]) = 7;
  *(_QWORD *)((char *)&v24[1] + 4) = 0x100000000LL;
  *(_QWORD *)((char *)&v24[2] + 1) = 0;
  v5 = sub_1416BFE10(&v23, *(_QWORD *)(a2 + 808), *(_QWORD *)(a2 + 816));
  v8 = v6;
  *(_QWORD *)v25 = v5;
  *(_QWORD *)&v25[8] = v6;
  if ( v5 == 1 )
  {
    v9 = v6 & 3;
    switch ( v6 & 3 )
    {
      case 0uLL:
        if ( *(_BYTE *)(v6 + 16) )
          goto LABEL_29;
        goto LABEL_24;
      case 1uLL:
        if ( !*(_BYTE *)(v6 + 31) )
          goto LABEL_24;
        goto LABEL_29;
      case 2uLL:
        v28 = 1;
        v18 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v7, v6) + 8);
        v28 = 1;
        LOBYTE(v19) = v18(HIDWORD(v8));
        goto LABEL_21;
      case 3uLL:
        v19 = HIDWORD(v6);
LABEL_21:
        if ( (_BYTE)v19 )
          goto LABEL_29;
LABEL_24:
        if ( *(_BYTE *)(a3 + 365) || *(_BYTE *)(a3 + 364) )
        {
LABEL_29:
          nullsub_1(v7, v6);
          v20 = sub_140001650(139, 1);
          if ( !v20 )
          {
            v28 = 1;
            sub_14196B2DB(1, 139);
          }
          v21 = v20;
          sub_1419234B0(v20, aRouterCommitSt, 139);
          *(_QWORD *)a1 = 10;
          *(_QWORD *)(a1 + 8) = 139;
          *(_QWORD *)(a1 + 16) = v21;
          *(_QWORD *)(a1 + 24) = 139;
          if ( (unsigned int)(v9 - 2) >= 2 && (v8 & 3) != 0 )
          {
            v24[0] = v8 - 1;
            LOBYTE(v23) = 3;
            sub_1416EBAD0(v24);
          }
        }
        else
        {
          *(_QWORD *)a1 = -1;
          if ( (unsigned int)(v9 - 2) >= 2 && (v8 & 3) != 0 )
          {
            v24[0] = v8 - 1;
            LOBYTE(v23) = 3;
            v28 = 0;
            sub_1416EBAD0(v24);
          }
        }
        break;
    }
    return a1;
  }
  nullsub_1(v7, v6);
  v10 = sub_140001650(0x2000, 1);
  if ( !v10 )
    sub_14196B2DB(1, 0x2000);
  v23 = v10;
  v24[0] = 0x2000;
  memset(&v24[1], 0, 17);
  v24[4] = v8;
  sub_140D90050(v25, &v23);
  if ( v27 == 2 )
  {
    v23 = *(_QWORD *)v25;
    nullsub_1(v12, v11);
    v13 = sub_140001650(139, 1);
    if ( !v13 )
      sub_14196B2DB(1, 139);
    v14 = v13;
    sub_1419234B0(v13, aRouterCommitSt, 139);
    sub_140032F30(&v23);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 139;
    *(_QWORD *)(a1 + 16) = v14;
    *(_BYTE *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 24) = 139;
    *(_WORD *)(a1 + 29) = 0;
    *(_BYTE *)(a1 + 31) = 0;
    return a1;
  }
  v15 = *(unsigned int *)v25;
  if ( *(_DWORD *)v25 == *(_DWORD *)(a3 + 360) )
  {
    v15 = v26;
    v11 = *(unsigned __int8 *)(a3 + 365);
    if ( v25[4] != 1 )
    {
LABEL_13:
      if ( !(_BYTE)v11 && v26 == *(_BYTE *)(a3 + 364) && (v26 != 1 || v27 == *(_BYTE *)(a3 + 382)) )
      {
        *(_QWORD *)a1 = -1;
        return a1;
      }
      goto LABEL_17;
    }
    if ( (_BYTE)v11 )
    {
      v11 = *(_QWORD *)(a3 + 366) ^ *(_QWORD *)&v25[5] | *(_QWORD *)(a3 + 374) ^ *(_QWORD *)&v25[13];
      LOBYTE(v11) = *(_OWORD *)(a3 + 366) != *(_OWORD *)&v25[5];
      goto LABEL_13;
    }
  }
LABEL_17:
  nullsub_1(v15, v11);
  v16 = sub_140001650(139, 1);
  if ( !v16 )
    sub_14196B2DB(1, 139);
  v17 = v16;
  sub_1419234B0(v16, aRouterCommitSt, 139);
  *(_QWORD *)a1 = 10;
  *(_QWORD *)(a1 + 8) = 139;
  *(_QWORD *)(a1 + 16) = v17;
  *(_QWORD *)(a1 + 24) = 139;
  return a1;
}
