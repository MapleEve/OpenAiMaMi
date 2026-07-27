// module: codexmate_lib/core/voice/runtime
// addr: 0x140884530
// name: sub_140884530
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140884530(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi

  if ( !(a2 | a3) )
    goto LABEL_16;
  if ( (a3 & 0xF) != 0 )
  {
    if ( a2 <= 999 )
    {
      switch ( a2 )
      {
        case 91LL:
        case 92LL:
          v3 = 8;
          goto LABEL_15;
        case 93LL:
        case 94LL:
        case 95LL:
        case 96LL:
        case 97LL:
        case 98LL:
        case 99LL:
        case 100LL:
        case 101LL:
        case 102LL:
        case 103LL:
        case 104LL:
        case 105LL:
        case 106LL:
        case 107LL:
        case 108LL:
        case 109LL:
        case 110LL:
        case 111LL:
        case 112LL:
        case 113LL:
        case 114LL:
        case 115LL:
        case 116LL:
        case 117LL:
        case 118LL:
        case 119LL:
        case 120LL:
        case 121LL:
        case 122LL:
        case 123LL:
        case 124LL:
        case 125LL:
        case 126LL:
        case 127LL:
        case 128LL:
        case 129LL:
        case 130LL:
        case 131LL:
        case 132LL:
        case 133LL:
        case 134LL:
        case 135LL:
        case 136LL:
        case 137LL:
        case 138LL:
        case 139LL:
        case 140LL:
        case 141LL:
        case 142LL:
        case 143LL:
        case 144LL:
        case 145LL:
        case 146LL:
        case 147LL:
        case 148LL:
        case 149LL:
        case 150LL:
        case 151LL:
        case 152LL:
        case 153LL:
        case 154LL:
        case 155LL:
        case 156LL:
        case 157LL:
        case 158LL:
        case 159LL:
          goto LABEL_18;
        case 160LL:
        case 161LL:
          v3 = 1;
          goto LABEL_15;
        case 162LL:
        case 163LL:
          v3 = 2;
          goto LABEL_15;
        case 164LL:
        case 165LL:
          v3 = 4;
LABEL_15:
          if ( (v3 | (unsigned __int64)(a3 & 0xF)) >= 2 && (v3 | a3 & 0xF) != v3 )
            goto LABEL_16;
          goto LABEL_19;
        default:
          if ( a2 == 20 )
            goto LABEL_19;
LABEL_18:
          if ( (a3 & 0xE) == 0 )
            goto LABEL_19;
          goto LABEL_16;
      }
    }
    goto LABEL_19;
  }
  if ( (unsigned __int64)(a2 - 163) < 3 || a2 == 20 || (unsigned __int64)(a2 - 112) < 0xC || a2 >= 1002 )
  {
LABEL_16:
    *a1 = -1;
    return a1;
  }
  if ( a3 )
  {
LABEL_19:
    v7 = a1;
    nullsub_1(a1);
    v8 = sub_140001650(129, 1);
    if ( !v8 )
      sub_1416C2D4B(1, 129);
    v9 = v8;
    sub_141684120(v8, aShiftFnCmdCtrl, 129);
    a1 = v7;
    *v7 = 129;
    v7[1] = v9;
    v7[2] = 129;
    return a1;
  }
  v4 = a1;
  nullsub_1(a1);
  v5 = sub_140001650(285, 1);
  if ( !v5 )
    sub_1416C2D4B(1, 285);
  v6 = v5;
  sub_141684120(v5, aShiftCapslockC, 285);
  a1 = v4;
  *v4 = 285;
  v4[1] = v6;
  v4[2] = 285;
  return a1;
}