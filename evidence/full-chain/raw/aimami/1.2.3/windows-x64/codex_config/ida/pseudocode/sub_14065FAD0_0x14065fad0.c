// module: codexmate_lib/core/codex_config
// addr: 0x14065fad0
// name: sub_14065FAD0
// win 1.2.1 | module src/core/codex_config.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_14065FAD0(unsigned __int64 a1)
{
  char result; // al
  unsigned __int64 v2; // rcx

  switch ( a1 & 3 )
  {
    case 0uLL:
      return *(_BYTE *)(a1 + 16);
    case 1uLL:
      return *(_BYTE *)(a1 + 15);
    case 2uLL:
      v2 = HIDWORD(a1);
      result = 1;
      if ( (int)v2 <= 1120 )
      {
        if ( (int)v2 <= 335 )
        {
          switch ( (int)v2 )
          {
            case 2:
            case 3:
            case 15:
            case 53:
            case 67:
              result = 0;
              break;
            case 5:
              return result;
            case 8:
            case 14:
              result = 38;
              break;
            case 17:
              result = 31;
              break;
            case 19:
              result = 17;
              break;
            case 39:
            case 112:
              result = 24;
              break;
            case 80:
            case 183:
              result = 12;
              break;
            case 87:
              goto LABEL_11;
            case 109:
            case 232:
              goto LABEL_38;
            case 120:
              result = 36;
              break;
            case 121:
            case 258:
              return 22;
            case 123:
            case 161:
            case 206:
              result = 33;
              break;
            case 132:
              result = 25;
              break;
            case 145:
              result = 16;
              break;
            case 170:
              result = 28;
              break;
            case 223:
              result = 27;
              break;
            case 267:
              result = 14;
              break;
            default:
              return 41;
          }
          return result;
        }
        if ( (int)v2 > 994 )
        {
          if ( (_DWORD)v2 != 995 && (_DWORD)v2 != 1053 )
            return 41;
        }
        else
        {
          if ( (_DWORD)v2 == 336 )
            return 15;
          if ( (_DWORD)v2 != 594 )
            return 41;
        }
        return 22;
      }
      if ( (int)v2 <= 10012 )
      {
        if ( (int)v2 > 1920 )
        {
          if ( (int)v2 > 7039 )
          {
            if ( (int)v2 > 8225 )
            {
              if ( (_DWORD)v2 != 8226 && (_DWORD)v2 != 9705 )
                return 41;
            }
            else if ( (_DWORD)v2 != 7040 && (_DWORD)v2 != 8014 )
            {
              return 41;
            }
            return 22;
          }
          if ( (_DWORD)v2 == 1921 )
            return 18;
          if ( (_DWORD)v2 == 5910 || (_DWORD)v2 == 7012 )
            return 22;
        }
        else
        {
          if ( (int)v2 <= 1230 )
          {
            if ( (_DWORD)v2 != 1121 )
            {
              if ( (_DWORD)v2 == 1131 )
                return 30;
              if ( (_DWORD)v2 == 1142 )
                return 32;
              return 41;
            }
            return 22;
          }
          if ( (int)v2 <= 1294 )
          {
            if ( (_DWORD)v2 == 1231 )
              return 5;
            if ( (_DWORD)v2 == 1232 )
              return 4;
            return 41;
          }
          if ( (_DWORD)v2 == 1295 )
            return 26;
          if ( (_DWORD)v2 == 1460 )
            return 22;
        }
        return 41;
      }
      switch ( (int)v2 )
      {
        case 10013:
          return result;
        case 10014:
        case 10015:
        case 10016:
        case 10017:
        case 10018:
        case 10019:
        case 10020:
        case 10021:
        case 10023:
        case 10024:
        case 10025:
        case 10026:
        case 10027:
        case 10028:
        case 10029:
        case 10030:
        case 10031:
        case 10032:
        case 10033:
        case 10034:
        case 10036:
        case 10037:
        case 10038:
        case 10039:
        case 10040:
        case 10041:
        case 10042:
        case 10043:
        case 10044:
        case 10045:
        case 10046:
        case 10047:
        case 10052:
        case 10055:
        case 10056:
        case 10059:
        case 10062:
        case 10063:
        case 10064:
        case 10066:
        case 10067:
        case 10068:
          return 41;
        case 10022:
LABEL_11:
          result = 20;
          break;
        case 10035:
          result = 13;
          break;
        case 10048:
          result = 8;
          break;
        case 10049:
          result = 9;
          break;
        case 10050:
          result = 10;
          break;
        case 10051:
          return 5;
        case 10053:
          result = 6;
          break;
        case 10054:
          result = 3;
          break;
        case 10057:
          result = 7;
          break;
        case 10058:
LABEL_38:
          result = 11;
          break;
        case 10060:
          return 22;
        case 10061:
          result = 2;
          break;
        case 10065:
          return 4;
        case 10069:
          return 26;
        default:
          if ( (unsigned int)(v2 - 15402) >= 2 && (_DWORD)v2 != 13805 )
            return 41;
          return 22;
      }
      return result;
    case 3uLL:
      return BYTE4(a1);
  }
}