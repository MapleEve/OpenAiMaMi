// module: codexmate_lib/core/repository
// addr: 0x1409da470
// name: sub_1409DA470
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409DA470(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE v11[8]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  unsigned __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]
  __int64 v18; // [rsp+60h] [rbp+0h]

  v18 = -2;
  v3 = sub_14033BC10(a1, a2);
  sub_14149A6B0(&v14, v3, v4);
  v5 = v16;
  if ( v16 )
  {
    switch ( v16 )
    {
      case 3uLL:
        if ( !(*(_WORD *)v15 ^ 0x7270 | *(unsigned __int8 *)(v15 + 2) ^ 0x6F) )
          goto LABEL_61;
        if ( *(_WORD *)v15 ^ 0x6465 | *(unsigned __int8 *)(v15 + 2) ^ 0x75 )
          goto LABEL_51;
        LOBYTE(v2) = 7;
        break;
      case 4uLL:
        switch ( *(_DWORD *)v15 )
        {
          case 0x65657266:
            v2 = 0;
            break;
          case 0x73756C70:
            LOBYTE(v2) = 1;
            break;
          case 0x6D616574:
LABEL_63:
            LOBYTE(v2) = 4;
            break;
          default:
            goto LABEL_50;
        }
        break;
      case 6uLL:
        LOBYTE(v2) = 2;
        if ( !(*(_DWORD *)v15 ^ 0x705F7835 | *(unsigned __int16 *)(v15 + 4) ^ 0x6F72)
          || !(*(_DWORD *)v15 ^ 0x5F6F7270 | *(unsigned __int16 *)(v15 + 4) ^ 0x7835)
          || !(*(_DWORD *)v15 ^ 0x70207835 | *(unsigned __int16 *)(v15 + 4) ^ 0x6F72)
          || !(*(_DWORD *)v15 ^ 0x206F7270 | *(unsigned __int16 *)(v15 + 4) ^ 0x7835) )
        {
          break;
        }
        goto LABEL_50;
      case 7uLL:
        LOBYTE(v2) = 2;
        if ( !(*(_DWORD *)v15 ^ 0x6C6F7270 | *(_DWORD *)(v15 + 3) ^ 0x6574696C) )
          break;
        if ( !(*(_DWORD *)v15 ^ 0x5F783032 | *(_DWORD *)(v15 + 3) ^ 0x6F72705F)
          || !(*(_DWORD *)v15 ^ 0x5F6F7270 | *(_DWORD *)(v15 + 3) ^ 0x7830325F)
          || !(*(_DWORD *)v15 ^ 0x20783032 | *(_DWORD *)(v15 + 3) ^ 0x6F727020)
          || !(*(_DWORD *)v15 ^ 0x206F7270 | *(_DWORD *)(v15 + 3) ^ 0x78303220) )
        {
          goto LABEL_61;
        }
        if ( !(*(_DWORD *)v15 ^ 0x5F303031 | *(_DWORD *)(v15 + 3) ^ 0x6F72705F)
          || !(*(_DWORD *)v15 ^ 0x5F6F7270 | *(_DWORD *)(v15 + 3) ^ 0x3030315F) )
        {
          break;
        }
        if ( !(*(_DWORD *)v15 ^ 0x5F303032 | *(_DWORD *)(v15 + 3) ^ 0x6F72705F) )
          goto LABEL_61;
        LOBYTE(v2) = 3;
        if ( !(*(_DWORD *)v15 ^ 0x5F6F7270 | *(_DWORD *)(v15 + 3) ^ 0x3030325F) )
          break;
LABEL_48:
        if ( *(_DWORD *)v15 ^ 0x5F6F7270 | *(_DWORD *)(v15 + 3) ^ 0x3030315F )
        {
          if ( *(_DWORD *)v15 ^ 0x5F6F7270 | *(_DWORD *)(v15 + 3) ^ 0x3030325F )
          {
LABEL_50:
            if ( *(_DWORD *)v15 != 1601139312 )
            {
LABEL_51:
              v17 = v15;
              v2 = infer_pro_tier_from_raw(v15, v16);
              if ( (_BYTE)v2 != 0xFF )
                break;
              sub_1409D99E0(v11, v17, v5);
              v6 = v12;
              v7 = v13;
              LOBYTE(v2) = 6;
              if ( (unsigned __int8)sub_1409D9970(v12, v13, (__int64)aEnterprise_0, 10) )
                goto LABEL_60;
              LOBYTE(v2) = 5;
              if ( (unsigned __int8)sub_1409D9970(v6, v7, (__int64)aBusiness_0, 8) )
                goto LABEL_60;
              LOBYTE(v2) = 7;
              if ( (unsigned __int8)sub_1409D9970(v6, v7, (__int64)aEdu, 3) )
                goto LABEL_60;
              LOBYTE(v2) = 4;
              if ( (unsigned __int8)sub_1409D9970(v6, v7, (__int64)aTeam, 4) )
                goto LABEL_60;
              LOBYTE(v2) = 3;
              if ( (unsigned __int8)sub_1409D9970(v6, v7, (__int64)aPro, 3) )
                goto LABEL_60;
              LOBYTE(v2) = 1;
              if ( (unsigned __int8)sub_1409D9970(v6, v7, (__int64)aPlus, 4) )
                goto LABEL_60;
              if ( (unsigned __int8)sub_1409D9970(v6, v7, (__int64)aFree, 4) )
              {
                v2 = 0;
LABEL_60:
                sub_140009B20(v11);
                break;
              }
              sub_140009B20(v11);
              v8 = v14;
              LOBYTE(v2) = 8;
              if ( v14 )
              {
                v9 = v17;
                goto LABEL_68;
              }
              return v2;
            }
          }
LABEL_61:
          LOBYTE(v2) = 3;
          break;
        }
LABEL_62:
        LOBYTE(v2) = 2;
        break;
      case 8uLL:
        if ( *(_QWORD *)v15 != 0x7373656E69737562LL )
          goto LABEL_48;
        LOBYTE(v2) = 5;
        break;
      case 0xAuLL:
        if ( !(*(_QWORD *)v15 ^ 0x6E776F5F6D616574LL | *(unsigned __int16 *)(v15 + 8) ^ 0x7265LL) )
          goto LABEL_63;
        if ( *(_QWORD *)v15 ^ 0x6972707265746E65LL | *(unsigned __int16 *)(v15 + 8) ^ 0x6573LL )
          goto LABEL_48;
        LOBYTE(v2) = 6;
        break;
      case 0xBuLL:
        LOBYTE(v2) = 3;
        if ( !(*(_QWORD *)v15 ^ 0x5F74706774616863LL | *(_QWORD *)(v15 + 3) ^ 0x6F72705F74706774LL)
          || !(*(_QWORD *)v15 ^ 0x2D74706774616863LL | *(_QWORD *)(v15 + 3) ^ 0x6F72702D74706774LL) )
        {
          break;
        }
        goto LABEL_48;
      case 0xCuLL:
        if ( !(*(_QWORD *)v15 ^ 0x69737365666F7270LL | *(unsigned int *)(v15 + 8) ^ 0x6C616E6FLL) )
          goto LABEL_61;
        goto LABEL_48;
      case 0xEuLL:
        if ( !(*(_QWORD *)v15 ^ 0x7074706774616863LL | *(_QWORD *)(v15 + 6) ^ 0x6574696C6F727074LL) )
          goto LABEL_62;
        if ( *(_QWORD *)v15 ^ 0x746F6E5F6D616574LL | *(_QWORD *)(v15 + 6) ^ 0x72656E776F5F746FLL )
          goto LABEL_48;
        goto LABEL_63;
      case 0xFuLL:
        LOBYTE(v2) = 2;
        if ( !(*(_QWORD *)v15 ^ 0x5F74706774616863LL | *(_QWORD *)(v15 + 7) ^ 0x6574696C6F72705FLL) )
          break;
        if ( !(*(_QWORD *)v15 ^ 0x2D74706774616863LL | *(_QWORD *)(v15 + 7) ^ 0x6574696C6F72702DLL) )
          break;
        if ( !(*(_QWORD *)v15 ^ 0x5F74706774616863LL | *(_QWORD *)(v15 + 7) ^ 0x3030315F6F72705FLL) )
          break;
        if ( !(*(_QWORD *)v15 ^ 0x2D74706774616863LL | *(_QWORD *)(v15 + 7) ^ 0x3030312D6F72702DLL) )
          break;
        LOBYTE(v2) = 3;
        if ( !(*(_QWORD *)v15 ^ 0x5F74706774616863LL | *(_QWORD *)(v15 + 7) ^ 0x3030325F6F72705FLL)
          || !(*(_QWORD *)v15 ^ 0x2D74706774616863LL | *(_QWORD *)(v15 + 7) ^ 0x3030322D6F72702DLL) )
        {
          break;
        }
        goto LABEL_48;
      default:
        if ( v16 >= 7 )
          goto LABEL_48;
        if ( v16 < 4 )
          goto LABEL_51;
        goto LABEL_50;
    }
  }
  else
  {
    LOBYTE(v2) = 8;
  }
  v8 = v14;
  if ( v14 )
  {
    v9 = v15;
LABEL_68:
    sub_140001660(v9, v8, 1);
  }
  return v2;
}