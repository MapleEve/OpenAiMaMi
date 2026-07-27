// module: codexmate_lib/core/voice/runtime
// addr: 0x1405d9ee0
// name: sub_1405D9EE0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405D9EE0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 *v11; // rcx
  char *v12; // rsi
  char v13; // al
  volatile signed __int64 **v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  _QWORD v19[3]; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int64 **v20; // [rsp+40h] [rbp-10h]
  _QWORD *v21; // [rsp+48h] [rbp-8h]
  __int64 v22; // [rsp+50h] [rbp+0h]

  v22 = -2;
  result = *((unsigned __int8 *)a1 + 410);
  v3 = a1;
  v21 = a1;
  switch ( result )
  {
    case 0LL:
      if ( *a1 )
        sub_140001660(a1[1], *a1, 1);
      v4 = v3[3];
      result = 32;
      if ( v4 )
        return sub_140001660(*(_QWORD *)((char *)v3 + result), v4, 1);
      return result;
    case 3LL:
      sub_1405DAF60(a1 + 52);
      goto LABEL_62;
    case 4LL:
      if ( *((_BYTE *)a1 + 624) != 3 )
        goto LABEL_58;
      v7 = *((unsigned __int8 *)v21 + 504);
      switch ( v7 )
      {
        case 5:
          break;
        case 4:
          sub_1405E6D10(v21 + 64);
          break;
        case 3:
          if ( v21[64] != -1 )
            sub_14052DEF0(v21 + 64);
          break;
        default:
          goto LABEL_58;
      }
      sub_1400104F0(v21 + 59);
      goto LABEL_58;
    case 5LL:
      if ( *((_BYTE *)a1 + 624) != 3 )
        goto LABEL_54;
      v8 = *((unsigned __int8 *)v21 + 504);
      switch ( v8 )
      {
        case 5:
          break;
        case 4:
          sub_1405E6D10(v21 + 64);
          break;
        case 3:
          if ( v21[64] != -1 )
            sub_14052DEF0(v21 + 64);
          break;
        default:
          goto LABEL_54;
      }
      sub_1400104F0(v21 + 59);
LABEL_54:
      v12 = (char *)v21[79];
      if ( !*((_BYTE *)v21 + 640) && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(a1, a2) )
        v12[1] = 1;
      v13 = *v12;
      *v12 = 0;
      if ( v13 == 2 )
        WakeByAddressSingle(v12);
      goto LABEL_58;
    case 6LL:
      sub_1405E6D10(a1 + 52);
      goto LABEL_58;
    case 7LL:
      if ( *((_BYTE *)a1 + 648) != 3 )
        goto LABEL_37;
      v5 = *((unsigned __int8 *)v21 + 528);
      switch ( v5 )
      {
        case 5:
          break;
        case 4:
          sub_1405E6D10(v21 + 67);
          break;
        case 3:
          if ( v21[67] != -1 )
            sub_14052DEF0(v21 + 67);
          break;
        default:
          goto LABEL_37;
      }
      sub_1400104F0(v21 + 62);
LABEL_37:
      v9 = v21[52];
      if ( v9 )
        sub_140001660(v21[53], v9, 1);
      goto LABEL_47;
    case 8LL:
      if ( *((_BYTE *)a1 + 424) == 4 )
        sub_1405E6D10(v21 + 54);
      sub_1405D9070((__int64)(v21 + 68));
      goto LABEL_41;
    case 9LL:
      if ( *((_BYTE *)a1 + 624) != 3 )
        goto LABEL_41;
      v6 = *((unsigned __int8 *)v21 + 504);
      switch ( v6 )
      {
        case 5:
          break;
        case 4:
          sub_1405E6D10(v21 + 64);
          break;
        case 3:
          if ( v21[64] != -1 )
            sub_14052DEF0(v21 + 64);
          break;
        default:
          goto LABEL_41;
      }
      sub_1400104F0(v21 + 59);
LABEL_41:
      v10 = v21[50];
      if ( (unsigned __int8)sub_1412F2A80(v10) )
        sub_1412E7580(v10);
      v20 = (volatile signed __int64 **)(v21 + 44);
      sub_140F7E890(v19, v21 + 44);
      if ( v19[0] <= 0xFFFFFFFFFFFFFFFDuLL && v19[0] )
        sub_140001660(v19[1], v19[0], 1);
      sub_1405E6230(v20);
LABEL_47:
      v20 = (volatile signed __int64 **)(v21 + 43);
      sub_140892E70(v21 + 43);
      v11 = (__int64 *)v20;
      if ( !_InterlockedDecrement64(*v20) )
        sub_1405742E0(v11);
      *((_BYTE *)v21 + 414) = 0;
LABEL_58:
      if ( *((_BYTE *)v21 + 413) )
      {
        v20 = (volatile signed __int64 **)(v21 + 38);
        sub_140893210(v21 + 38);
        v14 = v20;
        if ( !_InterlockedDecrement64(*v20) )
          sub_140574470(v14);
      }
      v15 = v21;
      *((_BYTE *)v21 + 413) = 0;
      sub_1405E7D00(v15 + 25);
LABEL_62:
      v3 = v21;
      v16 = v21[12];
      if ( v16 )
        sub_140001660(v21[13], v16, 1);
      v17 = v3[15];
      if ( v17 )
        sub_140001660(v3[16], v17, 1);
      v18 = v3[18];
      if ( v18 )
        sub_140001660(v3[19], v18, 1);
      v4 = v3[21];
      result = 176;
      if ( v4 )
        return sub_140001660(*(_QWORD *)((char *)v3 + result), v4, 1);
      return result;
    default:
      return result;
  }
}