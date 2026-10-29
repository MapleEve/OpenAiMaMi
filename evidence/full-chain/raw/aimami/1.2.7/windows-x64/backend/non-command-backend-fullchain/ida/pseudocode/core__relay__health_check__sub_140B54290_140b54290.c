// win 1.2.7 | module src/core/relay/health_check.rs | ea 0x140b54290 | name sub_140B54290
// win 1.2.7 | module src/core/relay/health_check.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140B54290(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  const __m128i *v10; // rbx
  _QWORD *v11; // r12
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  char result; // al
  __int64 v16; // rbx
  __int64 v17; // r15
  unsigned __int128 v18; // kr10_16
  __m128i *v19; // rax
  __m128i *v20; // rdi
  __int64 v21; // rdx
  void *v22; // rax
  unsigned __int64 v23; // rdi
  __int128 v24; // [rsp+30h] [rbp-50h]
  _QWORD v25[2]; // [rsp+78h] [rbp-8h] BYREF
  unsigned __int128 v26; // [rsp+88h] [rbp+8h] BYREF
  _BYTE v27[24]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v28; // [rsp+E0h] [rbp+60h]
  __int64 v29; // [rsp+108h] [rbp+88h]
  __int64 v30; // [rsp+110h] [rbp+90h]
  __int64 v31; // [rsp+118h] [rbp+98h] BYREF
  _BYTE *v32; // [rsp+120h] [rbp+A0h]
  _QWORD *v33; // [rsp+128h] [rbp+A8h]
  __int64 v34; // [rsp+130h] [rbp+B0h]

  v34 = -2;
  v5 = *((unsigned __int8 *)a2 + 72);
  v33 = a2;
  switch ( v5 )
  {
    case 0LL:
      v6 = *a2;
      a2[1] = *a2;
      a2[2] = 0;
      a2[3] = 1;
      a2[4] = 0;
      break;
    case 1LL:
      sub_1419393E0(&off_141A2BE08);
    case 2LL:
      sub_141939400(&off_141A2BE08);
    case 3LL:
      v32 = a2 + 8;
      switch ( *((_BYTE *)a2 + 64) )
      {
        case 0:
          v6 = a2[5];
          goto LABEL_24;
        case 1:
          sub_1419393E0(&off_141A2AC58);
        case 2:
          sub_141939400(&off_141A2AC58);
        case 3:
          v7 = (_QWORD *)a2[7];
          goto LABEL_10;
      }
  }
  while ( 2 )
  {
    a2[5] = v6;
    v32 = a2 + 8;
    *((_BYTE *)a2 + 64) = 0;
LABEL_24:
    a2[6] = v6;
    while ( 1 )
    {
      v7 = (_QWORD *)(v6 + 112);
      a2[7] = v7;
LABEL_10:
      (*(void (__fastcall **)(unsigned __int128 *, _QWORD, __int64))(v7[1] + 24LL))(&v26, *v7, a3);
      v8 = v26;
      if ( (_QWORD)v26 == 3 )
      {
        *v32 = 3;
        *(_QWORD *)a1 = 2;
        result = 3;
        v11 = v33;
        goto LABEL_36;
      }
      v9 = *((_QWORD *)&v26 + 1);
      v10 = *(const __m128i **)v27;
      v24 = *(_OWORD *)&v27[8];
      if ( (_DWORD)v26 == -2 )
      {
        LOWORD(v28) = 5;
        v29 = *((_QWORD *)&v26 + 1);
        v30 = *(_QWORD *)v27;
        *(_QWORD *)&v26 = -1;
        nullsub_1(v8);
        v19 = (__m128i *)sub_140001650(144, 8);
        if ( !v19 )
          sub_141938D11(8, 144);
        v20 = v19;
        sub_1418F44E0(v19, (const __m128i *)&v26, 0x90u);
        *v32 = 1;
        v31 = sub_14122E700(v20);
        v25[0] = &v31;
        v25[1] = sub_14122E940;
        sub_1416ABFD0(&v26, &unk_141A2A7BA, v25);
        sub_140192750(v31);
        v18 = v26;
        v16 = *(_QWORD *)v27;
        v11 = v33;
        v21 = v33[2];
        if ( !v21 )
          goto LABEL_34;
        goto LABEL_31;
      }
      v11 = v33;
      if ( (_DWORD)v26 == -3 )
      {
        *v32 = 1;
        goto LABEL_28;
      }
      if ( (_DWORD)v26 == -1 )
        break;
      sub_1400331B0(&v26);
      a2 = v33;
      v6 = v33[6];
    }
    *v32 = 1;
    if ( !v9 )
    {
LABEL_28:
      v16 = v11[4];
      v17 = 0;
      v18 = *((_OWORD *)v11 + 1);
      goto LABEL_35;
    }
    *(_QWORD *)&v26 = v9;
    *((_QWORD *)&v26 + 1) = v10;
    *(_OWORD *)v27 = v24;
    v12 = v11[4];
    v13 = -1;
    if ( !__CFADD__((_QWORD)v24, v12) )
      v13 = v24 + v12;
    if ( v13 < 0x100001 )
    {
      if ( (unsigned __int64)v24 > v11[2] - v12 )
      {
        sub_14190D590((_DWORD)v11 + 16, v12, v24, 1, 1);
        v11 = v33;
        v12 = v33[4];
LABEL_21:
        sub_1418F44E0((__m128i *)(v12 + v11[3]), v10, v24);
        v10 = *((const __m128i **)&v26 + 1);
        v9 = v26;
        v14 = *(_QWORD *)v27;
      }
      else
      {
        v14 = 0;
        if ( (_QWORD)v24 )
          goto LABEL_21;
      }
      v11[4] = v24 + v12;
      (*(void (__fastcall **)(_BYTE *, const __m128i *, __int64))(v9 + 32))(&v27[8], v10, v14);
      a2 = v33;
      v6 = v33[1];
      continue;
    }
    break;
  }
  nullsub_1(v24 + v12);
  v22 = (void *)sub_140001650(33, 1);
  if ( !v22 )
    sub_141938D2B(1, 33);
  v23 = (unsigned __int64)v22;
  qmemcpy(v22, "probe response exceeds size limit", 33);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(v26 + 32))(&v27[8], *((_QWORD *)&v26 + 1), *(_QWORD *)v27);
  v16 = 33;
  v11 = v33;
  v21 = v33[2];
  v18 = __PAIR128__(v23, 33);
  if ( !v21 )
  {
LABEL_34:
    v17 = 1;
    goto LABEL_35;
  }
LABEL_31:
  v17 = 1;
  sub_140001660(v11[3], v21, 1);
LABEL_35:
  *(_QWORD *)a1 = v17;
  *(_OWORD *)(a1 + 8) = v18;
  *(_QWORD *)(a1 + 24) = v16;
  result = 1;
LABEL_36:
  *((_BYTE *)v11 + 72) = result;
  return result;
}
