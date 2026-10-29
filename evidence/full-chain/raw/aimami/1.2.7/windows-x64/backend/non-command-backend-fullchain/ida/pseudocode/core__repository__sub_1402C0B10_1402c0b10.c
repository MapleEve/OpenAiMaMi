// win 1.2.7 | module src/core/repository.rs | ea 0x1402c0b10 | name sub_1402C0B10
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402C0B10(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]
  unsigned __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]

  v21 = -2;
  v3 = sub_140E91160(a1, a2);
  sub_1416AA4F0(&v17, v3, v4);
  v5 = v19;
  if ( !v19 )
  {
    LOBYTE(v2) = 8;
    goto LABEL_77;
  }
  switch ( v19 )
  {
    case 3uLL:
      if ( !(*(_WORD *)v18 ^ 0x7270 | *(unsigned __int8 *)(v18 + 2) ^ 0x6F) )
        goto LABEL_58;
      if ( *(_WORD *)v18 ^ 0x6465 | *(unsigned __int8 *)(v18 + 2) ^ 0x75 )
        goto LABEL_51;
      LOBYTE(v2) = 7;
      goto LABEL_77;
    case 4uLL:
      switch ( *(_DWORD *)v18 )
      {
        case 0x65657266:
          v2 = 0;
          break;
        case 0x73756C70:
          LOBYTE(v2) = 1;
          break;
        case 0x6D616574:
LABEL_60:
          LOBYTE(v2) = 4;
          break;
        default:
          goto LABEL_50;
      }
      goto LABEL_77;
    case 6uLL:
      LOBYTE(v2) = 2;
      if ( !(*(_DWORD *)v18 ^ 0x705F7835 | *(unsigned __int16 *)(v18 + 4) ^ 0x6F72)
        || !(*(_DWORD *)v18 ^ 0x5F6F7270 | *(unsigned __int16 *)(v18 + 4) ^ 0x7835)
        || !(*(_DWORD *)v18 ^ 0x70207835 | *(unsigned __int16 *)(v18 + 4) ^ 0x6F72)
        || !(*(_DWORD *)v18 ^ 0x206F7270 | *(unsigned __int16 *)(v18 + 4) ^ 0x7835) )
      {
        goto LABEL_77;
      }
      goto LABEL_50;
    case 7uLL:
      LOBYTE(v2) = 2;
      if ( !(*(_DWORD *)v18 ^ 0x6C6F7270 | *(_DWORD *)(v18 + 3) ^ 0x6574696C) )
        goto LABEL_77;
      if ( !(*(_DWORD *)v18 ^ 0x5F783032 | *(_DWORD *)(v18 + 3) ^ 0x6F72705F)
        || !(*(_DWORD *)v18 ^ 0x5F6F7270 | *(_DWORD *)(v18 + 3) ^ 0x7830325F)
        || !(*(_DWORD *)v18 ^ 0x20783032 | *(_DWORD *)(v18 + 3) ^ 0x6F727020)
        || !(*(_DWORD *)v18 ^ 0x206F7270 | *(_DWORD *)(v18 + 3) ^ 0x78303220) )
      {
        goto LABEL_58;
      }
      if ( !(*(_DWORD *)v18 ^ 0x5F303031 | *(_DWORD *)(v18 + 3) ^ 0x6F72705F)
        || !(*(_DWORD *)v18 ^ 0x5F6F7270 | *(_DWORD *)(v18 + 3) ^ 0x3030315F) )
      {
        goto LABEL_77;
      }
      if ( !(*(_DWORD *)v18 ^ 0x5F303032 | *(_DWORD *)(v18 + 3) ^ 0x6F72705F) )
        goto LABEL_58;
      LOBYTE(v2) = 3;
      if ( !(*(_DWORD *)v18 ^ 0x5F6F7270 | *(_DWORD *)(v18 + 3) ^ 0x3030325F) )
        goto LABEL_77;
LABEL_48:
      if ( !(*(_DWORD *)v18 ^ 0x5F6F7270 | *(_DWORD *)(v18 + 3) ^ 0x3030315F) )
      {
LABEL_59:
        LOBYTE(v2) = 2;
        goto LABEL_77;
      }
      if ( !(*(_DWORD *)v18 ^ 0x5F6F7270 | *(_DWORD *)(v18 + 3) ^ 0x3030325F) )
        goto LABEL_58;
LABEL_50:
      if ( *(_DWORD *)v18 == 1601139312 )
      {
LABEL_58:
        LOBYTE(v2) = 3;
        goto LABEL_77;
      }
LABEL_51:
      v20 = v18;
      v2 = sub_1402C03B0(v18, v19);
      if ( (_BYTE)v2 != 0xFF )
        goto LABEL_77;
      sub_1402C0080(&v14, v20, v5);
      v6 = v15;
      v7 = v16;
      if ( v16 )
      {
        v8 = 0;
        while ( *(_QWORD *)(v15 + v8 + 16) != 10
             || **(_QWORD **)(v15 + v8 + 8) ^ 0x6972707265746E65LL
              | *(unsigned __int16 *)(*(_QWORD *)(v15 + v8 + 8) + 8LL) ^ 0x6573LL )
        {
          v8 += 24;
          if ( 24 * v16 == v8 )
            goto LABEL_61;
        }
        LOBYTE(v2) = 6;
      }
      else
      {
LABEL_61:
        LOBYTE(v2) = 5;
        if ( !(unsigned __int8)sub_1402C0010(v15, v16, (__int64)aBusiness_0, 8) )
        {
          LOBYTE(v2) = 7;
          if ( !(unsigned __int8)sub_1402C0010(v6, v7, (__int64)aEdu, 3) )
          {
            LOBYTE(v2) = 4;
            if ( !(unsigned __int8)sub_1402C0010(v6, v7, (__int64)aTeam, 4) )
            {
              LOBYTE(v2) = 3;
              if ( !(unsigned __int8)sub_1402C0010(v6, v7, (__int64)aPro, 3) )
              {
                LOBYTE(v2) = 1;
                if ( !(unsigned __int8)sub_1402C0010(v6, v7, (__int64)aPlus, 4) )
                {
                  if ( !(unsigned __int8)sub_1402C0010(v6, v7, (__int64)aFree, 4) )
                  {
                    sub_140025530(&v14);
                    v11 = v17;
                    LOBYTE(v2) = 8;
                    if ( !v17 )
                      return v2;
                    v12 = v20;
                    goto LABEL_79;
                  }
                  v2 = 0;
                }
              }
            }
          }
        }
      }
      if ( v7 )
      {
        v9 = (_QWORD *)(v6 + 8);
        do
        {
          v10 = *(v9 - 1);
          if ( v10 )
            sub_140001660(*v9, v10, 1);
          v9 += 3;
          --v7;
        }
        while ( v7 );
      }
      if ( v14 )
        sub_140001660(v6, 24 * v14, 8);
LABEL_77:
      v11 = v17;
      if ( v17 )
      {
        v12 = v18;
LABEL_79:
        sub_140001660(v12, v11, 1);
      }
      return v2;
    case 8uLL:
      if ( *(_QWORD *)v18 != 0x7373656E69737562LL )
        goto LABEL_48;
      LOBYTE(v2) = 5;
      goto LABEL_77;
    case 0xAuLL:
      if ( !(*(_QWORD *)v18 ^ 0x6E776F5F6D616574LL | *(unsigned __int16 *)(v18 + 8) ^ 0x7265LL) )
        goto LABEL_60;
      if ( *(_QWORD *)v18 ^ 0x6972707265746E65LL | *(unsigned __int16 *)(v18 + 8) ^ 0x6573LL )
        goto LABEL_48;
      LOBYTE(v2) = 6;
      goto LABEL_77;
    case 0xBuLL:
      LOBYTE(v2) = 3;
      if ( !(*(_QWORD *)v18 ^ 0x5F74706774616863LL | *(_QWORD *)(v18 + 3) ^ 0x6F72705F74706774LL)
        || !(*(_QWORD *)v18 ^ 0x2D74706774616863LL | *(_QWORD *)(v18 + 3) ^ 0x6F72702D74706774LL) )
      {
        goto LABEL_77;
      }
      goto LABEL_48;
    case 0xCuLL:
      if ( !(*(_QWORD *)v18 ^ 0x69737365666F7270LL | *(unsigned int *)(v18 + 8) ^ 0x6C616E6FLL) )
        goto LABEL_58;
      goto LABEL_48;
    case 0xEuLL:
      if ( !(*(_QWORD *)v18 ^ 0x7074706774616863LL | *(_QWORD *)(v18 + 6) ^ 0x6574696C6F727074LL) )
        goto LABEL_59;
      if ( *(_QWORD *)v18 ^ 0x746F6E5F6D616574LL | *(_QWORD *)(v18 + 6) ^ 0x72656E776F5F746FLL )
        goto LABEL_48;
      goto LABEL_60;
    case 0xFuLL:
      LOBYTE(v2) = 2;
      if ( !(*(_QWORD *)v18 ^ 0x5F74706774616863LL | *(_QWORD *)(v18 + 7) ^ 0x6574696C6F72705FLL) )
        goto LABEL_77;
      if ( !(*(_QWORD *)v18 ^ 0x2D74706774616863LL | *(_QWORD *)(v18 + 7) ^ 0x6574696C6F72702DLL) )
        goto LABEL_77;
      if ( !(*(_QWORD *)v18 ^ 0x5F74706774616863LL | *(_QWORD *)(v18 + 7) ^ 0x3030315F6F72705FLL) )
        goto LABEL_77;
      if ( !(*(_QWORD *)v18 ^ 0x2D74706774616863LL | *(_QWORD *)(v18 + 7) ^ 0x3030312D6F72702DLL) )
        goto LABEL_77;
      LOBYTE(v2) = 3;
      if ( !(*(_QWORD *)v18 ^ 0x5F74706774616863LL | *(_QWORD *)(v18 + 7) ^ 0x3030325F6F72705FLL)
        || !(*(_QWORD *)v18 ^ 0x2D74706774616863LL | *(_QWORD *)(v18 + 7) ^ 0x3030322D6F72702DLL) )
      {
        goto LABEL_77;
      }
      goto LABEL_48;
    default:
      if ( v19 >= 7 )
        goto LABEL_48;
      if ( v19 < 4 )
        goto LABEL_51;
      goto LABEL_50;
  }
}
