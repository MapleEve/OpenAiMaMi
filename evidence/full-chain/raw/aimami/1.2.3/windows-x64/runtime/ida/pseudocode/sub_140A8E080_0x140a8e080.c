// module: codexmate_lib/core/voice/runtime
// addr: 0x140a8e080
// name: sub_140A8E080
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_140A8E080(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  void (__fastcall *v5)(__int64); // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  void (__fastcall **v12)(__int64); // [rsp+20h] [rbp-10h]
  unsigned __int64 v13; // [rsp+20h] [rbp-10h]
  __int64 v14; // [rsp+28h] [rbp-8h]
  _QWORD *v15; // [rsp+28h] [rbp-8h]

  v1 = *a1;
  result = 10;
  if ( *a1 < 0 )
    result = *a1 ^ 0x8000000000000000uLL;
  switch ( result )
  {
    case 0uLL:
      return sub_14000F440(a1 + 1);
    case 1uLL:
    case 2uLL:
    case 4uLL:
    case 0x23uLL:
      v3 = a1[1];
      if ( v3 )
      {
        v4 = a1[2];
        goto LABEL_6;
      }
      return result;
    case 5uLL:
      v9 = (_QWORD *)a1[1];
      v10 = *v9;
      v15 = v9;
      if ( *v9 != 1 )
        goto LABEL_31;
      goto LABEL_38;
    case 6uLL:
    case 7uLL:
    case 0x18uLL:
      goto LABEL_36;
    case 8uLL:
      v9 = (_QWORD *)a1[5];
      v10 = *v9;
      v15 = v9;
      if ( *v9 == 1 )
      {
LABEL_38:
        sub_140018650(v9 + 1);
      }
      else
      {
LABEL_31:
        if ( !v10 )
        {
          v11 = v15[2];
          if ( v11 )
            sub_140001660(v15[1], v11, 1);
        }
      }
      v6 = 40;
      v7 = 8;
      return sub_140001660(v15, v6, v7);
    case 9uLL:
      v14 = a1[1];
      v12 = (void (__fastcall **)(__int64))a1[2];
      if ( *v12 )
        goto LABEL_15;
      goto LABEL_16;
    case 0xAuLL:
      if ( v1 )
      {
        v8 = a1;
        result = sub_140001660(a1[1], v1, 1);
        a1 = v8;
      }
      v3 = a1[3];
      if ( !v3 )
        return result;
      v4 = a1[4];
      goto LABEL_6;
    case 0xCuLL:
      result = a1[2];
      v15 = (_QWORD *)result;
      if ( !result )
        return result;
      v13 = a1[3];
      if ( *(_QWORD *)v13 )
        (*(void (__fastcall **)(unsigned __int64))v13)(result);
      result = v13;
      v6 = *(_QWORD *)(v13 + 8);
      if ( !v6 )
        return result;
      v7 = *(_QWORD *)(v13 + 16);
      return sub_140001660(v15, v6, v7);
    case 0x11uLL:
      if ( *((_DWORD *)a1 + 2) > 2u )
        return result;
      v3 = a1[2];
      if ( !v3 )
        return result;
      v4 = a1[3];
LABEL_6:
      result = sub_140001660(v4, v3, 1);
      break;
    case 0x12uLL:
    case 0x14uLL:
      if ( *((_DWORD *)a1 + 2) >= 2u )
        return sub_140018650(a1 + 2);
      return result;
    case 0x13uLL:
      if ( a1[1] )
LABEL_36:
        result = sub_140018650(a1 + 1);
      break;
    case 0x1CuLL:
      result = sub_141466DA0(a1 + 1);
      break;
    case 0x1FuLL:
      v14 = a1[1];
      v12 = (void (__fastcall **)(__int64))a1[2];
      if ( *v12 )
LABEL_15:
        (*v12)(v14);
LABEL_16:
      result = (unsigned __int64)v12;
      v5 = v12[1];
      if ( v5 )
        result = sub_140001660(v14, v5, v12[2]);
      break;
    default:
      return result;
  }
  return result;
}