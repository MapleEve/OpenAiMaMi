// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1412f2e70
// name: sub_1412F2E70
// 
// win 1.2.3 recheck | attributed via call-graph propagation (FANIN_CAP=12, decompile-verified real logic not generic glue, caller-module-purity cross-checked no conflicting non-relay module attribution) | target=/codexmate_lib/core/relay/proxy_server
char __fastcall sub_1412F2E70(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  _BYTE *v6; // r14
  int v7; // eax
  signed __int64 v8; // rcx
  char v9; // r8
  char v10; // al
  char v11; // r13
  __int64 *v12; // rdx
  unsigned __int64 v13; // r15
  volatile signed __int64 *v14; // rsi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbx
  char v17; // r8
  char v18; // r12
  __int64 *v19; // r11
  signed __int64 v20; // rax
  char v21; // r10
  char v22; // al
  char v23; // r9
  char v24; // al
  __int64 *v25; // rsi
  char v26; // bl
  char v27; // r14
  __int64 *v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rtt
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 (__fastcall **v35)(__int128 *); // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rbx
  volatile signed __int64 *v38; // rdx
  _BYTE *v39; // rbx
  char v40; // r14
  char v41; // r15
  char v42; // al
  int v43; // eax
  __int64 *v44; // rsi
  __int64 *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 *v48; // rax
  char v49; // al
  __int64 *v50; // rsi
  char v51; // al
  __int64 *v52; // rsi
  char v53; // bl
  char v54; // r14
  char v55; // al
  __int128 *v56; // rsi
  __int64 *v57; // r14
  __int64 *v58; // r15
  __int64 *v59; // r12
  __int64 *v60; // r15
  __int64 *v61; // r12
  char v62; // al
  __int128 *v63; // rsi
  __int64 *v64; // r14
  char v65; // al
  _BYTE *v68; // [rsp+48h] [rbp-38h]
  char v69; // [rsp+50h] [rbp-30h]
  char v70; // [rsp+5Ch] [rbp-24h]
  char v71; // [rsp+68h] [rbp-18h]
  volatile signed __int64 *Address; // [rsp+78h] [rbp-8h]
  char v73; // [rsp+80h] [rbp+0h]
  char v74; // [rsp+84h] [rbp+4h]

  v3 = *a1;
  v4 = a1[6];
  v5 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v6 = (_BYTE *)(v5 + 432);
  v7 = *(unsigned __int8 *)(v5 + 504);
  v68 = v6;
  if ( v7 == 1 )
    goto LABEL_5;
  if ( v7 != 2 )
  {
    sub_14148BBF0(v6, sub_1412F8D00);
    v6[72] = 1;
LABEL_5:
    v9 = v6[68];
    v8 = (unsigned __int8)v6[69];
    v10 = v6[69];
    if ( v9 == 1 )
    {
      if ( !(_BYTE)v8 )
      {
        sub_1412F7930(*a2, &off_1419583E0);
        goto LABEL_56;
      }
      v10 = v8 - 1;
    }
    v6[69] = v10;
    goto LABEL_9;
  }
  v8 = 0;
  v9 = 0;
LABEL_9:
  v73 = v9;
  v71 = v8;
  v11 = *((_BYTE *)a1 + 56);
  if ( v11 == 1 )
    v4 = a1[5];
  v12 = a1 + 1;
  v13 = 2 * v4;
  v14 = (volatile signed __int64 *)v3;
  v15 = *(_QWORD *)(v3 + 32);
  v16 = v4 & 0x7FFFFFFFFFFFFFFFLL;
  v17 = 2;
  v18 = 1;
  v19 = off_141EC90B8;
  while ( 1 )
  {
    if ( (v15 & 1) != 0 )
      goto LABEL_48;
    v8 = v15 - v13;
    if ( v15 >= v13 )
      break;
    if ( v17 == 2 )
    {
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)v14, 1, 0) )
      {
        sub_1416C15B0(v14);
        v12 = a1 + 1;
        v19 = off_141EC90B8;
      }
      if ( 2 * *v19 )
      {
        v22 = sub_1416C2250(v8, v12);
        v12 = a1 + 1;
        v19 = off_141EC90B8;
        v17 = v22 ^ 1;
      }
      else
      {
        v17 = 0;
      }
      v8 = (signed __int64)v14;
    }
    else
    {
      v8 = (signed __int64)v14;
    }
    v21 = 0;
    v14 = (volatile signed __int64 *)v8;
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 32), 0, v15);
    if ( v15 == v20 )
    {
      v16 = v15 >> 1;
      v23 = v17;
      goto LABEL_26;
    }
LABEL_13:
    v15 = v20;
  }
  v20 = _InterlockedCompareExchange64(v14 + 4, v8, v15);
  if ( v15 != v20 )
    goto LABEL_13;
  if ( !v11 )
  {
    v18 = 0;
LABEL_48:
    v39 = v68;
    v40 = v71;
    v41 = v73;
    goto LABEL_49;
  }
  v8 = (signed __int64)v14;
  if ( v17 == 2 )
  {
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)v14, 1, 0) )
    {
      v58 = v19;
      v59 = v12;
      sub_1416C15B0(v14);
      v12 = v59;
      v19 = v58;
    }
    if ( 2 * *v19 )
    {
      v60 = v19;
      v61 = v12;
      v62 = sub_1416C2250(v8, v12);
      v12 = v61;
      v19 = v60;
      v23 = v62 ^ 1;
    }
    else
    {
      v23 = 0;
    }
    v8 = (signed __int64)v14;
    v21 = 1;
    v17 = 2;
  }
  else
  {
    v21 = 0;
    v23 = v17;
  }
LABEL_26:
  Address = (volatile signed __int64 *)v8;
  if ( *(_BYTE *)(v8 + 24) )
  {
    if ( (v23 & 1) == 0 )
    {
      if ( 2 * *v19 )
      {
        v52 = v19;
        v53 = v17;
        v54 = v21;
        v55 = sub_1416C2250(v8, v12);
        v21 = v54;
        v17 = v53;
        v19 = v52;
        v8 = (signed __int64)Address;
        if ( !v55 )
          *((_BYTE *)Address + 1) = 1;
      }
    }
    v24 = *(_BYTE *)v8;
    *(_BYTE *)v8 = 0;
    v18 = 1;
    if ( v24 == 2 )
    {
      v25 = v19;
      v26 = v17;
      v27 = v21;
      WakeByAddressSingle((PVOID)v8);
      v21 = v27;
      v17 = v26;
      v19 = v25;
    }
LABEL_58:
    v14 = Address;
    v39 = v68;
    v40 = v71;
    v41 = v73;
    if ( !v21 )
    {
LABEL_59:
      LOBYTE(v43) = 1;
      if ( (v18 & 1) == 0 )
      {
        *((_BYTE *)a1 + 56) = 0;
        LOBYTE(v43) = 0;
      }
      return v43;
    }
LABEL_49:
    if ( v17 == 2 )
      goto LABEL_59;
    if ( (v17 & 1) == 0 && 2 * *v19 && !(unsigned __int8)sub_1416C2250(v8, v12) )
      *((_BYTE *)v14 + 1) = 1;
    v42 = *(_BYTE *)v14;
    *(_BYTE *)v14 = 0;
    if ( v42 != 2 )
      goto LABEL_59;
LABEL_53:
    WakeByAddressSingle((PVOID)v14);
    if ( v18 != 2 )
      goto LABEL_59;
    goto LABEL_81;
  }
  v28 = v12;
  v69 = v21;
  v74 = v17;
  v29 = a1[5];
  do
  {
    v30 = v29;
    v31 = v29;
    if ( v16 < v29 )
      v31 = v16;
    v32 = v29;
    v29 = _InterlockedCompareExchange64(a1 + 5, v29 - v31, v29);
  }
  while ( v32 != v29 );
  v70 = v23;
  if ( v30 <= v16 )
  {
    v44 = v19;
    sub_1412F2070((volatile void *)v8);
    v18 = 0;
    v19 = v44;
    v17 = v74;
    v21 = v69;
    goto LABEL_58;
  }
  v33 = *a2;
  v34 = a1[1];
  if ( !v34 )
  {
    v35 = *(__int64 (__fastcall ***)(__int128 *))v33;
    v36 = *(_QWORD *)(v33 + 8);
LABEL_64:
    v45 = v19;
    v46 = (*v35)((__int128 *)v36);
    v19 = v45;
    v37 = a1[1];
    v36 = a1[2];
    a1[1] = v46;
    a1[2] = v47;
    v23 = v70;
    v38 = Address;
    if ( !v11 )
      goto LABEL_65;
    goto LABEL_70;
  }
  v35 = *(__int64 (__fastcall ***)(__int128 *))v33;
  v36 = *(_QWORD *)(v33 + 8);
  if ( v36 ^ a1[2] | (unsigned __int64)v35 ^ v34 )
    goto LABEL_64;
  v37 = 0;
  v38 = Address;
  if ( v11 )
    goto LABEL_70;
LABEL_65:
  v48 = *((__int64 **)v38 + 1);
  if ( v48 == v28 )
  {
    LOBYTE(v36) = 1;
    sub_1416B7A4B((__int128 *)v36);
  }
  a1[4] = (__int64)v48;
  a1[3] = 0;
  if ( v48 )
    v48[2] = (__int64)v28;
  *((_QWORD *)v38 + 1) = v28;
  if ( !*((_QWORD *)v38 + 2) )
    *((_QWORD *)v38 + 2) = v28;
LABEL_70:
  if ( (v23 & 1) == 0 )
  {
    if ( 2 * *v19 )
    {
      v63 = (__int128 *)v36;
      v64 = v19;
      v65 = sub_1416C2250(v36, v38);
      v19 = v64;
      v36 = (unsigned __int64)v63;
      v38 = Address;
      if ( !v65 )
        *((_BYTE *)Address + 1) = 1;
    }
  }
  v49 = *(_BYTE *)v38;
  *(_BYTE *)v38 = 0;
  if ( v49 == 2 )
  {
    v56 = (__int128 *)v36;
    v57 = v19;
    WakeByAddressSingle((PVOID)Address);
    v19 = v57;
    v36 = (unsigned __int64)v56;
  }
  if ( v37 )
  {
    v50 = v19;
    (*(void (**)(void))(v37 + 24))();
    v19 = v50;
  }
  v14 = Address;
  v39 = v68;
  v40 = v71;
  v41 = v73;
  if ( v69 && v74 != 2 )
  {
    if ( (v74 & 1) == 0 && 2 * *v19 && !(unsigned __int8)sub_1416C2250(v36, v38) )
      *((_BYTE *)Address + 1) = 1;
    v51 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v51 == 2 )
    {
      v18 = 2;
      goto LABEL_53;
    }
  }
LABEL_81:
  *((_BYTE *)a1 + 56) = 1;
  LOBYTE(v43) = 2;
  if ( !v41 )
    return v43;
  v43 = (unsigned __int8)v39[72];
  if ( v43 != 1 )
  {
    if ( v43 == 2 )
      return v43;
    sub_14148BBF0(v39, sub_1412F8D00);
    v39[72] = 1;
    v40 = v71;
  }
  v39[68] = 1;
  v39[69] = v40;
LABEL_56:
  LOBYTE(v43) = 2;
  return v43;
}