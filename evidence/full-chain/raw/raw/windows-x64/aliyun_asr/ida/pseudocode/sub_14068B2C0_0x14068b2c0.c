// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x14068b2c0
// name: sub_14068B2C0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14068B2C0(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // sf
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  signed __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // [rsp+28h] [rbp-18h]
  __int64 v18; // [rsp+30h] [rbp-10h]
  unsigned __int8 *v19; // [rsp+38h] [rbp-8h]

  result = *a1;
  switch ( *a1 )
  {
    case 0u:
    case 1u:
      v3 = *((_QWORD *)a1 + 1);
      if ( v3 )
      {
        v4 = *((_QWORD *)a1 + 2);
        v5 = 2 * v3;
        goto LABEL_32;
      }
      return result;
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 9u:
    case 0xAu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
      return result;
    case 8u:
      result = *((_QWORD *)a1 + 1);
      LOBYTE(result) = result < (__int64)0x8000000000000015uLL || result == -1;
      if ( !(_BYTE)result )
      {
        v6 = *((__int64 **)a1 + 2);
        v19 = a1;
        v17 = *((_QWORD *)a1 + 3);
        v18 = 0;
        while ( v17 != v18 )
        {
          ++v18;
          v7 = v6 + 14;
          sub_1402C6FA0(v6);
          v6 = v7;
        }
        result = *((_QWORD *)v19 + 1);
        if ( result )
          return sub_140001660(*((_QWORD *)v19 + 2), 112 * result, 8);
      }
      return result;
    case 0xBu:
      v8 = *((_QWORD *)a1 + 1);
      v9 = v8 ^ 0x8000000000000000uLL;
      v10 = v8 < 0;
      result = 16;
      if ( v10 )
        result = v9;
      switch ( result )
      {
        case 0LL:
        case 1LL:
        case 2LL:
        case 3LL:
        case 4LL:
        case 5LL:
        case 6LL:
        case 7LL:
        case 8LL:
        case 9LL:
        case 10LL:
        case 11LL:
        case 12LL:
        case 15LL:
        case 17LL:
        case 19LL:
        case 20LL:
          return result;
        case 13LL:
          goto LABEL_22;
        case 14LL:
          goto LABEL_28;
        case 16LL:
          if ( !a1[32] )
          {
            v16 = *((_QWORD *)a1 + 5);
            if ( v16 != -1 )
            {
              if ( v16 )
                sub_140001660(*((_QWORD *)a1 + 6), v16, 1);
            }
          }
          sub_140334760(a1 + 8);
          result = *((_QWORD *)a1 + 1);
          if ( !result )
            return result;
          v4 = *((_QWORD *)a1 + 2);
          break;
        case 18LL:
          v15 = *((_QWORD *)a1 + 5);
          if ( v15 >= (__int64)0x8000000000000002uLL && v15 )
            sub_140001660(*((_QWORD *)a1 + 6), 8 * v15, 8);
          sub_140334AC0((__int64)(a1 + 16));
          result = *((_QWORD *)a1 + 2);
          if ( !result )
            return result;
          v4 = *((_QWORD *)a1 + 3);
          break;
        default:
          goto LABEL_35;
      }
      v5 = 24 * result;
      v14 = 8;
      return sub_140001660(v4, v5, v14);
    case 0xCu:
      result = *((_QWORD *)a1 + 1);
      if ( result == 7 )
      {
LABEL_35:
        result = *((_QWORD *)a1 + 2);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)result) )
          return sub_140573550((__int64 *)a1 + 2);
      }
      else if ( (_DWORD)result == 3 )
      {
LABEL_28:
        v13 = *((_QWORD *)a1 + 2);
        if ( v13 )
          result = sub_140001660(*((_QWORD *)a1 + 3), v13, 1);
        v5 = *((_QWORD *)a1 + 5);
        if ( v5 )
        {
          v4 = *((_QWORD *)a1 + 6);
LABEL_32:
          v14 = 1;
          return sub_140001660(v4, v5, v14);
        }
      }
      else if ( (_DWORD)result == 2 )
      {
LABEL_22:
        v11 = *((_QWORD *)a1 + 2);
        if ( v11 )
          result = sub_140001660(*((_QWORD *)a1 + 3), v11, 1);
        v12 = *((_QWORD *)a1 + 5);
        if ( v12 )
          return sub_140001660(*((_QWORD *)a1 + 6), 16 * v12, 8);
      }
      return result;
    case 0xDu:
      v5 = *((_QWORD *)a1 + 1);
      if ( !v5 )
        return result;
      v4 = *((_QWORD *)a1 + 2);
      goto LABEL_32;
    default:
      result = *((_QWORD *)a1 + 1);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)result) )
        return sub_140573550((__int64 *)a1 + 1);
      return result;
  }
}