// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1401f5920 | name sub_1401F5920
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1401F5920(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  char v4; // al
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char *v13; // rax
  char *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  char v17; // r11
  int v18; // r10d
  int v19; // r9d
  char v20; // r11
  int v21; // r9d
  __int64 v22; // rbx
  unsigned int v23; // edx
  unsigned int v24; // edi
  _BYTE *v25; // rax
  unsigned __int128 v26; // kr00_16
  char v27; // al
  unsigned __int64 *v28; // [rsp+28h] [rbp-18h]
  char v29; // [rsp+34h] [rbp-Ch]
  __int64 v30; // [rsp+38h] [rbp-8h]

  v3 = *a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v3 + 56), 1, 0) )
    sub_141937480((volatile void *)(v3 + 56));
  if ( 2 * *off_1421E7210 )
  {
    v4 = sub_141938160(a1) ^ 1;
    v5 = *(unsigned __int8 *)(v3 + 57);
    if ( *(_BYTE *)(v3 + 348) )
    {
LABEL_5:
      if ( v4 )
        goto LABEL_48;
      goto LABEL_47;
    }
  }
  else
  {
    v4 = 0;
    v5 = *(unsigned __int8 *)(v3 + 57);
    if ( *(_BYTE *)(v3 + 348) )
      goto LABEL_5;
  }
  v29 = v4;
  v30 = v3;
  v6 = sub_1416419F0("contenttext", 7, a2);
  if ( v6 && *(_BYTE *)v6 == 4 )
  {
    if ( *(_DWORD *)(v3 + 96) == 1 )
    {
      v28 = (unsigned __int64 *)(v3 + 104);
    }
    else
    {
      *(_QWORD *)(v3 + 96) = 1;
      v28 = (unsigned __int64 *)(v3 + 104);
      *(_OWORD *)(v3 + 104) = 0;
    }
    v7 = *(_QWORD *)(v6 + 16);
    v8 = v7 + 32LL * *(_QWORD *)(v6 + 24);
    while ( 1 )
    {
LABEL_14:
      if ( v7 == v8 )
        goto LABEL_46;
      v9 = v7;
      v10 = sub_1416419F0(aType_3, 4, v7);
      v7 += 32;
      if ( v10 )
      {
        if ( *(_BYTE *)v10 == 3 && *(_QWORD *)(v10 + 24) == 4 && **(_DWORD **)(v10 + 16) == 1954047348 )
        {
          v11 = sub_1416419F0("text", 4, v9);
          if ( v11 )
          {
            if ( *(_BYTE *)v11 == 3 )
            {
              v12 = *(_QWORD *)(v11 + 24);
              if ( v12 )
                break;
            }
          }
        }
      }
    }
    v13 = *(char **)(v11 + 16);
    v14 = &v13[v12];
    v15 = *(_QWORD *)(v3 + 104);
    v16 = *(_QWORD *)(v3 + 112);
    while ( 1 )
    {
      v17 = *v13;
      if ( *v13 >= 0 )
        break;
      if ( (unsigned __int8)v17 < 0xE0u )
      {
        v13 += 2;
        goto LABEL_24;
      }
      v18 = v17 & 0x1F;
      v19 = ((v13[1] & 0x3F) << 6) | v13[2] & 0x3F;
      if ( (unsigned __int8)v17 < 0xF0u )
      {
        v13 += 3;
        v21 = (v18 << 12) | v19;
      }
      else
      {
        v20 = v13[3];
        v13 += 4;
        v21 = ((v18 & 7) << 18) | (v19 << 6) | v20 & 0x3F;
      }
      if ( !++v15 )
        v15 = -1;
      if ( v15 >= 0x1FFFFFFFFFFFFFLL )
        v15 = 0x1FFFFFFFFFFFFFLL;
      if ( v21 == 65533 )
      {
        if ( !++v16 )
          v16 = -1;
        if ( v16 >= 0x1FFFFFFFFFFFFFLL )
          v16 = 0x1FFFFFFFFFFFFFLL;
        *(_QWORD *)(v3 + 112) = v16;
      }
LABEL_28:
      if ( v13 == v14 )
      {
        *v28 = v15;
        goto LABEL_14;
      }
    }
    ++v13;
LABEL_24:
    if ( !++v15 )
      v15 = -1;
    if ( v15 >= 0x1FFFFFFFFFFFFFLL )
      v15 = 0x1FFFFFFFFFFFFFLL;
    goto LABEL_28;
  }
LABEL_46:
  v22 = sub_14167FD50(v3 + 40);
  v24 = v23;
  v25 = (_BYTE *)sub_1416419F0(aUsage_0, 5, a2);
  v26 = 0x3E8 * (unsigned __int128)(unsigned __int64)v22 + v24 / 0xF4240uLL;
  sub_1402249D0(v30 + 64, v26 | -(__int64)(*((_QWORD *)&v26 + 1) != 0), (const __m128i *)aJson_5, 4u, v25);
  v3 = v30;
  if ( v29 )
    goto LABEL_48;
LABEL_47:
  if ( 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v5) )
    *(_BYTE *)(v3 + 57) = 1;
LABEL_48:
  v27 = *(_BYTE *)(v3 + 56);
  *(_BYTE *)(v3 + 56) = 0;
  if ( v27 == 2 )
    WakeByAddressSingle((PVOID)(v3 + 56));
}
