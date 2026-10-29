// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140f8df00 | name sub_140F8DF00
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void *__fastcall sub_140F8DF00(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r13
  unsigned __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  void *result; // rax
  __int64 (__fastcall *v10)(unsigned __int64); // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // r14
  _QWORD v20[2]; // [rsp+30h] [rbp-50h]
  _OWORD v21[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+80h] [rbp+0h]
  __int128 v23; // [rsp+90h] [rbp+10h]
  __int64 v24; // [rsp+A0h] [rbp+20h]
  __int128 v25; // [rsp+A8h] [rbp+28h] BYREF
  unsigned __int64 v26; // [rsp+B8h] [rbp+38h]
  unsigned __int64 v27; // [rsp+C0h] [rbp+40h]
  char v28; // [rsp+CEh] [rbp+4Eh] BYREF
  char v29; // [rsp+CFh] [rbp+4Fh]
  __int64 v30; // [rsp+D0h] [rbp+50h]

  v30 = -2;
  *(_QWORD *)&v25 = 0;
  *((_QWORD *)&v25 + 1) = 16;
  v26 = 0;
  v20[0] = a2 + 160;
  v20[1] = a2 + 192;
  v3 = 0;
  while ( v3 != 2 )
  {
    v4 = v20[v3];
    sub_141695550(v21, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
    ++v3;
    v5 = *((_QWORD *)&v21[0] + 1);
    v27 = *((_QWORD *)&v21[0] + 1);
    v24 = *(_QWORD *)&v21[0];
    if ( *(_QWORD *)&v21[0] == 2 )
    {
      v6 = BYTE8(v21[0]) & 3;
      switch ( BYTE8(v21[0]) & 3 )
      {
        case 0:
          v29 = 1;
          v10 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(*((_QWORD *)&v21[0] + 1), *(_QWORD *)&v21[0])
                                                           + 8);
          v29 = 1;
          result = (void *)v10(HIDWORD(v27));
          v5 = v27;
          if ( (_BYTE)result )
            goto LABEL_20;
          goto LABEL_12;
        case 1:
          result = (void *)HIDWORD(*((_QWORD *)&v21[0] + 1));
          if ( BYTE12(v21[0]) )
          {
LABEL_20:
            *(_QWORD *)a1 = 2;
            *(_QWORD *)(a1 + 8) = v5;
            v12 = v26;
            if ( !v26 )
              goto LABEL_27;
            goto LABEL_23;
          }
LABEL_12:
          if ( (unsigned int)(v6 - 2) >= 2 )
          {
LABEL_13:
            if ( v6 )
            {
              *((_QWORD *)&v21[0] + 1) = v27 - 1;
              LOBYTE(v21[0]) = 3;
              v29 = 0;
              sub_1416BCB00((char *)v21 + 8);
            }
          }
          break;
        default:
          goto LABEL_13;
      }
    }
    else
    {
      if ( (BYTE12(v22) & 0x10) == 0
        || (v5 = (unsigned int)v23 >> 29, ((unsigned __int8)v5 & (unsigned __int8)(HIDWORD(v22) >> 10) & 1) != 0) )
      {
        nullsub_1(v5);
        result = (void *)sub_140001650(35, 1);
        if ( !result )
        {
          v29 = 1;
          sub_141938D2B(1, 35);
        }
        qmemcpy(result, "analytics source is not a directory", 35);
        *(_QWORD *)a1 = 9;
        *(_QWORD *)(a1 + 8) = 35;
        *(_QWORD *)(a1 + 16) = result;
        *(_QWORD *)(a1 + 24) = 35;
        v12 = v26;
        if ( !v26 )
        {
LABEL_27:
          if ( (_QWORD)v25 )
            return (void *)sub_140001660(*((_QWORD *)&v25 + 1), (_QWORD)v25 << 6, 16);
          return result;
        }
LABEL_23:
        v16 = (_QWORD *)(*((_QWORD *)&v25 + 1) + 8LL);
        do
        {
          v17 = *(v16 - 1);
          if ( v17 )
            result = (void *)sub_140001660(*v16, v17, 1);
          v16 += 8;
          --v12;
        }
        while ( v12 );
        goto LABEL_27;
      }
      v7 = *(_QWORD *)(v4 + 8);
      v8 = *(_QWORD *)(v4 + 16);
      v29 = 1;
      result = (void *)sub_140F8D740(v21, v7, v8, &v25);
      if ( LODWORD(v21[0]) != -1 )
      {
        *(_OWORD *)(a1 + 80) = v23;
        *(_OWORD *)(a1 + 64) = v22;
        v13 = v21[0];
        v14 = v21[1];
        v15 = v21[2];
        *(_OWORD *)(a1 + 48) = v21[3];
        *(_OWORD *)(a1 + 32) = v15;
        *(_OWORD *)(a1 + 16) = v14;
        *(_OWORD *)a1 = v13;
        v12 = v26;
        if ( !v26 )
          goto LABEL_27;
        goto LABEL_23;
      }
    }
  }
  v11 = *((_QWORD *)&v25 + 1);
  *(_QWORD *)&v21[0] = &v28;
  if ( v26 >= 2 )
  {
    if ( v26 >= 0x15 )
    {
      sub_14065D040(*((_QWORD *)&v25 + 1), v26, v21);
    }
    else
    {
      v18 = *((_QWORD *)&v25 + 1) + (v26 << 6);
      v19 = *((_QWORD *)&v25 + 1) + 64LL;
      do
      {
        sub_140DF9BD0(v11, v19);
        v19 += 64;
      }
      while ( v19 != v18 );
    }
  }
  result = (void *)v26;
  *(_QWORD *)(a1 + 24) = v26;
  *(_OWORD *)(a1 + 8) = v25;
  *(_QWORD *)a1 = -1;
  return result;
}
