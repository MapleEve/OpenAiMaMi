// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140da5020 | name sub_140DA5020
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140DA5020(__int64 a1, char a2)
{
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // ecx
  signed __int64 v6; // rcx
  __int64 v7; // rdx
  signed __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rtt
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 *v13; // r14
  char v14; // di
  __int64 v15; // rcx
  __int128 v16; // [rsp+28h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  const char *v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  const char *v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]
  __int64 v25; // [rsp+78h] [rbp-8h]
  const char *v26; // [rsp+80h] [rbp+0h]
  __int64 v27; // [rsp+88h] [rbp+8h]
  __int64 v28; // [rsp+90h] [rbp+10h]
  void *v29; // [rsp+98h] [rbp+18h]
  __int64 v30; // [rsp+A0h] [rbp+20h]
  __int64 v31; // [rsp+A8h] [rbp+28h]
  __int128 v32; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+40h]
  _QWORD v34[2]; // [rsp+D0h] [rbp+50h] BYREF
  char v35; // [rsp+E6h] [rbp+66h] BYREF
  char v36; // [rsp+E7h] [rbp+67h]
  __int64 v37; // [rsp+E8h] [rbp+68h]

  v37 = -2;
  if ( !a2 )
  {
    sub_141406CE0(&v19);
    v3 = ((int)v19 >> 13) - 1;
    v4 = 0;
    if ( (int)v19 >> 13 <= 0 )
    {
      v5 = (1 - ((int)v19 >> 13)) / 0x190u + 1;
      v3 += 400 * v5;
      v4 = -146097 * v5;
    }
    v6 = 1000
       * (HIDWORD(v19)
        + 86400LL
        * (int)(((v3 / 100) >> 2) + ((1461 * v3) >> 2) + v4 + (((unsigned int)v19 >> 4) & 0x1FF) - v3 / 100 - 719163))
       + (unsigned int)v20 / 0xF4240uLL;
    v7 = *(_QWORD *)(a1 + 40);
    v8 = *(_QWORD *)(v7 + 16);
    v9 = v6 - v8;
    if ( __OFSUB__(v6, v8) )
      v9 = (v6 - v8 >= 0) + 0x7FFFFFFFFFFFFFFFLL;
    if ( v9 >= 15000 )
    {
      v10 = *(_QWORD *)(v7 + 16);
      if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v6, v8) )
      {
        sub_141011400(&v16, 300, 0, 0);
        if ( (_QWORD)v16 == -1 )
        {
          v34[0] = *((_QWORD *)&v16 + 1);
          v11 = *(_QWORD *)(a1 + 24);
          v12 = 0x3FFFFFFF;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 16), 0x3FFFFFFF, 0) )
          {
            v36 = 1;
            sub_141937710(v11 + 16);
          }
          v13 = off_1421E7210;
          if ( 2 * *off_1421E7210 )
          {
            v36 = 1;
            v14 = sub_141938160(v12) ^ 1;
          }
          else
          {
            v14 = 0;
          }
          *(_QWORD *)&v32 = v11 + 16;
          BYTE8(v32) = v14;
          v31 = v34[0];
          v18 = v11 + 32;
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v11 + 32)) )
            sub_141242F50(v11 + 32);
          v15 = v11 + 32;
          *(_QWORD *)(v11 + 32) = v31;
          if ( *(_QWORD *)off_1421E6EC0 >= 3u )
          {
            v25 = 3;
            v26 = aCodexmateLibCo_8;
            v27 = 40;
            v29 = &unk_141A4D2B8;
            v30 = 183;
            v19 = 0;
            v20 = aCodexmateLibCo_8;
            v21 = 40;
            v22 = 0;
            v23 = aSrcCoreRelayPr_0;
            v24 = 30;
            v28 = 0xE200000001LL;
            sub_1414D53A0(&v35, &v19);
          }
          if ( !v14 )
          {
            if ( 2 * *v13 )
            {
              v36 = 0;
              if ( !(unsigned __int8)sub_141938160(v15) )
                *(_BYTE *)(v11 + 24) = 1;
            }
          }
          if ( (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 16), 0xC0000001) - 0x3FFFFFFF) >= 0x40000000 )
          {
            v36 = 0;
            sub_141937840(v11 + 16);
          }
        }
        else
        {
          v33 = v17;
          v32 = v16;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v34[0] = &v32;
            v34[1] = sub_1400015F0;
            v25 = 2;
            v26 = aCodexmateLibCo_8;
            v27 = 40;
            v29 = &unk_141A4D313;
            v30 = (__int64)v34;
            v19 = 0;
            v20 = aCodexmateLibCo_8;
            v21 = 40;
            v22 = 0;
            v23 = aSrcCoreRelayPr_0;
            v24 = 30;
            v28 = 0xE700000001LL;
            sub_1414D53A0(&v35, &v19);
          }
          if ( (_QWORD)v32 )
            sub_140001660(*((_QWORD *)&v32 + 1), v32, 1);
        }
      }
    }
  }
}
