// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d9a740 | name sub_140D9A740
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140D9A740(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // r15
  char *v4; // rdi
  __int64 *v5; // r12
  unsigned int v6; // ebx
  char v7; // al
  _BOOL8 v8; // rcx
  char v9; // al
  volatile signed __int64 *v10; // r14
  __int128 *v11; // rdi
  __int64 v12; // rcx
  char v13; // r13
  int v14; // r9d
  __int64 v15; // r8
  __m128i *v16; // rsi
  char *v17; // rsi
  char v18; // al
  __m128i v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+70h] [rbp-10h]
  __int128 v23; // [rsp+80h] [rbp+0h]
  __int128 v24; // [rsp+90h] [rbp+10h]
  __int64 v25; // [rsp+348h] [rbp+2C8h]
  __int64 v26; // [rsp+350h] [rbp+2D0h]
  _BYTE v27[1040]; // [rsp+450h] [rbp+3D0h] BYREF
  __m128i v28; // [rsp+860h] [rbp+7E0h] BYREF
  __int128 v29; // [rsp+870h] [rbp+7F0h]
  __int128 v30; // [rsp+880h] [rbp+800h]
  __int128 v31; // [rsp+890h] [rbp+810h]
  __int128 v32; // [rsp+8A0h] [rbp+820h]
  __int128 v33; // [rsp+8B0h] [rbp+830h]
  char v34; // [rsp+9CCh] [rbp+94Ch]
  char v35[8]; // [rsp+9E8h] [rbp+968h] BYREF
  __int64 v36; // [rsp+9F0h] [rbp+970h]
  __m128i *v37; // [rsp+9F8h] [rbp+978h]
  __int64 v38; // [rsp+A00h] [rbp+980h]
  __int64 v39; // [rsp+A08h] [rbp+988h]
  __int128 v40; // [rsp+A10h] [rbp+990h] BYREF
  __int64 v41; // [rsp+A20h] [rbp+9A0h]
  _BYTE *v42; // [rsp+A28h] [rbp+9A8h] BYREF
  __int64 (__fastcall *v43)(_QWORD, _QWORD); // [rsp+A30h] [rbp+9B0h]
  __int64 v44; // [rsp+A38h] [rbp+9B8h]
  __m128i v45; // [rsp+A40h] [rbp+9C0h] BYREF
  __int128 v46; // [rsp+A50h] [rbp+9D0h]
  __int128 v47; // [rsp+A60h] [rbp+9E0h]
  __int128 v48; // [rsp+A70h] [rbp+9F0h]
  __int128 v49; // [rsp+A80h] [rbp+A00h]
  __int128 v50; // [rsp+A90h] [rbp+A10h]
  __m128i *v51; // [rsp+AA0h] [rbp+A20h] BYREF
  __int64 v52; // [rsp+AA8h] [rbp+A28h]
  const char *v53; // [rsp+AB0h] [rbp+A30h]
  __int64 v54; // [rsp+AB8h] [rbp+A38h]
  char **v55; // [rsp+AC0h] [rbp+A40h]
  unsigned int v56; // [rsp+AC8h] [rbp+A48h]
  char v57; // [rsp+ACEh] [rbp+A4Eh] BYREF
  char v58; // [rsp+ACFh] [rbp+A4Fh] BYREF
  __int64 v59; // [rsp+AD0h] [rbp+A50h]

  v59 = -2;
  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v1 + 16) == -1 )
  {
    v2 = a1;
    v3 = *(_QWORD *)(a1 + 32);
    v4 = (char *)(v3 + 16);
    LOBYTE(a1) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v3 + 16), 1, 0) )
      sub_141937480((volatile void *)(v3 + 16));
    v5 = off_1421E7210;
    if ( 2 * *off_1421E7210 )
    {
      v6 = sub_141938160(a1);
      LOBYTE(v6) = v6 ^ 1;
    }
    else
    {
      v6 = 0;
    }
    v7 = *(_BYTE *)(v3 + 17);
    v8 = v7 != 0;
    v19.m128i_i64[1] = v3 + 16;
    LOBYTE(v20) = v6;
    v19.m128i_i64[0] = v8;
    if ( v7 )
    {
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v27[48] = 2;
        *(_QWORD *)&v27[56] = aCodexmateLibCo_36;
        *(_QWORD *)&v27[64] = 35;
        *(_QWORD *)&v27[80] = aAimamiRouterBo;
        *(_QWORD *)&v27[88] = 153;
        *(_QWORD *)v27 = 0;
        *(_QWORD *)&v27[8] = aCodexmateLibCo_36;
        *(_OWORD *)&v27[16] = 0x23u;
        *(_QWORD *)&v27[32] = aSrcCoreRelayMa_5;
        *(_QWORD *)&v27[40] = 25;
        *(_QWORD *)&v27[72] = 0x10C00000001LL;
        sub_1414D53A0(&v58, v27);
      }
      if ( !(_BYTE)v6 && 2 * *v5 && !(unsigned __int8)sub_141938160(v8) )
        *(_BYTE *)(v3 + 17) = 1;
      v9 = *v4;
      *v4 = 0;
      if ( v9 == 2 )
        WakeByAddressSingle((PVOID)(v3 + 16));
    }
    else
    {
      v56 = v6;
      v38 = v3 + 16;
      sub_140D83600((__int64)&v28, (volatile signed __int64 **)v2);
      if ( v28.m128i_i32[0] != -1 )
      {
        v24 = v33;
        v23 = v32;
        v22 = v31;
        v21 = v30;
        v20 = v29;
        v19 = v28;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v45.m128i_i64[0] = (__int64)&v19;
          v45.m128i_i64[1] = (__int64)sub_14104A7D0;
          *(_QWORD *)&v27[48] = 2;
          *(_QWORD *)&v27[56] = aCodexmateLibCo_36;
          *(_QWORD *)&v27[64] = 35;
          *(_QWORD *)&v27[80] = &unk_141A4A6D8;
          *(_QWORD *)&v27[88] = &v45;
          *(_QWORD *)v27 = 0;
          *(_QWORD *)&v27[8] = aCodexmateLibCo_36;
          *(_OWORD *)&v27[16] = 0x23u;
          *(_QWORD *)&v27[32] = aSrcCoreRelayMa_5;
          *(_QWORD *)&v27[40] = 25;
          *(_QWORD *)&v27[72] = 0xA8600000001LL;
          sub_1414D53A0(&v58, v27);
        }
        sub_140D1BEA0(&v19);
      }
      v10 = *(volatile signed __int64 **)v2;
      v11 = (__int128 *)(*(_QWORD *)v2 + 16LL);
      sub_140C751D0((__int64)&v28, (__int64)v11);
      if ( v28.m128i_i32[0] == -1 )
      {
        sub_140D9A5F0((__int64)v27, v2);
        sub_140D8B880((__int64)&v45, (__int64)v10, (__int64)v27);
        if ( v45.m128i_i32[0] == -1 )
        {
          sub_1407ADB20(v27);
          if ( (unsigned int)sub_141040BC0((__int64)aChatgpt, 7) != 1
            && (unsigned int)sub_141040BC0((__int64)aCodex_3, 5) != 1 )
          {
            sub_140D93020((_QWORD *)v2);
            sub_140028CC0(v38, v56);
            return;
          }
          sub_1410261E0(&v19, v11);
          if ( v19.m128i_i32[0] == -1 )
          {
            if ( v19.m128i_i8[8] )
            {
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                *(_QWORD *)v27 = aCodexmateLibCo_36;
                *(_QWORD *)&v27[8] = 35;
                *(_QWORD *)&v27[16] = aCodexmateLibCo_36;
                *(_QWORD *)&v27[24] = 35;
                *(_QWORD *)&v27[32] = &off_141A4BB60;
                sub_140BAD520(&unk_141A4BB10, 161, 2, v27);
              }
            }
            else
            {
              sub_140D9A5F0((__int64)&v28, v2);
              v13 = v34;
              v57 = v34 ^ 1;
              sub_140C1F580(v27, v11, 0);
              if ( *(_QWORD *)v27 == -1 )
              {
                v24 = *(_OWORD *)&v27[88];
                v23 = *(_OWORD *)&v27[72];
                v22 = *(_OWORD *)&v27[56];
                v21 = *(_OWORD *)&v27[40];
                v20 = *(_OWORD *)&v27[24];
                v19 = *(__m128i *)&v27[8];
                if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                {
                  v51 = &v19;
                  v52 = (__int64)sub_14104A7D0;
                  v45.m128i_i64[0] = (__int64)aCodexmateLibCo_36;
                  v45.m128i_i64[1] = 35;
                  *(_QWORD *)&v46 = aCodexmateLibCo_36;
                  *((_QWORD *)&v46 + 1) = 35;
                  *(_QWORD *)&v47 = &off_141A4BAF8;
                  sub_140BAD520(&unk_141A4B6A1, &v51, 2, &v45);
                }
                sub_140D1BEA0(&v19);
              }
              else
              {
                sub_1418F44E0(&v19, (const __m128i *)v27, 0x408u);
                LOBYTE(v14) = v13 == 0;
                sub_140D8FC20((unsigned int)v35, *(_QWORD *)(v2 + 24), (unsigned int)&v19, v14, 0);
                sub_140D8B020(v27, v2);
                if ( *(_QWORD *)v27 == -1 )
                {
                  sub_140D90410(&v40, v25, v26, (__int64)&v28);
                }
                else
                {
                  v41 = *(_QWORD *)&v27[16];
                  v40 = *(_OWORD *)v27;
                }
                v16 = v37;
                if ( (unsigned __int64)v37 | ~(_QWORD)v40 )
                {
                  v51 = v37;
                  LOBYTE(v42) = (_QWORD)v40 != -1;
                  *(_QWORD *)v27 = &v51;
                  *(_QWORD *)&v27[8] = sub_1416BCB10;
                  *(_QWORD *)&v27[16] = &v42;
                  *(_QWORD *)&v27[24] = sub_1416BCC50;
                  sub_1416ABFD0(&v45, &unk_141A4B9B0, v27);
                  v39 = v45.m128i_i64[1];
                  v44 = v45.m128i_i64[0];
                  sub_141027090((__int64)&v45, v11);
                  if ( v45.m128i_i32[0] != -1 )
                  {
                    *(_OWORD *)&v27[80] = v50;
                    *(_OWORD *)&v27[64] = v49;
                    *(_OWORD *)&v27[48] = v48;
                    *(_OWORD *)&v27[32] = v47;
                    *(_OWORD *)&v27[16] = v46;
                    *(__m128i *)v27 = v45;
                    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                    {
                      v42 = v27;
                      v43 = sub_14104A7D0;
                      v51 = (__m128i *)aCodexmateLibCo_36;
                      v52 = 35;
                      v53 = aCodexmateLibCo_36;
                      v54 = 35;
                      v55 = &off_141A4BA50;
                      sub_140BAD520(&unk_141A4BA01, &v42, 2, &v51);
                    }
                    sub_140D1BEA0(v27);
                  }
                  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                  {
                    sub_140DBD1A0(&v51, v36, v16);
                    *(_QWORD *)v27 = &v57;
                    *(_QWORD *)&v27[8] = sub_140DC91E0;
                    *(_QWORD *)&v27[16] = &v51;
                    *(_QWORD *)&v27[24] = sub_1400015F0;
                    *(_QWORD *)&v27[32] = &v40;
                    *(_QWORD *)&v27[40] = sub_140DD7AB0;
                    v45.m128i_i64[0] = (__int64)aCodexmateLibCo_36;
                    v45.m128i_i64[1] = 35;
                    *(_QWORD *)&v46 = aCodexmateLibCo_36;
                    *((_QWORD *)&v46 + 1) = 35;
                    *(_QWORD *)&v47 = &off_141A4BAE0;
                    sub_140BAD520(&unk_141A4BA68, v27, 2, &v45);
                    if ( v51 )
                      sub_140001660(v52, v51, 1);
                  }
                  if ( v44 )
                    sub_140001660(v39, v44, 1);
                }
                else
                {
                  LOBYTE(v15) = 2;
                  sub_141022500(&v45, v11, v15);
                  if ( v45.m128i_i32[0] != -1 )
                  {
                    *(_OWORD *)&v27[80] = v50;
                    *(_OWORD *)&v27[64] = v49;
                    *(_OWORD *)&v27[48] = v48;
                    *(_OWORD *)&v27[32] = v47;
                    *(_OWORD *)&v27[16] = v46;
                    *(__m128i *)v27 = v45;
                    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                    {
                      v42 = v27;
                      v43 = sub_14104A7D0;
                      v51 = (__m128i *)aCodexmateLibCo_36;
                      v52 = 35;
                      v53 = aCodexmateLibCo_36;
                      v54 = 35;
                      v55 = &off_141A4B998;
                      sub_140BAD520(&unk_141A4B53B, &v42, 2, &v51);
                    }
                    sub_140D1BEA0(v27);
                  }
                }
                if ( (_QWORD)v40 != -1 && (_QWORD)v40 )
                  sub_140001660(*((_QWORD *)&v40 + 1), v40, 1);
                sub_140025860(v35);
                sub_140BAD280(&v19);
              }
              sub_1407ADB20(&v28);
            }
          }
          else
          {
            *(_OWORD *)&v27[80] = v24;
            *(_OWORD *)&v27[64] = v23;
            *(_OWORD *)&v27[48] = v22;
            *(_OWORD *)&v27[32] = v21;
            *(_OWORD *)&v27[16] = v20;
            *(__m128i *)v27 = v19;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v45.m128i_i64[0] = (__int64)v27;
              v45.m128i_i64[1] = (__int64)sub_14104A7D0;
              v28.m128i_i64[0] = (__int64)aCodexmateLibCo_36;
              v28.m128i_i64[1] = 35;
              *(_QWORD *)&v29 = aCodexmateLibCo_36;
              *((_QWORD *)&v29 + 1) = 35;
              *(_QWORD *)&v30 = &off_141A4BBB8;
              sub_140BAD520(&unk_141A4BB78, &v45, 2, &v28);
            }
            sub_140D1BEA0(v27);
          }
        }
        else
        {
          v33 = v50;
          v32 = v49;
          v31 = v48;
          v30 = v47;
          v29 = v46;
          v28 = v45;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v51 = &v28;
            v52 = (__int64)sub_14104A7D0;
            *(_QWORD *)&v22 = 2;
            *((_QWORD *)&v22 + 1) = aCodexmateLibCo_36;
            *(_QWORD *)&v23 = 35;
            *(_QWORD *)&v24 = &unk_141A4B95D;
            *((_QWORD *)&v24 + 1) = &v51;
            v19.m128i_i64[0] = 0;
            v19.m128i_i64[1] = (__int64)aCodexmateLibCo_36;
            v20 = 0x23u;
            *(_QWORD *)&v21 = aSrcCoreRelayMa_5;
            *((_QWORD *)&v21 + 1) = 25;
            *((_QWORD *)&v23 + 1) = 0x11800000001LL;
            sub_1414D53A0(&v58, &v19);
          }
          sub_140D1BEA0(&v28);
          sub_1407ADB20(v27);
        }
      }
      else
      {
        v24 = v33;
        v23 = v32;
        v22 = v31;
        v21 = v30;
        v20 = v29;
        v19 = v28;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v45.m128i_i64[0] = (__int64)&v19;
          v45.m128i_i64[1] = (__int64)sub_14104A7D0;
          *(_QWORD *)&v27[48] = 2;
          *(_QWORD *)&v27[56] = aCodexmateLibCo_36;
          *(_QWORD *)&v27[64] = 35;
          *(_QWORD *)&v27[80] = &unk_141A4B924;
          *(_QWORD *)&v27[88] = &v45;
          *(_QWORD *)v27 = 0;
          *(_QWORD *)&v27[8] = aCodexmateLibCo_36;
          *(_OWORD *)&v27[16] = 0x23u;
          *(_QWORD *)&v27[32] = aSrcCoreRelayMa_5;
          *(_QWORD *)&v27[40] = 25;
          *(_QWORD *)&v27[72] = 0x11400000001LL;
          sub_1414D53A0(&v58, v27);
        }
        sub_140D1BEA0(&v19);
      }
      v17 = (char *)(v3 + 16);
      if ( !(_BYTE)v56 && 2 * *v5 && !(unsigned __int8)sub_141938160(v12) )
        *(_BYTE *)(v3 + 17) = 1;
      v18 = *v17;
      *v17 = 0;
      if ( v18 == 2 )
        WakeByAddressSingle((PVOID)(v3 + 16));
    }
  }
  else
  {
    sub_1416AC440(&v28.m128i_u64[1], v1 + 16);
    v28.m128i_i64[0] = 9;
    v24 = v33;
    v23 = v32;
    v22 = v31;
    v21 = v30;
    v20 = v29;
    v19 = (__m128i)__PAIR128__(v28.m128i_u64[1], 9);
    if ( *(_QWORD *)off_1421E6EC0 )
    {
      v45.m128i_i64[0] = (__int64)&v19;
      v45.m128i_i64[1] = (__int64)sub_14104A7D0;
      *(_QWORD *)&v27[48] = 1;
      *(_QWORD *)&v27[56] = aCodexmateLibCo_36;
      *(_QWORD *)&v27[64] = 35;
      *(_QWORD *)&v27[80] = &unk_141A4B8F8;
      *(_QWORD *)&v27[88] = &v45;
      *(_QWORD *)v27 = 0;
      *(_QWORD *)&v27[8] = aCodexmateLibCo_36;
      *(_OWORD *)&v27[16] = 0x23u;
      *(_QWORD *)&v27[32] = aSrcCoreRelayMa_5;
      *(_QWORD *)&v27[40] = 25;
      *(_QWORD *)&v27[72] = 0x10600000001LL;
      sub_1414D53A0(&v58, v27);
    }
    sub_140D1BEA0(&v19);
  }
}
