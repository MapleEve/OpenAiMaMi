// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140e935a0 | name sub_140E935A0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
unsigned __int64 *__fastcall sub_140E935A0(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  __int128 v18; // [rsp+20h] [rbp-60h]
  __int128 v19; // [rsp+30h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  unsigned __int64 v23; // [rsp+70h] [rbp-10h]
  unsigned __int64 v24; // [rsp+80h] [rbp+0h] BYREF
  _QWORD *v25; // [rsp+88h] [rbp+8h]
  _BYTE v26[48]; // [rsp+90h] [rbp+10h]
  unsigned __int64 v27; // [rsp+C0h] [rbp+40h]
  unsigned __int64 *v28; // [rsp+C8h] [rbp+48h]
  __int64 v29; // [rsp+D0h] [rbp+50h] BYREF
  _QWORD v30[9]; // [rsp+D8h] [rbp+58h] BYREF

  v30[1] = -2;
  v28 = a1;
  v7 = sub_1417A9630(*(_QWORD *)(a2 + 56));
  v27 = v7;
  if ( a4 )
  {
    v8 = 16 * a4;
    v9 = -(__int64)v7;
    v10 = 1;
    do
    {
      v11 = v10;
      v29 = a3;
      if ( v9 + v10 == 1 )
        break;
      sub_140E91D00(&v24, a2, &v29, v10);
      v12 = v24;
      if ( v24 != -1 )
      {
        v11 = (__int64)v25;
        v13 = *(_QWORD *)v26;
        v21 = *(_OWORD *)&v26[8];
        v22 = *(_OWORD *)&v26[24];
        v23 = *(_QWORD *)&v26[40];
        goto LABEL_13;
      }
      a3 += 16;
      v10 = v11 + 1;
      v8 -= 16;
    }
    while ( v8 );
    v13 = v27;
    if ( v11 != v27 )
      goto LABEL_11;
LABEL_7:
    v29 = a2;
    v30[0] = 0;
    sub_140F9AB20(&v24, &v29);
    v14 = v28;
    v15 = v24;
    if ( v24 == -1 )
    {
      v16 = v30;
      if ( v30[0] )
      {
        sub_14018EA70(v28, v30, 0, &off_141A58508);
        goto LABEL_16;
      }
      v15 = 0x8000000000000009uLL;
    }
    else
    {
      v16 = v25;
      v18 = *(_OWORD *)v26;
      v19 = *(_OWORD *)&v26[16];
      v20 = *(_OWORD *)&v26[32];
    }
    *v28 = v15;
    v14[1] = (unsigned __int64)v16;
    *((_OWORD *)v14 + 1) = v18;
    *((_OWORD *)v14 + 2) = v19;
    *((_OWORD *)v14 + 3) = v20;
LABEL_16:
    sub_140E96D30(&v29);
    return v14;
  }
  v11 = 0;
  v13 = v27;
  if ( !v27 )
    goto LABEL_7;
LABEL_11:
  v12 = 0x8000000000000013uLL;
LABEL_13:
  v14 = v28;
  *v28 = v12;
  v14[1] = v11;
  v14[2] = v13;
  *(_OWORD *)(v14 + 3) = v21;
  *(_OWORD *)(v14 + 5) = v22;
  v14[7] = v23;
  return v14;
}
