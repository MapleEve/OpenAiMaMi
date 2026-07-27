// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140cf0110
// name: sub_140CF0110
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140CF0110(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int128 *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  char v15; // bl
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int128 *v18; // rcx
  volatile signed __int64 **v19; // rcx
  _QWORD v21[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h]
  const char *v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+68h] [rbp-18h]
  __int64 v26; // [rsp+70h] [rbp-10h]
  const char *v27; // [rsp+78h] [rbp-8h]
  __int64 v28; // [rsp+80h] [rbp+0h]
  __int64 v29; // [rsp+88h] [rbp+8h]
  void *v30; // [rsp+90h] [rbp+10h]
  _QWORD *v31; // [rsp+98h] [rbp+18h]
  __int64 v32; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+30h]
  __int64 v34; // [rsp+B8h] [rbp+38h]
  char v35; // [rsp+C7h] [rbp+47h] BYREF
  __int128 *v36; // [rsp+C8h] [rbp+48h]
  __int64 v37; // [rsp+D0h] [rbp+50h]

  v37 = -2;
  v5 = *((unsigned __int8 *)a1 + 82);
  v36 = a1;
  switch ( v5 )
  {
    case 0LL:
      v6 = a2;
      v24 = *((const char **)a1 + 4);
      v7 = *a1;
      v23 = a1[1];
      v22 = v7;
      *((_BYTE *)a1 + 83) = 0;
      v8 = *((_QWORD *)a1 + 7);
      v25 = *((_QWORD *)a1 + 5);
      v26 = v8;
      LOBYTE(v28) = 0;
      LOBYTE(v29) = 2;
      v9 = sub_140B98C40(&v22);
      v11 = v10;
      v12 = v36;
      *((_QWORD *)v36 + 8) = v9;
      *((_QWORD *)v12 + 9) = v11;
      a2 = v6;
      break;
    case 1LL:
      sub_1416C3400(&off_1417BA208, a2, a1, a4);
    case 2LL:
      sub_1416C3420(&off_1417BA208, a2, a1, a4);
    case 3LL:
      v9 = *((_QWORD *)a1 + 8);
      v11 = *((_QWORD *)a1 + 9);
      break;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(v11 + 24))(v9, a2);
  v15 = 3;
  if ( v14 != 1 )
  {
    v16 = v13;
    v33 = *((_QWORD *)v36 + 8);
    v34 = *((_QWORD *)v36 + 9);
    if ( *(_QWORD *)v34 )
      (*(void (__fastcall **)(__int64))v34)(v33);
    v17 = *(_QWORD *)(v34 + 8);
    if ( v17 )
      sub_140001660(v33, v17, *(_QWORD *)(v34 + 16));
    v18 = v36;
    *(_BYTE *)(*((_QWORD *)v36 + 6) + 16LL) = 0;
    if ( v16 )
    {
      v32 = v16;
      if ( *(_QWORD *)off_141EC8D80 )
      {
        v21[0] = v36 + 5;
        v21[1] = sub_1414AAE30;
        v21[2] = &v32;
        v21[3] = sub_141490720;
        *(_QWORD *)&v22 = 0;
        *((_QWORD *)&v22 + 1) = aCodexmateLibCo_9;
        v23 = 0x28u;
        v24 = aSrcCoreRelayPr_1;
        v25 = 30;
        v26 = 1;
        v27 = aCodexmateLibCo_9;
        v28 = 40;
        v29 = 0x14500000001LL;
        v30 = &unk_1417BA220;
        v31 = v21;
        sub_1412C36A0(&v35, &v22);
        v16 = v32;
      }
      sub_1401DD260(v16);
      v18 = v36;
    }
    v19 = (volatile signed __int64 **)(v18 + 3);
    v15 = 1;
    if ( !_InterlockedDecrement64(*v19) )
      sub_140573D40(v19);
  }
  *((_BYTE *)v36 + 82) = v15;
  LOBYTE(v14) = v14 & 1;
  return (unsigned int)v14;
}