// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140f70560 | name sub_140F70560
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F70560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i *v12; // rax
  __m128i *v13; // rdi
  __int64 v14; // rcx
  char v15; // dl
  __m128i *v16; // rax
  __m128i *v17; // rdi
  __int64 (__fastcall *v18)(unsigned __int64); // rax
  char v19; // al
  __m128i *v20; // rax
  __m128i *v21; // rdi
  _BYTE v23[21]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int8 v24; // [rsp+35h] [rbp-4Bh]
  char v25; // [rsp+36h] [rbp-4Ah]
  __int64 v26; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v27[5]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-18h]
  char v29; // [rsp+77h] [rbp-9h]
  __int64 v30; // [rsp+78h] [rbp-8h]

  v30 = -2;
  LODWORD(v26) = 0;
  v27[0] = 0;
  LODWORD(v27[1]) = 7;
  *(_QWORD *)((char *)&v27[1] + 4) = 0x100000000LL;
  *(_QWORD *)((char *)&v27[2] + 1) = 0;
  v5 = sub_141690E40(&v26);
  v8 = v6;
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
        v28 = v6;
        v29 = 1;
        v18 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v7, v6) + 8);
        v29 = 1;
        v19 = v18(HIDWORD(v28));
        v8 = v28;
        if ( !v19 )
          goto LABEL_24;
        goto LABEL_29;
      case 3uLL:
        if ( BYTE4(v6) )
          goto LABEL_29;
LABEL_24:
        if ( *(_BYTE *)(a3 + 365) || *(_BYTE *)(a3 + 364) )
        {
LABEL_29:
          nullsub_1(v7);
          v20 = (__m128i *)sub_140001650(139, 1);
          if ( !v20 )
          {
            v28 = v8;
            v29 = 1;
            sub_141938D2B(1, 139);
          }
          v21 = v20;
          sub_1418F44E0(v20, (const __m128i *)aRouterCommitSt, 0x8Bu);
          *(_QWORD *)a1 = 10;
          *(_QWORD *)(a1 + 8) = 139;
          *(_QWORD *)(a1 + 16) = v21;
          *(_QWORD *)(a1 + 24) = 139;
          if ( (unsigned int)(v9 - 2) >= 2 && v9 )
          {
            v27[0] = v8 - 1;
            LOBYTE(v26) = 3;
            sub_1416BCB00(v27);
          }
        }
        else
        {
          v28 = v8;
          *(_QWORD *)a1 = -1;
          if ( (unsigned int)(v9 - 2) >= 2 && v9 )
          {
            v27[0] = v28 - 1;
            LOBYTE(v26) = 3;
            v29 = 0;
            sub_1416BCB00(v27);
          }
        }
        break;
    }
    return a1;
  }
  nullsub_1(v7);
  v10 = sub_140001650(0x2000, 1);
  if ( !v10 )
  {
    v28 = v8;
    sub_141938D2B(1, 0x2000);
  }
  v26 = v10;
  v27[0] = 0x2000;
  memset(&v27[1], 0, 17);
  v27[4] = v8;
  sub_140631C40(v23, &v26);
  if ( v25 == 2 )
  {
    v26 = *(_QWORD *)v23;
    nullsub_1(v11);
    v12 = (__m128i *)sub_140001650(139, 1);
    if ( !v12 )
      sub_141938D2B(1, 139);
    v13 = v12;
    sub_1418F44E0(v12, (const __m128i *)aRouterCommitSt, 0x8Bu);
    sub_14002F910(&v26);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 139;
    *(_QWORD *)(a1 + 16) = v13;
    *(_BYTE *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 24) = 139;
    *(_WORD *)(a1 + 29) = 0;
    *(_BYTE *)(a1 + 31) = 0;
    return a1;
  }
  v14 = *(unsigned int *)v23;
  if ( *(_DWORD *)v23 == *(_DWORD *)(a3 + 360) )
  {
    v14 = v24;
    v15 = *(_BYTE *)(a3 + 365);
    if ( v23[4] != 1 )
    {
LABEL_13:
      if ( !v15 && v24 == *(_BYTE *)(a3 + 364) && (v24 != 1 || v25 == *(_BYTE *)(a3 + 382)) )
      {
        *(_QWORD *)a1 = -1;
        return a1;
      }
      goto LABEL_17;
    }
    if ( v15 )
    {
      v15 = *(_OWORD *)(a3 + 366) != *(_OWORD *)&v23[5];
      goto LABEL_13;
    }
  }
LABEL_17:
  nullsub_1(v14);
  v16 = (__m128i *)sub_140001650(139, 1);
  if ( !v16 )
    sub_141938D2B(1, 139);
  v17 = v16;
  sub_1418F44E0(v16, (const __m128i *)aRouterCommitSt, 0x8Bu);
  *(_QWORD *)a1 = 10;
  *(_QWORD *)(a1 + 8) = 139;
  *(_QWORD *)(a1 + 16) = v17;
  *(_QWORD *)(a1 + 24) = 139;
  return a1;
}
