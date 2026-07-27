// module: codexmate_lib/core/relay/translator
// addr: 0x1409ea6c0
// name: sub_1409EA6C0
// win 1.2.3 | module core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
char __fastcall sub_1409EA6C0(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rsi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r12
  __int64 v12; // r12
  int v13; // eax
  char v14; // cl
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rdi
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r15
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r9
  unsigned __int64 v29; // r8
  unsigned __int64 *v30; // rdi
  _BYTE v32[32]; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-28h]
  __int64 v34; // [rsp+50h] [rbp-20h]
  unsigned __int64 *v35; // [rsp+58h] [rbp-18h]
  __int64 v36; // [rsp+60h] [rbp-10h]
  _QWORD *v37; // [rsp+68h] [rbp-8h]
  __int64 v38; // [rsp+70h] [rbp+0h]

  v38 = -2;
  LODWORD(v1) = *(unsigned __int8 *)a1;
  if ( (_DWORD)v1 == 4 )
  {
    v15 = a1[3];
    if ( v15 )
    {
      v16 = a1[2];
      v17 = 32 * v15;
      do
      {
        v18 = v16 + 32;
        LOBYTE(v1) = sub_1409EA6C0(v16);
        v16 = v18;
        v17 -= 32;
      }
      while ( v17 );
    }
    return v1;
  }
  if ( (_DWORD)v1 != 5 )
    return v1;
  v2 = a1[1];
  if ( !v2 )
    return v1;
  v35 = a1 + 1;
  v37 = a1;
  v36 = a1[2];
  v3 = v2;
LABEL_5:
  v4 = v3 + 360;
  v5 = *(unsigned __int16 *)(v3 + 626);
  v33 = v3;
  v6 = (_QWORD *)(v3 - 8);
  v34 = v5;
  v7 = 3LL * (unsigned int)(8 * v5);
  v8 = -1;
  do
  {
    if ( !v7 )
    {
      v8 = v34;
LABEL_15:
      if ( v36 )
      {
        --v36;
        v3 = *(_QWORD *)(v33 + 8 * v8 + 632);
        goto LABEL_5;
      }
      goto LABEL_26;
    }
    v9 = v4 + 24;
    v10 = *(_QWORD *)(v4 + 16);
    v11 = v10 - 6;
    if ( v10 >= 6 )
      v10 = 6;
    v12 = -(__int64)v11;
    v13 = sub_1416847B0(aFormat_1, *(_QWORD *)(v4 + 8), v10);
    if ( v13 )
      v12 = v13;
    v14 = (v12 > 0) - (v12 < 0);
    v6 += 4;
    ++v8;
    v7 -= 24;
    v4 = v9;
  }
  while ( v14 == 1 );
  if ( v14 )
    goto LABEL_15;
  if ( *((_BYTE *)v6 - 24) != 3 )
  {
LABEL_26:
    v20 = v37;
    goto LABEL_27;
  }
  v19 = *(v6 - 1);
  v20 = v37;
  if ( *v6 == 13 )
  {
    if ( !(*(_QWORD *)v19 ^ 0x656665722D697275LL | *(_QWORD *)(v19 + 5) ^ 0x65636E6572656665LL) )
      goto LABEL_57;
  }
  else if ( *v6 == 3 && !(*(_WORD *)v19 ^ 0x7275 | *(unsigned __int8 *)(v19 + 2) ^ 0x69) )
  {
LABEL_57:
    v30 = v35;
    sub_1402B4580(v32, v35, aFormat_1, 6);
    if ( v32[0] != 0xFF )
      sub_1400104F0(v32);
    v2 = *v30;
  }
LABEL_27:
  LOBYTE(v1) = v2 != 0;
  v21 = v20[3];
  if ( v2 != 0 && v21 != 0 )
  {
    v1 = v20[2];
    v22 = 0;
    while ( 1 )
    {
      if ( v22 )
      {
        if ( v1 < *(unsigned __int16 *)(v22 + 626) )
          goto LABEL_39;
        goto LABEL_44;
      }
      if ( !v1 )
      {
        v22 = v2;
        goto LABEL_43;
      }
      v22 = v2;
      if ( (v1 & 7) == 0 )
        break;
      v24 = 0;
      do
      {
        v22 = *(_QWORD *)(v22 + 632);
        ++v24;
      }
      while ( (v1 & 7) != v24 );
      v25 = v1 - v24;
      if ( v1 >= 8 )
        goto LABEL_42;
LABEL_43:
      v1 = 0;
      v2 = 0;
      if ( *(_WORD *)(v22 + 626) )
      {
LABEL_39:
        v26 = v22;
        goto LABEL_46;
      }
      do
      {
LABEL_44:
        v26 = *(_QWORD *)(v22 + 352);
        if ( !v26 )
          sub_1416C3040(&off_1417A4A88);
        ++v2;
        v1 = *(unsigned __int16 *)(v22 + 624);
        v22 = *(_QWORD *)(v22 + 352);
      }
      while ( (unsigned __int16)v1 >= *(_WORD *)(v26 + 626) );
LABEL_46:
      if ( v2 )
      {
        v27 = v26 + 8 * v1 + 640;
        if ( (v2 & 7) != 0 )
        {
          v28 = 0;
          do
          {
            v22 = *(_QWORD *)v27;
            v27 = *(_QWORD *)v27 + 632LL;
            ++v28;
          }
          while ( (v2 & 7) != v28 );
          v29 = v2 - v28;
          if ( v2 >= 8 )
          {
            do
            {
LABEL_51:
              v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 632LL)
                                                                                          + 632LL)
                                                                              + 632LL)
                                                                  + 632LL)
                                                      + 632LL)
                                          + 632LL)
                              + 632LL);
              v27 = v22 + 632;
              v29 -= 8LL;
            }
            while ( v29 );
          }
        }
        else
        {
          v29 = v2;
          if ( v2 >= 8 )
            goto LABEL_51;
        }
        v23 = 0;
        goto LABEL_30;
      }
      v23 = v1 + 1;
      v22 = v26;
LABEL_30:
      --v21;
      sub_1409EA6C0(32 * v1 + v26);
      v2 = 0;
      v1 = v23;
      if ( !v21 )
        return v1;
    }
    v25 = v1;
    if ( v1 < 8 )
      goto LABEL_43;
    do
    {
LABEL_42:
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 632)
                                                                                              + 632LL)
                                                                                  + 632LL)
                                                                      + 632LL)
                                                          + 632LL)
                                              + 632LL)
                                  + 632LL)
                      + 632LL);
      v25 -= 8LL;
    }
    while ( v25 );
    goto LABEL_43;
  }
  return v1;
}