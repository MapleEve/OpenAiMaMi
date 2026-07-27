// module: codexmate_lib/commands/autostart
// addr: 0x140388d60
// name: sub_140388D60
// win 1.2.1 | module src/commands/autostart.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140388D60(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  unsigned __int128 v14; // xmm0
  _OWORD *v15; // rax
  unsigned __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+40h] [rbp-40h]
  __int64 v18; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]
  unsigned __int128 v21; // [rsp+70h] [rbp-10h] BYREF
  __int128 v22; // [rsp+80h] [rbp+0h]
  unsigned __int128 v23; // [rsp+90h] [rbp+10h]
  unsigned __int128 v24; // [rsp+110h] [rbp+90h] BYREF
  __int128 v25; // [rsp+120h] [rbp+A0h]
  unsigned __int128 v26; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v27; // [rsp+140h] [rbp+C0h]
  unsigned __int128 v28; // [rsp+150h] [rbp+D0h]
  __int128 v29; // [rsp+160h] [rbp+E0h]
  __int64 v30; // [rsp+170h] [rbp+F0h]
  __int64 v31; // [rsp+178h] [rbp+F8h]
  __int64 v32; // [rsp+180h] [rbp+100h]
  char v33; // [rsp+18Eh] [rbp+10Eh]
  char v34; // [rsp+18Fh] [rbp+10Fh]
  __int64 v35; // [rsp+190h] [rbp+110h]

  v35 = -2;
  sub_14148D130(&v21, *(_QWORD *)(a2 + 584), *(_QWORD *)(a2 + 592));
  if ( (_QWORD)v21 == -1 )
  {
    *(_WORD *)(a1 + 144) = 512;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 1;
    *(_OWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 64) = -1;
    *(_QWORD *)(a1 + 88) = -1;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 112) = -1;
    *(_BYTE *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 48) = 8;
    *(_QWORD *)(a1 + 56) = 0;
    sub_140018650((char *)&v21 + 8);
    return;
  }
  v31 = v21;
  v21 = __PAIR128__(v22, *((unsigned __int64 *)&v21 + 1));
  v22 = 0;
  v30 = v21;
  v23 = v21;
  sub_1408A6200(&v26, &v21);
  if ( (_BYTE)v26 != 0xFF )
  {
    v17 = v27;
    v16 = v26;
    v34 = 1;
    if ( !sub_141433D50("mysteryUnlockGrantsautostartWhenRouterOn", 19, &v16) )
    {
      v34 = 1;
      v7 = sub_141433D50(aMysteryunlocke, 21, &v16);
      if ( v7 )
      {
        switch ( *(_BYTE *)v7 )
        {
          case 0:
            LOBYTE(v21) = 0;
            break;
          case 1:
          case 2:
            v8 = *(_OWORD *)v7;
            v22 = *(_OWORD *)(v7 + 16);
            v21 = v8;
            break;
          case 3:
            v34 = 1;
            sub_14149C500((char *)&v21 + 8, v7 + 8);
            LOBYTE(v21) = 3;
            break;
          case 4:
            v9 = *(_QWORD *)(v7 + 16);
            v10 = *(_QWORD *)(v7 + 24);
            v34 = 1;
            sub_1402CE260((char *)&v21 + 8, v9, v10);
            LOBYTE(v21) = 4;
            break;
          case 5:
            v34 = 1;
            sub_140323EA0((_QWORD *)&v21 + 1, (_QWORD *)(v7 + 8));
            LOBYTE(v21) = 5;
            break;
        }
        v25 = v22;
        v24 = v21;
        if ( (unsigned __int8)v21 != 255 )
        {
          if ( (unsigned __int8)v21 == 4 )
          {
            *(_QWORD *)&v21 = v25;
            *((_QWORD *)&v21 + 1) = v25;
            *(_QWORD *)&v22 = *((_QWORD *)&v24 + 1);
            *((_QWORD *)&v22 + 1) = v25 + 32LL * *((_QWORD *)&v25 + 1);
            v34 = 1;
            sub_140317ED0(&v18, &v21);
            sub_140468140(&v26, &v18);
            v11 = v20;
            if ( v20 )
            {
              v12 = (_QWORD *)(v19 + 24);
              do
              {
                v13 = *(v12 - 1);
                if ( v13 )
                  sub_140001660(*v12, v13, 1);
                v12 += 5;
                --v11;
              }
              while ( v11 );
            }
            if ( v18 )
              sub_140001660(v19, 40 * v18, 8);
            *((_QWORD *)&v21 + 1) = 0;
            v22 = 8u;
            LOBYTE(v21) = 4;
            if ( (_BYTE)v26 == 0xFF )
            {
              v29 = v22;
              v28 = v21;
              v34 = 1;
              sub_140348CF0(&v26);
            }
            else
            {
              v29 = v27;
              v28 = v26;
              v34 = 1;
              sub_1400104F0(&v21);
            }
            v33 = 1;
            v32 = sub_141433E50("mysteryUnlockGrantsautostartWhenRouterOn", 19, &v16);
            sub_1400104F0(v32);
            v14 = v28;
            v15 = (_OWORD *)v32;
            *(_OWORD *)(v32 + 16) = v29;
            *v15 = v14;
          }
          else
          {
            v34 = 1;
            sub_1400104F0(&v24);
          }
        }
      }
    }
    v27 = v17;
    v26 = v16;
    v34 = 0;
    sub_140B85740(
      &v21,
      &v26,
      "CodexMateSettingshotspotusageRefreshIntervaldeviceIdremoteDeviceSecretnotificationsSinceapiProxymysteryUnlockGrant"
      "sautostartWhenRouterOn",
      17,
      &off_14174B660,
      8);
    if ( (_DWORD)v21 == 2 )
    {
      *(_WORD *)(a1 + 144) = 512;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 1;
      *(_OWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 64) = -1;
      *(_QWORD *)(a1 + 88) = -1;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 112) = -1;
      *(_BYTE *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 48) = 8;
      *(_QWORD *)(a1 + 56) = 0;
      v3 = **((_QWORD **)&v21 + 1);
      v4 = **((_QWORD **)&v21 + 1) == 1;
      v32 = *((_QWORD *)&v21 + 1);
      if ( v4 )
      {
        sub_140018650(*((_QWORD *)&v21 + 1) + 8LL);
      }
      else if ( !v3 )
      {
        v5 = *(_QWORD *)(v32 + 16);
        if ( v5 )
          sub_140001660(*(_QWORD *)(v32 + 8), v5, 1);
      }
      sub_140001660(v32, 40, 8);
      v6 = v31;
      if ( !v31 )
        return;
    }
    else
    {
      sub_141684120(a1, &v21, 152);
      v6 = v31;
      if ( !v31 )
        return;
    }
    sub_140001660(v30, v6, 1);
    return;
  }
  *(_WORD *)(a1 + 144) = 512;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 1;
  *(_OWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = -1;
  *(_QWORD *)(a1 + 88) = -1;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 112) = -1;
  *(_BYTE *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 56) = 0;
  sub_140348CF0(&v26);
  if ( v31 )
    sub_140001660(v30, v31, 1);
}