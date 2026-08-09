// win 1.2.3 delta | autostart_module_anchor @ 0x1404885c0 | changelog autostart
// [FULL hexrays 6714B]
// win 1.2.1 | module src/commands/autostart.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_1404885C0(__int64 a1)
{
  __int64 v1; // rsi
  char *v2; // rax
  __int64 v3; // rdx
  char *v4; // rbx
  __int64 *v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  char v8; // al
  char v9; // bl
  PVOID v10; // rcx
  char v11; // al
  __int64 v12; // rax
  char *v13; // rax
  char *v14; // rsi
  int v15; // eax
  _BYTE *v16; // rsi
  char v17; // al
  __int128 v18; // [rsp+20h] [rbp-60h] BYREF
  __int128 v19; // [rsp+30h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+70h] [rbp-10h]
  __int128 *v24; // [rsp+80h] [rbp+0h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+88h] [rbp+8h]
  __int128 v26; // [rsp+90h] [rbp+10h] BYREF
  __int128 v27; // [rsp+A0h] [rbp+20h]
  __int128 v28; // [rsp+B0h] [rbp+30h]
  __int128 v29; // [rsp+C0h] [rbp+40h]
  __int128 v30; // [rsp+D0h] [rbp+50h]
  __int128 v31; // [rsp+E0h] [rbp+60h]
  char v32; // [rsp+121h] [rbp+A1h]
  __int128 v33; // [rsp+128h] [rbp+A8h] BYREF
  const char *v34; // [rsp+138h] [rbp+B8h]
  __int64 v35; // [rsp+140h] [rbp+C0h]
  char **v36; // [rsp+148h] [rbp+C8h]
  PVOID Address; // [rsp+150h] [rbp+D0h]
  int v38; // [rsp+158h] [rbp+D8h]
  char v39; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v40; // [rsp+160h] [rbp+E0h]

  v40 = -2;
  v1 = *(_QWORD *)(a1 + 136);
  v2 = (char *)sub_140003640((volatile void *)(*(_QWORD *)(v1 + 5016) + 16LL));
  if ( !v2 )
  {
LABEL_31:
    *(_QWORD *)&v18 = aStdSyncPoisonM;
    *((_QWORD *)&v18 + 1) = 76;
    goto LABEL_32;
  }
  v4 = v2;
  if ( _InterlockedCompareExchange8(v2, 1, 0) )
    sub_1416C15B0(v2);
  v5 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v6 = ((__int64 (*)(void))sub_1416C2250)();
    LOBYTE(v6) = v6 ^ 1;
    if ( v4[1] )
      goto LABEL_6;
  }
  else
  {
    v6 = 0;
    if ( v4[1] )
    {
LABEL_6:
      *(_QWORD *)&v33 = v4;
      BYTE8(v33) = v6;
      v7 = *(_QWORD *)off_141EC8D80;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)&v18 = &v33;
        *((_QWORD *)&v18 + 1) = sub_14041C7D0;
        *(_QWORD *)&v26 = 0;
        *((_QWORD *)&v26 + 1) = aCodexmateLibCo_19;
        v27 = 0x22u;
        *(_QWORD *)&v28 = aSrcCommandsAut;
        *((_QWORD *)&v28 + 1) = 25;
        *(_QWORD *)&v29 = 2;
        *((_QWORD *)&v29 + 1) = aCodexmateLibCo_19;
        *(_QWORD *)&v30 = 34;
        *((_QWORD *)&v30 + 1) = 0x2800000001LL;
        *(_QWORD *)&v31 = &unk_14175961D;
        *((_QWORD *)&v31 + 1) = &v18;
        sub_1412C36A0(&v39, &v26);
        v4 = (char *)v33;
        LOBYTE(v6) = BYTE8(v33);
      }
      if ( !(_BYTE)v6 && 2 * *v5 && !(unsigned __int8)sub_1416C2250(v7, v3) )
        v4[1] = 1;
      v8 = *v4;
      *v4 = 0;
      if ( v8 == 2 )
        WakeByAddressSingle(v4);
      return;
    }
  }
  v38 = v6;
  Address = v4;
  sub_140388D60(&v26, v4 + 8);
  v9 = v32;
  sub_14034E2C0(&v26);
  if ( !(_BYTE)v38 && 2 * *v5 && !(unsigned __int8)((__int64 (*)(void))sub_1416C2250)() )
    *((_BYTE *)Address + 1) = 1;
  v10 = Address;
  v11 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v11 == 2 )
  {
    WakeByAddressSingle(v10);
    if ( v9 != 2 )
      return;
  }
  else if ( v9 != 2 )
  {
    return;
  }
  v12 = sub_140003F80((volatile void *)(*(_QWORD *)(v1 + 5016) + 16LL));
  if ( !v12 )
  {
    *(_QWORD *)&v18 = aTauriPluginAut;
    *((_QWORD *)&v18 + 1) = 41;
LABEL_32:
    *(_QWORD *)&v26 = &v18;
    *((_QWORD *)&v26 + 1) = sub_14041F680;
    sub_1416C32C0(&unk_1416C99C2, &v26, &off_1416C9A50);
  }
  sub_14120F150(&v33, v12);
  if ( (_QWORD)v33 == -2 )
  {
    v13 = (char *)sub_140003640((volatile void *)(*(_QWORD *)(v1 + 5016) + 16LL));
    if ( v13 )
    {
      v14 = v13;
      if ( _InterlockedCompareExchange8(v13, 1, 0) )
      {
        sub_1416C15B0(v13);
        if ( !(2 * *v5) )
        {
LABEL_22:
          v15 = 0;
          if ( v14[1] )
            goto LABEL_23;
          goto LABEL_42;
        }
      }
      else if ( !(2 * *v5) )
      {
        goto LABEL_22;
      }
      v15 = ((__int64 (*)(void))sub_1416C2250)();
      LOBYTE(v15) = v15 ^ 1;
      if ( v14[1] )
      {
LABEL_23:
        if ( (_BYTE)v15 )
          goto LABEL_48;
        goto LABEL_47;
      }
LABEL_42:
      v38 = v15;
      Address = v14;
      v16 = v14 + 8;
      sub_140388D60(&v26, v16);
      v32 = 1;
      sub_140389510(&v18, v16, &v26);
      sub_14034E2C0(&v26);
      if ( (_DWORD)v18 != -1 )
      {
        v31 = v23;
        v30 = v22;
        v29 = v21;
        v28 = v20;
        v27 = v19;
        v26 = v18;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v24 = &v26;
          v25 = sub_140B036A0;
          *(_QWORD *)&v33 = aCodexmateLibCo_19;
          *((_QWORD *)&v33 + 1) = 34;
          v34 = aCodexmateLibCo_19;
          v35 = 34;
          v36 = &off_1417595C8;
          sub_140985BA0(&unk_14175958E, &v24, 2, &v33);
        }
        sub_14043E650(&v26);
      }
      v14 = (char *)Address;
      if ( (_BYTE)v38 )
      {
LABEL_48:
        v17 = *v14;
        *v14 = 0;
        if ( v17 == 2 )
        {
          WakeByAddressSingle(v14);
          if ( *(_QWORD *)off_141EC8D80 < 3u )
            return;
        }
        else if ( *(_QWORD *)off_141EC8D80 < 3u )
        {
          return;
        }
        *(_QWORD *)&v26 = 0;
        *((_QWORD *)&v26 + 1) = aCodexmateLibCo_19;
        v27 = 0x22u;
        *(_QWORD *)&v28 = aSrcCommandsAut;
        *((_QWORD *)&v28 + 1) = 25;
        *(_QWORD *)&v29 = 3;
        *((_QWORD *)&v29 + 1) = aCodexmateLibCo_19;
        *(_QWORD *)&v30 = 34;
        *((_QWORD *)&v30 + 1) = 0x3800000001LL;
        *(_QWORD *)&v31 = &unk_1417595E0;
        *((_QWORD *)&v31 + 1) = 123;
        sub_1412C36A0(&v39, &v26);
        return;
      }
LABEL_47:
      if ( 2 * *v5 && !(unsigned __int8)((__int64 (*)(void))sub_1416C2250)() )
        v14[1] = 1;
      goto LABEL_48;
    }
    goto LABEL_31;
  }
  *(_QWORD *)&v19 = v34;
  v18 = v33;
  if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
    v24 = &v18;
    v25 = sub_14120F3B0;
    *(_QWORD *)&v26 = 0;
    *((_QWORD *)&v26 + 1) = aCodexmateLibCo_19;
    v27 = 0x22u;
    *(_QWORD *)&v28 = aSrcCommandsAut;
    *((_QWORD *)&v28 + 1) = 25;
    *(_QWORD *)&v29 = 2;
    *((_QWORD *)&v29 + 1) = aCodexmateLibCo_19;
    *(_QWORD *)&v30 = 34;
    *((_QWORD *)&v30 + 1) = 0x3000000001LL;
    *(_QWORD *)&v31 = &unk_141759524;
    *((_QWORD *)&v31 + 1) = &v24;
    sub_1412C36A0(&v39, &v26);
  }
  if ( (_QWORD)v18 == -1 )
  {
    sub_140018650((char *)&v18 + 8);
  }
  else if ( (_QWORD)v18 )
  {
    sub_140001660(*((_QWORD *)&v18 + 1), v18, 1);
  }
}
