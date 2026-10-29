// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140043840 | name sub_140043840
// win 1.2.7 | module src/core/analytics/index.rs | attributed via panic-Location xref (win-native)
volatile signed __int64 *__fastcall sub_140043840(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  void *v6; // rcx
  void *v7; // rax
  void *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  char *v11; // rdi
  __int64 *v12; // r15
  char v13; // bl
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rbx
  signed __int64 v17; // rdi
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rdi
  volatile signed __int64 *result; // rax
  __int128 v24; // [rsp+20h] [rbp-60h] BYREF
  __int128 v25; // [rsp+30h] [rbp-50h]
  __int128 v26; // [rsp+40h] [rbp-40h]
  __int128 v27; // [rsp+50h] [rbp-30h]
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int128 v29; // [rsp+70h] [rbp-10h]
  _QWORD v30[2]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v32; // [rsp+A0h] [rbp+20h]
  __int128 v33; // [rsp+B0h] [rbp+30h]
  __int128 v34; // [rsp+C0h] [rbp+40h]
  __int128 v35; // [rsp+D0h] [rbp+50h]
  __int128 v36; // [rsp+E0h] [rbp+60h]
  __int128 v37; // [rsp+F0h] [rbp+70h]
  __int64 v38; // [rsp+100h] [rbp+80h] BYREF
  const char *v39; // [rsp+108h] [rbp+88h]
  __int64 v40; // [rsp+110h] [rbp+90h]
  __int64 v41; // [rsp+118h] [rbp+98h]
  const char *v42; // [rsp+120h] [rbp+A0h]
  __int64 v43; // [rsp+128h] [rbp+A8h]
  __int64 v44; // [rsp+130h] [rbp+B0h]
  const char *v45; // [rsp+138h] [rbp+B8h]
  __int64 v46; // [rsp+140h] [rbp+C0h]
  __int64 v47; // [rsp+148h] [rbp+C8h]
  void *v48; // [rsp+150h] [rbp+D0h]
  __int64 v49; // [rsp+158h] [rbp+D8h]
  __int64 v50; // [rsp+160h] [rbp+E0h]
  int v51; // [rsp+16Ch] [rbp+ECh]
  _QWORD *v52; // [rsp+170h] [rbp+F0h]
  __int64 v53; // [rsp+178h] [rbp+F8h]
  char v54; // [rsp+187h] [rbp+107h] BYREF
  __int64 v55; // [rsp+188h] [rbp+108h]

  v55 = -2;
  v1 = *(_QWORD *)(a1 + 992) + 16LL;
  v50 = a1;
  sub_140F7F560(&v24, a1, v1, 0);
  v37 = v29;
  v36 = v28;
  v35 = v27;
  v34 = v26;
  v33 = v25;
  v3 = v24;
  v32 = v24;
  if ( (_QWORD)v24 == -2 )
  {
    if ( *(_QWORD *)off_1421E6EC0 )
    {
      v44 = 1;
      v45 = aCodexmateLibCo_15;
      v46 = 37;
      v48 = &unk_141942558;
      v49 = 83;
      v38 = 0;
      v39 = aCodexmateLibCo_15;
      v40 = 37;
      v41 = 0;
      v42 = aSrcCoreAnalyti;
      v43 = 27;
      v47 = 0x6600000001LL;
      sub_1414D53A0(&v54, &v38);
    }
    nullsub_1(v2);
    v8 = (void *)sub_140001650(19, 1);
    if ( !v8 )
      sub_141938D2B(1, 19);
    v2 = 19;
    v53 = 19;
    qmemcpy(v8, "index_update_failed", 19);
    v52 = v8;
  }
  else
  {
    if ( (_QWORD)v24 == -1 )
    {
      v53 = -1;
      LOBYTE(v3) = 1;
      v51 = v3;
      goto LABEL_21;
    }
    v29 = v37;
    v28 = v36;
    v27 = v35;
    v26 = v34;
    v25 = v33;
    v24 = v32;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v4 = 2;
      if ( (unsigned __int64)v24 >= 2 )
        v4 = v24 - 2;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          v5 = 12;
          v6 = &unk_1419424C1;
        }
        else
        {
          v5 = 11;
          v6 = &unk_1419424CD;
        }
      }
      else
      {
        v5 = 18;
        v6 = &unk_1419424AF;
      }
      v31[0] = v6;
      v31[1] = v5;
      v30[0] = v31;
      v30[1] = sub_140186EE0;
      v44 = 2;
      v45 = aCodexmateLibCo_15;
      v46 = 37;
      v48 = &unk_1419424D8;
      v49 = (__int64)v30;
      v38 = 0;
      v39 = aCodexmateLibCo_15;
      v40 = 37;
      v41 = 0;
      v42 = aSrcCoreAnalyti;
      v43 = 27;
      v47 = 0x5F00000001LL;
      sub_1414D53A0(&v54, &v38);
    }
    nullsub_1(v2);
    v7 = (void *)sub_140001650(19, 1);
    if ( !v7 )
      sub_141938D2B(1, 19);
    qmemcpy(v7, "index_update_failed", 19);
    v52 = v7;
    sub_1400347C0(&v24);
    v53 = 19;
  }
  v51 = 0;
LABEL_21:
  v9 = v50 + 992;
  v10 = *(_QWORD *)(v50 + 992);
  v11 = (char *)(v10 + 64);
  LOBYTE(v2) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v10 + 64), 1, 0) )
    sub_141937480((volatile void *)(v10 + 64));
  v12 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v13 = sub_141938160(v2) ^ 1;
    v14 = *(_QWORD *)(v10 + 72);
    if ( v14 == -1 )
      goto LABEL_27;
  }
  else
  {
    v13 = 0;
    v14 = *(_QWORD *)(v10 + 72);
    if ( v14 == -1 )
      goto LABEL_27;
  }
  if ( v14 )
    sub_140001660(*(_QWORD *)(v10 + 80), v14, 1);
LABEL_27:
  *(_QWORD *)(v10 + 72) = v53;
  *(_QWORD *)(v10 + 80) = v52;
  *(_QWORD *)(v10 + 88) = 19;
  if ( !v13 && 2 * *v12 && !(unsigned __int8)sub_141938160(v2) )
    *(_BYTE *)(v10 + 65) = 1;
  v15 = *v11;
  *v11 = 0;
  if ( v15 == 2 )
    WakeByAddressSingle((PVOID)(v10 + 64));
  v16 = *(_QWORD *)(v50 + 992);
  v17 = *(_QWORD *)(v50 + 1000);
  sub_141406CE0(&v38);
  v18 = ((int)v38 >> 13) - 1;
  v19 = 0;
  if ( (int)v38 >> 13 <= 0 )
  {
    v20 = (1 - ((int)v38 >> 13)) / 0x190u + 1;
    v18 += 400 * v20;
    v19 = -146097 * v20;
  }
  _InterlockedCompareExchange64(
    (volatile signed __int64 *)(v16 + 40),
    HIDWORD(v38)
  + 86400LL
  * (int)(((v18 / 100) >> 2) + ((1461 * v18) >> 2) + v19 + (((unsigned int)v38 >> 4) & 0x1FF) - v18 / 100 - 719163),
    v17);
  *(_BYTE *)(*(_QWORD *)v9 + 97LL) = 0;
  if ( (_DWORD)v32 == -2 )
  {
    v53 = *((_QWORD *)&v32 + 1);
    v52 = (_QWORD *)v33;
    if ( *(_QWORD *)v33 )
      (*(void (__fastcall **)(__int64))v33)(v53);
    v21 = v52[1];
    if ( v21 )
      sub_140001660(v53, v21, v52[2]);
  }
  v22 = v50;
  sub_140034990(v50);
  result = *(volatile signed __int64 **)(v22 + 992);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_1409E6120(v9);
  return result;
}
