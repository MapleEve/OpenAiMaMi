// module: codexmate_lib/core/relay/router_transition
// addr: 0x14084bff0
// name: sub_14084BFF0
// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_14084BFF0(_QWORD *a1, _QWORD *a2, __int64 a3, char a4)
{
  _BYTE *v7; // rcx
  _BYTE *v8; // r8
  void *v9; // rax
  _BYTE v11[292]; // [rsp+20h] [rbp-268h] BYREF
  char v12; // [rsp+144h] [rbp-144h]
  char v13; // [rsp+145h] [rbp-143h]
  _BYTE v14[292]; // [rsp+148h] [rbp-140h] BYREF
  char v15; // [rsp+26Ch] [rbp-1Ch]
  char v16; // [rsp+26Dh] [rbp-1Bh]

  if ( *(_DWORD *)a3 != 1 )
  {
    sub_14085A1E0((__int64)v11, (__int64)a2);
    if ( v12 == 1 && a4 == v13 )
    {
      *a1 = -1;
      v7 = v11;
      goto LABEL_9;
    }
    v12 = 1;
    v13 = a4;
    v8 = v11;
LABEL_14:
    sub_1408582D0((__int64)a1, a2, (__int64)v8);
    return a1;
  }
  if ( *(_BYTE *)(a3 + 56) )
  {
    sub_14085A1E0((__int64)v14, (__int64)a2);
    if ( !v15 && a4 == v16 )
    {
      *a1 = -1;
      v7 = v14;
LABEL_9:
      sub_140018740(v7);
      return a1;
    }
    v15 = 0;
    v16 = a4;
    v8 = v14;
    goto LABEL_14;
  }
  nullsub_1(a1);
  v9 = (void *)sub_140001650(80, 1);
  if ( !v9 )
    sub_1416C2D4B(1, 80);
  qmemcpy(v9, "NativeOff was not applied because no verified ChatGPT write window was available", 80);
  *a1 = 10;
  a1[1] = 80;
  a1[2] = v9;
  a1[3] = 80;
  return a1;
}